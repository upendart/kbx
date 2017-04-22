<?php
/**
 * @file
 * ab_fonts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ab_fonts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ab_fonts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function ab_fonts_fontyourface_features_default_font() {
  return array(
    'Circular Black normal normal' => array(
      'name' => 'Circular Black normal normal',
      'enabled' => 1,
      'url' => 'http://localhost/#438da5eda80b24910f6ad523e09ca529',
      'provider' => 'local_fonts',
      'css_selector' => '<none>',
      'css_family' => 'Circular Black',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:77:"public://fontyourface/local_fonts/Circular_Black-normal-normal/stylesheet.css";s:8:"font_uri";a:4:{s:3:"eot";s:88:"public://fontyourface/local_fonts/Circular_Black-normal-normal/lineto-circular-black.eot";s:8:"truetype";s:88:"public://fontyourface/local_fonts/Circular_Black-normal-normal/lineto-circular-black.ttf";s:4:"woff";s:89:"public://fontyourface/local_fonts/Circular_Black-normal-normal/lineto-circular-black.woff";s:3:"svg";s:88:"public://fontyourface/local_fonts/Circular_Black-normal-normal/lineto-circular-black.svg";}}',
    ),
    'Circular Bold normal normal' => array(
      'name' => 'Circular Bold normal normal',
      'enabled' => 1,
      'url' => 'http://localhost/#6f3cc18e70fb8fb1594520cac0599b0a',
      'provider' => 'local_fonts',
      'css_selector' => 'h2, h3, h4',
      'css_family' => 'Circular Bold',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:76:"public://fontyourface/local_fonts/Circular_Bold-normal-normal/stylesheet.css";s:8:"font_uri";a:4:{s:3:"eot";s:86:"public://fontyourface/local_fonts/Circular_Bold-normal-normal/lineto-circular-bold.eot";s:8:"truetype";s:86:"public://fontyourface/local_fonts/Circular_Bold-normal-normal/lineto-circular-bold.ttf";s:4:"woff";s:87:"public://fontyourface/local_fonts/Circular_Bold-normal-normal/lineto-circular-bold.woff";s:3:"svg";s:86:"public://fontyourface/local_fonts/Circular_Bold-normal-normal/lineto-circular-bold.svg";}}',
    ),
    'Circular Book normal normal' => array(
      'name' => 'Circular Book normal normal',
      'enabled' => 1,
      'url' => 'http://localhost/#7237ec0470053da98cfc1663b7d0e721',
      'provider' => 'local_fonts',
      'css_selector' => '<none>',
      'css_family' => 'Circular Book',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:76:"public://fontyourface/local_fonts/Circular_Book-normal-normal/stylesheet.css";s:8:"font_uri";a:4:{s:3:"eot";s:86:"public://fontyourface/local_fonts/Circular_Book-normal-normal/lineto-circular-book.eot";s:8:"truetype";s:86:"public://fontyourface/local_fonts/Circular_Book-normal-normal/lineto-circular-book.ttf";s:4:"woff";s:87:"public://fontyourface/local_fonts/Circular_Book-normal-normal/lineto-circular-book.woff";s:3:"svg";s:86:"public://fontyourface/local_fonts/Circular_Book-normal-normal/lineto-circular-book.svg";}}',
    ),
    'Helvetica Neue Bold normal normal' => array(
      'name' => 'Helvetica Neue Bold normal normal',
      'enabled' => 1,
      'url' => 'http://localhost/#8f32e216a925cae2640030ff72e5c08a',
      'provider' => 'local_fonts',
      'css_selector' => NULL,
      'css_family' => 'Helvetica Neue Bold',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:82:"public://fontyourface/local_fonts/Helvetica_Neue_Bold-normal-normal/stylesheet.css";s:8:"font_uri";a:3:{s:3:"eot";s:91:"public://fontyourface/local_fonts/Helvetica_Neue_Bold-normal-normal/helvetica-neue-bold.eot";s:8:"truetype";s:91:"public://fontyourface/local_fonts/Helvetica_Neue_Bold-normal-normal/helvetica-neue-bold.ttf";s:4:"woff";s:92:"public://fontyourface/local_fonts/Helvetica_Neue_Bold-normal-normal/helvetica-neue-bold.woff";}}',
    ),
    'Helvetica Neue Roman normal normal' => array(
      'name' => 'Helvetica Neue Roman normal normal',
      'enabled' => 1,
      'url' => 'http://localhost/#72b816f66d572bdbeb3a801535ff54d1',
      'provider' => 'local_fonts',
      'css_selector' => NULL,
      'css_family' => 'Helvetica Neue Roman',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:83:"public://fontyourface/local_fonts/Helvetica_Neue_Roman-normal-normal/stylesheet.css";s:8:"font_uri";a:3:{s:3:"eot";s:93:"public://fontyourface/local_fonts/Helvetica_Neue_Roman-normal-normal/helvetica-neue-roman.eot";s:8:"truetype";s:93:"public://fontyourface/local_fonts/Helvetica_Neue_Roman-normal-normal/helvetica-neue-roman.ttf";s:4:"woff";s:94:"public://fontyourface/local_fonts/Helvetica_Neue_Roman-normal-normal/helvetica-neue-roman.woff";}}',
    ),
  );
}
