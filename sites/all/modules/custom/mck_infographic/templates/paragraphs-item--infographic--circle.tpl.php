<?php if (!empty($paragraphs['anchor'])) { ?>
  <a name="<?php echo $paragraphs['anchor']; ?>" id="<?php echo $paragraphs['anchor']; ?>"></a>
<?php } ?>

<div class="mck-para-infographic mck-para-infographic-skin-<?php echo $paragraphs['skin']; ?> mck-para-infographic-type-<?php echo $paragraphs['chart_type']; ?> mck-para-infographic-<?php echo $paragraphs['id']; ?>">
  <div class="container">
    <?php if (!empty($paragraphs['title']) || !empty($paragraphs['desc'])) { ?>
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
    <?php } ?>

    <?php if (count($paragraphs['items']) > 0) { ?>
      <div class="row row-content">
        <?php foreach ($paragraphs['items'] as $item) { ?>
          <div class="<?php echo $paragraphs['col_classes']; ?>">
            <div class="ig-item">
              <div class="chart-progress">
                <div class="chart">
                  <svg width="100%" height="100%" viewBox="0 0 100 100" preserveAspectRatio="none">
                    <circle cx="50" cy="50%" r="48" class="progress progress-full" fill="transparent" stroke="#ccc" stroke-width="1" />
                    <circle cx="50" cy="50%" r="48" class="progress progress-actual" fill="transparent" stroke="none" stroke-width="0" data-stroke-width="1" data-progress="<?php echo check_plain($item['value']); ?>" />
                  </svg>
                  <div class="value">
                    <span class="num"><?php echo check_plain($item['value']); ?></span><span class="unit">%</span>
                  </div>
                </div>
                <div class="label">
                  <?php echo check_plain($item['label']); ?>
                </div>
              </div>
            </div>
          </div>
        <?php } ?>
      </div>
    <?php } ?>
  </div>
</div>
