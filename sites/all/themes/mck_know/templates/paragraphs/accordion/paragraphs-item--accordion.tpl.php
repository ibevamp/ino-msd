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

$field_grey_row = mck_util_get_by_paths($content, 'field_grey_row|0|#markup', '');
$wrapperBgColor = !empty($field_grey_row) ? "default-wrapper-bg" : "";

$field_left_align_section_heading = mck_util_get_by_paths($content, 'field_left_align_section_heading|0|#markup', '');
$headingAlign = !empty($field_left_align_section_heading) ? "heading-left-align" : "heading-center-align";

$paraID   = $variables['elements']['#entity']->item_id;
$bgColor = isset($content['field_acc_bg_color'])? $content['field_acc_bg_color'][0]['#markup']: "";
$cardBgColor = isset($content['field_acc_card_bg_color'])? $content['field_acc_card_bg_color'][0]['#markup']: "";
$contentColor = isset($content['field_acc_font_color'])? $content['field_acc_font_color'][0]['#markup']: "";
$cardBgClass = isset($content['field_acc_card_bg_color'])? "card-bg": "";
$cardHeadingColor = isset($content['field_card_heading_font_color'])? $content['field_card_heading_font_color'][0]['#markup']: "";
$accordionLayoutClass         = isset($content['field_accordion_card_layout']) ? render($content['field_accordion_card_layout']) : '';
$headingAlignClass         = isset($content['field_heading_subtitle_alignment']) ? render($content['field_heading_subtitle_alignment']) : '';

$count = count($content['field_acc_card_item']['#items']);

$anchorName = mck_util_get_by_paths($content, 'field_acc_anchor_link|#items|0|value', '');

if($count == 2){
	$column_item_class = "two-up two-up-small -imgs-large";
}else if($count == 3){
	$column_item_class = "three-up";
}else if($count == 4){
	$column_item_class = "four-up";
}else if($count == 5){
	$column_item_class = "five-up";
}else if($count == 6){
	$column_item_class = "six-up";
}else{
	$column_item_class = "one-up";
}

	
	
?>


<style type="text/css">
    <?php if(isset($bgColor) && !empty($bgColor)) { ?>
              .para-<?php echo $paraID ?>.accordion-module-wrapper

               {
                background-color: <?php echo $bgColor; ?> !important;
              }

    <?php } ?>

	<?php if(isset($content['field_card_heading_font_color'])) { ?>
            .para-<?php echo $paraID ?>.accordion-module-wrapper .accordion-inner-wrapper.card-module .item .heading-link .headline,
			.para-<?php echo $paraID ?>.accordion-module-wrapper .accordion-inner-wrapper.card-module .item .subtitle
            {
                color:<?php echo $cardHeadingColor ?>!important ;
            }	
			
    <?php } ?>
	
	
	<?php if(isset($content['field_acc_card_bg_color'])) { ?>
            .para-<?php echo $paraID ?>.accordion-module-wrapper .accordion-inner-wrapper.card-module .item 
            {
                background-color:<?php echo $cardBgColor ?>!important ;
            }	
			
    <?php } ?>
	
	<?php if(isset($content['field_acc_font_color'])) { ?>
            .para-<?php echo $paraID ?>.accordion-module-wrapper .accordion-inner-wrapper.card-module .item .description,
			.para-<?php echo $paraID ?>.accordion-module-wrapper .accordion-inner-wrapper.card-module .item .description p
            {
                color:<?php echo $contentColor ?>!important ;
            }	
			
    <?php } ?>
  
  

</style>
<div class="accordion-module-wrapper para-<?php echo $paraID; ?>">
  <div class="section-wrapper accordion-inner-wrapper card-module <?php echo $headingAlignClass; ?> <?php echo $accordionLayoutClass; ?> <?php echo $wrapperBgColor; ?>  <?php echo $column_item_class; ?> <?php echo $cardBgClass; ?>">
  <?php if (!empty($anchorName)) { ?>
    <a name="<?php echo $anchorName; ?>"></a>
  <?php } ?>
  <section class=" section-inner-wrapper">
  <?php if(isset($content['field_acc_main_heading']) || isset($content['field_acc_main_description'])){ ?>
      <div class=" universal-header-wrapper text-lg">
         <header class="universal-header" data-module="UniversalHeader" >
              <div class="text-wrapper">
                       <h3 class="headline <?php echo $headingAlign; ?>">
							<?php echo render($content['field_acc_main_heading']) ?>
						</h3>
					   <div class="description">
							<?php echo render($content['field_acc_main_description']) ?>
					   </div>
               </div>
         </header>
       </div>
  <?php } ?>
    <div class="text-s block-list">
        <?php echo render($content['field_acc_card_item']) ?>
    </div>	
  </section>
  </div>
  <div class="loading" style="display: none; width: 100%; margin: 20px auto; text-align: center;">Loading...</div>
  <div class="view-more">
    <div class="section-wrapper">

					<div class="section-inner-wrapper acc-card-content-wrapper">
						<?php
							$viewName = 'accordion_content';
							print views_embed_view($viewName,'block');                    
						?>
					</div>
			   </div>				
	</div>
</div>
