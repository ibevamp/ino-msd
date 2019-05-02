<?php
/**
 * @file
 * syd_proposal_paragraphs.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function syd_proposal_paragraphs_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'paragraphs_item-1up_image-field_anchor_name'.
  $field_instances['paragraphs_item-1up_image-field_anchor_name'] = array(
    'bundle' => '1up_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_image-field_body'.
  $field_instances['paragraphs_item-1up_image-field_body'] = array(
    'bundle' => '1up_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_image-field_eyebrow'.
  $field_instances['paragraphs_item-1up_image-field_eyebrow'] = array(
    'bundle' => '1up_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_eyebrow',
    'label' => 'eyebrow',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_image-field_file'.
  $field_instances['paragraphs_item-1up_image-field_file'] = array(
    'bundle' => '1up_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 9,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_file',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mp4',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_image-field_image'.
  $field_instances['paragraphs_item-1up_image-field_image'] = array(
    'bundle' => '1up_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '1upimage',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_image-field_links'.
  $field_instances['paragraphs_item-1up_image-field_links'] = array(
    'bundle' => '1up_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_links',
    'label' => 'Links',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_image-field_text_headline'.
  $field_instances['paragraphs_item-1up_image-field_text_headline'] = array(
    'bundle' => '1up_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_text_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_image-field_title'.
  $field_instances['paragraphs_item-1up_image-field_title'] = array(
    'bundle' => '1up_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1up_medium_quote-field_align_right'.
  $field_instances['paragraphs_item-1up_medium_quote-field_align_right'] = array(
    'bundle' => '1up_medium_quote',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_align_right',
    'label' => 'Align thumbnail to right',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1up_medium_quote-field_anchor_name'.
  $field_instances['paragraphs_item-1up_medium_quote-field_anchor_name'] = array(
    'bundle' => '1up_medium_quote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1up_medium_quote-field_blockquote_color'.
  $field_instances['paragraphs_item-1up_medium_quote-field_blockquote_color'] = array(
    'bundle' => '1up_medium_quote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
        'weight' => 13,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_blockquote_color',
    'label' => 'Blockquote Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1up_medium_quote-field_content_font_color'.
  $field_instances['paragraphs_item-1up_medium_quote-field_content_font_color'] = array(
    'bundle' => '1up_medium_quote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
        'weight' => 12,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_content_font_color',
    'label' => 'Content Font Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1up_medium_quote-field_description'.
  $field_instances['paragraphs_item-1up_medium_quote-field_description'] = array(
    'bundle' => '1up_medium_quote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1up_medium_quote-field_designation1'.
  $field_instances['paragraphs_item-1up_medium_quote-field_designation1'] = array(
    'bundle' => '1up_medium_quote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_designation1',
    'label' => 'Designation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1up_medium_quote-field_full_name'.
  $field_instances['paragraphs_item-1up_medium_quote-field_full_name'] = array(
    'bundle' => '1up_medium_quote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_full_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_medium_quote-field_image'.
  $field_instances['paragraphs_item-1up_medium_quote-field_image'] = array(
    'bundle' => '1up_medium_quote',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_medium_quote-field_link'.
  $field_instances['paragraphs_item-1up_medium_quote-field_link'] = array(
    'bundle' => '1up_medium_quote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1up_medium_quote-field_main_heading_font_color'.
  $field_instances['paragraphs_item-1up_medium_quote-field_main_heading_font_color'] = array(
    'bundle' => '1up_medium_quote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
        'weight' => 11,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_main_heading_font_color',
    'label' => 'Main Heading Font Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-1up_medium_quote-field_specialization'.
  $field_instances['paragraphs_item-1up_medium_quote-field_specialization'] = array(
    'bundle' => '1up_medium_quote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_specialization',
    'label' => 'Specialization',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_medium_quote-field_title'.
  $field_instances['paragraphs_item-1up_medium_quote-field_title'] = array(
    'bundle' => '1up_medium_quote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Quote',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_text-field_anchor_name'.
  $field_instances['paragraphs_item-1up_text-field_anchor_name'] = array(
    'bundle' => '1up_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_text-field_description'.
  $field_instances['paragraphs_item-1up_text-field_description'] = array(
    'bundle' => '1up_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_text-field_hero_headline'.
  $field_instances['paragraphs_item-1up_text-field_hero_headline'] = array(
    'bundle' => '1up_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_hero_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-1up_text-field_link'.
  $field_instances['paragraphs_item-1up_text-field_link'] = array(
    'bundle' => '1up_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Register',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_columns-field_anchor_name'.
  $field_instances['paragraphs_item-2up_columns-field_anchor_name'] = array(
    'bundle' => '2up_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_columns-field_description'.
  $field_instances['paragraphs_item-2up_columns-field_description'] = array(
    'bundle' => '2up_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_columns-field_heading'.
  $field_instances['paragraphs_item-2up_columns-field_heading'] = array(
    'bundle' => '2up_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_heading',
    'label' => 'Heading',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_columns-field_paragraph'.
  $field_instances['paragraphs_item-2up_columns-field_paragraph'] = array(
    'bundle' => '2up_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph',
    'label' => 'Paragraph',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_image' => -1,
        '1up_medium_hero' => -1,
        '1up_medium_quote' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_columns' => -1,
        '2up_columns_item' => '2up_columns_item',
        '2up_medium' => -1,
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '2up_small' => -1,
        '2up_small_item' => -1,
        '2up_text' => -1,
        '3up_factoid' => -1,
        '3up_factoid_item' => -1,
        '3up_list' => -1,
        '3up_list_item' => -1,
        '3up_participants_list' => -1,
        '3up_participants_list_item' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'banner_video' => -1,
        'banner_video_autoplay' => -1,
        'banner_video_popup' => -1,
        'bio_section' => -1,
        'bio_section_group' => -1,
        'company_list' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'gallery_item' => -1,
        'hero_image_slide' => -1,
        'image_gallery' => -1,
        'learn_more' => -1,
        'link_pop_up' => -1,
        'location_map' => -1,
        'markup_roadmap' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'pop_up_image' => -1,
        'pop_up_link' => -1,
        'promo_bar' => -1,
        'promo_quote' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'two_up_small' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_medium_quote' => 5,
        '1up_text' => 6,
        '1up_text_images' => 7,
        '2up_columns' => 8,
        '2up_columns_item' => 74,
        '2up_medium' => 9,
        '2up_medium_quote' => 10,
        '2up_slant_image' => 11,
        '2up_small' => 12,
        '2up_small_item' => 13,
        '2up_text' => 14,
        '3up_factoid' => 15,
        '3up_factoid_item' => 16,
        '3up_list' => 17,
        '3up_list_item' => 18,
        '3up_participants_list' => 19,
        '3up_participants_list_item' => 20,
        '3up_three_column_item' => 22,
        '3up_three_columns' => 21,
        '3up_three_icon_item' => 24,
        '3up_three_icons' => 23,
        '4up_four_columns' => 25,
        '4up_four_icon_item' => 26,
        'agenda' => 27,
        'agenda_item' => 28,
        'banner_video' => 29,
        'banner_video_autoplay' => 30,
        'banner_video_popup' => 31,
        'bio_section' => 32,
        'bio_section_group' => 33,
        'company_list' => 34,
        'custom_menu' => 35,
        'custom_menu_link' => 36,
        'enhanced_hero' => 37,
        'factoid' => 38,
        'factoid_item' => 39,
        'faq' => 40,
        'faq_item' => 41,
        'full_text_c' => 42,
        'gallery_item' => 43,
        'hero_image_slide' => 44,
        'image_gallery' => 45,
        'learn_more' => 46,
        'link_pop_up' => 47,
        'location_map' => 48,
        'markup_roadmap' => 49,
        'medium_hero' => 50,
        'member_list' => 52,
        'members_for_homepage' => 51,
        'minisite_headline' => 53,
        'more_posts_blog' => 54,
        'pop_up_image' => 55,
        'pop_up_link' => 56,
        'promo_bar' => 57,
        'promo_quote' => 58,
        'quote_hero' => 59,
        'speaker' => 60,
        'speaker_item' => 62,
        'speaker_list' => 63,
        'speakers' => 61,
        'two_up_small' => 64,
        'video' => 65,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2up_columns_item-field_description'.
  $field_instances['paragraphs_item-2up_columns_item-field_description'] = array(
    'bundle' => '2up_columns_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_columns_item-field_image'.
  $field_instances['paragraphs_item-2up_columns_item-field_image'] = array(
    'bundle' => '2up_columns_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_columns_item-field_link'.
  $field_instances['paragraphs_item-2up_columns_item-field_link'] = array(
    'bundle' => '2up_columns_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_columns_item-field_title'.
  $field_instances['paragraphs_item-2up_columns_item-field_title'] = array(
    'bundle' => '2up_columns_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2up_columns_item-field_video_file'.
  $field_instances['paragraphs_item-2up_columns_item-field_video_file'] = array(
    'bundle' => '2up_columns_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_file',
    'label' => 'Video File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mp4',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_small-field_2up_small_item'.
  $field_instances['paragraphs_item-2up_small-field_2up_small_item'] = array(
    'bundle' => '2up_small',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_2up_small_item',
    'label' => '2Up Small Item',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_image' => -1,
        '1up_medium_hero' => -1,
        '1up_medium_quote' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_medium' => -1,
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '2up_small' => -1,
        '2up_small_item' => '2up_small_item',
        '2up_text' => -1,
        '3up_factoid' => -1,
        '3up_factoid_item' => -1,
        '3up_list' => -1,
        '3up_list_item' => -1,
        '3up_participants_list' => -1,
        '3up_participants_list_item' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'banner_video' => -1,
        'banner_video_autoplay' => -1,
        'banner_video_popup' => -1,
        'bio_section' => -1,
        'bio_section_group' => -1,
        'company_list' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'gallery_item' => -1,
        'hero_image_slide' => -1,
        'image_gallery' => -1,
        'learn_more' => -1,
        'link_pop_up' => -1,
        'location_map' => -1,
        'markup_roadmap' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'pop_up_image' => -1,
        'pop_up_link' => -1,
        'promo_bar' => -1,
        'promo_quote' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'two_up_small' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_medium_quote' => 65,
        '1up_text' => 5,
        '1up_text_images' => 6,
        '2up_medium' => 7,
        '2up_medium_quote' => 8,
        '2up_slant_image' => 9,
        '2up_small' => 10,
        '2up_small_item' => 11,
        '2up_text' => 12,
        '3up_factoid' => 13,
        '3up_factoid_item' => 14,
        '3up_list' => 15,
        '3up_list_item' => 16,
        '3up_participants_list' => 17,
        '3up_participants_list_item' => 18,
        '3up_three_column_item' => 20,
        '3up_three_columns' => 19,
        '3up_three_icon_item' => 22,
        '3up_three_icons' => 21,
        '4up_four_columns' => 23,
        '4up_four_icon_item' => 24,
        'agenda' => 25,
        'agenda_item' => 26,
        'banner_video' => 27,
        'banner_video_autoplay' => 89,
        'banner_video_popup' => 90,
        'bio_section' => 28,
        'bio_section_group' => 29,
        'company_list' => 30,
        'custom_menu' => 32,
        'custom_menu_link' => 33,
        'enhanced_hero' => 34,
        'factoid' => 35,
        'factoid_item' => 36,
        'faq' => 37,
        'faq_item' => 38,
        'full_text_c' => 39,
        'gallery_item' => 40,
        'hero_image_slide' => 41,
        'image_gallery' => 42,
        'learn_more' => 43,
        'link_pop_up' => 44,
        'location_map' => 45,
        'markup_roadmap' => 46,
        'medium_hero' => 47,
        'member_list' => 49,
        'members_for_homepage' => 48,
        'minisite_headline' => 50,
        'more_posts_blog' => 51,
        'pop_up_image' => 52,
        'pop_up_link' => 115,
        'promo_bar' => 53,
        'promo_quote' => 117,
        'quote_hero' => 54,
        'speaker' => 55,
        'speaker_item' => 57,
        'speaker_list' => 58,
        'speakers' => 56,
        'two_up_small' => 59,
        'video' => 60,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_small-field_anchor_name'.
  $field_instances['paragraphs_item-2up_small-field_anchor_name'] = array(
    'bundle' => '2up_small',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-2up_small_item-field_description'.
  $field_instances['paragraphs_item-2up_small_item-field_description'] = array(
    'bundle' => '2up_small_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_small_item-field_eyebrow'.
  $field_instances['paragraphs_item-2up_small_item-field_eyebrow'] = array(
    'bundle' => '2up_small_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_eyebrow',
    'label' => 'Eyebrow',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_small_item-field_image'.
  $field_instances['paragraphs_item-2up_small_item-field_image'] = array(
    'bundle' => '2up_small_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_small_item-field_link'.
  $field_instances['paragraphs_item-2up_small_item-field_link'] = array(
    'bundle' => '2up_small_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_small_item-field_title'.
  $field_instances['paragraphs_item-2up_small_item-field_title'] = array(
    'bundle' => '2up_small_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_small_item-field_video_file'.
  $field_instances['paragraphs_item-2up_small_item-field_video_file'] = array(
    'bundle' => '2up_small_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_file',
    'label' => 'Video File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mp4',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_text-field_anchor_name'.
  $field_instances['paragraphs_item-2up_text-field_anchor_name'] = array(
    'bundle' => '2up_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_text-field_anchor_paragraph'.
  $field_instances['paragraphs_item-2up_text-field_anchor_paragraph'] = array(
    'bundle' => '2up_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_paragraph',
    'label' => 'Anchor paragraph',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_image' => -1,
        '1up_medium_hero' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_medium' => -1,
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '2up_text' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'anchor' => 'anchor',
        'company_list' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'hero_image_slide' => -1,
        'learn_more' => -1,
        'location_map' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'promo_bar' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_text' => 5,
        '1up_text_images' => 6,
        '2up_medium' => 7,
        '2up_medium_quote' => 8,
        '2up_slant_image' => 9,
        '2up_text' => 10,
        '3up_three_column_item' => 12,
        '3up_three_columns' => 11,
        '3up_three_icon_item' => 14,
        '3up_three_icons' => 13,
        '4up_four_columns' => 15,
        '4up_four_icon_item' => 16,
        'agenda' => 17,
        'agenda_item' => 18,
        'anchor' => 19,
        'company_list' => 20,
        'custom_menu' => 21,
        'custom_menu_link' => 22,
        'enhanced_hero' => 23,
        'factoid' => 24,
        'factoid_item' => 25,
        'faq' => 26,
        'faq_item' => 27,
        'full_text_c' => 28,
        'hero_image_slide' => 29,
        'learn_more' => 30,
        'location_map' => 31,
        'medium_hero' => 32,
        'member_list' => 33,
        'minisite_headline' => 34,
        'more_posts_blog' => 35,
        'promo_bar' => 36,
        'quote_hero' => 37,
        'speaker' => 38,
        'speaker_item' => 40,
        'speaker_list' => 41,
        'speakers' => 39,
        'video' => 42,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_text-field_body'.
  $field_instances['paragraphs_item-2up_text-field_body'] = array(
    'bundle' => '2up_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-2up_text-field_title'.
  $field_instances['paragraphs_item-2up_text-field_title'] = array(
    'bundle' => '2up_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3up_factoid-field_anchor_name'.
  $field_instances['paragraphs_item-3up_factoid-field_anchor_name'] = array(
    'bundle' => '3up_factoid',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3up_factoid-field_description'.
  $field_instances['paragraphs_item-3up_factoid-field_description'] = array(
    'bundle' => '3up_factoid',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3up_factoid-field_grey_row'.
  $field_instances['paragraphs_item-3up_factoid-field_grey_row'] = array(
    'bundle' => '3up_factoid',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_grey_row',
    'label' => 'Add default background color to the section',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3up_factoid-field_heading'.
  $field_instances['paragraphs_item-3up_factoid-field_heading'] = array(
    'bundle' => '3up_factoid',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_heading',
    'label' => 'Heading',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3up_factoid-field_items'.
  $field_instances['paragraphs_item-3up_factoid-field_items'] = array(
    'bundle' => '3up_factoid',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_items',
    'label' => 'Items',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_image' => -1,
        '1up_medium_hero' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_medium' => -1,
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '2up_text' => -1,
        '3up_factoid' => -1,
        '3up_factoid_item' => '3up_factoid_item',
        '3up_participants_list' => -1,
        '3up_participants_list_item' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'company_list' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'custommenu_updated' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'hero_image_slide' => -1,
        'learn_more' => -1,
        'location_map' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'promo_bar' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_text' => 5,
        '1up_text_images' => 6,
        '2up_medium' => 7,
        '2up_medium_quote' => 8,
        '2up_slant_image' => 9,
        '2up_text' => 10,
        '3up_factoid' => 11,
        '3up_factoid_item' => 12,
        '3up_participants_list' => 13,
        '3up_participants_list_item' => 14,
        '3up_three_column_item' => 16,
        '3up_three_columns' => 15,
        '3up_three_icon_item' => 18,
        '3up_three_icons' => 17,
        '4up_four_columns' => 19,
        '4up_four_icon_item' => 20,
        'agenda' => 21,
        'agenda_item' => 22,
        'company_list' => 23,
        'custom_menu' => 25,
        'custom_menu_link' => 26,
        'custommenu_updated' => 24,
        'enhanced_hero' => 27,
        'factoid' => 28,
        'factoid_item' => 29,
        'faq' => 30,
        'faq_item' => 31,
        'full_text_c' => 32,
        'hero_image_slide' => 33,
        'learn_more' => 34,
        'location_map' => 35,
        'medium_hero' => 36,
        'member_list' => 38,
        'members_for_homepage' => 37,
        'minisite_headline' => 39,
        'more_posts_blog' => 40,
        'promo_bar' => 41,
        'quote_hero' => 42,
        'speaker' => 43,
        'speaker_item' => 45,
        'speaker_list' => 46,
        'speakers' => 44,
        'video' => 47,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3up_factoid-field_left_align_section_heading'.
  $field_instances['paragraphs_item-3up_factoid-field_left_align_section_heading'] = array(
    'bundle' => '3up_factoid',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_left_align_section_heading',
    'label' => 'Left Align Section Heading',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3up_factoid_item-field_description'.
  $field_instances['paragraphs_item-3up_factoid_item-field_description'] = array(
    'bundle' => '3up_factoid_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3up_factoid_item-field_subtitle'.
  $field_instances['paragraphs_item-3up_factoid_item-field_subtitle'] = array(
    'bundle' => '3up_factoid_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_subtitle',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3up_factoid_item-field_title'.
  $field_instances['paragraphs_item-3up_factoid_item-field_title'] = array(
    'bundle' => '3up_factoid_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3up_list-field_paragraph'.
  $field_instances['paragraphs_item-3up_list-field_paragraph'] = array(
    'bundle' => '3up_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph',
    'label' => 'Team Member',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_image' => -1,
        '1up_medium_hero' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_medium' => -1,
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '2up_text' => -1,
        '3up_factoid' => -1,
        '3up_factoid_item' => -1,
        '3up_list' => -1,
        '3up_list_item' => '3up_list_item',
        '3up_participants_list' => -1,
        '3up_participants_list_item' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'bio_section' => -1,
        'bio_section_group' => -1,
        'company_list' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'custommenu_updated' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'gallery_item' => -1,
        'hero_image_slide' => -1,
        'image_gallery' => -1,
        'learn_more' => -1,
        'link_pop_up' => -1,
        'location_map' => -1,
        'markup_roadmap' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'pop_up_image' => -1,
        'promo_bar' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'two_up_small' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_text' => 5,
        '1up_text_images' => 6,
        '2up_medium' => 7,
        '2up_medium_quote' => 8,
        '2up_slant_image' => 9,
        '2up_text' => 10,
        '3up_factoid' => 11,
        '3up_factoid_item' => 12,
        '3up_list' => 13,
        '3up_list_item' => 14,
        '3up_participants_list' => 15,
        '3up_participants_list_item' => 16,
        '3up_three_column_item' => 18,
        '3up_three_columns' => 17,
        '3up_three_icon_item' => 20,
        '3up_three_icons' => 19,
        '4up_four_columns' => 21,
        '4up_four_icon_item' => 22,
        'agenda' => 23,
        'agenda_item' => 24,
        'bio_section' => 25,
        'bio_section_group' => 26,
        'company_list' => 27,
        'custom_menu' => 29,
        'custom_menu_link' => 30,
        'custommenu_updated' => 28,
        'enhanced_hero' => 31,
        'factoid' => 32,
        'factoid_item' => 33,
        'faq' => 34,
        'faq_item' => 35,
        'full_text_c' => 36,
        'gallery_item' => 37,
        'hero_image_slide' => 38,
        'image_gallery' => 39,
        'learn_more' => 40,
        'link_pop_up' => 41,
        'location_map' => 42,
        'markup_roadmap' => 43,
        'medium_hero' => 44,
        'member_list' => 46,
        'members_for_homepage' => 45,
        'minisite_headline' => 47,
        'more_posts_blog' => 48,
        'pop_up_image' => 49,
        'promo_bar' => 50,
        'quote_hero' => 51,
        'speaker' => 52,
        'speaker_item' => 54,
        'speaker_list' => 55,
        'speakers' => 53,
        'two_up_small' => 56,
        'video' => 57,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3up_list-field_short_description'.
  $field_instances['paragraphs_item-3up_list-field_short_description'] = array(
    'bundle' => '3up_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_short_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3up_list-field_title'.
  $field_instances['paragraphs_item-3up_list-field_title'] = array(
    'bundle' => '3up_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Heading',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3up_list_item-field_designation'.
  $field_instances['paragraphs_item-3up_list_item-field_designation'] = array(
    'bundle' => '3up_list_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_designation',
    'label' => 'Designation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3up_list_item-field_image'.
  $field_instances['paragraphs_item-3up_list_item-field_image'] = array(
    'bundle' => '3up_list_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'dragdropfile_enabled' => 1,
        'dragdropfile_title' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3up_list_item-field_short_description'.
  $field_instances['paragraphs_item-3up_list_item-field_short_description'] = array(
    'bundle' => '3up_list_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_short_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'paragraphs_item-3up_list_item-field_title'.
  $field_instances['paragraphs_item-3up_list_item-field_title'] = array(
    'bundle' => '3up_list_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3up_participants_list-field_anchor_name'.
  $field_instances['paragraphs_item-3up_participants_list-field_anchor_name'] = array(
    'bundle' => '3up_participants_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3up_participants_list-field_link'.
  $field_instances['paragraphs_item-3up_participants_list-field_link'] = array(
    'bundle' => '3up_participants_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3up_participants_list-field_paragraph'.
  $field_instances['paragraphs_item-3up_participants_list-field_paragraph'] = array(
    'bundle' => '3up_participants_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph',
    'label' => 'Paragraph',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_image' => -1,
        '1up_medium_hero' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_medium' => -1,
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '2up_text' => -1,
        '3up_participants_list' => -1,
        '3up_participants_list_item' => '3up_participants_list_item',
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'company_list' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'hero_image_slide' => -1,
        'learn_more' => -1,
        'location_map' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'promo_bar' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_text' => 5,
        '1up_text_images' => 6,
        '2up_medium' => 7,
        '2up_medium_quote' => 8,
        '2up_slant_image' => 9,
        '2up_text' => 10,
        '3up_participants_list' => 11,
        '3up_participants_list_item' => 12,
        '3up_three_column_item' => 14,
        '3up_three_columns' => 13,
        '3up_three_icon_item' => 16,
        '3up_three_icons' => 15,
        '4up_four_columns' => 17,
        '4up_four_icon_item' => 18,
        'agenda' => 19,
        'agenda_item' => 20,
        'company_list' => 21,
        'custom_menu' => 22,
        'custom_menu_link' => 23,
        'enhanced_hero' => 24,
        'factoid' => 25,
        'factoid_item' => 26,
        'faq' => 27,
        'faq_item' => 28,
        'full_text_c' => 29,
        'hero_image_slide' => 30,
        'learn_more' => 31,
        'location_map' => 32,
        'medium_hero' => 33,
        'member_list' => 35,
        'members_for_homepage' => 34,
        'minisite_headline' => 36,
        'more_posts_blog' => 37,
        'promo_bar' => 38,
        'quote_hero' => 39,
        'speaker' => 40,
        'speaker_item' => 42,
        'speaker_list' => 43,
        'speakers' => 41,
        'video' => 45,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3up_participants_list-field_title'.
  $field_instances['paragraphs_item-3up_participants_list-field_title'] = array(
    'bundle' => '3up_participants_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Heading',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3up_participants_list_item-field_description'.
  $field_instances['paragraphs_item-3up_participants_list_item-field_description'] = array(
    'bundle' => '3up_participants_list_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3up_participants_list_item-field_designation'.
  $field_instances['paragraphs_item-3up_participants_list_item-field_designation'] = array(
    'bundle' => '3up_participants_list_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_designation',
    'label' => 'Designation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3up_participants_list_item-field_image'.
  $field_instances['paragraphs_item-3up_participants_list_item-field_image'] = array(
    'bundle' => '3up_participants_list_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 0,
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Thumbnail',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-3up_participants_list_item-field_title'.
  $field_instances['paragraphs_item-3up_participants_list_item-field_title'] = array(
    'bundle' => '3up_participants_list_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4up_four_columns-field_anchor_name'.
  $field_instances['paragraphs_item-4up_four_columns-field_anchor_name'] = array(
    'bundle' => '4up_four_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-4up_four_columns-field_grey_row'.
  $field_instances['paragraphs_item-4up_four_columns-field_grey_row'] = array(
    'bundle' => '4up_four_columns',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_grey_row',
    'label' => 'Wrapper Background Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-4up_four_columns-field_heading'.
  $field_instances['paragraphs_item-4up_four_columns-field_heading'] = array(
    'bundle' => '4up_four_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_heading',
    'label' => '4up headline',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4up_four_columns-field_paragraph'.
  $field_instances['paragraphs_item-4up_four_columns-field_paragraph'] = array(
    'bundle' => '4up_four_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph',
    'label' => 'Paragraph',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_medium_hero' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_medium' => -1,
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => '4up_four_icon_item',
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'hero_image_slide' => -1,
        'learn_more' => -1,
        'location_map' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'minisite_headline' => -1,
        'promo_bar' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_medium_hero' => 3,
        '1up_text' => 4,
        '1up_text_images' => 5,
        '2up_medium' => 6,
        '2up_medium_quote' => 7,
        '2up_slant_image' => 8,
        '3up_three_column_item' => 10,
        '3up_three_columns' => 9,
        '3up_three_icon_item' => 12,
        '3up_three_icons' => 11,
        '4up_four_columns' => 13,
        '4up_four_icon_item' => 14,
        'custom_menu' => 15,
        'custom_menu_link' => 16,
        'enhanced_hero' => 17,
        'factoid' => 18,
        'factoid_item' => 19,
        'faq' => 20,
        'faq_item' => 21,
        'full_text_c' => 22,
        'hero_image_slide' => 23,
        'learn_more' => 24,
        'location_map' => 25,
        'medium_hero' => 26,
        'member_list' => 27,
        'minisite_headline' => 28,
        'promo_bar' => 29,
        'quote_hero' => 30,
        'speaker' => 31,
        'speaker_item' => 33,
        'speaker_list' => 34,
        'speakers' => 32,
        'video' => 35,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4up_four_icon_item-field_description'.
  $field_instances['paragraphs_item-4up_four_icon_item-field_description'] = array(
    'bundle' => '4up_four_icon_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-4up_four_icon_item-field_grey_row'.
  $field_instances['paragraphs_item-4up_four_icon_item-field_grey_row'] = array(
    'bundle' => '4up_four_icon_item',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_grey_row',
    'label' => 'Display as thumbnail image',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-4up_four_icon_item-field_image'.
  $field_instances['paragraphs_item-4up_four_icon_item-field_image'] = array(
    'bundle' => '4up_four_icon_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-4up_four_icon_item-field_link'.
  $field_instances['paragraphs_item-4up_four_icon_item-field_link'] = array(
    'bundle' => '4up_four_icon_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-4up_four_icon_item-field_title'.
  $field_instances['paragraphs_item-4up_four_icon_item-field_title'] = array(
    'bundle' => '4up_four_icon_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-agenda-field_anchor_name'.
  $field_instances['paragraphs_item-agenda-field_anchor_name'] = array(
    'bundle' => 'agenda',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-agenda-field_datepar'.
  $field_instances['paragraphs_item-agenda-field_datepar'] = array(
    'bundle' => 'agenda',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_datepar',
    'label' => 'Agenda',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_image' => -1,
        '1up_medium_hero' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_medium' => -1,
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '2up_text' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => 'agenda_item',
        'company_list' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'hero_image_slide' => -1,
        'learn_more' => -1,
        'location_map' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'minisite_headline' => -1,
        'promo_bar' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_text' => 5,
        '1up_text_images' => 6,
        '2up_medium' => 7,
        '2up_medium_quote' => 8,
        '2up_slant_image' => 9,
        '2up_text' => 10,
        '3up_three_column_item' => 12,
        '3up_three_columns' => 11,
        '3up_three_icon_item' => 14,
        '3up_three_icons' => 13,
        '4up_four_columns' => 15,
        '4up_four_icon_item' => 16,
        'agenda' => 17,
        'agenda_item' => 18,
        'company_list' => 19,
        'custom_menu' => 20,
        'custom_menu_link' => 21,
        'enhanced_hero' => 22,
        'factoid' => 23,
        'factoid_item' => 24,
        'faq' => 25,
        'faq_item' => 26,
        'full_text_c' => 27,
        'hero_image_slide' => 28,
        'learn_more' => 29,
        'location_map' => 30,
        'medium_hero' => 31,
        'member_list' => 32,
        'minisite_headline' => 33,
        'promo_bar' => 34,
        'quote_hero' => 35,
        'speaker' => 36,
        'speaker_item' => 38,
        'speaker_list' => 39,
        'speakers' => 37,
        'video' => 40,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-agenda-field_grey_row'.
  $field_instances['paragraphs_item-agenda-field_grey_row'] = array(
    'bundle' => 'agenda',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_grey_row',
    'label' => 'Grey Row',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-agenda-field_hero_headline'.
  $field_instances['paragraphs_item-agenda-field_hero_headline'] = array(
    'bundle' => 'agenda',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_hero_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-agenda-field_title'.
  $field_instances['paragraphs_item-agenda-field_title'] = array(
    'bundle' => 'agenda',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-agenda_item-field_column_link'.
  $field_instances['paragraphs_item-agenda_item-field_column_link'] = array(
    'bundle' => 'agenda_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_column_link',
    'label' => 'Speaker Name',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'paragraphs_item-agenda_item-field_description'.
  $field_instances['paragraphs_item-agenda_item-field_description'] = array(
    'bundle' => 'agenda_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-agenda_item-field_phone'.
  $field_instances['paragraphs_item-agenda_item-field_phone'] = array(
    'bundle' => 'agenda_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_phone',
    'label' => 'TIme',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-agenda_item-field_title'.
  $field_instances['paragraphs_item-agenda_item-field_title'] = array(
    'bundle' => 'agenda_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Event Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video-field_background_video'.
  $field_instances['paragraphs_item-banner_video-field_background_video'] = array(
    'bundle' => 'banner_video',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_background_video',
    'label' => 'Background Video',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-banner_video-field_poster'.
  $field_instances['paragraphs_item-banner_video-field_poster'] = array(
    'bundle' => 'banner_video',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_poster',
    'label' => 'Video Poster',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video-field_short_description'.
  $field_instances['paragraphs_item-banner_video-field_short_description'] = array(
    'bundle' => 'banner_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_short_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-banner_video-field_title'.
  $field_instances['paragraphs_item-banner_video-field_title'] = array(
    'bundle' => 'banner_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-banner_video-field_video_file'.
  $field_instances['paragraphs_item-banner_video-field_video_file'] = array(
    'bundle' => 'banner_video',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_file',
    'label' => 'Video File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mp4 mpg',
      'max_filesize' => '60 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_autoplay-field_anchor_name'.
  $field_instances['paragraphs_item-banner_video_autoplay-field_anchor_name'] = array(
    'bundle' => 'banner_video_autoplay',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_autoplay-field_content_font_color'.
  $field_instances['paragraphs_item-banner_video_autoplay-field_content_font_color'] = array(
    'bundle' => 'banner_video_autoplay',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_content_font_color',
    'label' => 'Content Font Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_autoplay-field_description'.
  $field_instances['paragraphs_item-banner_video_autoplay-field_description'] = array(
    'bundle' => 'banner_video_autoplay',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_autoplay-field_image'.
  $field_instances['paragraphs_item-banner_video_autoplay-field_image'] = array(
    'bundle' => 'banner_video_autoplay',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_autoplay-field_link'.
  $field_instances['paragraphs_item-banner_video_autoplay-field_link'] = array(
    'bundle' => 'banner_video_autoplay',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_autoplay-field_subtitle'.
  $field_instances['paragraphs_item-banner_video_autoplay-field_subtitle'] = array(
    'bundle' => 'banner_video_autoplay',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_subtitle',
    'label' => 'Caption',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_autoplay-field_title'.
  $field_instances['paragraphs_item-banner_video_autoplay-field_title'] = array(
    'bundle' => 'banner_video_autoplay',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_autoplay-field_video_file'.
  $field_instances['paragraphs_item-banner_video_autoplay-field_video_file'] = array(
    'bundle' => 'banner_video_autoplay',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_file',
    'label' => 'Video File',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mp4',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_popup-field_anchor_name'.
  $field_instances['paragraphs_item-banner_video_popup-field_anchor_name'] = array(
    'bundle' => 'banner_video_popup',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_popup-field_content_font_color'.
  $field_instances['paragraphs_item-banner_video_popup-field_content_font_color'] = array(
    'bundle' => 'banner_video_popup',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_content_font_color',
    'label' => 'Content Font Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_popup-field_description'.
  $field_instances['paragraphs_item-banner_video_popup-field_description'] = array(
    'bundle' => 'banner_video_popup',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_popup-field_grey_row'.
  $field_instances['paragraphs_item-banner_video_popup-field_grey_row'] = array(
    'bundle' => 'banner_video_popup',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_grey_row',
    'label' => 'Align text Center',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'paragraphs_item-banner_video_popup-field_image'.
  $field_instances['paragraphs_item-banner_video_popup-field_image'] = array(
    'bundle' => 'banner_video_popup',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-banner_video_popup-field_link'.
  $field_instances['paragraphs_item-banner_video_popup-field_link'] = array(
    'bundle' => 'banner_video_popup',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_popup-field_main_heading_font_color'.
  $field_instances['paragraphs_item-banner_video_popup-field_main_heading_font_color'] = array(
    'bundle' => 'banner_video_popup',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_main_heading_font_color',
    'label' => 'Main Heading Font Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_popup-field_subtitle'.
  $field_instances['paragraphs_item-banner_video_popup-field_subtitle'] = array(
    'bundle' => 'banner_video_popup',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_subtitle',
    'label' => 'Eyebrow',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-banner_video_popup-field_title'.
  $field_instances['paragraphs_item-banner_video_popup-field_title'] = array(
    'bundle' => 'banner_video_popup',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-banner_video_popup-field_video_file'.
  $field_instances['paragraphs_item-banner_video_popup-field_video_file'] = array(
    'bundle' => 'banner_video_popup',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_video_file',
    'label' => 'Video File',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mp4',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bio_section-field_description'.
  $field_instances['paragraphs_item-bio_section-field_description'] = array(
    'bundle' => 'bio_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Section text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bio_section-field_section_title'.
  $field_instances['paragraphs_item-bio_section-field_section_title'] = array(
    'bundle' => 'bio_section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_title',
    'label' => 'Section title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-bio_section_group-field_section_item'.
  $field_instances['paragraphs_item-bio_section_group-field_section_item'] = array(
    'bundle' => 'bio_section_group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_section_item',
    'label' => 'Section item',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_image' => -1,
        '1up_medium_hero' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_medium' => -1,
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '2up_text' => -1,
        '3up_factoid' => -1,
        '3up_factoid_item' => -1,
        '3up_participants_list' => -1,
        '3up_participants_list_item' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'bio_section' => 'bio_section',
        'bio_section_group' => -1,
        'company_list' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'custommenu_updated' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'gallery_item' => -1,
        'hero_image_slide' => -1,
        'image_gallery' => -1,
        'learn_more' => -1,
        'location_map' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'promo_bar' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_text' => 5,
        '1up_text_images' => 6,
        '2up_medium' => 7,
        '2up_medium_quote' => 8,
        '2up_slant_image' => 9,
        '2up_text' => 10,
        '3up_factoid' => 11,
        '3up_factoid_item' => 12,
        '3up_participants_list' => 13,
        '3up_participants_list_item' => 14,
        '3up_three_column_item' => 16,
        '3up_three_columns' => 15,
        '3up_three_icon_item' => 18,
        '3up_three_icons' => 17,
        '4up_four_columns' => 19,
        '4up_four_icon_item' => 20,
        'agenda' => 21,
        'agenda_item' => 22,
        'bio_section' => 23,
        'bio_section_group' => 24,
        'company_list' => 25,
        'custom_menu' => 27,
        'custom_menu_link' => 28,
        'custommenu_updated' => 26,
        'enhanced_hero' => 29,
        'factoid' => 30,
        'factoid_item' => 31,
        'faq' => 32,
        'faq_item' => 33,
        'full_text_c' => 34,
        'gallery_item' => 35,
        'hero_image_slide' => 36,
        'image_gallery' => 37,
        'learn_more' => 38,
        'location_map' => 39,
        'medium_hero' => 40,
        'member_list' => 42,
        'members_for_homepage' => 41,
        'minisite_headline' => 43,
        'more_posts_blog' => 44,
        'promo_bar' => 45,
        'quote_hero' => 46,
        'speaker' => 47,
        'speaker_item' => 49,
        'speaker_list' => 50,
        'speakers' => 48,
        'video' => 51,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-company_list-field_based_in'.
  $field_instances['paragraphs_item-company_list-field_based_in'] = array(
    'bundle' => 'company_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_based_in',
    'label' => 'Based in',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-company_list-field_company_description'.
  $field_instances['paragraphs_item-company_list-field_company_description'] = array(
    'bundle' => 'company_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_company_description',
    'label' => 'Company description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-company_list-field_company_name'.
  $field_instances['paragraphs_item-company_list-field_company_name'] = array(
    'bundle' => 'company_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_company_name',
    'label' => 'Company name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-company_list-field_employees'.
  $field_instances['paragraphs_item-company_list-field_employees'] = array(
    'bundle' => 'company_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_employees',
    'label' => 'Employees',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'paragraphs_item-company_list-field_image'.
  $field_instances['paragraphs_item-company_list-field_image'] = array(
    'bundle' => 'company_list',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-company_list-field_market_cap'.
  $field_instances['paragraphs_item-company_list-field_market_cap'] = array(
    'bundle' => 'company_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_market_cap',
    'label' => 'Market cap',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-company_list-field_revenues'.
  $field_instances['paragraphs_item-company_list-field_revenues'] = array(
    'bundle' => 'company_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_revenues',
    'label' => 'Revenues',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-custom_menu-field_content_font_color'.
  $field_instances['paragraphs_item-custom_menu-field_content_font_color'] = array(
    'bundle' => 'custom_menu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_content_font_color',
    'label' => 'Link Hover Font Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-custom_menu-field_fixed_header_menu'.
  $field_instances['paragraphs_item-custom_menu-field_fixed_header_menu'] = array(
    'bundle' => 'custom_menu',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_fixed_header_menu',
    'label' => 'Fixed Header Menu',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-custom_menu-field_full_image'.
  $field_instances['paragraphs_item-custom_menu-field_full_image'] = array(
    'bundle' => 'custom_menu',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_full_image',
    'label' => 'Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-custom_menu-field_logo_link'.
  $field_instances['paragraphs_item-custom_menu-field_logo_link'] = array(
    'bundle' => 'custom_menu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_logo_link',
    'label' => 'Logo Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-custom_menu-field_main_heading_font_color'.
  $field_instances['paragraphs_item-custom_menu-field_main_heading_font_color'] = array(
    'bundle' => 'custom_menu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_main_heading_font_color',
    'label' => 'Link Hover Bg Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-custom_menu-field_paragraph'.
  $field_instances['paragraphs_item-custom_menu-field_paragraph'] = array(
    'bundle' => 'custom_menu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph',
    'label' => 'Custom Menu Link',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_image' => -1,
        '1up_medium_hero' => -1,
        '1up_medium_quote' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_medium' => -1,
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '2up_small' => -1,
        '2up_small_item' => -1,
        '2up_text' => -1,
        '3up_factoid' => -1,
        '3up_factoid_item' => -1,
        '3up_list' => -1,
        '3up_list_item' => -1,
        '3up_participants_list' => -1,
        '3up_participants_list_item' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'banner_video' => -1,
        'bio_section' => -1,
        'bio_section_group' => -1,
        'company_list' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => 'custom_menu_link',
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'gallery_item' => -1,
        'hero_image_slide' => -1,
        'image_gallery' => -1,
        'learn_more' => -1,
        'link_pop_up' => -1,
        'location_map' => -1,
        'markup_roadmap' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'pop_up_image' => -1,
        'promo_bar' => -1,
        'promo_quote' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'two_up_small' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_medium_quote' => 5,
        '1up_text' => 6,
        '1up_text_images' => 7,
        '2up_medium' => 8,
        '2up_medium_quote' => 9,
        '2up_slant_image' => 10,
        '2up_small' => 11,
        '2up_small_item' => 12,
        '2up_text' => 13,
        '3up_factoid' => 14,
        '3up_factoid_item' => 15,
        '3up_list' => 16,
        '3up_list_item' => 17,
        '3up_participants_list' => 18,
        '3up_participants_list_item' => 19,
        '3up_three_column_item' => 21,
        '3up_three_columns' => 20,
        '3up_three_icon_item' => 23,
        '3up_three_icons' => 22,
        '4up_four_columns' => 24,
        '4up_four_icon_item' => 25,
        'agenda' => 26,
        'agenda_item' => 27,
        'banner_video' => 28,
        'bio_section' => 29,
        'bio_section_group' => 30,
        'company_list' => 31,
        'custom_menu' => 32,
        'custom_menu_link' => 33,
        'enhanced_hero' => 34,
        'factoid' => 35,
        'factoid_item' => 36,
        'faq' => 37,
        'faq_item' => 38,
        'full_text_c' => 39,
        'gallery_item' => 40,
        'hero_image_slide' => 41,
        'image_gallery' => 42,
        'learn_more' => 43,
        'link_pop_up' => 44,
        'location_map' => 45,
        'markup_roadmap' => 46,
        'medium_hero' => 47,
        'member_list' => 49,
        'members_for_homepage' => 48,
        'minisite_headline' => 50,
        'more_posts_blog' => 51,
        'pop_up_image' => 52,
        'promo_bar' => 53,
        'promo_quote' => 54,
        'quote_hero' => 55,
        'speaker' => 56,
        'speaker_item' => 58,
        'speaker_list' => 59,
        'speakers' => 57,
        'two_up_small' => 60,
        'video' => 61,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-custom_menu_link-field_grey_row'.
  $field_instances['paragraphs_item-custom_menu_link-field_grey_row'] = array(
    'bundle' => 'custom_menu_link',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'If checked, would treat above link as anchor link instead of a relative link
Anchor link Eg: #promo ( "promo" is the section to which it should be anchor linked)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_grey_row',
    'label' => 'Anchor Link',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-custom_menu_link-field_link'.
  $field_instances['paragraphs_item-custom_menu_link-field_link'] = array(
    'bundle' => 'custom_menu_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-gallery_item-field_description'.
  $field_instances['paragraphs_item-gallery_item-field_description'] = array(
    'bundle' => 'gallery_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-gallery_item-field_hero_description'.
  $field_instances['paragraphs_item-gallery_item-field_hero_description'] = array(
    'bundle' => 'gallery_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_hero_description',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-gallery_item-field_image'.
  $field_instances['paragraphs_item-gallery_item-field_image'] = array(
    'bundle' => 'gallery_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'dragdropfile_enabled' => 1,
        'dragdropfile_title' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image_gallery-field_anchor_name'.
  $field_instances['paragraphs_item-image_gallery-field_anchor_name'] = array(
    'bundle' => 'image_gallery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-image_gallery-field_left_align_section_heading'.
  $field_instances['paragraphs_item-image_gallery-field_left_align_section_heading'] = array(
    'bundle' => 'image_gallery',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_left_align_section_heading',
    'label' => 'Left Align Title',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image_gallery-field_paragraph'.
  $field_instances['paragraphs_item-image_gallery-field_paragraph'] = array(
    'bundle' => 'image_gallery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Its recommended to upload gallery images of same dimension',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_paragraph',
    'label' => 'Gallery Item',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_image' => -1,
        '1up_medium_hero' => -1,
        '1up_medium_quote' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_columns' => -1,
        '2up_columns_item' => -1,
        '2up_medium' => -1,
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '2up_small' => -1,
        '2up_small_item' => -1,
        '2up_text' => -1,
        '3up_factoid' => -1,
        '3up_factoid_item' => -1,
        '3up_list' => -1,
        '3up_list_item' => -1,
        '3up_participants_list' => -1,
        '3up_participants_list_item' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'banner_video' => -1,
        'banner_video_autoplay' => -1,
        'banner_video_popup' => -1,
        'bio_section' => -1,
        'bio_section_group' => -1,
        'company_list' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'gallery_item' => 'gallery_item',
        'hero_image_slide' => -1,
        'image_gallery' => -1,
        'learn_more' => -1,
        'link_pop_up' => -1,
        'location_map' => -1,
        'markup_roadmap' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'pop_up_image' => -1,
        'pop_up_link' => -1,
        'promo_bar' => -1,
        'promo_quote' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'two_up_small' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_medium_quote' => 54,
        '1up_text' => 5,
        '1up_text_images' => 6,
        '2up_columns' => 57,
        '2up_columns_item' => 58,
        '2up_medium' => 7,
        '2up_medium_quote' => 8,
        '2up_slant_image' => 9,
        '2up_small' => 62,
        '2up_small_item' => 63,
        '2up_text' => 10,
        '3up_factoid' => 11,
        '3up_factoid_item' => 12,
        '3up_list' => 67,
        '3up_list_item' => 68,
        '3up_participants_list' => 13,
        '3up_participants_list_item' => 14,
        '3up_three_column_item' => 16,
        '3up_three_columns' => 15,
        '3up_three_icon_item' => 18,
        '3up_three_icons' => 17,
        '4up_four_columns' => 19,
        '4up_four_icon_item' => 20,
        'agenda' => 21,
        'agenda_item' => 22,
        'banner_video' => 79,
        'banner_video_autoplay' => 80,
        'banner_video_popup' => 81,
        'bio_section' => 82,
        'bio_section_group' => 83,
        'company_list' => 23,
        'custom_menu' => 25,
        'custom_menu_link' => 26,
        'enhanced_hero' => 27,
        'factoid' => 28,
        'factoid_item' => 29,
        'faq' => 30,
        'faq_item' => 31,
        'full_text_c' => 32,
        'gallery_item' => 33,
        'hero_image_slide' => 34,
        'image_gallery' => 35,
        'learn_more' => 36,
        'link_pop_up' => 97,
        'location_map' => 37,
        'markup_roadmap' => 99,
        'medium_hero' => 38,
        'member_list' => 40,
        'members_for_homepage' => 39,
        'minisite_headline' => 41,
        'more_posts_blog' => 42,
        'pop_up_image' => 105,
        'pop_up_link' => 106,
        'promo_bar' => 43,
        'promo_quote' => 108,
        'quote_hero' => 44,
        'speaker' => 45,
        'speaker_item' => 47,
        'speaker_list' => 48,
        'speakers' => 46,
        'two_up_small' => 114,
        'video' => 49,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image_gallery-field_title'.
  $field_instances['paragraphs_item-image_gallery-field_title'] = array(
    'bundle' => 'image_gallery',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-link_pop_up-field_full_image'.
  $field_instances['paragraphs_item-link_pop_up-field_full_image'] = array(
    'bundle' => 'link_pop_up',
    'deleted' => 0,
    'description' => 'On uploading thumbnail image, the thumbnail image is treated as pop up link.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_full_image',
    'label' => 'Thumbnail Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'dragdropfile_enabled' => 1,
        'dragdropfile_title' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-link_pop_up-field_image'.
  $field_instances['paragraphs_item-link_pop_up-field_image'] = array(
    'bundle' => 'link_pop_up',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'First Slide',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'dragdropfile_enabled' => 1,
        'dragdropfile_title' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-link_pop_up-field_link'.
  $field_instances['paragraphs_item-link_pop_up-field_link'] = array(
    'bundle' => 'link_pop_up',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 1,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-link_pop_up-field_pop_up'.
  $field_instances['paragraphs_item-link_pop_up-field_pop_up'] = array(
    'bundle' => 'link_pop_up',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_pop_up',
    'label' => 'Pop up',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-link_pop_up-field_pop_up_content'.
  $field_instances['paragraphs_item-link_pop_up-field_pop_up_content'] = array(
    'bundle' => 'link_pop_up',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_pop_up_content',
    'label' => 'Pop Up Content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '1up_hero' => -1,
        '1up_image' => -1,
        '1up_medium_hero' => -1,
        '1up_text' => -1,
        '1up_text_images' => -1,
        '2up_medium' => -1,
        '2up_medium_quote' => -1,
        '2up_slant_image' => -1,
        '2up_text' => -1,
        '3up_factoid' => -1,
        '3up_factoid_item' => -1,
        '3up_participants_list' => -1,
        '3up_participants_list_item' => -1,
        '3up_three_column_item' => -1,
        '3up_three_columns' => -1,
        '3up_three_icon_item' => -1,
        '3up_three_icons' => -1,
        '4up_four_columns' => -1,
        '4up_four_icon_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'bio_section' => -1,
        'bio_section_group' => -1,
        'company_list' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'custommenu_updated' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'gallery_item' => -1,
        'hero_image_slide' => -1,
        'image_gallery' => -1,
        'learn_more' => -1,
        'link_pop_up' => -1,
        'location_map' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'pop_up_image' => 'pop_up_image',
        'promo_bar' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'two_up_small' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_text' => 5,
        '1up_text_images' => 6,
        '2up_medium' => 7,
        '2up_medium_quote' => 8,
        '2up_slant_image' => 9,
        '2up_text' => 10,
        '3up_factoid' => 11,
        '3up_factoid_item' => 12,
        '3up_participants_list' => 13,
        '3up_participants_list_item' => 14,
        '3up_three_column_item' => 16,
        '3up_three_columns' => 15,
        '3up_three_icon_item' => 18,
        '3up_three_icons' => 17,
        '4up_four_columns' => 19,
        '4up_four_icon_item' => 20,
        'agenda' => 21,
        'agenda_item' => 22,
        'bio_section' => 23,
        'bio_section_group' => 24,
        'company_list' => 25,
        'custom_menu' => 27,
        'custom_menu_link' => 28,
        'custommenu_updated' => 26,
        'enhanced_hero' => 29,
        'factoid' => 30,
        'factoid_item' => 31,
        'faq' => 32,
        'faq_item' => 33,
        'full_text_c' => 34,
        'gallery_item' => 35,
        'hero_image_slide' => 36,
        'image_gallery' => 37,
        'learn_more' => 38,
        'link_pop_up' => 39,
        'location_map' => 40,
        'medium_hero' => 41,
        'member_list' => 43,
        'members_for_homepage' => 42,
        'minisite_headline' => 44,
        'more_posts_blog' => 45,
        'pop_up_image' => 46,
        'promo_bar' => 47,
        'quote_hero' => 48,
        'speaker' => 49,
        'speaker_item' => 51,
        'speaker_list' => 52,
        'speakers' => 50,
        'two_up_small' => 53,
        'video' => 54,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-link_pop_up-field_pop_up_slideshow'.
  $field_instances['paragraphs_item-link_pop_up-field_pop_up_slideshow'] = array(
    'bundle' => 'link_pop_up',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Select above to display pop up content as slideshow',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_pop_up_slideshow',
    'label' => 'Pop up Slideshow',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-link_pop_up-field_pop_up_type'.
  $field_instances['paragraphs_item-link_pop_up-field_pop_up_type'] = array(
    'bundle' => 'link_pop_up',
    'default_value' => array(
      0 => array(
        'value' => 'iframe',
      ),
    ),
    'deleted' => 0,
    'description' => 'For adding a "video" in pop up, please select pop type as "iframe" and provide the video URL in the link
For adding an "image" in pop up, please select pop type as "inline" and check the "slideshow" field to display images as a slideshow',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_pop_up_type',
    'label' => 'Pop Up Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-markup_roadmap-field_markup'.
  $field_instances['paragraphs_item-markup_roadmap-field_markup'] = array(
    'bundle' => 'markup_roadmap',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_markup',
    'label' => 'Markup',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-minisite_headline-field_anchor_name'.
  $field_instances['paragraphs_item-minisite_headline-field_anchor_name'] = array(
    'bundle' => 'minisite_headline',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-minisite_headline-field_description'.
  $field_instances['paragraphs_item-minisite_headline-field_description'] = array(
    'bundle' => 'minisite_headline',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-minisite_headline-field_title'.
  $field_instances['paragraphs_item-minisite_headline-field_title'] = array(
    'bundle' => 'minisite_headline',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-more_posts_blog-field_left_eyebrow'.
  $field_instances['paragraphs_item-more_posts_blog-field_left_eyebrow'] = array(
    'bundle' => 'more_posts_blog',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_left_eyebrow',
    'label' => 'Left Eyebrow',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-more_posts_blog-field_left_post_title'.
  $field_instances['paragraphs_item-more_posts_blog-field_left_post_title'] = array(
    'bundle' => 'more_posts_blog',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_left_post_title',
    'label' => 'Left Post Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-more_posts_blog-field_right_eyebrow'.
  $field_instances['paragraphs_item-more_posts_blog-field_right_eyebrow'] = array(
    'bundle' => 'more_posts_blog',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_right_eyebrow',
    'label' => 'Right Eyebrow',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-more_posts_blog-field_right_post_title'.
  $field_instances['paragraphs_item-more_posts_blog-field_right_post_title'] = array(
    'bundle' => 'more_posts_blog',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_right_post_title',
    'label' => 'Right Post Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-more_posts_blog-field_thumbnail_left'.
  $field_instances['paragraphs_item-more_posts_blog-field_thumbnail_left'] = array(
    'bundle' => 'more_posts_blog',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_thumbnail_left',
    'label' => 'Thumbnail Left',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-more_posts_blog-field_thumbnail_right'.
  $field_instances['paragraphs_item-more_posts_blog-field_thumbnail_right'] = array(
    'bundle' => 'more_posts_blog',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_thumbnail_right',
    'label' => 'Thumbnail Right',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-more_posts_blog-field_title'.
  $field_instances['paragraphs_item-more_posts_blog-field_title'] = array(
    'bundle' => 'more_posts_blog',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-pop_up_image-field_image'.
  $field_instances['paragraphs_item-pop_up_image-field_image'] = array(
    'bundle' => 'pop_up_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'dragdropfile_enabled' => 1,
        'dragdropfile_title' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-pop_up_link-field_links'.
  $field_instances['paragraphs_item-pop_up_link-field_links'] = array(
    'bundle' => 'pop_up_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_links',
    'label' => 'Links',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-promo_quote-field_anchor_name'.
  $field_instances['paragraphs_item-promo_quote-field_anchor_name'] = array(
    'bundle' => 'promo_quote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-promo_quote-field_subtitle'.
  $field_instances['paragraphs_item-promo_quote-field_subtitle'] = array(
    'bundle' => 'promo_quote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_subtitle',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-promo_quote-field_title'.
  $field_instances['paragraphs_item-promo_quote-field_title'] = array(
    'bundle' => 'promo_quote',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-two_up_small-field_anchor_name'.
  $field_instances['paragraphs_item-two_up_small-field_anchor_name'] = array(
    'bundle' => 'two_up_small',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_anchor_name',
    'label' => 'Anchor Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-two_up_small-field_eyebrow'.
  $field_instances['paragraphs_item-two_up_small-field_eyebrow'] = array(
    'bundle' => 'two_up_small',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_eyebrow',
    'label' => 'eyebrow',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-two_up_small-field_left_post_title'.
  $field_instances['paragraphs_item-two_up_small-field_left_post_title'] = array(
    'bundle' => 'two_up_small',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_left_post_title',
    'label' => 'Left Post Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-two_up_small-field_right_post_title'.
  $field_instances['paragraphs_item-two_up_small-field_right_post_title'] = array(
    'bundle' => 'two_up_small',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_right_post_title',
    'label' => 'Right Post Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-two_up_small-field_thumbnail_left'.
  $field_instances['paragraphs_item-two_up_small-field_thumbnail_left'] = array(
    'bundle' => 'two_up_small',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_thumbnail_left',
    'label' => 'Thumbnail Left',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'dragdropfile_enabled' => 1,
        'dragdropfile_title' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-two_up_small-field_thumbnail_right'.
  $field_instances['paragraphs_item-two_up_small-field_thumbnail_right'] = array(
    'bundle' => 'two_up_small',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_thumbnail_right',
    'label' => 'Thumbnail Right',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'dragdropfile_enabled' => 1,
        'dragdropfile_title' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('2Up Small Item');
  t('4up headline');
  t('Add default background color to the section');
  t('Agenda');
  t('Align text Center');
  t('Align thumbnail to right');
  t('Anchor Link');
  t('Anchor Name');
  t('Anchor name');
  t('Anchor paragraph');
  t('Background Video');
  t('Based in');
  t('Blockquote Color');
  t('Caption');
  t('Company description');
  t('Company name');
  t('Content Font Color');
  t('Custom Menu Link');
  t('Description');
  t('Designation');
  t('Display as thumbnail image');
  t('Employees');
  t('Event Title');
  t('Eyebrow');
  t('First Slide');
  t('Fixed Header Menu');
  t('For adding a "video" in pop up, please select pop type as "iframe" and provide the video URL in the link
For adding an "image" in pop up, please select pop type as "inline" and check the "slideshow" field to display images as a slideshow');
  t('Gallery Item');
  t('Grey Row');
  t('Heading');
  t('Headline');
  t('Icon');
  t('If checked, would treat above link as anchor link instead of a relative link
Anchor link Eg: #promo ( "promo" is the section to which it should be anchor linked)');
  t('Image');
  t('Items');
  t('Its recommended to upload gallery images of same dimension');
  t('Left Align Section Heading');
  t('Left Align Title');
  t('Left Eyebrow');
  t('Left Post Title');
  t('Link');
  t('Link Hover Bg Color');
  t('Link Hover Font Color');
  t('Links');
  t('Logo');
  t('Logo Link');
  t('Main Heading Font Color');
  t('Market cap');
  t('Markup');
  t('Name');
  t('On uploading thumbnail image, the thumbnail image is treated as pop up link.');
  t('Paragraph');
  t('Pop Up Content');
  t('Pop Up Type');
  t('Pop up');
  t('Pop up Slideshow');
  t('Quote');
  t('Register');
  t('Revenues');
  t('Right Eyebrow');
  t('Right Post Title');
  t('Section item');
  t('Section text');
  t('Section title');
  t('Select above to display pop up content as slideshow');
  t('Speaker Name');
  t('Specialization');
  t('Subtitle');
  t('TIme');
  t('Team Member');
  t('Thumbnail');
  t('Thumbnail Image');
  t('Thumbnail Left');
  t('Thumbnail Right');
  t('Title');
  t('Video');
  t('Video File');
  t('Video Poster');
  t('Wrapper Background Color');
  t('eyebrow');

  return $field_instances;
}
