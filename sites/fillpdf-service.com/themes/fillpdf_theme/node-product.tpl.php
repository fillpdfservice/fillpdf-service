<?php
// $Id: node-product.tpl.php,v 1.1.2.3 2009/11/11 05:26:25 sociotech Exp $
?>

<div id="node-<?php print $node->nid; ?>" class="node clear-block <?php print $node_classes; ?>">
  <div class="inner">

    <?php if ($submitted): ?>
    <!--<div class="meta">
      <span class="submitted"><?php print $submitted ?></span>
    </div>-->
    <?php endif; ?>

    <?php if ($node_top && !$teaser): ?>
    <div id="node-top" class="node-top row nested">
      <div id="node-top-inner" class="node-top-inner inner">
        <?php print $node_top; ?>
      </div><!-- /node-top-inner -->
    </div><!-- /node-top -->
    <?php endif; ?>

    <div id="product-group" class="product-group">
      <div class="images">
        <?php print $fusion_uc_image; ?>
      </div><!-- /images -->

      <div class="content">
        

        <div id="product-details" class="clear">
          <?php if ($page == 0): ?>
            <h2 class="title"><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
          <?php endif; ?>

          <div id="price-group">
            <?php print $fusion_uc_display_price; ?>
            <!-- per month -->
            <?php print $fusion_uc_add_to_cart; ?>
          </div>
        </div><!-- /product-details -->
        
        <div id="content-body">
          <?php print $fusion_uc_body; ?>
        </div>

        <?php if ($fusion_uc_additional && !$teaser): ?>
        <div id="product-additional" class="product-additional">
          <?php print $fusion_uc_additional; ?>
        </div>
        <?php endif; ?>

        <?php if ($terms): ?>
        <div class="terms">
          <?php print $terms; ?>
        </div>
        <?php endif;?>

        <?php if ($links && !$teaser): ?>
        <div class="links clear">
          <?php print $links; ?>
        </div>
        <?php endif; ?>
      </div><!-- /content -->
    </div><!-- /product-group -->
  </div><!-- /inner -->

  <?php if ($node_bottom && !$teaser): ?>
  <div id="node-bottom" class="node-bottom row nested">
    <div id="node-bottom-inner" class="node-bottom-inner inner">
      <?php print $node_bottom; ?>
    </div><!-- /node-bottom-inner -->
  </div><!-- /node-bottom -->
  <?php endif; ?>
</div>
