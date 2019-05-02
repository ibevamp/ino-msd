<a name="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" id="<?php echo render($content['field_anchor_name']['#items'][0]['value']) ?>" class="anchored-links"></a>
<section class="up three-up-circle careers span-full-width">
	<div class="profiles">
		<div class="three-up-circle-outer">
			<div class="inner">
			<div class=" universal-header-wrapper text-lg">
    <header class="universal-header -rule" data-module="UniversalHeader">
<div class="text-wrapper">
            <h1 class="headline"><?php echo render($content['field_title']) ?>
            </div>
</header></div>
				<div class="speakers-participants-list">
					
						<?php echo render($content['field_paragraph']) ?>
			        
				 </div>    
			</div>
			<?php if(isset($content['field_link'])){ ?>
				<a href="<?php echo render($content['field_link']['#items'][0]['url']) ?>" class="btn load-more-speakers -centered"><?php echo render($content['field_link']['#items'][0]['title']) ?></a>
			<?php } ?>

		</div>
	</div>
</section>