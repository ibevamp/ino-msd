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

//ddl($variables);
$paraID   = $variables['elements']['#entity']->item_id;
$textAlign = $content['field_left_align_section_heading'][0]['#markup']? "-text-left" : "-text-center";
$contentColor = isset($content['field_content_font_color'])? $content['field_content_font_color'][0]['#markup']: "";

?>


<style type="text/css">
    <?php if(isset($contentColor) && !empty($contentColor)) { ?>
      .para-<?php echo $paraID ?>.enhanced-hero-section .text-wrapper .headline,
      .para-<?php echo $paraID ?>.enhanced-hero-section .text-wrapper .description,
      .para-<?php echo $paraID ?>.enhanced-hero-section .text-wrapper .cta,
      .para-<?php echo $paraID ?>.enhanced-hero-section .text-wrapper .featured-cta,
      .para-<?php echo $paraID ?>.enhanced-hero-section .text-wrapper .cta:after

       {
        color: <?php echo $contentColor; ?> !important;
      }

      .para-<?php echo $paraID ?>.enhanced-hero-section .text-wrapper .cta,
      .para-<?php echo $paraID ?>.enhanced-hero-section .text-wrapper .featured-cta,
      .para-<?php echo $paraID ?>.enhanced-hero-section .text-wrapper .cta:after
       {
        border-color: <?php echo $contentColor; ?> !important;
      }

      .para-<?php echo $paraID ?>.enhanced-hero-section .text-wrapper .shorthr
       {
        border: solid 2px <?php echo $contentColor; ?> !important;
      }


    <?php } ?>
</style>



<div class="section-wrapper">
<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
<?php if($content['field_grey_row'][0]['#markup']){ ?>
<div class="enhanced-hero-section para-<?php echo $paraID ?>" >
 <?php if(isset($content['field_heading'])){ ?>
    <header class="module-header text-l -text-center">
      <h3 class="headline"><?php echo render($content['field_heading']); ?></h3>
    </header>
  <?php } ?>
<div class="hero-featured hotel" data-module="ParallaxFactory">
  <div class="parallax-container hotel-hero" style="transform: translate3d(0px, 670px, 0px); background-image: url(<?php echo $content['field_image'][0]['#item']['uri'] ? file_create_url($content['field_image'][0]['#item']['uri']) : '' ?>"></div>
  <div class="screen"></div>
  <div class="darken" style="background:rgba(0,0,0,0.4);"></div>
  <div class="wrapper">
    <div class="universal-hero -text-center -light content">
      <div class="text-wrapper <?php echo $textAlign; ?>">
          <?php if(isset($content['field_title'])){ ?>
          <h4 class="description"><?php echo render($content['field_title']) ?></h4>
          <hr class="yellowline shorthr">
          <?php } ?>
          <div class="text-xxl">
          <h2 class="headline"><?php echo render($content['field_hero_headline']) ?></h2>
        </div>
         <div class="text-hero-sm">
          <h4 class="description"><?php echo render($content['field_hero_description']) ?></h4></div>
           <?php if(isset($content['field_link'])){?>
           <a class="featured-cta" href="<?php echo $content['field_link'][0]['#element']['url'] ?>"><?php echo $content['field_link'][0]['#element']['title'] ?></a>
           <?php } ?>
      </div>
    </div>
  </div>
</div>
</div>

<?php } else{ ?>
<div class="enhanced-hero-section enhanced-hero-no-parallax para-<?php echo $paraID ?>"" >
 <?php if(isset($content['field_heading'])){ ?>
    <header class="module-header text-l -text-center">
      <h3 class="headline"><?php echo render($content['field_heading']); ?></h3>
    </header>
  <?php } ?>
<div class="hero hero-featured enhanced-hero -light -over-image-true hero-featured hotel" >
        <div class="hero-container hero-main_0_universal_header_2" style=" background-image: url(<?php echo $content['field_image'][0]['#item']['uri'] ? file_create_url($content['field_image'][0]['#item']['uri']) : '' ?>">
        <div class="text-wrapper <?php echo $textAlign; ?>">
          <?php if(isset($content['field_title'])){ ?>
          <h4 class="description"><?php echo render($content['field_title']) ?></h4>
          <?php } ?>
          <div class="text-xxl">
          <h2 class="headline"><?php echo render($content['field_hero_headline']) ?></h2>
        </div>
         <div class="text-hero-l">
          <h4 class="description"><?php echo render($content['field_hero_description']) ?></h4></div>
           <?php if(isset($content['field_link'])){?>
           <a class="cta -arrow" href="<?php echo $content['field_link'][0]['#element']['url'] ?>"><?php echo $content['field_link'][0]['#element']['title'] ?></a>
           <?php } ?>
      </div>
      </div>
    </div>
    </div>
   <?php }?>
   </div>