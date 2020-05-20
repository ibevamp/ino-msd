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

       
     
  
     
       
  
                 .para-15585.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item>a:hover,
             .para-15585.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item.active>a
            {
                color:#e5910d!important ;
            }

       .para-15585.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item>a:hover:after,
             .para-15585.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item.active>a:after
            {
                background-color: #e5910d;
            } 
    


     
          .para-15585.navigation-r3 .global-primary-nav-r3 .primary-navigation>.nav-list>.nav-item .sub-nav a.sub-menu-item:hover {
       color: #e5910d !important;
       border-bottom: 4px solid #e5910d;
     }
     
     </style>



<header class="global-header global-header-r3 navigation-r3 custom-menu fixed-header new-logo-header para-15143" role="banner">
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
          
  

    <li class="nav-item " aria-hidden="true" data-url="/msd/ino/sirius-homenew" tabindex="-1">
      <a href="https://solutions.mckinsey.com/msd/ino/sirius-homenew" tabindex="-1">Home</a>
          </li>

    

    <li class="nav-item " aria-hidden="true" data-url="/msd/ino/sirius-homenew" tabindex="-1">
      <a href="https://solutions.mckinsey.com/msd/ino/sirius-learning-portal-get-trained" tabindex="-1">Learning Portal</a>
          </li>

    

    <li class="nav-item " aria-hidden="true" data-url="/msd/ino/sirius-homenew" tabindex="-1">
      <a href="https://solutions.mckinsey.com/msd/ino/sirius-contact-us" tabindex="-1">Contact Us</a>
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
            
  

    <li class="nav-item " aria-hidden="true" data-url="/msd/ino/sirius-homenew" tabindex="-1">
      <a href="https://solutions.mckinsey.com/msd/ino/sirius-homenew">Home</a>
          </li>

    

    <li class="nav-item " aria-hidden="true" data-url="/msd/ino/sirius-homenew" tabindex="-1">
      <a href="https://solutions.mckinsey.com/msd/ino/sirius-learning-portal-get-trained">Learning Portal</a>
          </li>

    

    <li class="nav-item " aria-hidden="true" data-url="/msd/ino/sirius-homenew" tabindex="-1">
      <a href="https://solutions.mckinsey.com/msd/ino/sirius-contact-us">Contact Us</a>
          </li>
 
        </ul>
      </nav>
  </div>

  </div>
  <div class="logo-container">
         <a class="names cpny-logo alone" href="/msd/ino/" style="background-image: url('sites/all/themes/mck_know/images/aperture-logo.jpg');"><span class="visually-hidden">McKinsey &amp; Company Home</span></a>
      </div><!--END NAVIGATION MENU-->
</header>




<ul class="links inline"><li class="statistics_counter first last"><span>39 reads</span></li>
</ul>
  <style type="text/css">
          .para-15575.banner-anchors .links ul li
      {
          background-color:#fffffff2 !important ;
      }
      .para-15575.banner-anchors .links ul li:hover
      {
        background-color:#ffffff !important ;
      }
    	
	              .para-15575.banner-anchors .links ul li a
            {
                color:#000000!important ;
            }	
			
    	
</style>
<div class="enhanced-hero-section enhanced-hero-no-parallax banner-anchors  medium-font  para-15575 links-count-0 fixed-width mck-mt-0 mck-mb-0" style="height: 400px">
 <div class="hero hero-featured enhanced-hero -light -over-image-true hero-featured hotel">
         <div class="hero-container hero-main_0_universal_header_2" style="background-image: url(https://solutions.mckinsey.com/msd/ino/sites/default/files/sirius-banner.jpg)">
		 <div class="wrapper">
			<div class="featured-copy text-hero-m content -center">
			<h1 class="headline">
  Welcome to the Aperture Learning Portal</h1>
				<div class="links">
					<ul>
										</ul>
				</div>
			</div>
	  </div>
      </div>
    </div>
    </div>








  
<div class="section-wrapper">
	<a name=""></a>
	<div class="wrapper oneup-image  section-inner-wrapper">
		<div id="sg-c-1up-medium" class="c-example-block  u-padding">

			<section class="up one-up up-left">
								<article class="text-xl -no-dek">
					<div class="item">
													<div class="image medium-img">
																											<div class="thumbnail" style="background-image: url(https://solutions.mckinsey.com/msd/ino/system/files/1upimage/1161078333_0.jpg)"></div>
																</div>
												<div class="text-wrapper">
						    															<h3 class="headline">
  Login</h3>
			<div class="description">
				<div class="rteleft"> 
				<?php
					global $user;
					// Only for logged in users.
					if ($user->uid) {
						print 'Welcome ' . theme('username', array('account' => $user));
					} else{
						$blockObject = block_load('user', 'login');
						$block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
						$output = drupal_render($block);
						print $output;
					}
				?>
				</div>
			</div>
		
																					<br>
							<div class="cta-wrapper">
																							</div>
						</div>
											</div>
				</article>
			</section>

		</div>
	</div>
</div>  
<style type="text/css">
			.para-15581.card-module {
			background-color:#ffffff!important ;
		}
		.accordion-module-wrapper .view-more .para-15581#acc-card-module-0 span {
			border-bottom-color: #ffffff!important;
		}			
	
		
	
	
	
	</style>

<div style="clear: both;">
  <a name="contact" id="contact" class="anchored-link"></a>
</div>

	<div class="para-15581 card-module  footer-links  darker-heading three-up    bg-image section-wrapper mck-mt-0 mck-mb-0">
<span class="arrow"></span>
	<div class="section-inner-wrapper">
				<div class="block-list text-m ">
			<div class="item para-15577" style="height: 46px;">
				                
						<div class="  -text-left  item-wrapper ">
																
						
													
												
												
												<div class="card-content">
						

														
							
							
								
								
															
							
								  								
								
								
																	<div class="description">
									<p>
  </p>
<p><span style="font-family:arial"><span style="font-size:20px"><a href="https://solutions.mckinsey.com/msd/ino/sirius-homenew">Home</a><p>
<p><span style="font-family:arial"><span style="font-size:16px"><a href="https://solutions.mckinsey.com/msd/ino/sirius-homenew#about">About Aperture</a><p>
<p><span style="font-family:arial"><span style="font-size:16px"><a href="https://solutions.mckinsey.com/msd/ino/sirius-homenew#solutions">Solutions</a><p>
<p><span style="font-family:arial"><span style="font-size:16px"><a href="https://solutions.mckinsey.com/msd/ino/sirius-homenew#impact">Impact Stories</a><p>
<p><span style="font-family:arial"><span style="font-size:16px"><a href="https://solutions.mckinsey.com/msd/ino/sirius-homenew#media">Media Stories</a><p>
<p><span style="font-family:arial"><span style="font-size:16px"><a href="https://solutions.mckinsey.com/msd/ino/sirius-homenew#team">Team</a><p>

									</div>
								

								
						</div><!-- end of card -->
       		</div><!--end of col for card content -->
			</div>


  
<div class="item para-15578" style="height: 46px;">
				                
						<div class="  -text-left  item-wrapper ">
																
						
													
												
												
												<div class="card-content">
						

														
							
							
								
								
															
							
								  								
								
								
																	<div class="description">
									<p>
  </p><p><span style="font-family:arial"><span style="font-size:20px"><a href="https://solutions.mckinsey.com/msd/ino/sirius-learning-portal-get-trained">Learning Portal</a><p>
<p><span style="font-family:arial"><span style="font-size:16px"><a href="https://solutions.mckinsey.com/msd/ino/sirius-learning-portal-get-trained">Get trained</a><p>
<p><span style="font-family:arial"><span style="font-size:16px"><a href="https://solutions.mckinsey.com/msd/ino/sirius-learning-portal-get-tested">Get tested</a><p>
<p><span style="font-family:arial"><span style="font-size:16px"><a href="https://solutions.mckinsey.com/msd/ino/sirius-learning-portal-prepare-pitch">Prepare for pitch</a><p>
<p><span style="font-family:arial"><span style="font-size:16px"><a href="https://solutions.mckinsey.com/msd/ino/sirius-learning-portal-share-client">Share with client</a><p>

									</div>
								

								
						</div><!-- end of card -->
       		</div><!--end of col for card content -->
			</div>


  
<div class="item para-15579" style="height: 46px;">
				                
						<div class="  -text-left  item-wrapper ">
																
						
													
												
												
												<div class="card-content">
						

														
							
							
								
								
															
							
								  								
								
								
																	<div class="description">
									<p>
  </p><p><span style="font-family:arial"><span style="font-size:20px"><a href="https://solutions.mckinsey.com/msd/ino/sirius-team">Contact Us</a><br></span></span></p><p></p>
									</div>
								

								
						</div><!-- end of card -->
       		</div><!--end of col for card content -->
			</div>


  
		</div>   
            <div>
							</div> 
		</div>

    <div style="clear: both;"></div>
	</div>
</div>