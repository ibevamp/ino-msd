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

//ddl($content);
$textAlign = $content['field_grey_row'][0]['#markup']? "-text-center" : "-text-left";
$logoAlign = $content['field_align_right'][0]['#markup']? "-text-center" : "-text-left";
$headingAlignClass = $content['field_left_align_section_heading'][0]['#markup']? "-text-left" : "-text-center";
$descriptionAlignClass = $content['field_center_align_content'][0]['#markup']? "-text-center" : "-text-left";
$alignImage = $content['field_left_align_image'][0]['#markup']? "left_align_image" : "";
$imageSize = $content['field_display_full_image'][0]['#markup']? "full-image" : "";
$paraClasses = $content['field_para_classes'][0]['#markup'] ? $content['field_para_classes'][0]['#markup'] : '';
?>
<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" id="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" class="anchored-link"></a>
<section id="two-up-medium" class="up two-up two-up-medium section-wrapper <?php echo $alignImage; ?> <?php echo $paraClasses; ?>">
  <?php if (!empty($content['field_heading'])) { ?>
  <h2 class="section-header section-inner-wrapper <?php echo $headingAlignClass; ?> "><?php echo render($content['field_heading']) ?></h2>
  <?php } ?>
  <div class="block-list text-xl">
  <?php if(($content['field_left_align_image'][0]['#markup']) == "1"){ ?>

    <div class="item mountain-bk item-image">
      <div class="item-content-wrap no-padding">
        <div class="mountain <?php echo $imageSize; ?>" style="background-image: url(<?php echo file_create_url($content['field_image'][0]['#item']['uri']) ?>)"></div>
      </div>
    </div>

<div class="item blue theme-bgc item-content">
      <div class="item-content-wrap">
        <div class="text-wrapper">
          <?php if(isset($content['field_poster'])){ ?>
            <span class="logo <?php echo $logoAlign; ?>" style="background-image: url(<?php echo file_create_url($content['field_poster'][0]['#item']['uri']) ?>)"></span>
          <?php } ?>
          <h3 class="headline <?php echo $textAlign; ?>"><?php echo render($content['field_title']) ?></h3>
          <div class="description <?php echo $descriptionAlignClass; ?>"><?php echo render($content['field_description']) ?></div>
            <?php echo render($content['field_link']) ?>

        </div>
      </div>
    </div>

  <?php }else{ ?>
<div class="item blue theme-bgc item-content ">
      <div class="item-content-wrap">
        <div class="text-wrapper">
          <?php if(isset($content['field_poster'])){ ?>
            <span class="logo <?php echo $logoAlign; ?>" style="background-image: url(<?php echo file_create_url($content['field_poster'][0]['#item']['uri']) ?>)"></span>
          <?php } ?>
          <h3 class="headline <?php echo $textAlign; ?>"><?php echo render($content['field_title']) ?></h3>
          <div class="description <?php echo $descriptionAlignClass; ?>"><?php echo render($content['field_description']) ?></div>
            <?php echo render($content['field_link']) ?>

        </div>
      </div>
    </div>

    <div class="item mountain-bk item-image right-align-image">
      <div class="item-content-wrap no-padding">
        <div class="mountain <?php echo $imageSize; ?>" style="background-image: url(<?php echo file_create_url($content['field_image'][0]['#item']['uri']) ?>)"></div>
      </div>
    </div>
  <?php } ?>

    

  </div>
</section>
