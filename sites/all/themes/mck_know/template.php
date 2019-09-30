<?php

/**
 * Implements hook_theme().
 */

function mck_know_theme() {
  $items = array(
    'custom_main_menu' => array(
      'template' => 'templates/main_menu/custom-main-menu',
    ),
    'slide_menu' => array(
      'template' => 'templates/slide_menu/slide-menu',
    ),
    'views' => array(
      'template' => 'templates/views/views',
    ),
    'search' => array(
      'template' => 'templates/search/search',
    )
  );

  $menu_types = array(
    'industries',
    'business',
    'global',
    'locations',
    'careers',
    'about',
  );

  foreach ($menu_types as $menu_type) {
    $items['custom_main_menu_' . $menu_type] = array(
      'template' => 'templates/main_menu/custom-main-menu-' . $menu_type,
      'variables' => array('items' => array()),
    );
  }

  foreach ($menu_types as $menu_type) {
    $items['slide_menu_' . $menu_type] = array(
      'template' => 'templates/slide_menu/slide-menu-' . $menu_type,
      'variables' => array('item' => array()),
    );
  }

  return $items;
}

function mck_know_path() {
  global $base_path;

  return $base_path . drupal_get_path('theme', 'mck_know');
}

function mck_know_preprocess_html(array &$vars) {
  global $base_url;
  
  $key = (isset($vars['page']['content']['system_main']['nodes']) && !empty($vars['page']['content']['system_main']['nodes'])) ? array_keys($vars['page']['content']['system_main']['nodes']) : NULL;
  $nid = $key[0];
  $node = node_load($nid);
  $vars['theme_header_title_color'] = (isset($node->field_theme_header_font_color) && !empty($node->field_theme_header_font_color)) ? $node->field_theme_header_font_color['und'][0]['rgb'] : NULL;
  $vars['theme_header_body_color'] = (isset($node->field_theme_header_font_color) && !empty($node->field_theme_header_font_color)) ? $node->field_theme_header_font_color['und'][1]['rgb'] : NULL;
  $vars['theme_font_color'] = (isset($node->field_theme_font_color) && !empty($node->field_theme_font_color)) ? $node->field_theme_font_color['und'][0]['rgb'] : NULL;
  $vars['theme_bg_color'] = (isset($node->field_theme_bg_color) && !empty($node->field_theme_bg_color)) ? $node->field_theme_bg_color['und'][0]['rgb'] : NULL;
  $custom_page_title = (isset($node->field_theme_page_title) && !empty($node->field_theme_page_title)) ? $node->field_theme_page_title['und'][0]['value'] : NULL;

  
 /* Start of code related to branding assets - new branding font/logo updates */  
  
  if(strpos($base_url,'dev-drupaldev-lx07') !== false){
		$protocol = (!empty($_SERVER['HTTPS']) && $_SERVER['HTTPS'] !== 'off' || $_SERVER['SERVER_PORT'] == 443) ? "https://" : "http://";
		$domainName = $_SERVER['HTTP_HOST'].'/';
		$rooturl = $protocol.$domainName;
		$url  =  $rooturl."/media-services/";
    }else if(strpos($base_url,'solutions.mckinsey.com') !== false){
        $protocol = ( (!empty($GLOBALS['base_root'])) && (strpos($GLOBALS['base_root'],'https://')==0) ) ? "https://" : "http://";		
		$domainName = $_SERVER['HTTP_HOST'].'/';
		$rooturl = $protocol.$domainName;
		$url  =  $rooturl."/msd/";
    }else{
	   $url  =  $rooturl;
    }

  drupal_add_css($url.'branding-assets/css/mck-fonts.css',  array(
        'group' => CSS_THEME,
		'every_page' => TRUE,
        'weight' => CSS_THEME + 100,
		'type' => 'external'
      ));
  drupal_add_css($url.'branding-assets/css/base.css',array(
        'group' => CSS_THEME,
		'every_page' => TRUE,
        'weight' => CSS_THEME + 110,
		'type' => 'external'
      ));

  if(strpos($base_url,'localhost') !== false){
    $url  =  'https://solutions.mckinsey.com/msd/';
    drupal_add_css($url.'branding-assets/css/mck-fonts.css',  array(
      'group' => CSS_THEME,
      'every_page' => TRUE,
      'weight' => CSS_THEME + 100,
      'type' => 'external'
    ));
    drupal_add_css($url.'branding-assets/css/base.css',array(
      'group' => CSS_THEME,
      'every_page' => TRUE,
      'weight' => CSS_THEME + 110,
      'type' => 'external'
    ));
  }
  /* End of code related to branding assets - new branding font/logo updates */
  
  if (!empty($custom_page_title)) {
    $vars['head_title'] = $custom_page_title;
  }
}

function mck_know_preprocess_page(array &$vars) {

}

function mck_know_preprocess_node(array &$vars) {
  switch ($vars['type']) {
    case 'page':
      $alias = drupal_get_path_alias();
      if (current_path() != $alias) {
        $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . str_replace('-', '_', $alias);
      }

      break;
  }
}


function mck_know_preprocess_field(array &$vars) {
  if ($vars['element']['#field_name'] == 'field_paragraph') {
   
  }
}



function mck_know_preprocess_custom_main_menu(array &$vars) {
  $vars['main_menu'] = menu_tree_all_data(variable_get('menu_main_links_source', 'main-menu'));
}

function mck_know_preprocess_slide_menu(array &$vars) {
  mck_know_preprocess_custom_main_menu($vars);
}

function mck_know_preprocess_slide_menu_industries(array &$vars) {
  $vars['items'] = $vars['item']['below'];
  $vars['role_id'] = drupal_clean_css_identifier($vars['item']['link']['title']);
}

function mck_know_preprocess_slide_menu_business(array &$vars) {
  mck_know_preprocess_slide_menu_industries($vars);
}

function mck_know_preprocess_slide_menu_global(array &$vars) {
  mck_know_preprocess_slide_menu_industries($vars);
}

function mck_know_preprocess_slide_menu_locations(array &$vars) {
  mck_know_preprocess_slide_menu_industries($vars);
}

function mck_know_preprocess_slide_menu_careers(array &$vars) {
  mck_know_preprocess_slide_menu_industries($vars);
}

function mck_know_preprocess_slide_menu_about(array &$vars) {
  mck_know_preprocess_slide_menu_industries($vars);
}


function mck_know_paragraphs_view($variables) {
   $element = $variables['element'];
   return $element['#children'];
}
