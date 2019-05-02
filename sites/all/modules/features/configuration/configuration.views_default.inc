<?php
/**
 * @file
 * configuration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function configuration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'title' => 'title',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="headline" data-template="title">[title]</h3>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Paragraph */
  $handler->display->display_options['fields']['field_paragraph']['id'] = 'field_paragraph';
  $handler->display->display_options['fields']['field_paragraph']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_paragraph']['field'] = 'field_paragraph';
  $handler->display->display_options['fields']['field_paragraph']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_paragraph']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_paragraph']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_paragraph']['bypass_access'] = 0;
  /* Field: Paragraph: Headline (indexed) */
  $handler->display->display_options['fields']['field_paragraph_field_hero_headline']['id'] = 'field_paragraph_field_hero_headline';
  $handler->display->display_options['fields']['field_paragraph_field_hero_headline']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_paragraph_field_hero_headline']['field'] = 'field_paragraph_field_hero_headline';
  $handler->display->display_options['fields']['field_paragraph_field_hero_headline']['label'] = '';
  $handler->display->display_options['fields']['field_paragraph_field_hero_headline']['element_label_colon'] = FALSE;
  /* Field: Paragraph » Paragraph: Headline (indexed) */
  $handler->display->display_options['fields']['field_paragraph_field_paragraph_field_hero_headline']['id'] = 'field_paragraph_field_paragraph_field_hero_headline';
  $handler->display->display_options['fields']['field_paragraph_field_paragraph_field_hero_headline']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_paragraph_field_paragraph_field_hero_headline']['field'] = 'field_paragraph_field_paragraph_field_hero_headline';
  $handler->display->display_options['fields']['field_paragraph_field_paragraph_field_hero_headline']['label'] = '';
  $handler->display->display_options['fields']['field_paragraph_field_paragraph_field_hero_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'body:value' => 'body:value',
    'field_paragraph:field_answer' => 'field_paragraph:field_answer',
    'field_paragraph:field_column_title' => 'field_paragraph:field_column_title',
    'field_paragraph:field_description' => 'field_paragraph:field_description',
    'field_paragraph:field_heading' => 'field_paragraph:field_heading',
    'field_paragraph:field_hero_description' => 'field_paragraph:field_hero_description',
    'field_paragraph:field_hero_headline' => 'field_paragraph:field_hero_headline',
    'field_paragraph:field_name' => 'field_paragraph:field_name',
    'field_paragraph:field_paragraph:field_answer' => 'field_paragraph:field_paragraph:field_answer',
    'field_paragraph:field_paragraph:field_column_title' => 'field_paragraph:field_paragraph:field_column_title',
    'field_paragraph:field_paragraph:field_description' => 'field_paragraph:field_paragraph:field_description',
    'field_paragraph:field_paragraph:field_hero_description' => 'field_paragraph:field_paragraph:field_hero_description',
    'field_paragraph:field_paragraph:field_hero_headline' => 'field_paragraph:field_paragraph:field_hero_headline',
    'field_paragraph:field_paragraph:field_question' => 'field_paragraph:field_paragraph:field_question',
    'field_paragraph:field_paragraph:field_text_headline' => 'field_paragraph:field_paragraph:field_text_headline',
    'field_paragraph:field_paragraph:field_text_quote' => 'field_paragraph:field_paragraph:field_text_quote',
    'field_paragraph:field_paragraph:field_text_quote_byline' => 'field_paragraph:field_paragraph:field_text_quote_byline',
    'field_paragraph:field_paragraph:field_title' => 'field_paragraph:field_paragraph:field_title',
    'field_paragraph:field_question' => 'field_paragraph:field_question',
    'field_paragraph:field_text_headline' => 'field_paragraph:field_text_headline',
    'field_paragraph:field_text_paragraph:value' => 'field_paragraph:field_text_paragraph:value',
    'field_paragraph:field_text_quote' => 'field_paragraph:field_text_quote',
    'field_paragraph:field_text_quote_byline' => 'field_paragraph:field_text_quote_byline',
    'field_paragraph:field_title' => 'field_paragraph:field_title',
    'title' => 'title',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'page' => 'page',
  );
  $handler->display->display_options['path'] = 'search';
  $export['search'] = $view;

  return $export;
}
