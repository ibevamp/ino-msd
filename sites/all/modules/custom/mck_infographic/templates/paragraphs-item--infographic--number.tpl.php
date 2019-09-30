<?php if (!empty($paragraphs['anchor'])) { ?>
  <a name="<?php echo $paragraphs['anchor']; ?>" id="<?php echo $paragraphs['anchor']; ?>"></a>
<?php } ?>

<div class="mck-para-infographic mck-para-infographic-skin-<?php echo $paragraphs['skin']; ?> mck-para-infographic-type-<?php echo $paragraphs['chart_type']; ?> mck-para-infographic-<?php echo $paragraphs['id']; ?>">
  <?php if (!empty($paragraphs['title']) || !empty($paragraphs['desc'])) { ?>
    <div class="top">
      <div class="container">
        <div class="row row-head">
          <div class="col">
            <?php if (!empty($paragraphs['title'])) { ?>
              <div class="ig-title"><?php echo $paragraphs['title']; ?></div>
            <?php } ?>
            <?php if (!empty($paragraphs['desc'])) { ?>
              <div class="ig-desc"><?php echo $paragraphs['desc']; ?></div>
            <?php } ?>
          </div>
        </div>
      </div>
    </div>
  <?php } ?>


  <?php if (count($paragraphs['items']) > 0) { ?>
    <div class="bottom">
      <div class="container">
        <div class="row row-content">
          <?php foreach ($paragraphs['items'] as $item) { ?>
            <div class="<?php echo $paragraphs['col_classes']; ?>">
              <div class="ig-item">
                <div class="value">
                  <span class="num"><?php echo check_plain($item['value']); ?></span>
                  <span class="unit">%</span>
                </div>
                <div class="label">
                  <?php echo check_plain($item['label']); ?>
                </div>
              </div>
            </div>
          <?php } ?>
        </div>
      </div>
    </div>
  <?php } ?>
</div>
