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


<div class="factoid">
								<div class="text-holder">
									<h2 class="headline factoid-headline -gradient-super-blue">  </h2>
									<h3 class="subhead factoid-subheadline -gradient-super-blue"> <?php echo render($content['field_title']) ?></h3>
									<p class=" factoid-body"><?php echo render($content['field_description']) ?></p>

									<div class="cta-holder">
										<a class="cta -arrow " target="" href="/business-functions">Business Functions</a>
									</div>

								</div>
							</div>



