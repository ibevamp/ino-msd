<div class="mck-mfp-gallery">
  <?php foreach ($files as $key => $file) { ?>
    <?php
      $text = '';
      $show_counter = '';
      $class = '';
      if ($key == 0) {
        $text = $link_text;
        $show_counter = $show_num_items;
        $class = 'mck-arrow -arrow';
      }
    ?>
    <?php if (strpos($file['filemime'], 'image/') !== FALSE) { ?>
      <a href="javascript:void(0);" data-showCounter="<?php echo $show_counter; ?>" data-href="<?php echo file_create_url($file['uri']); ?>" class="<?php echo $class; ?>" data-type="image" style="color: inherit;"><?php echo $text; ?></a>
    <?php } ?>

    <?php if (strpos($file['filemime'], 'video/') !== FALSE) { ?>
      <a href="javascript:void(0);" data-showCounter="<?php echo $show_counter; ?>" data-href="<?php echo file_create_url($file['uri']); ?>" data-type="iframe" class="<?php echo $class; ?>" style="color: inherit;"><?php echo $text; ?></a>
    <?php } ?>
  <?php } ?>
</div>
