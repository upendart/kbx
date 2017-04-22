<?php
/**
 * @file
 * ab_date_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ab_date_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer date tools'.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'date_tools',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'date_repeat_field',
  );

  return $permissions;
}
