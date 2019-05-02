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

$videouri      = isset($content['field_video_file']['#items'][0]['uri']) ? $content['field_video_file']['#items'][0]['uri'] : '';
$videourl      = isset($videouri) ? file_create_url($videouri) : NULL;

$bguri         = isset($content['field_poster']['#items'][0]['uri']) ? $content['field_poster']['#items'][0]['uri'] : NULL;
$bgurl         = isset($bguri) ? file_create_url($bguri) : NULL;

$fullWidthbgVideo = $content['field_grey_row'][0]['#markup']? 'full-width-bg':'';

?>
<div id="vertical-tabs-hero" class="<?php echo $fullWidthbgVideo; ?>">
<div class="bottom-bg"></div>
<div class="overlay-hero"></div>
<div class="outer">
        <div class="hero multimedia-hero" data-module="MultiMediaHero">

            <div class="visually-hidden preload-hero">
              <picture>
                <img src="<?php echo $bgurl; ?>" alt="">
              </picture>
            </div>

          <div class="hero-container hero-main_0_hero_0 hide-bg">
            <video id="video-hero" class="video-bg" autoplay="" muted="" loop="" preload="none">
              <source src="<?php echo $videourl ?>" type="video/mp4">
            </video>
          </div>
  <div class="text-wrapper home-banner">
    <div class="hero-up">
      <div class="vertical-tabs">
        <section class="up full-text-section careers">
          <div class="block-list">
          <div class="two-column text-l">
          <div class="left-column text-longform">
            
              <div class="left-column-text">
                <?php if (isset($content['field_heading'][0])): ?>
                  <header class="text-l space">
                    <h3 class="headline">
                      <span class="sa-logo"></span>
                      <span class="header-text"><?php echo render($content['field_heading']); ?></span>
                    </h3>
                  </header>
                <?php endif ?>
                

                
                <div class="description">
                <?php echo render($content['field_description']); ?>
                </div>

                <div class="short-description">
                <?php echo render($content['field_short_description']); ?>
                </div>
             <?php if(isset($content['field_link'])){ ?>
               <a href="<?php echo $content['field_link'][0]['#element']['url'] ?>" class="btn">
                       <?php echo $content['field_link'][0]['#element']['title'] ?>
                   </a>
              <?php } ?>
              </div>

            </div>
            <?php if(isset($content['field_paragraph'])){ ?>
            <div class="right-column text-longform tabs">
              <!--<a class="btn -arrow get-started" href="our-core-beliefs">Get Started</a>-->
              
            <?php echo render($content['field_paragraph']); ?>
            </div>
            <?php } ?>
          </div>
          </div>
        </section>
      </div> 
    </div>
  </div>
  
   </div>
              <!--tile container-->

 

</div>

</div>
