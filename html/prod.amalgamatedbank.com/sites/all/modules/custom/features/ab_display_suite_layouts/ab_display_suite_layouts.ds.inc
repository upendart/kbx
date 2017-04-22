<?php
/**
 * @file
 * ab_display_suite_layouts.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ab_display_suite_layouts_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|event_view';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'event_view';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event|event_view'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|informational_gateway_item|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'informational_gateway_item';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'corporate_responsibility_block' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'events' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'in_the_news' => array(
      'weight' => '35',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_headline_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_headline_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-blue-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_headline_subtitle' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h4',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_headline_tagline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_headline_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|informational_gateway_item|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|promotional_landing_page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'promotional_landing_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '22',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promo_box_1_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text promo-box-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_box_2_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text promo-box-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_box_3_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text promo-box-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_box_4_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text promo-box-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_box_1_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promo_box_2_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promo_box_3_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promo_box_4_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promo_box_1_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_box_2_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_box_3_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_link_4_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_breadcrumbs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'small',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promotional_1_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|promotional_landing_page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|promotional_landing_page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'promotional_landing_page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'breadcrumbs' => array(
      'weight' => '69',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'small',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'title' => array(
      'weight' => '70',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_masthead_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'section',
          'ow-cl' => 'content with-dark-blue-background with-white-notch title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_box_1_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text promo-box-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_box_2_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text promo-box-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_box_3_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text promo-box-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_box_4_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text promo-box-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_box_1_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promo_box_2_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promo_box_3_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promo_box_4_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promo_box_1_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_box_2_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_box_3_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promo_link_4_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promotional_1_subtitle' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'small',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promotional_1_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promotional_1_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promotional_1_tagline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-blue-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promotional_1_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promotional_2_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-blue-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promotional_2_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promotional_2_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promotional_3_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promotional_3_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-blue-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promotional_3_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promotional_4_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-blue-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promotional_4_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promotional_4_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_promotional_1_freestyle' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promotional_2_freestyle' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promotional_3_freestyle' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_promotional_4_freestyle' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|promotional_landing_page|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ab_display_suite_layouts_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'breadcrumbs';
  $ds_field->label = 'Breadcrumbs';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'easy_breadcrumb|easy_breadcrumb',
    'block_render' => '3',
  );
  $export['breadcrumbs'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'corporate_responsibility_block';
  $ds_field->label = 'Corporate Responsibility Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|corporate_responsiblity-block',
    'block_render' => '2',
  );
  $export['corporate_responsibility_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'events';
  $ds_field->label = 'Events';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|events-block',
    'block_render' => '2',
  );
  $export['events'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'in_the_news';
  $ds_field->label = 'In the News';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|in_the_news-block',
    'block_render' => '2',
  );
  $export['in_the_news'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'small';
  $ds_field->label = 'Small';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<small>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['small'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ab_display_suite_layouts_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|events-block-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'events-block-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['ds_views|events-block-fields|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|event_view';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'event_view';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_event_view_wrapper',
        1 => 'field_event_month',
        2 => 'field_event_city',
        3 => 'field_event_state',
        4 => 'title',
        5 => 'group_event_location',
        6 => 'group_event_date',
        7 => 'group_event_month_wrapper',
        8 => 'field_event_day',
      ),
    ),
    'fields' => array(
      'group_event_view_wrapper' => 'ds_content',
      'field_event_month' => 'ds_content',
      'field_event_city' => 'ds_content',
      'field_event_state' => 'ds_content',
      'title' => 'ds_content',
      'group_event_location' => 'ds_content',
      'group_event_date' => 'ds_content',
      'group_event_month_wrapper' => 'ds_content',
      'field_event_day' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|event|event_view'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|informational_gateway_item|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'informational_gateway_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_headline_image',
        2 => 'field_headline_subtitle',
        3 => 'field_headline_title',
        4 => 'field_headline_description',
        5 => 'field_slideshow_image',
        6 => 'field_slideshow_title',
        7 => 'field_slideshow_description',
        8 => 'field_slideshow_order',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_headline_image' => 'ds_content',
      'field_headline_subtitle' => 'ds_content',
      'field_headline_title' => 'ds_content',
      'field_headline_description' => 'ds_content',
      'field_slideshow_image' => 'ds_content',
      'field_slideshow_title' => 'ds_content',
      'field_slideshow_description' => 'ds_content',
      'field_slideshow_order' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|informational_gateway_item|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|informational_gateway_item|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'informational_gateway_item';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'group_headline_section',
        2 => 'body',
        3 => 'path',
        4 => 'field_slideshow_image',
        5 => 'field_slideshow_title',
        6 => 'group_headline_content',
        7 => 'field_slideshow_description',
        8 => 'field_slideshow_order',
        9 => 'group_slideshow_content',
        10 => 'field_headline_title',
        11 => 'field_headline_image',
        12 => 'field_headline_subtitle',
        13 => 'field_headline_tagline',
        14 => 'field_headline_description',
      ),
      'hidden' => array(
        15 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_headline_section' => 'ds_content',
      'body' => 'ds_content',
      'path' => 'ds_content',
      'field_slideshow_image' => 'ds_content',
      'field_slideshow_title' => 'ds_content',
      'group_headline_content' => 'ds_content',
      'field_slideshow_description' => 'ds_content',
      'field_slideshow_order' => 'ds_content',
      'group_slideshow_content' => 'ds_content',
      'field_headline_title' => 'ds_content',
      'field_headline_image' => 'ds_content',
      'field_headline_subtitle' => 'ds_content',
      'field_headline_tagline' => 'ds_content',
      'field_headline_description' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|informational_gateway_item|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|informational_gateway_item|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'informational_gateway_item';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_headline_section',
        1 => 'events',
        2 => 'corporate_responsibility_block',
        3 => 'body',
        4 => 'field_headline_subtitle',
        5 => 'field_headline_tagline',
        6 => 'field_headline_description',
        7 => 'group_headline_container',
        8 => 'group_headline_row1',
        9 => 'field_headline_image',
        10 => 'group_headline_row2',
        11 => 'group_hl_fresstyle_wrapper',
        12 => 'group_headline_row3',
        13 => 'group_headline_title_wrapper',
        14 => 'field_headline_title',
        15 => 'group_headline_image_wrapper',
        16 => 'group_headline_text_wrapper',
        17 => 'group_in_the_news_wrapper',
        18 => 'in_the_news',
        19 => 'group_corp_responsibility',
        20 => 'group_events_wrapper',
      ),
    ),
    'fields' => array(
      'group_headline_section' => 'ds_content',
      'events' => 'ds_content',
      'corporate_responsibility_block' => 'ds_content',
      'body' => 'ds_content',
      'field_headline_subtitle' => 'ds_content',
      'field_headline_tagline' => 'ds_content',
      'field_headline_description' => 'ds_content',
      'group_headline_container' => 'ds_content',
      'group_headline_row1' => 'ds_content',
      'field_headline_image' => 'ds_content',
      'group_headline_row2' => 'ds_content',
      'group_hl_fresstyle_wrapper' => 'ds_content',
      'group_headline_row3' => 'ds_content',
      'group_headline_title_wrapper' => 'ds_content',
      'field_headline_title' => 'ds_content',
      'group_headline_image_wrapper' => 'ds_content',
      'group_headline_text_wrapper' => 'ds_content',
      'group_in_the_news_wrapper' => 'ds_content',
      'in_the_news' => 'ds_content',
      'group_corp_responsibility' => 'ds_content',
      'group_events_wrapper' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|informational_gateway_item|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|promotional_landing_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'promotional_landing_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_masthead_body',
        1 => 'group_promo_masthead',
        2 => 'field_promo_box_1_title',
        3 => 'group_promo_section1',
        4 => 'field_promo_box_1_body',
        5 => 'field_promo_box_1_link',
        6 => 'field_promotional_1_subtitle',
        7 => 'field_promo_box_2_title',
        8 => 'field_promotional_1_title',
        9 => 'field_promotional_1_image',
        10 => 'group_promo_section1_img_wrapper',
        11 => 'field_promo_box_2_body',
        12 => 'field_promotional_1_tagline',
        13 => 'field_promo_box_3_title',
        14 => 'field_promo_box_4_title',
        15 => 'field_promo_box_2_link',
        16 => 'field_promotional_1_description',
        17 => 'field_promo_box_3_body',
        18 => 'group_promo_masthead_row2_col1',
        19 => 'field_promo_box_3_link',
        20 => 'group_promo_box1',
        21 => 'group_promo_masthead_row1_col1',
        22 => 'group_promo_masthead_container',
        23 => 'group_promo_masthead_row1',
        24 => 'field_promotional_1_freestyle',
        25 => 'field_promo_box_4_body',
        26 => 'group_promo_box2',
        27 => 'group_promo_masthead_row2',
        28 => 'group_promo_box3',
        29 => 'field_promo_link_4_link',
        30 => 'group_promo_box4',
        31 => 'group_promo_title_wrapper',
        32 => 'group_promo_boxes_row',
        33 => 'field_breadcrumbs',
        34 => 'title',
        35 => 'group_promo_section1_container',
        36 => 'group_promo_section1_titles',
        37 => 'group_promo_section1_row1_c1',
        38 => 'group_promo_section1_row1',
        39 => 'group_promo_section1_row2',
      ),
    ),
    'fields' => array(
      'field_masthead_body' => 'ds_content',
      'group_promo_masthead' => 'ds_content',
      'field_promo_box_1_title' => 'ds_content',
      'group_promo_section1' => 'ds_content',
      'field_promo_box_1_body' => 'ds_content',
      'field_promo_box_1_link' => 'ds_content',
      'field_promotional_1_subtitle' => 'ds_content',
      'field_promo_box_2_title' => 'ds_content',
      'field_promotional_1_title' => 'ds_content',
      'field_promotional_1_image' => 'ds_content',
      'group_promo_section1_img_wrapper' => 'ds_content',
      'field_promo_box_2_body' => 'ds_content',
      'field_promotional_1_tagline' => 'ds_content',
      'field_promo_box_3_title' => 'ds_content',
      'field_promo_box_4_title' => 'ds_content',
      'field_promo_box_2_link' => 'ds_content',
      'field_promotional_1_description' => 'ds_content',
      'field_promo_box_3_body' => 'ds_content',
      'group_promo_masthead_row2_col1' => 'ds_content',
      'field_promo_box_3_link' => 'ds_content',
      'group_promo_box1' => 'ds_content',
      'group_promo_masthead_row1_col1' => 'ds_content',
      'group_promo_masthead_container' => 'ds_content',
      'group_promo_masthead_row1' => 'ds_content',
      'field_promotional_1_freestyle' => 'ds_content',
      'field_promo_box_4_body' => 'ds_content',
      'group_promo_box2' => 'ds_content',
      'group_promo_masthead_row2' => 'ds_content',
      'group_promo_box3' => 'ds_content',
      'field_promo_link_4_link' => 'ds_content',
      'group_promo_box4' => 'ds_content',
      'group_promo_title_wrapper' => 'ds_content',
      'group_promo_boxes_row' => 'ds_content',
      'field_breadcrumbs' => 'ds_content',
      'title' => 'ds_content',
      'group_promo_section1_container' => 'ds_content',
      'group_promo_section1_titles' => 'ds_content',
      'group_promo_section1_row1_c1' => 'ds_content',
      'group_promo_section1_row1' => 'ds_content',
      'group_promo_section1_row2' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|promotional_landing_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|promotional_landing_page|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'promotional_landing_page';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_promo_boxes',
        1 => 'title',
        2 => 'field_breadcrumbs',
        3 => 'path',
        4 => 'group_promo_box1',
        5 => 'group_promo_sections',
        6 => 'field_masthead_body',
        7 => 'field_promotion_category',
        8 => 'group_promo_box2',
        9 => 'field_promo_box_2_title',
        10 => 'field_promotional_1_subtitle',
        11 => 'field_promo_box_1_title',
        12 => 'group_promo_section1',
        13 => 'group_promo_box3',
        14 => 'group_promo_section2',
        15 => 'field_promotional_1_title',
        16 => 'field_promo_box_1_body',
        18 => 'group_promo_box4',
        19 => 'field_promo_box_2_body',
        20 => 'group_promo_section3',
        21 => 'group_promo_masthead_freestyle',
        22 => 'field_promo_box_3_title',
        23 => 'field_promo_box_2_link',
        24 => 'field_promotional_1_image',
        25 => 'field_promo_box_1_link',
        26 => 'field_promo_box_3_body',
        27 => 'field_promotional_4_title',
        28 => 'group_promo_section4',
        29 => 'field_promotional_1_tagline',
        30 => 'field_promo_box_3_link',
        31 => 'field_promotional_1_description',
        32 => 'field_promotional_4_body',
        33 => 'field_promotional_4_image',
        34 => 'field_promotional_1_freestyle',
        35 => 'field_promo_box_4_title',
        36 => 'field_promotional_4_freestyle',
        37 => 'field_promo_box_4_body',
        38 => 'field_promo_link_4_link',
        39 => 'field_promotional_2_title',
        40 => 'field_promotional_2_body',
        41 => 'field_promotional_2_image',
        42 => 'field_promotional_2_freestyle',
        43 => 'field_promotional_3_title',
        44 => 'field_promotional_3_body',
        45 => 'field_promotional_3_image',
        46 => 'field_promotional_3_freestyle',
      ),
      'hidden' => array(
        17 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_promo_boxes' => 'ds_content',
      'title' => 'ds_content',
      'field_breadcrumbs' => 'ds_content',
      'path' => 'ds_content',
      'group_promo_box1' => 'ds_content',
      'group_promo_sections' => 'ds_content',
      'field_masthead_body' => 'ds_content',
      'field_promotion_category' => 'ds_content',
      'group_promo_box2' => 'ds_content',
      'field_promo_box_2_title' => 'ds_content',
      'field_promotional_1_subtitle' => 'ds_content',
      'field_promo_box_1_title' => 'ds_content',
      'group_promo_section1' => 'ds_content',
      'group_promo_box3' => 'ds_content',
      'group_promo_section2' => 'ds_content',
      'field_promotional_1_title' => 'ds_content',
      'field_promo_box_1_body' => 'ds_content',
      '_add_existing_field' => 'hidden',
      'group_promo_box4' => 'ds_content',
      'field_promo_box_2_body' => 'ds_content',
      'group_promo_section3' => 'ds_content',
      'group_promo_masthead_freestyle' => 'ds_content',
      'field_promo_box_3_title' => 'ds_content',
      'field_promo_box_2_link' => 'ds_content',
      'field_promotional_1_image' => 'ds_content',
      'field_promo_box_1_link' => 'ds_content',
      'field_promo_box_3_body' => 'ds_content',
      'field_promotional_4_title' => 'ds_content',
      'group_promo_section4' => 'ds_content',
      'field_promotional_1_tagline' => 'ds_content',
      'field_promo_box_3_link' => 'ds_content',
      'field_promotional_1_description' => 'ds_content',
      'field_promotional_4_body' => 'ds_content',
      'field_promotional_4_image' => 'ds_content',
      'field_promotional_1_freestyle' => 'ds_content',
      'field_promo_box_4_title' => 'ds_content',
      'field_promotional_4_freestyle' => 'ds_content',
      'field_promo_box_4_body' => 'ds_content',
      'field_promo_link_4_link' => 'ds_content',
      'field_promotional_2_title' => 'ds_content',
      'field_promotional_2_body' => 'ds_content',
      'field_promotional_2_image' => 'ds_content',
      'field_promotional_2_freestyle' => 'ds_content',
      'field_promotional_3_title' => 'ds_content',
      'field_promotional_3_body' => 'ds_content',
      'field_promotional_3_image' => 'ds_content',
      'field_promotional_3_freestyle' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|promotional_landing_page|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|promotional_landing_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'promotional_landing_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_masthead_body',
        1 => 'group_promo_masthead',
        2 => 'group_promo_section1',
        3 => 'group_promo_masthead_container',
        4 => 'group_promo_section2',
        5 => 'group_promo_section3',
        6 => 'group_promo_section4',
        7 => 'field_promo_box_2_title',
        8 => 'field_promo_box_2_body',
        9 => 'field_promo_box_3_title',
        10 => 'field_promo_box_2_link',
        11 => 'field_promo_box_3_body',
        12 => 'field_promo_box_3_link',
        13 => 'field_promo_box_4_title',
        14 => 'field_promo_box_4_body',
        15 => 'field_promo_link_4_link',
        16 => 'group_promo_masthead_row2_col1',
        17 => 'group_promo_masthead_row1_col1',
        18 => 'field_promotional_4_image',
        19 => 'group_promo_masthead_row1',
        20 => 'group_promo_section4_container',
        21 => 'field_promo_box_1_title',
        22 => 'group_promo_masthead_row2',
        23 => 'field_promotional_4_title',
        24 => 'field_promo_box_1_body',
        25 => 'field_promo_box_1_link',
        26 => 'field_promotional_4_body',
        27 => 'group_promo_section3_container',
        28 => 'field_promotional_3_image',
        29 => 'group_promo_section3_row1_c1',
        30 => 'field_promotional_1_image',
        31 => 'group_promo_section3_img_wrapper',
        32 => 'group_promo_boxes_row',
        33 => 'group_promo_section3_txt_wrapper',
        34 => 'field_promotional_1_subtitle',
        35 => 'field_promotional_3_title',
        36 => 'group_promo_box1',
        37 => 'field_promotional_3_body',
        38 => 'field_promotional_1_title',
        39 => 'field_promotional_3_freestyle',
        40 => 'group_promo_box2',
        41 => 'group_promo_box3',
        42 => 'group_promo_box4',
        43 => 'group_promo_section1_img_wrapper',
        44 => 'group_promo_section1_txt_wrapper',
        45 => 'field_promotional_1_tagline',
        46 => 'field_promotional_1_description',
        47 => 'field_promotional_1_freestyle',
        48 => 'group_promo_section1_container',
        49 => 'group_promo_section1_titles',
        50 => 'group_promo_section1_row1',
        51 => 'group_promo_section1_row1_c1',
        52 => 'group_promo_section1_row2',
        53 => 'group_promo_section2_container',
        54 => 'field_promotional_2_title',
        55 => 'field_promotional_2_body',
        56 => 'field_promotional_2_image',
        57 => 'group_promo_section2_row1_c1',
        58 => 'group_promo_section2_txt_wrapper',
        59 => 'group_promo_section2_img_wrapper',
        60 => 'field_promotional_2_freestyle',
        61 => 'group_promo_section4_row1_c1',
        62 => 'group_promo_section4_txt_wrapper',
        63 => 'group_promo_section4_img_wrapper',
        64 => 'field_promotional_4_freestyle',
        65 => 'group_promo_masthead_title',
        66 => 'breadcrumbs',
        67 => 'title',
      ),
    ),
    'fields' => array(
      'field_masthead_body' => 'ds_content',
      'group_promo_masthead' => 'ds_content',
      'group_promo_section1' => 'ds_content',
      'group_promo_masthead_container' => 'ds_content',
      'group_promo_section2' => 'ds_content',
      'group_promo_section3' => 'ds_content',
      'group_promo_section4' => 'ds_content',
      'field_promo_box_2_title' => 'ds_content',
      'field_promo_box_2_body' => 'ds_content',
      'field_promo_box_3_title' => 'ds_content',
      'field_promo_box_2_link' => 'ds_content',
      'field_promo_box_3_body' => 'ds_content',
      'field_promo_box_3_link' => 'ds_content',
      'field_promo_box_4_title' => 'ds_content',
      'field_promo_box_4_body' => 'ds_content',
      'field_promo_link_4_link' => 'ds_content',
      'group_promo_masthead_row2_col1' => 'ds_content',
      'group_promo_masthead_row1_col1' => 'ds_content',
      'field_promotional_4_image' => 'ds_content',
      'group_promo_masthead_row1' => 'ds_content',
      'group_promo_section4_container' => 'ds_content',
      'field_promo_box_1_title' => 'ds_content',
      'group_promo_masthead_row2' => 'ds_content',
      'field_promotional_4_title' => 'ds_content',
      'field_promo_box_1_body' => 'ds_content',
      'field_promo_box_1_link' => 'ds_content',
      'field_promotional_4_body' => 'ds_content',
      'group_promo_section3_container' => 'ds_content',
      'field_promotional_3_image' => 'ds_content',
      'group_promo_section3_row1_c1' => 'ds_content',
      'field_promotional_1_image' => 'ds_content',
      'group_promo_section3_img_wrapper' => 'ds_content',
      'group_promo_boxes_row' => 'ds_content',
      'group_promo_section3_txt_wrapper' => 'ds_content',
      'field_promotional_1_subtitle' => 'ds_content',
      'field_promotional_3_title' => 'ds_content',
      'group_promo_box1' => 'ds_content',
      'field_promotional_3_body' => 'ds_content',
      'field_promotional_1_title' => 'ds_content',
      'field_promotional_3_freestyle' => 'ds_content',
      'group_promo_box2' => 'ds_content',
      'group_promo_box3' => 'ds_content',
      'group_promo_box4' => 'ds_content',
      'group_promo_section1_img_wrapper' => 'ds_content',
      'group_promo_section1_txt_wrapper' => 'ds_content',
      'field_promotional_1_tagline' => 'ds_content',
      'field_promotional_1_description' => 'ds_content',
      'field_promotional_1_freestyle' => 'ds_content',
      'group_promo_section1_container' => 'ds_content',
      'group_promo_section1_titles' => 'ds_content',
      'group_promo_section1_row1' => 'ds_content',
      'group_promo_section1_row1_c1' => 'ds_content',
      'group_promo_section1_row2' => 'ds_content',
      'group_promo_section2_container' => 'ds_content',
      'field_promotional_2_title' => 'ds_content',
      'field_promotional_2_body' => 'ds_content',
      'field_promotional_2_image' => 'ds_content',
      'group_promo_section2_row1_c1' => 'ds_content',
      'group_promo_section2_txt_wrapper' => 'ds_content',
      'group_promo_section2_img_wrapper' => 'ds_content',
      'field_promotional_2_freestyle' => 'ds_content',
      'group_promo_section4_row1_c1' => 'ds_content',
      'group_promo_section4_txt_wrapper' => 'ds_content',
      'group_promo_section4_img_wrapper' => 'ds_content',
      'field_promotional_4_freestyle' => 'ds_content',
      'group_promo_masthead_title' => 'ds_content',
      'breadcrumbs' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|promotional_landing_page|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ab_display_suite_layouts_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'event_view';
  $ds_view_mode->label = 'Event View';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['event_view'] = $ds_view_mode;

  return $export;
}
