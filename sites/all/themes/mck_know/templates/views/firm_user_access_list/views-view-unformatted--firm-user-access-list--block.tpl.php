<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
 
 
?>
<?php 
ddl($rows);
if(count($rows) == 1){
	foreach ($rows as $id => $row){// ddl($row);
		foreach ($row as $result){ 
			//echo ($result[0]);
		}
	}
	
}
else{
foreach ($rows as $id => $row){ ?>
  <div <?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
<?php }

}


?>