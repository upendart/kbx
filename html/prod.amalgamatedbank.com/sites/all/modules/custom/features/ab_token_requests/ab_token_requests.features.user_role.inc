<?php
/**
 * @file
 * ab_token_requests.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ab_token_requests_user_default_roles() {
  $roles = array();

  // Exported role: token admin.
  $roles['token admin'] = array(
    'name' => 'token admin',
    'weight' => 5,
  );

  return $roles;
}
