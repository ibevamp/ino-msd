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


$paraID   = $variables['elements']['#entity']->item_id;
$link_items         = isset($content['field_links']) ? $content['field_links'] : '';

$descriptionAlign = $content['field_grey_row'][0]['#markup']? "-text-center" : "";
$sectionHeadingOverlay = $content['field_text_overlays_image'][0]['#markup'];
$displaySignature = $content['field_align_right'][0]['#markup'];
$textAlign = $content['field_text_align'][0]['#markup']? "-text-left" : "-text-center";
$bgImage = isset($content['field_image']) ? "bg-image" : 'no-bg-image';
$mainHeadingColor = isset($content['field_main_heading_font_color'])? $content['field_main_heading_font_color'][0]['#markup']: "";

if((isset($content['field_hero_headline'])) ||  (isset($content['field_hero_paragraph']))  ||  (isset($content['field_links'])) ){
    $overlay = "";
}else{
   $overlay = "empty-overlay";
}


?>

<style type="text/css">
    <?php if(isset($mainHeadingColor) && !empty($mainHeadingColor)) { ?>
              .para-<?php echo $paraID ?>.oneup-medium-hero .section-heading

               {
                color: <?php echo $mainHeadingColor; ?> !important;
              }

    <?php } ?>
</style>




<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" id="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" class="anchored-link"></a>
<div class="wrapper oneup-medium-hero <?php $bgImage ?> <?php echo $overlay; ?>   para-<?php echo $paraID ?> ">
  <section class="up medium-hero careers">
   <?php if(isset($content['field_title']) && !($sectionHeadingOverlay) ){ ?>
      <header class="universal-header text-l <?php echo $textAlign; ?> " data-module="UniversalHeader">
            <h2 class="headline main-heading"><?php echo render($content['field_title']) ?></h2>
      </header>
      <?php } ?>
      <?php if(isset($content['field_image'])){ ?>
    <div class="image hero-container homepage-medium-hero" style="background-image: url(<?php echo file_create_url($content['field_image'][0]['#item']['uri']) ?>)">
        <?php if($sectionHeadingOverlay){ ?>
        <div  class="text-wrapper text-xl -text-center main-heading">
            <h2  class="headline section-heading"><?php echo render($content['field_title']) ?></h2>
        </div>
         <?php } ?>   
    </div>
    <?php  } ?>
    <?php if( (isset($content['field_hero_headline'])) ||  (isset($content['field_hero_paragraph']))  ||  (isset($content['field_links']))  ){ ?>
    <article class="up body">
      <header class="text-xl <?php echo $descriptionAlign ?>">
        <h3 class="headline"><?php echo render($content['field_hero_headline']) ?></h3>
        <div class="description">
           <?php echo render($content['field_hero_paragraph']) ?>  
           <?php if(isset($content['field_links'])){?>
          <div class="links">
                  <?php foreach($link_items as $key => $item) {
                    if(is_numeric($key)) {
                      $paraItem = $item['#element'];
                       ?>
                        <p> <a href="<?php echo $paraItem['url']; ?>" class="-arrow"><?php echo $paraItem['title']; ?></a></p>
                      <?php } 
                    } ?>
                    </div> 
          </div>
          <?php } ?>
          <?php if($displaySignature){ ?>
               <div class="signature-logo"><span>Sincerely,</span> <?php echo render($content['field_full_image']); ?></div>
         <?php } ?>
      </header>
    </article>
    <?php } ?>
  </section>
</div>
