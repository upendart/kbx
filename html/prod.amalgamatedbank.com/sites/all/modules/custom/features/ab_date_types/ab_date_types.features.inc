<?php
/**
 * @file
 * ab_date_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ab_date_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
