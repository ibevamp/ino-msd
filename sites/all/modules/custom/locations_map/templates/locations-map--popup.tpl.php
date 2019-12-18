<div class="locations-map--popup">
  <table class="head">
    <tr>
      <?php if (!empty($popup['image'])) { ?>
        <td class="col-image">
          <div class="image"><img src="<?php echo $popup['image']; ?>" /></div>
        </td>
      <?php } ?>

      <td class="col-title">
        <div class="<?php echo !empty($popup['title']) || !empty($popup['subtitle']) ? 'titles' : ''; ?>">
          <?php if (!empty($popup['title'])) { ?>
            <div class="title"><?php echo $popup['title']; ?></div>
          <?php } ?>

          <?php if (!empty($popup['subtitle'])) { ?>
            <div class="subtitle"><?php echo $popup['subtitle']; ?></div>
          <?php } ?>
        </div>
      </td>
    </tr>
  </table>

  <hr>

  <table class="body">
    <tr>
      <td class="col-desc">
        <?php if (!empty($popup['desc'])) { ?>
          <div class="desc"><?php echo check_markup($popup['desc'], 'full_html'); ?></div>
        <?php } ?>

        <?php if (!empty($popup['download_link'])) { ?>
          <div class="download">
            <a href="<?php echo $popup['download_link']['url']; ?>" class="btn btn-primary -arrow" target="_blank"><?php echo check_plain($popup['download_link']['title']); ?></a>
          </div>
        <?php } ?>
      </td>
      <?php if (!empty($popup['desc_extra'])) { ?>
        <td class="col-desc-extra">
          <?php echo $popup['desc_extra']; ?>
        </td>
      <?php } ?>
    </tr>
  </table>
</div>
