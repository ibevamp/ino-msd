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

<div class="wrapper">
<section class="up event-calendar agenda" data-module="EventCalendar">
     <div class="text-l">
     	<h4  class="section-header section-header--centered" style="font-size: 16px;">
  <?php echo render($content['field_hero_headline']) ?></h4>
	<h2 class="headline"> <?php echo render($content['field_title']) ?></h2>
</div>       
<?php echo render($content['field_datepar']) ?>
         
</section>
</div>