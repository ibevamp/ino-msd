<div class="locations-map--popup">
  <table>
    <tr>
      <?php if (!empty($popup['image'])) { ?>
      <td>
        <div class="image"><img src="<?php echo $popup['image']; ?>" /></div>
      </td>
      <?php } ?>

      <td>
        <div class="<?php echo !empty($popup['title']) || !empty($popup['subtitle']) ? 'titles' : ''; ?>">
          <?php if (!empty($popup['title'])) { ?>
            <div class="title"><?php echo $popup['title']; ?></div>
          <?php } ?>

          <?php if (!empty($popup['subtitle'])) { ?>
            <div class="subtitle"><?php echo $popup['subtitle']; ?></div>
          <?php } ?>
        </div>

        <?php if (!empty($popup['desc'])) { ?>
          <div class="desc"><?php echo check_markup($popup['desc'], 'full_html'); ?></div>
        <?php } ?>

        <?php if (!empty($popup['download_link'])) { ?>
          <div class="download">
            <a href="<?php echo $popup['download_link']['url']; ?>" class="btn btn-primary -arrow" target="_blank"><?php echo check_plain($popup['download_link']['title']); ?></a>
          </div>
        <?php } ?>
      </td>
    </tr>
  </table>
</div>
