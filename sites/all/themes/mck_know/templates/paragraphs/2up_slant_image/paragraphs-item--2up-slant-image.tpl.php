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

<?php if ($content['field_image_direction'][0]['#markup'] == 'Right'): ?>

<section id="green-slants" class="up two-up two-up-medium">
  <div class="block-list text-xl">
    <div class="item blue slant">
      <div class="item-content-wrap">
        <div class="text-wrapper">
          <h3 class="headline"><?php echo render($content['field_title']) ?></h3>
          <div class="description"><?php echo render($content['field_description']) ?></div>
        </div>
      </div>
    </div>
    <div class="item no-padding">
      <div class="item-content-wrap">
        <img src="<?php echo file_create_url($content['field_image'][0]['#item']['uri']) ?>" class="newtrophy">
      </div>
    </div>
  </div>
</section>

<?php else: ?>

<section id="blue-slants" class="up two-up two-up-medium">
  <div class="block-list text-xl">
    <div class="item no-padding">
      <div class="item-content-wrap">
        <img src="<?php echo file_create_url($content['field_image'][0]['#item']['uri']) ?>" class="ribbon">
      </div>
    </div>
    <div class="item blue">
      <div class="item-content-wrap">
        <div class="text-wrapper">
          <h3 class="headline"><?php echo render($content['field_title']) ?></h3>
          <div class="description"><?php echo render($content['field_description']) ?></div>
        </div>
      </div>
    </div>
  </div>
</section>

<?php endif ?>
