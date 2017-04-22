<?php
/**
 * @file
 * ab_fonts.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ab_fonts_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontyourface_css_md5';
  $strongarm->value = '1414ace3c2299d4b4ede5655b83a2107';
  $export['fontyourface_css_md5'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontyourface_detailed_logging';
  $strongarm->value = 0;
  $export['fontyourface_detailed_logging'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontyourface_load_everywhere';
  $strongarm->value = 1;
  $export['fontyourface_load_everywhere'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fontyourface_wysiwyg_css_md5';
  $strongarm->value = '3d334488ea23e1da6912ccee85b94dc0';
  $export['fontyourface_wysiwyg_css_md5'] = $strongarm;

  return $export;
}
