<?php // $Id: theme-settings.php,v 1.3 2009/06/06 19:46:40 plutado Exp $
/**
 * @file
 *  theme-settings.php
 *
 * Implementation of THEMEHOOK_settings() function.
 *
 * @param $saved_settings
 *   array An array of saved settings for this theme.
 * @return
 *   array A form array.
 */
function phptemplate_settings($saved_settings) {
  /*
   * The default values for the theme variables. Make sure $defaults exactly
   * matches the $defaults in the template.php file.
   */
  $defaults = array(
    'awesome_width' => '85%',
    'awesome_left_width' => '200px',
    'awesome_float' => 0,		
    'awesome_right_width' => '200px',
    'awesome_textsize' => 0,
    'awesome_superfish' => 0,
  );

  // Reset to default value if the user specified setting is invalid
  $saved_width = $saved_settings['awesome_width'];
  $saved_settings['awesome_width'] = _validate_page_width($saved_width);

  // Merge the saved variables and their default values
  $settings = array_merge($defaults, $saved_settings);

  // Create the form widgets using Forms API
  $form['awesome_width'] = array(
    '#type' => 'textfield',
    '#title' => t('Page width'),
    '#default_value' => $settings['awesome_width'],
    '#size' => 12,
    '#maxlength' => 8,
    '#description' => t('Specify the page width in percent ratio (50-100%) for liquid layout, or in px (800-1600px) for fixed width layout. If an invalid value is specified, the default value (85%) is used instead. You can leave this field blank to use the default value. You need to add either % or px after the number.'),
  );
  $form['awesome_left_width'] = array(
    '#type' => 'textfield',
    '#title' => t('Left sidebar width'),
    '#default_value' => $settings['awesome_left_width'],
    '#size' => 12,
    '#maxlength' => 8,
    '#description' => t('Specify the width of the left sidebar. You can leave this field blank to use the default value. You need to add either % or px after the number.'),
  );
  $form['awesome_float'] = array(
    '#type' => 'checkbox',
    '#title' => t('Float left sidebar to the right of content'),
    '#default_value' => $settings['awesome_float'],
    '#description' => t('Check this setting if you would like the left sidebar to be floated to the right of the site\'s primary content - thus place your content on the far left side of your page.'),
  );
  $form['awesome_right_width'] = array(
    '#type' => 'textfield',
    '#title' => t('Right sidebar width'),
    '#default_value' => $settings['awesome_right_width'],
    '#size' => 12,
    '#maxlength' => 8,
    '#description' => t('Specify the width of the left sidebar. You can leave this field blank to use the default value. You need to add either % or px after the number.'),
  );
  $form['awesome_textsize'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Text Resizer'),
    '#default_value' => $settings['awesome_textsize'],
    '#description' => t('Check this setting to enable support for a text resize buttons to appear at the bottom right of the main content area.'),
  );
  $form['awesome_superfish'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Superfish Drop Menus'),
    '#default_value' => $settings['awesome_superfish'],
    '#description' => t('Check this setting to enable support for Superfish drop menus. NOTE: In order for the drop menu to show you MUST uncheck Primary links in the "Toggle display" settings. See the README for full instructions.'),
  );

  // Return the additional form widgets
  return $form;
}

/**
 * *************************************************************************
 * NOTE: With Drupal 6.x, I can not call awesome_validate_page_width()
 *       functions in the template.php somehow. So I created a copy of
 *       the function below and use it instead.
 * ***************************************************************************
 */
/*
 * Check the page width theme settings and reset to default
 * if the value is null, or invalid value is specified
 */
function _validate_page_width($width) {
  global $theme_key;

 /*
  * The default values for the theme variables. Make sure $defaults exactly
  * matches the $defaults in the theme-settings.php file.
  */
  $defaults = array(             // <-- change this array
    'awesome_width' => '85%',
  );

  // check if it is liquid (%) or fixed width (px)
  if (preg_match("/(\d+)\s*%/", $width, $match)) {
    $liquid = 1;
    $num = intval($match[0]);
    if (50 <= $num && $num <= 100) {
      return $num ."%";  // OK!
    }
  }
  else if (preg_match("/(\d+)\s*px/", $width, $match)) {
    $fixed = 1;
    $num = intval($match[0]);
    if (800 <= $num && $num < 1600) {
      return $num ."px"; // OK
    }
  }

  // reset to default value
  variable_set(
    str_replace('/', '_', 'theme_'. $theme_key .'_settings'),
    array_merge($defaults, theme_get_settings($theme_key))
  );
  // Force refresh of Drupal internals
  theme_get_setting('', TRUE);

  return $defaults['awesome_width'];
}