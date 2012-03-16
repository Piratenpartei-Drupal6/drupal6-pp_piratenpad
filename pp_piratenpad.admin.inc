<?php

/**
 * Admin menu page for the basic settings
 */
function pp_piratenpad_admin_form() {
  $form = array();

  $form['global_account'] = array(
    '#type' => 'fieldset',
    '#title' => t('Piratenpad settings'),
    '#description' => t('A normal team user is required to access the list of pads.'),
  );

  $form['global_account']['pp_piratenpad_url'] = array(
    '#type' => 'textfield',
    '#title' => t('URL, like hessen.piratenpad.de'),
    '#default_value' => variable_get('pp_piratenpad_url', NULL),
  );

  $form['global_account']['pp_piratenpad_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Email'),
    '#default_value' => variable_get('pp_piratenpad_email', NULL),
  );

  $form['global_account']['pp_piratenpad_password'] = array(
    '#type' => 'textfield',
    '#title' => t('Password'),
    #'#description' => t("If your Twitter account is protected, or you wish to post to Twitter from Drupal, you must enter the Twitter account's password."),
    '#default_value' => variable_get('pp_piratenpad_password', NULL),
  );

  $form['display_option'] = array(
    '#type' => 'fieldset',
    '#title' => t('Display options'),
    '#description' => t('Adjust the collected pad data.'),
  );

  $form['display_option']['pp_piratenpad_max'] = array(
    '#type' => 'textfield',
    '#title' => t('Max pads'),
    '#default_value' => variable_get('pp_piratenpad_max', 5),
    '#size' => 2,
    '#maxlength' => 2,
  );

  $form['display_option']['pp_piratenpad_sort_alpha'] = array(
    '#type' => 'checkbox',
    '#title' => t('Sort pads alphabetically'),
    '#default_value' => variable_get('pp_piratenpad_sort_alpha', TRUE),
  );

  $form['display_option']['pp_piratenpad_sort_last_edited'] = array(
    '#type' => 'checkbox',
    '#title' => t('Sort pads by last edit'),
    '#default_value' => variable_get('pp_piratenpad_sort_last_edited', FALSE),
  );

  return system_settings_form($form);
}
