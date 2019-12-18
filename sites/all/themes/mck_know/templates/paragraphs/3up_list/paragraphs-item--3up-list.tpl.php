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

$contentColor = isset($content['field_list_font_color'])? $content['field_list_font_color'][0]['#markup']: "";
$headingColor = isset($content['field_list_heading_color'])? $content['field_list_heading_color'][0]['#markup']: "";

$fontSize = isset($content['field_list_font_size'])? render($content['field_list_font_size'][0]['#markup']): "";
?>

<style type="text/css">
    <?php if(isset($content['field_list_heading_color'])) { ?>
    .para-<?php echo $paraID ?>.three-up-list .module-header .headline,
    .para-<?php echo $paraID ?>.three-up-list .module-header .sub-heading
    {
        color:<?php echo $headingColor ?>!important ;
    }
    <?php } ?>
	
	<?php if(isset($content['field_list_font_color'])) { ?>
    .para-<?php echo $paraID ?>.three-up-list .profile-item,
    .para-<?php echo $paraID ?>.three-up-list .profile-item .headline,
    .para-<?php echo $paraID ?>.three-up-list .profile-item .designation,
    .para-<?php echo $paraID ?>.three-up-list .profile-item .description,
    .para-<?php echo $paraID ?>.three-up-list .profile-item .description p {
        color:<?php echo $contentColor ?>!important ;
    }
    <?php } ?>
</style>
<?php if(isset($content['field_anchor_name'])){ ?>
<a name="<?php echo ($content['field_anchor_name']['#items'][0]['value']) ?>" id="<?php echo ($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
<?php } ?>
<section class="up three-up three-up-list section-wrapper three-up-split -to-two up-left-display-mode-standard para-<?php echo $paraID ?> <?php echo $fontSize; ?> <?php echo $paraClass; ?>">
    <div class="section-inner-wrapper">
	<header class="module-header text-l text-l">
       <?php if(isset($content['field_title'])){ ?>
			<h3 class="headline">  <?php echo render($content['field_title']) ?></h3>
		<?php } ?>
		<?php if(isset($content['field_subtitle'])){ ?>
			<h4 class="sub-heading">  <?php echo render($content['field_subtitle']) ?></h4>
		<?php } ?>
        <div class="description module-description"> <?php echo render($content['field_short_description']) ?></div>
    </header>
    <div class="text-s">  
         <?php echo render($content['field_paragraph']) ?>
    </div>
	</div>
</section>
<div style="clear: both;"></div>
