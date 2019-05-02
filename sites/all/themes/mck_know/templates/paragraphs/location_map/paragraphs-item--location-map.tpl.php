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
<section class="up location-map-section r3-offices">
  <div class="span-full-width">
    <div class="gmap-holder">

      <div class="gmap">
      
       <?php echo render($content['field_map_embed']) ?>
      </div>

      <div class="text-holder text-m item city-0 active" data-zoom="15">
        <h3 class="headline"><?php echo trim(render($content['field_title'])) ?></h3>

        <p class="location-address address"><?php echo nl2br(trim(strip_tags(render($content['field_address'])))) ?></p>

        <p class="location-address phone">
            Voice: <a href="tel:<?php echo trim(render($content['field_phone'])) ?>"><?php echo trim(render($content['field_phone'])) ?></a>
            <br>
            Web: <a target="_blank" href="<?php echo trim(render($content['field_link'])) ?>"><?php echo trim(render($content['field_link'])) ?></a>
        </p>
      </div>
    </div>
  </div>
</section>
</div>