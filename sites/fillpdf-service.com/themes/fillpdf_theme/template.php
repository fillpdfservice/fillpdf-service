<?php
// $Id: template.php,v 1.1.2.3 2009/11/05 03:32:15 sociotech Exp $

/**
 * Changed breadcrumb separator
 */
function fillpdf_theme_breadcrumb($breadcrumb) {
  if (!empty($breadcrumb)) {
    return '<div class="breadcrumb">'. implode(' &rarr; ', $breadcrumb) .'</div>';
  }
}

function fillpdf_theme_preprocess_node(&$variables) {
  if ($variables['node']->type == 'blog') {
    unset($variables['submitted']);
  }
}
