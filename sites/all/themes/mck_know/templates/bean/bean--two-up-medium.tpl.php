<?php //kpr($bean);

$herouri = isset($bean->field_hero_image['und'][0]['uri']) ? $bean->field_hero_image['und'][0]['uri'] : NULL;
$herourl = isset($herouri) ? file_create_url($herouri) : NULL;

$bguri = isset($bean->field_bg_image['und'][0]['uri']) ? $bean->field_bg_image['und'][0]['uri'] : NULL;
$bgurl = isset($bguri) ? file_create_url($bguri) : NULL;


?>

<!-- Start Two Up Medium Module -->

<section id="green-slants" class="up two-up two-up-medium">
    <div class="block-list text-xl">
        <div class="item blue slant">
            <div class="item-content-wrap">
                <div class="text-wrapper">
                    <h3 class="headline"><?php print $bean->title;?></h3>
                    <div class="description"><?php print $bean->field_body['und'][0]['value']; ?></div>
                </div>
            </div>
        </div>
        <div class="item no-padding" style="background-image:linear-gradient(79deg, #00A0AF 9%, rgba(199, 26, 26, 0) 9%),url(<?php print $bgurl;?>) !important;">
            <div class="item-content-wrap">
                <img src="<?php print $herourl; ?>" class="newtrophy"/>
                <!-- 	<div class="trophy"></div> -->

            </div>  <!-- END .item-content-wrap -->

        </div>  <!-- END .item -->

    </div>  <!-- END .block-list --></section>

<!-- End Two Up Medium Module -->