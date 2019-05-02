<div class="sub-nav-links">
  <?php foreach (array_chunk($items, 4) as $sub_links): ?>
    <div class="column">
      <ul class="nav-list" aria-labelledby="nav-group-title-Business-Functions">
      <?php foreach ($sub_links as $link): ?>
        <li class="sub-nav-item" aria-hidden="true" tabindex="-1">
          <a href="<?php echo url($link['link']['href']) ?>"><?php echo $link['link']['title'] ?></a>
        </li>
      <?php endforeach ?>
      </ul>
    </div>
  <?php endforeach ?>
</div>
