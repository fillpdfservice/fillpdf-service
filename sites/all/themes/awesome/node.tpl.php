<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?> clear-block">
<?php print $picture ?>

<?php if ($page == 0): ?>
  <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

  <?php if (!empty($submitted)): ?>
    <div class="submitted"><abbr title="<?php print format_date($node->created, 'custom', "l, F j, Y - H:i"); ?>">
    <?php print format_date($node->created, 'custom', "F j, Y"); ?></abbr> <?php print t('by'); ?> <em><?php print $name; ?></em>
    </div>
  <?php endif; ?>

  <div class="content"><?php print $content ?></div>
	
  <?php if ($terms): ?>
  <div id="tax"><span class="terms"><div class="filed">Categories: </div><?php print $terms ?></span></div>
  <?php endif;?>
  
  <?php if (!empty($submitted)): ?>
    	<div id="links"><?php print $links ?></div>
  <?php endif; ?>

</div>
