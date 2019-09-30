<?php
/**
 * @file
 * mck_venn_diagram_features.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function mck_venn_diagram_features_paragraphs_info() {
  $items = array(
    'venn_diagram' => array(
      'name' => 'Venn Diagram',
      'bundle' => 'venn_diagram',
      'locked' => '1',
    ),
    'venn_diagram_item' => array(
      'name' => 'Venn Diagram Item',
      'bundle' => 'venn_diagram_item',
      'locked' => '1',
    ),
    'venn_diagram_item_point' => array(
      'name' => 'Venn Diagram Item Point',
      'bundle' => 'venn_diagram_item_point',
      'locked' => '1',
    ),
  );
  return $items;
}
