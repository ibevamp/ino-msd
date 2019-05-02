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


$image               = isset($content['field_image']) ? render($content['field_image']): '';

$bguri              = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl              = isset($bguri) ? file_create_url($bguri) : NULL;

$imageClass = $content['field_grey_row'][0]['#markup']? "thumbnail" : "icon";
$textAlignClass = $content['field_left_align_section_heading'][0]['#markup']?"-text-left":"-text-center";


?>

<div class="item">

<div class="image">  
<?php if(isset($content['field_link'])){?>

		<?php if ($content['field_image']){?>
							<a class="icon bgimage" style="background-image: url('<?php echo $bgurl;?>')"  href="<?php echo render($content['field_link'][0]['#element']['url']) ?>"></a>
		<?php  } ?>

<?php }else{?>
	 <?php if ($content['field_image']){?>
									<span class="bgimage <?php echo $imageClass; ?>" style="background-image: url('<?php echo $bgurl;?>')" ></span>
	<?php }
	} ?>
							</div>
							
							<div class="text-wrapper <?php echo $textAlignClass; ?>">
								<?php if(isset($content['field_link'])){?>
								<a href="<?php echo render($content['field_link'][0]['#element']['url']) ?>" class="item-title-link">
									<h3 class="headline">
										<?php echo render($content['field_title']) ?>
									</h3>
									 <div class="description"><?php echo render($content['field_description']) ?></div>

									 <?php if(isset($content['field_link'])){ ?>
									     <a href="<?php echo ($content['field_link'][0]['#element']['url']) ?>" class="btn">
											<?php echo ($content['field_link'][0]['#element']['title']) ?>
										</a>
							       <?php } ?>		

								</a>
								<?php } else {?>
									<h3 class="headline">
										<?php echo render($content['field_title']) ?>
									</h3>
									 <div class="description"><?php echo render($content['field_description']) ?></div>

								<?php }?>
								
							</div>
						</div>
