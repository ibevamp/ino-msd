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



if(isset($content['field_video_url'])){
	 $videourl = isset($content['field_video_url'][0]['#markup']) ? $content['field_video_url'][0]['#markup'] : '';
	}else{
	$videouri      = isset($content['field_file']['#items'][0]['uri']) ? $content['field_file']['#items'][0]['uri'] : '';
	$videourl      = isset($videouri) ? file_create_url($videouri) : NULL;
}
$bguri         = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl         = isset($bguri) ? file_create_url($bguri) : NULL;



?>
<div class="section-wrapper">

<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" id="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" class="anchored-link"></a>
<div class="wrapper oneup-video section-inner-wrapper">
<section class="up one-up up-left video">
      <header class="text-l space">
            <h3 class="headline"><center><?php echo render($content['field_heading']) ?></center></h3>
       </header>
  <article class="text-xl block-list -no-dek">
    <div class="item wrapper">
     <div class="video-center-align">
             <div class="image">
                <video class="video-js vjs-fluid" controls poster="<?php echo $bgurl ?>" data-setup="{}" src="<?php echo $videourl;  ?>"></video>
            </div>
          <div class="text-wrapper -text-center">
                <h3 class="headline"><?php echo render($content['field_title']) ?></h3>
                <div class="description"><?php echo render($content['field_description']) ?></div>
              </div>
              </div>
    </div>
  </article>
</section>
</div>

</div>