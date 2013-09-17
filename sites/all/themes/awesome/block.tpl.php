<div id="block-<?php print $block->module .'-'. $block->delta; ?>" class="block block-<?php print $block->module ?>" >

	  <div class="b left">
	    <?php if ($block->subject): ?>
			<h2 class="block title"><?php print $block->subject ?></h2>
	    <?php endif; ?>
			
	    <div class="block-content">	
	      <?php print $block->content ?>
	    </div>		
	  </div>
		
</div>