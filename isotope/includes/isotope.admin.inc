<?php
/*
 * @file
 * The admin form include file
 *
 * Defines the FAPI object and renders the system settings form for
 * the History.js Library Module
 */

/*
 * Defines the admin setings form
 *
 * @return
 *   The admin form rendered through system_settings_form
 */
function isotope_admin(){
  $form = array();
  $form['isotope_settings'] = array (
    '#type'  => 'checkboxes',
    '#title' => t('Select what other libraries you would like to add to your site.'),
    '#description' => t('Adds the selected .js libraries to your theme if the .js files are located in the sites/&lt;yoursitenamehere&gt;/libraries folder.'),
	'#options' => array (
	 'jquery-1.6.4'          => t('Include jQuery thats packaged with isotope (Minimum Version 1.6.4 recommended)'),
	 'jquery.ba-bbq'         => t('Include jQuery BBQ'),
	 'jquery.infinitescroll' => t('Include Infinite Scroll')
	),
	'#default_value' => variable_get('isotope_settings', array())
  );

  return system_settings_form($form);  
}
