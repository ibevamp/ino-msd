<?php
/**
 * @file
 * mck_phase_features.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function mck_phase_features_paragraphs_info() {
  $items = array(
    'phase' => array(
      'name' => 'Phase',
      'bundle' => 'phase',
      'locked' => '1',
    ),
    'phase_item' => array(
      'name' => 'Phase Item',
      'bundle' => 'phase_item',
      'locked' => '1',
    ),
  );
  return $items;
}
