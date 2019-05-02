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
<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>

<div id="sg-c-2up-small-variant" class="c-example-block  u-padding">

			<section class="up two-up two-up-small 	 up-left  -display-mode-standard">
            <h2 class="section-header"><?php echo render($content['field_eyebrow']); ?></h2>
				<div class="block-list text-s">

					<div class="item">
						<div class="image">
							<a href="#">
								<picture>
									<?php echo render($content['field_thumbnail_left']); ?>
								</picture>
							</a>
						</div>
						<div class="text-wrapper">
							<a href="#" class="item-title-link">
								<h3 class="-arrow headline"><?php echo render($content['field_left_post_title']); ?></h3>
							</a>
							<div class="description">
								
							</div>
						</div>
					</div>
					<div class="item">
						<div class="image">
							<a href="#">
								<picture>
									<?php echo render($content['field_thumbnail_right']); ?>
								</picture>
							</a>
						</div>
						<div class="text-wrapper">
							<a href="#" class="item-title-link">
							<h3 class="-arrow headline"><?php echo render($content['field_right_post_title']); ?></h3>
							</a>
							<div class="description">
								
							</div>

						</div>  <!-- END .text-wrapper -->

					</div>  <!-- END .item -->

				</div>  <!-- END .block-list -->
			</section>

		</div>

</div>