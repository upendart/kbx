<?php
/**
 * @file
 * ab_display_suite_layouts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ab_display_suite_layouts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "ds_extras" && $api == "ds_extras") {
    return array("version" => "1");
  }
}
