<?php
/**
 * @file
 * mck_infographic_features.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function mck_infographic_features_paragraphs_info() {
  $items = array(
    'infographic' => array(
      'name' => 'Infographic',
      'bundle' => 'infographic',
      'locked' => '1',
    ),
    'infographic_item' => array(
      'name' => 'Infographic Item',
      'bundle' => 'infographic_item',
      'locked' => '1',
    ),
  );
  return $items;
}
