<button class="menu-toggle" role="button" type="button">
  <div class="menu-hamburger">
    <span class="visually-hidden">Toggle Menu</span>
  </div>
</button>
<section class="hamburger-nav" data-module="HamburgerNav">
  <div class="main-nav-inner">
    <a class="mck-logo-icon" href="<?php echo url('<front>') ?>" tabindex="-1">
      <span class="visually-hidden">McKinsey &amp; Company Home</span>
    </a>
    <nav class="main-nav" data-level="-menu-level0" role="menu">
      <ul class="nav-list nav-group-left">
      <?php foreach ($main_menu as $item): ?>

        <li role="menuitem" aria-haspopup="true" class="nav-item nav-link-item" aria-hidden="true" tabindex="-1">
          <a href="<?php echo url($item['link']['href']) ?>" tabindex="-1"><?php echo $item['link']['title'] ?></a>

          <?php if (!empty($item['below'])): ?>
            <?php echo theme('slide_menu_' . $item['link']['localized_options']['attributes']['name'], array('item' => $item)) ?>
          <?php endif ?>

        </li>
      <?php endforeach ?>
      </ul>
    </nav>
  </div>
</section>

<div class="hamburger-curtain"></div>
