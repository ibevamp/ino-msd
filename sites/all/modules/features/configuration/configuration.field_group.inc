<?php
/**
 * @file
 * configuration.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function configuration_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_grid|paragraphs_item|1up_text_images|form';
  $field_group->group_name = 'group_image_grid';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '1up_text_images';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Grid',
    'weight' => '2',
    'children' => array(
      0 => 'field_thumbnail_left',
      1 => 'field_thumbnail_right',
      2 => 'field_full_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-image-grid field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Image Grid');

  return $field_groups;
}
