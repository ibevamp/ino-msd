<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */

$caption         = isset($content['field_subtitle']) ? render($content['field_subtitle']) : '';
$title         = isset($content['field_title']) ? render($content['field_title']) : '';

$bguri              = isset($content['field_carousel_nav_bg']['#items'][0]['uri']) ? $content['field_carousel_nav_bg']['#items'][0]['uri'] : NULL;
$bgurl              = isset($bguri) ? file_create_url($bguri) : NULL;


$imageLayout         = isset($content['field_carousel_image_layt']) ? ($content['field_carousel_image_layt']["#items"][0]["value"]) : '';
?>
<?php if(isset($content['field_carousel_nav_bg'])){ ?>
	<div class="bg <?php echo $imageLayout;  ?>" style="background-image: url(<?php echo $bgurl; ?>)"></div>
<?php }else{ ?>
	<div class="nav-caption"><?php echo $caption ?></div>
	<div class="nav-title"><?php echo $title ?></div>
<?php } ?>