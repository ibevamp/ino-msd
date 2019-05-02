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

$headline   = isset($content['field_title']) ? render($content['field_title']) : '';
$photos     = isset($content['field_paragraph']) ? render($content['field_paragraph']) : '';
$headingAlignClass = $content['field_left_align_section_heading'][0]['#markup']? "-text-left" : "-text-center";


?>
<div class="section-wrapper">
<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
<div class="wrapper slick-slideshow">
	<section class="up careers backgroundColor-white " >
			<header class="text-l space <?php echo $headingAlignClass; ?> ">
			      <h3 class="headline"><?php echo $headline; ?></h3>
			 </header>
	        <div class="fullscreen-curtain"></div>
	        <div  class="gallery-slideshow">
	           <?php echo $photos; ?>
	        </div>
	</section>
</div>
</div>