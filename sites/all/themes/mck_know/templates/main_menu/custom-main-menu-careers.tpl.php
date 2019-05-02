<div class="sub-nav-links">
    <div class="column">
      <ul class="nav-list" aria-labelledby="sub-nav-title-careers">
      <?php foreach ($items as $item): ?>
        <li class="sub-nav-item" aria-hidden="true" tabindex="-1">
          <a href="<?php echo url($item['link']['href']) ?>"><?php echo $item['link']['title'] ?></a>
        </li>
      <?php endforeach ?>
      </ul>
    </div>
</div>
