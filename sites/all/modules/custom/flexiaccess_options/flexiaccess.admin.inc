<?php

/**
 * @file
 * Administrative page callbacks for the Flexi Access Options module.
 */

/**
 * Form builder to display a listing of content types and their ACL status.
 */
function flexiaccess_options_admin_content($form) {
  $usersListTypes = array(
    'select' => 'Select',
    'autocomplete' => 'Autocomplete'
  );

  $form['flexiaccess_options']['users_list_type'] = array(
    '#type' => 'select',
    '#title' => t('Users List Type:'),
    '#default_value' => variable_get('users_list_type', 'select'),
    '#options' => $usersListTypes,
    '#description' => t('Display the user list as a select list or autocomplete textfield.'),
  );

  return system_settings_form($form);
}