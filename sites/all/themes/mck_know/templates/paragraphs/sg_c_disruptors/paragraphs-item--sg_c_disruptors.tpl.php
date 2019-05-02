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

?>


<div class="wrapper">
				<div class="c-area main">
					<article class="universal-main-content">
						<div class="body text-longform">

							<aside class="text-l -span-right disruptor">

								<div class="disruptor-content">

									<span id="main_0_ctl17_sectionHeadline" class="title headline"><?php echo render($content['field_disruptor_question']) ?><a href="<?php echo render($content['field_link'][0]['#element']['url'])?>"><em><?php echo render($content['field_title']) ?></em></a>?</span>

									<a href="<?php echo render($content['field_disruptor_link'][0]['#element']['url']) ?>" class="cta   -arrow"><?php echo render($content['field_disruptor_link_title']) ?></a>

								</div>

							</aside>
						</div>
					</article>
				</div>
			</div>



