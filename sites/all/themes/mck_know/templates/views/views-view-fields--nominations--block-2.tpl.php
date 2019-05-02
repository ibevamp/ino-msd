<?php 

foreach ($view->result as $row) {
//ddl($row);
//$nid = $row->nid;
$title = $row->node_title;
$main_image = $row->field_field_image[0]['rendered']['#item']['uri'];
$main_imageurl = file_create_url($main_image);
$jobtitle = $row->field_field_job_title[0]['raw']['value'];
//$url = file_create_url($uri);
//kpr($row);


?>


 <div class="item profile-item">
          <div class="image profile-image">
              <a href="#" data-capture-breadcrumb="true" data-breadcrumb-title="Our People">
                  <div class="circle-crop">
                      <div class="image">
                   
                          <img src="<?php print $main_imageurl;?>"/>
                      </div>
                  </div>
              </a>
          </div>
          <div class="text-wrapper">
              <a class="item-title-link" href="#" data-capture-breadcrumb="true" data-breadcrumb-title="Our People">
                  <h4 class="headline">
                     <?php print $title; ?>
                  </h4>
              </a>
              <h6 class="eyebrow profile-card--value"><?php print $jobtitle; ?></h6>
          </div>
      </div>


<?php
} 
 ?> 