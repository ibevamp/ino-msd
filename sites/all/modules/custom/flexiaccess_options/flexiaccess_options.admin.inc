<?php

/**
 * @file
 * Administrative page callbacks for the Flexi Access Options module.
 */

/**
 * Form builder to display a listing of content types and their ACL status.
 */
function flexiaccess_options_admin_content($form) {
  $userListTypes = array(
    'select' => 'Select',
    'autocomplete' => 'Autocomplete'
  );

  $form['flexiaccess_options']['users_list_type'] = array(
    '#type' => 'select',
    '#title' => t('User List Type:'),
    '#default_value' => variable_get('users_list_type'),
    '#options' => $userListTypes,
    '#description' => t('Display the user list as a select list or autocomplete textfield.'),
  );

  $form['actions']['submit'] = array('#type' => 'submit', '#value' => t('Save'));

  return system_settings_form($form);
}