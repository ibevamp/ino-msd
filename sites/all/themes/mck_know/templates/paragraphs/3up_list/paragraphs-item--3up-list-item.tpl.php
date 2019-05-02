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

  $description = $content['field_short_description'];
?>
  
<div class="item profile-item">
    <div class="image profile-image">
        <?php if(isset($description) && !empty($description)) { ?>
            <a href="#" class="inline-popup">
                <div class="circle-crop">
                    <div class="image"><?php echo render($content['field_image']) ?></div>
                </div>
            </a>
        <?php } else { ?>
            <div class="circle-crop">
                <div class="image"><?php echo render($content['field_image']) ?></div>
            </div>
        <?php } ?>
    </div>
    <div class="text-wrapper">
        <?php if(isset($description) && !empty($description)) { ?>
            <a href="#" class="inline-popup item-title-link">
                <h4 id="main_0_universal_1_ctl10_headline" class="headline  -arrow">
                    <?php echo render($content['field_title']) ?>
                </h4>
            </a>
        <?php } else { ?>
            <h4 id="main_0_universal_1_ctl10_headline" class="headline  -arrow">
                <?php echo render($content['field_title']) ?>
            </h4>
        <?php } ?>
        <div class="designation description"><?php echo render($content['field_designation']) ?></div>
        <?php if(isset($description) && !empty($description)) { ?>
            <div class="description">
                <?php echo render($description)?>
            </div>
        <?php } ?>
    </div>
    <div class="people-popup white-popup mfp-hide">
        <div class="profile-wrapper">
            <section class="text-xl page-header profile-header" itemtype="https://schema.org/Person">
                <div class="image">
                    <div class="circle-crop">
                        <div class="image">
                            <?php echo render($content['field_image']) ?>
                        </div>
                    </div>
                </div>
                <div class="text-wrapper">
                    <h2 class="headline" itemprop="name"><?php echo render($content['field_title']) ?></h2>
                    <small class="job-title" itemprop="jobTitle">
                        <?php echo render($content['field_designation']) ?>
                    </small>
                </div>
            </section>
        </div>
        <div class="profile-description">
            <?php echo render($description) ?>
        </div>
    </div>
</div>

