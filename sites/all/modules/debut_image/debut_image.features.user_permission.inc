<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function debut_image_user_default_permissions() {
  $permissions = array();

  // Exported permission: create image content
  $permissions['create image content'] = array(
    'name' => 'create image content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'contributor',
    ),
  );

  // Exported permission: delete any image content
  $permissions['delete any image content'] = array(
    'name' => 'delete any image content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: delete own image content
  $permissions['delete own image content'] = array(
    'name' => 'delete own image content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'contributor',
    ),
  );

  // Exported permission: edit any image content
  $permissions['edit any image content'] = array(
    'name' => 'edit any image content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'editor',
    ),
  );

  // Exported permission: edit own image content
  $permissions['edit own image content'] = array(
    'name' => 'edit own image content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'contributor',
    ),
  );

  return $permissions;
}
