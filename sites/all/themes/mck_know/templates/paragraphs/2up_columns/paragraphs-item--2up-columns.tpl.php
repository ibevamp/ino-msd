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

$wrapperBgColor = $content['field_grey_row'][0]['#markup']?"default-wrapper-bg":"";
$headingAlign = $content['field_left_align_section_heading'][0]['#markup']?"heading-left-align":"heading-center-align";

?>

<div class="section-wrapper two-up-wrapper <?php echo $wrapperBgColor; ?>">
<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
  <section  class="up two-up two-up-small -imgs-largesection-inner-wrapper two-up-columns">
      <div class=" universal-header-wrapper text-lg">
         <header class="universal-header" data-module="UniversalHeader" >
              <div class="text-wrapper">
                       <h3 class="headline <?php echo $headingAlign; ?>"><?php echo render($content['field_heading']) ?></h3>
                       <div class="description"><?php echo render($content['field_description']) ?></div>
               </div>
         </header>
       </div>
    <div class="text-s icon-list">
        <?php echo render($content['field_paragraph']) ?>
    </div>
  </section>
</div>
