<?php
/**
 * @file
 * ab_token_requests.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ab_token_requests_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'token_request_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Token Request Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Token Request Export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_company_id' => 'field_company_id',
    'field_admin_email' => 'field_admin_email',
    'field_is_completed' => 'field_is_completed',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_serial_number' => 'field_serial_number',
    'php' => 'php',
    'field_token_type' => 'field_token_type',
    'path' => 'path',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_company_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_admin_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_is_completed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_serial_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_token_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Token Request  found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'token_request' => 'token_request',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Token Requests (field_token_request) */
  $handler->display->display_options['relationships']['field_token_request_value']['id'] = 'field_token_request_value';
  $handler->display->display_options['relationships']['field_token_request_value']['table'] = 'field_data_field_token_request';
  $handler->display->display_options['relationships']['field_token_request_value']['field'] = 'field_token_request_value';
  $handler->display->display_options['relationships']['field_token_request_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Company ID */
  $handler->display->display_options['fields']['field_company_id']['id'] = 'field_company_id';
  $handler->display->display_options['fields']['field_company_id']['table'] = 'field_data_field_company_id';
  $handler->display->display_options['fields']['field_company_id']['field'] = 'field_company_id';
  $handler->display->display_options['fields']['field_company_id']['element_label_colon'] = FALSE;
  /* Field: Content: Request Manager Email */
  $handler->display->display_options['fields']['field_admin_email']['id'] = 'field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['table'] = 'field_data_field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['field'] = 'field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Completed */
  $handler->display->display_options['fields']['field_is_completed']['id'] = 'field_is_completed';
  $handler->display->display_options['fields']['field_is_completed']['table'] = 'field_data_field_is_completed';
  $handler->display->display_options['fields']['field_is_completed']['field'] = 'field_is_completed';
  $handler->display->display_options['fields']['field_is_completed']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_is_completed']['element_label_colon'] = FALSE;
  /* Field: Field collection item: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Serial Number */
  $handler->display->display_options['fields']['field_serial_number']['id'] = 'field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['table'] = 'field_data_field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['field'] = 'field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_serial_number']['label'] = '';
  $handler->display->display_options['fields']['field_serial_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_serial_number']['alter']['text'] = '****';
  $handler->display->display_options['fields']['field_serial_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_serial_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_serial_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_serial_number']['type'] = 'text_plain';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Serial Number';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$str = $data->field_field_serial_number[0][\'raw\'][\'safe_value\'];
$newstr = (strlen($str)>4)?substr($str, -4):$str;
print "*****".$newstr; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Field collection item: Token Type */
  $handler->display->display_options['fields']['field_token_type']['id'] = 'field_token_type';
  $handler->display->display_options['fields']['field_token_type']['table'] = 'field_data_field_token_type';
  $handler->display->display_options['fields']['field_token_type']['field'] = 'field_token_type';
  $handler->display->display_options['fields']['field_token_type']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_token_type']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Link';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">View</a>';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'AMA-Tokens-Requests-%timestamp-mmm-%timestamp-yyyy.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Token Requests (field_token_request) */
  $handler->display->display_options['relationships']['field_token_request_value']['id'] = 'field_token_request_value';
  $handler->display->display_options['relationships']['field_token_request_value']['table'] = 'field_data_field_token_request';
  $handler->display->display_options['relationships']['field_token_request_value']['field'] = 'field_token_request_value';
  $handler->display->display_options['relationships']['field_token_request_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_token_request_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Request Manager Email */
  $handler->display->display_options['fields']['field_admin_email']['id'] = 'field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['table'] = 'field_data_field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['field'] = 'field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_email']['type'] = 'email_plain';
  /* Field: Content: Company ID */
  $handler->display->display_options['fields']['field_company_id']['id'] = 'field_company_id';
  $handler->display->display_options['fields']['field_company_id']['table'] = 'field_data_field_company_id';
  $handler->display->display_options['fields']['field_company_id']['field'] = 'field_company_id';
  $handler->display->display_options['fields']['field_company_id']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Serial Number */
  $handler->display->display_options['fields']['field_serial_number']['id'] = 'field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['table'] = 'field_data_field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['field'] = 'field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_serial_number']['label'] = '';
  $handler->display->display_options['fields']['field_serial_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_serial_number']['alter']['text'] = '****';
  $handler->display->display_options['fields']['field_serial_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_serial_number']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_serial_number']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Serial Number';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$str = $data->field_field_serial_number[0][\'raw\'][\'safe_value\'];
$newstr = (strlen($str)>4)?substr($str, -4):$str;
print "*****".$newstr; 
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Field collection item: Completed */
  $handler->display->display_options['fields']['field_is_completed']['id'] = 'field_is_completed';
  $handler->display->display_options['fields']['field_is_completed']['table'] = 'field_data_field_is_completed';
  $handler->display->display_options['fields']['field_is_completed']['field'] = 'field_is_completed';
  $handler->display->display_options['fields']['field_is_completed']['relationship'] = 'field_token_request_value';
  /* Field: Field collection item: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_first_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_first_name']['type'] = 'text_plain';
  /* Field: Field collection item: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Token Type */
  $handler->display->display_options['fields']['field_token_type']['id'] = 'field_token_type';
  $handler->display->display_options['fields']['field_token_type']['table'] = 'field_data_field_token_type';
  $handler->display->display_options['fields']['field_token_type']['field'] = 'field_token_type';
  $handler->display->display_options['fields']['field_token_type']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_token_type']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'URL';
  $handler->display->display_options['fields']['path']['element_type'] = '0';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['path'] = 'admin/ama/tokens/export/csv';
  $export['token_request_export'] = $view;

  return $export;
}
