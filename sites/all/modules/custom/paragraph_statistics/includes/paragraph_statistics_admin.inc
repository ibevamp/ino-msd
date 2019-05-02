<?php

module_load_include('inc', 'paragraph_statistics', 'includes/db');

/**
 * Admin form callback function().
 */
function paragraph_statistics_admin_form() {
	$form = array();

    $bundles = array_keys(field_info_bundles('paragraphs_item'));
	$db = new db();
	$bundles = $db->queryParaBundles();
    $options = array();

    foreach($bundles as $bundle) {
    	$options[$bundle] = $bundle;
    }

	$form['bundles'] = array(
		'#type' => 'select',
		'#title' => t('Bundles'),
		'#default_value' => variable_get('bundles'),
		'#description' => t('Select the bundles to include in statistics.'),
		'#options' => $options,
		'#multiple' => TRUE,
		'#required' => TRUE,
	);

	$options = array();
	for($i = 1; $i <= 8; $i++) {
		$options[$i] = $i;
	}

	$form['bundles_per_graph'] = array(
		'#type' => 'select',
		'#title' => t('Bundles Per Graph'),
		'#default_value' => variable_get('bundles_per_graph', 5),
		'#description' => t('Select how many bundles per graph.'),
		'#options' => $options,
		'#required' => TRUE,
	);

	return system_settings_form($form);
}