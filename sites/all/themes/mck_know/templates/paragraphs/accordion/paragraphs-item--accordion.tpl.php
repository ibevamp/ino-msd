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

$paraID   = $variables['elements']['#entity']->item_id;
$bgColor = isset($content['field_acc_bg_color'])? $content['field_acc_bg_color'][0]['#markup']: "";
$cardHeadingColor = isset($content['field_card_heading_font_color'])? $content['field_card_heading_font_color'][0]['#markup']: "";
$accordionLayoutClass         = isset($content['field_accordion_card_layout']) ? render($content['field_accordion_card_layout']) : '';
$headingAlignClass         = isset($content['field_heading_subtitle_alignment']) ? render($content['field_heading_subtitle_alignment']) : '';

$count = count($content['field_acc_card_item']['#items']);

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
            .para-<?php echo $paraID ?>.accordion-inner-wrapper.card-module .item .heading-link .headline,
			.para-<?php echo $paraID ?>.accordion-inner-wrapper.card-module.subtitle-over-image .item .subtitle
            {
                color:<?php echo $cardHeadingColor ?>!important ;
            }	
			
    <?php } ?>
  

</style>
<div class="accordion-module-wrapper ">
  <div class="section-wrapper accordion-inner-wrapper card-module <?php echo $headingAlignClass; ?> <?php echo $accordionLayoutClass; ?> <?php echo $wrapperBgColor; ?> para-<?php echo $paraID; ?> <?php echo $column_item_class; ?>">
  <a name="<?php echo ($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
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
