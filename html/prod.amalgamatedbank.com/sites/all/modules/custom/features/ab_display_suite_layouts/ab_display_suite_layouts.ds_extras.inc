<?php
/**
 * @file
 * ab_display_suite_layouts.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function ab_display_suite_layouts_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'events-block-fields';
  $ds_vd->label = 'Events: Block (Fields)';
  $export['events-block-fields'] = $ds_vd;

  return $export;
}
