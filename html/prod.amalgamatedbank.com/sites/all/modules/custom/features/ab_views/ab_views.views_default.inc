<?php
/**
 * @file
 * ab_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ab_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'corporate_responsiblity';
  $view->description = '"In the News" printout of the latest stories. ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Corporate Responsiblity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Corporate Responsibility';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
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
    'page' => 'page',
    'basic_page_freestyle' => 'basic_page_freestyle',
    'basic_page_with_hero_image' => 'basic_page_with_hero_image',
    'basic_page_with_image' => 'basic_page_with_image',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['corporate_responsiblity'] = $view;

  $view = new view();
  $view->name = 'development_table_of_contents';
  $view->description = 'Sample pages for the end client to view. progress. ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Development Table of Contents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Development Table of Contents';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'page' => 'page',
    'basic_page_with_hero_image' => 'basic_page_with_hero_image',
    'basic_page_with_image' => 'basic_page_with_image',
    'front_page' => 'front_page',
    'product_detail_page' => 'product_detail_page',
    'product_detail_page_without_side' => 'product_detail_page_without_side',
    'product_landing_page' => 'product_landing_page',
    'segment_landing_page' => 'segment_landing_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['development_table_of_contents'] = $view;

  $view = new view();
  $view->name = 'events';
  $view->description = '"In the News" printout of the latest stories. ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Event Date';
  $handler->display->display_options['fields']['fieldset_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['alter']['text'] = '<span>';
  $handler->display->display_options['fields']['fieldset_1']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_event_month',
    1 => 'field_event_day',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'col-md-2 date';
  /* Field: Content: Event Month */
  $handler->display->display_options['fields']['field_event_month']['id'] = 'field_event_month';
  $handler->display->display_options['fields']['field_event_month']['table'] = 'field_data_field_event_month';
  $handler->display->display_options['fields']['field_event_month']['field'] = 'field_event_month';
  $handler->display->display_options['fields']['field_event_month']['label'] = '';
  $handler->display->display_options['fields']['field_event_month']['alter']['text'] = '<small>';
  $handler->display->display_options['fields']['field_event_month']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_month']['element_class'] = 'event-month';
  $handler->display->display_options['fields']['field_event_month']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_month']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_month']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Event Day */
  $handler->display->display_options['fields']['field_event_day']['id'] = 'field_event_day';
  $handler->display->display_options['fields']['field_event_day']['table'] = 'field_data_field_event_day';
  $handler->display->display_options['fields']['field_event_day']['field'] = 'field_event_day';
  $handler->display->display_options['fields']['field_event_day']['label'] = '';
  $handler->display->display_options['fields']['field_event_day']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_day']['element_class'] = 'event-day';
  $handler->display->display_options['fields']['field_event_day']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_day']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_day']['settings'] = array(
    'format_type' => 'day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Event Title and Location';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'title',
    1 => 'fieldset',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'event-text col-md-10';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'event-title ';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Event Location';
  $handler->display->display_options['fields']['fieldset']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['alter']['text'] = '<small>';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_event_city',
    1 => 'field_event_state',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'event-location';
  /* Field: Content: Event City */
  $handler->display->display_options['fields']['field_event_city']['id'] = 'field_event_city';
  $handler->display->display_options['fields']['field_event_city']['table'] = 'field_data_field_event_city';
  $handler->display->display_options['fields']['field_event_city']['field'] = 'field_event_city';
  $handler->display->display_options['fields']['field_event_city']['label'] = '';
  $handler->display->display_options['fields']['field_event_city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_city']['alter']['text'] = '[field_event_city-value], ';
  $handler->display->display_options['fields']['field_event_city']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_city']['element_class'] = 'event-city';
  $handler->display->display_options['fields']['field_event_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_city']['element_default_classes'] = FALSE;
  /* Field: Content: Event State */
  $handler->display->display_options['fields']['field_event_state']['id'] = 'field_event_state';
  $handler->display->display_options['fields']['field_event_state']['table'] = 'field_data_field_event_state';
  $handler->display->display_options['fields']['field_event_state']['field'] = 'field_event_state';
  $handler->display->display_options['fields']['field_event_state']['label'] = '';
  $handler->display->display_options['fields']['field_event_state']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_event_state']['element_class'] = 'event-state';
  $handler->display->display_options['fields']['field_event_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_state']['element_default_classes'] = FALSE;
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
    'event' => 'event',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['events'] = $view;

  $view = new view();
  $view->name = 'in_the_news';
  $view->description = '"In the News" printout of the latest stories. ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'In the news';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'In the news';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = '';
  $handler->display->display_options['fields']['field_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_published']['element_wrapper_class'] = 'published-date';
  $handler->display->display_options['fields']['field_published']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_published']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
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
    'basic_page_with_image' => 'basic_page_with_image',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'tags';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['in_the_news'] = $view;

  $view = new view();
  $view->name = 'product_touts_view';
  $view->description = 'Prints the product touts to the page. ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Product Touts View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Panel Container';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'fieldset_1',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'col-md-4 col-sm-12';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Panel Wrapper';
  $handler->display->display_options['fields']['fieldset_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'field_product_tout_image',
    1 => 'fieldset_2',
    2 => 'fieldset_3',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'panel rounded with-gray-border js-click-container';
  /* Field: Content: Product Tout Image */
  $handler->display->display_options['fields']['field_product_tout_image']['id'] = 'field_product_tout_image';
  $handler->display->display_options['fields']['field_product_tout_image']['table'] = 'field_data_field_product_tout_image';
  $handler->display->display_options['fields']['field_product_tout_image']['field'] = 'field_product_tout_image';
  $handler->display->display_options['fields']['field_product_tout_image']['label'] = '';
  $handler->display->display_options['fields']['field_product_tout_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_product_tout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_tout_image']['type'] = 'image';
  $handler->display->display_options['fields']['field_product_tout_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_tout_image']['group_column'] = '';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Titles';
  $handler->display->display_options['fields']['fieldset_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'title',
    1 => 'field_product_tout_subtitle',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'panel-heading';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Product Tout Subtitle */
  $handler->display->display_options['fields']['field_product_tout_subtitle']['id'] = 'field_product_tout_subtitle';
  $handler->display->display_options['fields']['field_product_tout_subtitle']['table'] = 'field_data_field_product_tout_subtitle';
  $handler->display->display_options['fields']['field_product_tout_subtitle']['field'] = 'field_product_tout_subtitle';
  $handler->display->display_options['fields']['field_product_tout_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_product_tout_subtitle']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'Panel Body';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'fieldset_4',
    1 => 'body',
    2 => 'field_product_tout_link',
    3 => 'fieldset_5',
  );
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset_3']['fieldset']['classes'] = 'panel-body';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Product Tout Link */
  $handler->display->display_options['fields']['field_product_tout_link']['id'] = 'field_product_tout_link';
  $handler->display->display_options['fields']['field_product_tout_link']['table'] = 'field_data_field_product_tout_link';
  $handler->display->display_options['fields']['field_product_tout_link']['field'] = 'field_product_tout_link';
  $handler->display->display_options['fields']['field_product_tout_link']['label'] = '';
  $handler->display->display_options['fields']['field_product_tout_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_tout_link']['click_sort_column'] = 'url';
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
    'product_tout_item' => 'product_tout_item',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['product_touts_view'] = $view;

  return $export;
}
