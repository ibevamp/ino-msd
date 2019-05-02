<?php
  $curr_path = current_path();
  $frontpage = drupal_get_normal_path(variable_get('site_frontpage', 'node'));
?>
<div class="global-primary-nav-r3 show-nav" data-module="PrimaryNavigation" role="banner">
  <nav class="primary-navigation" role="navigation">
    <ul class="nav-list nav-group-left" style="padding-left: 0px;">
    <?php foreach ($main_menu as $link): ?>

            <?php

            if($curr_path == $link['link']['href']) { ?>
                <li class="nav-item<?php echo !empty($link['below']) ? ' has-children' : '' ?> active" aria-hidden="true" tabindex="-1">
            <?php } else { ?>
                <li class="nav-item<?php echo !empty($link['below']) ? ' has-children' : '' ?>" aria-hidden="true" tabindex="-1">
            <?php } ?>
        <a href="<?php echo url($link['link']['href']) ?>"><?php echo $link['link']['title'] ?></a>

        <?php if (!empty($link['below'])): ?>
          <div class="sub-nav">

            <header class="sub-nav-header">
              <a href="<?php echo url($link['link']['href']) ?>" class="close-sub-nav" tabindex="-1" aria-hidden="true"></a>
              <span class="sub-nav-title" id="nav-group-title-Industries"><?php echo $link['link']['title'] ?></span>
            </header>

            <?php echo theme('custom_main_menu_' . $link['link']['localized_options']['attributes']['name'], array('items' => $link['below'])) ?>

            <div style="clear:both"></div>
          </div>
        <?php endif ?>
      </li>
    <?php endforeach ?>
    <!--<li><a href="/logout-locked-page?nocache=1"
      title="Log out of this page.">Log Out</a> from this page.</li>-->
    </ul>
  </nav>
</div>
