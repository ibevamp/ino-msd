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

$link_items = mck_util_get_by_paths($content, 'field_popup_link', []);
$popupClass = $content['field_popup_type'][0]['#markup']? $content['field_popup_type'][0]['#markup'] : "mfp-iframe";

?>
<?php if(trim($popupClass) == "mfp-pdf"){ ?>
<a href="#pdf-iframe" class="<?php echo $popupClass; ?> mfp-inline">
	<?php echo mck_util_get_by_paths($content, 'field_popup_link|#items|0|title', ''); ?>
</a>
<div class="mfp-hide " id="pdf-iframe">
	<embed src="<?php echo mck_util_get_by_paths($content, 'field_popup_link|#items|0|url', ''); ?>" style="width:600px; height:500px;">
</div>
<?php } else{ ?>
<a href="<?php echo mck_util_get_by_paths($content, 'field_popup_link|#items|0|url', ''); ?>" class="<?php echo $popupClass; ?>">
	<?php echo mck_util_get_by_paths($content, 'field_popup_link|#items|0|title', ''); ?>
</a>
<?php } ?>




