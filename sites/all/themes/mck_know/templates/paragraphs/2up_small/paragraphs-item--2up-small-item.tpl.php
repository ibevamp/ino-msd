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
$imageUri = isset($content['field_image']) ? $content['field_image'][0]['#item']['uri'] : NULL;
$imageUrl = isset($imageUri) && !empty($imageUri) ? file_create_url($imageUri) : '';
$title = isset($content['field_title']) ? $content['field_title']['#items'][0]['value'] : '';
$description = isset($content['field_description']) ? $content['field_description']['#items'][0]['value'] : '';
$link = isset($content['field_link']) ? $content['field_link']['#items'][0]['url'] : '#';
$eyebrow = isset($content['field_eyebrow']) ? $content['field_eyebrow']['#items'][0]['value'] : '';
$videouri       = isset($content['field_video_file']['#items'][0]['uri']) ? $content['field_video_file']['#items'][0]['uri'] : '';
$videourl      = isset($videouri) ? file_create_url($videouri) : NULL;


?>
<div class="item">
	<div class="image">
 <?php if(isset($content['field_video_file'])){ ?> 
           <video class="video-js vjs-fluid" controls poster="<?php echo $imageUrl; ?>" data-setup="{}" src="<?php echo $videourl;  ?>"></video>
   <?php } else{ 
   	if(isset($content['field_image'])){
   	?>
		<a href="<?php echo $link; ?>">
			<picture>
				<img srcset="<?php echo $imageUrl; ?>">
			</picture>
		</a>
<?php } 

} ?>

	</div>
	<div class="text-wrapper">
		<span class="eyebrow"><?php echo $eyebrow; ?></span>
		<a href="<?php echo $link; ?>" class="item-title-link">
			<h3 class="-arrow headline"><?php echo $title; ?></h3>
		</a>
		<div class="description">
			<?php echo $description; ?>
		</div>
	</div>
</div>