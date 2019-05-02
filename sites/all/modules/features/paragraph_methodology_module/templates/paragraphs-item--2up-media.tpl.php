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
$subtitle           = isset($content['field_subtitle']) ? render($content['field_subtitle']) : '';
$subheading_description  = isset($content['field_main_description']) ? render($content['field_main_description']) : '';
$weeks  = isset($content['field_section_title']) ? render($content['field_section_title']) : '';
$short_description  = isset($content['field_short_description']) ? render($content['field_short_description']) : '';
$bguri              = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl              = isset($bguri) ? file_create_url($bguri) : NULL;
$captionBg              = isset($content['field_caption_bg']['#items'][0]['uri']) ? $content['field_caption_bg']['#items'][0]['uri'] : NULL;
$captionBg              = isset($captionBg) ? file_create_url($captionBg) : NULL;

if($content['field_right_align_image'][0]['#markup'] == 1){
	$alignClass = "right-align-img";
}else{
	$alignClass = "";
}
?>

 <?php if(isset($content['field_anchor_name'])){ ?>
	<a name="<?php echo ($content['field_anchor_name']['#items'][0]['value']) ?>" id="<?php echo ($content['field_anchor_name']['#items'][0]['value']) ?>" class="anchored-link"></a>

<?php } ?>

<section class="up two-up two-up-small <?php echo $alignClass;?> " id="twoup-media">
           <?php if($content['field_right_align_image'][0]['#markup'] == 0){ ?>
		  	<div class="item">
					<div class="bg" style="background-image: url('<?php echo $bgurl ?>');"></div>
			</div>
			<?php } ?>
			<div class="item">
				<div class="text-wrapper">
								<header class="universal-header">
								     <?php if(isset($content['field_caption_bg'])){ ?>
										<span class="caption-bg" style="background-image: url('<?php echo $captionBg ?>');"></span>
									 <?php } ?>
									<span class="eyebrow"><?php echo render($subtitle) ?></span>
									<h2><?php echo render($title) ?> </h2>
									<div class="description"><?php  echo $subheading_description; ?></div>
									<div class="description weeks"><?php  echo $weeks; ?></div>
								</header>
								<div class="description"><?php  echo $short_description; ?></div>
							
				</div>
	      </div>
		     <?php if($content['field_right_align_image'][0]['#markup'] == 1){ ?>
            <div class="item">
					<div class="bg" style="background-image: url('<?php echo $bgurl ?>');"></div>
			</div>
			<?php } ?>
		  
</section>

