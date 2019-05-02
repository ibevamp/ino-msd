<?php 

foreach ($view->result as $row) {
//ddl($row);
//$nid = $row->nid;
$title = $row->node_title;
$main_image = $row->field_field_image[0]['rendered']['#item']['uri'];
$main_imageurl = file_create_url($main_image);
$jobtitle = $row->field_field_job_title[0]['raw']['value'];
$body = $row->field_body[0]['raw']['value'];
//$url = file_create_url($uri);
//kpr($row);


?>

   <a class="profile-card three-up-col" data-capture-breadcrumb="true" data-breadcrumb-title="" data-profile-dropdown-filter-industry="[]" data-profile-dropdown-filter-business-function="[&quot;Organization&quot;]" data-profile-dropdown-filter-region="[]" data-profile-dropdown-filter-location="[]" data-profile-boolean-filter-experienced-hire="false">
          <div class="profile-card-inner has-image ">
  
              <div class="profile-card__profile-pic--container">
          
                 <img class="profile-card__profile-pic" src="<?php print $main_imageurl;?>"/>
            </div>
  
            <div class="profile-card__details-text text-m">
              <hgroup class="profile-card-headings">
            
            
                <h6 class="headline profile-card--title"><?php print $title;?></h6>
            
            
                <h6 class="eyebrow profile-card--value">
                 <?php print $jobtitle;?>
                </h6>
            
            
              </hgroup>
            
            
                <div class="divider"></div>
            
                <h6 class="eyebrow profile-card--value profile-card--background">
                  <?php print $body;?>
                </h6>
            
            </div>
          </div>
        </a>


<?php
} 
 ?> 