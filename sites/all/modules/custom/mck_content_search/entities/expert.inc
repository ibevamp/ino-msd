<?php

/**
 * @param array $params
 * @return array
 *
 * mck_content_search_get_content_search_data_by_entity_ENTITY_NAME()
 */
function mck_content_search_get_content_search_data_by_entity_expert($params = []) {
  $data = [];
  $entity_type = $params['entity_type'];
  $contents = $params['contents'];
  $columns = $params['columns'];

  $items = [];
  foreach ($contents as $content) {
    $image_uri = mck_util_get_by_paths($content, 'field_expert_image|und|0|uri', '');
    $image_url = !empty($image_uri) ? file_create_url($image_uri) : '';

    $item = [
      'item_id' => mck_util_get_by_paths($content, 'id', 0),
      'field_expert_no' => mck_util_get_by_paths($content, 'field_expert_no|und|0|value', ''),
      'field_expert_fullname' => mck_util_get_by_paths($content, 'field_expert_fullname|und|0|value', ''),
      'field_expert_contact_point' => mck_util_get_by_paths($content, 'field_expert_contact_point|und|0|value', ''),
      'field_expert_description' => mck_util_get_by_paths($content, 'field_expert_description|und|0|value', ''),
      'image_url' => $image_url,
    ];

    $taxonomy_fields = [
      'field_expert_affiliation',
      'field_expert_study',
      'field_expert_joined_ideation',
      'field_expert_designation',
      'field_expert_primary_at',
      'field_expert_primary_vt',
    ];
    foreach ($taxonomy_fields as $taxonomy_field) {
      $field = [];
      $field_data = [];
      foreach (mck_util_get_by_paths($content, $taxonomy_field . '|und', []) as $value) {
        $field[] = $value['target_id'];
        $taxonomy = taxonomy_term_load($value['target_id']);
        if ($taxonomy->tid) {
          $field_data[] = $taxonomy;
        }
      }
      $item[$taxonomy_field] = $field;
      $item['data'][$taxonomy_field] = $field_data;
    }

    $items[] = $item;
  }

  $filter_fields = [
    ['field_name' => 'field_expert_affiliation', 'field_label' => 'Affiliation', 'taxonomy_name' => 'expert_affiliation'],
    ['field_name' => 'field_expert_primary_vt', 'field_label' => 'Primary vertical tag', 'taxonomy_name' => 'expert_primary_vt'],
    ['field_name' => 'field_expert_primary_at', 'field_label' => 'Primary account tag', 'taxonomy_name' => 'expert_primary_at'],
    ['field_name' => 'field_expert_joined_ideation', 'field_label' => 'Joined ideation', 'taxonomy_name' => 'expert_joined_ideation'],
  ];
  $filters = [];
  foreach ($filter_fields as $filter_field) {
    $filters[$filter_field['field_name']] = [
      'name' => $filter_field['field_label'],
      'items' => mck_content_search_get_filters_by_vocabulary_name($filter_field['taxonomy_name']),
    ];
  }

  $data['items'] = $items;
  $data['filters'] = $filters;

  return $data;
}
