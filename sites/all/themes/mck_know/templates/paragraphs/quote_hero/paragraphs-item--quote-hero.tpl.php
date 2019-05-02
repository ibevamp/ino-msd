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

<div class="hero-featured hero-main_0_hero_0 bio" data-module="ParallaxFactory" style="background-image: url(<?php echo render($content['field_image']) ;?>);">
  <div class="parallax-container bio-hero"
       style="transform: translate3d(0px, 0px, 0px);">

  </div>
  <div class="screen"></div>
  <div class="wrapper">
    <div class="featured-copy text-hero-sm content">
      <h1 class="headline">
        <?php echo render($content['field_text_quote']); ?>
      </h1>

      <p class="profile-name-title ">
        <?php echo render($content['field_text_quote_byline']); ?>
      </p>

    </div>

  </div>
  <div class="fred" style="background-image: url(<?php echo render($content['field_full_image']);?>);"></div>
</div>

