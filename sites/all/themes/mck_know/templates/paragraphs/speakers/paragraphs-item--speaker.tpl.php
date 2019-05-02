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


<div class="accordion career-person item">
  <div class="arrow"></div>
  <div class="image"><?php echo render($content['field_image']) ?></div>
    <div class="internal-content text-wrapper">
      <h2><?php echo render($content['field_title']) ?></h2>
     <p><?php echo render($content['field_job_title']) ?><br/>
      <?php echo render($content['field_company']) ?></p>
      <div class="short-description">
          <p><?php echo render($content['field_body']['#items'][0]['summary']) ?></p>
      </div>
      <div class="accordion-content">
        <?php echo render($content['field_body'][0]) ?>
      </div>
    </div>
</div>