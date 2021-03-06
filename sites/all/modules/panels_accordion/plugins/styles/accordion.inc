<?php
// $Id: $

$plugin = array(
  'title' => t('Accordian'),
  'description' => t('Apply accordion styles to multiple panes'),
  'render panel' => 'panels_accordion_style_render_panel',
  'render pane' => 'panels_accordion_style_render_pane',
  'settings form' => 'panels_accordion_style_settings_form',
);

/**
 * Settings form for this style
 */
function panels_accordion_style_settings_form($style_settings) {
  
  // to add more options, go to http://docs.jquery.com/UI/Accordion and copy/paste the option name & values (as form options) into a form element.  
  
  $form['description'] = array(
    '#type' => 'markup',
    '#value' => 'See <a href="http://docs.jquery.com/UI/Accordion">http://docs.jquery.com/UI/Accordion</a> for a list of possible values for these options',
  );
  
  // http://docs.jquery.com/UI/Accordion for how to implement these attributes
  $form['active'] = array(
    '#type' => 'textfield',
    '#title' => t('active'),
    '#default_value' => isset($style_settings['active']) ? $style_settings['active'] : $style_settings['active'] = 0,
    '#description' => t('Selector for the active element. Set to false to display none at start. Needs collapsible: true.'),
  );
  $form['animated'] = array(
    '#type' => 'radios',
    '#title' => t('animated'),
    '#options' => array('slide' => t('slide'), 'bounceslide' => t('bounceslide')),
    '#default_value' => isset($style_settings['animated']) ? $style_settings['animated'] : $style_settings['animated'] = 'slide',
    '#description' => t("Choose your favorite animation, or disable them (set to false). In addition to the default, 'bounceslide' and all defined easing methods are supported ('bounceslide' requires UI Effects Core)."),
  );
  $form['autoHeight'] = array(
    '#type' => 'radios',
    '#title' => t('autoHeight'),
    '#options' => array('true' => t('true'), 'false' => t('false')),
    '#default_value' => isset($style_settings['autoHeight']) ? $style_settings['autoHeight'] : $style_settings['autoHeight'] = 'false',
    '#description' => t('If set, the highest content part is used as height reference for all other parts. Provides more consistent animations.'),
  );
  /*$form['clearStyle'] = array(
    '#type' => 'radios',
    '#title' => t('clearStyle'),
    '#options' => array('true' => t('true'), 'false' => t('false')),
    '#default_value' => isset($style_settings['clearStyle']) ? $style_settings['clearStyle'] : $style_settings['clearStyle'] = 'false',
    '#description' => t("If set, clears height and overflow styles after finishing animations. This enables accordions to work with dynamic content. Won't work together with autoHeight."),
  );
  $form['collapsible'] = array(
    '#type' => 'radios',
    '#title' => t('collapsible'),
    '#options' => array('true' => t('true'), 'false' => t('false')),
    '#default_value' => isset($style_settings['collapsible']) ? $style_settings['collapsible'] : $style_settings['collapsible'] = 'false',
    '#description' => t("Whether all the sections can be closed at once. Allows collapsing the active section by the triggering event (click is the default)."),
  );*/
  $form['event'] = array(
    '#type' => 'radios',
    '#title' => t('event'),
    '#options' => array('click' => t('click'), 'mouseover' => t('mouseover')),
    '#default_value' => isset($style_settings['event']) ? $style_settings['event'] : $style_settings['event'] = 'click',
    '#description' => t("The event on which to trigger the accordion."),
  );
  /*$form['fillSpace'] = array(
    '#type' => 'radios',
    '#title' => t('fillSpace'),
    '#options' => array('true' => t('true'), 'false' => t('false')),
    '#default_value' => isset($style_settings['fillSpace']) ? $style_settings['fillSpace'] : $style_settings['fillSpace'] = 'false',
    '#description' => t("If set, the accordion completely fills the height of the parent element. Overrides autoheight."),
  );*/
 

  return $form;
}

/**
 * Panel style render callback.
 */
function theme_panels_accordion_style_render_panel($display, $panel_id, $panes, $settings) {
//  $style = panels_get_style('accordion');

  // @@TODO: Not working! (see http://drupal.org/node/613444#comment-2236190)
  // If 2 no-style columns contain 2 accordion-style mini-panels, this works (you get panels_accordion-mini_1, mini_2, etc). 
  // But if you have 2 *accordion-style columns* (with whatever content), you get panels_accordion-0, panels_accordion-0 -- panel_id never increments... WHY!
//  $accordion_id = 'panels_accordion-'. $panel_id; 

  static $accordion_id = 0;
  $div_id = 'panels_accordion-'. ((is_numeric($panel_id)) ? $accordion_id++ : $panel_id);

  $options[] = "header:'h3'";
  foreach($settings as $key=>$val){
    // if it's a string, convert slide to 'slide' (necessary as per http://docs.jquery.com/UI/Accordion)
    $val = is_numeric($val) ? $val: "'$val'" ;
    $options[] = $key. ':' .$val;
  }
  $options = '{' .implode(',', $options). '}';
  // if it's 'true'/'false', convert it back to true/false
  $options = str_replace(array("'false'", "'true'"), array("false", "true"), $options); 
  
  jquery_ui_add('ui.accordion');
  drupal_add_js('
  if (Drupal.jsEnabled) {
    $(document).ready(function(){ 
      $(\'div#'. $div_id .'\').accordion(' .$options. ');
  });
   }', 'inline');
 
  // Render the items of the accordion.
    $output .= '<div id="'.$div_id.'">';
  foreach ($panes as $pane_id => $content) {
//    @@TODO: I don't think I'm doing this right, shouldn't 'style' come with the pane automatically?
    $display->content[$pane_id]->style['style'] = 'accordion';
    
    $output .= panels_render_pane($content, $display->content[$pane_id], $display);
  }
  $output .= '</div>';
  return $output;

}

// @@TODO: This came from panels-6.x-3.0.  The function seems deprecated to panels-pane.tpl.php in panels-6.x-3.2, so make sure this is up-to-date
function theme_panels_accordion_style_render_pane($content, $pane, $display) {
  if (!empty($content->content)) {
    $idstr = $classstr = '';
    if (!empty($content->css_id)) {
      $idstr = ' id="' . $content->css_id . '"';
    }
    if (!empty($content->css_class)) {
      $classstr = ' ' . $content->css_class;
    }

    
    if (!empty($content->title)) {
      $output .= "<h3 class=\"pane-title\"><a href=\"#\">$content->title</a></h3>\n";
    }

    $output .= "<div class=\"panel-pane$classstr\"$idstr>\n"; 
    
    if (user_access('view pane admin links') && !empty($content->admin_links)) {
      $output .= "<div class=\"admin-links panel-hide\">" . theme('links', $content->admin_links) . "</div>\n";
    }
    
    if (!empty($content->feeds)) {
      $output .= "<div class=\"feed\">" . implode(' ', $content->feeds) . "</div>\n";
    }

    $output .= "<div class=\"pane-content\">$content->content</div>\n";

    if (!empty($content->links)) {
      $output .= "<div class=\"links\">" . theme('links', $content->links) . "</div>\n";
    }


    if (!empty($content->more)) {
      if (empty($content->more['title'])) {
        $content->more['title'] = t('more');
      }
      $output .= "<div class=\"more-link\">" . l($content->more['title'], $content->more['href']) . "</div>\n";
    }

    $output .= "</div>\n";
    return $output;
  }
}
