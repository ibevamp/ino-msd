<?php /*
	<div class="container access-denied-page">
		<?php

				global $user;
				if ($user->uid == 0) {
					//echo "<h3>Login to access this page</h3>";
//					$block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));
//					$output = drupal_render($block);
//					print $output;
            echo render($page['content']);
				}else{
					if (in_array('Firm User', $user->roles)) {
						header("Location: asogempractice");
						exit;
					}else{
						echo render($page['content']);
					}
				}
		?>

		<?php //print render($messages); ?>
	</div>
*/ ?>

<?php
global $user;
if (!$user->uid) {
  $block = block_load('openid_connect', 'openid_connect_login');
  $block_output = drupal_render(_block_get_renderable_array(_block_render_blocks(array($block))));
}
else {
  drupal_goto('asogempractice');
}
?>

<div style="display: none">
  <?php echo $block_output; ?>
</div>

<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script>
  (function ($) {
    $(document).ready(function () {
      $('#edit-openid-connect-client-generic-login').click();
    });
  })(jQuery);
</script>
