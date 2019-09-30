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



$title              = isset($content['field_title']) ? render($content['field_title']) : '';
$short_description  = isset($content['field_description']) ? render($content['field_description']) : '';
$description  = isset($content['field_description']) ? render($content['field_description']) : '';

$videouri           = isset($content['field_file']['#items'][0]['uri']) ? $content['field_file']['#items'][0]['uri'] : '';
$videourl           = isset($videouri) ? file_create_url($videouri) : NULL;


$bguri              = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl              = isset($bguri) ? file_create_url($bguri) : NULL;

$wrapperLinkUrl =  isset($content['field_wrapper_link']) ? $content['field_wrapper_link']['#items'][0]['url']:"";
$alignment_media    = $content['field_align_right'][0]['#markup'] ? "media-right" : '';
$results    = isset($content['field_case_study_results']) ? "" : 'no-results';
$link_items         = isset($content['field_links']) ? $content['field_links'] : array();
$view_more_content         = isset($content['field_view_more_content']) ? render($content['field_view_more_content']) : '';
$videoPopupLink                = isset($content['field_video_popup_link']) ? $content['field_video_popup_link']: '';

?>
<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" id="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" class="anchored-link"></a>
<section class="up one-up up-left three-col-accordion <?php echo $alignment_media; ?>">
				<article class="text-s block-list -no-dek">
					<div class="item">
							<?php if(isset($content['field_file'])){?>
								<div class="image">
									<video class="video-js vjs-fluid" controls poster="<?php echo $bgurl ?>" data-setup="{}" src="<?php echo $videourl; ?>"></video>
							<?php }else{?>
							   <?php if(isset($content['field_wrapper_link'])){ ?>
										<a href="<?php echo $wrapperLinkUrl;?>" class="mfp-iframe wrapper-link"><div class="image" style="background-image: url(<?php echo $bgurl; ?>)"></div></a>
							   <?php }else{ ?>
										<div class="image" style="background-image: url(<?php echo $bgurl; ?>)"></div>
							   <?php }?>
							<?php } ?>
						
						<div class="text-wrapper">
							<div class="main-description <?php echo $results; ?>">
								 <?php if(isset($content['field_wrapper_link'])){ ?>
										<a href="<?php echo $wrapperLinkUrl;?>" class="mfp-iframe">
											<h1 class="text-l headline "><?php echo $title ; ?></h1>
										</a>
							   <?php }else{ ?>
										<h1 class="text-l headline "><?php echo $title ; ?></h1>
							   <?php }?>
								<div class="description"><?php echo $short_description; ?></div>
								 <?php if(isset($content['field_video_popup_link'])) { ?>
									<a href="<?php echo $content['field_video_popup_link']['#items'][0]['url']?>" class="banner-video-link"><?php echo $content['field_video_popup_link']['#items'][0]['title']; ?> <span class="mck-arrow-right-icon"></span></a>
								 <?php } ?>
							<div class="results">
								<?php echo render($content['field_case_study_results']); ?>
							</div>
							<div class="cta-container">
								     <?php foreach($link_items as $key => $item) {
											if(is_numeric($key)) {
												$paraItem = $item['#element'];
												 ?>
										       <a href="<?php echo $paraItem['url']; ?>" class="cta -arrow "><?php echo $paraItem['title']; ?></a>
										    <?php } 
									    } ?>
								</div>
								<?php if($content['field_display_arrow'][0]['#markup']){ ?>
									<a href="javascritp: void(0);" class="cta show-more-details">
											<span class="show-text">Show Details</span>
											<span class="hide-text">Hide Details</span>
											<span class="arrow"></span>
									</a>
								<?php } ?>
							</div>
						</div>
						
					</div>
				</article>
			  	  <div class="more-content"><?php echo $view_more_content; ?></div>
				</section>