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
<a name=""></a>
  <section class="up full-text-section careers">
     <?php if (isset($content['field_heading'])): ?>
    <header class="text-l space">
      <h3 class="headline -gradient-cool -text-center">
          <?php echo render($content['field_heading']); ?>
      </h3>
      <?php endif ?>
    </header>
    <div class="block-list">
      <div class="two-column text-l">
        <div class="left-column text-longform">
            <h2 class="-gradient-cool"><?php echo render($content['field_title']); ?></h2>
            <h5><?php echo render($content['field_job_title']); ?></h5>
            <div><?php echo render($content['field_text_left']); ?></div>
        </div>
        <div class="right-column text-longform">
            <h2 style="color:#70B51E"><?php echo render($content['field_subtitle']); ?></h2>
            <h5><?php echo render($content['field_eyebrow']); ?></h5>
            <div><?php echo render($content['field_text_right']); ?></div>
        </div>
      </div>
    </div>
  </section>
</div>

