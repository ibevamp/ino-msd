<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<div class="page-class default  fixed-header">
  <style type="text/css">
    .para-14888.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item>a:hover, .para-14888.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item.active>a {
      color:#e5910d!important ;
    }
    .para-14888.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item>a:hover:after, .para-14888.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item.active>a:after {
      background-color: #e5910d;
    } 
    .para-14888.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item .sub-nav a.sub-menu-item:hover {
      color: #e5910d !important;
      border-bottom: 4px solid #e5910d;
    }
  </style>

  <a name="top"></a>
  <header class="global-header global-header-r3 navigation-r3 custom-menu fixed-header new-logo-header para-14888" role="banner">
    <a aria-hidden="false" aria-label="Toggle Menu" class="skip-main" href="#0" tabindex="0">Skip to main content</a>
    <button class="menu-toggle" role="button" type="button">
      <div class="menu-hamburger">
        <span class="visually-hidden">Toggle Menu</span>
      </div>
    </button>
    <section class="hamburger-nav" data-module="HamburgerNav">
      <div class="main-nav-inner">
        <a class="mck-logo-icon" href="#" tabindex="-1">
          <span class="visually-hidden">McKinsey &amp; Company Home</span>
        </a>
        <nav class="main-nav" data-level="-menu-levelundefined" role="menu">
          <ul class="nav-list nav-group-left">
            <li class="nav-item " aria-hidden="true" data-url="/msd/ino/sirius-learning-portaltraining-material" tabindex="-1">
              <a href="https://solutions.mckinsey.com/msd/ino/sirius-homenew" tabindex="-1">Home</a>
			  	<ul class="sub-nav">
					<li class="nav-item " aria-hidden="true" tabindex="-1">
						<a class="sub-menu-item" href="sirius-learning-portaltraining-material#about">About Sirius  </a>
					</li>
					<li class="nav-item " aria-hidden="true" tabindex="-1">
					  <a class="sub-menu-item" href="sirius-learning-portaltraining-material#solutions">
						Solutions  </a>
					</li>
					<li class="nav-item " aria-hidden="true" tabindex="-1">
					  <a class="sub-menu-item" href="sirius-learning-portaltraining-material#impact">
						Impact Stories  </a>
					</li>
					<li class="nav-item" aria-hidden="true" tabindex="-1">
					  <a class="sub-menu-item" href="sirius-learning-portaltraining-material#media">
						Media Coverage  </a>
					</li>
					<li class="nav-item " aria-hidden="true" tabindex="-1">
					  <a class="sub-menu-item" href="sirius-learning-portaltraining-material#team">
						Team  </a>
					</li>
				</ul>
            </li>
            <li class="nav-item " aria-hidden="true" data-url="/msd/ino/sirius-learning-portaltraining-material" tabindex="-1">
              <a href="https://solutions.mckinsey.com/msd/ino/ino/sirius-learning-portaltraining-material" tabindex="-1">Learning Portal</a>
            </li>
            <li class="nav-item " aria-hidden="true" data-url="/msd/ino/sirius-learning-portaltraining-material" tabindex="-1">
              <a href="https://solutions.mckinsey.com/msd/ino/sirius-contact-us" tabindex="-1">Contact us</a>
            </li> 
          </ul>
        </nav>
      </div>
    </section>
    <div class="hamburger-curtain"></div>
    <div class="top-bar-inner">
      <div class="global-primary-nav-r3 show-nav" data-module="PrimaryNavigation" role="banner">
        <nav class="primary-navigation" role="navigation">
          <ul class="nav-list nav-group-left" style="padding-left: 318px;">
            <li class="nav-item " aria-hidden="true" data-url="/msd/ino/sirius-learning-portaltraining-material" tabindex="-1">
              <a href="https://solutions.mckinsey.com/msd/ino/sirius-homenew">Home</a>
			  	<ul class="sub-nav">
					<li class="nav-item " aria-hidden="true" tabindex="-1">
						<a class="sub-menu-item" href="sirius-learning-portaltraining-material#about">About Sirius  </a>
					</li>
					<li class="nav-item " aria-hidden="true" tabindex="-1">
					  <a class="sub-menu-item" href="sirius-learning-portaltraining-material#solutions">
						Solutions  </a>
					</li>
					<li class="nav-item " aria-hidden="true" tabindex="-1">
					  <a class="sub-menu-item" href="sirius-learning-portaltraining-material#impact">
						Impact Stories  </a>
					</li>
					<li class="nav-item" aria-hidden="true" tabindex="-1">
					  <a class="sub-menu-item" href="sirius-learning-portaltraining-material#media">
						Media Coverage  </a>
					</li>
					<li class="nav-item " aria-hidden="true" tabindex="-1">
					  <a class="sub-menu-item" href="sirius-learning-portaltraining-material#team">
						Team  </a>
					</li>
				</ul>
            </li>
            <li class="nav-item " aria-hidden="true" data-url="/msd/ino/sirius-learning-portaltraining-material" tabindex="-1">
			
      <a href="https://solutions.mckinsey.com/msd/ino/sirius-learning-portaltraining-material">Learning Portal</a>
            </li>
            <li class="nav-item " aria-hidden="true" data-url="/msd/ino/sirius-learning-portaltraining-material" tabindex="-1">
              <a href="https://solutions.mckinsey.com/msd/ino/sirius-contact-us">Contact us</a>
            </li>
            <style>
              .nav-item.user-menu > a {
                height: auto !important;
                line-height: normal !important;
                padding: 0 !important;
                display: inline-block;
              }
              .nav-item.user-menu > .sub-nav {
                padding: 0px 15px !important;
                width: auto !important;
              }
            </style>
            <li class="nav-item user-menu " style="float:right; padding: 10px; font-weight: 500; margin: 0px 20px 0 0;" class="login-details">
              <?php global $user;
              // Only for logged in users.
              if ($user->uid) {
                print theme('username', array('account' => $user));
              }?>
              <ul class="sub-nav">
                <li class="nav-item " aria-hidden="true" tabindex="-1">
                  <a class="sub-menu-item" href="/msd/ino/user/logout?destination=sirius-homenew">Logout</a>
                </li>
              </ul>
            </li>
            <span style="float:right; margin: 10px 0">Welcome </span>
          </ul>
        </nav>
      </div>
    </div>
    <div class="logo-container">
      <a class="names cpny-logo alone" href="/msd/ino/" style="background-image: url('https://solutions.mckinsey.com/msd/ino/system/files/Star_Television_logo_2.png');"><span class="visually-hidden">McKinsey &amp; Company Home</span></a>
    </div><!--END NAVIGATION MENU-->
  </header>
 <div class="content-wrapper">
 <?php echo render($page['content']) ?>
 </div>
 
<!-- Footer Start -->
<footer class="global-footer">
    <section class="footer">
        <div class="footer-inner">
            <div class="footer-section">
                <div class="logo-container">
                    <a href="http://www.mckinsey.com" class="mck-footer__logo">McKinsey &amp; Company | © 2016</a>
                    <?php print render($page['footer']) ?>
                </div>
                <div class="footer-links">
                    <?php print render($page['navigation']); ?>
                </div>
            </div>
        </div>
    </section>
</footer>
<!-- Footer End -->


<div style="clear: both;"></div>
