<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */


$field_theme = mck_util_get_by_paths($node, 'field_theme|und|0|value', '');
?>
<div class="page-class <?php echo $field_theme;?>">
<?php echo render($content['field_anchor_paragraph']); ?>
<?php if (!empty($field_hero_images)): ?>

  <?php $key = key($field_hero_images) ?>
  <?php $paragraph = reset($content['field_hero_images'][$key]['entity']['paragraphs_item']) ?>
  <?php $url = isset($paragraph['field_image'][0]['#item']['uri']) ? file_create_url($paragraph['field_image'][0]['#item']['uri']) : '';
        $contentColor = isset($paragraph['field_content_font_color'])? $paragraph['field_content_font_color'][0]['#markup']: "";
        $mainHeadingColor = isset($paragraph['field_main_heading_font_color'])? $paragraph['field_main_heading_font_color'][0]['#markup']: "";

   ?>



   <style type="text/css">
    <?php if(isset($contentColor) && !empty($contentColor)) { ?>
      .hero-featured  .description,
      .hero-featured  .featured-cta,
      .hero-featured  .featured-cta:after
       {
        color: <?php echo $contentColor; ?> !important;
      }
       {
        color: <?php echo $contentColor; ?> !important;
      }
      .hero-featured  .featured-cta
         {
          border-color: <?php echo $contentColor; ?> !important;
        }    
    <?php } ?>

 <?php if(isset($mainHeadingColor) && !empty($mainHeadingColor)) { ?>
      .hero-featured .headline a,
      .hero-featured .headline
       {
        color: <?php echo $mainHeadingColor; ?> !important;
      }
    <?php } ?>

    </style>

  <div class="hero-featured  hero-main_0_hero_0 theme-hfc" data-module="ParallaxFactory">
    <div class="parallax-container selection-banner" style="transform: translate3d(0px, 0px, 0px); background-image: url(<?php echo $url ?>)"></div>
    <div class="screen"></div>
    <div class="darken" ></div>
    <div class="wrapper">
      <div class="featured-copy text-hero-m content -center">

        <?php if (isset($paragraph['field_hero_headline'][0])): ?>
          <?php if (isset($paragraph['field_link'][0])): ?>
            <h1 class="headline"><a href="<?php echo render($paragraph['field_link'][0]) ?>"><?php echo render($paragraph['field_hero_headline'][0]) ?></a></h1>
          <?php else: ?>
            <h1 class="headline"><?php echo render($paragraph['field_hero_headline'][0]) ?></h1>
          <?php endif ?>
        <?php endif ?>

        <?php if (isset($paragraph['field_hero_description'][0])): ?>
          <p class="description body-copy"><?php echo render($paragraph['field_hero_description'][0]) ?></p>
        <?php endif ?>

        <?php if (isset($paragraph['field_link'][0])): ?>
          <a class="featured-cta -arrow -bold" href="<?php echo render($paragraph['field_link'][0]) ?>">Learn more</a>
        <?php endif ?>

      </div>
    </div>
  </div>
<?php endif ?>

<?php
//hide all the fields we are manually printing out in this tpl
hide($content['field_hero_images']);

print render($content);
?>
</div>


<footer  class="global-footer" lang="en">
    <section class="footer-main">
        <div class="footer-top">
            <div class="mck-logo-icon">
                <span class="visually-hidden">McKinsey&amp;Company</span>
            </div>

        </div>
        <div class="footer-bottom">               
                <ul class="utility-links">
				<li><a href="https://www.mckinsey.com/privacy-policy">Privacy policy</a> </li> 
                      <li><a href="https://www.mckinsey.com/cookie-policy">Cookie Policy</a> </li> 
                      <li><a href="https://www.mckinsey.com/terms-of-use">Terms of use</a> </li> 
                </ul>
        </div>
    </section>
    <section class="footer">
        <div class="footer-inner">            
            <div class="copyright">© 1996-2019 McKinsey&nbsp;&amp;&nbsp;Company</div>
        </div>
    </section>
</footer>

















