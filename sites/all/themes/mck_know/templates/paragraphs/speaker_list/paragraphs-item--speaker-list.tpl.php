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
<div class='three-up section-wrapper default-wrapper-bg'>
<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
<section class="up three-up speakers span-full-width section-inner-wrapper">
    <div class="inner-wrapper">
      <div class="text-wrapper">
        <header class="module-header text-l -text-center">
          <h3 class="headline"><?php echo render($content['field_title']) ?></h3>
          <?php if(isset($content['field_description'])){ ?>
             <div class="description"><?php echo render($content['field_description']) ?></div>
          <?php } ?>
        </header>
      </div>
      <div class="block-list text-s">
        <?php echo render($content['field_paragraph']) ?>       
      </div> 
      <div class="view-more">
          <?php if(isset($content['field_link'])){ ?>
          <a class="btn" href="<?php echo $content['field_link'][0]['#element']['url'] ?>"><?php echo $content['field_link'][0]['#element']['title'] ?></a>
          <?php } ?>
        </div>
    </div>
</section>
</div>