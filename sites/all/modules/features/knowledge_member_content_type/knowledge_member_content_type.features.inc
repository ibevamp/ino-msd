<?php
/**
 * @file
 * knowledge_member_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function knowledge_member_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function knowledge_member_content_type_node_info() {
  $items = array(
    'members' => array(
      'name' => t('Members'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
