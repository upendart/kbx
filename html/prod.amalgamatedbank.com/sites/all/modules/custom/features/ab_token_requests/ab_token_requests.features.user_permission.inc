<?php
/**
 * @file
 * ab_token_requests.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ab_token_requests_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer ama_admin'.
  $permissions['administer ama_admin'] = array(
    'name' => 'administer ama_admin',
    'roles' => array(
      'administrator' => 'administrator',
      'token admin' => 'token admin',
    ),
    'module' => 'ama_token_requests',
  );

  // Exported permission: 'administer ama_token_requests'.
  $permissions['administer ama_token_requests'] = array(
    'name' => 'administer ama_token_requests',
    'roles' => array(
      'administrator' => 'administrator',
      'token admin' => 'token admin',
    ),
    'module' => 'ama_token_requests',
  );

  return $permissions;
}
