<?php
/**
 * @file
 * mck_infographic_features.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function mck_infographic_features_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'paragraphs_item-infographic-field_ig_anchor'.
  $field_instances['paragraphs_item-infographic-field_ig_anchor'] = array(
    'bundle' => 'infographic',
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
    'field_name' => 'field_ig_anchor',
    'label' => 'Anchor',
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

  // Exported field_instance: 'paragraphs_item-infographic-field_ig_chart_type'.
  $field_instances['paragraphs_item-infographic-field_ig_chart_type'] = array(
    'bundle' => 'infographic',
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
    'field_name' => 'field_ig_chart_type',
    'label' => 'Chart type',
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

  // Exported field_instance: 'paragraphs_item-infographic-field_ig_desc'.
  $field_instances['paragraphs_item-infographic-field_ig_desc'] = array(
    'bundle' => 'infographic',
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
    'field_name' => 'field_ig_desc',
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

  // Exported field_instance: 'paragraphs_item-infographic-field_ig_item'.
  $field_instances['paragraphs_item-infographic-field_ig_item'] = array(
    'bundle' => 'infographic',
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
    'field_name' => 'field_ig_item',
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
        'infographic_item' => 'infographic_item',
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
        'custom_menu' => 49,
        'custom_menu_link' => 50,
        'enhanced_hero' => 51,
        'factoid' => 52,
        'factoid_item' => 53,
        'faq' => 54,
        'faq_item' => 55,
        'full_text_c' => 56,
        'gallery_item' => 57,
        'grid' => 58,
        'grid_item' => 59,
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
        'multi_row_card_module' => 75,
        'partnership_mark_enhanced_hero' => 76,
        'playlist_video' => 77,
        'pop_up_image' => 78,
        'pop_up_link' => 79,
        'promo_bar' => 80,
        'promo_quote' => 81,
        'pvw' => 82,
        'quote_hero' => 83,
        'speaker' => 84,
        'speaker_item' => 86,
        'speaker_list' => 87,
        'speakers' => 85,
        'three_col_accordion' => 88,
        'two_up_small' => 89,
        'vertical_tabs' => 90,
        'video' => 91,
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

  // Exported field_instance: 'paragraphs_item-infographic-field_ig_skin'.
  $field_instances['paragraphs_item-infographic-field_ig_skin'] = array(
    'bundle' => 'infographic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_ig_skin',
    'label' => 'Skin',
    'required' => 1,
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

  // Exported field_instance: 'paragraphs_item-infographic-field_ig_title'.
  $field_instances['paragraphs_item-infographic-field_ig_title'] = array(
    'bundle' => 'infographic',
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
    'field_name' => 'field_ig_title',
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

  // Exported field_instance:
  // 'paragraphs_item-infographic_item-field_ig_item_label'.
  $field_instances['paragraphs_item-infographic_item-field_ig_item_label'] = array(
    'bundle' => 'infographic_item',
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
    'field_name' => 'field_ig_item_label',
    'label' => 'Label',
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
  // 'paragraphs_item-infographic_item-field_ig_item_value'.
  $field_instances['paragraphs_item-infographic_item-field_ig_item_value'] = array(
    'bundle' => 'infographic_item',
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
    'field_name' => 'field_ig_item_value',
    'label' => 'Value',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Anchor');
  t('Chart type');
  t('Description');
  t('Item');
  t('Label');
  t('Skin');
  t('Title');
  t('Value');

  return $field_instances;
}
