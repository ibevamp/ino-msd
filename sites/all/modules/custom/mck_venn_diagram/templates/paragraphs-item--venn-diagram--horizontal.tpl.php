<?php if (!empty($paragraphs['anchor'])) { ?>
  <div><a name="<?php echo $paragraphs['anchor']; ?>" id="<?php echo $paragraphs['anchor']; ?>"></a></div>
<?php } ?>
<div class="mck-para-venn-diagram mck-para-venn-diagram-<?php echo $paragraphs['id']; ?> mck-para-venn-diagram--tpl-<?php echo $paragraphs['template']; ?> mck-para-venn-diagram--count-<?php echo $paragraphs['num_of_diagrams']; ?>">
  <div class="container">
    <div class="row row-head">
      <?php if (!empty($paragraphs['title'])) { ?>
        <div class="head-title"><?php echo $paragraphs['title']; ?></div>
      <?php } ?>

      <?php if (!empty($paragraphs['subtitle'])) { ?>
        <div class="head-subtitle"><?php echo $paragraphs['subtitle']; ?></div>
      <?php } ?>

      <?php if (!empty($paragraphs['desc'])) { ?>
        <div class="head-desc"><?php echo $paragraphs['desc']; ?></div>
      <?php } ?>
    </div>
    <div class="row row-content">
      <div class="col">
        <div class="outer-wrapper">
          <div class="diagrams-wrapper">
            <div class="diagrams" style="text-align: center;">
              <?php foreach ($paragraphs['items'] as $key =>  $item) { ?>
                <div class="diagram-wrapper">
                  <div class="diagram" data-venn-diagram-diagram-id="<?php echo $key; ?>">
                    <div class="inner">
                      <?php if (!empty($item['icon_url'])) { ?>
                        <div class="img"><img src="<?php echo $item['icon_url']; ?>" /></div>
                      <?php } ?>
                      <?php if (!empty($item['title'])) { ?>
                        <div class="title"><?php echo $item['title']; ?></div>
                      <?php } ?>
                      <?php if (!empty($item['subtitle'])) { ?>
                        <div class="subtitle"><?php echo $item['subtitle']; ?></div>
                      <?php } ?>
                    </div>
                  </div>
                </div>
              <?php } ?>
            </div>
          </div>

          <div class="content-wrapper-anchor"></div>

          <div class="content-wrapper">
            <?php foreach ($paragraphs['items'] as $key =>  $item) { ?>
              <div class="content" data-venn-diagram-links-id="<?php echo $key; ?>" style="display: none; background: <?php echo $item['info_background_color']; ?>;">
                <?php if (!empty($item['desc']) || !empty($item['info_image_url']) || count($item['points']) > 0) { ?>
                  <div class="arrow" style="background: <?php echo $item['info_background_color']; ?>;"></div>
                <?php } ?>

                <?php if (!empty($item['desc'])) { ?>
                  <div class="desc" style="color: <?php echo $item['info_text_color']; ?>">
                    <div><?php echo $item['desc']; ?></div>
                  </div>
                <?php } ?>

                <?php if ($item['info_image_pos'] == 'top') { ?>
                  <?php if (!empty($item['info_image_url'])) { ?>
                    <div class="img">
                      <img src="<?php echo $item['info_image_url']; ?>" />
                    </div>
                  <?php } ?>
                <?php } ?>

                <div class="points">
                  <div class="inner">
                    <?php foreach ($item['points'] as $point) { ?>
                      <div class="point-item" style="width: calc(<?php echo (100 / $item['info_points_per_row']); ?>% - 40px);">
                        <?php if (!empty($point['icon_url'])) { ?>
                          <div class="point-icon">
                            <img src="<?php echo $point['icon_url']; ?>" style="width: <?php echo $point['icon_width']; ?>; height: <?php echo $point['icon_height']; ?>;" />
                          </div>
                        <?php } ?>
                        <?php if (!empty($point['title'])) { ?>
                          <div class="point-title" style="text-align: <?php echo $point['text_align']; ?>; font-family: 'McKinsey Theinhardt' !important; font-weight: bold; font-size: <?php echo $point['text_size']; ?>; color: <?php echo $point['text_color']; ?>">
                            <?php echo $point['title']; ?>
                          </div>
                        <?php } ?>
                        <?php if (!empty($point['desc'])) { ?>
                          <div class="point-desc" style="text-align: <?php echo $point['text_align']; ?>; font-family: 'McKinsey Theinhardt' !important; font-weight: 300; font-size: <?php echo $point['text_size']; ?>; color: <?php echo $point['text_color']; ?>">
                            <?php echo $point['desc']; ?>
                          </div>
                        <?php } ?>

                        <?php if ($point['show_popup'] == 'yes' && !empty($point['popup_image_url'])) { ?>
                          <div class="links-wrapper">
                            <div>
                              <a href="javascript: void(0);"
                                 class="open-popup-link mck-arrow -arrow"
                                 style="text-align: <?php echo $point['text_align']; ?>; font-family: 'McKinsey Theinhardt' !important; font-weight: 300; font-size: <?php echo $point['text_size']; ?>; color: <?php echo $point['text_color']; ?>">
                                <?php echo $point['popup_link_text']; ?>
                              </a>
                            </div>
                            <div class="venn-diagram-point-links-popup white-popup mfp-hide">
                              <div style="text-align: center;">
                                <img src="<?php echo $point['popup_image_url']; ?>" />
                              </div>
                            </div>
                          </div>
                        <?php } ?>

                        <?php if ($point['show_links'] == 'yes' && count($point['links']) > 0) { ?>
                          <div style="margin-top: 10px; text-align: <?php echo $point['text_align']; ?>; font-family: 'McKinsey Theinhardt' !important; font-weight: 300; font-size: <?php echo $point['text_size']; ?>; color: <?php echo $point['text_color']; ?>">
                            <a href="<?php echo mck_util_get_by_paths($point, 'links|0|url', '#'); ?>"
                               target="<?php echo mck_util_get_by_paths($point, 'links|0|attributes|target', '_self'); ?>"
                               class="mck-arrow -arrow"
                               style="text-align: <?php echo $point['text_align']; ?>; font-family: 'McKinsey Theinhardt' !important; font-weight: 300; font-size: <?php echo $point['text_size']; ?>; color: <?php echo $point['text_color']; ?>"
                            >
                              <?php echo mck_util_get_by_paths($point, 'links|0|title', 'Know more'); ?>
                            </a>
                          </div>
                        <?php } ?>

                      </div>
                    <?php } ?>
                  </div>
                </div>

                <?php if ($item['info_image_pos'] == 'bottom') { ?>
                  <?php if (!empty($item['info_image_url'])) { ?>
                    <div class="img">
                      <img src="<?php echo $item['info_image_url']; ?>" />
                    </div>
                  <?php } ?>
                <?php } ?>

              </div>
            <?php } ?>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>

<style>
  .mck-para-venn-diagram--tpl-horizontal .diagrams .diagram {
    background: <?php echo $paragraphs['inactive_circle_background_color']; ?>;
    color: <?php echo $paragraphs['inactive_circle_text_color']; ?>;
  }
  .mck-para-venn-diagram--tpl-horizontal .diagrams .diagram.active {
    background: <?php echo $paragraphs['active_circle_background_color']; ?>;
    color: <?php echo $paragraphs['active_circle_text_color']; ?>;
  }
</style>