<div class="sub-nav-links">

  <?php
    $first = reset($items);
    $second = next($items);

    $first_id = drupal_clean_css_identifier($first['link']['title']);
    $second_id = drupal_clean_css_identifier($second['link']['title']);
  ?>

  <span class="column-header double-column" id="topic-title-<?php echo $first_id ?>"><?php echo $first['link']['title'] ?></span>
  <span class="column-header single-column" id="topic-title-<?php echo $second_id ?>"><?php echo $second['link']['title'] ?></span>

  <?php foreach (array_chunk($first['below'], 4) as $first_items): ?>
    <div class="column">
      <ul class="nav-list" aria-labelledby="topic-title-<?php echo $first_id ?> global-themes-subnav">

      <?php foreach ($first_items as $item): ?>
        <li class="sub-nav-item" aria-hidden="true" tabindex="-1">
          <a href="<?php echo url($item['link']['href']) ?>"><?php echo $item['link']['title'] ?></a>
        </li>
      <?php endforeach ?>

      </ul>
    </div>
  <?php endforeach ?>

  <div class="column">
    <ul class="nav-list" aria-labelledby="topic-title-<?php echo $second_id ?> global-themes-subnav">

    <?php foreach ($second['below'] as $item): ?>
      <li class="sub-nav-item" aria-hidden="true" tabindex="-1">
        <a href="<?php echo url($item['link']['href']) ?>"><?php echo $item['link']['title'] ?></a>
      </li>
    <?php endforeach ?>

    </ul>
  </div>

</div>

<footer class="sub-nav-footer">
  <a class="view-all-link -arrow" href="/featured-insights" aria-hidden="true" tabindex="-1">Read our featured insights</a>
</footer>
