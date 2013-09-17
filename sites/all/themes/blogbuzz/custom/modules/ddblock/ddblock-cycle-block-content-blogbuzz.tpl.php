<?php
// $Id: ddblock-cycle-block-content-blogbuzz.tpl.php,v 1.3 2010/04/24 13:19:56 antsin Exp $

/*
+----------------------------------------------------------------+
|   BlogBuzz for Dupal 6.x - Version 2.0                         |
|   Copyright (C) 2010 Antsin.com All Rights Reserved.           |
|   @license - GNU GENERAL PUBLIC LICENSE                        |
|----------------------------------------------------------------|
|   Theme Name: BlogBuzz                                         |
|   Description: BlogBuzz by Antsin                              |
|   Author: Antsin.com                                           |
|   Website: http://www.antsin.com/                              |
|----------------------------------------------------------------+
*/
// add Cascading style sheet
drupal_add_css($directory .'/custom/modules/ddblock/' . $custom_template . '/ddblock-cycle-'. $custom_template . '.css', 'template', 'all', FALSE);
?>
<!-- dynamic display block slideshow -->
<div id="ddblock-<?php print $delta ?>" class="ddblock-cycle-<?php print $custom_template ?> clear-block">
 <div class="container clear-block border">
  <div class="container-inner clear-block border">
   <!-- slider content -->
   <div class="slider clear-block border">
    <div class="slider-inner clear-block border">
     <?php if ($output_type == 'view_fields') : ?>
      <?php foreach ($slider_items as $slider_item): ?>
       <div class="slide clear-block border">
        <div class="slide-inner clear-block border">
         <h1><?php print $slider_item['slide_title'] ?></h1> 
		 <div class="slide-image"><?php print $slider_item['slide_image']; ?></div>
		 <div class="slide-text"><?php print $slider_item['slide_text'] ?></div><!-- slide-text-->
         <div class="slide-read-more"><?php print $slider_item['slide_read_more'] ?></div><!-- slide-read-more-->
		</div><!-- slide-inner-->
       </div><!-- slide-->
      <?php endforeach; ?>
     <?php endif; ?>
    </div> <!-- slider-inner-->
   </div>  <!-- slider-->
  </div> <!-- container-inner-->
 </div> <!--container-->
 <?php print $pager_content ?>
</div> <!--  template -->
