  <!-- ______________________ PAGE HEADER _______________________ -->

<meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=2.0, user-scalable=yes" />
<header class="default-header clearfix">
  <a href="./" class="default-logo"><img src="https://apps.mckinsey.com/teds/sites/all/themes/whymck/images/semi-icon.png" style=""> </a>
  <nav id="mck-nav-main" class="">
    <div id="nav-icon3">
      <span></span>
      <span></span>
      <span></span>
      <span></span>
    </div>
     <!-- Primary level item only -->
     <div class="mobile-menu-wrap clearfix">
      <?php print theme('links', array('links' => $main_menu, 'attributes' => array('id' => 'primary', 'class' => array('mck-nav-main__list','links', 'clearfix', 'main-menu')))); ?>
    </div>

  </nav>

</header>

<div id="page" style="width:100% !important;" class="<?php print $classes; ?>"<?php print $attributes; ?>>


  <!-- ______________________ MAIN _______________________ -->

  <div id="main" class="clearfix">
    <div id="content2">
      <div id="content-inner" class="inner column center">

        <div id="content-area">
        <div style="text-align:center;">
        <div class="homepage-hero">
        </div>
        </div>
          <?php print render($page['content']) ?>
        </div>



      </div>
    </div> <!-- /content-inner /content -->
<style>
  #edit-name { display:none; }  
</style>

<script>
  jQuery(document).ready(function(){

    $("#edit-name").val('sces');
  });  
</script>
