<?php
/**
 * @file
 * mck_content_search_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mck_content_search_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function mck_content_search_features_eck_bundle_info() {
  $items = array(
    'expert_expert' => array(
      'machine_name' => 'expert_expert',
      'entity_type' => 'expert',
      'name' => 'expert',
      'label' => 'Expert',
      'config' => array(
        'managed_properties' => array(
          'title' => 'title',
          'uid' => 0,
          'created' => 0,
          'changed' => 0,
          'language' => 0,
        ),
      ),
    ),
    'opportunity_opportunity' => array(
      'machine_name' => 'opportunity_opportunity',
      'entity_type' => 'opportunity',
      'name' => 'opportunity',
      'label' => 'Opportunity',
      'config' => array(
        'managed_properties' => array(
          'title' => 0,
          'uid' => 0,
          'created' => 0,
          'changed' => 0,
          'language' => 0,
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function mck_content_search_features_eck_entity_type_info() {
  $items = array(
    'expert' => array(
      'name' => 'expert',
      'label' => 'Expert',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
        ),
      ),
    ),
    'opportunity' => array(
      'name' => 'opportunity',
      'label' => 'Opportunity',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function mck_content_search_features_paragraphs_info() {
  $items = array(
    'content_search' => array(
      'name' => 'Content Search',
      'bundle' => 'content_search',
      'locked' => '1',
    ),
  );
  return $items;
}
