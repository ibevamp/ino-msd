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
    </div>
    <div class="row row-content">
      <div class="col">
        <div class="outer-wrapper">
          <div class="diagrams-wrapper">
            <div class="diagrams">
              <?php foreach ($paragraphs['items'] as $key =>  $item) { ?>
                <div class="diagram <?php echo $key == 0 ? 'active' : ''; ?>" data-venn-diagram-diagram-id="<?php echo $key; ?>">
                  <div class="inner">
                    <?php if (!empty($item['icon_url'])) { ?>
                      <div class="img"><img src="<?php echo $item['icon_url']; ?>" /></div>
                    <?php } ?>
                    <div class="title"><?php echo $item['title']; ?></div>
                  </div>
                </div>
              <?php } ?>
            </div>
          </div>
          <div class="content-wrapper">
            <div class="content">
              <?php foreach ($paragraphs['items'] as $key =>  $item) { ?>
                <div data-venn-diagram-links-id="<?php echo $key; ?>" style="display: <?php echo $key == 0 ? 'block' : 'none'; ?>">
                  <?php if (!empty($item['title'])) { ?>
                    <div class="title">
                      <div><?php echo $item['title']; ?></div>
                      <?php if (!empty($item['subtitle'])) { ?>
                        <div class="subtitle"><?php echo $item['subtitle']; ?></div>
                      <?php } ?>
                    </div>
                  <?php } ?>

                  <?php if (count($item['links']) > 0) { ?>
                    <ul class="links">
                      <?php foreach ($item['links'] as $link) { ?>
                        <li>
                          <div class="link-wrapper">
                            <div class="link-title">
                              <?php echo $link['title']; ?>
                            </div>
                            <div class="link-url">
                              <?php if (!empty($link['url'])) { ?>
                                <a href="<?php echo $link['url']; ?>" target="<?php echo mck_util_get_by_paths($link, 'attributes|target', '_self'); ?>" class="mck-arrow -arrow">Know more</a>
                              <?php } ?>
                            </div>
                          </div>
                        </li>
                      <?php } ?>
                    </ul>
                  <?php } ?>
                </div>
              <?php } ?>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>