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

//ddl($content);
$title         = isset($content['field_title']) ? render($content['field_title']) : '';
$description   = isset($content['field_description']) ? render($content['field_description']) : '';
$bguri              = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl              = isset($bguri) ? file_create_url($bguri) : NULL;
?>

<div class="carousel-content">		
		<?php if(!$content['field_align_right'][0]['#markup']){ ?>
		<div class="image">
			<div class="thumbnail" style="background-image: url(<?php echo $bgurl; ?>)"></div>
		</div>
		<?php } ?>
		<div class="text-wrapper">
			<h3><?php echo $title; ?></h3>
			<div class="card-text">
				<div class="description"><?php echo $description ?></div>
			</div>
		</div>
		<?php if($content['field_align_right'][0]['#markup']){ ?>
		<div class="image">
			<div class="thumbnail" style="background-image: url(<?php echo $bgurl; ?>)"></div>
		</div>
		<?php } ?>
</div>

