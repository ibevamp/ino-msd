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

$bguri         = isset($content['field_poster']['#items'][0]['uri']) ? $content['field_poster']['#items'][0]['uri'] : NULL;
$bgurl         = isset($bguri) ? file_create_url($bguri) : NULL;
$title              = isset($content['field_title']) ? render($content['field_title']) : '';
$menu_links        = isset($content['field_menu_links']) ? $content['field_menu_links'] : '';
?>

<div class="enhanced-hero-section enhanced-hero-no-parallax banner-anchors" >
 <div class="hero hero-featured enhanced-hero -light -over-image-true hero-featured hotel" >
        <div class="hero-container hero-main_0_universal_header_2" style=" background-image: url(<?php echo $bgurl; ?>">
		 <div class="wrapper">
			<div class="featured-copy text-hero-m content -center">
			<h1 class="headline"><?php  echo $title; ?></h1>
				<div class="links">
					<ul>
					<?php print render($menu_links); ?>
					</ul>
				</div>
			</div>
	  </div>
      </div>
    </div>
    </div>








