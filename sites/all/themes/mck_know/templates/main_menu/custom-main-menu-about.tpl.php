<div class="sub-nav-links">
  <div class="column column-main-links">
      <ul class="nav-list" aria-labelledby="sub-nav-title-about-us">
        <?php foreach ($items as $item): ?>
          <?php if ($item['link']['href'] != '<nolink>'): ?>
            <li class="sub-nav-item" aria-hidden="true" tabindex="-1">
              <a href="<?php echo url($item['link']['href']) ?>"><?php echo $item['link']['title'] ?></a>
            </li>
          <?php endif ?>
        <?php endforeach ?>
      </ul>
  </div>

  <?php
    $featured = array();

    foreach ($items as $item) {
      if ($item['link']['href'] == '<nolink>') {
        $featured = $item;
        break;
      }
    }
  ?>

  <?php if (!empty($featured['below'])): ?>
    <div class="column column-featured">
      <span class="column-header full-width" id="about-us-featured"><?php echo $featured['link']['title'] ?></span>
      <ul class="nav-list" aria-labelledby="about-us-featured sub-nav-title-about-us">
      <?php foreach ($featured['below'] as $item): ?>
        <li class="sub-nav-item" aria-hidden="true" tabindex="-1">
          <a href="<?php echo url($item['link']['href']) ?>">
            <?php echo $item['link']['title'] ?>
            <p>Our mission is to help leaders in multiple sectors develop a deeper understanding of the global economy.</p>
          </a>
        </li>
      <?php endforeach ?>
      </ul>
    </div>
  <?php endif ?>

</div>
