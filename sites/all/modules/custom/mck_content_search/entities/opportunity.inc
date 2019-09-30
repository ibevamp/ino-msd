<?php

/**
 * @param array $params
 * @return array
 *
 * mck_content_search_get_content_search_data_by_entity_ENTITY_NAME()
 */
function mck_content_search_get_content_search_data_by_entity_opportunity($params = []) {
  $data = [];
  $entity_type = $params['entity_type'];
  $contents = $params['contents'];
  $columns = $params['columns'];

  $items = [];
  foreach ($contents as $content) {
    $item = [
      'item_id' => mck_util_get_by_paths($content, 'id', 0),
      'field_opp_no' => mck_util_get_by_paths($content, 'field_opp_no|und|0|value', ''),
      'field_opp_ideation_date' => mck_util_get_by_paths($content, 'field_opp_ideation_date|und|0|value', ''),
      'field_opp_description' => mck_util_get_by_paths($content, 'field_opp_description|und|0|value', ''),
      'field_opp_tcv_range' => mck_util_get_by_paths($content, 'field_opp_tcv_range|und|0|value', ''),
      'field_opp_tcv_est' => mck_util_get_by_paths($content, 'field_opp_tcv_est|und|0|value', ''),
      'field_opp_comments' => mck_util_get_by_paths($content, 'field_opp_comments|und|0|value', ''),
    ];

    $taxonomy_fields = [
      'field_opp_primary_at',
      'field_opp_primary_vt',
      'field_opp_source',
      'field_opp_context_field',
      'field_opp_theme',
      'field_opp_stakeholder',
      'field_opp_stakeholder',
      'field_opp_decision_maker',
      'field_opp_potential_competitor',
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
    ['field_name' => 'field_opp_primary_at', 'field_label' => 'Account tag', 'taxonomy_name' => 'opp_primary_at'],
    ['field_name' => 'field_opp_primary_vt', 'field_label' => 'Vertical tag', 'taxonomy_name' => 'opp_primary_vt'],
    ['field_name' => 'field_opp_theme', 'field_label' => 'Theme', 'taxonomy_name' => 'opp_theme'],
    ['field_name' => 'field_opp_source', 'field_label' => 'Source', 'taxonomy_name' => 'opp_source'],
    ['field_name' => 'field_opp_stakeholder', 'field_label' => 'Stakeholder', 'taxonomy_name' => 'opp_stakeholder'],
    ['field_name' => 'field_opp_potential_competitor', 'field_label' => 'Potential competitor', 'taxonomy_name' => 'opp_potential_competitor'],
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
