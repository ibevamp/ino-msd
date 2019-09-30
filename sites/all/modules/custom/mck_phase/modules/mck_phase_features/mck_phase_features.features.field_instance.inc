<?php
/**
 * @file
 * mck_phase_features.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mck_phase_features_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'paragraphs_item-phase-field_phase_anchor'.
  $field_instances['paragraphs_item-phase-field_phase_anchor'] = array(
    'bundle' => 'phase',
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
    'field_name' => 'field_phase_anchor',
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

  // Exported field_instance: 'paragraphs_item-phase-field_phase_item'.
  $field_instances['paragraphs_item-phase-field_phase_item'] = array(
    'bundle' => 'phase',
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
    'field_name' => 'field_phase_item',
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
        'phase' => -1,
        'phase_item' => 'phase_item',
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
        'venn_diagram_item' => -1,
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
        'phase' => 78,
        'phase_item' => 79,
        'playlist_video' => 80,
        'pop_up_image' => 81,
        'pop_up_link' => 82,
        'promo_bar' => 83,
        'promo_quote' => 84,
        'pvw' => 85,
        'quote_hero' => 86,
        'speaker' => 87,
        'speaker_item' => 89,
        'speaker_list' => 90,
        'speakers' => 88,
        'three_col_accordion' => 91,
        'two_up_small' => 92,
        'venn_diagram' => 93,
        'venn_diagram_item' => 94,
        'vertical_tabs' => 95,
        'video' => 96,
        'views' => 97,
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

  // Exported field_instance:
  // 'paragraphs_item-phase_item-field_phase_item_image'.
  $field_instances['paragraphs_item-phase_item-field_phase_item_image'] = array(
    'bundle' => 'phase_item',
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
    'field_name' => 'field_phase_item_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'phase/images',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-phase_item-field_phase_item_learn_more'.
  $field_instances['paragraphs_item-phase_item-field_phase_item_learn_more'] = array(
    'bundle' => 'phase_item',
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
    'field_name' => 'field_phase_item_learn_more',
    'label' => 'Learn More',
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
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
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
  // 'paragraphs_item-phase_item-field_phase_item_subtitle'.
  $field_instances['paragraphs_item-phase_item-field_phase_item_subtitle'] = array(
    'bundle' => 'phase_item',
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
    'field_name' => 'field_phase_item_subtitle',
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

  // Exported field_instance:
  // 'paragraphs_item-phase_item-field_phase_item_title'.
  $field_instances['paragraphs_item-phase_item-field_phase_item_title'] = array(
    'bundle' => 'phase_item',
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
    'field_name' => 'field_phase_item_title',
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
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Anchor name');
  t('Image');
  t('Item');
  t('Learn More');
  t('Subtitle');
  t('Title');

  return $field_instances;
}