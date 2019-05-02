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

<div class="accordion-wrapper">
    <div class="text-m">
      <h2 role="button" aria-expanded="false" tabindex="0" class="headline acc-arrow accordion-head">
        <?php echo render($content['field_question']) ?>
      </h2>
    </div>
    <div class="accordion-content text-l c-area visually-hidden" aria-hidden="true">
      <div class="body text-longform">
        <?php echo render($content['field_answer']) ?>
      </div>
    </div>
</div>
