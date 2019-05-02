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

//$image = isset($content['field_image'][0]) ? render($content['field_image'][0]) : '';
/*echo "<pre>";
print_r($content);
echo "</pre>";*/




$link               = isset($content['field_link']) ? render($content['field_link']['#items']['0']['url']) : '';
$thumbnail_image    = isset($content['field_full_image']) ?  render($content['field_full_image']) : '';
$slideshow_first_image    = isset($content['field_image']) ?  file_create_url($content['field_image'][0]['#item']['uri']) : '';
$link_title         = isset($content['field_link']) ? render($content['field_link']['#items']['0']['title']) : 'Learn More';
//$link_target        = isset($content['field_link']) ? render($content['field_link']['#items'][0]['attributes']['target']) : '';
$link_class         = isset($content['field_link']) ? render($content['field_link']['#items'][0]['attributes']['class']) : '';
$pop_up_content     = isset($content['field_pop_up_content']) ? render($content['field_pop_up_content']) : '';
$popup_class        = $content['field_pop_up'][0]['#markup'] ? ($content['field_pop_up_slideshow'][0]['#markup'] ? "image-popup-vertical-fit  popup-link-slideshow" : 'image-popup-vertical-fit pop-up-link ') : "";
$popup_type_class         = isset($content['field_pop_up_type']) ? ("mfp-".render($content['field_pop_up_type']['#items'][0]['value'])): '';
 $pop_up_link = $link_title;




if($popup_type_class == "mfp-inline"){
    $link = "#inline-content-popup";
    $popup_class = "popup-gallery image";
}

if(isset($content['field_full_image'])){
  $pop_up_link = $thumbnail_image;

}
?>
<?php if(!($content['field_pop_up_slideshow'][0]['#markup']) ){
		if(isset($content['field_link'])){?>
			<a href="<?php echo $link; ?>" class="<?php echo $link_class; ?>  <?php echo $popup_class; ?> <?php echo $popup_type_class; ?>"><?php echo $link_title; ?></a>
	<?php 
	}
} else {?>

<div class="popup-gallery image">
                <a href="<?php echo $slideshow_first_image?>">
                    <?php echo $pop_up_link; ?>
                </a>
               <?php echo $pop_up_content; ?>
</div>

<?php } ?>
