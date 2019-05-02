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

$headline              = isset($content['field_hero_headline']) ? render($content['field_hero_headline']) : '';
$short_description     = isset($content['field_description']) ? render($content['field_description']) : '';


/*echo "<pre>";
echo print_r($content);
echo "</pre>";*/
?>
<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
<div class="wrapper">
	<div id="sg-c-1up-small" class="c-example-block  u-padding">

				<div class="wrapper">
					<section id="one-up-small" class="up one-up one-up-small">
						<h2 class="section-header section-header--centered"><?php echo $headline; ?></h2>
						<header class="module-header text-l">
							<div class="description module-description"><?php echo $short_description; ?></div>
						</header>
					<?php if(isset($content['field_link'])){?>
						<div class="module-footer">
							<a href="<?php echo render($content['field_link']['#items'][0]['url']) ?>" class="btn"><?php echo render($content['field_link']['#items'][0]['title']) ?></a>
						</div>

				    <?php } ?>
					</section>
				</div>

			</div>
</div>