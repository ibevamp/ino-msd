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
$bguri         = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl         = isset($bguri) ? file_create_url($bguri) : NULL;
$alignment_media    = $content['field_align_right'][0]['#markup']? "one-up-align-right":"";
$contentColor = isset($content['field_content_font_color'])? $content['field_content_font_color'][0]['#markup']: "";
$mainHeadingColor = isset($content['field_main_heading_font_color'])? $content['field_main_heading_font_color'][0]['#markup']: "";
$blockquoteColor = isset($content['field_blockquote_color'])? $content['field_blockquote_color'][0]['#markup']: "";

?>


<style type="text/css">
    <?php if(isset($mainHeadingColor) && !empty($mainHeadingColor)) { ?>
              .para-<?php echo $paraID ?>.one-up-medium-quote h3

               {
                color: <?php echo $mainHeadingColor; ?> !important;
              }

    <?php } ?>

    <?php if(isset($contentColor) && !empty($contentColor)) { ?>
              .para-<?php echo $paraID ?>.one-up-medium-quote .eyebrow,
              .para-<?php echo $paraID ?>.one-up-medium-quote .description


               {
                color: <?php echo $contentColor; ?> !important;
              }

              .para-<?php echo $paraID ?>.one-up-medium-quote  .cta,
              .para-<?php echo $paraID ?>.one-up-medium-quote  .cta::after
              {
                color: <?php echo $contentColor; ?>;
              }

    <?php } ?>

 <?php if(isset($blockquoteColor) && !empty($blockquoteColor)) { ?>
              .para-<?php echo $paraID ?>.one-up-medium-quote blockquote

               {
                color: <?php echo $blockquoteColor; ?> !important;
              }

    <?php } ?>

</style>

<div class="section-wrapper">
<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
        <section  class="up medium-quote -up-left one-up-medium-quote section-inner-wrapper para-<?php echo $paraID ?>">
          <div class="span-full-width content <?php echo $alignment_media ?>">
            <div class="wrapper">

              <div class="mq-profile-image-wrapper">
                <picture class="mq-profile-image">
                  <img src="<?php echo $bgurl; ?>" alt="">
                </picture>
              </div>

              <div class="text-content text-l">

                <blockquote class="-quotes -full-width med-quote -color-standard  ">
                <?php echo render($content['field_title']); ?>
                </blockquote>

                <div class="mq-profile text-l ">

                      <?php if(isset($content['field_full_name'])){ ?>
                        <a href="<?php echo $content['field_link'][0]['#element']['url'] ?>">
                          <h3 class="mq-profile-item-title headline profile-name-title ">
                            <?php echo render($content['field_full_name']); ?>
                          </h3>
                        </a>
                        <?php }?>
                        <?php if(isset($content['field_designation1'])){ ?>
                        <div class="mq-profile-item-firm eyebrow">
                          <?php echo render($content['field_designation1']); ?>
                        </div>
                        <?php }?>
                         <?php if(isset($content['field_specialization'])){ ?>
                        <div class="mq-profile-item-location eyebrow">
                          <?php echo render($content['field_specialization']); ?>
                        </div>
                        <hr class="hrule"/>
                        <?php }?>
                        <?php if(isset($content['field_description'])){  ?>
                        <p class="mq-profile-item-description description">
                          <?php echo render($content['field_description']); ?>
                        </p>
                        <?php } ?>
                  
                  </div>

                  <div class="cta-container">
                             <?php if(isset($content['field_link'])){?>
           <a class="cta -arrow -centered" href="<?php echo $content['field_link'][0]['#element']['url'] ?>"><?php echo $content['field_link'][0]['#element']['title'] ?></a>
           <?php } ?>
                  </div>

              </div>

            </div>

          </div>
        </section>
</div>


