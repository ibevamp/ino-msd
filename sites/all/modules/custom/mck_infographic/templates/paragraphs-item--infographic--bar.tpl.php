<?php
$numbers = [];
foreach ($paragraphs['items'] as $item) {
  $numbers[] = $item['value'];
}
$max_number = max($numbers);
?>

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
          <div class="col">
            <div class="ig-item">
              <table>
                <tr>
                  <td class="value">
                    <span class="num"><?php echo check_plain($item['value']); ?></span>
                    <span class="unit">%</span>
                  </td>
                </tr>
                <tr>
                  <td style="height: <?php echo check_plain($item['value']) / $max_number * 100; ?>%;">
                    <div class="bar"></div>
                  </td>
                </tr>
              </table>
              <div class="label">
                <?php echo check_plain($item['label']); ?>
              </div>
            </div>
          </div>
        <?php } ?>
      </div>
    <?php } ?>
  </div>
</div>
