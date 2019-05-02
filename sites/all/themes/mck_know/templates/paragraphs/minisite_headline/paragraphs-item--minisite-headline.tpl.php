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
<div vlass="section-wrapper">
	<div class="minisite-headline section-inner-wrapper">
	<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
	<div class="wrapper universal-header-wrapper">	            
	<header class="universal-header" data-module="UniversalHeader" >
	<div class="text-wrapper text-l">
            <h3 class="headline"><center><?php echo render($content['field_title']) ?></center></h3>
	            <div class="description paragraph-light span-full-width"><?php echo render($content['field_description']) ?></div>
	        </div>
	</header>
	</div>
	</div>
</div>