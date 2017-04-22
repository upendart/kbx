<?php
/**
 * @file
 * ab_token_requests.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ab_token_requests_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ab_token_requests_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ab_token_requests_node_info() {
  $items = array(
    'token_request' => array(
      'name' => t('Token Request'),
      'base' => 'node_content',
      'description' => t('Token Request'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
