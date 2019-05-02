
<div class="profile-card three-up-col ">

	<div class="profile-card-inner has-image ">

			<div class="profile-card__profile-pic--container">
				<?php echo render($content['field_image']) ?>
			</div>

			<div class="profile-card__details-text text-m">
				<hgroup class="profile-card-headings">

					<h6 class="headline profile-card--title"><?php echo render($content['field_title']) ?></h6>
					<h6 class="eyebrow profile-card--value"><?php echo render($content['field_designation']) ?></h6>

				</hgroup>
<div class="divider"></div>
<div class="profile-card--value profile-card--job-description"><?php echo render($content['field_description']) ?></div>

			</div>
</div>

</div>

