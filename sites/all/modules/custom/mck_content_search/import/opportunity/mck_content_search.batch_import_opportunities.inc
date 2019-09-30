<?php

function mck_content_search_batch_import_opportunities() {
  $output = array();
  $form = drupal_get_form('mck_content_search_batch_import_opportunities_form');
  $output[] = render($form);
  return implode('<br>', $output);
}

function mck_content_search_batch_import_opportunities_form($form, &$form_state) {
  $form['batch'] = array(
    '#type' => 'fieldset',
    '#title' => t('Batch Import opportunities'),
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
    '#upload_location' => 'public://opportunities/tmp',
    '#multiple' => FALSE,
    '#upload_validators' => array(
      'file_validate_extensions' => array('csv'),
    )
  );
  $form['batch']['images_zip_file'] = array (
    '#title' => t('Images zip file'),
    '#type' => 'managed_file',
    '#required' => FALSE,
    '#upload_location' => 'public://opportunities/tmp',
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

function mck_content_search_batch_import_opportunities_form_validate($form, &$form_state) {
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

function mck_content_search_batch_import_opportunities_form_submit($form, &$form_state) {
  $values = $form_state['values'];

  switch ($values['op']) {
    case t('Import'):
      $max_numbers = !empty($values['batch']['max_numbers']) ? $values['batch']['max_numbers'] : 9999999;
      $csv_file = file_load($values['batch']['csv_file']);
      $csv_file_url = file_create_url($csv_file->uri);

      $images_zip_file = file_load($values['batch']['images_zip_file']);

      // Unzip the .zip file to /sites/default/opportunities/tmp/images directory.
      mck_util_file_extract($images_zip_file, 'public://opportunities/tmp/images');

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
          'mck_content_search_batch_import_opportunities_process',
          array(
            array(
              'content' => $content,
            ),
          ),
        );
      }
      $batch = array(
        'operations' => $operations,
        'finished' => 'mck_content_search_batch_import_opportunities_finished',
        'title' => t('Importing'),
        'file' => drupal_get_path('module', 'mck_content_search') . '/import/opportunity/mck_content_search.batch_import_opportunities.inc',
      );
      batch_set($batch);
      break;

    case t('Delete all'):
      // Deletes opportunity entities.
      $query = new EntityFieldQuery();
      $query
        ->entityCondition('entity_type', 'opportunity')
        ->entityCondition('bundle', 'opportunity');
      $result = $query->execute();
      if (isset($result['opportunity'])) {
        foreach ($result['opportunity'] as $opportunity) {
          $opportunity = (array) $opportunity;
          entity_delete('opportunity', $opportunity['id']);
        }
      }

      // Deletes opportunity taxonomies.
      $fields = [
        ['field_name' => 'field_opp_primary_at', 'field_label' => 'Account tag', 'taxonomy_name' => 'opp_primary_at'],
        ['field_name' => 'field_opp_primary_vt', 'field_label' => 'Vertical tag', 'taxonomy_name' => 'opp_primary_vt'],
        ['field_name' => 'field_opp_source', 'field_label' => 'Source', 'taxonomy_name' => 'opp_source'],
        ['field_name' => 'field_opp_context_field', 'field_label' => 'Context field', 'taxonomy_name' => 'opp_context_field'],
        ['field_name' => 'field_opp_theme', 'field_label' => 'Theme', 'taxonomy_name' => 'opp_theme'],
        ['field_name' => 'field_opp_stakeholder', 'field_label' => 'Stakeholders', 'taxonomy_name' => 'opp_stakeholder'],
        ['field_name' => 'field_opp_decision_maker', 'field_label' => 'Decision maker', 'taxonomy_name' => 'opp_decision_maker'],
        ['field_name' => 'field_opp_potential_competitor', 'field_label' => 'Potential competitor', 'taxonomy_name' => 'opp_potential_competitor'],
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
        'like1' => db_like('public://opportunities') . '%',
      ]);
      $records = [];
      foreach ($result as $record) {
        $records[] = $record;
      }

      foreach ($records as $record) {
        file_delete(file_load($record->fid));
      }

      // Deletes the unzipped images.
      file_unmanaged_delete_recursive('public://opportunities/tmp/images');
      break;
  }
}

function mck_content_search_batch_import_opportunities_process($data, &$context) {
  $content = $data['content'];
  $context['message'] = t('Importing content...');

  $no = trim($content['field_opp_no']);
  if (empty($no)) {
    return FALSE;
  }

  // If the opportunity is existing, then we will not import it again.
  $query = new EntityFieldQuery();
  $query
    ->entityCondition('entity_type', 'opportunity')
    ->entityCondition('bundle', 'opportunity')
    ->fieldCondition('field_opp_no', 'value', $no)
  ;
  $result = $query->execute();

  // Updates the opportunity if it exists.
  if (count($result) > 0) {
    $entity = NULL;
    foreach ($result['opportunity'] as $key => $item) {
      $entities = entity_load('opportunity', [$key]);
      foreach ($entities as $k => $item) {
        $entity = $item;
        break;
      }
      break;
    }
  }
  // Creates a new opportunity if it doesn't exist.
  else {
    $entity = entity_create('opportunity', array(
      'type' => 'opportunity',
    ));
  }
  $wrapper = entity_metadata_wrapper('opportunity', $entity);

  // Title.
  $wrapper->title->set($no);

  // Text fields.
  $fields = [
    ['field_name' => 'field_opp_no'],
    ['field_name' => 'field_opp_ideation_date'],
    ['field_name' => 'field_opp_tcv_range'],
    ['field_name' => 'field_opp_tcv_est'],
  ];
  foreach ($fields as $k => $field) {
    $field_name = $field['field_name'];
    $value = trim($content[$field_name]);
    $wrapper->{$field_name}->set($value);
  }

  // Textarea fields.
  $fields = [
    ['field_name' => 'field_opp_description'],
    ['field_name' => 'field_opp_comments'],
  ];
  foreach ($fields as $field) {
    $field_name = $field['field_name'];
    $value = trim($content[$field_name]);
    $wrapper->{$field_name}->set(['value' => $value, 'format' => 'full_html']);
  }

  // Taxonomy fields.
  $fields = [
    ['field_name' => 'field_opp_primary_at', 'taxonomy_name' => 'opp_primary_at'],
    ['field_name' => 'field_opp_primary_vt', 'taxonomy_name' => 'opp_primary_vt'],
    ['field_name' => 'field_opp_source', 'taxonomy_name' => 'opp_source'],
    ['field_name' => 'field_opp_context_field', 'taxonomy_name' => 'opp_context_field'],
    ['field_name' => 'field_opp_theme', 'taxonomy_name' => 'opp_theme'],
    ['field_name' => 'field_opp_stakeholder', 'taxonomy_name' => 'opp_stakeholder'],
    ['field_name' => 'field_opp_decision_maker', 'taxonomy_name' => 'opp_decision_maker'],
    ['field_name' => 'field_opp_potential_competitor', 'taxonomy_name' => 'opp_potential_competitor'],
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

  // Save entity.
  $wrapper->save();
  $context['results'][] = $content;
}

function mck_content_search_batch_import_opportunities_finished($success, $results, $operations) {
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
