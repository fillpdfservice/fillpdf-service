<?php

/**
 * Implementation of hook_user_default_roles().
 */
function fill_pdf_ubercart_user_default_roles() {
  $roles = array();

  // Exported role: FillPDF License
  $roles['FillPDF License'] = array(
    'name' => 'FillPDF License',
  );

  // Exported role: grandfathered
  $roles['grandfathered'] = array(
    'name' => 'grandfathered',
  );

  return $roles;
}
