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


$blockquoteSection = $content['field_grey_row'][0]['#markup']?"blockquote-section":"";

?>

<div class="three-up-wrapper three-columns section-wrapper <?php echo $blockquoteSection ?>">
<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" id="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" class="anchored-links"></a>
<section class="up three-up section-inner-wrapper">
	<?php if(isset($content['field_heading'])){ ?>
   <h2 class="section-header"><?php echo render($content['field_heading']) ?></h2>
   <?php } ?>
    <div class="text-s">
      <?php echo render($content['field_paragraph']) ?>
    </div>
  </section>
</div>
