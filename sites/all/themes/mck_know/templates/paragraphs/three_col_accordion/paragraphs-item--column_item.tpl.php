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


$bguri              = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl              = isset($bguri) ? file_create_url($bguri) : NULL;


$title              = isset($content['field_title']) ? render($content['field_title']) : '';
$sub_title          = isset($content['field_sub_title']) ? render($content['field_sub_title']) : '';
$description        = isset($content['field_description']) ? render($content['field_description']) : '';

$link_items         = isset($content['field_links']) ? $content['field_links'] : '';

?>

<div class="card">
	    <?php if(isset($content['field_image'])){ ?>
			<div class="thumbnail-bg" style="background-image: url('<?php echo $bgurl ?>');"></div>
	    <?php } ?>	

		<div class="card-block pb-5 px-4 pt-4">
			<?php if(isset($content['field_sub_title'])){ ?>
				<p class="caption mb-0"><?php  echo $sub_title; ?></p>
			<?php } ?>

			<?php if(isset($content['field_title'])){ ?>
				<h3><?php  echo $title; ?></h3>
			<?php } ?>

			<?php if(isset($content['field_description'])){ ?>
				<div class="card-text pt-3">
				<p><?php  echo $description; ?></p>
				</div>
			<?php } ?>


			<?php if(isset($content['field_links'])){ ?>
				<div class="pb-1 links pt-3">
					<?php foreach($link_items as $key => $item) {
					if(is_numeric($key)) {
						$paraItem = $item['#element'];
					 ?>
						 <a href="<?php echo $paraItem['url']; ?>" class="blue-btn"><?php echo $paraItem['title']; ?></a>
					<?php } 
					} ?>
				</div>
			<?php } ?>

		</div>
</div>

  

