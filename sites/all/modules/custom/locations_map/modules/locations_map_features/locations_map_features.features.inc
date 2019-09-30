<?php
/**
 * @file
 * locations_map_features.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function locations_map_features_paragraphs_info() {
  $items = array(
    'locations_map' => array(
      'name' => 'Locations Map',
      'bundle' => 'locations_map',
      'locked' => '1',
    ),
    'locations_map_item' => array(
      'name' => 'Locations Map Item',
      'bundle' => 'locations_map_item',
      'locked' => '1',
    ),
  );
  return $items;
}
