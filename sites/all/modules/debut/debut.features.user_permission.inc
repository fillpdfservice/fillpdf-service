<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function debut_user_default_permissions() {
  $permissions = array();

  // Exported permission: view advanced help index
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'contributor',
      '2' => 'editor',
    ),
  );

  // Exported permission: view advanced help popup
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'contributor',
      '2' => 'editor',
    ),
  );

  // Exported permission: view advanced help topic
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'contributor',
      '2' => 'editor',
    ),
  );

  return $permissions;
}
