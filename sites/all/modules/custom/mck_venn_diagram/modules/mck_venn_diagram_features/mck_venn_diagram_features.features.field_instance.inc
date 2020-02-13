<?php
/**
 * @file
 * mck_venn_diagram_features.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mck_venn_diagram_features_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram-field_vd_active_circle_bc'.
  $field_instances['paragraphs_item-venn_diagram-field_vd_active_circle_bc'] = array(
    'bundle' => 'venn_diagram',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
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
    'field_name' => 'field_vd_active_circle_bc',
    'label' => 'Active circle background',
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
  // 'paragraphs_item-venn_diagram-field_vd_active_circle_tc'.
  $field_instances['paragraphs_item-venn_diagram-field_vd_active_circle_tc'] = array(
    'bundle' => 'venn_diagram',
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
    'field_name' => 'field_vd_active_circle_tc',
    'label' => 'Active circle text color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-venn_diagram-field_vd_anchor'.
  $field_instances['paragraphs_item-venn_diagram-field_vd_anchor'] = array(
    'bundle' => 'venn_diagram',
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
    'field_name' => 'field_vd_anchor',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-venn_diagram-field_vd_desc'.
  $field_instances['paragraphs_item-venn_diagram-field_vd_desc'] = array(
    'bundle' => 'venn_diagram',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_vd_desc',
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

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram-field_vd_inactive_circle_bc'.
  $field_instances['paragraphs_item-venn_diagram-field_vd_inactive_circle_bc'] = array(
    'bundle' => 'venn_diagram',
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
    'field_name' => 'field_vd_inactive_circle_bc',
    'label' => 'Inactive circle background',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram-field_vd_inactive_circle_tc'.
  $field_instances['paragraphs_item-venn_diagram-field_vd_inactive_circle_tc'] = array(
    'bundle' => 'venn_diagram',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
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
    'field_name' => 'field_vd_inactive_circle_tc',
    'label' => 'Inactive circle text color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'paragraphs_item-venn_diagram-field_vd_item'.
  $field_instances['paragraphs_item-venn_diagram-field_vd_item'] = array(
    'bundle' => 'venn_diagram',
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
    'field_name' => 'field_vd_item',
    'label' => 'Item',
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
        '2up_media' => -1,
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
        'accordion_card' => -1,
        'accordion_card_module' => -1,
        'accordion_card_more_content' => -1,
        'accordion_module' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'banner_tab_item' => -1,
        'banner_video' => -1,
        'banner_video_autoplay' => -1,
        'banner_video_popup' => -1,
        'banner_with_tabs' => -1,
        'bio_section' => -1,
        'bio_section_group' => -1,
        'card' => -1,
        'card_module' => -1,
        'carousel' => -1,
        'carousel_item' => -1,
        'carousel_nav_item' => -1,
        'case_study_accordion' => -1,
        'company_list' => -1,
        'content_search' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'gallery_item' => -1,
        'grid' => -1,
        'grid_item' => -1,
        'hero_image_slide' => -1,
        'image_gallery' => -1,
        'infographic' => -1,
        'infographic_item' => -1,
        'learn_more' => -1,
        'link_pop_up' => -1,
        'location_map' => -1,
        'locations_map' => -1,
        'locations_map_item' => -1,
        'markup_roadmap' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'multi_row_card_module' => -1,
        'partnership_mark_enhanced_hero' => -1,
        'playlist_video' => -1,
        'pop_up_image' => -1,
        'pop_up_link' => -1,
        'promo_bar' => -1,
        'promo_quote' => -1,
        'pvw' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'three_col_accordion' => -1,
        'two_up_small' => -1,
        'venn_diagram' => -1,
        'venn_diagram_item' => 'venn_diagram_item',
        'vertical_tabs' => -1,
        'video' => -1,
        'views' => -1,
      ),
      'bundle_weights' => array(
        '1up_hero' => 2,
        '1up_image' => 3,
        '1up_medium_hero' => 4,
        '1up_medium_quote' => 5,
        '1up_text' => 6,
        '1up_text_images' => 7,
        '2up_columns' => 8,
        '2up_columns_item' => 9,
        '2up_media' => 10,
        '2up_medium' => 11,
        '2up_medium_quote' => 12,
        '2up_slant_image' => 13,
        '2up_small' => 14,
        '2up_small_item' => 15,
        '2up_text' => 16,
        '3up_factoid' => 17,
        '3up_factoid_item' => 18,
        '3up_list' => 19,
        '3up_list_item' => 20,
        '3up_participants_list' => 21,
        '3up_participants_list_item' => 22,
        '3up_three_column_item' => 24,
        '3up_three_columns' => 23,
        '3up_three_icon_item' => 26,
        '3up_three_icons' => 25,
        '4up_four_columns' => 27,
        '4up_four_icon_item' => 28,
        'accordion_card' => 29,
        'accordion_card_module' => 30,
        'accordion_card_more_content' => 31,
        'accordion_module' => 32,
        'agenda' => 33,
        'agenda_item' => 34,
        'banner_tab_item' => 35,
        'banner_video' => 36,
        'banner_video_autoplay' => 37,
        'banner_video_popup' => 38,
        'banner_with_tabs' => 39,
        'bio_section' => 40,
        'bio_section_group' => 41,
        'card' => 42,
        'card_module' => 43,
        'carousel' => 44,
        'carousel_item' => 45,
        'carousel_nav_item' => 46,
        'case_study_accordion' => 47,
        'company_list' => 48,
        'content_search' => 49,
        'custom_menu' => 50,
        'custom_menu_link' => 51,
        'enhanced_hero' => 52,
        'factoid' => 53,
        'factoid_item' => 54,
        'faq' => 55,
        'faq_item' => 56,
        'full_text_c' => 57,
        'gallery_item' => 58,
        'grid' => 59,
        'grid_item' => 60,
        'hero_image_slide' => 61,
        'image_gallery' => 62,
        'infographic' => 63,
        'infographic_item' => 64,
        'learn_more' => 65,
        'link_pop_up' => 66,
        'location_map' => 69,
        'locations_map' => 67,
        'locations_map_item' => 68,
        'markup_roadmap' => 70,
        'medium_hero' => 71,
        'member_list' => 73,
        'members_for_homepage' => 72,
        'minisite_headline' => 74,
        'more_posts_blog' => 75,
        'multi_row_card_module' => 76,
        'partnership_mark_enhanced_hero' => 77,
        'playlist_video' => 78,
        'pop_up_image' => 79,
        'pop_up_link' => 80,
        'promo_bar' => 81,
        'promo_quote' => 82,
        'pvw' => 83,
        'quote_hero' => 84,
        'speaker' => 85,
        'speaker_item' => 87,
        'speaker_list' => 88,
        'speakers' => 86,
        'three_col_accordion' => 89,
        'two_up_small' => 90,
        'venn_diagram' => 91,
        'venn_diagram_item' => 92,
        'vertical_tabs' => 93,
        'video' => 94,
        'views' => 95,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram-field_vd_num_of_diagrams'.
  $field_instances['paragraphs_item-venn_diagram-field_vd_num_of_diagrams'] = array(
    'bundle' => 'venn_diagram',
    'default_value' => NULL,
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
    'field_name' => 'field_vd_num_of_diagrams',
    'label' => 'How many diagrams to be displayed?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-venn_diagram-field_vd_subtitle'.
  $field_instances['paragraphs_item-venn_diagram-field_vd_subtitle'] = array(
    'bundle' => 'venn_diagram',
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
    'field_name' => 'field_vd_subtitle',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-venn_diagram-field_vd_template'.
  $field_instances['paragraphs_item-venn_diagram-field_vd_template'] = array(
    'bundle' => 'venn_diagram',
    'default_value' => array(
      0 => array(
        'value' => 'vertical',
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
    'field_name' => 'field_vd_template',
    'label' => 'Template',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-venn_diagram-field_vd_title'.
  $field_instances['paragraphs_item-venn_diagram-field_vd_title'] = array(
    'bundle' => 'venn_diagram',
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
    'field_name' => 'field_vd_title',
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
  // 'paragraphs_item-venn_diagram_item-field_vd_item_desc'.
  $field_instances['paragraphs_item-venn_diagram_item-field_vd_item_desc'] = array(
    'bundle' => 'venn_diagram_item',
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
    'field_name' => 'field_vd_item_desc',
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

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item-field_vd_item_ibc'.
  $field_instances['paragraphs_item-venn_diagram_item-field_vd_item_ibc'] = array(
    'bundle' => 'venn_diagram_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
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
    'field_name' => 'field_vd_item_ibc',
    'label' => 'Info background',
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
  // 'paragraphs_item-venn_diagram_item-field_vd_item_icon'.
  $field_instances['paragraphs_item-venn_diagram_item-field_vd_item_icon'] = array(
    'bundle' => 'venn_diagram_item',
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
    'field_name' => 'field_vd_item_icon',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'venn_diagram/icons',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item-field_vd_item_ii'.
  $field_instances['paragraphs_item-venn_diagram_item-field_vd_item_ii'] = array(
    'bundle' => 'venn_diagram_item',
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
    'field_name' => 'field_vd_item_ii',
    'label' => 'Info image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'venn_diagram/info_image',
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
  // 'paragraphs_item-venn_diagram_item-field_vd_item_ii_pos'.
  $field_instances['paragraphs_item-venn_diagram_item-field_vd_item_ii_pos'] = array(
    'bundle' => 'venn_diagram_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_vd_item_ii_pos',
    'label' => 'Info image position',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item-field_vd_item_itc'.
  $field_instances['paragraphs_item-venn_diagram_item-field_vd_item_itc'] = array(
    'bundle' => 'venn_diagram_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
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
    'field_name' => 'field_vd_item_itc',
    'label' => 'Info text color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item-field_vd_item_links'.
  $field_instances['paragraphs_item-venn_diagram_item-field_vd_item_links'] = array(
    'bundle' => 'venn_diagram_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_vd_item_links',
    'label' => 'Links',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
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
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 'optional',
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item-field_vd_item_points'.
  $field_instances['paragraphs_item-venn_diagram_item-field_vd_item_points'] = array(
    'bundle' => 'venn_diagram_item',
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
    'field_name' => 'field_vd_item_points',
    'label' => 'Points',
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
        '2up_media' => -1,
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
        'accordion' => -1,
        'accordion_item' => -1,
        'agenda' => -1,
        'agenda_item' => -1,
        'banner_anchor_link' => -1,
        'banner_anchors' => -1,
        'banner_video' => -1,
        'banner_video_autoplay' => -1,
        'banner_video_popup' => -1,
        'bio_section' => -1,
        'bio_section_group' => -1,
        'card' => -1,
        'card_module' => -1,
        'carousel' => -1,
        'carousel_item' => -1,
        'carousel_nav_item' => -1,
        'case_study_accordion' => -1,
        'case_study_results' => -1,
        'company_list' => -1,
        'content_search' => -1,
        'custom_menu' => -1,
        'custom_menu_link' => -1,
        'custom_sub_menu_link' => -1,
        'debug' => -1,
        'enhanced_hero' => -1,
        'factoid' => -1,
        'factoid_item' => -1,
        'faq' => -1,
        'faq_item' => -1,
        'full_text_c' => -1,
        'gallery_item' => -1,
        'hero_image_slide' => -1,
        'image_gallery' => -1,
        'infographic' => -1,
        'infographic_item' => -1,
        'learn_more' => -1,
        'link_pop_up' => -1,
        'location_map' => -1,
        'locations_map' => -1,
        'locations_map_item' => -1,
        'markup_roadmap' => -1,
        'medium_hero' => -1,
        'member_list' => -1,
        'members_for_homepage' => -1,
        'minisite_headline' => -1,
        'more_posts_blog' => -1,
        'partnership_mark_enhanced_hero' => -1,
        'phase' => -1,
        'phase_item' => -1,
        'playlist_video' => -1,
        'pop_up_image' => -1,
        'pop_up_link' => -1,
        'popup_link' => -1,
        'promo_bar' => -1,
        'promo_quote' => -1,
        'prototype_two_col' => -1,
        'pvw' => -1,
        'quote_hero' => -1,
        'speaker' => -1,
        'speaker_item' => -1,
        'speaker_list' => -1,
        'speakers' => -1,
        'tabs' => -1,
        'three_col_accordion' => -1,
        'two_up_small' => -1,
        'venn_diagram' => -1,
        'venn_diagram_item' => -1,
        'venn_diagram_item_point' => 'venn_diagram_item_point',
        'vertical_tabs' => -1,
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
        '2up_columns_item' => 9,
        '2up_media' => 10,
        '2up_medium' => 11,
        '2up_medium_quote' => 12,
        '2up_slant_image' => 13,
        '2up_small' => 14,
        '2up_small_item' => 15,
        '2up_text' => 16,
        '3up_factoid' => 17,
        '3up_factoid_item' => 18,
        '3up_list' => 19,
        '3up_list_item' => 20,
        '3up_participants_list' => 21,
        '3up_participants_list_item' => 22,
        '3up_three_column_item' => 24,
        '3up_three_columns' => 23,
        '3up_three_icon_item' => 26,
        '3up_three_icons' => 25,
        '4up_four_columns' => 27,
        '4up_four_icon_item' => 28,
        'accordion' => 29,
        'accordion_item' => 30,
        'agenda' => 31,
        'agenda_item' => 32,
        'banner_anchor_link' => 34,
        'banner_anchors' => 33,
        'banner_video' => 35,
        'banner_video_autoplay' => 36,
        'banner_video_popup' => 37,
        'bio_section' => 38,
        'bio_section_group' => 39,
        'card' => 40,
        'card_module' => 41,
        'carousel' => 42,
        'carousel_item' => 43,
        'carousel_nav_item' => 44,
        'case_study_accordion' => 45,
        'case_study_results' => 46,
        'company_list' => 47,
        'content_search' => 48,
        'custom_menu' => 49,
        'custom_menu_link' => 50,
        'custom_sub_menu_link' => 51,
        'debug' => 52,
        'enhanced_hero' => 53,
        'factoid' => 54,
        'factoid_item' => 55,
        'faq' => 56,
        'faq_item' => 57,
        'full_text_c' => 58,
        'gallery_item' => 59,
        'hero_image_slide' => 60,
        'image_gallery' => 61,
        'infographic' => 62,
        'infographic_item' => 63,
        'learn_more' => 64,
        'link_pop_up' => 65,
        'location_map' => 68,
        'locations_map' => 66,
        'locations_map_item' => 67,
        'markup_roadmap' => 69,
        'medium_hero' => 70,
        'member_list' => 72,
        'members_for_homepage' => 71,
        'minisite_headline' => 73,
        'more_posts_blog' => 74,
        'partnership_mark_enhanced_hero' => 75,
        'phase' => 76,
        'phase_item' => 77,
        'playlist_video' => 78,
        'pop_up_image' => 80,
        'pop_up_link' => 81,
        'popup_link' => 79,
        'promo_bar' => 82,
        'promo_quote' => 83,
        'prototype_two_col' => 84,
        'pvw' => 85,
        'quote_hero' => 86,
        'speaker' => 87,
        'speaker_item' => 89,
        'speaker_list' => 90,
        'speakers' => 88,
        'tabs' => 91,
        'three_col_accordion' => 92,
        'two_up_small' => 93,
        'venn_diagram' => 94,
        'venn_diagram_item' => 95,
        'venn_diagram_item_point' => 96,
        'vertical_tabs' => 97,
        'video' => 98,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item-field_vd_item_points_per_row'.
  $field_instances['paragraphs_item-venn_diagram_item-field_vd_item_points_per_row'] = array(
    'bundle' => 'venn_diagram_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_vd_item_points_per_row',
    'label' => 'Points per row',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item-field_vd_item_subtitle'.
  $field_instances['paragraphs_item-venn_diagram_item-field_vd_item_subtitle'] = array(
    'bundle' => 'venn_diagram_item',
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
    'field_name' => 'field_vd_item_subtitle',
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
  // 'paragraphs_item-venn_diagram_item-field_vd_item_title'.
  $field_instances['paragraphs_item-venn_diagram_item-field_vd_item_title'] = array(
    'bundle' => 'venn_diagram_item',
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
    'field_name' => 'field_vd_item_title',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_desc'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_desc'] = array(
    'bundle' => 'venn_diagram_item_point',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_vd_item_point_desc',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_icon'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_icon'] = array(
    'bundle' => 'venn_diagram_item_point',
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
    'field_name' => 'field_vd_item_point_icon',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'venn_diagram/point_image',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_icon_height'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_icon_height'] = array(
    'bundle' => 'venn_diagram_item_point',
    'default_value' => array(
      0 => array(
        'value' => '50px',
      ),
    ),
    'deleted' => 0,
    'description' => 'e.g. 50px, 100px, auto.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_vd_item_point_icon_height',
    'label' => 'Icon height',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_icon_width'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_icon_width'] = array(
    'bundle' => 'venn_diagram_item_point',
    'default_value' => array(
      0 => array(
        'value' => '50px',
      ),
    ),
    'deleted' => 0,
    'description' => 'e.g. 50%, 100%, 50px, 100px.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_vd_item_point_icon_width',
    'label' => 'Icon width',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_links'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_links'] = array(
    'bundle' => 'venn_diagram_item_point',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_vd_item_point_links',
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
      'title' => 'required',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 'optional',
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
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_popup_image'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_popup_image'] = array(
    'bundle' => 'venn_diagram_item_point',
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
        'weight' => 15,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_vd_item_point_popup_image',
    'label' => 'Popup image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'venn_diagram/point_popup_image',
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
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_popup_lt'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_popup_lt'] = array(
    'bundle' => 'venn_diagram_item_point',
    'default_value' => array(
      0 => array(
        'value' => 'Know more',
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
        'weight' => 17,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_vd_item_point_popup_lt',
    'label' => 'Popup link text',
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
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_popup_ss'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_popup_ss'] = array(
    'bundle' => 'venn_diagram_item_point',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 18,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_vd_item_point_popup_ss',
    'label' => 'Popup slideshow',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'venn_diagram/point_popup_ss',
      'file_extensions' => 'png gif jpg jpeg mp4',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_show_links'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_show_links'] = array(
    'bundle' => 'venn_diagram_item_point',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 14,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_vd_item_point_show_links',
    'label' => 'Show links',
    'required' => 0,
    'settings' => array(
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
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_show_num'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_show_num'] = array(
    'bundle' => 'venn_diagram_item_point',
    'default_value' => array(
      0 => array(
        'value' => 'true',
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
        'weight' => 19,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_vd_item_point_show_num',
    'label' => 'Show Number of Slides',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_show_popup'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_show_popup'] = array(
    'bundle' => 'venn_diagram_item_point',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 16,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_vd_item_point_show_popup',
    'label' => 'Show popup',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_text_align'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_text_align'] = array(
    'bundle' => 'venn_diagram_item_point',
    'default_value' => NULL,
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
    'field_name' => 'field_vd_item_point_text_align',
    'label' => 'Text alignment',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_text_color'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_text_color'] = array(
    'bundle' => 'venn_diagram_item_point',
    'default_value' => array(
      0 => array(
        'rgb' => '#ffffff',
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
    'field_name' => 'field_vd_item_point_text_color',
    'label' => 'Text color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_spectrum_widget',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_text_size'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_text_size'] = array(
    'bundle' => 'venn_diagram_item_point',
    'default_value' => array(
      0 => array(
        'value' => '16px',
      ),
    ),
    'deleted' => 0,
    'description' => 'e.g. 14px, 16px, 18px.',
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
    'field_name' => 'field_vd_item_point_text_size',
    'label' => 'Text size',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-venn_diagram_item_point-field_vd_item_point_title'.
  $field_instances['paragraphs_item-venn_diagram_item_point-field_vd_item_point_title'] = array(
    'bundle' => 'venn_diagram_item_point',
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
    'field_name' => 'field_vd_item_point_title',
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
  t('Active circle background');
  t('Active circle text color');
  t('Anchor name');
  t('Description');
  t('How many diagrams to be displayed?');
  t('Icon');
  t('Icon height');
  t('Icon width');
  t('Inactive circle background');
  t('Inactive circle text color');
  t('Info background');
  t('Info image');
  t('Info image position');
  t('Info text color');
  t('Item');
  t('Links');
  t('Points');
  t('Points per row');
  t('Popup image');
  t('Popup link text');
  t('Popup slideshow');
  t('Show Number of Slides');
  t('Show links');
  t('Show popup');
  t('Subtitle');
  t('Template');
  t('Text alignment');
  t('Text color');
  t('Text size');
  t('Title');
  t('e.g. 14px, 16px, 18px.');
  t('e.g. 50%, 100%, 50px, 100px.');
  t('e.g. 50px, 100px, auto.');

  return $field_instances;
}
