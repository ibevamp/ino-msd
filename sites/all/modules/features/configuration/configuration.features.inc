<?php
/**
 * @file
 * configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function configuration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function configuration_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function configuration_paragraphs_info() {
  $items = array(
    '1up_hero' => array(
      'name' => '1UP Hero',
      'bundle' => '1up_hero',
      'locked' => '1',
    ),
    '1up_medium_hero' => array(
      'name' => '1UP Medium Hero',
      'bundle' => '1up_medium_hero',
      'locked' => '1',
    ),
    '1up_text_images' => array(
      'name' => '1UP Text Images',
      'bundle' => '1up_text_images',
      'locked' => '1',
    ),
    '2up_medium' => array(
      'name' => '2UP Medium',
      'bundle' => '2up_medium',
      'locked' => '1',
    ),
    '2up_medium_quote' => array(
      'name' => '2UP Medium Quote',
      'bundle' => '2up_medium_quote',
      'locked' => '1',
    ),
    '2up_slant_image' => array(
      'name' => '2UP Slant Image',
      'bundle' => '2up_slant_image',
      'locked' => '1',
    ),
    '3up_three_column_item' => array(
      'name' => '3UP Three Column Item',
      'bundle' => '3up_three_column_item',
      'locked' => '1',
    ),
    '3up_three_columns' => array(
      'name' => '3UP Three Columns',
      'bundle' => '3up_three_columns',
      'locked' => '1',
    ),
    '3up_three_icon_item' => array(
      'name' => '3UP Three Icon Item',
      'bundle' => '3up_three_icon_item',
      'locked' => '1',
    ),
    '3up_three_icons' => array(
      'name' => '3UP Three Icons',
      'bundle' => '3up_three_icons',
      'locked' => '1',
    ),
    'enhanced_hero' => array(
      'name' => 'Enhanced hero',
      'bundle' => 'enhanced_hero',
      'locked' => '1',
    ),
    'factoid' => array(
      'name' => 'Factoid',
      'bundle' => 'factoid',
      'locked' => '1',
    ),
    'factoid_item' => array(
      'name' => 'Factoid item',
      'bundle' => 'factoid_item',
      'locked' => '1',
    ),
    'faq' => array(
      'name' => 'FAQ',
      'bundle' => 'faq',
      'locked' => '1',
    ),
    'faq_item' => array(
      'name' => 'FAQ Item',
      'bundle' => 'faq_item',
      'locked' => '1',
    ),
    'full_text_c' => array(
      'name' => 'Full Text C',
      'bundle' => 'full_text_c',
      'locked' => '1',
    ),
    'hero_image_slide' => array(
      'name' => 'Hero image slide',
      'bundle' => 'hero_image_slide',
      'locked' => '1',
    ),
    'learn_more' => array(
      'name' => 'Learn more',
      'bundle' => 'learn_more',
      'locked' => '1',
    ),
    'location_map' => array(
      'name' => 'Location map',
      'bundle' => 'location_map',
      'locked' => '1',
    ),
    'medium_hero' => array(
      'name' => 'Medium Hero',
      'bundle' => 'medium_hero',
      'locked' => '1',
    ),
    'member_list' => array(
      'name' => 'Member list',
      'bundle' => 'member_list',
      'locked' => '1',
    ),
    'promo_bar' => array(
      'name' => 'Promo Bar',
      'bundle' => 'promo_bar',
      'locked' => '1',
    ),
    'quote_hero' => array(
      'name' => 'Quote Hero',
      'bundle' => 'quote_hero',
      'locked' => '1',
    ),
    'speaker' => array(
      'name' => 'Speaker accordion',
      'bundle' => 'speaker',
      'locked' => '1',
    ),
    'speaker_item' => array(
      'name' => 'Speaker item',
      'bundle' => 'speaker_item',
      'locked' => '1',
    ),
    'speaker_list' => array(
      'name' => '3 UP speakers',
      'bundle' => 'speaker_list',
      'locked' => '1',
    ),
    'speakers' => array(
      'name' => 'Speakers',
      'bundle' => 'speakers',
      'locked' => '1',
    ),
    'video' => array(
      'name' => 'Video',
      'bundle' => 'video',
      'locked' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function configuration_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "local_db",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : {
            "default" : "0",
            "bundles" : { "article" : "article", "page" : "page" }
          }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "body:value" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : { "title" : true, "body:value" : true },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_hero_images" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_paragraph" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "paragraphs_item" },
        "field_paragraph:bundle" : { "type" : "list\\u003Cstring\\u003E" },
        "field_paragraph:field_answer" : { "type" : "list\\u003Ctext\\u003E" },
        "field_paragraph:field_column_title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_paragraph:field_description" : { "type" : "list\\u003Ctext\\u003E" },
        "field_paragraph:field_heading" : { "type" : "list\\u003Ctext\\u003E" },
        "field_paragraph:field_hero_description" : { "type" : "list\\u003Ctext\\u003E" },
        "field_paragraph:field_hero_headline" : { "type" : "list\\u003Ctext\\u003E" },
        "field_paragraph:field_hero_type" : { "type" : "list\\u003Cstring\\u003E" },
        "field_paragraph:field_image_direction" : { "type" : "list\\u003Cstring\\u003E" },
        "field_paragraph:field_members" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "node"
        },
        "field_paragraph:field_name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_paragraph:field_paragraph" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "paragraphs_item"
        },
        "field_paragraph:field_paragraph:field_answer" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_paragraph:field_paragraph:field_column_title" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_paragraph:field_paragraph:field_description" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_paragraph:field_paragraph:field_hero_description" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_paragraph:field_paragraph:field_hero_headline" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_paragraph:field_paragraph:field_members" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "node"
        },
        "field_paragraph:field_paragraph:field_paragraph" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "paragraphs_item"
        },
        "field_paragraph:field_paragraph:field_question" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_paragraph:field_paragraph:field_text_headline" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_paragraph:field_paragraph:field_text_quote" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_paragraph:field_paragraph:field_text_quote_byline" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_paragraph:field_paragraph:field_title" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_paragraph:field_paragraph:url" : { "type" : "list\\u003Clist\\u003Curi\\u003E\\u003E" },
        "field_paragraph:field_question" : { "type" : "list\\u003Ctext\\u003E" },
        "field_paragraph:field_text_headline" : { "type" : "list\\u003Ctext\\u003E" },
        "field_paragraph:field_text_overlays_image" : { "type" : "list\\u003Cboolean\\u003E" },
        "field_paragraph:field_text_paragraph:format" : { "type" : "list\\u003Cstring\\u003E" },
        "field_paragraph:field_text_paragraph:value" : { "type" : "list\\u003Ctext\\u003E" },
        "field_paragraph:field_text_quote" : { "type" : "list\\u003Ctext\\u003E" },
        "field_paragraph:field_text_quote_byline" : { "type" : "list\\u003Ctext\\u003E" },
        "field_paragraph:field_title" : { "type" : "list\\u003Ctext\\u003E" },
        "field_paragraph:item_id" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_paragraph:url" : { "type" : "list\\u003Curi\\u003E" },
        "promote" : { "type" : "boolean" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function configuration_default_search_api_server() {
  $items = array();
  $items['local_db'] = entity_import('search_api_server', '{
    "name" : "Local DB",
    "machine_name" : "local_db",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "indexes" : { "default_node_index" : {
          "type" : {
            "table" : "search_api_db_default_node_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "promote" : {
            "table" : "search_api_db_default_node_index",
            "column" : "promote",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "sticky" : {
            "table" : "search_api_db_default_node_index",
            "column" : "sticky",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_default_node_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_default_node_index",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_default_node_index",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_default_node_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_hero_images" : {
            "table" : "search_api_db_default_node_index_field_hero_images",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph" : {
            "table" : "search_api_db_default_node_index_field_paragraph",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_access_node" : {
            "table" : "search_api_db_default_node_index_search_api_access_node",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:item_id" : {
            "table" : "search_api_db_default_node_index_field_paragraph_item_id",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:bundle" : {
            "table" : "search_api_db_default_node_index_field_paragraph_bundle",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_name" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:url" : {
            "table" : "search_api_db_default_node_index_field_paragraph_url",
            "column" : "value",
            "type" : "list\\u003Curi\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph" : {
            "table" : "search_api_db_default_node_index_field_paragraph_field_paragra",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_title" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_hero_headline" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_hero_description" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_column_title" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_text_quote" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_text_quote_byline" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_description" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_hero_type" : {
            "table" : "search_api_db_default_node_index_field_paragraph_field_hero_ty",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_text_overlays_image" : {
            "table" : "search_api_db_default_node_index_field_paragraph_field_text_ov",
            "column" : "value",
            "type" : "list\\u003Cboolean\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_image_direction" : {
            "table" : "search_api_db_default_node_index_field_paragraph_field_image_d",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_heading" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_text_headline" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_members" : {
            "table" : "search_api_db_default_node_index_field_paragraph_field_members",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_answer" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_question" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph:url" : {
            "table" : "search_api_db_default_node_index_field_paragraph_field_parag_1",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Curi\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph:field_paragraph" : {
            "table" : "search_api_db_default_node_index_field_paragraph_field_parag_2",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph:field_title" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph:field_hero_headline" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph:field_hero_description" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph:field_column_title" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph:field_text_quote" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph:field_text_quote_byline" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph:field_description" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph:field_text_headline" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph:field_members" : {
            "table" : "search_api_db_default_node_index_field_paragraph_field_parag_3",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph:field_answer" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_paragraph:field_question" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_text_paragraph:value" : {
            "table" : "search_api_db_default_node_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_paragraph:field_text_paragraph:format" : {
            "table" : "search_api_db_default_node_index_field_paragraph_field_text_pa",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
