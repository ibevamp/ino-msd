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
$bguri              = isset($content['field_acc_card_image']['#items'][0]['uri']) ? $content['field_acc_card_image']['#items'][0]['uri'] : NULL;
$bgurl           = isset($bguri) ? file_create_url($bguri) : NULL;
$nid = mck_util_get_by_paths($content, 'field_acc_more_content|0|#item|target_id', '');
//$node_content = node_load($nid);

if($content['field_acc_icon'][0]["#markup"] == 1){
	$imageClass= "icon";
}else{
	$imageClass="thumbnail";
}

?>
<div class="item accordion-item-wrapper "  data-nid="<?php echo $nid; ?>">
   <?php if(isset($content['field_acc_card_image'])){ ?>
        <a href="javascript: void(0);" data-nid="<?php echo $nid; ?>" style="background-image: url(<?php echo $bgurl; ?>)" class="acc-item-link  <?php echo $imageClass; ?>" ></a>
   <?php } ?>
  
   <?php if(isset($content['field_acc_card_title'])){ ?>
  <a href="javascript: void(0);" class="acc-item-link heading-link" data-nid="<?php echo $nid; ?>">
    <h3 class="headline -centered">
		<?php echo render($content['field_acc_card_title']) ?>
	</h3>
  </a>
  <?php } ?>
  
  <?php if(isset($content['field_acc_card_sub_title'])){ ?>
    <h4 class="subtitle">
		<?php echo render($content['field_acc_card_sub_title']) ?>
	</h4>
  <?php } ?>
 
   <?php if(isset($content['field_acc_card_description'])){ ?>
    <div class="description">
		<?php echo render($content['field_acc_card_description']) ?>
	</div>
  <?php } ?>  	

   <div class="accordion-item-more-content">
		    <?php
                    $secondViewName = 'accordion_content';
                    print views_embed_view($secondViewName,'block', $nid);
            ?>
   </div>
</div>



