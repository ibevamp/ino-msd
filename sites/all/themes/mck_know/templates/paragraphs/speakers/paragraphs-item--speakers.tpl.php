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
/*echo "<pre>";
print_r($content);
echo "<pre>";*/

$accordian_class = $content['field_column_width']['#items'][0]['value'] ? "two-col-career" : '';



?>

<div class="wrapper light-blue">
<section class="up accordion-careers careers speaker-list up one-up one-up-small  <?php echo $accordian_class; ?>">
  <h2 class="section-header section-header--centered"><?php echo render($content['field_title']) ?></h2>
  <div class="text-m block-list">
    <?php echo render($content['field_paragraph']) ?>
  </div>
</section>
</div>