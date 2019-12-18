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
$paraID   = $variables['elements']['#entity']->item_id;
$paraClass = isset($content['field_para_classes']) ? $content['field_para_classes']['#items'][0]['value'] : '';
$paraHeight = isset($content['field_para_height']) ? $content['field_para_height']['#items'][0]['value'] : '400px';
$bguri         = isset($content['field_poster']['#items'][0]['uri']) ? $content['field_poster']['#items'][0]['uri'] : NULL;
$bgurl         = isset($bguri) ? file_create_url($bguri) : NULL;

$videouri      = isset($content['field_ba_bg_video']['#items'][0]['uri']) ? $content['field_ba_bg_video']['#items'][0]['uri'] : '';
$videourl      = isset($videouri) ? file_create_url($videouri) : NULL;

$bannerVideoClass     = isset($content['field_ba_bg_video']['#items'][0]['uri'])?"bg-video":"";
$linksWidth     = isset($content['field_ba_fixed_width'])?"fixed-width":"";
	
$title              = isset($content['field_title']) ? render($content['field_title']) : '';
$menu_links        = isset($content['field_menu_links']) ? $content['field_menu_links'] : '';



$buttonTextColor = isset($content['field_ba_text_color'])? $content['field_ba_text_color'][0]['#markup']: "";
$buttonBgColor = isset($content['field_ba_button_color'])? $content['field_ba_button_color'][0]['#markup']: "";
$fontSize = isset($content['field_ba_btn_font_size'])? $content['field_ba_btn_font_size'][0]['#markup']: "";

$buttonBgOpacity = mck_util_get_by_paths($content, 'field_ba_button_opacity|#items|0|value', '');
if (empty($buttonBgColor)) {
  $buttonBgOpacity = '';
}

$field_menu_links = mck_util_get_by_paths($content, 'field_menu_links|#items', []);
$count = count($field_menu_links);

$countClass = "links-count-".$count;

?>
<style type="text/css">
    <?php if(!empty($buttonBgColor)) { ?>
      .para-<?php echo $paraID ?>.banner-anchors .links ul li
      {
          background-color:<?php echo $buttonBgColor . $buttonBgOpacity ?> !important ;
      }
      .para-<?php echo $paraID ?>.banner-anchors .links ul li:hover
      {
        background-color:<?php echo $buttonBgColor ?> !important ;
      }
    <?php } ?>
	
	  <?php if(isset($content['field_ba_text_color'])) { ?>
            .para-<?php echo $paraID ?>.banner-anchors .links ul li a
            {
                color:<?php echo $buttonTextColor ?>!important ;
            }	
			
    <?php } ?>
	
</style>
<div class="enhanced-hero-section enhanced-hero-no-parallax banner-anchors <?php echo $bannerVideoClass; ?> <?php echo $fontSize; ?>  para-<?php echo $paraID ?> <?php echo $countClass; ?> <?php echo $linksWidth; ?> <?php echo $paraClass; ?>" style="height: <?php echo $paraHeight; ?>">
 <div class="hero hero-featured enhanced-hero -light -over-image-true hero-featured hotel" >
 <?php if(isset($content['field_ba_bg_video'])){ ?>
<video id="my-video" class="video-js vjs-16-9" preload="auto" autoplay loop data-setup="{}" >
        <source src="<?php echo $videourl ; ?>" type='video/mp4' >  
</video>	
<?php } ?>
        <div class="hero-container hero-main_0_universal_header_2" style=" background-image: url(<?php echo $bgurl; ?>">
		 <div class="wrapper">
			<div class="featured-copy text-hero-m content -center">
			<h1 class="headline"><?php  echo $title; ?></h1>
				<div class="links">
					<ul>
					<?php print render($menu_links); ?>
					</ul>
				</div>
			</div>
	  </div>
      </div>
    </div>
    </div>








