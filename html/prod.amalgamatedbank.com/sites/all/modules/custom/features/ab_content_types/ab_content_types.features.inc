<?php
/**
 * @file
 * ab_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ab_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ab_content_types_node_info() {
  $items = array(
    'basic_page_freestyle' => array(
      'name' => t('Basic Page - Freestyle'),
      'base' => 'node_content',
      'description' => t('This is a basic page for the site that can be used on pages and is completely freestyle. The content can be styled/laid out anyway that you wish. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'basic_page_with_hero_image' => array(
      'name' => t('Basic Page with Hero Image'),
      'base' => 'node_content',
      'description' => t('This is a basic page with a hero image at the top of the screen. The hero image spans the top of the screen and is required. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'basic_page_with_image' => array(
      'name' => t('Basic Page with Image'),
      'base' => 'node_content',
      'description' => t('This is a basic content page with an image at the top. The image is optional. By not adding an image it will display just the same. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Events for the site that appear on informational gateway pages. '),
      'has_title' => '1',
      'title_label' => t(' Event Title'),
      'help' => '',
    ),
    'front_page' => array(
      'name' => t('Front Page'),
      'base' => 'node_content',
      'description' => t('Front page layout for the site. Should not be used more than once.
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'informational_gateway_item' => array(
      'name' => t('Informational Gateway Item'),
      'base' => 'node_content',
      'description' => t('This is used to build out the slideshows found on the front page, as well as some page level content on informational pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_detail_page' => array(
      'name' => t('Product Detail Page'),
      'base' => 'node_content',
      'description' => t('Used as child pages of the Product Landing Page content type. Includes an optional sidebar. Also includes the use of breadcrumbs and an orange lower content area above the footer.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_landing_page_freestyle' => array(
      'name' => t('Product Landing Page Freestyle'),
      'base' => 'node_content',
      'description' => t('Extends the basic page on the site and links to top level product detail pages like Personal Banking, Business, Political, etc. Includes breadcrumbs -- unlike the basic page -- and an orange lower content area above the footer. Also includes a grey details section directly below the blue content container under the main header. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_landing_page_strict' => array(
      'name' => t('Product Landing Page Strict'),
      'base' => 'node_content',
      'description' => t('Extends the basic page on the site and links to top level product detail pages like Personal Banking, Business, Political, etc. Includes breadcrumbs -- unlike the basic page -- and an orange lower content area above the footer. Also includes a grey details section directly below the blue content container under the main header. <br /><br /><strong>This page allows little, if any, changes to the layout of the site or the presentation of content.</strong> '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_tout_item' => array(
      'name' => t('Product Tout Item'),
      'base' => 'node_content',
      'description' => t('Used to tout -- as the name implies -- products. Contains a title, subtitle, descriptive body text, a link and an image. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'promotional_landing_page' => array(
      'name' => t('Promotional Landing Page'),
      'base' => 'node_content',
      'description' => t('Landing page for any promotional on the site. This is the <em>strict</em> version of the page and allows little, if any, HTML input. '),
      'has_title' => '1',
      'title_label' => t('Promotion Title'),
      'help' => '',
    ),
    'segment_landing_page' => array(
      'name' => t('Segment Landing Page Strict'),
      'base' => 'node_content',
      'description' => t('Segment page for various information on the site. This has a strict layout and allows almost ZERO customization for how the page looks and is laid out. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'segment_landing_page_freestyle' => array(
      'name' => t('Segment Landing Page Freestyle'),
      'base' => 'node_content',
      'description' => t('<p>Segment page for various information on the site.</p>
 <br /><br /><strong>This page allows little, if any, changes to the layout of the site or the presentation of content.</strong> '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
