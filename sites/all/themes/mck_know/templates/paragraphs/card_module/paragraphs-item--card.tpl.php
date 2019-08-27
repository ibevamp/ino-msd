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

$bguri              = isset($content['field_poster']['#items'][0]['uri']) ? $content['field_poster']['#items'][0]['uri'] : NULL;
$bgurl           = isset($bguri) ? file_create_url($bguri) : NULL;


if(isset($content['field_url'])){
	 $videourl = isset($content['field_url'][0]['#markup']) ? $content['field_url'][0]['#markup'] : '';
}else{
	$videouri      = isset($content['field_file']['#items'][0]['uri']) ? $content['field_file']['#items'][0]['uri'] : '';
	$videourl      = isset($videouri) ? file_create_url($videouri) : NULL;
}

$title              = isset($content['field_title']) ? render($content['field_title']) : '';
$caption          = isset($content['field_subtitle']) ? render($content['field_subtitle']) : '';
$subtitle              = isset($content['field_sub_title']) ? render($content['field_sub_title']) : '';
$number          = isset($content['field_number']) ? render($content['field_number']) : '';
$description        = isset($content['field_description']) ? render($content['field_description']) : '';

$link_items         = isset($content['field_links']) ? $content['field_links'] : '';
$popuplink_items         = isset($content['field_pop_up_links']) ? $content['field_pop_up_links'] : '';
//$slideshow         = isset($content['field_popup_slideshow']) ? $content['field_popup_slideshow'] : '';

//$slideshowClass         = isset($content['field_popup_slideshow']) ? "slideshow-popup-card" : '';


$textAlign = $content['field_left_align_text'][0]['#markup']? "-text-left" : "-text-center";

if(isset($content['field_image_layout'])){
	$imageClass = $content['field_image_layout']['#items'][0]['value'];
}else{
	$imageClass = "thumbnail-bg";
}

$cardBgColor = isset($content['field_card_background_color'])? $content['field_card_background_color'][0]['#markup']: "";
//$cardFontColor = isset($content['field_card_font_color'])? $content['field_card_font_color'][0]['#markup']: "";
//$linksFontColor = isset($content['field_links_font_color'])? $content['field_links_font_color'][0]['#markup']: "";

$cardLink = isset($content['field_link_1'])? $content['field_link_1']['#items'][0]['url']:NULL;

//$popupLink = isset($content['field_pop_up_link'])? $content['field_pop_up_link']['#items'][0]['url']:NULL


?>
<div class="item para-<?php echo $paraID ?>">
				<?php if(isset($content['field_card_background_color'])){  ?>
				<style type="text/css">

					<?php if(isset($content['field_card_background_color'])) { ?>
							.card-module .item.para-<?php echo $paraID ?>
							{
								background-color:<?php echo $cardBgColor ?>!important ;
							}	
							
							.card-module .item.para-<?php echo $paraID ?> .item-wrapper
							{
								margin: 10px;
							}
							
					<?php } ?>
					
					
					
						
				</style>
				<?php } ?>                
						<div class="  <?php echo $textAlign; ?> <?php // echo $slideshowClass ?> item-wrapper ">
						<?php if( isset($content['field_file']) || isset($content['field_url']) ){ ?>
						  <div  class="image">
							<video class="video-js vjs-fluid" controls poster="<?php echo $bgurl ?>" data-setup="{}" src="<?php echo $videourl;  ?>"></video>
						</div>
						<?php }else{ ?>										
						
							<?php if((isset($content['field_poster']) )){
								/* if(isset($content['field_popup_slideshow'])){ ?>
								<a class="<?php echo $imageClass; ?> mfp-slideshow" style="background-image: url('<?php echo $bgurl ?>');" href="#"></a>
								<?php }else if(isset($content['field_pop_up_link'])){ ?>
								<a class="<?php echo $imageClass; ?> mfp-iframe " style="background-image: url('<?php echo $bgurl ?>');" href="<?php echo $popupLink ?>">
								</a>
								<?php }*/
								if(isset($content['field_link_1'])){ ?>
								<a class="<?php echo $imageClass; ?> " style="background-image: url('<?php echo $bgurl ?>');" href="<?php echo $cardLink ?>"></a>
								<?php }else{?>
								<div class="<?php echo $imageClass; ?>" style="background-image: url('<?php echo $bgurl ?>');" ></div>
								<?php  } }?>						
						<?php } ?>
						
												
						<?php /* if(isset($content['field_popup_slideshow'])){ ?>
							<div class="card-gallery mfp-hide white-popup" id="card-gallery">
								<?php if(isset($content['field_popup_slideshow'])){ ?>
										<?php foreach($slideshow as $key => $item) {
											if(is_numeric($key)) {
												$paraItem = $item['#element'];
												$paraUrl = $paraItem['url'];
												if( strpos( $paraUrl, ".mp4" ) !== false) { ?>
													<a src="<?php echo $paraUrl; ?>" data-type="iframe"></a>
												<?php } else { ?>
												    <a src="<?php echo $paraUrl; ?>" data-type="image"></a>
												<?php }?>
										<?php } 
										} ?>
								<?php } ?>
							</div>
							<div class="gallery-items"></div>
						<?php } */ ?>
						<div class="card-content">
						

							<?php if(isset($content['field_subtitle'])){ ?>
										<p class="caption"><?php  echo $caption; ?></p>
							<?php } ?>
							
							<?php /* if(isset($content['field_popup_slideshow'])){ ?>
									<p><a href="#" class="mfp-slideshow -arrow">
 										View Slideshow
 									</a></p>
								<?php }*/ ?>

							<?php if(isset($content['field_number'])){ ?>
								<div class="number">
								<?php  echo $number; ?>
								</div>
							<?php } ?>

								
								
							<?php  if(isset($content['field_title'])){?>
								<?php /* if(isset($content['field_popup_slideshow'])){ ?>
								<a href="#>" class="mfp-slideshow">
 										<h3 class="headline"><?php  echo $title; ?></h3>
 									</a>
								<?php }else if(isset($content['field_pop_up_link'])){ ?>
 									<a href="<?php echo $popupLink ?>" class="mfp-iframe">
 										<h3 class="headline"><?php  echo $title; ?></h3>
 									</a>
								<?php } */
								if(isset($content['field_link_1'])){ ?>
 									<a href="<?php echo $cardLink ?>">
 										<h3 class="headline"><?php  echo $title; ?></h3>
 									</a>
								<?php }else{ ?>
				                    <h3 class="headline"><?php  echo $title; ?></h4>
								<?php }} ?>
								
							
								  <?php if(isset($content['field_sub_title'])){ ?>
									<div class="sub-title">
										<p><?php  echo $subtitle; ?></p>
									</div>
								<?php } ?>
								
								
								
								<?php if(isset($content['field_description'])){ ?>
									<div class="description">
									<p><?php  echo $description; ?></p>
									</div>
								<?php } ?>


								<?php if( (isset($content['field_links'])) || (isset($content['field_pop_up_links'])) ){ ?>
									<div class="links">
										<?php foreach($link_items as $key => $item) {
										if(is_numeric($key)) {
											$paraItem = $item['#element'];
										 ?>
											 <a href="<?php echo $paraItem['url']; ?>" target="<?php echo $paraItem['attributes']['target']; ?>" class="blue-btn -arrow ">
											 	<?php echo $paraItem['title']; ?>
											 </a>
										<?php } 
										} ?>
										<?php print render($popuplink_items); ?>
									    
									</div>
								<?php } ?>

						</div><!-- end of card -->
       		</div><!--end of col for card content -->
			</div>


  
