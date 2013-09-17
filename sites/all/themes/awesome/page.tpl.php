<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
  <title><?php print $head_title ?></title>
  <!--[if IE 7]>
    <link rel="stylesheet" href="<?php print $base_path . $directory; ?>/css/ie7.css" type="text/css">
  <![endif]-->
  <!--[if IE 6]>
    <link rel="stylesheet" href="<?php print $base_path . $directory; ?>/css/ie6.css" type="text/css">
    <script defer type="text/javascript" src="<?php print $base_path . $directory; ?>/js/pngfix.js"></script>
  <![endif]-->
	<?php print $scripts; ?>	
	<script src="<?php print $base_path . $directory; ?>/js/jquery.corner.js" type="text/javascript"></script>	
	<script src="<?php print $base_path . $directory; ?>/js/jquery.cookie.js" type="text/javascript"></script>	
	<script src="<?php print $base_path . $directory; ?>/js/js.js" type="text/javascript"></script>
  <?php print $head ?>
  <?php print $styles ?>
  <?php if ((theme_get_setting('awesome_superfish')) && ($superfish)): ?>
    <script type="text/javascript">
      $(function() {
        $('#superfish-inner ul').superfish();
      });
    </script>
  <?php endif; ?>
</head>

<?php
  $awesome_width = theme_get_setting('awesome_width');
  $awesome_left_width = theme_get_setting('awesome_left_width');
  $awesome_right_width = theme_get_setting('awesome_right_width');
?>

<body>

	
	<div id="page" style="width: <?php print $awesome_width; ?>;">

		<?php if (!empty($section_top)): ?>
			<div class="section-top">
				<div class="section-top-div"><?php print $section_top; ?></div>
			</div>
		<?php endif; ?>	
		
		<div class="header">
		</div>			
	  <div class="container">
			
	    <!-- logo-name -->
	    <div id="logo-name">
	      <!-- site logo -->
	      <div id="site-logo">
	        <?php if ($logo): ?>
	          <a href="<?php print $base_path; ?>" title="<?php print t('return to the home page'); ?>">
	            <img src="<?php print $logo; ?>" alt="<?php print t('return to the home page'); ?>"/>
	          </a>
	        <?php endif; ?>
	      </div>
	      <!-- end site-logo -->
	      <!-- site name -->
	      <div id="site-name-slogan">
	        <div id="site-name">
	            <h1><a href="<?php print $base_path; ?>" title="<?php print t('Go Home'); ?>"><?php print $site_name; ?></a></h1>
	        </div>
	        <!-- site slogan -->
	        <div id="site-slogan">
	          <?php print $site_slogan; ?>
	        </div>
	      </div>
	      <!-- end site name -->
	    </div>
	    <!-- end logo-name -->					
						
			<div class="breadcrumb-container"><?php if (!empty($breadcrumb)): ?><?php print $breadcrumb; ?><?php endif; ?></div>
								
				<div class="navigation">
	        <?php if ($primary_links): ?>
	          <div id="primary">
			        <?php if ($search_box): ?>
			          <div id="search-box">
			            <?php print $search_box; ?>
			          </div> <!-- /#search-box -->
			        <?php endif; ?>          							
	            <?php print theme('links', $primary_links); ?>
	          </div> <!-- /#primary -->
	        <?php endif; ?>
	        <?php if ((!empty($primary_links)) || (!empty($superfish))): ?>
	          <!-- Primary || Superfish -->
	          <div id="<?php print $primary_links ? 'primary' : 'superfish' ; ?>">
	            <div id="<?php print $primary_links ? 'primary' : 'superfish' ; ?>-inner">
	              <?php if (!empty($primary_links)) {
	              	$output = "<div id='secondary'>";
									$output .= theme('links', $secondary_links);
									$output .= "</div>";
									print $output;    	
	              }
	                    elseif (!empty($superfish)) {
	                      print $superfish;
	                    	print "<div id='search_box'>" . $search_box . "</div>";											
	                    }
	              ?>
	            </div> <!-- / inner -->
	          </div> <!-- /primary || superfish -->
					</div> <!-- navigation -->
					
	        <?php endif; ?>				
					
	        <?php if (!empty($mission)): ?>
	          <div id="mission"><?php print $mission; ?></div>
	        <?php endif; ?>

	        <div id="content-header">
															
	          <?php if (!empty($title)): ?><h1 class="title"><?php print $title; ?></h1><?php endif; ?>
	          <?php if (!empty($tabs)): ?><div class="tabs"><?php print $tabs; ?></div><?php endif; ?>
						<?php if (!empty($messages)): print $messages; endif; ?>
	          <?php if (!empty($help)): print $help; endif; ?>
	        </div> <!-- /#content-header -->

					<?php if (!empty($slider)): ?>
						<div id="wrap">
							<div id="box">
								<?php print $slider; ?>
							</div>
						</div>
				<div id="top">
					<a href="#">hide</a>
				</div>						
					<?php endif; ?>	
					
	    <div class="c">
				<?php if (!empty($right)): ?>
					<div class="sidebar-right" style="width:<?php print $awesome_right_width ?>";>
						<?php print $right ?>
					</div>
				<?php endif; ?>
					    	
				<?php if (!empty($left)): ?>
					<?php if (theme_get_setting('awesome_float')): print "<div style=\"float:right;\">"; endif; ?>
						<div class="sidebar-left" style="width:<?php print $awesome_left_width ?>";>
							<?php print $left ?>
						</div>
					<?php if (theme_get_setting('awesome_float')): print "</div>"; endif; ?>
				<?php endif; ?>
				
			  <div id="content-area">		  	
          <?php print $content; ?>
						<div class="clear"></div>
						<?php if (!empty($right)): ?>
							<div class="content-bottom"><?php print $content_bottom; ?></div>
						<?php endif; ?>
        </div>

		  <?php if (theme_get_setting('awesome_textsize')): ?>
				<div id="changeFont">
					<a href="#" class="increaseFont"><img src="<?php print $base_path . $directory; ?>/images/font-increase.png"  alt="Increase Font"/></a>
					<a href="#" class="resetFont"><img src="<?php print $base_path . $directory; ?>/images/font-size.png"  alt="Increase Font"/></a>
					<a href="#" class="decreaseFont"><img src="<?php print $base_path . $directory; ?>/images/font-decrease.png"  alt="Decrease Font"/></a>
				</div>
		  <?php endif; ?>

	    </div>

			<div class="clear"></div>

			<?php if (!empty($bottomleft) || !empty($bottomright)): ?>
				<div class="bottom-half">
				  <?php if (!empty($bottomright)): ?><div class="bottom-left"><?php print $bottomright ?></div><?php endif; ?>
					<?php if (!empty($bottomleft)): ?><div class="bottom-right"><?php print $bottomleft ?></div><?php endif; ?>
				</div>
			<?php endif; ?>
						
			<div class="clear"></div>

			<?php if (!empty($bottom)): ?>
				<div class="bottom-one">
						<div class="bottom"><?php print $bottom ?></div>
				</div>
			<?php endif; ?>
			
			<?php if (!empty($footer)): ?>
				<div class="footer"><?php print $footer; ?></div>
			<?php endif; ?>
						
			<div class="designed-by">
				designed by <a href="http://davidfugate.com">David Plutado Fugate</a>
			</div>
			
	  </div>
	</div>
<?php print $closure ?>
</body>
