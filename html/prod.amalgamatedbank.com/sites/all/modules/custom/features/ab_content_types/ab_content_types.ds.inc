<?php
/**
 * @file
 * ab_content_types.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ab_content_types_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|basic_page_with_hero_image|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'basic_page_with_hero_image';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'lead',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_quote' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'blockquote',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_quote_source' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'cite',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|basic_page_with_hero_image|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|basic_page_with_image|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'basic_page_with_image';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'with-blue-text',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
    'field_basic_page_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image-responsive',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_published' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_basic_quote' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'blockquote',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_basic_quote_source' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'cite',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_basic_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'p',
          'ow-cl' => 'lead',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_share_widget_basic' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_share_widget_basic_main' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_by' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|basic_page_with_image|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|front_page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'front_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|front_page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|front_page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'front_page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'small',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_headline' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|front_page|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_detail_page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_detail_page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_primary_headline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => 'with-blue-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_secondary_headline' => array(
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
    'field_tab_1_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_tab_2_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_tab_3_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_content_spacer_details' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_modal_control_button' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_modal_title' => array(
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
    'field_modal_header_close_button' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'pull-right',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_modal_footer_close_button' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_tab_1_section_2_header' => array(
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
    'field_tab_1_section_2_box_1_titl' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-heading',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_tab_1_section_2_box_2_titl' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-heading',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_tab_1_section_2_box_3_titl' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-heading',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_tab_1_section_2_box_4_titl' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-heading',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_tab_1_section_2_box_1_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-body',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_tab_1_section_2_box_2_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-body',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_tab_1_section_2_box_3_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-body',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_tab_1_section_2_box_4_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-body',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_tab_1_section_2_box_1_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-footer',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_tab_1_section_2_box_2_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-footer',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_tab_1_section_2_box_4_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'panel-footer',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|product_detail_page|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_landing_page_freestyle|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_landing_page_freestyle';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|product_landing_page_freestyle|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_landing_page_freestyle|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_landing_page_freestyle';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '22',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'col-md-12',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_landing_subtitle' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'landing-subtitle',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_features_section' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'features-section',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|product_landing_page_freestyle|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_landing_page_strict|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_landing_page_strict';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
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
    'field_product_landing_page_paren' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_customer_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'strong',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_customer_details' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_customer_story_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_placard_1_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_placard_2_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_placard_3_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_placard_1_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_placard_2_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_placard_1_link_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_placard_2_link_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_placard_3_link_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_placard_1_link_2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_placard_2_link_2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_placard_3_link_2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_masthead_main_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_features_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_features_link_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_features_link_2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_features_link_3' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_features_link_4' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_content_subtitle' => array(
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
    'field_panel_1_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_panel_1_body' => array(
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
    'field_panel_1_link' => array(
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
    'field_panel_2_link' => array(
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
    'field_panel_3_quote' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_panel_3_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'strong',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_panel_3_author_job' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_panel_4_link' => array(
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
    'field_panel_2_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_panel_2_body' => array(
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
    'field_panel_4_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_panel_4_body' => array(
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
    'field_panel_top_heading' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h4',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_panel_top_description' => array(
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
    'field_panel_top_link' => array(
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
    'field_panel_bottom_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_panel_bottom_link' => array(
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
    'field_quotation_marks' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_masthead_compare_link' => array(
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
  $export['node|product_landing_page_strict|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_tout_item|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_tout_item';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|product_tout_item|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product_tout_item|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product_tout_item';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_product_tout_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|product_tout_item|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|segment_landing_page_freestyle|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'segment_landing_page_freestyle';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_segment_section_white' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_segment_section_grey' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|segment_landing_page_freestyle|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|segment_landing_page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'segment_landing_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'with-blue-text',
        'ft' => array(),
        'field_formatter_class' => 'with-blue-text',
      ),
    ),
  );
  $export['node|segment_landing_page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|segment_landing_page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'segment_landing_page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
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
    'field_s1_main_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => 'with-blue-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s2_main_title' => array(
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
    'field_s2_subtitle' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_s2_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'image-responsive',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s2_body_text' => array(
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
    'field_s2_link' => array(
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
    'field_s1_p1_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s1_p1_body' => array(
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
    'field_s1_p1_link' => array(
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
    'field_s1_p2_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s1_p3_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s1_p2_body' => array(
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
    'field_s1_p3_body' => array(
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
    'field_s1_p2_link' => array(
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
    'field_s1_p3_link' => array(
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
    'field_s3_p1_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s3_p2_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s3_p3_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s5_p1_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s5_p2_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s5_p3_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s3_main_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => 'with-blue-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s5_main_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => 'with-blue-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s3_p1_body' => array(
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
    'field_s3_p2_body' => array(
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
    'field_s3_p3_body' => array(
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
    'field_s5_p1_body' => array(
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
    'field_s5_p2_body' => array(
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
    'field_s5_p3_body' => array(
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
    'field_s3_p1_link' => array(
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
    'field_s3_p2_link' => array(
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
    'field_s3_p3_link' => array(
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
    'field_s5_p1_link' => array(
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
    'field_s5_p2_link' => array(
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
    'field_s5_p3_link' => array(
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
    'field_s1_features_title' => array(
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
    'field_s3_features_title' => array(
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
    'field_s5_features_title' => array(
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
    'field_s1_features_link_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'li',
          'ow-cl' => 'n1',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s3_features_link_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'li',
          'ow-cl' => 'n1',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s5_features_link_1' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'li',
          'ow-cl' => 'n1',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s1_features_link_2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'li',
          'ow-cl' => 'n2',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s3_features_link_2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'li',
          'ow-cl' => 'n2',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s5_features_link_2' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'li',
          'ow-cl' => 'n2',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s1_features_link_3' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'li',
          'ow-cl' => 'n3',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s3_features_link_3' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'li',
          'ow-cl' => 'n3',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s5_features_link_3' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'li',
          'ow-cl' => 'n3',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s1_features_link_4' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'li',
          'ow-cl' => 'n4',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s3_features_link_4' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'li',
          'ow-cl' => 'n4',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s5_features_link_4' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'li',
          'ow-cl' => 'n4',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s4_main_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_s4_quote' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-bue-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_s4_quote_author' => array(
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
    'field_s4_link' => array(
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
    'field_segment_page_subtitle' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_masthead_section_1_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_masthead_section_2_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'with-orange-text',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_masthead_section_1_body' => array(
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
    'field_masthead_section_2_body' => array(
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
    'field_masthead_section_1_link' => array(
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
    'field_masthead_section_2_link' => array(
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
    'field_masthead_quote' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'blockquote',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_masthead_quote_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'cite',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_masthead_quote_link' => array(
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
    'field_masthead_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
  );
  $export['node|segment_landing_page|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => 'with-orange-text',
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'ds_user_picture' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'ds_picture_medium',
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ab_content_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page_with_hero_image|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page_with_hero_image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_summary',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_summary' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|basic_page_with_hero_image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page_with_hero_image|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page_with_hero_image';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_left_side',
        1 => 'group_right_side',
        2 => 'path',
        3 => 'field_share_widget',
        4 => 'field_quote',
        5 => 'field_quote_source',
        7 => 'field_share_widget_main',
        8 => 'group_share_section',
        9 => 'title',
        10 => 'field_summary',
        11 => 'group_quote_wrapper',
        12 => 'body',
      ),
      'hidden' => array(
        6 => 'field_spacer',
        13 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_left_side' => 'ds_content',
      'group_right_side' => 'ds_content',
      'path' => 'ds_content',
      'field_share_widget' => 'ds_content',
      'field_quote' => 'ds_content',
      'field_quote_source' => 'ds_content',
      'field_spacer' => 'hidden',
      'field_share_widget_main' => 'ds_content',
      'group_share_section' => 'ds_content',
      'title' => 'ds_content',
      'field_summary' => 'ds_content',
      'group_quote_wrapper' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|basic_page_with_hero_image|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page_with_hero_image|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page_with_hero_image';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_left_side',
        1 => 'field_summary',
        2 => 'field_share_widget_main',
        3 => 'body',
        4 => 'field_share_widget',
        5 => 'field_quote',
        6 => 'field_quote_source',
        7 => 'group_right_side',
        8 => 'group_share_section',
        9 => 'group_quote_wrapper',
      ),
    ),
    'fields' => array(
      'group_left_side' => 'ds_content',
      'field_summary' => 'ds_content',
      'field_share_widget_main' => 'ds_content',
      'body' => 'ds_content',
      'field_share_widget' => 'ds_content',
      'field_quote' => 'ds_content',
      'field_quote_source' => 'ds_content',
      'group_right_side' => 'ds_content',
      'group_share_section' => 'ds_content',
      'group_quote_wrapper' => 'ds_content',
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
  $export['node|basic_page_with_hero_image|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page_with_image|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page_with_image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_date_byline',
        1 => 'field_basic_page_image',
        2 => 'body',
        3 => 'field_published',
        4 => 'field_basic_summary',
        5 => 'field_by',
      ),
    ),
    'fields' => array(
      'group_date_byline' => 'ds_content',
      'field_basic_page_image' => 'ds_content',
      'body' => 'ds_content',
      'field_published' => 'ds_content',
      'field_basic_summary' => 'ds_content',
      'field_by' => 'ds_content',
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
  $export['node|basic_page_with_image|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page_with_image|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page_with_image';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'group_date_byline',
        2 => 'field_published',
        3 => 'field_basic_page_image',
        4 => 'field_by',
        5 => 'field_basic_summary',
        6 => 'body',
        7 => 'field_basic_quote',
        8 => 'field_basic_quote_source',
        9 => 'field_tagged',
        10 => 'field_share_widget_basic',
        11 => 'path',
        12 => 'field_share_widget_basic_main',
      ),
      'hidden' => array(
        13 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_date_byline' => 'ds_content',
      'field_published' => 'ds_content',
      'field_basic_page_image' => 'ds_content',
      'field_by' => 'ds_content',
      'field_basic_summary' => 'ds_content',
      'body' => 'ds_content',
      'field_basic_quote' => 'ds_content',
      'field_basic_quote_source' => 'ds_content',
      'field_tagged' => 'ds_content',
      'field_share_widget_basic' => 'ds_content',
      'path' => 'ds_content',
      'field_share_widget_basic_main' => 'ds_content',
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
  $export['node|basic_page_with_image|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|basic_page_with_image|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'basic_page_with_image';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_left_side',
        1 => 'field_share_widget_basic',
        2 => 'field_basic_quote',
        3 => 'field_basic_quote_source',
        4 => 'field_share_widget_basic_main',
        5 => 'title',
        6 => 'group_date_byline',
        7 => 'field_basic_page_image',
        8 => 'group_right_side',
        9 => 'group_share_section',
        10 => 'field_published',
        11 => 'field_by',
        12 => 'group_quote_wrapper',
        13 => 'field_basic_summary',
        14 => 'body',
      ),
    ),
    'fields' => array(
      'group_left_side' => 'ds_content',
      'field_share_widget_basic' => 'ds_content',
      'field_basic_quote' => 'ds_content',
      'field_basic_quote_source' => 'ds_content',
      'field_share_widget_basic_main' => 'ds_content',
      'title' => 'ds_content',
      'group_date_byline' => 'ds_content',
      'field_basic_page_image' => 'ds_content',
      'group_right_side' => 'ds_content',
      'group_share_section' => 'ds_content',
      'field_published' => 'ds_content',
      'field_by' => 'ds_content',
      'group_quote_wrapper' => 'ds_content',
      'field_basic_summary' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|basic_page_with_image|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|front_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'front_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_headline',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_headline' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|front_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|front_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'front_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_front_page_titles',
        1 => 'title',
        2 => 'field_headline',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'group_front_page_titles' => 'ds_content',
      'title' => 'ds_content',
      'field_headline' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|front_page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_detail_page|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_detail_page';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_primary_headline',
        2 => 'field_secondary_headline',
        3 => 'path',
        4 => 'group_product_details_tabs',
        5 => 'field_content_spacer_details',
        6 => 'field_tab_1_body',
        7 => 'group_product_details_tab1',
        8 => 'field_tab_2_body',
        9 => 'group_tab1_boxes',
        10 => 'group_modal_window',
        11 => 'field_modal_control_button',
        12 => 'field_tab_3_body',
        13 => 'field_modal_title',
        14 => 'group_product_details_tab2',
        15 => 'field_modal_header_close_button',
        16 => 'group_product_details_tab3',
        17 => 'field_compare_popup',
        18 => 'field_modal_footer_close_button',
        19 => 'field_tab_1_section_2_header',
        20 => 'field_tab_1_section_2_box_1_icon',
        21 => 'group_t1s2b1',
        22 => 'field_tab_1_section_2_box_2_icon',
        23 => 'field_tab_1_section_2_box_1_titl',
        24 => 'field_tab_1_section_2_box_3_icon',
        25 => 'field_tab_1_section_2_box_2_titl',
        26 => 'group_t1s2b2',
        27 => 'field_tab_1_section_2_box_1_body',
        28 => 'group_t1s2b3',
        29 => 'field_tab_1_section_2_box_2_body',
        30 => 'field_tab_1_section_2_box_4_icon',
        31 => 'field_tab_1_section_2_box_3_titl',
        32 => 'field_tab_1_section_2_box_1_link',
        33 => 'group_t1s2b4',
        34 => 'field_tab_1_section_2_box_4_titl',
        35 => 'field_tab_1_section_2_box_3_body',
        36 => 'field_tab_1_section_2_box_2_link',
        37 => 'field_tab_1_section_2_box_3_link',
        38 => 'field_tab_1_section_2_box_4_body',
        39 => 'field_tab_1_body_2',
        40 => 'field_tab_1_section_2_box_4_link',
      ),
      'hidden' => array(
        41 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_primary_headline' => 'ds_content',
      'field_secondary_headline' => 'ds_content',
      'path' => 'ds_content',
      'group_product_details_tabs' => 'ds_content',
      'field_content_spacer_details' => 'ds_content',
      'field_tab_1_body' => 'ds_content',
      'group_product_details_tab1' => 'ds_content',
      'field_tab_2_body' => 'ds_content',
      'group_tab1_boxes' => 'ds_content',
      'group_modal_window' => 'ds_content',
      'field_modal_control_button' => 'ds_content',
      'field_tab_3_body' => 'ds_content',
      'field_modal_title' => 'ds_content',
      'group_product_details_tab2' => 'ds_content',
      'field_modal_header_close_button' => 'ds_content',
      'group_product_details_tab3' => 'ds_content',
      'field_compare_popup' => 'ds_content',
      'field_modal_footer_close_button' => 'ds_content',
      'field_tab_1_section_2_header' => 'ds_content',
      'field_tab_1_section_2_box_1_icon' => 'ds_content',
      'group_t1s2b1' => 'ds_content',
      'field_tab_1_section_2_box_2_icon' => 'ds_content',
      'field_tab_1_section_2_box_1_titl' => 'ds_content',
      'field_tab_1_section_2_box_3_icon' => 'ds_content',
      'field_tab_1_section_2_box_2_titl' => 'ds_content',
      'group_t1s2b2' => 'ds_content',
      'field_tab_1_section_2_box_1_body' => 'ds_content',
      'group_t1s2b3' => 'ds_content',
      'field_tab_1_section_2_box_2_body' => 'ds_content',
      'field_tab_1_section_2_box_4_icon' => 'ds_content',
      'field_tab_1_section_2_box_3_titl' => 'ds_content',
      'field_tab_1_section_2_box_1_link' => 'ds_content',
      'group_t1s2b4' => 'ds_content',
      'field_tab_1_section_2_box_4_titl' => 'ds_content',
      'field_tab_1_section_2_box_3_body' => 'ds_content',
      'field_tab_1_section_2_box_2_link' => 'ds_content',
      'field_tab_1_section_2_box_3_link' => 'ds_content',
      'field_tab_1_section_2_box_4_body' => 'ds_content',
      'field_tab_1_body_2' => 'ds_content',
      'field_tab_1_section_2_box_4_link' => 'ds_content',
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
  $export['node|product_detail_page|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_detail_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_detail_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_modal_footer_close_button',
        1 => 'field_tab_1_section_2_header',
        2 => 'group_pdsb_content_wrapper',
        3 => 'field_modal_title',
        4 => 'group_tab1_row3_col1',
        5 => 'group_panel1_box',
        6 => 'field_content_spacer_details',
        7 => 'group_modal_wrapper',
        8 => 'group_panel2_box',
        9 => 'group_tab1_row3_col2',
        10 => 'group_pdsb_content_row',
        11 => 'field_tab_1_section_2_box_2_icon',
        12 => 'field_tab_1_body',
        13 => 'group_pdsb_content_container',
        14 => 'group_tab1_row3_col3',
        15 => 'field_tab_1_section_2_box_2_titl',
        16 => 'field_tab_2_body',
        17 => 'group_tab1_row3',
        18 => 'group_tab1_row3_col4',
        19 => 'field_tab_1_body_2',
        20 => 'field_tab_1_section_2_box_2_body',
        21 => 'field_tab_3_body',
        22 => 'group_tab1_row3_col5',
        23 => 'field_tab_1_section_2_box_2_link',
        24 => 'group_details_titles_column',
        25 => 'group_details_titles',
        26 => 'group_details_tabs',
        27 => 'field_primary_headline',
        28 => 'field_secondary_headline',
        29 => 'field_modal_control_button',
        30 => 'field_compare_popup',
        31 => 'group_modal_content',
        32 => 'field_tab_1_section_2_box_1_icon',
        33 => 'group_modal_dialog',
        34 => 'group_panel4_box',
        35 => 'group_account_details',
        36 => 'field_tab_1_section_2_box_1_titl',
        37 => 'group_rates',
        38 => 'field_tab_1_section_2_box_4_icon',
        39 => 'group_modal_title',
        40 => 'field_tab_1_section_2_box_1_body',
        41 => 'field_modal_header_close_button',
        42 => 'field_tab_1_section_2_box_4_titl',
        43 => 'field_tab_1_section_2_box_1_link',
        44 => 'group_fees',
        45 => 'field_tab_1_section_2_box_4_body',
        46 => 'group_compare',
        47 => 'group_panel3_box',
        48 => 'field_tab_1_section_2_box_4_link',
        49 => 'field_tab_1_section_2_box_3_icon',
        50 => 'field_tab_1_section_2_box_3_titl',
        51 => 'group_modal_header',
        52 => 'field_tab_1_section_2_box_3_body',
        53 => 'group_modal_body',
        54 => 'field_tab_1_section_2_box_3_link',
        55 => 'group_modal_footer',
      ),
    ),
    'fields' => array(
      'field_modal_footer_close_button' => 'ds_content',
      'field_tab_1_section_2_header' => 'ds_content',
      'group_pdsb_content_wrapper' => 'ds_content',
      'field_modal_title' => 'ds_content',
      'group_tab1_row3_col1' => 'ds_content',
      'group_panel1_box' => 'ds_content',
      'field_content_spacer_details' => 'ds_content',
      'group_modal_wrapper' => 'ds_content',
      'group_panel2_box' => 'ds_content',
      'group_tab1_row3_col2' => 'ds_content',
      'group_pdsb_content_row' => 'ds_content',
      'field_tab_1_section_2_box_2_icon' => 'ds_content',
      'field_tab_1_body' => 'ds_content',
      'group_pdsb_content_container' => 'ds_content',
      'group_tab1_row3_col3' => 'ds_content',
      'field_tab_1_section_2_box_2_titl' => 'ds_content',
      'field_tab_2_body' => 'ds_content',
      'group_tab1_row3' => 'ds_content',
      'group_tab1_row3_col4' => 'ds_content',
      'field_tab_1_body_2' => 'ds_content',
      'field_tab_1_section_2_box_2_body' => 'ds_content',
      'field_tab_3_body' => 'ds_content',
      'group_tab1_row3_col5' => 'ds_content',
      'field_tab_1_section_2_box_2_link' => 'ds_content',
      'group_details_titles_column' => 'ds_content',
      'group_details_titles' => 'ds_content',
      'group_details_tabs' => 'ds_content',
      'field_primary_headline' => 'ds_content',
      'field_secondary_headline' => 'ds_content',
      'field_modal_control_button' => 'ds_content',
      'field_compare_popup' => 'ds_content',
      'group_modal_content' => 'ds_content',
      'field_tab_1_section_2_box_1_icon' => 'ds_content',
      'group_modal_dialog' => 'ds_content',
      'group_panel4_box' => 'ds_content',
      'group_account_details' => 'ds_content',
      'field_tab_1_section_2_box_1_titl' => 'ds_content',
      'group_rates' => 'ds_content',
      'field_tab_1_section_2_box_4_icon' => 'ds_content',
      'group_modal_title' => 'ds_content',
      'field_tab_1_section_2_box_1_body' => 'ds_content',
      'field_modal_header_close_button' => 'ds_content',
      'field_tab_1_section_2_box_4_titl' => 'ds_content',
      'field_tab_1_section_2_box_1_link' => 'ds_content',
      'group_fees' => 'ds_content',
      'field_tab_1_section_2_box_4_body' => 'ds_content',
      'group_compare' => 'ds_content',
      'group_panel3_box' => 'ds_content',
      'field_tab_1_section_2_box_4_link' => 'ds_content',
      'field_tab_1_section_2_box_3_icon' => 'ds_content',
      'field_tab_1_section_2_box_3_titl' => 'ds_content',
      'group_modal_header' => 'ds_content',
      'field_tab_1_section_2_box_3_body' => 'ds_content',
      'group_modal_body' => 'ds_content',
      'field_tab_1_section_2_box_3_link' => 'ds_content',
      'group_modal_footer' => 'ds_content',
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
  $export['node|product_detail_page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_landing_page_freestyle|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_landing_page_freestyle';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_top_section',
        1 => 'field_features_section',
        2 => 'field_landing_subtitle',
        3 => 'title',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'field_top_section' => 'ds_content',
      'field_features_section' => 'ds_content',
      'field_landing_subtitle' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|product_landing_page_freestyle|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_landing_page_freestyle|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_landing_page_freestyle';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_top_section',
        1 => 'field_features_section',
        2 => 'field_landing_subtitle',
        3 => 'title',
        4 => 'body',
        5 => 'path',
      ),
      'hidden' => array(
        6 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_top_section' => 'ds_content',
      'field_features_section' => 'ds_content',
      'field_landing_subtitle' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
      'path' => 'ds_content',
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
  $export['node|product_landing_page_freestyle|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_landing_page_freestyle|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_landing_page_freestyle';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_pl_freestyle_masthead',
        1 => 'group_pl_freestyle_features',
        2 => 'group_pl_freestyle_content',
        3 => 'group_pl_fs_masthead_container',
        4 => 'field_top_section',
        5 => 'group_pl_fs_features_container',
        6 => 'field_features_section',
        7 => 'group_pl_fs_content_container',
        8 => 'group_pl_fs_content_titles_row',
        9 => 'group_pl_fs_content_titles',
        10 => 'group_pl_fs_content_body',
        11 => 'field_landing_subtitle',
        12 => 'title',
        13 => 'body',
      ),
    ),
    'fields' => array(
      'group_pl_freestyle_masthead' => 'ds_content',
      'group_pl_freestyle_features' => 'ds_content',
      'group_pl_freestyle_content' => 'ds_content',
      'group_pl_fs_masthead_container' => 'ds_content',
      'field_top_section' => 'ds_content',
      'group_pl_fs_features_container' => 'ds_content',
      'field_features_section' => 'ds_content',
      'group_pl_fs_content_container' => 'ds_content',
      'group_pl_fs_content_titles_row' => 'ds_content',
      'group_pl_fs_content_titles' => 'ds_content',
      'group_pl_fs_content_body' => 'ds_content',
      'field_landing_subtitle' => 'ds_content',
      'title' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|product_landing_page_freestyle|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_landing_page_strict|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_landing_page_strict';
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
  $export['node|product_landing_page_strict|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_landing_page_strict|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_landing_page_strict';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_compare_table_mobile_instr',
        1 => 'field_content_area_spacer',
        2 => 'field_masthead_compare_link',
        3 => 'group_pl_masthead',
        4 => 'field_compare_table',
        5 => 'group_pl_masthead_subtitle',
        6 => 'group_pl_masthead_titles',
        7 => 'group_pl_masthead_row3_row',
        8 => 'group_pl_compare_table_wrapper',
        9 => 'title',
        10 => 'field_product_landing_page_paren',
        11 => 'group_pl_features_wrapper',
        12 => 'group_pl_content_section_wrapper',
        13 => 'group_pl_masthead_row1',
        14 => 'group_pl_placard_row',
        15 => 'group_pl_para',
        16 => 'group_pl_masthead_top_left',
        17 => 'group_pl_masthead_row1_row',
        18 => 'group_pl_placard_container',
        19 => 'group_pl_masthead_container',
        20 => 'group_pl_placard_wrapper1',
        21 => 'field_masthead_main_image',
        22 => 'group_pl_masthead_top_right',
        23 => 'group_pl_masthead_row2',
        24 => 'group_pl_placard_wrapper2',
        25 => 'group_pl_placard_wrapper3',
        26 => 'group_pl_masthead_row3',
        27 => 'field_customer_story_link',
        28 => 'field_customer_name',
        29 => 'field_customer_details',
        30 => 'field_panel_top_heading',
        31 => 'group_pl_placard1_heading',
        32 => 'group_pl_placard1_panel',
        33 => 'group_pl_placard3_heading',
        34 => 'group_pl_footercontainer1',
        35 => 'group_pl_masthead_row3_container',
        36 => 'group_pl_masthead_bottom',
        37 => 'group_panel1_heading',
        38 => 'group_pl_placard2_heading',
        39 => 'group_pl_placard1_title',
        40 => 'group_pl_placard1_body',
        41 => 'group_pl_placard3_panel',
        42 => 'group_panel1_body',
        43 => 'group_panel_top_left',
        44 => 'group_pl_placard2_panel',
        45 => 'group_pl_placard2_body',
        46 => 'group_pl_placard1_footer',
        47 => 'group_pl_placard3_title',
        48 => 'group_pl_placard3_body',
        49 => 'field_panel_bottom_description',
        50 => 'field_placard_2_title',
        51 => 'group_pl_placard2_footer',
        52 => 'group_pl_placard3_footer',
        53 => 'group_pl_placard2_title',
        54 => 'field_panel_bottom_link',
        55 => 'field_panel_top_description',
        56 => 'group_panel_top_right',
        57 => 'field_panel_1_title',
        58 => 'field_panel_bottom_image',
        59 => 'field_panel_2_title',
        60 => 'field_panel_bottom_heading',
        61 => 'field_panel_1_body',
        62 => 'field_panel_top_link',
        63 => 'field_placard_1_title',
        64 => 'group_pl_footercontainer2',
        65 => 'field_panel_bottom_subheading',
        66 => 'field_panel_top_image',
        67 => 'field_panel_2_body',
        68 => 'field_panel_1_link',
        69 => 'group_panel_bottom_right',
        70 => 'field_panel_2_link',
        71 => 'field_panel_4_title',
        72 => 'field_panel_4_body',
        73 => 'field_panel_4_link',
        74 => 'field_placard_3_title',
        75 => 'group_pl_footercontainer3',
        76 => 'field_placard_2_body',
        77 => 'field_placard_1_body',
        78 => 'field_placard_2_link_1',
        79 => 'field_placard_3_body',
        80 => 'field_placard_2_link_2',
        81 => 'field_placard_3_link_1',
        82 => 'field_placard_1_link_1',
        83 => 'field_placard_1_link_2',
        84 => 'field_placard_3_link_2',
        85 => 'group_features_container',
        86 => 'group_features_row',
        87 => 'group_features_main_text',
        88 => 'group_features_links',
        89 => 'group_features_plink1',
        90 => 'group_features_link1',
        91 => 'group_features_plink2',
        92 => 'group_features_plink3',
        93 => 'group_features_links_row',
        94 => 'group_features_plink4',
        95 => 'field_features_image_1',
        96 => 'field_features_link_1',
        97 => 'field_features_image_2',
        98 => 'group_features_link2',
        99 => 'field_features_image_3',
        100 => 'field_features_link_2',
        101 => 'field_features_link_4',
        102 => 'field_features_image_4',
        103 => 'field_features_link_3',
        104 => 'field_features_title',
        105 => 'group_features_link3',
        106 => 'group_features_link4',
        107 => 'group_container_row1_column',
        108 => 'group_content_container',
        109 => 'group_container_row1',
        110 => 'group_container_row2',
        111 => 'field_content_subtitle',
        112 => 'field_content_title',
        113 => 'group_panel1_wrapper',
        114 => 'group_conent_left_wrapper',
        115 => 'group_left_row',
        116 => 'group_content_titles_wrapper',
        117 => 'group_panel2_wrapper',
        118 => 'group_content_spacer',
        119 => 'group_content_right_wrapper',
        120 => 'group_panel3_wrapper',
        121 => 'group_panel_bottom_left',
        122 => 'group_panel4_wrapper',
        123 => 'field_panel_3_author',
        124 => 'group_panel3_body',
        125 => 'group_panel4_heading',
        126 => 'group_panel2_heading',
        127 => 'field_panel_3_author_job',
        128 => 'group_panel2_body',
        129 => 'group_panel4_body',
        130 => 'group_sidebar_panel_top',
        131 => 'group_panel_quote',
        132 => 'group_sidebar_panel_top_title',
        133 => 'group_sidebar_panel_bottom',
        134 => 'group_right_row',
        135 => 'field_quotation_marks',
        136 => 'group_sidebar_panel_bottom_title',
        137 => 'group_sidebar_panel_top_body',
        138 => 'group_sidebar_top',
        139 => 'group_sidebar_bottom',
        140 => 'group_sidebar_panel_bottom_body',
        141 => 'field_panel_3_quote',
        142 => 'group_landing_cite_wrapper',
        143 => 'field_panel_3_image',
        144 => 'group_compare_table_column',
        145 => 'group_pl_compare_table_container',
        146 => 'group_pl_compare_table_row',
      ),
    ),
    'fields' => array(
      'field_compare_table_mobile_instr' => 'ds_content',
      'field_content_area_spacer' => 'ds_content',
      'field_masthead_compare_link' => 'ds_content',
      'group_pl_masthead' => 'ds_content',
      'field_compare_table' => 'ds_content',
      'group_pl_masthead_subtitle' => 'ds_content',
      'group_pl_masthead_titles' => 'ds_content',
      'group_pl_masthead_row3_row' => 'ds_content',
      'group_pl_compare_table_wrapper' => 'ds_content',
      'title' => 'ds_content',
      'field_product_landing_page_paren' => 'ds_content',
      'group_pl_features_wrapper' => 'ds_content',
      'group_pl_content_section_wrapper' => 'ds_content',
      'group_pl_masthead_row1' => 'ds_content',
      'group_pl_placard_row' => 'ds_content',
      'group_pl_para' => 'ds_content',
      'group_pl_masthead_top_left' => 'ds_content',
      'group_pl_masthead_row1_row' => 'ds_content',
      'group_pl_placard_container' => 'ds_content',
      'group_pl_masthead_container' => 'ds_content',
      'group_pl_placard_wrapper1' => 'ds_content',
      'field_masthead_main_image' => 'ds_content',
      'group_pl_masthead_top_right' => 'ds_content',
      'group_pl_masthead_row2' => 'ds_content',
      'group_pl_placard_wrapper2' => 'ds_content',
      'group_pl_placard_wrapper3' => 'ds_content',
      'group_pl_masthead_row3' => 'ds_content',
      'field_customer_story_link' => 'ds_content',
      'field_customer_name' => 'ds_content',
      'field_customer_details' => 'ds_content',
      'field_panel_top_heading' => 'ds_content',
      'group_pl_placard1_heading' => 'ds_content',
      'group_pl_placard1_panel' => 'ds_content',
      'group_pl_placard3_heading' => 'ds_content',
      'group_pl_footercontainer1' => 'ds_content',
      'group_pl_masthead_row3_container' => 'ds_content',
      'group_pl_masthead_bottom' => 'ds_content',
      'group_panel1_heading' => 'ds_content',
      'group_pl_placard2_heading' => 'ds_content',
      'group_pl_placard1_title' => 'ds_content',
      'group_pl_placard1_body' => 'ds_content',
      'group_pl_placard3_panel' => 'ds_content',
      'group_panel1_body' => 'ds_content',
      'group_panel_top_left' => 'ds_content',
      'group_pl_placard2_panel' => 'ds_content',
      'group_pl_placard2_body' => 'ds_content',
      'group_pl_placard1_footer' => 'ds_content',
      'group_pl_placard3_title' => 'ds_content',
      'group_pl_placard3_body' => 'ds_content',
      'field_panel_bottom_description' => 'ds_content',
      'field_placard_2_title' => 'ds_content',
      'group_pl_placard2_footer' => 'ds_content',
      'group_pl_placard3_footer' => 'ds_content',
      'group_pl_placard2_title' => 'ds_content',
      'field_panel_bottom_link' => 'ds_content',
      'field_panel_top_description' => 'ds_content',
      'group_panel_top_right' => 'ds_content',
      'field_panel_1_title' => 'ds_content',
      'field_panel_bottom_image' => 'ds_content',
      'field_panel_2_title' => 'ds_content',
      'field_panel_bottom_heading' => 'ds_content',
      'field_panel_1_body' => 'ds_content',
      'field_panel_top_link' => 'ds_content',
      'field_placard_1_title' => 'ds_content',
      'group_pl_footercontainer2' => 'ds_content',
      'field_panel_bottom_subheading' => 'ds_content',
      'field_panel_top_image' => 'ds_content',
      'field_panel_2_body' => 'ds_content',
      'field_panel_1_link' => 'ds_content',
      'group_panel_bottom_right' => 'ds_content',
      'field_panel_2_link' => 'ds_content',
      'field_panel_4_title' => 'ds_content',
      'field_panel_4_body' => 'ds_content',
      'field_panel_4_link' => 'ds_content',
      'field_placard_3_title' => 'ds_content',
      'group_pl_footercontainer3' => 'ds_content',
      'field_placard_2_body' => 'ds_content',
      'field_placard_1_body' => 'ds_content',
      'field_placard_2_link_1' => 'ds_content',
      'field_placard_3_body' => 'ds_content',
      'field_placard_2_link_2' => 'ds_content',
      'field_placard_3_link_1' => 'ds_content',
      'field_placard_1_link_1' => 'ds_content',
      'field_placard_1_link_2' => 'ds_content',
      'field_placard_3_link_2' => 'ds_content',
      'group_features_container' => 'ds_content',
      'group_features_row' => 'ds_content',
      'group_features_main_text' => 'ds_content',
      'group_features_links' => 'ds_content',
      'group_features_plink1' => 'ds_content',
      'group_features_link1' => 'ds_content',
      'group_features_plink2' => 'ds_content',
      'group_features_plink3' => 'ds_content',
      'group_features_links_row' => 'ds_content',
      'group_features_plink4' => 'ds_content',
      'field_features_image_1' => 'ds_content',
      'field_features_link_1' => 'ds_content',
      'field_features_image_2' => 'ds_content',
      'group_features_link2' => 'ds_content',
      'field_features_image_3' => 'ds_content',
      'field_features_link_2' => 'ds_content',
      'field_features_link_4' => 'ds_content',
      'field_features_image_4' => 'ds_content',
      'field_features_link_3' => 'ds_content',
      'field_features_title' => 'ds_content',
      'group_features_link3' => 'ds_content',
      'group_features_link4' => 'ds_content',
      'group_container_row1_column' => 'ds_content',
      'group_content_container' => 'ds_content',
      'group_container_row1' => 'ds_content',
      'group_container_row2' => 'ds_content',
      'field_content_subtitle' => 'ds_content',
      'field_content_title' => 'ds_content',
      'group_panel1_wrapper' => 'ds_content',
      'group_conent_left_wrapper' => 'ds_content',
      'group_left_row' => 'ds_content',
      'group_content_titles_wrapper' => 'ds_content',
      'group_panel2_wrapper' => 'ds_content',
      'group_content_spacer' => 'ds_content',
      'group_content_right_wrapper' => 'ds_content',
      'group_panel3_wrapper' => 'ds_content',
      'group_panel_bottom_left' => 'ds_content',
      'group_panel4_wrapper' => 'ds_content',
      'field_panel_3_author' => 'ds_content',
      'group_panel3_body' => 'ds_content',
      'group_panel4_heading' => 'ds_content',
      'group_panel2_heading' => 'ds_content',
      'field_panel_3_author_job' => 'ds_content',
      'group_panel2_body' => 'ds_content',
      'group_panel4_body' => 'ds_content',
      'group_sidebar_panel_top' => 'ds_content',
      'group_panel_quote' => 'ds_content',
      'group_sidebar_panel_top_title' => 'ds_content',
      'group_sidebar_panel_bottom' => 'ds_content',
      'group_right_row' => 'ds_content',
      'field_quotation_marks' => 'ds_content',
      'group_sidebar_panel_bottom_title' => 'ds_content',
      'group_sidebar_panel_top_body' => 'ds_content',
      'group_sidebar_top' => 'ds_content',
      'group_sidebar_bottom' => 'ds_content',
      'group_sidebar_panel_bottom_body' => 'ds_content',
      'field_panel_3_quote' => 'ds_content',
      'group_landing_cite_wrapper' => 'ds_content',
      'field_panel_3_image' => 'ds_content',
      'group_compare_table_column' => 'ds_content',
      'group_pl_compare_table_container' => 'ds_content',
      'group_pl_compare_table_row' => 'ds_content',
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
  $export['node|product_landing_page_strict|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_tout_item|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_tout_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
        2 => 'field_product_tout_subtitle',
        3 => 'field_product_tout_link',
        4 => 'field_product_tout_image',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
      'field_product_tout_subtitle' => 'ds_content',
      'field_product_tout_link' => 'ds_content',
      'field_product_tout_image' => 'ds_content',
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
  $export['node|product_tout_item|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product_tout_item|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product_tout_item';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_product_tout_container',
        1 => 'group_product_tout_wrapper',
        2 => 'group_product_titles_wrapper',
        3 => 'title',
        4 => 'field_product_tout_subtitle',
        5 => 'group_product_details_wrapper',
        6 => 'body',
        7 => 'field_product_tout_link',
        8 => 'group_left_side',
        9 => 'group_right_side',
        10 => 'field_product_tout_image',
      ),
    ),
    'fields' => array(
      'group_product_tout_container' => 'ds_content',
      'group_product_tout_wrapper' => 'ds_content',
      'group_product_titles_wrapper' => 'ds_content',
      'title' => 'ds_content',
      'field_product_tout_subtitle' => 'ds_content',
      'group_product_details_wrapper' => 'ds_content',
      'body' => 'ds_content',
      'field_product_tout_link' => 'ds_content',
      'group_left_side' => 'ds_content',
      'group_right_side' => 'ds_content',
      'field_product_tout_image' => 'ds_content',
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
  $export['node|product_tout_item|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|segment_landing_page_freestyle|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'segment_landing_page_freestyle';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_masthead_wrapper',
        1 => 'group_seg_white_wrapper',
        2 => 'group_seg_grey_wrapper',
        3 => 'field_segment_section_white',
        4 => 'group_seg_white2_wrapper',
        5 => 'body',
        6 => 'group_seg_grey2_wrapper',
        7 => 'field_segment_section_grey',
        8 => 'field_segment_section_grey_2',
        9 => 'field_segment_section_white_2',
      ),
    ),
    'fields' => array(
      'group_masthead_wrapper' => 'ds_content',
      'group_seg_white_wrapper' => 'ds_content',
      'group_seg_grey_wrapper' => 'ds_content',
      'field_segment_section_white' => 'ds_content',
      'group_seg_white2_wrapper' => 'ds_content',
      'body' => 'ds_content',
      'group_seg_grey2_wrapper' => 'ds_content',
      'field_segment_section_grey' => 'ds_content',
      'field_segment_section_grey_2' => 'ds_content',
      'field_segment_section_white_2' => 'ds_content',
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
  $export['node|segment_landing_page_freestyle|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|segment_landing_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'segment_landing_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'body' => 'ds_content',
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
  $export['node|segment_landing_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|segment_landing_page|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'segment_landing_page';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_segment_page_subtitle',
        1 => 'group_masthead_group',
        2 => 'title',
        3 => 'path',
        4 => 'field_s1_features_title',
        5 => 'group_segment_section_1',
        6 => 'group_segment_section_2',
        7 => 'field_s1_features_link_1',
        8 => 'field_s1_features_link_2',
        9 => 'group_segment_section_3',
        10 => 'field_s1_main_title',
        11 => 'field_s1_features_link_3',
        12 => 'field_s3_features_title',
        13 => 'group_segment_section_4',
        14 => 'field_s3_features_link_1',
        15 => 'field_masthead_section_1_title',
        16 => 'group_segment_section_5',
        17 => 'group_s1_panels',
        18 => 'field_s1_features_link_4',
        19 => 'field_s2_image',
        20 => 'field_masthead_section_1_body',
        21 => 'field_s2_main_title',
        22 => 'field_s3_features_link_2',
        23 => 'group_s1_features',
        24 => 'field_masthead_section_1_link',
        25 => 'field_s2_subtitle',
        26 => 'field_s3_features_link_3',
        27 => 'field_s2_body_text',
        28 => 'field_s3_features_link_4',
        29 => 'field_masthead_section_2_title',
        30 => 'field_masthead_section_2_body',
        31 => 'field_s2_link',
        32 => 'field_masthead_section_2_link',
        33 => 'field_masthead_quote',
        34 => 'field_masthead_quote_author',
        35 => 'group_s1_p1_group',
        36 => 'field_masthead_quote_link',
        37 => 'field_s1_p1_title',
        38 => 'group_s1_p2_group',
        39 => 'field_masthead_image',
        40 => 'field_s1_p1_body',
        41 => 'group_s1_p3_group',
        42 => 'field_s1_p2_title',
        43 => 'field_s1_p2_body',
        44 => 'field_s1_p1_link',
        45 => 'field_s1_p2_link',
        46 => 'field_s1_p3_title',
        47 => 'field_s1_p3_body',
        48 => 'field_s1_p3_link',
        49 => 'field_s3_p1_title',
        50 => 'field_s3_p1_body',
        51 => 'field_s3_p2_title',
        52 => 'field_s3_p3_title',
        53 => 'field_s3_p1_link',
        54 => 'field_s3_p2_body',
        55 => 'field_s3_p3_body',
        56 => 'field_s3_p2_link',
        57 => 'field_s3_p3_link',
        58 => 'field_s3_main_title',
        59 => 'group_s3_panels',
        60 => 'group_s3_p1_group',
        61 => 'group_s3_features',
        62 => 'group_s3_p2_group',
        63 => 'group_s3_p3_group',
        64 => 'field_s5_p3_title',
        65 => 'field_s5_p3_body',
        66 => 'field_s5_p3_link',
        67 => 'field_s5_main_title',
        68 => 'group_s5_panels',
        69 => 'field_s5_p2_title',
        70 => 'group_s5_p1_group',
        71 => 'group_s5_features',
        72 => 'group_s5_p2_group',
        73 => 'field_s5_p2_body',
        74 => 'field_s5_p2_link',
        75 => 'group_s5_p3_group',
        76 => 'field_s4_main_image',
        77 => 'field_s4_quote',
        78 => 'field_s4_quote_author',
        79 => 'field_s4_link',
        80 => 'field_s5_p1_title',
        81 => 'field_s5_features_title',
        82 => 'field_s5_p1_body',
        83 => 'field_s5_features_link_1',
        84 => 'field_s5_features_link_2',
        85 => 'field_s5_p1_link',
        86 => 'field_s5_features_link_3',
        87 => 'field_s5_features_link_4',
        89 => 'group_masthead_titles',
        90 => 'group_masthead_column_1',
        91 => 'group_masthead_column_2',
        92 => 'group_masthead_column_3',
      ),
      'hidden' => array(
        88 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_segment_page_subtitle' => 'ds_content',
      'group_masthead_group' => 'ds_content',
      'title' => 'ds_content',
      'path' => 'ds_content',
      'field_s1_features_title' => 'ds_content',
      'group_segment_section_1' => 'ds_content',
      'group_segment_section_2' => 'ds_content',
      'field_s1_features_link_1' => 'ds_content',
      'field_s1_features_link_2' => 'ds_content',
      'group_segment_section_3' => 'ds_content',
      'field_s1_main_title' => 'ds_content',
      'field_s1_features_link_3' => 'ds_content',
      'field_s3_features_title' => 'ds_content',
      'group_segment_section_4' => 'ds_content',
      'field_s3_features_link_1' => 'ds_content',
      'field_masthead_section_1_title' => 'ds_content',
      'group_segment_section_5' => 'ds_content',
      'group_s1_panels' => 'ds_content',
      'field_s1_features_link_4' => 'ds_content',
      'field_s2_image' => 'ds_content',
      'field_masthead_section_1_body' => 'ds_content',
      'field_s2_main_title' => 'ds_content',
      'field_s3_features_link_2' => 'ds_content',
      'group_s1_features' => 'ds_content',
      'field_masthead_section_1_link' => 'ds_content',
      'field_s2_subtitle' => 'ds_content',
      'field_s3_features_link_3' => 'ds_content',
      'field_s2_body_text' => 'ds_content',
      'field_s3_features_link_4' => 'ds_content',
      'field_masthead_section_2_title' => 'ds_content',
      'field_masthead_section_2_body' => 'ds_content',
      'field_s2_link' => 'ds_content',
      'field_masthead_section_2_link' => 'ds_content',
      'field_masthead_quote' => 'ds_content',
      'field_masthead_quote_author' => 'ds_content',
      'group_s1_p1_group' => 'ds_content',
      'field_masthead_quote_link' => 'ds_content',
      'field_s1_p1_title' => 'ds_content',
      'group_s1_p2_group' => 'ds_content',
      'field_masthead_image' => 'ds_content',
      'field_s1_p1_body' => 'ds_content',
      'group_s1_p3_group' => 'ds_content',
      'field_s1_p2_title' => 'ds_content',
      'field_s1_p2_body' => 'ds_content',
      'field_s1_p1_link' => 'ds_content',
      'field_s1_p2_link' => 'ds_content',
      'field_s1_p3_title' => 'ds_content',
      'field_s1_p3_body' => 'ds_content',
      'field_s1_p3_link' => 'ds_content',
      'field_s3_p1_title' => 'ds_content',
      'field_s3_p1_body' => 'ds_content',
      'field_s3_p2_title' => 'ds_content',
      'field_s3_p3_title' => 'ds_content',
      'field_s3_p1_link' => 'ds_content',
      'field_s3_p2_body' => 'ds_content',
      'field_s3_p3_body' => 'ds_content',
      'field_s3_p2_link' => 'ds_content',
      'field_s3_p3_link' => 'ds_content',
      'field_s3_main_title' => 'ds_content',
      'group_s3_panels' => 'ds_content',
      'group_s3_p1_group' => 'ds_content',
      'group_s3_features' => 'ds_content',
      'group_s3_p2_group' => 'ds_content',
      'group_s3_p3_group' => 'ds_content',
      'field_s5_p3_title' => 'ds_content',
      'field_s5_p3_body' => 'ds_content',
      'field_s5_p3_link' => 'ds_content',
      'field_s5_main_title' => 'ds_content',
      'group_s5_panels' => 'ds_content',
      'field_s5_p2_title' => 'ds_content',
      'group_s5_p1_group' => 'ds_content',
      'group_s5_features' => 'ds_content',
      'group_s5_p2_group' => 'ds_content',
      'field_s5_p2_body' => 'ds_content',
      'field_s5_p2_link' => 'ds_content',
      'group_s5_p3_group' => 'ds_content',
      'field_s4_main_image' => 'ds_content',
      'field_s4_quote' => 'ds_content',
      'field_s4_quote_author' => 'ds_content',
      'field_s4_link' => 'ds_content',
      'field_s5_p1_title' => 'ds_content',
      'field_s5_features_title' => 'ds_content',
      'field_s5_p1_body' => 'ds_content',
      'field_s5_features_link_1' => 'ds_content',
      'field_s5_features_link_2' => 'ds_content',
      'field_s5_p1_link' => 'ds_content',
      'field_s5_features_link_3' => 'ds_content',
      'field_s5_features_link_4' => 'ds_content',
      '_add_existing_field' => 'hidden',
      'group_masthead_titles' => 'ds_content',
      'group_masthead_column_1' => 'ds_content',
      'group_masthead_column_2' => 'ds_content',
      'group_masthead_column_3' => 'ds_content',
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
  $export['node|segment_landing_page|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|segment_landing_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'segment_landing_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_masthead_quote',
        1 => 'group_segment_masthead',
        2 => 'field_segment_page_subtitle',
        3 => 'group_s1',
        4 => 'field_masthead_quote_author',
        5 => 'group_subtitle',
        6 => 'field_masthead_quote_link',
        7 => 'title',
        8 => 'group_s2',
        9 => 'group_s3',
        10 => 'field_masthead_image',
        11 => 'field_masthead_section_1_title',
        12 => 'group_s4',
        13 => 'group_s4c1r1',
        14 => 'field_masthead_section_1_body',
        15 => 'group_s5',
        16 => 'field_masthead_section_1_link',
        17 => 'field_s4_main_image',
        18 => 'field_s4_quote',
        19 => 'field_masthead_section_2_title',
        20 => 'field_masthead_section_2_body',
        21 => 'field_s4_quote_author',
        22 => 'field_s4_link',
        23 => 'field_masthead_section_2_link',
        24 => 'group_s5c1r2c1',
        25 => 'group_s5c1r2c2',
        26 => 'group_s5c1r2c4p1pb1',
        27 => 'group_s5c1r2c3',
        28 => 'group_s5c1r2c3p1ph1',
        29 => 'group_s5c1r2c3p1pb1',
        30 => 'group_s5c1r2c4',
        31 => 'group_s5c1r2c2p1ph1',
        32 => 'group_s5c1r2c2p1pb1',
        33 => 'group_s3c1r2c3p1ph1',
        34 => 'group_s3c1r2c3p1pb1',
        35 => 'group_s5c1r2c1p1ph1',
        36 => 'group_s5c1r2c1p1pb1',
        37 => 'group_s3c1r2c2p1ph1',
        38 => 'group_s3c1r2c2p1pb1',
        39 => 'group_s3c1r2c1p1ph1',
        40 => 'group_s3c1r2c1p1pb1',
        41 => 'field_s1_main_title',
        42 => 'field_s1_p1_title',
        43 => 'group_s5c1',
        44 => 'group_s1c1r1c1',
        45 => 'field_s1_p2_title',
        46 => 'field_s1_p2_body',
        47 => 'field_s1_p2_link',
        48 => 'field_s1_p1_body',
        49 => 'field_s1_p1_link',
        50 => 'group_s1c1r2c3p1ph1',
        51 => 'field_s1_p3_body',
        52 => 'group_s1c1r2c1',
        53 => 'field_s1_p3_link',
        54 => 'group_s1c1r2c2',
        55 => 'group_s1c1r2c3p1pb1',
        56 => 'group_s1c1r2c3',
        57 => 'group_s1c1r2c4',
        58 => 'field_s1_features_title',
        59 => 'group_s1c1r2c4ul1',
        60 => 'field_s5_features_link_1',
        61 => 'field_s1_features_link_1',
        62 => 'field_s1_features_link_2',
        63 => 'field_s5_features_link_2',
        64 => 'field_s1_features_link_3',
        65 => 'field_s5_features_link_3',
        66 => 'field_s1_features_link_4',
        67 => 'field_s5_features_link_4',
        68 => 'group_s1c1r1',
        69 => 'group_s1c1',
        70 => 'group_s1c1r2c1p1ph1',
        71 => 'group_s1c1r2c1p1',
        72 => 'group_s1c1r2c2p1ph1',
        73 => 'group_s1c1r2c2p1',
        74 => 'group_s1c1r2c2p1pb1',
        75 => 'group_s1c1r2c1p1pb1',
        76 => 'group_s1c1r2c4p1',
        77 => 'group_s1c1r2c3p1',
        78 => 'group_s2c1',
        79 => 'group_s1c1r2',
        80 => 'group_s3c1',
        81 => 'group_s1c1r2c4p1pb1',
        82 => 'group_s3c1r2c2p1',
        83 => 'field_s3_p2_title',
        84 => 'field_s3_p2_body',
        85 => 'field_s3_p2_link',
        86 => 'field_s3_features_link_1',
        87 => 'field_s3_features_link_2',
        88 => 'field_s3_features_link_3',
        89 => 'field_s3_features_link_4',
        90 => 'group_s2c1r1',
        91 => 'group_s2c1r1c1',
        92 => 'group_s2c1r1c2',
        93 => 'field_s2_image',
        94 => 'group_s2c1r1c2h3',
        95 => 'field_s2_main_title',
        96 => 'field_s2_subtitle',
        97 => 'field_s2_body_text',
        98 => 'field_s2_link',
        99 => 'field_s1_p3_title',
        100 => 'group_s3c1r2c4p1pb1',
        101 => 'field_s5_features_title',
        102 => 'group_s4c1',
        103 => 'group_s5c1r2c4ul1',
        104 => 'group_s5c1r1',
        105 => 'group_s3c1r1',
        106 => 'field_s5_main_title',
        107 => 'field_s3_main_title',
        108 => 'group_s5c1r2',
        109 => 'field_s5_p1_title',
        110 => 'group_s3c1r2',
        111 => 'field_s3_p3_title',
        112 => 'field_s5_p1_body',
        113 => 'group_s3c1r1c1',
        114 => 'field_s3_p1_title',
        115 => 'field_s3_p3_body',
        116 => 'field_s5_p1_link',
        117 => 'field_s3_p3_link',
        118 => 'group_s5c1r2c3p1',
        119 => 'field_s3_p1_body',
        120 => 'group_s3c1r2c4p1',
        121 => 'field_s3_p1_link',
        122 => 'group_s5c1r2c1p1',
        123 => 'group_s3c1r2c3p1',
        124 => 'field_s5_p2_title',
        125 => 'field_s5_p2_body',
        126 => 'group_s3c1r2c1p1',
        127 => 'field_s5_p2_link',
        128 => 'group_s5c1r2c2p1',
        129 => 'field_s5_p3_title',
        130 => 'field_s5_p3_body',
        131 => 'field_s5_p3_link',
        132 => 'field_s3_features_title',
        133 => 'group_s5c1r1c1',
        134 => 'group_s5c1r2c4p1',
        135 => 'group_s3c1r2c4ul1',
        136 => 'group_segment_masthead_r1',
        137 => 'group_segment_masthead_container',
        138 => 'group_titles',
        139 => 'group_s3c1r2c1',
        140 => 'group_s4c1r1c1',
        141 => 'group_s3c1r2c2',
        142 => 'group_segment_masthead_r2',
        143 => 'group_s4c1r1c2',
        144 => 'group_s3c1r2c3',
        145 => 'group_s3c1r2c4',
        146 => 'group_main_h2',
        147 => 'group_masthead_leftside',
        148 => 'group_masthead_rightside',
        149 => 'group_masthead_leftside_row',
        150 => 'group_left_side_col_1',
        151 => 'group_left_side_col_2',
      ),
    ),
    'fields' => array(
      'field_masthead_quote' => 'ds_content',
      'group_segment_masthead' => 'ds_content',
      'field_segment_page_subtitle' => 'ds_content',
      'group_s1' => 'ds_content',
      'field_masthead_quote_author' => 'ds_content',
      'group_subtitle' => 'ds_content',
      'field_masthead_quote_link' => 'ds_content',
      'title' => 'ds_content',
      'group_s2' => 'ds_content',
      'group_s3' => 'ds_content',
      'field_masthead_image' => 'ds_content',
      'field_masthead_section_1_title' => 'ds_content',
      'group_s4' => 'ds_content',
      'group_s4c1r1' => 'ds_content',
      'field_masthead_section_1_body' => 'ds_content',
      'group_s5' => 'ds_content',
      'field_masthead_section_1_link' => 'ds_content',
      'field_s4_main_image' => 'ds_content',
      'field_s4_quote' => 'ds_content',
      'field_masthead_section_2_title' => 'ds_content',
      'field_masthead_section_2_body' => 'ds_content',
      'field_s4_quote_author' => 'ds_content',
      'field_s4_link' => 'ds_content',
      'field_masthead_section_2_link' => 'ds_content',
      'group_s5c1r2c1' => 'ds_content',
      'group_s5c1r2c2' => 'ds_content',
      'group_s5c1r2c4p1pb1' => 'ds_content',
      'group_s5c1r2c3' => 'ds_content',
      'group_s5c1r2c3p1ph1' => 'ds_content',
      'group_s5c1r2c3p1pb1' => 'ds_content',
      'group_s5c1r2c4' => 'ds_content',
      'group_s5c1r2c2p1ph1' => 'ds_content',
      'group_s5c1r2c2p1pb1' => 'ds_content',
      'group_s3c1r2c3p1ph1' => 'ds_content',
      'group_s3c1r2c3p1pb1' => 'ds_content',
      'group_s5c1r2c1p1ph1' => 'ds_content',
      'group_s5c1r2c1p1pb1' => 'ds_content',
      'group_s3c1r2c2p1ph1' => 'ds_content',
      'group_s3c1r2c2p1pb1' => 'ds_content',
      'group_s3c1r2c1p1ph1' => 'ds_content',
      'group_s3c1r2c1p1pb1' => 'ds_content',
      'field_s1_main_title' => 'ds_content',
      'field_s1_p1_title' => 'ds_content',
      'group_s5c1' => 'ds_content',
      'group_s1c1r1c1' => 'ds_content',
      'field_s1_p2_title' => 'ds_content',
      'field_s1_p2_body' => 'ds_content',
      'field_s1_p2_link' => 'ds_content',
      'field_s1_p1_body' => 'ds_content',
      'field_s1_p1_link' => 'ds_content',
      'group_s1c1r2c3p1ph1' => 'ds_content',
      'field_s1_p3_body' => 'ds_content',
      'group_s1c1r2c1' => 'ds_content',
      'field_s1_p3_link' => 'ds_content',
      'group_s1c1r2c2' => 'ds_content',
      'group_s1c1r2c3p1pb1' => 'ds_content',
      'group_s1c1r2c3' => 'ds_content',
      'group_s1c1r2c4' => 'ds_content',
      'field_s1_features_title' => 'ds_content',
      'group_s1c1r2c4ul1' => 'ds_content',
      'field_s5_features_link_1' => 'ds_content',
      'field_s1_features_link_1' => 'ds_content',
      'field_s1_features_link_2' => 'ds_content',
      'field_s5_features_link_2' => 'ds_content',
      'field_s1_features_link_3' => 'ds_content',
      'field_s5_features_link_3' => 'ds_content',
      'field_s1_features_link_4' => 'ds_content',
      'field_s5_features_link_4' => 'ds_content',
      'group_s1c1r1' => 'ds_content',
      'group_s1c1' => 'ds_content',
      'group_s1c1r2c1p1ph1' => 'ds_content',
      'group_s1c1r2c1p1' => 'ds_content',
      'group_s1c1r2c2p1ph1' => 'ds_content',
      'group_s1c1r2c2p1' => 'ds_content',
      'group_s1c1r2c2p1pb1' => 'ds_content',
      'group_s1c1r2c1p1pb1' => 'ds_content',
      'group_s1c1r2c4p1' => 'ds_content',
      'group_s1c1r2c3p1' => 'ds_content',
      'group_s2c1' => 'ds_content',
      'group_s1c1r2' => 'ds_content',
      'group_s3c1' => 'ds_content',
      'group_s1c1r2c4p1pb1' => 'ds_content',
      'group_s3c1r2c2p1' => 'ds_content',
      'field_s3_p2_title' => 'ds_content',
      'field_s3_p2_body' => 'ds_content',
      'field_s3_p2_link' => 'ds_content',
      'field_s3_features_link_1' => 'ds_content',
      'field_s3_features_link_2' => 'ds_content',
      'field_s3_features_link_3' => 'ds_content',
      'field_s3_features_link_4' => 'ds_content',
      'group_s2c1r1' => 'ds_content',
      'group_s2c1r1c1' => 'ds_content',
      'group_s2c1r1c2' => 'ds_content',
      'field_s2_image' => 'ds_content',
      'group_s2c1r1c2h3' => 'ds_content',
      'field_s2_main_title' => 'ds_content',
      'field_s2_subtitle' => 'ds_content',
      'field_s2_body_text' => 'ds_content',
      'field_s2_link' => 'ds_content',
      'field_s1_p3_title' => 'ds_content',
      'group_s3c1r2c4p1pb1' => 'ds_content',
      'field_s5_features_title' => 'ds_content',
      'group_s4c1' => 'ds_content',
      'group_s5c1r2c4ul1' => 'ds_content',
      'group_s5c1r1' => 'ds_content',
      'group_s3c1r1' => 'ds_content',
      'field_s5_main_title' => 'ds_content',
      'field_s3_main_title' => 'ds_content',
      'group_s5c1r2' => 'ds_content',
      'field_s5_p1_title' => 'ds_content',
      'group_s3c1r2' => 'ds_content',
      'field_s3_p3_title' => 'ds_content',
      'field_s5_p1_body' => 'ds_content',
      'group_s3c1r1c1' => 'ds_content',
      'field_s3_p1_title' => 'ds_content',
      'field_s3_p3_body' => 'ds_content',
      'field_s5_p1_link' => 'ds_content',
      'field_s3_p3_link' => 'ds_content',
      'group_s5c1r2c3p1' => 'ds_content',
      'field_s3_p1_body' => 'ds_content',
      'group_s3c1r2c4p1' => 'ds_content',
      'field_s3_p1_link' => 'ds_content',
      'group_s5c1r2c1p1' => 'ds_content',
      'group_s3c1r2c3p1' => 'ds_content',
      'field_s5_p2_title' => 'ds_content',
      'field_s5_p2_body' => 'ds_content',
      'group_s3c1r2c1p1' => 'ds_content',
      'field_s5_p2_link' => 'ds_content',
      'group_s5c1r2c2p1' => 'ds_content',
      'field_s5_p3_title' => 'ds_content',
      'field_s5_p3_body' => 'ds_content',
      'field_s5_p3_link' => 'ds_content',
      'field_s3_features_title' => 'ds_content',
      'group_s5c1r1c1' => 'ds_content',
      'group_s5c1r2c4p1' => 'ds_content',
      'group_s3c1r2c4ul1' => 'ds_content',
      'group_segment_masthead_r1' => 'ds_content',
      'group_segment_masthead_container' => 'ds_content',
      'group_titles' => 'ds_content',
      'group_s3c1r2c1' => 'ds_content',
      'group_s4c1r1c1' => 'ds_content',
      'group_s3c1r2c2' => 'ds_content',
      'group_segment_masthead_r2' => 'ds_content',
      'group_s4c1r1c2' => 'ds_content',
      'group_s3c1r2c3' => 'ds_content',
      'group_s3c1r2c4' => 'ds_content',
      'group_main_h2' => 'ds_content',
      'group_masthead_leftside' => 'ds_content',
      'group_masthead_rightside' => 'ds_content',
      'group_masthead_leftside_row' => 'ds_content',
      'group_left_side_col_1' => 'ds_content',
      'group_left_side_col_2' => 'ds_content',
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
  $export['node|segment_landing_page|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_user_info_wrapper',
        1 => 'name',
        2 => 'summary',
        3 => 'group_user_info_leftside',
        4 => 'ds_user_picture',
        5 => 'group_user_info_rightside',
      ),
    ),
    'fields' => array(
      'group_user_info_wrapper' => 'ds_content',
      'name' => 'ds_content',
      'summary' => 'ds_content',
      'group_user_info_leftside' => 'ds_content',
      'ds_user_picture' => 'ds_content',
      'group_user_info_rightside' => 'ds_content',
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
  $export['user|user|default'] = $ds_layout;

  return $export;
}
