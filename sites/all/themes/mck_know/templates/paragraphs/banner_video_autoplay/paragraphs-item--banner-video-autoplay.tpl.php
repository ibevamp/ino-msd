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
$videouri      = isset($content['field_video_file']['#items'][0]['uri']) ? $content['field_video_file']['#items'][0]['uri'] : '';
$videourl      = isset($videouri) ? file_create_url($videouri) : NULL;

$bguri         = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl         = isset($bguri) ? file_create_url($bguri) : NULL;


$eyebrow         = isset($content['field_subtitle']) ? render($content['field_subtitle']) : '';
$title         = isset($content['field_title']) ? render($content['field_title']) : '';
$description   = isset($content['field_description']) ? render($content['field_description']) : '';

$image_links         = isset($content['field_link']) ? $content['field_link'] : '';
$contentColor = isset($content['field_content_font_color'])? $content['field_content_font_color'][0]['#markup']: "";
$mainHeadingColor = isset($content['field_main_heading_font_color'])? $content['field_main_heading_font_color'][0]['#markup']: "";

?>




<style type="text/css">
    <?php if(isset($contentColor) && !empty($contentColor)) { ?>
			      .para-<?php echo $paraID ?>.banner-video-autoplay .body-copy,
                  .para-<?php echo $paraID ?>.banner-video-autoplay .btn
			       {
			        color: <?php echo $contentColor; ?> !important;
			      }

                  .para-<?php echo $paraID ?>.banner-video-autoplay .videojs-hero .btn{
                  	border: solid 1px <?php echo $contentColor; ?>;
                  }


    <?php } ?>

   <?php if(isset($mainHeadingColor) && !empty($mainHeadingColor)) { ?>
			      .para-<?php echo $paraID ?>.banner-video-autoplay h1
			       {
			        color: <?php echo $mainHeadingColor; ?> !important;
			      }
    <?php } ?>

</style>




<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" id="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" class="anchored-link"></a>
<section class="homepage-banner banner-video-autoplay theme-hfc  para-<?php echo $paraID ?>">
	<video id="my-video" class="video-js vjs-16-9" preload="auto" autoplay loop data-setup="{}" >
        <!-- <source src="<?//php echo $videourl ; ?>" type='video/mp4' >  -->
        	<source src="https://solutions.mckinsey.com/msd/ino/sites/default/files/Mphasis_digtial_home_compress2.mp4" type='video/mp4' > 
	</video>					 
	<div class="videojs-hero-overlay">
        <div class="videojs-hero">
		    <span class="eyebrow body-copy"><?php echo $eyebrow; ?></span>
		    <h1><?php echo $title ; ?></h1>
		    <div class="description body-copy"><?php echo $description ; ?></div>

			<div class="banner-links">
				<?php foreach($image_links as $key => $item) {
					if(is_numeric($key)) {
						$paraItem = $item['#element']; ?>
				        <a href="<?php echo $paraItem['url']; ?>" class="btn"><?php echo $paraItem['title']; ?></a>
					<?php } 
			    } ?>
			</div>
		</div>
	</div>
</section>
