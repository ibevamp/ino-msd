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
$bguri         = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl         = isset($bguri) ? file_create_url($bguri) : NULL;
$whiteCopy     = (isset($content['field_white_copy']) && !empty($content['field_white_copy'])) ? $content['field_white_copy']['#items'][0]['value'] : NULL;

$textQuoteColor = isset($content['field_blockquote_color'])? $content['field_blockquote_color'][0]['#markup']: "";
$bylineColor = isset($content['field_content_font_color'])? $content['field_content_font_color'][0]['#markup']: "";



?>
<style type="text/css">
    <?php if(isset($content['field_blockquote_color'])) { ?>
      .para-<?php echo $paraID ?>.two-up-medium blockquote
       {
        color: <?php echo $textQuoteColor; ?> !important;
        background: unset;
        text-fill-color: unset;
        -webkit-text-fill-color: unset;
      }
    <?php } ?>

      <?php if(isset($content['field_content_font_color'])) { ?>
      .para-<?php echo $paraID ?>.two-up-medium .profile-name-title
       {
        color: <?php echo $bylineColor; ?> !important;
      }
    <?php } ?>


</style>
<section class="up two-up two-up-medium stack para-<?php echo $paraID ?>"">
      <div class="block-list text-l">
       <?php if(($content['field_left_align_image'][0]['#markup']) == "1"){ ?>
        <div style="background-image: url(<?php echo $bgurl ;?>)" class="item no-padding bio4">
          <div class="item-content-wrap"></div>
        </div>
         <?php } ?>
        <div class="item blue promo-quote theme-bgc">
          <div class="text-wrapper text-l">
            <blockquote class="headline">
              <?php echo render($content['field_text_quote']); ?>
            </blockquote>
            <div>
              <p class="profile-name-title" <?php echo !empty($whiteCopy) ? 'style="color:#fff"' : ''; ?>>
                <?php echo render($content['field_text_quote_byline']); ?>
              </p>

            </div>
          </div>

        </div>
         <?php if(($content['field_left_align_image'][0]['#markup']) != "1"){ ?>
        <div style="background-image: url(<?php echo $bgurl ;?>)" class="item no-padding bio4">
          <div class="item-content-wrap"></div>
        </div>
         <?php } ?>
      </div>
</section>
