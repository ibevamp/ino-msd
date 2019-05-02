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

$link_items         = isset($content['field_links']) ? $content['field_links'] : '';
$imageClass = $content['field_grey_row'][0]['#markup']? "icon" : "thumbnail";
$videouri       = isset($content['field_video_file']['#items'][0]['uri']) ? $content['field_video_file']['#items'][0]['uri'] : '';
$videourl      = isset($videouri) ? file_create_url($videouri) : NULL;
$bguri              = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl              = isset($bguri) ? file_create_url($bguri) : NULL;
?>
<div class="item">
<?php if((isset($content['field_pop_up_thumbnail']))){
  echo render($content['field_pop_up_thumbnail']);
}else{?>
<?php if(isset($content['field_video_file'])){ ?> 
           <video class="video-js vjs-fluid" controls poster="<?php echo $bgurl ; ?>" data-setup="{}" src="<?php echo $videourl;  ?>"></video>
   <?php } else{ 
    if(isset($content['field_image'])){?>
        <a style="background-image: url(<?php echo $content['field_image'][0]['#item']['uri'] ? file_create_url($content['field_image'][0]['#item']['uri']) : '' ?>)"
         class="<?php echo $imageClass; ?>"  ></a>
   <?php } } ?>
<?php }?>
  
   <?php if(isset($content['field_title'])){ ?>
  <a href="<?php echo render($content['field_link'][0]['#element']['url']) ?>" class="item-title-link">
    <h3 class="headline -centered"><?php echo render($content['field_title']) ?></h3>
  </a>
  <?php } ?>
 
  <div class="description"><?php echo render($content['field_description']) ?></div>
  <?php if(isset($content['field_links'])){ ?>
      <div class="links ">
                         <?php foreach($link_items as $key => $item) {
                            if(is_numeric($key)) {
                              $paraItem = $item['#element'];
                               ?>
                               <a href="<?php echo $paraItem['url']; ?>" class="-arrow mt-1 "><?php echo $paraItem['title']; ?></a><br/>
                              <?php } 
                            } ?>
                      </div>
      <?php } ?>
   <?php if(isset($content['field_paragraph'])){
        echo render($content['field_paragraph']);
    }?>   
</div>
