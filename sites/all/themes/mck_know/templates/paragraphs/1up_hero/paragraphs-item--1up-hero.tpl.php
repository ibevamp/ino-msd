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
$bguri              = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl              = isset($bguri) ? file_create_url($bguri) : NULL;



?>

<?php if ($content['field_hero_type'][0]['#markup'] == 'Large'):

 ?>

<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" ></a>
<div class="c-example-block  u-padding">
  <section class="oneup-hero">

    <!-- Start Enhanced Hero Module -->


    <div class="hero enhanced-hero-intro tight">

      <style type="text/css">
        @media screen and (min-width: 767px ) {
          .enhanced-hero-intro .text-render {
            width: 100%;
          }
        }
      </style>

      <div class="hero-container nominees-banner" style="background-image: url('<?php echo $bgurl;?>')">
        <div class="screen"></div>
        <div class="darken" style="background: rgba(0,0,0,0.4);"></div>
        <div class="text-wrapper alignment-center">
          <div class="hero-up">
            <div class="text-render -position-over-image -light -text-center">
<span class="eyebrow"><?php echo render($content['field_eyebrow']) ?></span>
              <div class="text-xl">
                <h1 class="headline enhanced-headline -text-center -gradient-">
                  <?php echo render($content['field_title']) ?>
                </h1>
                <div class="description"><?php echo render($content['field_date']) ?></div>
              </div>
            </div>
          </div>
        </div>
      </div>

      <div class="intro-container">
        <div class="article-wrapper">
          <article class="up body">
            <header>
              <div class="text-render -dark -position-over-image">

                <div class="text-xxl">

                  <h1 class="headline -text-center -gradient-">
                    <?php echo render($content['field_title']) ?>
                  </h1>

                </div>
              </div>

              <div class="text-l intro-text">

                <h3 class="headline -gradient-" >
                  <?php echo render($content['field_hero_headline']) ?>
                </h3>

                <div class="description ">

                  <?php echo render($content['field_text_paragraph']) ?>
                  <div class="links">
                  <?php foreach($link_items as $key => $item) {
                    if(is_numeric($key)) {
                      $paraItem = $item['#element'];
                       ?>
                        <p> <a href="<?php echo $paraItem['url']; ?>" class="-arrow"><?php echo $paraItem['title']; ?></a></p>
                      <?php } 
                    } ?>
                    </div>
                </div>

              </div>

            </header>

          </article>
        </div>
      </div>
    </div>
  </section>

<?php elseif ($content['field_text_overlays_image'][0]['#markup'] == 'no'):

$bguri              = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl              = isset($bguri) ? file_create_url($bguri) : NULL;
 ?>

  <div class="wrapper">
    <section class="up">
      <article class="item text-xl">
        <div class="image">
          <img src="<?php echo $bgurl;?>">
        </div>
        <div class="text-wrapper tight">
          <h3 class="headline"><center><?php echo render($content['field_title']) ?></center></h3>
          <div class="-light description"><?php echo render($content['field_text_paragraph']) ?></div>
          <div class="links">
                  <?php foreach($link_items as $key => $item) {
                    if(is_numeric($key)) {
                      $paraItem = $item['#element'];
                       ?>
                           <p><a href="<?php echo $paraItem['url']; ?>" class="-arrow"><?php echo $paraItem['title']; ?></a></p>
                      <?php } 
                    } ?>
                    </div>

        </div>
      </article>
    </section>
  </div>

<?php else:
$bguri              = isset($content['field_image']['#items'][0]['uri']) ? $content['field_image']['#items'][0]['uri'] : NULL;
$bgurl              = isset($bguri) ? file_create_url($bguri) : NULL;

 ?>
  <div class="wrapper">
    <section class="up medium-hero careers">
      <div class="image hero-container homepage-medium-hero" style="background-image: url('<?php echo $bgurl;?>'); ?>)"></div>
      <article class="up body">
        <header class="text-xl">
          <h3 class="headline -text-center -gradient-">
                    <?php echo render($content['field_title']) ?>
          </h3>
          <div class="description">
            <?php echo render($content['field_text_paragraph']) ?>
            <div class="links">
                  <?php foreach($link_items as $key => $item) {
                    if(is_numeric($key)) {
                      $paraItem = $item['#element'];
                       ?>
                           <p><a href="<?php echo $paraItem['url']; ?>" class="-arrow"><?php echo $paraItem['title']; ?></a></p>
                      <?php } 
                    } ?>
                    </div>

          </div>

        </header>
      </article>
    </section>
  </div>


<?php endif; ?>

</div>
