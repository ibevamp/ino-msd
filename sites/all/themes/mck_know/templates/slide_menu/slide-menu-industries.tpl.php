<div class="sub-nav">
  <header class="sub-nav-header">
    <a href="#0 " class="close-sub-nav" aria-hidden="true" tabindex="-1"></a>
    <span class="sub-nav-title" id="nav-group-title-<?php echo $role_id ?>"><?php echo $item['link']['title'] ?></span>
  </header>

  <div class="sub-nav-links">
    <div class="column">
      <ul aria-labelledby="nav-group-title-<?php echo $role_id ?>" class="nav-list">
      <?php foreach ($items as $sub_item): ?>
        <li role="menuitem" aria-haspopup="true" class="sub-nav-item  nav-link-item has-children" aria-hidden="true" tabindex="-1">
          <a href="#" tabindex="-1"><?php echo $sub_item['link']['title'] ?></a>
          <?php if (!empty($sub_item['below'])): ?>
            <?php echo theme('slide_menu_' . $item['link']['localized_options']['attributes']['name'], array('item' => $sub_item)) ?>
          <?php endif ?>
        </li>
      <?php endforeach ?>
      </ul>
    </div>
  </div>

  <footer class="sub-nav-footer">
    <a class="view-all-link -arrow" href="/featured-insights" tabindex="0" aria-hidden="false">Read our featured insights</a>
  </footer>

</div>
