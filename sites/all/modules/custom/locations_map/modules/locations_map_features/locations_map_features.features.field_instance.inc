<?php
/**
 * @file
 * locations_map_features.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function locations_map_features_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'paragraphs_item-locations_map-field_locsmap_highlight'.
  $field_instances['paragraphs_item-locations_map-field_locsmap_highlight'] = array(
    'bundle' => 'locations_map',
    'default_value' => array(
      0 => array(
        'value' => 'country',
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
    'field_name' => 'field_locsmap_highlight',
    'label' => 'Highlight',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-locations_map-field_locsmap_item'.
  $field_instances['paragraphs_item-locations_map-field_locsmap_item'] = array(
    'bundle' => 'locations_map',
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
    'field_name' => 'field_locsmap_item',
    'label' => 'Location',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'accordion' => -1,
        'accordion_header' => -1,
        'accordion_tab_item' => -1,
        'accordion_tabs' => -1,
        'accordion_wrapper' => -1,
        'back_link' => -1,
        'banner' => -1,
        'banner_image' => -1,
        'banner_module' => -1,
        'banner_slideshow' => -1,
        'banner_slideshow_item' => -1,
        'banner_video' => -1,
        'banner_video_background' => -1,
        'block_reference' => -1,
        'card' => -1,
        'card_module' => -1,
        'circle_header' => -1,
        'circles' => -1,
        'circles_wrapper' => -1,
        'custom_header' => -1,
        'footer' => -1,
        'footer_menu' => -1,
        'four_columns_card' => -1,
        'four_columns_overlay_card' => -1,
        'full_text_c' => -1,
        'gallery_item' => -1,
        'grid_wall_fw_item' => -1,
        'header' => -1,
        'header_link' => -1,
        'headline' => -1,
        'help_item' => -1,
        'image' => -1,
        'image_gallery' => -1,
        'initiatives_item' => -1,
        'intiatives' => -1,
        'links' => -1,
        'location_map' => -1,
        'locations_map' => -1,
        'locations_map_item' => 'locations_map_item',
        'media_video' => -1,
        'middle_banner' => -1,
        'news_item' => -1,
        'one_column_jumbotron' => -1,
        'one_column_video' => -1,
        'our_team_item' => -1,
        'promo_bar' => -1,
        'quotes' => -1,
        'quotes_link' => -1,
        'resource_item' => -1,
        'steps' => -1,
        'steps_column_wrapper' => -1,
        'steps_two_columns' => -1,
        'steps_two_columns_par' => -1,
        'team' => -1,
        'team_member' => -1,
        'three_col_accordion' => -1,
        'three_col_accordion_item' => -1,
        'three_columns_card' => -1,
        'three_columns_card_help' => -1,
        'three_columns_card_news' => -1,
        'three_up_factoid' => -1,
        'tools_item' => -1,
        'two_column' => -1,
        'two_column_item' => -1,
        'two_column_overview' => -1,
        'two_columns_event' => -1,
        'two_columns_with_image' => -1,
        'two_columns_with_video' => -1,
        'two_up' => -1,
        'video' => -1,
        'wall_wrapper' => -1,
      ),
      'bundle_weights' => array(
        'accordion' => 2,
        'accordion_header' => 3,
        'accordion_tab_item' => 5,
        'accordion_tabs' => 4,
        'accordion_wrapper' => 6,
        'back_link' => 7,
        'banner' => 8,
        'banner_image' => 9,
        'banner_module' => 10,
        'banner_slideshow' => 11,
        'banner_slideshow_item' => 12,
        'banner_video' => 13,
        'banner_video_background' => 14,
        'block_reference' => 15,
        'card' => 16,
        'card_module' => 17,
        'circle_header' => 20,
        'circles' => 18,
        'circles_wrapper' => 19,
        'custom_header' => 21,
        'footer' => 22,
        'footer_menu' => 23,
        'four_columns_card' => 24,
        'four_columns_overlay_card' => 25,
        'full_text_c' => 26,
        'gallery_item' => 27,
        'grid_wall_fw_item' => 28,
        'header' => 29,
        'header_link' => 30,
        'headline' => 31,
        'help_item' => 32,
        'image' => 33,
        'image_gallery' => 34,
        'initiatives_item' => 35,
        'intiatives' => 36,
        'links' => 37,
        'location_map' => 40,
        'locations_map' => 38,
        'locations_map_item' => 39,
        'media_video' => 41,
        'middle_banner' => 42,
        'news_item' => 43,
        'one_column_jumbotron' => 44,
        'one_column_video' => 45,
        'our_team_item' => 46,
        'promo_bar' => 47,
        'quotes' => 48,
        'quotes_link' => 49,
        'resource_item' => 50,
        'steps' => 51,
        'steps_column_wrapper' => 52,
        'steps_two_columns' => 53,
        'steps_two_columns_par' => 54,
        'team' => 55,
        'team_member' => 56,
        'three_col_accordion' => 60,
        'three_col_accordion_item' => 61,
        'three_columns_card' => 57,
        'three_columns_card_help' => 58,
        'three_columns_card_news' => 59,
        'three_up_factoid' => 62,
        'tools_item' => 63,
        'two_column' => 64,
        'two_column_item' => 68,
        'two_column_overview' => 69,
        'two_columns_event' => 65,
        'two_columns_with_image' => 66,
        'two_columns_with_video' => 67,
        'two_up' => 70,
        'video' => 71,
        'wall_wrapper' => 72,
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
  // 'paragraphs_item-locations_map-field_locsmap_maker_fill_color'.
  $field_instances['paragraphs_item-locations_map-field_locsmap_maker_fill_color'] = array(
    'bundle' => 'locations_map',
    'default_value' => array(
      0 => array(
        'rgb' => '#2b9d11',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
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
    'field_name' => 'field_locsmap_maker_fill_color',
    'label' => 'Maker Fill Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-locations_map-field_locsmap_maker_h_fill_color'.
  $field_instances['paragraphs_item-locations_map-field_locsmap_maker_h_fill_color'] = array(
    'bundle' => 'locations_map',
    'default_value' => array(
      0 => array(
        'rgb' => '#2b9d11',
      ),
    ),
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
    'field_name' => 'field_locsmap_maker_h_fill_color',
    'label' => 'Maker Hover Fill Color',
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
  // 'paragraphs_item-locations_map-field_locsmap_maker_radius'.
  $field_instances['paragraphs_item-locations_map-field_locsmap_maker_radius'] = array(
    'bundle' => 'locations_map',
    'default_value' => array(
      0 => array(
        'value' => 5,
      ),
    ),
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
    'field_name' => 'field_locsmap_maker_radius',
    'label' => 'Maker Radius',
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
  // 'paragraphs_item-locations_map-field_locsmap_title'.
  $field_instances['paragraphs_item-locations_map-field_locsmap_title'] = array(
    'bundle' => 'locations_map',
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
    'field_name' => 'field_locsmap_title',
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

  // Exported field_instance:
  // 'paragraphs_item-locations_map_item-field_locsmap_item_country'.
  $field_instances['paragraphs_item-locations_map_item-field_locsmap_item_country'] = array(
    'bundle' => 'locations_map_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_locsmap_item_country',
    'label' => 'Country',
    'required' => 0,
    'settings' => array(
      'countries' => array(),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-locations_map_item-field_locsmap_item_desc'.
  $field_instances['paragraphs_item-locations_map_item-field_locsmap_item_desc'] = array(
    'bundle' => 'locations_map_item',
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
    'field_name' => 'field_locsmap_item_desc',
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
  // 'paragraphs_item-locations_map_item-field_locsmap_item_download_link'.
  $field_instances['paragraphs_item-locations_map_item-field_locsmap_item_download_link'] = array(
    'bundle' => 'locations_map_item',
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
    'field_name' => 'field_locsmap_item_download_link',
    'label' => 'Download Link',
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
      'title' => 'required',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-locations_map_item-field_locsmap_item_image'.
  $field_instances['paragraphs_item-locations_map_item-field_locsmap_item_image'] = array(
    'bundle' => 'locations_map_item',
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
    'field_name' => 'field_locsmap_item_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'locations_map/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'resup' => 0,
      'resup_autostart' => 0,
      'resup_max_filesize' => '',
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
  // 'paragraphs_item-locations_map_item-field_locsmap_item_latitude'.
  $field_instances['paragraphs_item-locations_map_item-field_locsmap_item_latitude'] = array(
    'bundle' => 'locations_map_item',
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
    'field_name' => 'field_locsmap_item_latitude',
    'label' => 'Latitude',
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
  // 'paragraphs_item-locations_map_item-field_locsmap_item_location'.
  $field_instances['paragraphs_item-locations_map_item-field_locsmap_item_location'] = array(
    'bundle' => 'locations_map_item',
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
    'field_name' => 'field_locsmap_item_location',
    'label' => 'Location',
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
  // 'paragraphs_item-locations_map_item-field_locsmap_item_longitude'.
  $field_instances['paragraphs_item-locations_map_item-field_locsmap_item_longitude'] = array(
    'bundle' => 'locations_map_item',
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
    'field_name' => 'field_locsmap_item_longitude',
    'label' => 'Longitude',
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
  // 'paragraphs_item-locations_map_item-field_locsmap_item_subtitle'.
  $field_instances['paragraphs_item-locations_map_item-field_locsmap_item_subtitle'] = array(
    'bundle' => 'locations_map_item',
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
    'field_name' => 'field_locsmap_item_subtitle',
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

  // Exported field_instance:
  // 'paragraphs_item-locations_map_item-field_locsmap_item_title'.
  $field_instances['paragraphs_item-locations_map_item-field_locsmap_item_title'] = array(
    'bundle' => 'locations_map_item',
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
    'field_name' => 'field_locsmap_item_title',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Country');
  t('Description');
  t('Download Link');
  t('Highlight');
  t('Image');
  t('Latitude');
  t('Location');
  t('Longitude');
  t('Maker Fill Color');
  t('Maker Hover Fill Color');
  t('Maker Radius');
  t('Subtitle');
  t('Title');

  return $field_instances;
}
