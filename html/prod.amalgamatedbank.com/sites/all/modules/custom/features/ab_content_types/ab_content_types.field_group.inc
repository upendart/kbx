<?php
/**
 * @file
 * ab_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ab_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account_details|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_account_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_details_tabs';
  $field_group->data = array(
    'label' => 'Account Details',
    'weight' => '16',
    'children' => array(
      0 => 'field_tab_1_body',
      1 => 'field_tab_1_body_2',
      2 => 'group_tab1_row3',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Account Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'tab-content',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_account_details|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_compare_table_column|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_compare_table_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_compare_table_row';
  $field_group->data = array(
    'label' => 'Compare Table Column',
    'weight' => '64',
    'children' => array(
      0 => 'field_compare_table',
      1 => 'field_compare_table_mobile_instr',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Compare Table Column',
      'instance_settings' => array(
        'classes' => 'col-md-12 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_compare_table_column|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_compare_table_wrapper|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_compare_table_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Compare Table Wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'group_compare_table',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Compare Table Wrapper',
      'instance_settings' => array(
        'classes' => 'group-compare-table-wrapper field-group-tabs',
      ),
    ),
  );
  $export['group_compare_table_wrapper|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_compare_table|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_compare_table';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_compare_table_wrapper';
  $field_group->data = array(
    'label' => 'Compare Table',
    'weight' => '76',
    'children' => array(
      0 => 'field_compare_table',
      1 => 'field_compare_table_mobile_instr',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-compare-table field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_compare_table|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_compare|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_compare';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_details_tabs';
  $field_group->data = array(
    'label' => 'Compare',
    'weight' => '19',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Compare',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'tab-content',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_compare|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conent_left_wrapper|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_conent_left_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_container_row2';
  $field_group->data = array(
    'label' => 'Content Left Wrapper',
    'weight' => '47',
    'children' => array(
      0 => 'group_left_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content Left Wrapper',
      'instance_settings' => array(
        'classes' => 'col-md-8 col-sm-12 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_conent_left_wrapper|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container_row1_column|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_container_row1_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_container_row1';
  $field_group->data = array(
    'label' => 'Container Row 1 Column',
    'weight' => '42',
    'children' => array(
      0 => 'group_content_titles_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container Row 1 Column',
      'instance_settings' => array(
        'classes' => 'col-sm-12 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_container_row1_column|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container_row1|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_container_row1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_container';
  $field_group->data = array(
    'label' => 'Container Row 1',
    'weight' => '42',
    'children' => array(
      0 => 'group_container_row1_column',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container Row 1',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_container_row1|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_container_row2|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_container_row2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_container';
  $field_group->data = array(
    'label' => 'Container Row 2',
    'weight' => '43',
    'children' => array(
      0 => 'group_conent_left_wrapper',
      1 => 'group_content_spacer',
      2 => 'group_content_right_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container Row 2',
      'instance_settings' => array(
        'classes' => 'row r2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_container_row2|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_container|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_content_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_content_section_wrapper';
  $field_group->data = array(
    'label' => 'Content Container',
    'weight' => '42',
    'children' => array(
      0 => 'group_container_row1',
      1 => 'group_container_row2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content Container',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content_container|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_left_side|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_content_left_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pl_content_section_wrapper';
  $field_group->data = array(
    'label' => 'Content Left Side',
    'weight' => '29',
    'children' => array(
      0 => 'group_panel_top_left',
      1 => 'group_panel_top_right',
      2 => 'group_panel_bottom_left',
      3 => 'group_panel_bottom_right',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_content_left_side|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_right_side|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_content_right_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pl_content_section_wrapper';
  $field_group->data = array(
    'label' => 'Content Right Side',
    'weight' => '31',
    'children' => array(
      0 => 'group_sidebar_panel_top',
      1 => 'group_sidebar_panel_bottom',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-content-right-side field-group-tabs',
      ),
    ),
  );
  $export['group_content_right_side|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_right_wrapper|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_content_right_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_container_row2';
  $field_group->data = array(
    'label' => 'Content Right Wrapper',
    'weight' => '49',
    'children' => array(
      0 => 'group_right_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content Right Wrapper',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-12 c3 sidebar',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content_right_wrapper|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_spacer|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_content_spacer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_container_row2';
  $field_group->data = array(
    'label' => 'Content Spacer',
    'weight' => '48',
    'children' => array(
      0 => 'field_content_area_spacer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content Spacer',
      'instance_settings' => array(
        'classes' => 'col-md-1 col-sm-12 c2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content_spacer|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_titles_wrapper|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_content_titles_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_container_row1_column';
  $field_group->data = array(
    'label' => 'Content Titles Wrapper',
    'weight' => '47',
    'children' => array(
      0 => 'field_content_subtitle',
      1 => 'field_content_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Content Titles Wrapper',
      'instance_settings' => array(
        'classes' => 'with-blue-text',
        'element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $export['group_content_titles_wrapper|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_titles|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_content_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pl_content_section_wrapper';
  $field_group->data = array(
    'label' => 'Content Titles',
    'weight' => '28',
    'children' => array(
      0 => 'field_content_subtitle',
      1 => 'field_content_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content-titles field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_content_titles|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_corp_responsibility|node|informational_gateway_item|full';
  $field_group->group_name = 'group_corp_responsibility';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_headline_row3';
  $field_group->data = array(
    'label' => 'Corporate Responsibility Wrapper',
    'weight' => '36',
    'children' => array(
      0 => 'corporate_responsibility_block',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Corporate Responsibility Wrapper',
      'instance_settings' => array(
        'classes' => 'col-md-4',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_corp_responsibility|node|informational_gateway_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_byline|node|basic_page_with_image|default';
  $field_group->group_name = 'group_date_byline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date and Byline',
    'weight' => '0',
    'children' => array(
      0 => 'field_published',
      1 => 'field_by',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Date and Byline',
      'instance_settings' => array(
        'classes' => 'group-date-byline field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_date_byline|node|basic_page_with_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_byline|node|basic_page_with_image|form';
  $field_group->group_name = 'group_date_byline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date and Byline',
    'weight' => '1',
    'children' => array(
      0 => 'field_published',
      1 => 'field_by',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-date-byline field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_date_byline|node|basic_page_with_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_byline|node|basic_page_with_image|full';
  $field_group->group_name = 'group_date_byline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_image';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_left_side';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_published',
      1 => 'field_by',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-date-byline',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_date_byline|node|basic_page_with_image|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details_tabs|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_details_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pdsb_content_row';
  $field_group->data = array(
    'label' => 'Details Tabs',
    'weight' => '11',
    'children' => array(
      0 => 'group_account_details',
      1 => 'group_rates',
      2 => 'group_fees',
      3 => 'group_compare',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Details Tabs',
      'instance_settings' => array(
        'classes' => 'nav nav-tabs',
      ),
    ),
  );
  $export['group_details_tabs|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details_titles_column|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_details_titles_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_details_titles';
  $field_group->data = array(
    'label' => 'Details Titles Column',
    'weight' => '10',
    'children' => array(
      0 => 'field_primary_headline',
      1 => 'field_secondary_headline',
      2 => 'field_modal_control_button',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Details Titles Column',
      'instance_settings' => array(
        'classes' => 'col-sm-12 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_details_titles_column|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details_titles|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_details_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pdsb_content_row';
  $field_group->data = array(
    'label' => 'Details Titles',
    'weight' => '10',
    'children' => array(
      0 => 'group_details_titles_column',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Details Titles',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_details_titles|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_date|node|event|event_view';
  $field_group->group_name = 'group_event_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_view';
  $field_group->parent_name = 'group_event_view_wrapper';
  $field_group->data = array(
    'label' => 'Event Date',
    'weight' => '7',
    'children' => array(
      0 => 'field_event_day',
      1 => 'group_event_month_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Event Date',
      'instance_settings' => array(
        'classes' => 'date',
        'element' => 'span',
        'attributes' => '',
      ),
    ),
  );
  $export['group_event_date|node|event|event_view'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_location|node|event|event_view';
  $field_group->group_name = 'group_event_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_view';
  $field_group->parent_name = 'group_event_view_wrapper';
  $field_group->data = array(
    'label' => 'Event Location',
    'weight' => '6',
    'children' => array(
      0 => 'field_event_city',
      1 => 'field_event_state',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Event Location',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'small',
        'attributes' => '',
      ),
    ),
  );
  $export['group_event_location|node|event|event_view'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_month_wrapper|node|event|event_view';
  $field_group->group_name = 'group_event_month_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_view';
  $field_group->parent_name = 'group_event_date';
  $field_group->data = array(
    'label' => 'Event Month Wrapper',
    'weight' => '27',
    'children' => array(
      0 => 'field_event_month',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Event Month Wrapper',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'small',
        'attributes' => '',
      ),
    ),
  );
  $export['group_event_month_wrapper|node|event|event_view'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_view_wrapper|node|event|event_view';
  $field_group->group_name = 'group_event_view_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'event_view';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event View Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'title',
      1 => 'group_event_location',
      2 => 'group_event_date',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Event View Wrapper',
      'instance_settings' => array(
        'classes' => 'with-date',
        'element' => 'h4',
        'attributes' => '',
      ),
    ),
  );
  $export['group_event_view_wrapper|node|event|event_view'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_events_wrapper|node|informational_gateway_item|full';
  $field_group->group_name = 'group_events_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_headline_row3';
  $field_group->data = array(
    'label' => 'Events Wrapper',
    'weight' => '37',
    'children' => array(
      0 => 'events',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Events Wrapper',
      'instance_settings' => array(
        'classes' => 'col-md-4',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_events_wrapper|node|informational_gateway_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_container|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_features_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_features_wrapper';
  $field_group->data = array(
    'label' => 'Features Container',
    'weight' => '29',
    'children' => array(
      0 => 'group_features_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Features Container',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_features_container|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_link1|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_features_link1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_features_links_row';
  $field_group->data = array(
    'label' => 'Features Link 1',
    'weight' => '37',
    'children' => array(
      0 => 'field_features_image_1',
      1 => 'group_features_plink1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Features Link 1',
      'instance_settings' => array(
        'classes' => 'col-sm-3 col-xs-6 c1 features-link1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_features_link1|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_link2|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_features_link2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_features_links_row';
  $field_group->data = array(
    'label' => 'Features Link 2',
    'weight' => '38',
    'children' => array(
      0 => 'field_features_image_2',
      1 => 'group_features_plink2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Features Link 2',
      'instance_settings' => array(
        'classes' => 'col-sm-3 col-xs-6 c2 features-link2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_features_link2|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_link3|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_features_link3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_features_links_row';
  $field_group->data = array(
    'label' => 'Features Link 3',
    'weight' => '40',
    'children' => array(
      0 => 'field_features_image_3',
      1 => 'group_features_plink3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Features Link 3',
      'instance_settings' => array(
        'classes' => 'col-sm-3 col-xs-6 c3 features-link3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_features_link3|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_link4|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_features_link4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_features_links_row';
  $field_group->data = array(
    'label' => 'Features Link 4',
    'weight' => '41',
    'children' => array(
      0 => 'field_features_image_4',
      1 => 'group_features_plink4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Features Link 4',
      'instance_settings' => array(
        'classes' => 'col-sm-3 col-xs-6 c4 features-link4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_features_link4|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_links_row|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_features_links_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_features_links';
  $field_group->data = array(
    'label' => 'Features Links Row',
    'weight' => '37',
    'children' => array(
      0 => 'group_features_link1',
      1 => 'group_features_link2',
      2 => 'group_features_link3',
      3 => 'group_features_link4',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Features Links Row',
      'instance_settings' => array(
        'classes' => 'row r1',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_features_links_row|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_links|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_features_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_features_section_wrapper';
  $field_group->data = array(
    'label' => 'Features Links',
    'weight' => '21',
    'children' => array(
      0 => 'field_features_link_1',
      1 => 'field_features_link_2',
      2 => 'field_features_link_3',
      3 => 'field_features_link_4',
      4 => 'field_features_image_1',
      5 => 'field_features_image_2',
      6 => 'field_features_image_3',
      7 => 'field_features_image_4',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-features-links field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_features_links|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_links|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_features_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_features_row';
  $field_group->data = array(
    'label' => 'Features Links',
    'weight' => '32',
    'children' => array(
      0 => 'group_features_links_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Features Links',
      'instance_settings' => array(
        'classes' => 'col-sm-9 col-xs-12 c2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_features_links|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_main_text|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_features_main_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_features_row';
  $field_group->data = array(
    'label' => 'Features Main Text',
    'weight' => '31',
    'children' => array(
      0 => 'field_features_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Features Main Text',
      'instance_settings' => array(
        'classes' => 'col-sm-3 col-xs-12 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_features_main_text|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_plink1|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_features_plink1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_features_link1';
  $field_group->data = array(
    'label' => 'Features P Link 1',
    'weight' => '37',
    'children' => array(
      0 => 'field_features_link_1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Features P Link 1',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'p',
        'attributes' => '',
      ),
    ),
  );
  $export['group_features_plink1|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_plink2|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_features_plink2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_features_link2';
  $field_group->data = array(
    'label' => 'Features P Link 2',
    'weight' => '37',
    'children' => array(
      0 => 'field_features_link_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Features P Link 2',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'p',
        'attributes' => '',
      ),
    ),
  );
  $export['group_features_plink2|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_plink3|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_features_plink3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_features_link3';
  $field_group->data = array(
    'label' => 'Features P Link 3',
    'weight' => '37',
    'children' => array(
      0 => 'field_features_link_3',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Features P Link 3',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'p',
        'attributes' => '',
      ),
    ),
  );
  $export['group_features_plink3|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_plink4|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_features_plink4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_features_link4';
  $field_group->data = array(
    'label' => 'Features P Link 4',
    'weight' => '37',
    'children' => array(
      0 => 'field_features_link_4',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Features P Link 4',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'p',
        'attributes' => '',
      ),
    ),
  );
  $export['group_features_plink4|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_row|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_features_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_features_container';
  $field_group->data = array(
    'label' => 'Features Row',
    'weight' => '29',
    'children' => array(
      0 => 'group_features_main_text',
      1 => 'group_features_links',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Features Row',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_features_row|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_section_wrapper|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_features_section_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Features Section',
    'weight' => '1',
    'children' => array(
      0 => 'group_features_title',
      1 => 'group_features_links',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-features-section-wrapper field-group-htabs',
      ),
    ),
  );
  $export['group_features_section_wrapper|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features_title|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_features_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_features_section_wrapper';
  $field_group->data = array(
    'label' => 'Features Title',
    'weight' => '20',
    'children' => array(
      0 => 'field_features_title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-features-title field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_features_title|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fees|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_fees';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_details_tabs';
  $field_group->data = array(
    'label' => 'Fees',
    'weight' => '18',
    'children' => array(
      0 => 'field_tab_3_body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Fees',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'tab-content',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_fees|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_page_titles|node|front_page|full';
  $field_group->group_name = 'group_front_page_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'front_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Front Page Titles',
    'weight' => '0',
    'children' => array(
      0 => 'field_headline',
      1 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Front Page Titles',
      'instance_settings' => array(
        'classes' => 'with-blue-text',
        'element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $export['group_front_page_titles|node|front_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headline_container|node|informational_gateway_item|full';
  $field_group->group_name = 'group_headline_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_headline_section';
  $field_group->data = array(
    'label' => 'Headline Container',
    'weight' => '21',
    'children' => array(
      0 => 'group_headline_row1',
      1 => 'group_headline_row2',
      2 => 'group_headline_row3',
      3 => 'group_hl_fresstyle_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Headline Container',
      'instance_settings' => array(
        'classes' => 'container',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_headline_container|node|informational_gateway_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headline_content|node|informational_gateway_item|form';
  $field_group->group_name = 'group_headline_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_headline_section';
  $field_group->data = array(
    'label' => 'Headline Content',
    'weight' => '14',
    'children' => array(
      0 => 'field_headline_description',
      1 => 'field_headline_title',
      2 => 'field_headline_subtitle',
      3 => 'field_headline_tagline',
      4 => 'field_headline_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-headline-content field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_headline_content|node|informational_gateway_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headline_image_wrapper|node|informational_gateway_item|full';
  $field_group->group_name = 'group_headline_image_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_headline_row2';
  $field_group->data = array(
    'label' => 'Headline Image Wrapper',
    'weight' => '30',
    'children' => array(
      0 => 'field_headline_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Headline Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-md-6 c1 headline-image image-responsive',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_headline_image_wrapper|node|informational_gateway_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headline_row1|node|informational_gateway_item|full';
  $field_group->group_name = 'group_headline_row1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_headline_container';
  $field_group->data = array(
    'label' => 'Headline Row 1',
    'weight' => '22',
    'children' => array(
      0 => 'group_headline_title_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Headline Row 1',
      'instance_settings' => array(
        'classes' => 'row r1',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_headline_row1|node|informational_gateway_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headline_row2|node|informational_gateway_item|full';
  $field_group->group_name = 'group_headline_row2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_headline_container';
  $field_group->data = array(
    'label' => 'Headline Row 2',
    'weight' => '23',
    'children' => array(
      0 => 'group_headline_image_wrapper',
      1 => 'group_headline_text_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Headline Row 2',
      'instance_settings' => array(
        'classes' => 'row r2 with-gray-background',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_headline_row2|node|informational_gateway_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headline_row3|node|informational_gateway_item|full';
  $field_group->group_name = 'group_headline_row3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_headline_container';
  $field_group->data = array(
    'label' => 'Headline Row 3',
    'weight' => '25',
    'children' => array(
      0 => 'group_in_the_news_wrapper',
      1 => 'group_corp_responsibility',
      2 => 'group_events_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Headline Row 3',
      'instance_settings' => array(
        'classes' => 'row r3',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_headline_row3|node|informational_gateway_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headline_section|node|informational_gateway_item|default';
  $field_group->group_name = 'group_headline_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Headline Section',
    'weight' => '0',
    'children' => array(
      0 => 'field_headline_description',
      1 => 'field_headline_image',
      2 => 'field_headline_title',
      3 => 'field_headline_subtitle',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-headline-section field-group-div',
      ),
    ),
  );
  $export['group_headline_section|node|informational_gateway_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headline_section|node|informational_gateway_item|form';
  $field_group->group_name = 'group_headline_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page Content',
    'weight' => '2',
    'children' => array(
      0 => 'group_headline_content',
      1 => 'group_slideshow_content',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Page Content',
      'instance_settings' => array(
        'classes' => 'group-headline-section field-group-htabs',
      ),
    ),
  );
  $export['group_headline_section|node|informational_gateway_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headline_section|node|informational_gateway_item|full';
  $field_group->group_name = 'group_headline_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Headline Section',
    'weight' => '0',
    'children' => array(
      0 => 'group_headline_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Headline Section',
      'instance_settings' => array(
        'classes' => 'content informational-gateway',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_headline_section|node|informational_gateway_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headline_text_wrapper|node|informational_gateway_item|full';
  $field_group->group_name = 'group_headline_text_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_headline_row2';
  $field_group->data = array(
    'label' => 'Headline Text Wrapper',
    'weight' => '32',
    'children' => array(
      0 => 'field_headline_description',
      1 => 'field_headline_subtitle',
      2 => 'field_headline_tagline',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Headline Text Wrapper',
      'instance_settings' => array(
        'classes' => 'col-md-6 c2',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_headline_text_wrapper|node|informational_gateway_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headline_title_wrapper|node|informational_gateway_item|full';
  $field_group->group_name = 'group_headline_title_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_headline_row1';
  $field_group->data = array(
    'label' => 'Headline Title Wrapper',
    'weight' => '27',
    'children' => array(
      0 => 'field_headline_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Headline Title Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-12',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_headline_title_wrapper|node|informational_gateway_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hl_fresstyle_wrapper|node|informational_gateway_item|full';
  $field_group->group_name = 'group_hl_fresstyle_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_headline_container';
  $field_group->data = array(
    'label' => 'Freestyle Wrapper',
    'weight' => '24',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Freestyle Wrapper',
      'instance_settings' => array(
        'classes' => 'row info-gateway-freestyle',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_hl_fresstyle_wrapper|node|informational_gateway_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_in_the_news_wrapper|node|informational_gateway_item|full';
  $field_group->group_name = 'group_in_the_news_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_headline_row3';
  $field_group->data = array(
    'label' => 'In the News Wrapper',
    'weight' => '34',
    'children' => array(
      0 => 'in_the_news',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'In the News Wrapper',
      'instance_settings' => array(
        'classes' => 'col-md-4',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_in_the_news_wrapper|node|informational_gateway_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_landing_cite_wrapper|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_landing_cite_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_panel3_body';
  $field_group->data = array(
    'label' => 'Cite Wrapper',
    'weight' => '60',
    'children' => array(
      0 => 'field_panel_3_author',
      1 => 'field_panel_3_author_job',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Cite Wrapper',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'cite',
        'attributes' => '',
      ),
    ),
  );
  $export['group_landing_cite_wrapper|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_row|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_left_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_conent_left_wrapper';
  $field_group->data = array(
    'label' => 'Left Row',
    'weight' => '47',
    'children' => array(
      0 => 'group_panel4_wrapper',
      1 => 'group_panel3_wrapper',
      2 => 'group_panel2_wrapper',
      3 => 'group_panel1_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left Row',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left_row|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_side_col_1|node|segment_landing_page|full';
  $field_group->group_name = 'group_left_side_col_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_masthead_leftside_row';
  $field_group->data = array(
    'label' => 'Column 1',
    'weight' => '184',
    'children' => array(
      0 => 'field_masthead_section_1_title',
      1 => 'field_masthead_section_1_body',
      2 => 'field_masthead_section_1_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column 1',
      'instance_settings' => array(
        'classes' => 'col-md-6 c1 js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left_side_col_1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_side_col_2|node|segment_landing_page|full';
  $field_group->group_name = 'group_left_side_col_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_masthead_leftside_row';
  $field_group->data = array(
    'label' => 'Column 2',
    'weight' => '185',
    'children' => array(
      0 => 'field_masthead_section_2_title',
      1 => 'field_masthead_section_2_body',
      2 => 'field_masthead_section_2_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column 2',
      'instance_settings' => array(
        'classes' => 'col-md-6 c2 js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left_side_col_2|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_side|node|basic_page_with_hero_image|default';
  $field_group->group_name = 'group_left_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_hero_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left Side',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left Side',
      'instance_settings' => array(
        'classes' => 'group-left-side field-group-div col-md-9',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left_side|node|basic_page_with_hero_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_side|node|basic_page_with_hero_image|form';
  $field_group->group_name = 'group_left_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_hero_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left Side',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_summary',
      2 => 'field_share_widget_main',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left Side',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-left-side field-group-div col-md-9',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left_side|node|basic_page_with_hero_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_side|node|basic_page_with_hero_image|full';
  $field_group->group_name = 'group_left_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_hero_image';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left Side',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_summary',
      2 => 'field_share_widget_main',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left Side',
      'instance_settings' => array(
        'classes' => 'col-md-8 col-sm-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left_side|node|basic_page_with_hero_image|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_side|node|basic_page_with_image|full';
  $field_group->group_name = 'group_left_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_image';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left Side',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_basic_page_image',
      2 => 'field_basic_summary',
      3 => 'field_share_widget_basic_main',
      4 => 'title',
      5 => 'group_date_byline',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left Side',
      'instance_settings' => array(
        'classes' => 'col-md-9 col-sm-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left_side|node|basic_page_with_image|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_side|node|product_tout_item|full';
  $field_group->group_name = 'group_left_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_tout_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_product_details_wrapper';
  $field_group->data = array(
    'label' => 'Left Side',
    'weight' => '9',
    'children' => array(
      0 => 'body',
      1 => 'field_product_tout_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left Side',
      'instance_settings' => array(
        'classes' => 'pull-left product-tout-item-left col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left_side|node|product_tout_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_h2|node|segment_landing_page|full';
  $field_group->group_name = 'group_main_h2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_titles';
  $field_group->data = array(
    'label' => 'Main H2',
    'weight' => '171',
    'children' => array(
      0 => 'title',
      1 => 'group_subtitle',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Main H2',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $export['group_main_h2|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_masthead_column_1|node|segment_landing_page|form';
  $field_group->group_name = 'group_masthead_column_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_masthead_group';
  $field_group->data = array(
    'label' => 'Masthead Column 1',
    'weight' => '64',
    'children' => array(
      0 => 'field_masthead_section_1_title',
      1 => 'field_masthead_section_1_body',
      2 => 'field_masthead_section_1_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-masthead-column-1 field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_masthead_column_1|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_masthead_column_2|node|segment_landing_page|form';
  $field_group->group_name = 'group_masthead_column_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_masthead_group';
  $field_group->data = array(
    'label' => 'Masthead Column 2',
    'weight' => '65',
    'children' => array(
      0 => 'field_masthead_section_2_title',
      1 => 'field_masthead_section_2_body',
      2 => 'field_masthead_section_2_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-masthead-column-2 field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_masthead_column_2|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_masthead_column_3|node|segment_landing_page|form';
  $field_group->group_name = 'group_masthead_column_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_masthead_group';
  $field_group->data = array(
    'label' => 'Masthead Column 3',
    'weight' => '66',
    'children' => array(
      0 => 'field_masthead_quote',
      1 => 'field_masthead_quote_author',
      2 => 'field_masthead_quote_link',
      3 => 'field_masthead_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-masthead-column-3 field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_masthead_column_3|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_masthead_extras|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_masthead_extras';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pl_masthead_wrapper';
  $field_group->data = array(
    'label' => 'Masthead Extras',
    'weight' => '12',
    'children' => array(
      0 => 'group_masthead_image_and_link',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-masthead-extras field-group-tabs',
      ),
    ),
  );
  $export['group_masthead_extras|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_masthead_group|node|segment_landing_page|form';
  $field_group->group_name = 'group_masthead_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Masthead Group',
    'weight' => '2',
    'children' => array(
      0 => 'group_masthead_titles',
      1 => 'group_masthead_column_1',
      2 => 'group_masthead_column_2',
      3 => 'group_masthead_column_3',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-masthead-group field-group-htabs',
      ),
    ),
  );
  $export['group_masthead_group|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_masthead_image_and_link|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_masthead_image_and_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_masthead_extras';
  $field_group->data = array(
    'label' => 'Masthead Main Image & Link',
    'weight' => '52',
    'children' => array(
      0 => 'field_masthead_main_image',
      1 => 'field_masthead_compare_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-masthead-image-and-link field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_masthead_image_and_link|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_masthead_leftside_row|node|segment_landing_page|full';
  $field_group->group_name = 'group_masthead_leftside_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_masthead_leftside';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '181',
    'children' => array(
      0 => 'group_left_side_col_1',
      1 => 'group_left_side_col_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Row',
      'instance_settings' => array(
        'classes' => 'row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_masthead_leftside_row|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_masthead_leftside|node|segment_landing_page|full';
  $field_group->group_name = 'group_masthead_leftside';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_segment_masthead_r2';
  $field_group->data = array(
    'label' => 'Left Side',
    'weight' => '175',
    'children' => array(
      0 => 'group_masthead_leftside_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left Side',
      'instance_settings' => array(
        'classes' => 'col-md-8 col-sm-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_masthead_leftside|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_masthead_rightside|node|segment_landing_page|full';
  $field_group->group_name = 'group_masthead_rightside';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_segment_masthead_r2';
  $field_group->data = array(
    'label' => 'Right Side',
    'weight' => '176',
    'children' => array(
      0 => 'field_masthead_quote',
      1 => 'field_masthead_quote_author',
      2 => 'field_masthead_quote_link',
      3 => 'field_masthead_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right Side',
      'instance_settings' => array(
        'classes' => 'col-md-4 col-sm-6 c3 masthead-right',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_masthead_rightside|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_masthead_titles|node|segment_landing_page|form';
  $field_group->group_name = 'group_masthead_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_masthead_group';
  $field_group->data = array(
    'label' => 'Masthead Titles',
    'weight' => '63',
    'children' => array(
      0 => 'field_segment_page_subtitle',
      1 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-masthead-titles field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_masthead_titles|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_masthead_wrapper|node|segment_landing_page_freestyle|default';
  $field_group->group_name = 'group_masthead_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page_freestyle';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Masthead Section Wrapper',
    'weight' => '0',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Masthead Section Wrapper',
      'instance_settings' => array(
        'classes' => 'content with-dark-blue-background with-white-notch title',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_masthead_wrapper|node|segment_landing_page_freestyle|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_masthead_wrapper|node|segment_landing_page_freestyle|full';
  $field_group->group_name = 'group_masthead_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Masthead Section Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Masthead Section Wrapper',
      'instance_settings' => array(
        'classes' => 'content with-dark-blue-background with-white-notch title',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_masthead_wrapper|node|segment_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_middle_divider|node|basic_page_with_hero_image|full';
  $field_group->group_name = 'group_middle_divider';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_hero_image';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Middle Divider',
    'weight' => '11',
    'children' => array(
      0 => 'field_spacer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Middle Divider',
      'instance_settings' => array(
        'classes' => 'col-md-1 col-sm-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_middle_divider|node|basic_page_with_hero_image|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modal_body|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_modal_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_modal_content';
  $field_group->data = array(
    'label' => 'Modal Body',
    'weight' => '23',
    'children' => array(
      0 => 'field_compare_popup',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Modal Body',
      'instance_settings' => array(
        'classes' => 'modal-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_modal_body|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modal_content|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_modal_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_modal_dialog';
  $field_group->data = array(
    'label' => 'Modal Content',
    'weight' => '15',
    'children' => array(
      0 => 'group_modal_header',
      1 => 'group_modal_body',
      2 => 'group_modal_footer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Modal Content',
      'instance_settings' => array(
        'classes' => 'modal-content',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_modal_content|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modal_dialog|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_modal_dialog';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_modal_wrapper';
  $field_group->data = array(
    'label' => 'Modal Dialog',
    'weight' => '15',
    'children' => array(
      0 => 'group_modal_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Modal Dialog',
      'instance_settings' => array(
        'classes' => 'modal-dialog',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_modal_dialog|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modal_footer|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_modal_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_modal_content';
  $field_group->data = array(
    'label' => 'Modal Footer',
    'weight' => '24',
    'children' => array(
      0 => 'field_modal_footer_close_button',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Modal Footer',
      'instance_settings' => array(
        'classes' => 'modal-footer',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_modal_footer|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modal_header|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_modal_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_modal_content';
  $field_group->data = array(
    'label' => 'Modal Header',
    'weight' => '22',
    'children' => array(
      0 => 'field_modal_header_close_button',
      1 => 'group_modal_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Modal Header',
      'instance_settings' => array(
        'classes' => 'modal-header',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_modal_header|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modal_title|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_modal_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_modal_header';
  $field_group->data = array(
    'label' => 'Modal Title Wrapper',
    'weight' => '17',
    'children' => array(
      0 => 'field_modal_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Modal Title Wrapper',
      'instance_settings' => array(
        'classes' => 'modal-title pull-left',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_modal_title|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modal_window|node|product_detail_page_with_sidebar|form';
  $field_group->group_name = 'group_modal_window';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Modal Window',
    'weight' => '6',
    'children' => array(
      0 => 'field_compare_popup',
      1 => 'field_modal_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-modal-window field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_modal_window|node|product_detail_page_with_sidebar|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_modal_wrapper|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_modal_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Modal Wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'group_modal_dialog',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Modal Wrapper',
      'instance_settings' => array(
        'classes' => 'modal fade',
        'element' => 'div',
        'attributes' => 'id="compareModal" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true"',
      ),
    ),
  );
  $export['group_modal_wrapper|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel1_body|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel1_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_panel_top_left';
  $field_group->data = array(
    'label' => 'Panel 1 Body',
    'weight' => '13',
    'children' => array(
      0 => 'field_panel_1_body',
      1 => 'field_panel_1_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel 1 Body',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel1_body|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel1_box|node|product_detail_page|full';
  $field_group->group_name = 'group_panel1_box';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_tab1_row3_col2';
  $field_group->data = array(
    'label' => 'Panel 1 Box',
    'weight' => '1',
    'children' => array(
      0 => 'field_tab_1_section_2_box_1_icon',
      1 => 'field_tab_1_section_2_box_1_titl',
      2 => 'field_tab_1_section_2_box_1_body',
      3 => 'field_tab_1_section_2_box_1_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Panel 1 Box',
      'instance_settings' => array(
        'classes' => 'panel panel-default js-click-container pd-highlight-bg1',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_panel1_box|node|product_detail_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel1_heading|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel1_heading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_panel_top_left';
  $field_group->data = array(
    'label' => 'Panel 1 Heading',
    'weight' => '12',
    'children' => array(
      0 => 'field_panel_1_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel 1 Heading',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel1_heading|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel1_wrapper|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel1_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_left_row';
  $field_group->data = array(
    'label' => 'Panel 1 Wrapper',
    'weight' => '47',
    'children' => array(
      0 => 'group_panel_top_left',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel 1 Wrapper',
      'instance_settings' => array(
        'classes' => 'col-md-6 col-sm-6 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel1_wrapper|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel2_body|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel2_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_panel_top_right';
  $field_group->data = array(
    'label' => 'Panel 2 Body',
    'weight' => '54',
    'children' => array(
      0 => 'field_panel_2_link',
      1 => 'field_panel_2_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel 2 Body',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel2_body|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel2_box|node|product_detail_page|full';
  $field_group->group_name = 'group_panel2_box';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_tab1_row3_col3';
  $field_group->data = array(
    'label' => 'Panel 2 Box',
    'weight' => '2',
    'children' => array(
      0 => 'field_tab_1_section_2_box_2_icon',
      1 => 'field_tab_1_section_2_box_2_titl',
      2 => 'field_tab_1_section_2_box_2_body',
      3 => 'field_tab_1_section_2_box_2_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Panel 2 Box',
      'instance_settings' => array(
        'classes' => 'panel panel-default js-click-container pd-highlight-bg2',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_panel2_box|node|product_detail_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel2_heading|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel2_heading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_panel_top_right';
  $field_group->data = array(
    'label' => 'Panel 2 Heading',
    'weight' => '53',
    'children' => array(
      0 => 'field_panel_2_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel 2 Heading',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel2_heading|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel2_wrapper|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel2_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_left_row';
  $field_group->data = array(
    'label' => 'Panel 2 Wrapper',
    'weight' => '48',
    'children' => array(
      0 => 'group_panel_top_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel 2 Wrapper',
      'instance_settings' => array(
        'classes' => 'col-md-6 col-sm-6 c2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel2_wrapper|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel3_body|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel3_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_panel_bottom_left';
  $field_group->data = array(
    'label' => 'Panel 3 Body',
    'weight' => '53',
    'children' => array(
      0 => 'field_panel_3_image',
      1 => 'group_landing_cite_wrapper',
      2 => 'group_panel_quote',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel 3 Body',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel3_body|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel3_box|node|product_detail_page|full';
  $field_group->group_name = 'group_panel3_box';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_tab1_row3_col4';
  $field_group->data = array(
    'label' => 'Panel 3 Box',
    'weight' => '20',
    'children' => array(
      0 => 'field_tab_1_section_2_box_3_icon',
      1 => 'field_tab_1_section_2_box_3_titl',
      2 => 'field_tab_1_section_2_box_3_body',
      3 => 'field_tab_1_section_2_box_3_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Panel 3 Box',
      'instance_settings' => array(
        'classes' => 'panel panel-default js-click-container pd-highlight-bg3',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_panel3_box|node|product_detail_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel3_wrapper|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel3_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_left_row';
  $field_group->data = array(
    'label' => 'Panel 3 Wrapper',
    'weight' => '49',
    'children' => array(
      0 => 'group_panel_bottom_left',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel 3 Wrapper',
      'instance_settings' => array(
        'classes' => 'col-md-6 col-sm-6 c3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel3_wrapper|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel4_body|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel4_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_panel_bottom_right';
  $field_group->data = array(
    'label' => 'Panel 4 Body',
    'weight' => '54',
    'children' => array(
      0 => 'field_panel_4_link',
      1 => 'field_panel_4_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel 4 Body',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel4_body|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel4_box|node|product_detail_page|full';
  $field_group->group_name = 'group_panel4_box';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_tab1_row3_col5';
  $field_group->data = array(
    'label' => 'Panel 4 Box',
    'weight' => '16',
    'children' => array(
      0 => 'field_tab_1_section_2_box_4_icon',
      1 => 'field_tab_1_section_2_box_4_titl',
      2 => 'field_tab_1_section_2_box_4_body',
      3 => 'field_tab_1_section_2_box_4_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Panel 4 Box',
      'instance_settings' => array(
        'classes' => 'panel panel-default js-click-container pd-highlight-bg1',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_panel4_box|node|product_detail_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel4_heading|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel4_heading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_panel_bottom_right';
  $field_group->data = array(
    'label' => 'Panel 4 Heading',
    'weight' => '53',
    'children' => array(
      0 => 'field_panel_4_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel 4 Heading',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel4_heading|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel4_wrapper|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel4_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_left_row';
  $field_group->data = array(
    'label' => 'Panel 4 Wrapper',
    'weight' => '51',
    'children' => array(
      0 => 'group_panel_bottom_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel 4 Wrapper',
      'instance_settings' => array(
        'classes' => 'col-md-6 col-sm-6 c4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel4_wrapper|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_bottom_left|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_panel_bottom_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_left_side';
  $field_group->data = array(
    'label' => 'Panel Bottom Left',
    'weight' => '32',
    'children' => array(
      0 => 'field_panel_3_quote',
      1 => 'field_panel_3_author',
      2 => 'field_panel_3_author_job',
      3 => 'field_panel_3_image',
      4 => 'field_quotation_marks',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-panel-bottom-left field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_panel_bottom_left|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_bottom_left|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel_bottom_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_panel3_wrapper';
  $field_group->data = array(
    'label' => 'Panel Bottom Left',
    'weight' => '50',
    'children' => array(
      0 => 'group_panel3_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel Bottom Left',
      'instance_settings' => array(
        'classes' => 'panel rounded with-gray-border landing-panel3-image',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel_bottom_left|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_bottom_right|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_panel_bottom_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_left_side';
  $field_group->data = array(
    'label' => 'Panel Bottom Right',
    'weight' => '34',
    'children' => array(
      0 => 'field_panel_4_link',
      1 => 'field_panel_4_title',
      2 => 'field_panel_4_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-panel-bottom-right field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_panel_bottom_right|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_bottom_right|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel_bottom_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_panel4_wrapper';
  $field_group->data = array(
    'label' => 'Panel Bottom Right',
    'weight' => '16',
    'children' => array(
      0 => 'group_panel4_heading',
      1 => 'group_panel4_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel Bottom Right',
      'instance_settings' => array(
        'classes' => 'panel rounded with-gray-border js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel_bottom_right|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_quote|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_panel3_body';
  $field_group->data = array(
    'label' => 'Panel Quote',
    'weight' => '57',
    'children' => array(
      0 => 'field_panel_3_quote',
      1 => 'field_quotation_marks',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Panel Quote',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'blockquote',
        'attributes' => '',
      ),
    ),
  );
  $export['group_panel_quote|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_top_left|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_panel_top_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_left_side';
  $field_group->data = array(
    'label' => 'Panel Top Left',
    'weight' => '30',
    'children' => array(
      0 => 'field_panel_1_title',
      1 => 'field_panel_1_body',
      2 => 'field_panel_1_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_panel_top_left|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_top_left|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel_top_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_panel1_wrapper';
  $field_group->data = array(
    'label' => 'Panel Top Left',
    'weight' => '13',
    'children' => array(
      0 => 'group_panel1_heading',
      1 => 'group_panel1_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel Top Left',
      'instance_settings' => array(
        'classes' => 'panel rounded with-gray-border js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel_top_left|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_top_right|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_panel_top_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_left_side';
  $field_group->data = array(
    'label' => 'Panel Top Right',
    'weight' => '31',
    'children' => array(
      0 => 'field_panel_2_link',
      1 => 'field_panel_2_title',
      2 => 'field_panel_2_body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_panel_top_right|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_panel_top_right|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_panel_top_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_panel2_wrapper';
  $field_group->data = array(
    'label' => 'Panel Top Right',
    'weight' => '14',
    'children' => array(
      0 => 'group_panel2_heading',
      1 => 'group_panel2_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel Top Right',
      'instance_settings' => array(
        'classes' => 'panel rounded with-gray-border js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_panel_top_right|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pdsb_content_container|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_pdsb_content_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pdsb_content_wrapper';
  $field_group->data = array(
    'label' => 'PDSB Content Container',
    'weight' => '3',
    'children' => array(
      0 => 'group_pdsb_content_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'PDSB Content Container',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pdsb_content_container|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pdsb_content_row|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_pdsb_content_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pdsb_content_container';
  $field_group->data = array(
    'label' => 'PDSB Content Row',
    'weight' => '3',
    'children' => array(
      0 => 'group_details_tabs',
      1 => 'group_details_titles',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'PDSB Content Row',
      'instance_settings' => array(
        'classes' => 'row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pdsb_content_row|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pdsb_content_wrapper|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_pdsb_content_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PDSB Content Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_pdsb_content_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'PDSB Content Wrapper',
      'instance_settings' => array(
        'classes' => 'content',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pdsb_content_wrapper|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_compare_table_container|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_compare_table_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_compare_table_wrapper';
  $field_group->data = array(
    'label' => 'Compare Table Container',
    'weight' => '64',
    'children' => array(
      0 => 'group_pl_compare_table_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Compare Table Container',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_compare_table_container|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_compare_table_row|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_compare_table_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_compare_table_container';
  $field_group->data = array(
    'label' => 'Compare Table Row',
    'weight' => '64',
    'children' => array(
      0 => 'group_compare_table_column',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Compare Table Row',
      'instance_settings' => array(
        'classes' => 'col-md-12 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_compare_table_row|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_compare_table_wrapper|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_compare_table_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Compare Table Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'group_pl_compare_table_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Compare Table Wrapper',
      'instance_settings' => array(
        'classes' => 'content',
        'element' => 'section',
        'attributes' => 'data-collapse-target="compare" style="display: none;"',
      ),
    ),
  );
  $export['group_pl_compare_table_wrapper|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_content_section_wrapper|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_pl_content_section_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content Section Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'group_content_titles',
      1 => 'group_content_left_side',
      2 => 'group_content_right_side',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_pl_content_section_wrapper|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_content_section_wrapper|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_content_section_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content Section Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'group_content_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Content Section Wrapper',
      'instance_settings' => array(
        'classes' => 'content why-choose-amalgamated',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_content_section_wrapper|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_features_wrapper|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_features_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Features Section Wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'group_features_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Features Section Wrapper',
      'instance_settings' => array(
        'classes' => 'content with-gray-background features',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_features_wrapper|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_footercontainer1|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_footercontainer1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard1_footer';
  $field_group->data = array(
    'label' => 'Panel 1 Footer Container',
    'weight' => '12',
    'children' => array(
      0 => 'field_placard_1_link_1',
      1 => 'field_placard_1_link_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Panel 1 Footer Container',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'p',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_footercontainer1|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_footercontainer2|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_footercontainer2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard2_footer';
  $field_group->data = array(
    'label' => 'Panel 2 Footer Container',
    'weight' => '15',
    'children' => array(
      0 => 'field_placard_2_link_1',
      1 => 'field_placard_2_link_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Panel 2 Footer Container',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'p',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_footercontainer2|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_footercontainer3|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_footercontainer3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard3_footer';
  $field_group->data = array(
    'label' => 'Panel 3 Footer Container',
    'weight' => '21',
    'children' => array(
      0 => 'field_placard_3_link_1',
      1 => 'field_placard_3_link_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Panel 3 Footer Container',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'p',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_footercontainer3|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_freestyle_content|node|product_landing_page_freestyle|full';
  $field_group->group_name = 'group_pl_freestyle_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Freestyle Content',
    'weight' => '2',
    'children' => array(
      0 => 'group_pl_fs_content_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Freestyle Content',
      'instance_settings' => array(
        'classes' => 'content why-choose-amalgamated',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_freestyle_content|node|product_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_freestyle_features|node|product_landing_page_freestyle|full';
  $field_group->group_name = 'group_pl_freestyle_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Freestyle Features Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'group_pl_fs_features_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Freestyle Features Wrapper',
      'instance_settings' => array(
        'classes' => 'content with-gray-background features',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_freestyle_features|node|product_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_freestyle_masthead|node|product_landing_page_freestyle|full';
  $field_group->group_name = 'group_pl_freestyle_masthead';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Freestyle Masthead',
    'weight' => '0',
    'children' => array(
      0 => 'group_pl_fs_masthead_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Freestyle Masthead',
      'instance_settings' => array(
        'classes' => 'content with-dark-blue-background with-gray-notch title products',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_freestyle_masthead|node|product_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_fs_content_body|node|product_landing_page_freestyle|full';
  $field_group->group_name = 'group_pl_fs_content_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_fs_content_container';
  $field_group->data = array(
    'label' => 'Freestyle Content Body',
    'weight' => '21',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Freestyle Content Body',
      'instance_settings' => array(
        'classes' => 'row r2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_fs_content_body|node|product_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_fs_content_container|node|product_landing_page_freestyle|full';
  $field_group->group_name = 'group_pl_fs_content_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_freestyle_content';
  $field_group->data = array(
    'label' => 'Freestyle Content Container',
    'weight' => '14',
    'children' => array(
      0 => 'group_pl_fs_content_titles',
      1 => 'group_pl_fs_content_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Freestyle Content Container',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_fs_content_container|node|product_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_fs_content_titles_row|node|product_landing_page_freestyle|full';
  $field_group->group_name = 'group_pl_fs_content_titles_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_fs_content_titles';
  $field_group->data = array(
    'label' => 'Freestyle Content Titles Column',
    'weight' => '20',
    'children' => array(
      0 => 'field_landing_subtitle',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Freestyle Content Titles Column',
      'instance_settings' => array(
        'classes' => 'col-sm-12 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_fs_content_titles_row|node|product_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_fs_content_titles|node|product_landing_page_freestyle|full';
  $field_group->group_name = 'group_pl_fs_content_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_fs_content_container';
  $field_group->data = array(
    'label' => 'Freestyle Content Titles',
    'weight' => '20',
    'children' => array(
      0 => 'group_pl_fs_content_titles_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Freestyle Content Titles',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_fs_content_titles|node|product_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_fs_features_container|node|product_landing_page_freestyle|full';
  $field_group->group_name = 'group_pl_fs_features_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_freestyle_features';
  $field_group->data = array(
    'label' => 'Features Container',
    'weight' => '11',
    'children' => array(
      0 => 'field_features_section',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Features Container',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_fs_features_container|node|product_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_fs_masthead_container|node|product_landing_page_freestyle|full';
  $field_group->group_name = 'group_pl_fs_masthead_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_freestyle_masthead';
  $field_group->data = array(
    'label' => 'Freestyle Masthead Container',
    'weight' => '8',
    'children' => array(
      0 => 'field_top_section',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Freestyle Masthead Container',
      'instance_settings' => array(
        'classes' => 'container',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_fs_masthead_container|node|product_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_hidden_content|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_hidden_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hidden Content',
    'weight' => '16',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pl_hidden_content|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_bottom|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_masthead_bottom';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead_row3_row';
  $field_group->data = array(
    'label' => 'Masthead Bottom',
    'weight' => '12',
    'children' => array(
      0 => 'field_masthead_compare_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Masthead Bottom',
      'instance_settings' => array(
        'classes' => 'col-md-12 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_masthead_bottom|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_container|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_masthead_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead';
  $field_group->data = array(
    'label' => 'Masthead Container',
    'weight' => '4',
    'children' => array(
      0 => 'group_pl_masthead_row1',
      1 => 'group_pl_masthead_row2',
      2 => 'group_pl_masthead_row3',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Masthead Container',
      'instance_settings' => array(
        'classes' => 'container product-landing-container',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_masthead_container|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_row1_row|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_masthead_row1_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead_row1';
  $field_group->data = array(
    'label' => 'Masthead Row 1 Row',
    'weight' => '4',
    'children' => array(
      0 => 'group_pl_masthead_top_left',
      1 => 'group_pl_masthead_top_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Masthead Row 1 Row',
      'instance_settings' => array(
        'classes' => 'row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_masthead_row1_row|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_row1|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_masthead_row1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead_container';
  $field_group->data = array(
    'label' => 'Masthead Row 1',
    'weight' => '4',
    'children' => array(
      0 => 'group_pl_masthead_row1_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Masthead Row 1',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_masthead_row1|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_row2|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_masthead_row2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead_container';
  $field_group->data = array(
    'label' => 'Masthead Row 2',
    'weight' => '5',
    'children' => array(
      0 => 'group_pl_placard_container',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Masthead Row 2',
      'instance_settings' => array(
        'classes' => 'row r2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_masthead_row2|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_row3_container|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_masthead_row3_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead_row3';
  $field_group->data = array(
    'label' => 'Masthead Row 3 Container',
    'weight' => '12',
    'children' => array(
      0 => 'group_pl_masthead_row3_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Masthead Row 3 Container',
      'instance_settings' => array(
        'classes' => 'col-md-9 col-sm-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_masthead_row3_container|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_row3_row|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_masthead_row3_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead_row3_container';
  $field_group->data = array(
    'label' => 'Masthead Row 3 Row',
    'weight' => '1',
    'children' => array(
      0 => 'group_pl_masthead_bottom',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Masthead Row 3 Row',
      'instance_settings' => array(
        'classes' => 'row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_masthead_row3_row|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_row3|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_masthead_row3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead_container';
  $field_group->data = array(
    'label' => 'Masthead Row 3',
    'weight' => '6',
    'children' => array(
      0 => 'group_pl_masthead_row3_container',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Masthead Row 3',
      'instance_settings' => array(
        'classes' => 'row r3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_masthead_row3|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_subtitle|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_masthead_subtitle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead_titles';
  $field_group->data = array(
    'label' => 'Masthead Subtitle',
    'weight' => '1',
    'children' => array(
      0 => 'field_product_landing_page_paren',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Masthead Subtitle',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'small',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_masthead_subtitle|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_titles|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_masthead_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead_top_left';
  $field_group->data = array(
    'label' => 'Masthead Titles',
    'weight' => '1',
    'children' => array(
      0 => 'title',
      1 => 'group_pl_masthead_subtitle',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Masthead Titles',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_masthead_titles|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_top_left|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_masthead_top_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead_row1_row';
  $field_group->data = array(
    'label' => 'Masthead Top Left',
    'weight' => '4',
    'children' => array(
      0 => 'group_pl_masthead_titles',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Masthead Top Left',
      'instance_settings' => array(
        'classes' => 'col-lg-8 col-md-8 col-sm-6 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_masthead_top_left|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_top_right|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_pl_masthead_top_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pl_masthead_wrapper';
  $field_group->data = array(
    'label' => 'Top Section - Customer Info',
    'weight' => '10',
    'children' => array(
      0 => 'field_customer_name',
      1 => 'field_customer_details',
      2 => 'field_customer_story_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Top Section - Customer Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pl-masthead-top-right field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_pl_masthead_top_right|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_top_right|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_masthead_top_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead_row1_row';
  $field_group->data = array(
    'label' => 'Masthead Top Right',
    'weight' => '5',
    'children' => array(
      0 => 'group_pl_para',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Masthead Top Right',
      'instance_settings' => array(
        'classes' => 'col-lg-4 col-md-4 col-sm-6 c2 hidden-xs callout',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_masthead_top_right|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead_wrapper|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_pl_masthead_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Masthead Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_pl_masthead_top_right',
      1 => 'group_pl_top_section_titles',
      2 => 'group_placards_section',
      3 => 'group_masthead_extras',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-pl-masthead-wrapper field-group-htabs',
      ),
    ),
  );
  $export['group_pl_masthead_wrapper|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_masthead|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_masthead';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Masthead',
    'weight' => '0',
    'children' => array(
      0 => 'field_masthead_main_image',
      1 => 'group_pl_masthead_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Masthead',
      'instance_settings' => array(
        'classes' => 'content with-dark-blue-background with-gray-notch title products',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_masthead|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_para|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_para';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead_top_right';
  $field_group->data = array(
    'label' => 'Masthead Column Container',
    'weight' => '4',
    'children' => array(
      0 => 'field_customer_name',
      1 => 'field_customer_details',
      2 => 'field_customer_story_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Masthead Column Container',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'p',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_para|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard1_body|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard1_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard1_panel';
  $field_group->data = array(
    'label' => 'Placard 1 Body',
    'weight' => '12',
    'children' => array(
      0 => 'field_placard_1_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard 1 Body',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard1_body|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard1_footer|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard1_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard1_panel';
  $field_group->data = array(
    'label' => 'Panel 1 Footer',
    'weight' => '13',
    'children' => array(
      0 => 'group_pl_footercontainer1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Panel 1 Footer',
      'instance_settings' => array(
        'classes' => 'panel-footer',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard1_footer|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard1_heading|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard1_heading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard1_panel';
  $field_group->data = array(
    'label' => 'Placard 1 Heading',
    'weight' => '11',
    'children' => array(
      0 => 'group_pl_placard1_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard 1 Heading',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard1_heading|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard1_panel|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard1_panel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard_wrapper1';
  $field_group->data = array(
    'label' => 'Placard 1 Panel',
    'weight' => '12',
    'children' => array(
      0 => 'group_pl_placard1_heading',
      1 => 'group_pl_placard1_body',
      2 => 'group_pl_placard1_footer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard 1 Panel',
      'instance_settings' => array(
        'classes' => 'panel rounded',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard1_panel|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard1_title|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard1_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard1_heading';
  $field_group->data = array(
    'label' => 'Panel 1 Title',
    'weight' => '12',
    'children' => array(
      0 => 'field_placard_1_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Panel 1 Title',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_placard1_title|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard1|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_pl_placard1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_placards_section';
  $field_group->data = array(
    'label' => 'Placard 1 ',
    'weight' => '12',
    'children' => array(
      0 => 'field_placard_1_title',
      1 => 'field_placard_1_body',
      2 => 'field_placard_1_link_1',
      3 => 'field_placard_1_link_2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pl_placard1|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard2_body|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard2_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard2_panel';
  $field_group->data = array(
    'label' => 'Placard 2 body',
    'weight' => '13',
    'children' => array(
      0 => 'field_placard_2_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard 2 body',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard2_body|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard2_footer|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard2_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard2_panel';
  $field_group->data = array(
    'label' => 'Placard 2 Footer',
    'weight' => '14',
    'children' => array(
      0 => 'group_pl_footercontainer2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard 2 Footer',
      'instance_settings' => array(
        'classes' => 'panel-footer',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard2_footer|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard2_heading|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard2_heading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard2_panel';
  $field_group->data = array(
    'label' => 'Placard 2 Heading',
    'weight' => '12',
    'children' => array(
      0 => 'group_pl_placard2_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard 2 Heading',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard2_heading|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard2_panel|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard2_panel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard_wrapper2';
  $field_group->data = array(
    'label' => 'Placard 2 Panel',
    'weight' => '13',
    'children' => array(
      0 => 'group_pl_placard2_heading',
      1 => 'group_pl_placard2_body',
      2 => 'group_pl_placard2_footer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard 2 Panel',
      'instance_settings' => array(
        'classes' => 'panel rounded',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard2_panel|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard2_title|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard2_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard2_heading';
  $field_group->data = array(
    'label' => 'Panel 2 Title',
    'weight' => '14',
    'children' => array(
      0 => 'field_placard_2_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Panel 2 Title',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_placard2_title|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard2|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_pl_placard2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_placards_section';
  $field_group->data = array(
    'label' => 'Placard 2',
    'weight' => '13',
    'children' => array(
      0 => 'field_placard_2_title',
      1 => 'field_placard_2_body',
      2 => 'field_placard_2_link_1',
      3 => 'field_placard_2_link_2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pl_placard2|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard3_body|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard3_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard3_panel';
  $field_group->data = array(
    'label' => 'Placard 3 Body',
    'weight' => '13',
    'children' => array(
      0 => 'field_placard_3_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard 3 Body',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard3_body|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard3_footer|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard3_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard3_panel';
  $field_group->data = array(
    'label' => 'Placard 3 Footer',
    'weight' => '14',
    'children' => array(
      0 => 'group_pl_footercontainer3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard 3 Footer',
      'instance_settings' => array(
        'classes' => 'panel-footer',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard3_footer|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard3_heading|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard3_heading';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard3_panel';
  $field_group->data = array(
    'label' => 'Placard 3 Heading',
    'weight' => '12',
    'children' => array(
      0 => 'group_pl_placard3_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard 3 Heading',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard3_heading|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard3_panel|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard3_panel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard_wrapper3';
  $field_group->data = array(
    'label' => 'Placard 3 Panel',
    'weight' => '13',
    'children' => array(
      0 => 'group_pl_placard3_heading',
      1 => 'group_pl_placard3_body',
      2 => 'group_pl_placard3_footer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard 3 Panel',
      'instance_settings' => array(
        'classes' => 'panel rounded',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard3_panel|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard3_title|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard3_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard3_heading';
  $field_group->data = array(
    'label' => 'Panel 3 Title',
    'weight' => '13',
    'children' => array(
      0 => 'field_placard_3_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Panel 3 Title',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $export['group_pl_placard3_title|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard3|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_pl_placard3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_placards_section';
  $field_group->data = array(
    'label' => 'Placard 3',
    'weight' => '14',
    'children' => array(
      0 => 'field_placard_3_title',
      1 => 'field_placard_3_body',
      2 => 'field_placard_3_link_1',
      3 => 'field_placard_3_link_2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_pl_placard3|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard_container|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_masthead_row2';
  $field_group->data = array(
    'label' => 'Placard Container',
    'weight' => '4',
    'children' => array(
      0 => 'group_pl_placard_row',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard Container',
      'instance_settings' => array(
        'classes' => 'col-md-9 col-sm-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard_container|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard_row|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard_container';
  $field_group->data = array(
    'label' => 'Placard Row',
    'weight' => '4',
    'children' => array(
      0 => 'group_pl_placard_wrapper1',
      1 => 'group_pl_placard_wrapper2',
      2 => 'group_pl_placard_wrapper3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard Row',
      'instance_settings' => array(
        'classes' => 'row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard_row|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard_wrapper1|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard_wrapper1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard_row';
  $field_group->data = array(
    'label' => 'Placard Wrapper 1',
    'weight' => '4',
    'children' => array(
      0 => 'group_pl_placard1_panel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard Wrapper 1',
      'instance_settings' => array(
        'classes' => 'col-md-4 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard_wrapper1|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard_wrapper2|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard_wrapper2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard_row';
  $field_group->data = array(
    'label' => 'Placard Wrapper 2',
    'weight' => '5',
    'children' => array(
      0 => 'group_pl_placard2_panel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard Wrapper 2',
      'instance_settings' => array(
        'classes' => 'col-md-4 c2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard_wrapper2|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_placard_wrapper3|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_pl_placard_wrapper3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_pl_placard_row';
  $field_group->data = array(
    'label' => 'Placard Wrapper 3',
    'weight' => '6',
    'children' => array(
      0 => 'group_pl_placard3_panel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Placard Wrapper 3',
      'instance_settings' => array(
        'classes' => 'col-md-4 c3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_pl_placard_wrapper3|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pl_top_section_titles|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_pl_top_section_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pl_masthead_wrapper';
  $field_group->data = array(
    'label' => 'Top Section - Titles',
    'weight' => '9',
    'children' => array(
      0 => 'field_product_landing_page_paren',
      1 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_pl_top_section_titles|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_placards_section|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_placards_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pl_masthead_wrapper';
  $field_group->data = array(
    'label' => 'Placards Section',
    'weight' => '11',
    'children' => array(
      0 => 'group_pl_placard1',
      1 => 'group_pl_placard2',
      2 => 'group_pl_placard3',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-placards-section field-group-tabs',
      ),
    ),
  );
  $export['group_placards_section|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_details_tab1|node|product_detail_page_with_sidebar|form';
  $field_group->group_name = 'group_product_details_tab1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_details_tabs';
  $field_group->data = array(
    'label' => 'Account Details',
    'weight' => '6',
    'children' => array(
      0 => 'field_tab_1_body',
      1 => 'group_tab1_boxes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Account Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-product-details-tab1 field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_product_details_tab1|node|product_detail_page_with_sidebar|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_details_tab2|node|product_detail_page_with_sidebar|form';
  $field_group->group_name = 'group_product_details_tab2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_details_tabs';
  $field_group->data = array(
    'label' => 'Rates',
    'weight' => '7',
    'children' => array(
      0 => 'field_tab_2_body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Rates',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-product-details-tab2 field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_product_details_tab2|node|product_detail_page_with_sidebar|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_details_tab3|node|product_detail_page_with_sidebar|form';
  $field_group->group_name = 'group_product_details_tab3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_details_tabs';
  $field_group->data = array(
    'label' => 'Fees',
    'weight' => '8',
    'children' => array(
      0 => 'field_tab_3_body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Fees',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-product-details-tab3 field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_product_details_tab3|node|product_detail_page_with_sidebar|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_details_tabs|node|product_detail_page_with_sidebar|form';
  $field_group->group_name = 'group_product_details_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product Details Tabs',
    'weight' => '4',
    'children' => array(
      0 => 'group_product_details_tab1',
      1 => 'group_product_details_tab2',
      2 => 'group_product_details_tab3',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-product-details-tabs field-group-htabs',
      ),
    ),
  );
  $export['group_product_details_tabs|node|product_detail_page_with_sidebar|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_details_wrapper|node|product_tout_item|full';
  $field_group->group_name = 'group_product_details_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_tout_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_product_tout_wrapper';
  $field_group->data = array(
    'label' => 'Product Details Wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_product_tout_image',
      1 => 'group_left_side',
      2 => 'group_right_side',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Product Details Wrapper',
      'instance_settings' => array(
        'classes' => 'product-details-wrapper panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_product_details_wrapper|node|product_tout_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_titles_wrapper|node|product_tout_item|full';
  $field_group->group_name = 'group_product_titles_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_tout_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_product_tout_wrapper';
  $field_group->data = array(
    'label' => 'Product Titles Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_product_tout_subtitle',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Product Titles Wrapper',
      'instance_settings' => array(
        'classes' => 'product-titles-wrapper panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_product_titles_wrapper|node|product_tout_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_tout_container|node|product_tout_item|full';
  $field_group->group_name = 'group_product_tout_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_tout_item';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product Tout Container',
    'weight' => '0',
    'children' => array(
      0 => 'group_product_tout_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Product Tout Container',
      'instance_settings' => array(
        'classes' => 'product-tout-container col-md-4 col-sm-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_product_tout_container|node|product_tout_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_tout_wrapper|node|product_tout_item|full';
  $field_group->group_name = 'group_product_tout_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_tout_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_product_tout_container';
  $field_group->data = array(
    'label' => 'Product Tout Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'group_product_titles_wrapper',
      1 => 'group_product_details_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Product Tout Wrapper',
      'instance_settings' => array(
        'classes' => 'product-tout-wrapper panel rounded with-gray-border js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_product_tout_wrapper|node|product_tout_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_box1|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_box1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_boxes_row';
  $field_group->data = array(
    'label' => 'Promo Box 1',
    'weight' => '15',
    'children' => array(
      0 => 'field_promo_box_1_title',
      1 => 'field_promo_box_1_body',
      2 => 'field_promo_box_1_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Box 1',
      'instance_settings' => array(
        'classes' => 'col-md-3 c1 js-click-container',
        'element' => 'div',
        'attributes' => 'style="cursor: pointer;"',
      ),
    ),
  );
  $export['group_promo_box1|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_box1|node|promotional_landing_page|form';
  $field_group->group_name = 'group_promo_box1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_promo_boxes';
  $field_group->data = array(
    'label' => 'Promo Box 1',
    'weight' => '2',
    'children' => array(
      0 => 'field_promo_box_1_title',
      1 => 'field_promo_box_1_body',
      2 => 'field_promo_box_1_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Promo Box 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-promo-box1 field-group-fieldset col-md-6',
        'description' => '',
        'id' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_promo_box1|node|promotional_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_box1|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_box1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_boxes_row';
  $field_group->data = array(
    'label' => 'Promo Box 1',
    'weight' => '22',
    'children' => array(
      0 => 'field_promo_box_1_title',
      1 => 'field_promo_box_1_body',
      2 => 'field_promo_box_1_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Box 1',
      'instance_settings' => array(
        'classes' => 'col-md-3 c1 js-click-container',
        'element' => 'div',
        'attributes' => 'style="cursor: pointer;"',
        'description' => '',
        'required_fields' => 1,
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_promo_box1|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_box2|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_box2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_boxes_row';
  $field_group->data = array(
    'label' => 'Promo Box 2',
    'weight' => '16',
    'children' => array(
      0 => 'field_promo_box_2_title',
      1 => 'field_promo_box_2_body',
      2 => 'field_promo_box_2_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Box 2',
      'instance_settings' => array(
        'classes' => 'col-md-3 c2 js-click-container',
        'element' => 'div',
        'attributes' => 'style="cursor: pointer;"',
      ),
    ),
  );
  $export['group_promo_box2|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_box2|node|promotional_landing_page|form';
  $field_group->group_name = 'group_promo_box2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_promo_boxes';
  $field_group->data = array(
    'label' => 'Promo Box 2',
    'weight' => '3',
    'children' => array(
      0 => 'field_promo_box_2_title',
      1 => 'field_promo_box_2_body',
      2 => 'field_promo_box_2_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Promo Box 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-promo-box2 field-group-fieldset col-md-6',
        'description' => '',
        'id' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_promo_box2|node|promotional_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_box2|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_box2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_boxes_row';
  $field_group->data = array(
    'label' => 'Promo Box 2',
    'weight' => '23',
    'children' => array(
      0 => 'field_promo_box_2_title',
      1 => 'field_promo_box_2_body',
      2 => 'field_promo_box_2_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Box 2',
      'instance_settings' => array(
        'classes' => 'col-md-3 c2 js-click-container',
        'element' => 'div',
        'attributes' => 'style="cursor: pointer;"',
        'description' => '',
        'required_fields' => 1,
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_promo_box2|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_box3|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_box3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_boxes_row';
  $field_group->data = array(
    'label' => 'Promo Box 3',
    'weight' => '17',
    'children' => array(
      0 => 'field_promo_box_3_title',
      1 => 'field_promo_box_3_body',
      2 => 'field_promo_box_3_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Box 3',
      'instance_settings' => array(
        'classes' => 'col-md-3 c3 js-click-container',
        'element' => 'div',
        'attributes' => 'style="cursor: pointer;"',
      ),
    ),
  );
  $export['group_promo_box3|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_box3|node|promotional_landing_page|form';
  $field_group->group_name = 'group_promo_box3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_promo_boxes';
  $field_group->data = array(
    'label' => 'Promo Box 3',
    'weight' => '4',
    'children' => array(
      0 => 'field_promo_box_3_title',
      1 => 'field_promo_box_3_body',
      2 => 'field_promo_box_3_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Promo Box 3',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-promo-box3 field-group-fieldset col-md-6',
        'description' => '',
        'id' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_promo_box3|node|promotional_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_box3|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_box3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_boxes_row';
  $field_group->data = array(
    'label' => 'Promo Box 3',
    'weight' => '24',
    'children' => array(
      0 => 'field_promo_box_3_title',
      1 => 'field_promo_box_3_body',
      2 => 'field_promo_box_3_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Box 3',
      'instance_settings' => array(
        'classes' => 'col-md-3 c3 js-click-container',
        'element' => 'div',
        'attributes' => 'style="cursor: pointer;"',
        'description' => '',
        'required_fields' => 1,
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_promo_box3|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_box4|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_box4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_boxes_row';
  $field_group->data = array(
    'label' => 'Promo Box 4',
    'weight' => '18',
    'children' => array(
      0 => 'field_promo_box_4_title',
      1 => 'field_promo_box_4_body',
      2 => 'field_promo_link_4_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Box 4',
      'instance_settings' => array(
        'classes' => 'col-md-3 c4 js-click-container',
        'element' => 'div',
        'attributes' => 'style="cursor: pointer;"',
      ),
    ),
  );
  $export['group_promo_box4|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_box4|node|promotional_landing_page|form';
  $field_group->group_name = 'group_promo_box4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_promo_boxes';
  $field_group->data = array(
    'label' => 'Promo Box 4',
    'weight' => '5',
    'children' => array(
      0 => 'field_promo_box_4_title',
      1 => 'field_promo_box_4_body',
      2 => 'field_promo_link_4_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Promo Box 4',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-promo-box4 field-group-fieldset col-md-6',
        'description' => '',
        'id' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_promo_box4|node|promotional_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_box4|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_box4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_boxes_row';
  $field_group->data = array(
    'label' => 'Promo Box 4',
    'weight' => '25',
    'children' => array(
      0 => 'field_promo_box_4_title',
      1 => 'field_promo_box_4_body',
      2 => 'field_promo_link_4_link',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Box 4',
      'instance_settings' => array(
        'classes' => 'col-md-3 c4 js-click-container',
        'element' => 'div',
        'attributes' => 'style="cursor: pointer;"',
        'description' => '',
        'required_fields' => 1,
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_promo_box4|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_boxes_row|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_boxes_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_masthead_row2_col1';
  $field_group->data = array(
    'label' => 'Promo Boxes Row',
    'weight' => '20',
    'children' => array(
      0 => 'group_promo_box1',
      1 => 'group_promo_box2',
      2 => 'group_promo_box3',
      3 => 'group_promo_box4',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Boxes Row',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_boxes_row|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_boxes_row|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_boxes_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_masthead_row2_col1';
  $field_group->data = array(
    'label' => 'Promo Boxes Row',
    'weight' => '21',
    'children' => array(
      0 => 'group_promo_box1',
      1 => 'group_promo_box2',
      2 => 'group_promo_box3',
      3 => 'group_promo_box4',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Boxes Row',
      'instance_settings' => array(
        'classes' => 'row',
        'element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
      ),
      'formatter' => '',
    ),
  );
  $export['group_promo_boxes_row|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_boxes|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_boxes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promo Boxes',
    'weight' => '12',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Promo Boxes',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'row',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_promo_boxes|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_boxes|node|promotional_landing_page|form';
  $field_group->group_name = 'group_promo_boxes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promo Boxes',
    'weight' => '0',
    'children' => array(
      0 => 'field_breadcrumbs',
      1 => 'title',
      2 => 'group_promo_box1',
      3 => 'group_promo_box2',
      4 => 'group_promo_box3',
      5 => 'group_promo_box4',
      6 => 'group_promo_masthead_freestyle',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Promo Boxes',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'row',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_promo_boxes|node|promotional_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_boxes|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_boxes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promo Boxes',
    'weight' => '15',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Promo Boxes',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'row',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_promo_boxes|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead_container|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_masthead_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_masthead';
  $field_group->data = array(
    'label' => 'Promo Masthead Container',
    'weight' => '15',
    'children' => array(
      0 => 'group_promo_masthead_row1',
      1 => 'group_promo_masthead_row2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Masthead Container',
      'instance_settings' => array(
        'classes' => 'container',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_masthead_container|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead_container|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_masthead_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_masthead';
  $field_group->data = array(
    'label' => 'Promo Masthead Container',
    'weight' => '2',
    'children' => array(
      0 => 'group_promo_masthead_row1',
      1 => 'group_promo_masthead_row2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Masthead Container',
      'instance_settings' => array(
        'classes' => 'container',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_masthead_container|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead_freestyle|node|promotional_landing_page|form';
  $field_group->group_name = 'group_promo_masthead_freestyle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_promo_boxes';
  $field_group->data = array(
    'label' => 'FREESTYLE',
    'weight' => '6',
    'children' => array(
      0 => 'field_masthead_body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'FREESTYLE',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-promo-masthead-freestyle field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_promo_masthead_freestyle|node|promotional_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead_row1_col1|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_masthead_row1_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_masthead_row1';
  $field_group->data = array(
    'label' => 'Promo Masthead Row 1 Col1',
    'weight' => '15',
    'children' => array(
      0 => 'group_promo_title_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Masthead Row 1 Col1',
      'instance_settings' => array(
        'classes' => 'col-md-12 c1',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_masthead_row1_col1|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead_row1_col1|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_masthead_row1_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_masthead_row1';
  $field_group->data = array(
    'label' => 'Promo Masthead Row 1 Col1',
    'weight' => '13',
    'children' => array(
      0 => 'group_promo_masthead_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Masthead Row 1 Col1',
      'instance_settings' => array(
        'classes' => 'col-md-12 c1',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_masthead_row1_col1|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead_row1|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_masthead_row1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_masthead_container';
  $field_group->data = array(
    'label' => 'Promo Masthead Row 1',
    'weight' => '15',
    'children' => array(
      0 => 'group_promo_masthead_row1_col1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Masthead Row 1',
      'instance_settings' => array(
        'classes' => 'row r1',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_masthead_row1|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead_row1|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_masthead_row1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_masthead_container';
  $field_group->data = array(
    'label' => 'Promo Masthead Row 1',
    'weight' => '15',
    'children' => array(
      0 => 'group_promo_masthead_row1_col1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Masthead Row 1',
      'instance_settings' => array(
        'classes' => 'row r1',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_masthead_row1|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead_row2_col1|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_masthead_row2_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_masthead_row2';
  $field_group->data = array(
    'label' => 'Promo Masthead Row 2 Col 1',
    'weight' => '15',
    'children' => array(
      0 => 'group_promo_boxes_row',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Masthead Row 2 Col 1',
      'instance_settings' => array(
        'classes' => 'col-md-12 col-sm-12',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_masthead_row2_col1|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead_row2_col1|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_masthead_row2_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_masthead_row2';
  $field_group->data = array(
    'label' => 'Promo Masthead Row 2 Col 1',
    'weight' => '12',
    'children' => array(
      0 => 'group_promo_boxes_row',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Masthead Row 2 Col 1',
      'instance_settings' => array(
        'classes' => 'col-md-12 col-sm-12',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_masthead_row2_col1|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead_row2|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_masthead_row2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_masthead_container';
  $field_group->data = array(
    'label' => 'Promo Masthead Row 2',
    'weight' => '16',
    'children' => array(
      0 => 'group_promo_masthead_row2_col1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Masthead Row 2',
      'instance_settings' => array(
        'classes' => 'row r2',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_masthead_row2|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead_row2|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_masthead_row2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_masthead_container';
  $field_group->data = array(
    'label' => 'Promo Masthead Row 2',
    'weight' => '16',
    'children' => array(
      0 => 'group_promo_masthead_row2_col1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Masthead Row 2',
      'instance_settings' => array(
        'classes' => 'row r2',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_masthead_row2|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead_title|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_masthead_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_masthead_row1_col1';
  $field_group->data = array(
    'label' => 'Promo Masthead Title Wrapper',
    'weight' => '68',
    'children' => array(
      0 => 'breadcrumbs',
      1 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Masthead Title Wrapper',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_masthead_title|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_masthead';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promo Masthead',
    'weight' => '1',
    'children' => array(
      0 => 'group_promo_masthead_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Masthead',
      'instance_settings' => array(
        'classes' => 'content with-dark-blue-background with-white-notch title',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_masthead|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_masthead|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_masthead';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promo Masthead',
    'weight' => '1',
    'children' => array(
      0 => 'group_promo_masthead_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Masthead',
      'instance_settings' => array(
        'classes' => 'content with-dark-blue-background with-white-notch title',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_masthead|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1_container|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section1_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_section1';
  $field_group->data = array(
    'label' => 'Promo Section 1 Container',
    'weight' => '29',
    'children' => array(
      0 => 'group_promo_section1_row1',
      1 => 'group_promo_section1_row2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 1 Container',
      'instance_settings' => array(
        'classes' => 'container',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section1_container|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1_container|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section1_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section1';
  $field_group->data = array(
    'label' => 'Promo Section 1 Container',
    'weight' => '40',
    'children' => array(
      0 => 'group_promo_section1_row1',
      1 => 'group_promo_section1_row2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 1 Container',
      'instance_settings' => array(
        'classes' => 'container',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section1_container|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1_img_wrapper|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section1_img_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_section1_row2';
  $field_group->data = array(
    'label' => 'Promo Section 1 Image Wrapper',
    'weight' => '13',
    'children' => array(
      0 => 'field_promotional_1_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'classes' => 'group-promo-section1-img-wrapper field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_promo_section1_img_wrapper|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1_img_wrapper|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section1_img_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section1_row2';
  $field_group->data = array(
    'label' => 'Promo Section 1 Image Wrapper',
    'weight' => '34',
    'children' => array(
      0 => 'field_promotional_1_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 1 Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-4 img-responsive',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section1_img_wrapper|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1_row1_c1|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section1_row1_c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_section1_row1';
  $field_group->data = array(
    'label' => 'Promo Section 1 Row 1 Container',
    'weight' => '31',
    'children' => array(
      0 => 'group_promo_section1_titles',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 1 Row 1 Container',
      'instance_settings' => array(
        'classes' => 'col-sm-12',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section1_row1_c1|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1_row1_c1|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section1_row1_c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section1_row1';
  $field_group->data = array(
    'label' => 'Promo Section 1 Row 1 Container',
    'weight' => '46',
    'children' => array(
      0 => 'group_promo_section1_titles',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 1 Row 1 Container',
      'instance_settings' => array(
        'classes' => 'col-sm-12',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section1_row1_c1|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1_row1|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section1_row1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_section1_container';
  $field_group->data = array(
    'label' => 'Promo Section 1 Row 1',
    'weight' => '31',
    'children' => array(
      0 => 'group_promo_section1_row1_c1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 1 Row 1',
      'instance_settings' => array(
        'classes' => 'row r1',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section1_row1|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1_row1|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section1_row1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section1_container';
  $field_group->data = array(
    'label' => 'Promo Section 1 Row 1',
    'weight' => '45',
    'children' => array(
      0 => 'group_promo_section1_row1_c1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 1 Row 1',
      'instance_settings' => array(
        'classes' => 'row r1',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section1_row1|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1_row2|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section1_row2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_section1_container';
  $field_group->data = array(
    'label' => 'Promo Section 1 Row 2',
    'weight' => '32',
    'children' => array(
      0 => 'field_promotional_1_tagline',
      1 => 'field_promotional_1_description',
      2 => 'field_promotional_1_freestyle',
      3 => 'group_promo_section1_img_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 1 Row 2',
      'instance_settings' => array(
        'classes' => 'row r2',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section1_row2|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1_row2|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section1_row2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section1_container';
  $field_group->data = array(
    'label' => 'Promo Section 1 Row 2',
    'weight' => '46',
    'children' => array(
      0 => 'group_promo_section1_img_wrapper',
      1 => 'group_promo_section1_txt_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 1 Row 2',
      'instance_settings' => array(
        'classes' => 'row r2',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section1_row2|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1_titles|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section1_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_section1_row1_c1';
  $field_group->data = array(
    'label' => 'Promo Section 1 Titles',
    'weight' => '31',
    'children' => array(
      0 => 'field_promotional_1_subtitle',
      1 => 'field_promotional_1_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 1 Titles',
      'instance_settings' => array(
        'classes' => 'with-orange-text',
        'element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section1_titles|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1_titles|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section1_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section1_row1_c1';
  $field_group->data = array(
    'label' => 'Promo Section 1 Titles',
    'weight' => '41',
    'children' => array(
      0 => 'field_promotional_1_subtitle',
      1 => 'field_promotional_1_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 1 Titles',
      'instance_settings' => array(
        'classes' => 'with-orange-text',
        'element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section1_titles|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1_txt_wrapper|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section1_txt_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section1_row2';
  $field_group->data = array(
    'label' => 'Promo Section 1 Text Wrapper',
    'weight' => '35',
    'children' => array(
      0 => 'field_promotional_1_tagline',
      1 => 'field_promotional_1_description',
      2 => 'field_promotional_1_freestyle',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 1 Text Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-8',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section1_txt_wrapper|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotional Section 1',
    'weight' => '2',
    'children' => array(
      0 => 'group_promo_section1_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promotional Section 1',
      'instance_settings' => array(
        'classes' => 'content special-margin',
        'element' => 'section',
        'attributes' => 'id="section-1"',
      ),
    ),
  );
  $export['group_promo_section1|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1|node|promotional_landing_page|form';
  $field_group->group_name = 'group_promo_section1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_promo_sections';
  $field_group->data = array(
    'label' => 'Promotional Section 1',
    'weight' => '4',
    'children' => array(
      0 => 'field_promotional_1_subtitle',
      1 => 'field_promotional_1_title',
      2 => 'field_promotional_1_image',
      3 => 'field_promotional_1_tagline',
      4 => 'field_promotional_1_description',
      5 => 'field_promotional_1_freestyle',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Promotional Section 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-promo-section1 field-group-fieldset',
        'description' => '',
        'id' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_promo_section1|node|promotional_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section1|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotional Section 1',
    'weight' => '2',
    'children' => array(
      0 => 'group_promo_section1_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promotional Section 1',
      'instance_settings' => array(
        'classes' => 'content special-margin',
        'element' => 'section',
        'attributes' => 'id="section-1"',
      ),
    ),
  );
  $export['group_promo_section1|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section2_container|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section2_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_section2';
  $field_group->data = array(
    'label' => 'Promo Section 2 Container',
    'weight' => '31',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 2 Container',
      'instance_settings' => array(
        'classes' => 'container',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section2_container|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section2_container|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section2_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section2';
  $field_group->data = array(
    'label' => 'Promo Section 2 Container',
    'weight' => '48',
    'children' => array(
      0 => 'group_promo_section2_row1_c1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 2 Container',
      'instance_settings' => array(
        'classes' => 'container',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section2_container|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section2_img_wrapper|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section2_img_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promo Section 2 Image Wrapper',
    'weight' => '27',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 2 Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-4',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section2_img_wrapper|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section2_img_wrapper|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section2_img_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section2_row1_c1';
  $field_group->data = array(
    'label' => 'Promo Section 2 Image Wrapper',
    'weight' => '58',
    'children' => array(
      0 => 'field_promotional_2_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 2 Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-4 img-responsive',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section2_img_wrapper|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section2_row1_c1|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section2_row1_c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section2_container';
  $field_group->data = array(
    'label' => 'Promo Section 2 Row 1 Container',
    'weight' => '56',
    'children' => array(
      0 => 'field_promotional_2_freestyle',
      1 => 'group_promo_section2_img_wrapper',
      2 => 'group_promo_section2_txt_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 2 Row 1 Container',
      'instance_settings' => array(
        'classes' => 'row r1',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section2_row1_c1|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section2_txt_wrapper|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section2_txt_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section2_row1_c1';
  $field_group->data = array(
    'label' => 'Promo Section 2 Text Wrapper',
    'weight' => '57',
    'children' => array(
      0 => 'field_promotional_2_title',
      1 => 'field_promotional_2_body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 2 Text Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-8',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section2_txt_wrapper|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section2|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotional Section 2',
    'weight' => '25',
    'children' => array(
      0 => 'group_promo_section2_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promotional Section 2',
      'instance_settings' => array(
        'classes' => 'content with-gray-background',
        'element' => 'section',
        'attributes' => 'id="section-2"',
      ),
    ),
  );
  $export['group_promo_section2|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section2|node|promotional_landing_page|form';
  $field_group->group_name = 'group_promo_section2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_promo_sections';
  $field_group->data = array(
    'label' => 'Promotional Section 2',
    'weight' => '5',
    'children' => array(
      0 => 'field_promotional_2_title',
      1 => 'field_promotional_2_body',
      2 => 'field_promotional_2_image',
      3 => 'field_promotional_2_freestyle',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Promotional Section 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-promo-section2 field-group-fieldset',
        'description' => '',
        'id' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_promo_section2|node|promotional_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section2|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotional Section 2',
    'weight' => '3',
    'children' => array(
      0 => 'group_promo_section2_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promotional Section 2',
      'instance_settings' => array(
        'classes' => 'content with-gray-background',
        'element' => 'section',
        'attributes' => 'id="section-2"',
      ),
    ),
  );
  $export['group_promo_section2|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section3_container|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section3_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_section3';
  $field_group->data = array(
    'label' => 'Promo Section 3 Container',
    'weight' => '31',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 3 Container',
      'instance_settings' => array(
        'classes' => 'container',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section3_container|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section3_container|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section3_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section3';
  $field_group->data = array(
    'label' => 'Promo Section 3 Container',
    'weight' => '18',
    'children' => array(
      0 => 'group_promo_section3_row1_c1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 3 Container',
      'instance_settings' => array(
        'classes' => 'container',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section3_container|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section3_img_wrapper|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section3_img_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promo Section 3 Image Wrapper',
    'weight' => '27',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 3 Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-4',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section3_img_wrapper|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section3_img_wrapper|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section3_img_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section3_row1_c1';
  $field_group->data = array(
    'label' => 'Promo Section 3 Image Wrapper',
    'weight' => '20',
    'children' => array(
      0 => 'field_promotional_3_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 3 Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-4 img-responsive',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section3_img_wrapper|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section3_row1_c1|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section3_row1_c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section3_container';
  $field_group->data = array(
    'label' => 'Promo Section 3 Row 1 Container',
    'weight' => '19',
    'children' => array(
      0 => 'field_promotional_3_freestyle',
      1 => 'group_promo_section3_img_wrapper',
      2 => 'group_promo_section3_txt_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 3 Row 1 Container',
      'instance_settings' => array(
        'classes' => 'row r1',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section3_row1_c1|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section3_txt_wrapper|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section3_txt_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section3_row1_c1';
  $field_group->data = array(
    'label' => 'Promo Section 3 Text Wrapper',
    'weight' => '21',
    'children' => array(
      0 => 'field_promotional_3_title',
      1 => 'field_promotional_3_body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 3 Text Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-8',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section3_txt_wrapper|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section3|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotional Section 3',
    'weight' => '26',
    'children' => array(
      0 => 'group_promo_section3_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promotional Section 3',
      'instance_settings' => array(
        'classes' => 'content special-margin',
        'element' => 'section',
        'attributes' => 'id="section-3"',
      ),
    ),
  );
  $export['group_promo_section3|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section3|node|promotional_landing_page|form';
  $field_group->group_name = 'group_promo_section3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_promo_sections';
  $field_group->data = array(
    'label' => 'Promotional Section 3',
    'weight' => '6',
    'children' => array(
      0 => 'field_promotional_3_image',
      1 => 'field_promotional_3_title',
      2 => 'field_promotional_3_body',
      3 => 'field_promotional_3_freestyle',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Promotional Section 3',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-promo-section3 field-group-fieldset',
        'description' => '',
        'id' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_promo_section3|node|promotional_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section3|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotional Section 3',
    'weight' => '4',
    'children' => array(
      0 => 'group_promo_section3_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promotional Section 3',
      'instance_settings' => array(
        'classes' => 'content special-margin',
        'element' => 'section',
        'attributes' => 'id="section-3"',
      ),
    ),
  );
  $export['group_promo_section3|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section4_container|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section4_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_section4';
  $field_group->data = array(
    'label' => 'Promo Section 4 Container',
    'weight' => '31',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 4 Container',
      'instance_settings' => array(
        'classes' => 'container',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section4_container|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section4_container|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section4_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section4';
  $field_group->data = array(
    'label' => 'Promo Section 4 Container',
    'weight' => '16',
    'children' => array(
      0 => 'field_promotional_4_freestyle',
      1 => 'group_promo_section4_row1_c1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 4 Container',
      'instance_settings' => array(
        'classes' => 'container',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section4_container|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section4_img_wrapper|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section4_img_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promo Section 4 Image Wrapper',
    'weight' => '27',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 4 Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-4',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section4_img_wrapper|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section4_img_wrapper|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section4_img_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section4_row1_c1';
  $field_group->data = array(
    'label' => 'Promo Section 4 Image Wrapper',
    'weight' => '64',
    'children' => array(
      0 => 'field_promotional_4_image',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 4 Image Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-4 img-responsive',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section4_img_wrapper|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section4_row1_c1|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section4_row1_c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section4_container';
  $field_group->data = array(
    'label' => 'Promo Section 4 Row 1 Container',
    'weight' => '62',
    'children' => array(
      0 => 'group_promo_section4_img_wrapper',
      1 => 'group_promo_section4_txt_wrapper',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 4 Row 1 Container',
      'instance_settings' => array(
        'classes' => 'row r1',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section4_row1_c1|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section4_txt_wrapper|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section4_txt_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_promo_section4_row1_c1';
  $field_group->data = array(
    'label' => 'Promo Section 4 Text Wrapper',
    'weight' => '63',
    'children' => array(
      0 => 'field_promotional_4_title',
      1 => 'field_promotional_4_body',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Section 4 Text Wrapper',
      'instance_settings' => array(
        'classes' => 'col-sm-8',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_section4_txt_wrapper|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section4|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_section4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotional Section 4',
    'weight' => '27',
    'children' => array(
      0 => 'group_promo_section4_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promotional Section 4',
      'instance_settings' => array(
        'classes' => 'group-promo-section4 field-group-html-element',
        'element' => 'div',
        'attributes' => 'id="section-4"',
      ),
    ),
  );
  $export['group_promo_section4|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section4|node|promotional_landing_page|form';
  $field_group->group_name = 'group_promo_section4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_promo_sections';
  $field_group->data = array(
    'label' => 'Promotional Section 4',
    'weight' => '7',
    'children' => array(
      0 => 'field_promotional_4_title',
      1 => 'field_promotional_4_body',
      2 => 'field_promotional_4_image',
      3 => 'field_promotional_4_freestyle',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-promo-section4 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_promo_section4|node|promotional_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_section4|node|promotional_landing_page|full';
  $field_group->group_name = 'group_promo_section4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotional Section 4',
    'weight' => '5',
    'children' => array(
      0 => 'group_promo_section4_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promotional Section 4',
      'instance_settings' => array(
        'classes' => 'content with-gray-background',
        'element' => 'section',
        'attributes' => 'id="section-4"',
      ),
    ),
  );
  $export['group_promo_section4|node|promotional_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_sections|node|promotional_landing_page|form';
  $field_group->group_name = 'group_promo_sections';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotional Sections',
    'weight' => '2',
    'children' => array(
      0 => 'group_promo_section1',
      1 => 'group_promo_section2',
      2 => 'group_promo_section3',
      3 => 'group_promo_section4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-promo-sections field-group-htabs',
      ),
    ),
  );
  $export['group_promo_sections|node|promotional_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_promo_title_wrapper|node|promotional_landing_page|default';
  $field_group->group_name = 'group_promo_title_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promotional_landing_page';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_promo_masthead_row1_col1';
  $field_group->data = array(
    'label' => 'Promo Title Wrapper',
    'weight' => '20',
    'children' => array(
      0 => 'field_breadcrumbs',
      1 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Promo Title Wrapper',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'h2',
        'attributes' => '',
      ),
    ),
  );
  $export['group_promo_title_wrapper|node|promotional_landing_page|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quote_wrapper|node|basic_page_with_hero_image|default';
  $field_group->group_name = 'group_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_hero_image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_right_side';
  $field_group->data = array(
    'label' => 'Quote Wrapper',
    'weight' => '7',
    'children' => array(
      0 => 'field_quote',
      1 => 'field_quote_source',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Quote Wrapper',
      'instance_settings' => array(
        'classes' => 'group-quote-wrapper field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_quote_wrapper|node|basic_page_with_hero_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quote_wrapper|node|basic_page_with_hero_image|form';
  $field_group->group_name = 'group_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_hero_image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_right_side';
  $field_group->data = array(
    'label' => 'Quote Wrapper',
    'weight' => '15',
    'children' => array(
      0 => 'field_quote',
      1 => 'field_quote_source',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Quote Wrapper',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-quote-wrapper field-group-div row',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'element' => 'div',
        'attributes' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_quote_wrapper|node|basic_page_with_hero_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quote_wrapper|node|basic_page_with_hero_image|full';
  $field_group->group_name = 'group_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_hero_image';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_right_side';
  $field_group->data = array(
    'label' => 'Quote Wrapper',
    'weight' => '17',
    'children' => array(
      0 => 'field_quote',
      1 => 'field_quote_source',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Quote Wrapper',
      'instance_settings' => array(
        'classes' => 'row quote',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_quote_wrapper|node|basic_page_with_hero_image|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quote_wrapper|node|basic_page_with_image|full';
  $field_group->group_name = 'group_quote_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_image';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_right_side';
  $field_group->data = array(
    'label' => 'Quote Wrapper',
    'weight' => '5',
    'children' => array(
      0 => 'field_basic_quote',
      1 => 'field_basic_quote_source',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Quote Wrapper',
      'instance_settings' => array(
        'classes' => 'quote row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_quote_wrapper|node|basic_page_with_image|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rates|node|product_detail_page_with_sidebar|full';
  $field_group->group_name = 'group_rates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_details_tabs';
  $field_group->data = array(
    'label' => 'Rates',
    'weight' => '17',
    'children' => array(
      0 => 'field_tab_2_body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Rates',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'tab-content',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_rates|node|product_detail_page_with_sidebar|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_row|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_right_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_right_wrapper';
  $field_group->data = array(
    'label' => 'Right Row',
    'weight' => '57',
    'children' => array(
      0 => 'group_sidebar_top',
      1 => 'group_sidebar_bottom',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right Row',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right_row|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_side|node|basic_page_with_hero_image|default';
  $field_group->group_name = 'group_right_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_hero_image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right Side',
    'weight' => '12',
    'children' => array(
      0 => 'group_quote_wrapper',
      1 => 'group_share_section',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right Side',
      'instance_settings' => array(
        'classes' => 'group-right-side field-group-div col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right_side|node|basic_page_with_hero_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_side|node|basic_page_with_hero_image|form';
  $field_group->group_name = 'group_right_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_hero_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right Side',
    'weight' => '1',
    'children' => array(
      0 => 'group_quote_wrapper',
      1 => 'group_share_section',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-right-side field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_right_side|node|basic_page_with_hero_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_side|node|basic_page_with_hero_image|full';
  $field_group->group_name = 'group_right_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_hero_image';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right Side',
    'weight' => '10',
    'children' => array(
      0 => 'group_share_section',
      1 => 'group_quote_wrapper',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right Side',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-12 c3  hidden-sm pull-right',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right_side|node|basic_page_with_hero_image|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_side|node|basic_page_with_image|full';
  $field_group->group_name = 'group_right_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_image';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Right Side',
    'weight' => '4',
    'children' => array(
      0 => 'group_quote_wrapper',
      1 => 'group_share_section',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right Side',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right_side|node|basic_page_with_image|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_side|node|product_tout_item|full';
  $field_group->group_name = 'group_right_side';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_tout_item';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_product_details_wrapper';
  $field_group->data = array(
    'label' => 'Right Side',
    'weight' => '10',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Right Side',
      'instance_settings' => array(
        'classes' => 'pull-right product-tout-item-right col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right_side|node|product_tout_item|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1_features|node|segment_landing_page|form';
  $field_group->group_name = 'group_s1_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_segment_section_1';
  $field_group->data = array(
    'label' => 'S1 Features',
    'weight' => '10',
    'children' => array(
      0 => 'field_s1_features_title',
      1 => 'field_s1_features_link_1',
      2 => 'field_s1_features_link_2',
      3 => 'field_s1_features_link_3',
      4 => 'field_s1_features_link_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s1-features field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_s1_features|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1_p1_group|node|segment_landing_page|form';
  $field_group->group_name = 'group_s1_p1_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_s1_panels';
  $field_group->data = array(
    'label' => 'S1 P1 Group',
    'weight' => '18',
    'children' => array(
      0 => 'field_s1_p1_title',
      1 => 'field_s1_p1_body',
      2 => 'field_s1_p1_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s1-p1-group field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_s1_p1_group|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1_p2_group|node|segment_landing_page|form';
  $field_group->group_name = 'group_s1_p2_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_s1_panels';
  $field_group->data = array(
    'label' => 'S1 P2 Group',
    'weight' => '19',
    'children' => array(
      0 => 'field_s1_p2_title',
      1 => 'field_s1_p2_body',
      2 => 'field_s1_p2_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s1-p2-group field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_s1_p2_group|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1_p3_group|node|segment_landing_page|form';
  $field_group->group_name = 'group_s1_p3_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_s1_panels';
  $field_group->data = array(
    'label' => 'S1 P3 Group',
    'weight' => '20',
    'children' => array(
      0 => 'field_s1_p3_title',
      1 => 'field_s1_p3_body',
      2 => 'field_s1_p3_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s1-p3-group field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_s1_p3_group|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1_panels|node|segment_landing_page|form';
  $field_group->group_name = 'group_s1_panels';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_segment_section_1';
  $field_group->data = array(
    'label' => 'S1 Panels',
    'weight' => '9',
    'children' => array(
      0 => 'group_s1_p1_group',
      1 => 'group_s1_p2_group',
      2 => 'group_s1_p3_group',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-s1-panels field-group-htabs',
      ),
    ),
  );
  $export['group_s1_panels|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r1c1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r1c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r1';
  $field_group->data = array(
    'label' => 's1c1r1c1',
    'weight' => '42',
    'children' => array(
      0 => 'field_s1_main_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r1c1',
      'instance_settings' => array(
        'classes' => 'col-sm-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r1c1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1';
  $field_group->data = array(
    'label' => 's1c1r1',
    'weight' => '97',
    'children' => array(
      0 => 'group_s1c1r1c1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r1',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c1p1pb1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c1p1pb1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2c1p1';
  $field_group->data = array(
    'label' => 's1c1r2c1p1pb1',
    'weight' => '98',
    'children' => array(
      0 => 'field_s1_p1_body',
      1 => 'field_s1_p1_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c1p1pb1',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c1p1pb1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c1p1ph1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c1p1ph1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2c1p1';
  $field_group->data = array(
    'label' => 's1c1r2c1p1ph1',
    'weight' => '97',
    'children' => array(
      0 => 'field_s1_p1_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c1p1ph1',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c1p1ph1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c1p1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c1p1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2c1';
  $field_group->data = array(
    'label' => 's1c1r2c1p1',
    'weight' => '97',
    'children' => array(
      0 => 'group_s1c1r2c1p1ph1',
      1 => 'group_s1c1r2c1p1pb1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c1p1',
      'instance_settings' => array(
        'classes' => 'panel rounded with-gray-border js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c1p1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2';
  $field_group->data = array(
    'label' => 's1c1r2c1',
    'weight' => '48',
    'children' => array(
      0 => 'group_s1c1r2c1p1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c1',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c2p1pb1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c2p1pb1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2c2p1';
  $field_group->data = array(
    'label' => 's1c1r2c2p1pb1',
    'weight' => '98',
    'children' => array(
      0 => 'field_s1_p2_body',
      1 => 'field_s1_p2_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c2p1pb1',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c2p1pb1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c2p1ph1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c2p1ph1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2c2p1';
  $field_group->data = array(
    'label' => 's1c1r2c2p1ph1',
    'weight' => '97',
    'children' => array(
      0 => 'field_s1_p2_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c2p1ph1',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c2p1ph1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c2p1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c2p1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2c2';
  $field_group->data = array(
    'label' => 's1c1r2c2p1',
    'weight' => '98',
    'children' => array(
      0 => 'group_s1c1r2c2p1ph1',
      1 => 'group_s1c1r2c2p1pb1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c2p1',
      'instance_settings' => array(
        'classes' => 'panel rounded with-gray-border js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c2p1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c2|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2';
  $field_group->data = array(
    'label' => 's1c1r2c2',
    'weight' => '49',
    'children' => array(
      0 => 'group_s1c1r2c2p1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c2',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6 c2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c2|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c3p1pb1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c3p1pb1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2c3p1';
  $field_group->data = array(
    'label' => 's1c1r2c3p1pb1',
    'weight' => '49',
    'children' => array(
      0 => 'field_s1_p3_body',
      1 => 'field_s1_p3_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c3p1pb1',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c3p1pb1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c3p1ph1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c3p1ph1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2c3p1';
  $field_group->data = array(
    'label' => 's1c1r2c3p1ph1',
    'weight' => '48',
    'children' => array(
      0 => 'field_s1_p3_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c3p1ph1',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c3p1ph1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c3p1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c3p1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2c3';
  $field_group->data = array(
    'label' => 's1c1r2c3p1',
    'weight' => '98',
    'children' => array(
      0 => 'group_s1c1r2c3p1ph1',
      1 => 'group_s1c1r2c3p1pb1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c3p1',
      'instance_settings' => array(
        'classes' => 'panel rounded with-gray-border js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c3p1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c3|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2';
  $field_group->data = array(
    'label' => 's1c1r2c3',
    'weight' => '50',
    'children' => array(
      0 => 'group_s1c1r2c3p1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c3',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6 c3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c3|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c4p1pb1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c4p1pb1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2c4p1';
  $field_group->data = array(
    'label' => 's1c1r2c4p1pb1',
    'weight' => '99',
    'children' => array(
      0 => 'field_s1_features_title',
      1 => 'group_s1c1r2c4ul1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c4p1pb1',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c4p1pb1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c4p1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c4p1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2c4';
  $field_group->data = array(
    'label' => 's1c1r2c4p1',
    'weight' => '98',
    'children' => array(
      0 => 'group_s1c1r2c4p1pb1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c4p1',
      'instance_settings' => array(
        'classes' => 'panel features',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c4p1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c4ul1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c4ul1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2c4p1pb1';
  $field_group->data = array(
    'label' => 's1c1r2c4ul1',
    'weight' => '53',
    'children' => array(
      0 => 'field_s1_features_link_1',
      1 => 'field_s1_features_link_2',
      2 => 'field_s1_features_link_3',
      3 => 'field_s1_features_link_4',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 's1c1r2c4ul1',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'ul',
        'attributes' => '',
      ),
    ),
  );
  $export['group_s1c1r2c4ul1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2c4|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2c4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1r2';
  $field_group->data = array(
    'label' => 's1c1r2c4',
    'weight' => '51',
    'children' => array(
      0 => 'group_s1c1r2c4p1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2c4',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6 c4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2c4|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1r2|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1c1';
  $field_group->data = array(
    'label' => 's1c1r2',
    'weight' => '98',
    'children' => array(
      0 => 'group_s1c1r2c1',
      1 => 'group_s1c1r2c2',
      2 => 'group_s1c1r2c3',
      3 => 'group_s1c1r2c4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1r2',
      'instance_settings' => array(
        'classes' => 'row r2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1r2|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1c1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s1';
  $field_group->data = array(
    'label' => 's1c1',
    'weight' => '97',
    'children' => array(
      0 => 'group_s1c1r1',
      1 => 'group_s1c1r2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's1c1',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s1c1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'S1 ',
    'weight' => '1',
    'children' => array(
      0 => 'group_s1c1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'S1 ',
      'instance_settings' => array(
        'classes' => 'content',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_s1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s2c1r1c1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s2c1r1c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s2c1r1';
  $field_group->data = array(
    'label' => 's2c1r1c1',
    'weight' => '124',
    'children' => array(
      0 => 'field_s2_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's2c1r1c1',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s2c1r1c1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s2c1r1c2h3|node|segment_landing_page|full';
  $field_group->group_name = 'group_s2c1r1c2h3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s2c1r1c2';
  $field_group->data = array(
    'label' => 's2c1r1c2h3',
    'weight' => '134',
    'children' => array(
      0 => 'field_s2_main_title',
      1 => 'field_s2_subtitle',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 's2c1r1c2h3',
      'instance_settings' => array(
        'classes' => 'with-blue-text',
        'element' => 'h3',
        'attributes' => '',
      ),
    ),
  );
  $export['group_s2c1r1c2h3|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s2c1r1c2|node|segment_landing_page|full';
  $field_group->group_name = 'group_s2c1r1c2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s2c1r1';
  $field_group->data = array(
    'label' => 's2c1r1c2',
    'weight' => '125',
    'children' => array(
      0 => 'field_s2_body_text',
      1 => 'field_s2_link',
      2 => 'group_s2c1r1c2h3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's2c1r1c2',
      'instance_settings' => array(
        'classes' => 'col-md-9 col-sm-6',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s2c1r1c2|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s2c1r1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s2c1r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s2c1';
  $field_group->data = array(
    'label' => 's2c1r1',
    'weight' => '116',
    'children' => array(
      0 => 'group_s2c1r1c1',
      1 => 'group_s2c1r1c2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's2c1r1',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s2c1r1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s2c1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s2c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s2';
  $field_group->data = array(
    'label' => 's2c1',
    'weight' => '98',
    'children' => array(
      0 => 'group_s2c1r1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's2c1',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s2c1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s2|node|segment_landing_page|full';
  $field_group->group_name = 'group_s2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'S2',
    'weight' => '2',
    'children' => array(
      0 => 'group_s2c1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'S2',
      'instance_settings' => array(
        'classes' => 'content with-gray-background',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_s2|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3_features|node|segment_landing_page|form';
  $field_group->group_name = 'group_s3_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_segment_section_3';
  $field_group->data = array(
    'label' => 'S3 Features',
    'weight' => '34',
    'children' => array(
      0 => 'field_s3_features_title',
      1 => 'field_s3_features_link_1',
      2 => 'field_s3_features_link_2',
      3 => 'field_s3_features_link_3',
      4 => 'field_s3_features_link_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s3-features field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_s3_features|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3_p1_group|node|segment_landing_page|form';
  $field_group->group_name = 'group_s3_p1_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_s3_panels';
  $field_group->data = array(
    'label' => 'S3 P1 Group',
    'weight' => '33',
    'children' => array(
      0 => 'field_s3_p1_title',
      1 => 'field_s3_p1_body',
      2 => 'field_s3_p1_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s3-p1-group field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_s3_p1_group|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3_p2_group|node|segment_landing_page|form';
  $field_group->group_name = 'group_s3_p2_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_s3_panels';
  $field_group->data = array(
    'label' => 'S3 P2 Group',
    'weight' => '34',
    'children' => array(
      0 => 'field_s3_p2_title',
      1 => 'field_s3_p2_body',
      2 => 'field_s3_p2_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s3-p2-group field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_s3_p2_group|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3_p3_group|node|segment_landing_page|form';
  $field_group->group_name = 'group_s3_p3_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_s3_panels';
  $field_group->data = array(
    'label' => 'S3 P3 Group',
    'weight' => '35',
    'children' => array(
      0 => 'field_s3_p3_title',
      1 => 'field_s3_p3_body',
      2 => 'field_s3_p3_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s3-p3-group field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_s3_p3_group|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3_panels|node|segment_landing_page|form';
  $field_group->group_name = 'group_s3_panels';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_segment_section_3';
  $field_group->data = array(
    'label' => 'S3 Panels',
    'weight' => '33',
    'children' => array(
      0 => 'group_s3_p1_group',
      1 => 'group_s3_p2_group',
      2 => 'group_s3_p3_group',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-s3-panels field-group-htabs',
      ),
    ),
  );
  $export['group_s3_panels|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r1c1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r1c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r1';
  $field_group->data = array(
    'label' => 's3c1r1c1',
    'weight' => '152',
    'children' => array(
      0 => 'field_s3_main_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r1c1',
      'instance_settings' => array(
        'classes' => 'col-sm-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r1c1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1';
  $field_group->data = array(
    'label' => 's3c1r1',
    'weight' => '149',
    'children' => array(
      0 => 'group_s3c1r1c1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r1',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c1p1pb1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c1p1pb1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2c1p1';
  $field_group->data = array(
    'label' => 's3c1r2c1p1pb1',
    'weight' => '33',
    'children' => array(
      0 => 'field_s3_p1_body',
      1 => 'field_s3_p1_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c1p1pb1',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c1p1pb1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c1p1ph1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c1p1ph1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2c1p1';
  $field_group->data = array(
    'label' => 's3c1r2c1p1ph1',
    'weight' => '32',
    'children' => array(
      0 => 'field_s3_p1_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c1p1ph1',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c1p1ph1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c1p1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c1p1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2c1';
  $field_group->data = array(
    'label' => 's3c1r2c1p1',
    'weight' => '156',
    'children' => array(
      0 => 'group_s3c1r2c1p1ph1',
      1 => 'group_s3c1r2c1p1pb1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c1p1',
      'instance_settings' => array(
        'classes' => 'panel rounded with-gray-border js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c1p1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2';
  $field_group->data = array(
    'label' => 's3c1r2c1',
    'weight' => '164',
    'children' => array(
      0 => 'group_s3c1r2c1p1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c1',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c2p1pb1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c2p1pb1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2c2p1';
  $field_group->data = array(
    'label' => 's3c1r2c2p1pb1',
    'weight' => '30',
    'children' => array(
      0 => 'field_s3_p2_body',
      1 => 'field_s3_p2_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c2p1pb1',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c2p1pb1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c2p1ph1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c2p1ph1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2c2p1';
  $field_group->data = array(
    'label' => 's3c1r2c2p1ph1',
    'weight' => '29',
    'children' => array(
      0 => 'field_s3_p2_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c2p1ph1',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c2p1ph1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c2p1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c2p1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2c2';
  $field_group->data = array(
    'label' => 's3c1r2c2p1',
    'weight' => '100',
    'children' => array(
      0 => 'group_s3c1r2c2p1ph1',
      1 => 'group_s3c1r2c2p1pb1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c2p1',
      'instance_settings' => array(
        'classes' => 'panel rounded with-gray-border js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c2p1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c2|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2';
  $field_group->data = array(
    'label' => 's3c1r2c2',
    'weight' => '165',
    'children' => array(
      0 => 'group_s3c1r2c2p1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c2',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6 c2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c2|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c3p1pb1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c3p1pb1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2c3p1';
  $field_group->data = array(
    'label' => 's3c1r2c3p1pb1',
    'weight' => '26',
    'children' => array(
      0 => 'field_s3_p3_body',
      1 => 'field_s3_p3_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c3p1pb1',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c3p1pb1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c3p1ph1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c3p1ph1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2c3p1';
  $field_group->data = array(
    'label' => 's3c1r2c3p1ph1',
    'weight' => '25',
    'children' => array(
      0 => 'field_s3_p3_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c3p1ph1',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c3p1ph1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c3p1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c3p1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2c3';
  $field_group->data = array(
    'label' => 's3c1r2c3p1',
    'weight' => '155',
    'children' => array(
      0 => 'group_s3c1r2c3p1ph1',
      1 => 'group_s3c1r2c3p1pb1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c3p1',
      'instance_settings' => array(
        'classes' => 'panel rounded with-gray-border js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c3p1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c3|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2';
  $field_group->data = array(
    'label' => 's3c1r2c3',
    'weight' => '167',
    'children' => array(
      0 => 'group_s3c1r2c3p1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c3',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6 c3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c3|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c4p1pb1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c4p1pb1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2c4p1';
  $field_group->data = array(
    'label' => 's3c1r2c4p1pb1',
    'weight' => '145',
    'children' => array(
      0 => 'field_s3_features_title',
      1 => 'group_s3c1r2c4ul1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c4p1pb1',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c4p1pb1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c4p1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c4p1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2c4';
  $field_group->data = array(
    'label' => 's3c1r2c4p1',
    'weight' => '155',
    'children' => array(
      0 => 'group_s3c1r2c4p1pb1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c4p1',
      'instance_settings' => array(
        'classes' => 'panel features',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c4p1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c4ul1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c4ul1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2c4p1pb1';
  $field_group->data = array(
    'label' => 's3c1r2c4ul1',
    'weight' => '162',
    'children' => array(
      0 => 'field_s3_features_link_1',
      1 => 'field_s3_features_link_2',
      2 => 'field_s3_features_link_3',
      3 => 'field_s3_features_link_4',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 's3c1r2c4ul1',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'ul',
        'attributes' => '',
      ),
    ),
  );
  $export['group_s3c1r2c4ul1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2c4|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2c4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1r2';
  $field_group->data = array(
    'label' => 's3c1r2c4',
    'weight' => '168',
    'children' => array(
      0 => 'group_s3c1r2c4p1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2c4',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6 c4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2c4|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1r2|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3c1';
  $field_group->data = array(
    'label' => 's3c1r2',
    'weight' => '151',
    'children' => array(
      0 => 'group_s3c1r2c1',
      1 => 'group_s3c1r2c2',
      2 => 'group_s3c1r2c3',
      3 => 'group_s3c1r2c4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1r2',
      'instance_settings' => array(
        'classes' => 'row r2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1r2|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3c1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s3';
  $field_group->data = array(
    'label' => 's3c1',
    'weight' => '98',
    'children' => array(
      0 => 'group_s3c1r1',
      1 => 'group_s3c1r2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's3c1',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s3c1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s3|node|segment_landing_page|full';
  $field_group->group_name = 'group_s3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'S3',
    'weight' => '3',
    'children' => array(
      0 => 'group_s3c1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'S3',
      'instance_settings' => array(
        'classes' => 'content',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_s3|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s4c1r1c1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s4c1r1c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s4c1r1';
  $field_group->data = array(
    'label' => 's4c1r1c1',
    'weight' => '164',
    'children' => array(
      0 => 'field_s4_main_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's4c1r1c1',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6 hidden-sm hidden-xs margin-bottom-neg-40',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s4c1r1c1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s4c1r1c2|node|segment_landing_page|full';
  $field_group->group_name = 'group_s4c1r1c2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s4c1r1';
  $field_group->data = array(
    'label' => 's4c1r1c2',
    'weight' => '165',
    'children' => array(
      0 => 'field_s4_quote',
      1 => 'field_s4_quote_author',
      2 => 'field_s4_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's4c1r1c2',
      'instance_settings' => array(
        'classes' => 'col-md-9 col-sm-6 no-margin-on-mobile',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s4c1r1c2|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s4c1r1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s4c1r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s4c1';
  $field_group->data = array(
    'label' => 's4c1r1',
    'weight' => '5',
    'children' => array(
      0 => 'group_s4c1r1c1',
      1 => 'group_s4c1r1c2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's4c1r1',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s4c1r1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s4c1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s4c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s4';
  $field_group->data = array(
    'label' => 's4c1',
    'weight' => '146',
    'children' => array(
      0 => 'group_s4c1r1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's4c1',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s4c1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s4|node|segment_landing_page|full';
  $field_group->group_name = 'group_s4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'S4',
    'weight' => '4',
    'children' => array(
      0 => 'group_s4c1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'S4',
      'instance_settings' => array(
        'classes' => 'content with-gray-background',
        'element' => 'section',
        'attributes' => 'style="margin-bottom:40px;margin-top:37px;"',
      ),
    ),
  );
  $export['group_s4|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5_features|node|segment_landing_page|form';
  $field_group->group_name = 'group_s5_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_segment_section_5';
  $field_group->data = array(
    'label' => 'S5 Features',
    'weight' => '45',
    'children' => array(
      0 => 'field_s5_features_title',
      1 => 'field_s5_features_link_1',
      2 => 'field_s5_features_link_2',
      3 => 'field_s5_features_link_3',
      4 => 'field_s5_features_link_4',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s5-features field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_s5_features|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5_p1_group|node|segment_landing_page|form';
  $field_group->group_name = 'group_s5_p1_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_s5_panels';
  $field_group->data = array(
    'label' => 'S5 P1 Group',
    'weight' => '45',
    'children' => array(
      0 => 'field_s5_p1_title',
      1 => 'field_s5_p1_body',
      2 => 'field_s5_p1_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s5-p1-group field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_s5_p1_group|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5_p2_group|node|segment_landing_page|form';
  $field_group->group_name = 'group_s5_p2_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_s5_panels';
  $field_group->data = array(
    'label' => 'S5 P2 Group',
    'weight' => '46',
    'children' => array(
      0 => 'field_s5_p2_title',
      1 => 'field_s5_p2_body',
      2 => 'field_s5_p2_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s5-p2-group field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_s5_p2_group|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5_p3_group|node|segment_landing_page|form';
  $field_group->group_name = 'group_s5_p3_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_s5_panels';
  $field_group->data = array(
    'label' => 'S5 P3 Group',
    'weight' => '47',
    'children' => array(
      0 => 'field_s5_p3_title',
      1 => 'field_s5_p3_body',
      2 => 'field_s5_p3_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-s5-p3-group field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_s5_p3_group|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5_panels|node|segment_landing_page|form';
  $field_group->group_name = 'group_s5_panels';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_segment_section_5';
  $field_group->data = array(
    'label' => 'S5 Panels',
    'weight' => '43',
    'children' => array(
      0 => 'group_s5_p1_group',
      1 => 'group_s5_p2_group',
      2 => 'group_s5_p3_group',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-s5-panels field-group-htabs',
      ),
    ),
  );
  $export['group_s5_panels|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r1c1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r1c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r1';
  $field_group->data = array(
    'label' => 's5c1r1c1',
    'weight' => '161',
    'children' => array(
      0 => 'field_s5_main_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r1c1',
      'instance_settings' => array(
        'classes' => 'col-sm-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r1c1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1';
  $field_group->data = array(
    'label' => 's5c1r1',
    'weight' => '149',
    'children' => array(
      0 => 'group_s5c1r1c1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r1',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c1p1pb1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c1p1pb1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2c1p1';
  $field_group->data = array(
    'label' => 's5c1r2c1p1pb1',
    'weight' => '28',
    'children' => array(
      0 => 'field_s5_p3_body',
      1 => 'field_s5_p3_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c1p1pb1',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c1p1pb1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c1p1ph1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c1p1ph1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2c1p1';
  $field_group->data = array(
    'label' => 's5c1r2c1p1ph1',
    'weight' => '27',
    'children' => array(
      0 => 'field_s5_p3_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c1p1ph1',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c1p1ph1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c1p1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c1p1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2c1';
  $field_group->data = array(
    'label' => 's5c1r2c1p1',
    'weight' => '155',
    'children' => array(
      0 => 'group_s5c1r2c1p1ph1',
      1 => 'group_s5c1r2c1p1pb1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c1p1',
      'instance_settings' => array(
        'classes' => 'panel rounded with-gray-border js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c1p1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2';
  $field_group->data = array(
    'label' => 's5c1r2c1',
    'weight' => '16',
    'children' => array(
      0 => 'group_s5c1r2c1p1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c1',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c2p1pb1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c2p1pb1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2c2p1';
  $field_group->data = array(
    'label' => 's5c1r2c2p1pb1',
    'weight' => '21',
    'children' => array(
      0 => 'field_s5_p2_body',
      1 => 'field_s5_p2_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c2p1pb1',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c2p1pb1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c2p1ph1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c2p1ph1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2c2p1';
  $field_group->data = array(
    'label' => 's5c1r2c2p1ph1',
    'weight' => '20',
    'children' => array(
      0 => 'field_s5_p2_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c2p1ph1',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c2p1ph1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c2p1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c2p1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2c2';
  $field_group->data = array(
    'label' => 's5c1r2c2p1',
    'weight' => '158',
    'children' => array(
      0 => 'group_s5c1r2c2p1ph1',
      1 => 'group_s5c1r2c2p1pb1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c2p1',
      'instance_settings' => array(
        'classes' => 'panel rounded with-gray-border js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c2p1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c2|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2';
  $field_group->data = array(
    'label' => 's5c1r2c2',
    'weight' => '17',
    'children' => array(
      0 => 'group_s5c1r2c2p1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c2',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6 c2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c2|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c3p1pb1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c3p1pb1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2c3p1';
  $field_group->data = array(
    'label' => 's5c1r2c3p1pb1',
    'weight' => '19',
    'children' => array(
      0 => 'field_s5_p1_body',
      1 => 'field_s5_p1_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c3p1pb1',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c3p1pb1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c3p1ph1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c3p1ph1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2c3p1';
  $field_group->data = array(
    'label' => 's5c1r2c3p1ph1',
    'weight' => '18',
    'children' => array(
      0 => 'field_s5_p1_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c3p1ph1',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c3p1ph1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c3p1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c3p1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2c3';
  $field_group->data = array(
    'label' => 's5c1r2c3p1',
    'weight' => '154',
    'children' => array(
      0 => 'group_s5c1r2c3p1ph1',
      1 => 'group_s5c1r2c3p1pb1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c3p1',
      'instance_settings' => array(
        'classes' => 'panel rounded with-gray-border js-click-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c3p1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c3|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2';
  $field_group->data = array(
    'label' => 's5c1r2c3',
    'weight' => '18',
    'children' => array(
      0 => 'group_s5c1r2c3p1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c3',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6 c3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c3|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c4p1pb1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c4p1pb1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2c4p1';
  $field_group->data = array(
    'label' => 's5c1r2c4p1pb1',
    'weight' => '18',
    'children' => array(
      0 => 'field_s5_features_title',
      1 => 'group_s5c1r2c4ul1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c4p1pb1',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c4p1pb1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c4p1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c4p1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2c4';
  $field_group->data = array(
    'label' => 's5c1r2c4p1',
    'weight' => '161',
    'children' => array(
      0 => 'group_s5c1r2c4p1pb1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c4p1',
      'instance_settings' => array(
        'classes' => 'panel features',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c4p1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c4ul1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c4ul1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2c4p1pb1';
  $field_group->data = array(
    'label' => 's5c1r2c4ul1',
    'weight' => '147',
    'children' => array(
      0 => 'field_s5_features_link_1',
      1 => 'field_s5_features_link_2',
      2 => 'field_s5_features_link_3',
      3 => 'field_s5_features_link_4',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 's5c1r2c4ul1',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'ul',
        'attributes' => '',
      ),
    ),
  );
  $export['group_s5c1r2c4ul1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2c4|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2c4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1r2';
  $field_group->data = array(
    'label' => 's5c1r2c4',
    'weight' => '20',
    'children' => array(
      0 => 'group_s5c1r2c4p1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2c4',
      'instance_settings' => array(
        'classes' => 'col-md-3 col-sm-6 c4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2c4|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1r2|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5c1';
  $field_group->data = array(
    'label' => 's5c1r2',
    'weight' => '150',
    'children' => array(
      0 => 'group_s5c1r2c1',
      1 => 'group_s5c1r2c2',
      2 => 'group_s5c1r2c3',
      3 => 'group_s5c1r2c4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1r2',
      'instance_settings' => array(
        'classes' => 'row r2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1r2|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5c1|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5c1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s5';
  $field_group->data = array(
    'label' => 's5c1',
    'weight' => '41',
    'children' => array(
      0 => 'group_s5c1r1',
      1 => 'group_s5c1r2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 's5c1',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_s5c1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s5|node|segment_landing_page|full';
  $field_group->group_name = 'group_s5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'S5',
    'weight' => '5',
    'children' => array(
      0 => 'group_s5c1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'S5',
      'instance_settings' => array(
        'classes' => 'content',
        'element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_s5|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_seg_grey2_wrapper|node|segment_landing_page_freestyle|full';
  $field_group->group_name = 'group_seg_grey2_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Segment Section Grey 2 Wrapper',
    'weight' => '4',
    'children' => array(
      0 => 'field_segment_section_grey_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Segment Section Grey 2 Wrapper',
      'instance_settings' => array(
        'classes' => 'content with-gray-background',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_seg_grey2_wrapper|node|segment_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_seg_grey_wrapper|node|segment_landing_page_freestyle|default';
  $field_group->group_name = 'group_seg_grey_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page_freestyle';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Segment Section Grey Wrapper',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Segment Section Grey Wrapper',
      'instance_settings' => array(
        'classes' => 'content with-gray-background',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_seg_grey_wrapper|node|segment_landing_page_freestyle|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_seg_grey_wrapper|node|segment_landing_page_freestyle|full';
  $field_group->group_name = 'group_seg_grey_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Segment Section Grey Wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_segment_section_grey',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Segment Section Grey Wrapper',
      'instance_settings' => array(
        'classes' => 'content with-gray-background',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_seg_grey_wrapper|node|segment_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_seg_white2_wrapper|node|segment_landing_page_freestyle|full';
  $field_group->group_name = 'group_seg_white2_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Segment Section White 2 Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'field_segment_section_white_2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Segment Section White 2 Wrapper',
      'instance_settings' => array(
        'classes' => 'content',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_seg_white2_wrapper|node|segment_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_seg_white_wrapper|node|segment_landing_page_freestyle|default';
  $field_group->group_name = 'group_seg_white_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page_freestyle';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Segment Section White Wrapper',
    'weight' => '5',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Segment Section White Wrapper',
      'instance_settings' => array(
        'classes' => 'content',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_seg_white_wrapper|node|segment_landing_page_freestyle|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_seg_white_wrapper|node|segment_landing_page_freestyle|full';
  $field_group->group_name = 'group_seg_white_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page_freestyle';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Segment Section White Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_segment_section_white',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Segment Section White Wrapper',
      'instance_settings' => array(
        'classes' => 'content',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_seg_white_wrapper|node|segment_landing_page_freestyle|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment_masthead_container|node|segment_landing_page|full';
  $field_group->group_name = 'group_segment_masthead_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_segment_masthead';
  $field_group->data = array(
    'label' => 'Container',
    'weight' => '164',
    'children' => array(
      0 => 'group_segment_masthead_r1',
      1 => 'group_segment_masthead_r2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Container',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_segment_masthead_container|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment_masthead_r1|node|segment_landing_page|full';
  $field_group->group_name = 'group_segment_masthead_r1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_segment_masthead_container';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '164',
    'children' => array(
      0 => 'group_titles',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Row',
      'instance_settings' => array(
        'classes' => 'row r1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_segment_masthead_r1|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment_masthead_r2|node|segment_landing_page|full';
  $field_group->group_name = 'group_segment_masthead_r2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_segment_masthead_container';
  $field_group->data = array(
    'label' => 'Row',
    'weight' => '165',
    'children' => array(
      0 => 'group_masthead_leftside',
      1 => 'group_masthead_rightside',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Row',
      'instance_settings' => array(
        'classes' => 'row r2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_segment_masthead_r2|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment_masthead|node|segment_landing_page|full';
  $field_group->group_name = 'group_segment_masthead';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Segment Masthead',
    'weight' => '0',
    'children' => array(
      0 => 'group_segment_masthead_container',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Segment Masthead',
      'instance_settings' => array(
        'classes' => 'content with-dark-blue-background with-white-notch title segment-masthead',
        'element' => 'section',
        'attributes' => '',
      ),
    ),
  );
  $export['group_segment_masthead|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment_section_1|node|segment_landing_page|form';
  $field_group->group_name = 'group_segment_section_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Segment Section 1',
    'weight' => '5',
    'children' => array(
      0 => 'field_s1_main_title',
      1 => 'group_s1_panels',
      2 => 'group_s1_features',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Segment Section 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-segment-section-1 field-group-div',
        'element' => 'section',
        'attributes' => '',
        'description' => '',
        'id' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_segment_section_1|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment_section_2|node|segment_landing_page|form';
  $field_group->group_name = 'group_segment_section_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Segment Section 2',
    'weight' => '6',
    'children' => array(
      0 => 'field_s2_main_title',
      1 => 'field_s2_subtitle',
      2 => 'field_s2_image',
      3 => 'field_s2_body_text',
      4 => 'field_s2_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Segment Section 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-segment-section-2 field-group-div',
        'element' => 'section',
        'attributes' => '',
        'description' => '',
        'id' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_segment_section_2|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment_section_3|node|segment_landing_page|form';
  $field_group->group_name = 'group_segment_section_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Segment Section 3',
    'weight' => '7',
    'children' => array(
      0 => 'field_s3_main_title',
      1 => 'group_s3_panels',
      2 => 'group_s3_features',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Segment Section 3',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-segment-section-3 field-group-div',
        'element' => 'section',
        'attributes' => '',
        'description' => '',
        'id' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_segment_section_3|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment_section_4|node|segment_landing_page|form';
  $field_group->group_name = 'group_segment_section_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Segment Section 4',
    'weight' => '8',
    'children' => array(
      0 => 'field_s4_main_image',
      1 => 'field_s4_quote',
      2 => 'field_s4_quote_author',
      3 => 'field_s4_link',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Segment Section 4',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-segment-section-4 field-group-html-element',
        'element' => 'section',
        'attributes' => '',
        'description' => '',
        'id' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_segment_section_4|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_segment_section_5|node|segment_landing_page|form';
  $field_group->group_name = 'group_segment_section_5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Segment Section 5',
    'weight' => '9',
    'children' => array(
      0 => 'field_s5_main_title',
      1 => 'group_s5_panels',
      2 => 'group_s5_features',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Segment Section 5',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-segment-section-5 field-group-html-element',
        'element' => 'section',
        'attributes' => '',
        'description' => '',
        'id' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_segment_section_5|node|segment_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share_section|node|basic_page_with_hero_image|default';
  $field_group->group_name = 'group_share_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_hero_image';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_right_side';
  $field_group->data = array(
    'label' => 'Share Section',
    'weight' => '6',
    'children' => array(
      0 => 'field_share_widget',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Share Section',
      'instance_settings' => array(
        'classes' => 'group-share-section field-group-div row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_share_section|node|basic_page_with_hero_image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share_section|node|basic_page_with_hero_image|form';
  $field_group->group_name = 'group_share_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_hero_image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_right_side';
  $field_group->data = array(
    'label' => 'Share Section',
    'weight' => '14',
    'children' => array(
      0 => 'field_share_widget',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-share-section field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_share_section|node|basic_page_with_hero_image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share_section|node|basic_page_with_hero_image|full';
  $field_group->group_name = 'group_share_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_hero_image';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_right_side';
  $field_group->data = array(
    'label' => 'Share Section',
    'weight' => '16',
    'children' => array(
      0 => 'field_share_widget',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Share Section',
      'instance_settings' => array(
        'classes' => 'row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_share_section|node|basic_page_with_hero_image|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share_section|node|basic_page_with_image|full';
  $field_group->group_name = 'group_share_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'basic_page_with_image';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_right_side';
  $field_group->data = array(
    'label' => 'Share Section',
    'weight' => '4',
    'children' => array(
      0 => 'field_share_widget_basic',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Share Section',
      'instance_settings' => array(
        'classes' => 'group-share-section field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_share_section|node|basic_page_with_image|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_bottom|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_sidebar_bottom';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_right_row';
  $field_group->data = array(
    'label' => 'Sidebar Bottom',
    'weight' => '59',
    'children' => array(
      0 => 'group_sidebar_panel_bottom',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar Bottom',
      'instance_settings' => array(
        'classes' => 'col-md-12 col-sm-6 c3 in-sidebar',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sidebar_bottom|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_panel_bottom_body|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_sidebar_panel_bottom_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sidebar_panel_bottom';
  $field_group->data = array(
    'label' => 'Sidebar Panel Bottom Body',
    'weight' => '59',
    'children' => array(
      0 => 'field_panel_bottom_description',
      1 => 'field_panel_bottom_link',
      2 => 'field_panel_bottom_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar Panel Bottom Body',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sidebar_panel_bottom_body|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_panel_bottom_title|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_sidebar_panel_bottom_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sidebar_panel_bottom';
  $field_group->data = array(
    'label' => 'Sidebar Panel Bottom Heading',
    'weight' => '58',
    'children' => array(
      0 => 'field_panel_bottom_heading',
      1 => 'field_panel_bottom_subheading',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar Panel Bottom Heading',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sidebar_panel_bottom_title|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_panel_bottom|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_sidebar_panel_bottom';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_right_side';
  $field_group->data = array(
    'label' => 'Sidebar Panel Bottom',
    'weight' => '60',
    'children' => array(
      0 => 'field_panel_bottom_heading',
      1 => 'field_panel_bottom_subheading',
      2 => 'field_panel_bottom_description',
      3 => 'field_panel_bottom_link',
      4 => 'field_panel_bottom_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sidebar-panel-bottom field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sidebar_panel_bottom|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_panel_bottom|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_sidebar_panel_bottom';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sidebar_bottom';
  $field_group->data = array(
    'label' => 'Sidebar Panel Bottom',
    'weight' => '57',
    'children' => array(
      0 => 'group_sidebar_panel_bottom_title',
      1 => 'group_sidebar_panel_bottom_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar Panel Bottom',
      'instance_settings' => array(
        'classes' => 'panel js-click-container sidebar-bottom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sidebar_panel_bottom|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_panel_top_body|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_sidebar_panel_top_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sidebar_panel_top';
  $field_group->data = array(
    'label' => 'Sidebar Panel Top Body',
    'weight' => '58',
    'children' => array(
      0 => 'field_panel_top_description',
      1 => 'field_panel_top_link',
      2 => 'field_panel_top_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar Panel Top Body',
      'instance_settings' => array(
        'classes' => 'panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sidebar_panel_top_body|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_panel_top_title|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_sidebar_panel_top_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sidebar_panel_top';
  $field_group->data = array(
    'label' => 'Sidebar Panel Top Heading',
    'weight' => '57',
    'children' => array(
      0 => 'field_panel_top_heading',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar Panel Top Heading',
      'instance_settings' => array(
        'classes' => 'panel-heading',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sidebar_panel_top_title|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_panel_top|node|product_landing_page_strict|form';
  $field_group->group_name = 'group_sidebar_panel_top';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content_right_side';
  $field_group->data = array(
    'label' => 'Sidebar Panel Top',
    'weight' => '59',
    'children' => array(
      0 => 'field_panel_top_heading',
      1 => 'field_panel_top_description',
      2 => 'field_panel_top_link',
      3 => 'field_panel_top_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sidebar-panel-top field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sidebar_panel_top|node|product_landing_page_strict|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_panel_top|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_sidebar_panel_top';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_sidebar_top';
  $field_group->data = array(
    'label' => 'Sidebar Panel Top',
    'weight' => '57',
    'children' => array(
      0 => 'group_sidebar_panel_top_title',
      1 => 'group_sidebar_panel_top_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar Panel Top',
      'instance_settings' => array(
        'classes' => 'panel js-click-container sidebar-top',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sidebar_panel_top|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_top|node|product_landing_page_strict|full';
  $field_group->group_name = 'group_sidebar_top';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_landing_page_strict';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_right_row';
  $field_group->data = array(
    'label' => 'Sidebar Top',
    'weight' => '58',
    'children' => array(
      0 => 'group_sidebar_panel_top',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sidebar Top',
      'instance_settings' => array(
        'classes' => 'col-md-12 col-sm-6 c2 in-sidebar',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sidebar_top|node|product_landing_page_strict|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slideshow_content|node|informational_gateway_item|form';
  $field_group->group_name = 'group_slideshow_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_headline_section';
  $field_group->data = array(
    'label' => 'Slideshow Content',
    'weight' => '16',
    'children' => array(
      0 => 'field_slideshow_image',
      1 => 'field_slideshow_title',
      2 => 'field_slideshow_description',
      3 => 'field_slideshow_order',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-slideshow-content field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_slideshow_content|node|informational_gateway_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slideshow_section|node|informational_gateway_item|form';
  $field_group->group_name = 'group_slideshow_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'informational_gateway_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slideshow Section',
    'weight' => '1',
    'children' => array(
      0 => 'field_slideshow_title',
      1 => 'field_slideshow_description',
      2 => 'field_slideshow_order',
      3 => 'field_slideshow_image',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-slideshow-section field-group-htabs',
      ),
    ),
  );
  $export['group_slideshow_section|node|informational_gateway_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subtitle|node|segment_landing_page|full';
  $field_group->group_name = 'group_subtitle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_main_h2';
  $field_group->data = array(
    'label' => 'Subtitle',
    'weight' => '1',
    'children' => array(
      0 => 'field_segment_page_subtitle',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Subtitle',
      'instance_settings' => array(
        'classes' => '',
        'element' => 'small',
        'attributes' => '',
      ),
    ),
  );
  $export['group_subtitle|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_t1s2b1|node|product_detail_page|form';
  $field_group->group_name = 'group_t1s2b1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab1_boxes';
  $field_group->data = array(
    'label' => 'Box 1',
    'weight' => '12',
    'children' => array(
      0 => 'field_tab_1_section_2_box_1_icon',
      1 => 'field_tab_1_section_2_box_1_titl',
      2 => 'field_tab_1_section_2_box_1_body',
      3 => 'field_tab_1_section_2_box_1_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-t1s2b1 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_t1s2b1|node|product_detail_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_t1s2b2|node|product_detail_page|form';
  $field_group->group_name = 'group_t1s2b2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab1_boxes';
  $field_group->data = array(
    'label' => 'Box 2',
    'weight' => '13',
    'children' => array(
      0 => 'field_tab_1_section_2_box_2_icon',
      1 => 'field_tab_1_section_2_box_2_titl',
      2 => 'field_tab_1_section_2_box_2_body',
      3 => 'field_tab_1_section_2_box_2_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-t1s2b2 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_t1s2b2|node|product_detail_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_t1s2b3|node|product_detail_page|form';
  $field_group->group_name = 'group_t1s2b3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab1_boxes';
  $field_group->data = array(
    'label' => 'Box 3',
    'weight' => '14',
    'children' => array(
      0 => 'field_tab_1_section_2_box_3_icon',
      1 => 'field_tab_1_section_2_box_3_titl',
      2 => 'field_tab_1_section_2_box_3_body',
      3 => 'field_tab_1_section_2_box_3_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-t1s2b3 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_t1s2b3|node|product_detail_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_t1s2b4|node|product_detail_page|form';
  $field_group->group_name = 'group_t1s2b4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab1_boxes';
  $field_group->data = array(
    'label' => 'Box 4',
    'weight' => '15',
    'children' => array(
      0 => 'field_tab_1_section_2_box_4_icon',
      1 => 'field_tab_1_section_2_box_4_titl',
      2 => 'field_tab_1_section_2_box_4_body',
      3 => 'field_tab_1_section_2_box_4_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-t1s2b4 field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_t1s2b4|node|product_detail_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1_boxes|node|product_detail_page|form';
  $field_group->group_name = 'group_tab1_boxes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_product_details_tab1';
  $field_group->data = array(
    'label' => 'Tab 1 Boxes',
    'weight' => '6',
    'children' => array(
      0 => 'field_tab_1_section_2_header',
      1 => 'field_tab_1_body_2',
      2 => 'group_t1s2b1',
      3 => 'group_t1s2b2',
      4 => 'group_t1s2b3',
      5 => 'group_t1s2b4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tab1-boxes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_tab1_boxes|node|product_detail_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1_row3_col1|node|product_detail_page|full';
  $field_group->group_name = 'group_tab1_row3_col1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_tab1_row3';
  $field_group->data = array(
    'label' => 'Tab 1 Row 3 Col 1',
    'weight' => '1',
    'children' => array(
      0 => 'field_tab_1_section_2_header',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tab 1 Row 3 Col 1',
      'instance_settings' => array(
        'classes' => 'col-sm-12 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tab1_row3_col1|node|product_detail_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1_row3_col2|node|product_detail_page|full';
  $field_group->group_name = 'group_tab1_row3_col2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_tab1_row3';
  $field_group->data = array(
    'label' => 'Tab 1 Row 3 Col 2',
    'weight' => '2',
    'children' => array(
      0 => 'group_panel1_box',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tab 1 Row 3 Col 2',
      'instance_settings' => array(
        'classes' => 'col-md-6 col-sm-6 c2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tab1_row3_col2|node|product_detail_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1_row3_col3|node|product_detail_page|full';
  $field_group->group_name = 'group_tab1_row3_col3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_tab1_row3';
  $field_group->data = array(
    'label' => 'Tab 1 Row 3 Col 3',
    'weight' => '3',
    'children' => array(
      0 => 'group_panel2_box',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tab 1 Row 3 Col 3',
      'instance_settings' => array(
        'classes' => 'col-md-6 col-sm-6 c3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tab1_row3_col3|node|product_detail_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1_row3_col4|node|product_detail_page|full';
  $field_group->group_name = 'group_tab1_row3_col4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_tab1_row3';
  $field_group->data = array(
    'label' => 'Tab 1 Row 3 Col 4',
    'weight' => '5',
    'children' => array(
      0 => 'group_panel3_box',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tab 1 Row 3 Col 4',
      'instance_settings' => array(
        'classes' => 'col-md-6 col-sm-6 c4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tab1_row3_col4|node|product_detail_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1_row3_col5|node|product_detail_page|full';
  $field_group->group_name = 'group_tab1_row3_col5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_tab1_row3';
  $field_group->data = array(
    'label' => 'Tab 1 Row 3 Col 5',
    'weight' => '6',
    'children' => array(
      0 => 'group_panel4_box',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tab 1 Row 3 Col 5',
      'instance_settings' => array(
        'classes' => 'col-md-6 col-sm-6 c5',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tab1_row3_col5|node|product_detail_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab1_row3|node|product_detail_page|full';
  $field_group->group_name = 'group_tab1_row3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'product_detail_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_account_details';
  $field_group->data = array(
    'label' => 'Tab 1 Row 3',
    'weight' => '4',
    'children' => array(
      0 => 'group_tab1_row3_col1',
      1 => 'group_tab1_row3_col2',
      2 => 'group_tab1_row3_col3',
      3 => 'group_tab1_row3_col4',
      4 => 'group_tab1_row3_col5',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tab 1 Row 3',
      'instance_settings' => array(
        'classes' => 'row r3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tab1_row3|node|product_detail_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_titles|node|segment_landing_page|full';
  $field_group->group_name = 'group_titles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'segment_landing_page';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_segment_masthead_r1';
  $field_group->data = array(
    'label' => 'Titles',
    'weight' => '164',
    'children' => array(
      0 => 'group_main_h2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Titles',
      'instance_settings' => array(
        'classes' => 'col-md-12 c1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_titles|node|segment_landing_page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_info_leftside|user|user|default';
  $field_group->group_name = 'group_user_info_leftside';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_info_wrapper';
  $field_group->data = array(
    'label' => 'User Info Left Side',
    'weight' => '4',
    'children' => array(
      0 => 'ds_user_picture',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'User Info Left Side',
      'instance_settings' => array(
        'classes' => 'col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_info_leftside|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_info_rightside|user|user|default';
  $field_group->group_name = 'group_user_info_rightside';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_user_info_wrapper';
  $field_group->data = array(
    'label' => 'User Info Right Side',
    'weight' => '6',
    'children' => array(
      0 => 'summary',
      1 => 'name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'User Info Right Side',
      'instance_settings' => array(
        'classes' => 'col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_info_rightside|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_info_wrapper|user|user|default';
  $field_group->group_name = 'group_user_info_wrapper';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User Info Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_user_info_leftside',
      1 => 'group_user_info_rightside',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'User Info Wrapper',
      'instance_settings' => array(
        'classes' => 'row',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_info_wrapper|user|user|default'] = $field_group;

  return $export;
}
