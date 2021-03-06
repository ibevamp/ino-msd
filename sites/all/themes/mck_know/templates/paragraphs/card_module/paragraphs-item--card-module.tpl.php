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
$paraID = $variables['elements']['#entity']->item_id;
$paraClass = isset($content['field_para_classes']) ? $content['field_para_classes']['#items'][0]['value'] : '';
$title = isset($content['field_title']) ? render($content['field_title']) : '';
$legend = isset($content['field_card_module_legend']) ? render($content['field_card_module_legend']) : '';
$legendColourBoxColor = isset($content['field_card_module_legend_cbc'])? $content['field_card_module_legend_cbc'][0]['#markup']: "#000000";
$description = isset($content['field_description']) ? render($content['field_description']) : '';
$subtitle = isset($content['field_subtitle']) ? render($content['field_subtitle']) : '';
$column_items = isset($content['field_paragraph']) ? $content['field_paragraph'] : array();
$textColorClass = isset($content['field_grey_row']) ? "darker-heading" : '';
//$cardLayoutClass         = isset($content['field_card_layout']) ? $content['field_card_layout']['#items'][0]['value'] : '';
$cardLayoutClass = '';

if (isset($content['field_card_layout'])) {
  foreach ($content['field_card_layout']['#items'] as $item) {
    $cardLayoutClass .= ' ' . $item['value'] . ' ';
  }
}

$gridClass = isset($content['field_column_layout']) ? $content['field_column_layout']['#items'][0]['value'] : '';
$titleFont = isset($content['field_title_font_size']) ? $content['field_title_font_size']['#items'][0]['value'] : '';
$subtitleFont = isset($content['field_subtitle_font_size']) ? $content['field_subtitle_font_size']['#items'][0]['value'] : '';

$textAlign = $content['field_left_align_text'][0]['#markup']? "-text-left" : "-text-center";
$linksAlign = $content['field_align_link_bottom'][0]['#markup']? "align-links-bottom" : "";
$count = isset($content['field_paragraph']['#items']) ? count($content['field_paragraph']['#items']) : 0;
$cardItemClass = "";
$fontSize = $content['field_larger_desc_link_text'][0]['#markup']? "larger-font" : "";
$bgColor = isset($content['field_background_color'])? $content['field_background_color'][0]['#markup']: "";
$cardTextColor = isset($content['field_card_text_color'])? $content['field_card_text_color'][0]['#markup']: "";
$cardModuleColor = isset($content['field_card_module_font_color'])? $content['field_card_module_font_color'][0]['#markup']: "";
$linkTextColor = isset($content['field_link_text_color'])? $content['field_link_text_color'][0]['#markup']: "";
$cardHeadingColor = isset($content['field_card_heading_font_color'])? $content['field_card_heading_font_color'][0]['#markup']: "";

$bgClass = isset($content['field_background_color']) || isset($content['field_image']) ? "bg-image" : '';

if(isset($content['field_column_layout'])){
	if($gridClass == "two-up"){
		$column_item_class = "two-up two-up-small -imgs-large";
	}else{
		$column_item_class = $gridClass;
	}
}else{
	if($count == 2){
		$column_item_class = "two-up two-up-small -imgs-large";
	}else if($count == 3){
		$column_item_class = "three-up";
	}else if($count == 4){
		$column_item_class = "four-up";
	}else if($count == 5){
		$column_item_class = "five-up";
	}else if($count == 6){
		$column_item_class = "six-up";
	}else{
		$column_item_class = "one-up";
	}
}

$bguri = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl = isset($bguri) ? file_create_url($bguri) : NULL;
$anchor_name = isset($content['field_anchor_name']['#items'][0]['value']) ? $content['field_anchor_name']['#items'][0]['value'] : '';
?>

<style type="text/css">
	<?php if(isset($content['field_background_color'])) { ?>
		.para-<?php echo $paraID ?>.card-module {
			background-color:<?php echo $bgColor ?>!important ;
		}
		.accordion-module-wrapper .view-more .para-<?php echo $paraID ?>#acc-card-module-0 span {
			border-bottom-color: <?php echo $bgColor ?>!important;
		}
	<?php } ?>

	<?php if(isset($content['field_card_module_font_color'])) { ?>
        .para-<?php echo $paraID ?>.card-module header .headline,
		.para-<?php echo $paraID ?>.card-module header .headline p,
		.para-<?php echo $paraID ?>.card-module header h4,
		.para-<?php echo $paraID ?>.card-module header h4 p,
		.para-<?php echo $paraID ?>.card-module header .description{
            color:<?php echo $cardModuleColor ?>!important ;
        }
    <?php } ?>

  <?php if(isset($content['field_card_text_color'])) { ?>
  .para-<?php echo $paraID ?>.card-module .headline,
  .para-<?php echo $paraID ?>.card-module .description,
  .para-<?php echo $paraID ?>.card-module .description p,
  .para-<?php echo $paraID ?>.card-module h4,
  .para-<?php echo $paraID ?>.card-module .links a {
    color: <?php echo $cardTextColor ?> !important ;
  }

  <?php } ?>

	<?php if(isset($content['field_card_heading_font_color'])) { ?>
		.para-<?php echo $paraID ?>.card-module .item .card-content .headline {
			color:<?php echo $cardHeadingColor ?>!important ;
		}
    <?php } ?>

	<?php if($content['field_grey_row'][0]['#markup']) { ?>
		.para-<?php echo $paraID ?>.card-module .headline {
			color:#000!important ;
		}
	<?php } ?>

	<?php if(isset($content['field_field_link_text_color'][0]['#markup'])) { ?>
		.para-<?php echo $paraID ?>.card-module .item .links a {
			color:<?php echo $linkTextColor; ?>!important ;
		}
	<?php } ?>
</style>

<div style="clear: both;">
  <a name="<?php echo $anchor_name; ?>" id="<?php echo $anchor_name; ?>" class="anchored-link"></a>
</div>

<?php if(isset($content['field_image'])){ ?>
	<div style="background-image: url('<?php echo $bgurl ?>');" class="para-<?php echo $paraID ?> <?php echo $linksAlign; ?> card-module bg-image <?php echo $cardLayoutClass ?> <?php echo $textColorClass ?> <?php echo $cardItemClass ?> <?php echo $column_item_class; ?> <?php /*echo $arrowClass*/ ?> <?php echo $bgClass; ?> <?php /*echo $cardBorderClass;*/ ?> <?php /*echo $defaultBgColor;*/ ?> section-wrapper <?php echo $paraClass; ?>">
<?php }else{ ?>
	<div class="para-<?php echo $paraID ?> card-module <?php echo $cardItemClass ?> <?php echo $linksAlign; ?> <?php echo $cardLayoutClass ?> <?php echo $textColorClass ?> <?php echo $column_item_class; ?> <?php /*echo $arrowClass*/ ?> <?php /*echo $cardBorderClass;*/ ?> <?php /*echo $defaultBgColor;*/ ?> <?php echo $bgClass; ?> section-wrapper <?php echo $paraClass; ?>">
<?php } ?>
<span class="arrow"></span>
	<div class="section-inner-wrapper" >
		<?php if(isset($content['field_title']) || isset($content['field_subtitle']) || isset($content['field_description']) ){ ?>
			<header class="module-header text-l <?php echo $fontSize; ?> <?php echo $textAlign; ?>">
		        <?php if (!empty($legend)) { ?>
		          <div class="legend"><span style="background: <?php echo $legendColourBoxColor; ?>"></span><?php echo $legend; ?></div>
		        <?php } ?>
				<?php if (isset($content['field_title'])) { ?>
					<h3 class="headline <?php echo $titleFont; ?> ">
						<?php echo $title ?>
					</h3>
				<?php } ?>
				<?php if (isset($content['field_subtitle'])) { ?>
					<h4  class="<?php echo $subtitleFont; ?> subtitle">
						<?php echo $subtitle ?>
					</h4>
				<?php } ?>
				<?php if (isset($content['field_description'])) { ?>
					<div class="description">
						<?php echo $description ?>
					</div>
				<?php } ?>
			</header>
		<?php } ?>
		<div class="block-list text-m <?php echo $fontSize; ?>">
			<?php foreach($column_items as $key => $item) {
				if(is_numeric($key)) {
					$paraItem = $item['entity']['paragraphs_item'];
					echo render($paraItem);
				}
			} ?>
		</div>
            <div>
				<?php if(isset($content['field_link'])){ ?>
					<div>
						<a class="blue-btn view-products" href="<?php  echo render($content['field_link']['#items'][0]['url']); ?>"><?php  echo render($content['field_link']['#items'][0]['title']); ?><span></span></a>
					</div>
				<?php } ?>
			</div>
		</div>

    <div style="clear: both;"></div>

</div>
