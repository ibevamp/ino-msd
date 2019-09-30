<?php if (!empty($paragraphs['anchor'])) { ?>
  <div><a name="<?php echo $paragraphs['anchor']; ?>" id="<?php echo $paragraphs['anchor']; ?>"></a></div>
<?php } ?>

<div class="mck-para-phase mck-para-phase-<?php echo $paragraphs['id']; ?>">
  <div class="phase-wrapper">
    <div class="container">
      <div class="row">
        <div class="col">
          <div class="phases">
            <?php foreach ($paragraphs['items'] as $key => $item) { ?>
              <div class="phase" data-phase-phase-id="<?php echo $key; ?>">
                <div class="title"><?php echo $item['title']; ?></div>
                <div class="subtitle"><?php echo $item['subtitle']; ?></div>
                <?php if (count($item['learn_more']) > 0) { ?>
                  <div class="learn-more">
                    <a href="<?php echo $item['learn_more']['url']; ?>" target="<?php echo drupal_get_by_paths($item['learn_more'], 'attributes|target', '_self'); ?>" class="mck-arrow -arrow">Learn more</a>
                  </div>
                <?php } ?>
              </div>
            <?php } ?>
            <div class="arrow" data-phase-arrow-id=""></div>
          </div>
        </div>
      </div>
    </div>
  </div>

  <div class="container">
    <div class="row">
      <div class="col">
        <div class="contents">
          <?php foreach ($paragraphs['items'] as $key => $item) { ?>
            <div class="content" data-phase-content-id="<?php echo $key; ?>" style="display: none;">
              <i class="fa fa-close close-btn"></i>
              <div class="img">
                <img src="<?php echo $item['image_url']; ?>" />
              </div>
            </div>
          <?php } ?>
        </div>
      </div>
    </div>
  </div>
</div>