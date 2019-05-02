<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
//ddl($content);

global $base_url;
$paraID   = $variables['elements']['#entity']->item_id;
$links              = isset($content['field_paragraph']) ? render($content['field_paragraph']) : '';
$bguri         = isset($content['field_full_image']['#items'][0]['uri']) ? $content['field_full_image']['#items'][0]['uri'] : NULL;
$bgurl         = isset($bguri) ? file_create_url($bguri) : NULL;
$logolink               = isset($content['field_logo_link']) ? render($content['field_logo_link'][0]['#element']['url']) : url('<front>');

if(isset($content['field_fixed_header_menu'])){
  $headerClass = $content['field_fixed_header_menu'][0]['#markup']? "fixed-header" : "default-header";
}
$headerClassLogo         = isset($content['field_full_image']['#items'][0]['uri']) ? "new-logo-header" : "default-logo-header";

$headerBgColor = isset($content['field_header_bg_color'])? $content['field_header_bg_color'][0]['#markup']: "";
$linkColor = isset($content['field_link_font_color'])? $content['field_link_font_color'][0]['#markup']: "";

$linkHoverBgColor = isset($content['field_main_heading_font_color'])? $content['field_main_heading_font_color'][0]['#markup']: "";

$linkHoverColor = isset($content['field_content_font_color'])? $content['field_content_font_color'][0]['#markup']: "";

$logOutClass = $content['field_hide_logout_link'][0]['#markup']? "hide-logout" : "";

$menuClass = $content['field_menu_desktop'][0]['#markup']? "menu-desktop" : "";

$logoColor = isset($content['field_default_mck_logo_color'])? $content['field_default_mck_logo_color'][0]['#markup']: "";
$hamburgerMenuColor = isset($content['field_hamburger_menu_color'])? $content['field_hamburger_menu_color'][0]['#markup']: "";
?>

<style type="text/css">

     <?php if(isset($content['field_link_font_color'])) { ?>
            .para-<?php echo $paraID ?>.global-header .nav-item a,
			.para-<?php echo $paraID ?> .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item>a
            {
                color:<?php echo $linkColor ?>!important ;
            }			
    <?php } ?>
	
	 <?php if(($content['field_white_mck_logo'][0]['#markup']==1)) { ?>
             .para-<?php echo $paraID ?>.navigation-r3.default-logo-header .logo-container a.cpny-logo::before
            {
                color:#fff!important ;
            }		
			
    <?php } ?>
	
	
	 <?php if(isset($content['field_hamburger_menu_color'])) { ?>
             .para-<?php echo $paraID ?>.navigation-r3 .menu-hamburger,
			 .para-<?php echo $paraID ?>.navigation-r3 .menu-hamburger:after,
			 .para-<?php echo $paraID ?>.navigation-r3 .menu-hamburger:before
            {
                background-color:<?php echo $hamburgerMenuColor ?>!important ;
            }	

             .para-<?php echo $paraID ?>.navigation-r3._menu-open .menu-toggle .menu-hamburger{
				 background-color: unset!important;
			 }			
			
    <?php } ?>
	
     <?php if(isset($content['field_header_bg_color'])) { ?>
            .para-<?php echo $paraID ?>.global-header,
            .para-<?php echo $paraID ?>.navigation-r3 .menu-toggle,
            .para-<?php echo $paraID ?>.navigation-r3._menu-open .hamburger-nav,
			.para-<?php echo $paraID ?>.navigation-r3._menu-open .menu-toggle{
                background-color: <?php echo $headerBgColor ?>!important;
            }				
    <?php } ?>
	
	
    <?php if(isset($content['field_main_heading_font_color'])) { ?>
             .para-<?php echo $paraID ?>.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item>a:hover,
             .para-<?php echo $paraID ?>.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item.active>a
            {
                color:<?php echo $linkHoverColor ?>!important ;
            }

			 .para-<?php echo $paraID ?>.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item>a:hover:after,
             .para-<?php echo $paraID ?>.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item.active>a:hover:after
            {
                background-color: <?php echo $linkHoverBgColor ?>;
            }	
    <?php } ?>
</style>



<a name="top"></a>
<header class="global-header global-header-r3 navigation-r3 custom-menu <?php echo $headerClass; ?> <?php echo $headerClassLogo; ?> <?php echo $menuClass; ?> <?php echo $logOutClass; ?> para-<?php echo $paraID ?>" role="banner">
  <a aria-hidden="false" aria-label="Toggle Menu" class="skip-main" href="#0" tabindex="0">Skip to main content</a>
 <button class="menu-toggle" role="button" type="button">
  <div class="menu-hamburger">
    <span class="visually-hidden">Toggle Menu</span>
  </div>
</button>
<section class="hamburger-nav" data-module="HamburgerNav">
  <div class="main-nav-inner">
    <a class="mck-logo-icon" href="#<?php // echo url('<front>') ?>" tabindex="-1">
      <span class="visually-hidden">McKinsey &amp; Company Home</span>
    </a>
    <nav class="main-nav" data-level="-menu-level0" role="menu">
      <ul class="nav-list nav-group-left">
          <?php echo $links;  ?>  
              <li role="menuitem" class="nav-item nav-link-item custom-anchor-link logout-link" aria-hidden="true" >
				<a href="<?php echo $base_url; ?>/user/logout">Log Out</a>
		   </li>			  
    </ul>
    </nav>
  </div>
</section>

<div class="hamburger-curtain"></div>


	<div class="top-bar-inner">
	  <div class="global-primary-nav-r3 show-nav" data-module="PrimaryNavigation" role="banner">
		  <nav class="primary-navigation" role="navigation">
        <ul class="nav-list nav-group-left">
            <?php echo $links;  ?>
			    <li role="menuitem" class="nav-item nav-link-item custom-anchor-link logout-link" aria-hidden="true" >
					<a href="<?php echo $base_url; ?>/user/logout">Log Out</a>
				</li>	
        </ul>
		  </nav>
	</div>

	</div>
  <div class="logo-container">
     <?php if(isset($content["field_full_image"])){ ?>
    <a class="names cpny-logo alone" href="<?php echo $logolink ?>" style="background-image: url('<?php echo $bgurl ?>');" ><span class="visually-hidden">McKinsey &amp; Company Home</span></a>
    <?php }else{ 

$logolink  = isset($content['field_logo_link']) ? render($content['field_logo_link'][0]['#element']['url']) : "http://mckinsey.com";
      ?>

  <a class="names cpny-logo alone" href="<?php echo $logolink ?>"  ><span class="visually-hidden">McKinsey &amp; Company Home</span></a>
    <?php }?>
  </div><!--END NAVIGATION MENU-->
</header>






