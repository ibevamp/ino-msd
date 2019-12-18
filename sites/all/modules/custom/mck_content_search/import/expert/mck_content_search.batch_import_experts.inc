<?php

function mck_content_search_batch_import_experts() {
  $output = array();
  $form = drupal_get_form('mck_content_search_batch_import_experts_form');
  $output[] = render($form);
  return implode('<br>', $output);
}

function mck_content_search_batch_import_experts_form($form, &$form_state) {
  $form['batch'] = array(
    '#type' => 'fieldset',
    '#title' => t('Batch Import experts'),
    '#description' => '',
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#weight' => 0,
    '#tree' => TRUE,
  );
  $form['batch']['csv_file'] = array (
    '#title' => t('CSV file'),
    '#type' => 'managed_file',
    '#required' => FALSE,
    '#upload_location' => 'public://experts/tmp',
    '#multiple' => FALSE,
    '#upload_validators' => array(
      'file_validate_extensions' => array('csv'),
    )
  );
  $form['batch']['images_zip_file'] = array (
    '#title' => t('Images zip file'),
    '#type' => 'managed_file',
    '#required' => FALSE,
    '#upload_location' => 'public://experts/tmp',
    '#multiple' => FALSE,
    '#upload_validators' => array(
      'file_validate_extensions' => array('zip'),
    ),
    '#description' => t('Please upload a zip file that contains all the images.'),
  );
  $form['batch']['max_numbers'] = array (
    '#title' => t('Numbers'),
    '#type' => 'textfield',
    '#required' => FALSE,
    '#default_value' => '',
    '#description' => t('How many records do you want to import? Leave blank to import all.'),
  );
  $form['batch']['confirm'] = array (
    '#type' => 'select',
    '#title' => ('Are you sure to run this batch?'),
    '#options' => array(
      '0' => t('No'),
      '1' => t('Yes'),
    ),
  );
  $form['batch']['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Import'),
    '#tree' => TRUE,
  );
  $form['batch']['actions']['delete_all'] = array(
    '#type' => 'submit',
    '#value' => t('Delete all'),
    '#tree' => TRUE,
  );
  return $form;
}

function mck_content_search_batch_import_experts_form_validate($form, &$form_state) {
  $values = $form_state['values'];
  switch ($values['op']) {
    case t('Import'):
      if (!$values['batch']['csv_file']) {
        form_set_error('batch][csv_file', t('Please upload a .csv file.'));
      }
      if (!$values['batch']['confirm']) {
        form_set_error('batch][confirm', t('Are you sure to run this batch?'));
      }
      break;

    case t('Delete all'):
      if (!$values['batch']['confirm']) {
        form_set_error('batch][confirm', t('Are you sure to run this batch?'));
      }
      break;
  }
}

function mck_content_search_batch_import_experts_form_submit($form, &$form_state) {
  $values = $form_state['values'];

  switch ($values['op']) {
    case t('Import'):
      $max_numbers = !empty($values['batch']['max_numbers']) ? $values['batch']['max_numbers'] : 9999999;
      $csv_file = file_load($values['batch']['csv_file']);
      $csv_file_url = file_create_url($csv_file->uri);

      $images_zip_file = file_load($values['batch']['images_zip_file']);

      // Unzip the .zip file to /sites/default/experts/tmp/images directory.
      mck_util_file_extract($images_zip_file, 'public://experts/tmp/images');

      // Loads the .csv file into array.
      $contents = mck_util_csv_load_by_path($csv_file_url);

      // Removes the header row.
      if (isset($contents[0])) {
        unset($contents[0]);
      }

      // Deletes the csv file.
      if ($csv_file) {
        file_delete($csv_file);
      }

      // Deletes the images zip file.
      if ($images_zip_file) {
        file_delete($images_zip_file);
      }

      $operations = array();
      // Operations for importing entities.
      foreach ($contents as $key => $content) {
        if ($key > $max_numbers) {
          break;
        }
        $operations[] = array(
          'mck_content_search_batch_import_experts_process',
          array(
            array(
              'content' => $content,
            ),
          ),
        );
      }
      $batch = array(
        'operations' => $operations,
        'finished' => 'mck_content_search_batch_import_experts_finished',
        'title' => t('Importing'),
        'file' => drupal_get_path('module', 'mck_content_search') . '/import/expert/mck_content_search.batch_import_experts.inc',
      );
      batch_set($batch);
      break;

    case t('Delete all'):
      // Deletes expert entities.
      $query = new EntityFieldQuery();
      $query
        ->entityCondition('entity_type', 'expert')
        ->entityCondition('bundle', 'expert');
      $result = $query->execute();
      if (isset($result['expert'])) {
        foreach ($result['expert'] as $expert) {
          $expert = (array) $expert;
          entity_delete('expert', $expert['id']);
        }
      }

      // Deletes expert taxonomies.
      $fields = [
        ['field_name' => 'field_expert_affiliation', 'taxonomy_name' => 'expert_affiliation'],
        ['field_name' => 'field_expert_study', 'taxonomy_name' => 'expert_study'],
        ['field_name' => 'field_expert_designation', 'taxonomy_name' => 'expert_designation'],
        ['field_name' => 'field_expert_joined_ideation', 'taxonomy_name' => 'expert_joined_ideation'],
        ['field_name' => 'field_expert_primary_at', 'taxonomy_name' => 'expert_primary_at'],
        ['field_name' => 'field_expert_primary_vt', 'taxonomy_name' => 'expert_primary_vt'],
      ];
      foreach ($fields as $field) {
        $voc = taxonomy_vocabulary_machine_name_load($field['taxonomy_name']);
        $terms = taxonomy_get_tree($voc->vid);
        if (!empty($terms)) {
          foreach ($terms as $term) {
            taxonomy_term_delete($term->tid);
          }
        }
      }

      // Deletes the legacy uploaded csv files and images zip files.
      $query = '
SELECT fm.* 
FROM {file_managed} AS fm 
WHERE fm.status = 0
  AND (fm.uri LIKE :like1)
';
      $result = db_query($query, [
        'like1' => db_like('public://experts') . '%',
      ]);
      $records = [];
      foreach ($result as $record) {
        $records[] = $record;
      }

      foreach ($records as $record) {
        file_delete(file_load($record->fid));
      }

      // Deletes the unzipped images.
      file_unmanaged_delete_recursive('public://experts/tmp/images');
      break;
  }
}

function mck_content_search_batch_import_experts_process($data, &$context) {
  $content = $data['content'];
  $context['message'] = t('Importing content...');

  $fullname = trim($content['field_expert_fullname']);
  if (empty($fullname)) {
    return FALSE;
  }

//  $primary_vt = trim($content['field_expert_primary_vt']);
//  $primary_vt = explode(';', $primary_vt);
//  $primary_vt_tids = [];
//  foreach ($primary_vt as $tag) {
//    $term = mck_content_search_get_term_by_name($tag, 'expert_primary_vt');
//    if ($term->tid) {
//      $primary_vt_tids[] = $term->tid;
//    }
//  }

  // If the expert is existing, then we will not import it again.
  $query = new EntityFieldQuery();
  $query
    ->entityCondition('entity_type', 'expert')
    ->entityCondition('bundle', 'expert')
    ->fieldCondition('field_expert_fullname', 'value', $fullname)
  ;
//  if (count($primary_vt_tids) > 0) {
//    $query->fieldCondition('field_expert_primary_vt', 'target_id', $primary_vt_tids, 'IN');
//  }
  $result = $query->execute();

  // Updates the expert if it exists.
  if (count($result) > 0) {
    $entity = NULL;
    foreach ($result['expert'] as $key => $item) {
      $entities = entity_load('expert', [$key]);
      foreach ($entities as $k => $item) {
        $entity = $item;
        break;
      }
      break;
    }
  }
  // Creates a new expert if it doesn't exist.
  else {
    $entity = entity_create('expert', array(
      'type' => 'expert',
    ));
  }
  $wrapper = entity_metadata_wrapper('expert', $entity);

  // Title.
  $wrapper->title->set($fullname);

  // Text fields.
  $fields = [
    ['field_name' => 'field_expert_no'],
    ['field_name' => 'field_expert_fullname'],
    ['field_name' => 'field_expert_contact_point'],
  ];
  foreach ($fields as $k => $field) {
    $field_name = $field['field_name'];
    $value = trim($content[$field_name]);
    $wrapper->{$field_name}->set($value);
  }

  // Textarea fields.
  $fields = [
    ['field_name' => 'field_expert_description'],
  ];
  foreach ($fields as $field) {
    $field_name = $field['field_name'];
    $value = trim($content[$field_name]);
    $wrapper->{$field_name}->set(['value' => $value]);
  }

  // Taxonomy fields.
  $fields = [
    ['field_name' => 'field_expert_affiliation', 'field_label' => 'Affiliation', 'taxonomy_name' => 'expert_affiliation'],
    ['field_name' => 'field_expert_study', 'field_label' => 'Study', 'taxonomy_name' => 'expert_study'],
    ['field_name' => 'field_expert_designation', 'field_label' => 'Designation', 'taxonomy_name' => 'expert_designation'],
    ['field_name' => 'field_expert_joined_ideation', 'field_label' => 'Joined ideation', 'taxonomy_name' => 'expert_joined_ideation'],
    ['field_name' => 'field_expert_primary_at', 'field_label' => 'Primary account tag', 'taxonomy_name' => 'expert_primary_at'],
    ['field_name' => 'field_expert_primary_vt', 'field_label' => 'Primary vertical tag', 'taxonomy_name' => 'expert_primary_vt'],
  ];
  foreach ($fields as $field) {
    $terms = [];
    $field_name = $field['field_name'];
    foreach (explode(';', $content[$field_name]) as $name) {
      $name = trim($name);
      if (empty($name)) {
        continue;
      }
      $name = substr($name, 0, 255);
      $term = mck_content_search_get_term_by_name($name, $field['taxonomy_name']);
      // If the term exists, assign it to the $terms.
      if ($term && $term->tid) {
        $terms[] = $term->tid;
      }
      // If the term doesn't exist, create it first then assign it to the $terms.
      else {
        $vocabulary = taxonomy_vocabulary_machine_name_load($field['taxonomy_name']);
        if ($vocabulary->vid) {
          $term = new stdClass();
          $term->name = $name;
          $term->vid = $vocabulary->vid;
          taxonomy_term_save($term);
          $terms[] = $term->tid;
        }
      }
    }
    $wrapper->$field_name->set($terms);
  }

//  // Joined ideation.
//  $joined_ideation = '';
//  if (!empty($content['field_expert_joined_ideation'])) {
//    $joined_ideation = strtolower($content['field_expert_joined_ideation']) == 'y' ? 'yes' : 'no';
//  }
//  $wrapper->field_expert_joined_ideation->set($joined_ideation);

  // Image.
  if (!empty($content['field_expert_image'])) {
    $file = mck_util_file_download([
      'url' => file_create_url('public://experts/tmp/images') . '/' . $content['field_expert_image'],
      'directory' => 'public://experts/images',
    ]);
    if (isset($file['fid'])) {
      $wrapper->field_expert_image->set($file);
    }
    else {
      $wrapper->field_expert_image->set(NULL);
    }
  }
  else {
    $wrapper->field_expert_image->set(NULL);
  }

  // Save entity.
  $wrapper->save();
  $context['results'][] = $content;
}

function mck_content_search_batch_import_experts_finished($success, $results, $operations) {
  if ($success) {
    $message = '';
    $count = count($results);
    if ($count == 0) {
      $message = t('No contents were imported.');
    }
    else if ($count == 1) {
      $message = t('1 content has been imported successfully.');
    }
    else {
      $message = t('%count contents have been imported successfully.', array('%count' => $count));
    }
    drupal_set_message($message);
  }
  else {
    $error_operation = reset($operations);
    $message = t('An error occurred while processing %error_operation with arguments: @arguments', array(
      '%error_operation' => $error_operation[0],
      '@arguments' => print_r($error_operation[1], TRUE)
    ));
    drupal_set_message($message, 'error');
  }
}
