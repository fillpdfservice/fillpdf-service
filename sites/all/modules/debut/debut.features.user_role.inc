<?php

/**
 * Implementation of hook_user_default_roles().
 */
function debut_user_default_roles() {
  $roles = array();

  // Exported role: contributor
  $roles['contributor'] = array(
    'name' => 'contributor',
  );

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
  );

  return $roles;
}
