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
$paraID   = $variables['elements']['#entity']->item_id;
$title               = isset($content['field_title']) ? render($content['field_title']) : '';
$description            = isset($content['field_description']) ? render($content['field_description']) : '';
$subtitle            = isset($content['field_subtitle']) ? render($content['field_subtitle']) : '';
$column_items        = isset($content['field_paragraph']) ? $content['field_paragraph'] : '';
$textColorClass         = isset($content['field_grey_row']) ? "darker-heading" : '';
$cardLayoutClass         = isset($content['field_card_layout']) ? render($content['field_card_layout']) : '';
$gridClass         = isset($content['field_column_layout']) ? $content['field_column_layout']['#items'][0]['value'] : '';
$textAlign = $content['field_left_align_text'][0]['#markup']? "-text-left" : "-text-center";
$linksAlign = $content['field_align_link_bottom'][0]['#markup']? "align-links-bottom" : "";
$count = count($content['field_paragraph']['#items']);
$cardItemClass = "";
$fontSize = $content['field_larger_desc_link_text'][0]['#markup']? "larger-font" : "";
$bgColor = isset($content['field_background_color'])? $content['field_background_color'][0]['#markup']: "";
$cardTextColor = isset($content['field_card_text_color'])? $content['field_card_text_color'][0]['#markup']: "";
$cardModuleColor = isset($content['field_card_module_font_color'])? $content['field_card_module_font_color'][0]['#markup']: "";
$linkTextColor = isset($content['field_field_link_text_color'])? $content['field_field_link_text_color'][0]['#markup']: "";
$cardHeadingColor = isset($content['field_card_heading_font_color'])? $content['field_card_heading_font_color'][0]['#markup']: "";


if(isset($content['field_background_color']) || isset($content['field_image'])){
	$bgClass ="bg-image";
}

if(isset($content['field_column_layout'])){	
	if($gridClass == "two-up"){
		$column_item_class = "two-up two-up-small -imgs-large";
	}else{
		$column_item_class = $gridClass;
	}
}else{
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
}



$bguri              = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl           = isset($bguri) ? file_create_url($bguri) : NULL;
?>

<style type="text/css">

    <?php if(isset($content['field_background_color'])) { ?>
            .para-<?php echo $paraID ?>.card-module
            {
                background-color:<?php echo $bgColor ?>!important ;
            }

            .accordion-module-wrapper .view-more .para-<?php echo $paraID ?>#acc-card-module-0 span {
				border-bottom-color: <?php echo $bgColor ?>!important;
			}			
			
    <?php } ?>
	
	 <?php if(isset($content['field_card_module_font_color'])) { ?>
            .para-<?php echo $paraID ?>.card-module header .headline,
			.para-<?php echo $paraID ?>.card-module header h4,
			.para-<?php echo $paraID ?>.card-module header .description{
                color:<?php echo $cardModuleColor ?>!important ;
            }	
			
    <?php } ?>
	
	 <?php if(isset($content['field_card_text_color'])) { ?>
            .para-<?php echo $paraID ?>.card-module .headline,
			.para-<?php echo $paraID ?>.card-module .description,
			.para-<?php echo $paraID ?>.card-module .description p,
			.para-<?php echo $paraID ?>.card-module h4
            {
                color:<?php echo $cardTextColor ?>!important ;
            }	
			
    <?php } ?>
	
	<?php if(isset($content['field_card_heading_font_color'])) { ?>
            .para-<?php echo $paraID ?>.card-module .item .card-content .headline
            {
                color:<?php echo $cardHeadingColor ?>!important ;
            }	
			
    <?php } ?>
	
	
	   <?php if($content['field_grey_row'][0]['#markup']) { ?>
            .para-<?php echo $paraID ?>.card-module .headline
            {
                color:#000!important ;
            }	
			
    <?php } ?>
	
	 <?php if($content['field_field_link_text_color'][0]['#markup']) { ?>
            .para-<?php echo $paraID ?>.card-module .item .links a
            {
                color:<?php echo $linkTextColor; ?>!important ;
            }	
			
    <?php } ?>
    
</style>

<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" id="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" class="anchored-link"></a>

<?php if(isset($content['field_image'])){ ?>
	<div style="background-image: url('<?php echo $bgurl ?>');" class="para-<?php echo $paraID ?> <?php echo $linksAlign; ?> card-module bg-image <?php echo $cardLayoutClass ?> <?php echo $textColorClass ?> <?php echo $cardItemClass ?> <?php echo $column_item_class; ?> <?php echo $arrowClass ?> <?php echo $bgClass; ?> <?php echo $cardBorderClass; ?> <?php echo $defaultBgColor; ?> section-wrapper">
<?php }else{ ?>
	<div class="para-<?php echo $paraID ?> card-module <?php echo $cardItemClass ?> <?php echo $linksAlign; ?> <?php echo $cardLayoutClass ?> <?php echo $textColorClass ?> <?php echo $column_item_class; ?> <?php echo $arrowClass ?> <?php echo $cardBorderClass; ?> <?php echo $defaultBgColor; ?> <?php echo $bgClass; ?> section-wrapper">
<?php } ?>
<a name="<?php echo ($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
<span class="arrow"></span>
	<div class="section-inner-wrapper" >
		<?php if(isset($content['field_title']) || isset($content['field_subtitle']) ){ ?>
			<header class="module-header text-l <?php echo $fontSize; ?> <?php echo $textAlign; ?>">		
					<h3 class="headline ">
						<?php echo $title ?>					
					</h3>
					<h4><?php echo $subtitle ?></h4>
					<div class="description"><?php echo $description ?></div>		
			</header>
		<?php } ?>
		<div class="block-list text-m <?php echo $fontSize; ?>">
		 						<?php foreach($column_items as $key => $item) {
										if(is_numeric($key)) {
											$paraItem = $item['entity']['paragraphs_item'];
											 ?>
											<div class="item"><?php echo render($paraItem); ?></div>	 
									    <?php } 
								    } ?>
        </div>   
            <div >
            <?php if(isset($content['field_link'])){ ?>
			<div > 
				<a class="blue-btn view-products" href="<?php  echo render($content['field_link']['#items'][0]['url']); ?>"><?php  echo render($content['field_link']['#items'][0]['title']); ?><span></span></a>	
			</div>
			<?php } ?>
	</div> 
  </div>  
</div>  
