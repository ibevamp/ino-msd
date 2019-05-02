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

$title      = isset($content['field_title']) ? render($content['field_title']): '';
$description         = isset($content['field_body']) ? render($content['field_body']): '';

?>
<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
<div class="wrapper"><a name="overview" id="overview"></a>
<div id="sg-c-2up-small-no-images-variant" class="c-example-block  u-padding">

			<section id="two-up-small-2" class="up two-up two-up-small imgs-hidden">
				<div class="block-list text-m">
					<div class="item">
						<a href="#" class="item-title-link">
							<h2 class="headline"><?php echo $title; ?></h2>
						</a>
					</div>

					<div class="item">
						<div class="description"><?php echo $description; ?></div>
					</div>
				</div>
			</section>

		</div>
</div>