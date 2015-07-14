<?php
/**
 * @file
 * openproducer_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function openproducer_core_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
    'machine_name' => 'editor',
  );

  return $roles;
}
