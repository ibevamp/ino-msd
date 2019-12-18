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
$title         = isset($content['field_title']) ? render($content['field_title']) : '';
$description   = isset($content['field_description']) ? render($content['field_description']) : '';

$items         = isset($content['field_paragraph']) ? $content['field_paragraph'] : '';
$nav_items         = isset($content['field_carousel_nav_item']) ? $content['field_carousel_nav_item'] : [];


//ddl($content);

$carouselItemBgColor = isset($content['field_carousel_item_bg_color'])? $content['field_carousel_item_bg_color'][0]['#markup']: "";
$carouselHeadingFont = isset($content['field_carousel_item_heading_font'])? $content['field_carousel_item_heading_font'][0]['#markup']: "";
$carouselDescColor = isset($content['field_carousel_desc_color'])? $content['field_carousel_desc_color'][0]['#markup']: "";
$carouselNavItemBgColor = isset($content['field_carousel_nav_item_bg_color'])? $content['field_carousel_nav_item_bg_color'][0]['#markup']: "";




?>



<style type="text/css">

    <?php if(isset($content['field_carousel_item_bg_color'])) { ?>
            .para-<?php echo $paraID ?>.carousel-module .carousel-item
            {
                background-color:<?php echo $carouselItemBgColor ?>!important ;
            }	
			
    <?php } ?>
	
	<?php if(isset($content['field_carousel_item_heading_font'])) { ?>
            .para-<?php echo $paraID ?>.carousel-module .carousel-content h3
            {
                color:<?php echo $carouselHeadingFont ?>!important ;
            }	
			
    <?php } ?>
	
	<?php if(isset($content['field_carousel_desc_color'])) { ?>            ,
			.para-<?php echo $paraID ?>.carousel-module .carousel-content .card-text .description p
            {
                color:<?php echo $carouselDescColor ?>!important ;
            }	
			
    <?php } ?>
	
	<?php if(isset($content['field_carousel_nav_item_bg_color'])) { ?>
            .para-<?php echo $paraID ?>.carousel-module .carousel-indicators li.active            {
                background-color:<?php echo $carouselNavItemBgColor ?>!important ;
				border-top: solid 1px <?php echo $carouselNavItemBgColor ?>;				
            }	
			
			.para-<?php echo $paraID ?>.carousel-module .carousel-indicators li.active:after{
				border-bottom-color:<?php echo $carouselNavItemBgColor ?>!important ;
				border-top: solid 1px <?php echo $carouselNavItemBgColor ?>;
			}
    
			
    <?php } ?>
	
	
</style>






<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" id="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" class="anchored-link"></a>

<div class="wrapper img-slider carousel-module  para-<?php echo $paraID ?>">
		 <header class="universal-header" data-module="UniversalHeader" >
              <div class="text-wrapper">
                       <h2 class="headline"><?php echo $title ?></h2>
                       <div class="description"><?php echo $description ?></div>
               </div>
         </header>
		
		<div class="carousel-wrapper">
              <?php if($content['field_top_align_navigation_items'][0]['#markup']){ ?>
           		<!-- Carousel Nav Items Wrapper Start-->
       				<div class="carousel-controls top-nav">
	                    <ol class="carousel-indicators">
	                         <?php foreach($nav_items as $key => $item) {
											if(is_numeric($key)) {
												$navItem = $item['entity'];
												 ?>
												   <li data-slide-to="<?php echo $key ?>"><?php print render($navItem); ?></li>
										    <?php } 
							} ?>
	                    </ol>
						<div class="fade-in gradient"></div>
						<div class="fade-out gradient"></div>
        			</div>
           		<!-- Carousel Nav Items Wrapper End-->
        <?php } ?>

          		<!-- Carousel Items Content Wrapper Start-->
           		<div class="carousel-slide-wrapper">
           			<div  class="carousel slide one-up up one-up-medium" data-ride="">
						<div class="carousel-inner ">
							<?php foreach($items as $key => $item) {
												if(is_numeric($key)) {
													$carouselContentItem = $item['entity'];
													 ?>
													  <div class="carousel-item item">
													 	 <?php print render($carouselContentItem); ?>
													 </div>
											    <?php } 
								} ?> 
						</div>
					</div>
           		</div>
           		<!-- Carousel Items Content Wrapper End-->
        <?php if(!$content['field_top_align_navigation_items'][0]['#markup']){ ?>
           		<!-- Carousel Nav Items Wrapper Start-->
       				<div class="carousel-controls">
	                    <ol class="carousel-indicators">
	                         <?php foreach($nav_items as $key => $item) {
											if(is_numeric($key)) {
												$navItem = $item['entity'];
												 ?>
												   <li data-slide-to="<?php echo $key ?>"><?php print render($navItem); ?></li>
										    <?php } 
							} ?>
	                    </ol>
						<div class="fade-in gradient"></div>
						<div class="fade-out gradient"></div>
        			</div>
           		<!-- Carousel Nav Items Wrapper End-->
        <?php } ?>
        </div>
</div>