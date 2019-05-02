<?php
/**
 * @file
 * syd_proposal_paragraphs.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function syd_proposal_paragraphs_paragraphs_info() {
  $items = array(
    '1up_image' => array(
      'name' => '1up Image',
      'bundle' => '1up_image',
      'locked' => '1',
    ),
    '1up_medium_quote' => array(
      'name' => '1UP Medium Quote',
      'bundle' => '1up_medium_quote',
      'locked' => '1',
    ),
    '1up_text' => array(
      'name' => '1UP Text',
      'bundle' => '1up_text',
      'locked' => '1',
    ),
    '2up_columns' => array(
      'name' => '2up columns',
      'bundle' => '2up_columns',
      'locked' => '1',
    ),
    '2up_columns_item' => array(
      'name' => '2up columns item',
      'bundle' => '2up_columns_item',
      'locked' => '1',
    ),
    '2up_small' => array(
      'name' => '2Up Small',
      'bundle' => '2up_small',
      'locked' => '1',
    ),
    '2up_small_item' => array(
      'name' => '2Up Small Item',
      'bundle' => '2up_small_item',
      'locked' => '1',
    ),
    '2up_text' => array(
      'name' => '2UP Text',
      'bundle' => '2up_text',
      'locked' => '1',
    ),
    '3up_factoid' => array(
      'name' => '3up Factoid',
      'bundle' => '3up_factoid',
      'locked' => '1',
    ),
    '3up_factoid_item' => array(
      'name' => '3up factoid Item',
      'bundle' => '3up_factoid_item',
      'locked' => '1',
    ),
    '3up_list' => array(
      'name' => '3up List',
      'bundle' => '3up_list',
      'locked' => '1',
    ),
    '3up_list_item' => array(
      'name' => '3up List Item',
      'bundle' => '3up_list_item',
      'locked' => '1',
    ),
    '3up_participants_list' => array(
      'name' => '3up Participants List',
      'bundle' => '3up_participants_list',
      'locked' => '1',
    ),
    '3up_participants_list_item' => array(
      'name' => '3up Participants List Item',
      'bundle' => '3up_participants_list_item',
      'locked' => '1',
    ),
    '4up_four_columns' => array(
      'name' => '4up four columns',
      'bundle' => '4up_four_columns',
      'locked' => '1',
    ),
    '4up_four_icon_item' => array(
      'name' => '4up four icon item',
      'bundle' => '4up_four_icon_item',
      'locked' => '1',
    ),
    'agenda' => array(
      'name' => 'agenda',
      'bundle' => 'agenda',
      'locked' => '1',
    ),
    'agenda_item' => array(
      'name' => 'agenda item',
      'bundle' => 'agenda_item',
      'locked' => '1',
    ),
    'banner_video' => array(
      'name' => 'Banner Video',
      'bundle' => 'banner_video',
      'locked' => '1',
    ),
    'banner_video_autoplay' => array(
      'name' => 'Banner Video Autoplay',
      'bundle' => 'banner_video_autoplay',
      'locked' => '1',
    ),
    'banner_video_popup' => array(
      'name' => 'Banner Video Popup',
      'bundle' => 'banner_video_popup',
      'locked' => '1',
    ),
    'bio_section' => array(
      'name' => 'Bio section item',
      'bundle' => 'bio_section',
      'locked' => '1',
    ),
    'bio_section_group' => array(
      'name' => 'Bio section',
      'bundle' => 'bio_section_group',
      'locked' => '1',
    ),
    'company_list' => array(
      'name' => 'Company list',
      'bundle' => 'company_list',
      'locked' => '1',
    ),
    'custom_menu' => array(
      'name' => 'Custom Menu',
      'bundle' => 'custom_menu',
      'locked' => '1',
    ),
    'custom_menu_link' => array(
      'name' => 'Custom Menu Link',
      'bundle' => 'custom_menu_link',
      'locked' => '1',
    ),
    'gallery_item' => array(
      'name' => 'Gallery Item',
      'bundle' => 'gallery_item',
      'locked' => '1',
    ),
    'image_gallery' => array(
      'name' => 'Image Gallery',
      'bundle' => 'image_gallery',
      'locked' => '1',
    ),
    'link_pop_up' => array(
      'name' => 'Link Pop Up',
      'bundle' => 'link_pop_up',
      'locked' => '1',
    ),
    'markup_roadmap' => array(
      'name' => 'markup roadmap',
      'bundle' => 'markup_roadmap',
      'locked' => '1',
    ),
    'members_for_homepage' => array(
      'name' => 'Members for homepage',
      'bundle' => 'members_for_homepage',
      'locked' => '1',
    ),
    'minisite_headline' => array(
      'name' => 'Minisite Headline',
      'bundle' => 'minisite_headline',
      'locked' => '1',
    ),
    'more_posts_blog' => array(
      'name' => 'More posts blog',
      'bundle' => 'more_posts_blog',
      'locked' => '1',
    ),
    'pop_up_image' => array(
      'name' => 'Pop up Image',
      'bundle' => 'pop_up_image',
      'locked' => '1',
    ),
    'pop_up_link' => array(
      'name' => 'Pop up Link',
      'bundle' => 'pop_up_link',
      'locked' => '1',
    ),
    'promo_quote' => array(
      'name' => 'Promo Quote',
      'bundle' => 'promo_quote',
      'locked' => '1',
    ),
    'two_up_small' => array(
      'name' => 'Two up small',
      'bundle' => 'two_up_small',
      'locked' => '1',
    ),
  );
  return $items;
}
