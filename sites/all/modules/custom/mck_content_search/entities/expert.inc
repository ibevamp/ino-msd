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
      'field_field_sr_no' => mck_util_get_by_paths($content, 'field_field_sr_no|und|0|value', ''),
      'field_expert_fullname' => mck_util_get_by_paths($content, 'field_expert_fullname|und|0|value', ''),
      'field_expert_contact_point' => mck_util_get_by_paths($content, 'field_expert_contact_point|und|0|value', ''),
      'field_expert_description' => mck_util_get_by_paths($content, 'field_expert_description|und|0|value', ''),
      'image_url' => $image_url,

      'field_ideal_company_id' => mck_util_get_by_paths($content, 'field_ideal_company_id|und|0|value', ''),
      'field_ideal_company_name' => mck_util_get_by_paths($content, 'field_ideal_company_name|und|0|value', ''),
      'field_ideal_year_founded' => mck_util_get_by_paths($content, 'field_ideal_year_founded|und|0|value', ''),
      'field_ideal_employees' => mck_util_get_by_paths($content, 'field_ideal_employees|und|0|value', ''),
      'field_ideal_description' => mck_util_get_by_paths($content, 'field_ideal_description|und|0|value', ''),
      'field_ideal_ceo_co_founder' => mck_util_get_by_paths($content, 'field_ideal_ceo_co_founder|und|0|value', ''),
      'field_ideal_valuation' => mck_util_get_by_paths($content, 'field_ideal_valuation|und|0|value', ''),
      'field_ideal_existing_investors' => mck_util_get_by_paths($content, 'field_ideal_existing_investors|und|0|value', ''),
      'field_ideal_last_financing_date' => mck_util_get_by_paths($content, 'field_ideal_last_financing_date|und|0|value', ''),
      'field_ideal_last_financing_size' => mck_util_get_by_paths($content, 'field_ideal_last_financing_size|und|0|value', ''),
      'field_ideal_last_financing_type' => mck_util_get_by_paths($content, 'field_ideal_last_financing_type|und|0|value', ''),
    ];

    $taxonomy_fields = [
      'field_expert_affiliation',
      'field_expert_study',
      'field_expert_joined_ideation',
      'field_expert_designation',
      'field_expert_primary_at',
      'field_expert_primary_vt',

      'field_expert_position',
      'field_expert_office',
      'field_industrial_expertise',
      'field_functional_expertise',

      'field_ideal_themes',
      'field_ideal_verticals',
      'field_ideal_hotspots',
      'field_ideal_hq_country',
      'field_ideal_hq_region',
      'field_estimated_revenue',
      'field_ideal_financing_status',
      'field_ideal_attractiveness_ratin',
      'field_ideal_investment_likelihoo',
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

    ['field_name' => 'field_expert_position', 'field_label' => 'Position', 'taxonomy_name' => 'css_position'],
    ['field_name' => 'field_expert_office', 'field_label' => 'Office', 'taxonomy_name' => 'office'],
    ['field_name' => 'field_industrial_expertise', 'field_label' => 'Industrial expertise', 'taxonomy_name' => 'industry_segment'],
    ['field_name' => 'field_functional_expertise', 'field_label' => 'Functional expertise', 'taxonomy_name' => 'business_function'],

    ['field_name' => 'field_ideal_themes', 'field_label' => 'Themes', 'taxonomy_name' => 'ideal_themes'],
    ['field_name' => 'field_ideal_verticals', 'field_label' => 'Verticals', 'taxonomy_name' => 'ideal_verticals'],
    ['field_name' => 'field_ideal_hotspots', 'field_label' => 'Hotspots', 'taxonomy_name' => 'ideal_hotspots'],
    ['field_name' => 'field_ideal_hq_country', 'field_label' => 'HQ Country', 'taxonomy_name' => 'ideal_hq_region'],
    ['field_name' => 'field_ideal_hq_region', 'field_label' => 'HQ region', 'taxonomy_name' => 'ideal_hq_country'],
    ['field_name' => 'field_estimated_revenue', 'field_label' => 'Estimated Revenue', 'taxonomy_name' => 'ideal_estimated_revenue'],
    ['field_name' => 'field_ideal_financing_status', 'field_label' => 'Financing Status', 'taxonomy_name' => 'ideal_financing_status'],
    ['field_name' => 'field_ideal_attractiveness_ratin', 'field_label' => 'Attractiveness Rating', 'taxonomy_name' => 'ideal_attractiveness_rating'],
    ['field_name' => 'field_ideal_investment_likelihoo', 'field_label' => 'Investment Likelihood', 'taxonomy_name' => 'ideal_investment_likelihood'],
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
