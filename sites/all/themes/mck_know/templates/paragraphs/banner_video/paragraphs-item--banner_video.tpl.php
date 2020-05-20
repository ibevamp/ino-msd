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
$paraID = $variables['elements']['#entity']->item_id;
$videouri      = isset($content['field_video_file']['#items'][0]['uri']) ? $content['field_video_file']['#items'][0]['uri'] : '';
$videourl      = isset($videouri) ? file_create_url($videouri) : NULL;
$bguri         = isset($content['field_poster']['#items'][0]['uri']) ? $content['field_poster']['#items'][0]['uri'] : NULL;
$bgurl         = isset($bguri) ? file_create_url($bguri) : NULL;

$title         = isset($content['field_title']) ? render($content['field_title']) : '';
$description   = isset($content['field_short_description']) ? render($content['field_short_description']) : '';

$field_grey_row = mck_util_get_by_paths($content, 'field_grey_row|0|#markup', '');
$bg_video      = !empty($field_grey_row) ? "background-video-wrapper" : 'media-player banner  active';

$fixedWidth     = $content['field_fixed_width']['0']['#markup'] ? "fixed-width" : '';
$videoLink = isset($content['field_video_link'])? $content['field_video_link']['#items'][0]['url']:NULL;
$videoLinkTitle = isset($content['field_video_link'])? $content['field_video_link']['#items'][0]['title']:NULL;

$fontColor = isset($content['field_card_font_color'])? $content['field_card_font_color'][0]['#markup']: "#fff";

//echo "<pre>"; var_dump($content); echo "</pre>";
?>

<style type="text/css">
	
	<?php if(isset($content['field_card_font_color'])) { ?>
        .para-<?php echo $paraID ?>.banner-video-wrapper .banner-video-overlay .videojs-hero .text-render h1,
		.para-<?php echo $paraID ?>.banner-video-wrapper .banner-video-overlay .videojs-hero .text-render .description,
		.para-<?php echo $paraID ?>.banner-video-wrapper .banner-video-overlay .videojs-hero .text-render .description p{
            color:<?php echo $fontColor ?>!important ;
        }
    <?php } ?>
</style>

<div class="banner-video-wrapper para-<?php echo $paraID ?>">
	<div class="banner-video section-wrapper banner-video-default <?php echo $fixedWidth; ?>">
	   <div class="bg-tint"></div>
	   <div class="section-inner-wrapper">
		<video id="my-video" class="video-js vjs-default-skin vjs-16-9" controls data-setup="{}" poster="<?php echo $bgurl ?>">
			<source src="<?php echo $videourl ?>" type='video/mp4' />
		</video>

		<div class="banner-video-overlay" >
			<div class="videojs-hero multimedia-hero" >
				<div class="text-render -light -vert-lowest">
					<div class="text-xl">
						<h1 class="headline enhanced-headline"><?php echo $title ?></h1>
						<div class="description module-description"><?php echo $description ?></div>
						<div class="mck-play-icon" style="display: none"></div>
					</div>
				</div>
			</div>
		</div>
		</div>
	</div>
	<?php if(isset($content['field_video_link'])){ ?>
		<a href="<?php echo $videoLink; ?>" class=" -arrow mfp-iframe watch-video"><?php echo $videoLinkTitle; ?></a>
	<?php } ?>
</div>