<?php
/**
 * @file
 * ab_content_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ab_content_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_article-comment_body'
  $field_instances['comment-comment_node_article-comment_body'] = array(
    'bundle' => 'comment_node_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_basic_page_freestyle-comment_body'
  $field_instances['comment-comment_node_basic_page_freestyle-comment_body'] = array(
    'bundle' => 'comment_node_basic_page_freestyle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_basic_page_with_hero_image-comment_body'
  $field_instances['comment-comment_node_basic_page_with_hero_image-comment_body'] = array(
    'bundle' => 'comment_node_basic_page_with_hero_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_basic_page_with_image-comment_body'
  $field_instances['comment-comment_node_basic_page_with_image-comment_body'] = array(
    'bundle' => 'comment_node_basic_page_with_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_event-comment_body'
  $field_instances['comment-comment_node_event-comment_body'] = array(
    'bundle' => 'comment_node_event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_faq-comment_body'
  $field_instances['comment-comment_node_faq-comment_body'] = array(
    'bundle' => 'comment_node_faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_front_page-comment_body'
  $field_instances['comment-comment_node_front_page-comment_body'] = array(
    'bundle' => 'comment_node_front_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_informational_gateway_item-comment_body'
  $field_instances['comment-comment_node_informational_gateway_item-comment_body'] = array(
    'bundle' => 'comment_node_informational_gateway_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_page-comment_body'
  $field_instances['comment-comment_node_page-comment_body'] = array(
    'bundle' => 'comment_node_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_product_detail_page-comment_body'
  $field_instances['comment-comment_node_product_detail_page-comment_body'] = array(
    'bundle' => 'comment_node_product_detail_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_product_landing_page-comment_body'
  $field_instances['comment-comment_node_product_landing_page-comment_body'] = array(
    'bundle' => 'comment_node_product_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_product_landing_page_freestyle-comment_body'
  $field_instances['comment-comment_node_product_landing_page_freestyle-comment_body'] = array(
    'bundle' => 'comment_node_product_landing_page_freestyle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_product_landing_page_strict-comment_body'
  $field_instances['comment-comment_node_product_landing_page_strict-comment_body'] = array(
    'bundle' => 'comment_node_product_landing_page_strict',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_product_tout_item-comment_body'
  $field_instances['comment-comment_node_product_tout_item-comment_body'] = array(
    'bundle' => 'comment_node_product_tout_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_promotional_landing_page-comment_body'
  $field_instances['comment-comment_node_promotional_landing_page-comment_body'] = array(
    'bundle' => 'comment_node_promotional_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_segment_landing_page-comment_body'
  $field_instances['comment-comment_node_segment_landing_page-comment_body'] = array(
    'bundle' => 'comment_node_segment_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_segment_landing_page_freestyle-comment_body'
  $field_instances['comment-comment_node_segment_landing_page_freestyle-comment_body'] = array(
    'bundle' => 'comment_node_segment_landing_page_freestyle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'comment-comment_node_webform-comment_body'
  $field_instances['comment-comment_node_webform-comment_body'] = array(
    'bundle' => 'comment_node_webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-basic_page_freestyle-body'
  $field_instances['node-basic_page_freestyle-body'] = array(
    'bundle' => 'basic_page_freestyle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_hero_image-body'
  $field_instances['node-basic_page_with_hero_image-body'] = array(
    'bundle' => 'basic_page_with_hero_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_hero_image-field_hero_tagged'
  $field_instances['node-basic_page_with_hero_image-field_hero_tagged'] = array(
    'bundle' => 'basic_page_with_hero_image',
    'default_value' => array(
      0 => array(
        'tid' => 'autocreate',
        'vid' => 1,
        'name' => 'Corporate Responsibility',
        'vocabulary_machine_name' => 'tags',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_hero_tagged',
    'label' => 'Hero Tagged',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_hero_image-field_quote'
  $field_instances['node-basic_page_with_hero_image-field_quote'] = array(
    'bundle' => 'basic_page_with_hero_image',
    'default_value' => array(
      0 => array(
        'value' => 'McKesson found a way to disclose the use of the clawbacks without exposing the company to privacy and legal concerns. This is an important milestone in compensation and compliance practices.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_quote',
    'label' => 'Quote',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_hero_image-field_quote_source'
  $field_instances['node-basic_page_with_hero_image-field_quote_source'] = array(
    'bundle' => 'basic_page_with_hero_image',
    'default_value' => array(
      0 => array(
        'value' => 'Meredith Miller Chief Corporate Governance Officer, UAW Retiree Medical Benefits Trust',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_quote_source',
    'label' => 'Quote Source',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_hero_image-field_share_widget'
  $field_instances['node-basic_page_with_hero_image-field_share_widget'] = array(
    'bundle' => 'basic_page_with_hero_image',
    'default_value' => array(
      0 => array(
        'value' => '<ul class="share visible-md visible-md visible-lg">
	<li>
	<h4>Share article</h4>
	</li>
	<li class="email"><a href="#">Email</a></li>
	<li class="facebook"><a href="#">Facebook</a></li>
	<li class="twitter"><a href="#">Twitter</a></li>
	<li class="linkedin"><a href="#">LinkedIn</a></li>
	<li class="google"><a href="#">Google</a></li>
</ul>
',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => 'Shouldn\'t need to be changed at all once this is set up.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_share_widget',
    'label' => 'Share Widget',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_hero_image-field_share_widget_main'
  $field_instances['node-basic_page_with_hero_image-field_share_widget_main'] = array(
    'bundle' => 'basic_page_with_hero_image',
    'default_value' => array(
      0 => array(
        'value' => '<ul class="share visible-sm visible-xs">
	<li>
	<h4>Share article</h4>
	</li>
	<li class="email"><a href="#">Email</a></li>
	<li class="facebook"><a href="#">Facebook</a></li>
	<li class="twitter"><a href="#">Twitter</a></li>
	<li class="linkedin"><a href="#">LinkedIn</a></li>
	<li class="google"><a href="#">Google</a></li>
</ul>',
      ),
    ),
    'deleted' => 0,
    'description' => 'This should be the same as the share widget in the right hand column. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_share_widget_main',
    'label' => 'Share Widget Main',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_hero_image-field_spacer'
  $field_instances['node-basic_page_with_hero_image-field_spacer'] = array(
    'bundle' => 'basic_page_with_hero_image',
    'default_value' => array(
      0 => array(
        'value' => '&nbsp;',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_spacer',
    'label' => 'spacer',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_hero_image-field_summary'
  $field_instances['node-basic_page_with_hero_image-field_summary'] = array(
    'bundle' => 'basic_page_with_hero_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Summary for the article. This is the text that appears in bold at the top of the page. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_image-body'
  $field_instances['node-basic_page_with_image-body'] = array(
    'bundle' => 'basic_page_with_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_image-field_basic_page_image'
  $field_instances['node-basic_page_with_image-field_basic_page_image'] = array(
    'bundle' => 'basic_page_with_image',
    'deleted' => 0,
    'description' => 'Basic image for the page. Will be sized accordingly. This section is optional and not at all required. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'class' => '',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'class' => '',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_basic_page_image',
    'label' => 'Basic Page Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 42,
      'file_directory' => 'article-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_image-field_basic_quote'
  $field_instances['node-basic_page_with_image-field_basic_quote'] = array(
    'bundle' => 'basic_page_with_image',
    'default_value' => array(
      0 => array(
        'value' => 'McKesson found a way to disclose the use of the clawbacks without exposing the company to privacy and legal concerns. This is an important milestone in compensation and compliance practices.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_basic_quote',
    'label' => 'Basic Quote',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_image-field_basic_quote_source'
  $field_instances['node-basic_page_with_image-field_basic_quote_source'] = array(
    'bundle' => 'basic_page_with_image',
    'default_value' => array(
      0 => array(
        'value' => 'Meredith Miller Chief Corporate Governance Officer, UAW Retiree Medical Benefits Trust',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_basic_quote_source',
    'label' => 'Basic Quote Source',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_image-field_basic_summary'
  $field_instances['node-basic_page_with_image-field_basic_summary'] = array(
    'bundle' => 'basic_page_with_image',
    'default_value' => array(
      0 => array(
        'value' => 'McKesson (NYSE:MCK) announced updates to its clawback policy (a provision by which the company can recoup executive compensation in the wake of certain employee misconduct or financial restatements), among additional governance changes, in an 8-K report filed with the Securities and Exchange Commission (SEC) today.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_basic_summary',
    'label' => 'Basic Summary',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 250,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_image-field_by'
  $field_instances['node-basic_page_with_image-field_by'] = array(
    'bundle' => 'basic_page_with_image',
    'default_value' => array(
      0 => array(
        'tid' => 1,
        'vid' => 2,
        'name' => 'Robert Love',
        'description' => '',
        'format' => 'filtered_html',
        'weight' => 0,
        'vocabulary_machine_name' => 'author',
        'rdf_mapping' => array(
          'description' => array(
            'predicates' => array(
              0 => 'skos:definition',
            ),
          ),
          'name' => array(
            'predicates' => array(
              0 => 'rdfs:label',
              1 => 'skos:prefLabel',
            ),
          ),
          'parent' => array(
            'predicates' => array(
              0 => 'skos:broader',
            ),
            'type' => 'rel',
          ),
          'rdftype' => array(
            0 => 'skos:Concept',
          ),
          'vid' => array(
            'predicates' => array(
              0 => 'skos:inScheme',
            ),
            'type' => 'rel',
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_by',
    'label' => 'by',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_image-field_published'
  $field_instances['node-basic_page_with_image-field_published'] = array(
    'bundle' => 'basic_page_with_image',
    'deleted' => 0,
    'description' => 'The date the article was published. The default is the current date. ',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_published',
    'label' => 'Published',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_image-field_share_widget_basic'
  $field_instances['node-basic_page_with_image-field_share_widget_basic'] = array(
    'bundle' => 'basic_page_with_image',
    'default_value' => array(
      0 => array(
        'value' => '<ul class="share visible-md visible-md visible-lg">
<li><h4>Share article</h4></li>
<li class="email"><a href="#">Email</a></li>
<li class="facebook"><a href="#">Facebook</a></li>
<li class="twitter"><a href="#">Twitter</a></li>
<li class="linkedin"><a href="#">LinkedIn</a></li>
<li class="google"><a href="#">Google</a></li>
</ul>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_share_widget_basic',
    'label' => 'Share Widget Basic',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_image-field_share_widget_basic_main'
  $field_instances['node-basic_page_with_image-field_share_widget_basic_main'] = array(
    'bundle' => 'basic_page_with_image',
    'default_value' => array(
      0 => array(
        'value' => '<ul class="share visible-sm visible-xs">
<li><h4>Share article</h4></li>
<li class="email"><a href="#">Email</a></li>
<li class="facebook"><a href="#">Facebook</a></li>
<li class="twitter"><a href="#">Twitter</a></li>
<li class="linkedin"><a href="#">LinkedIn</a></li>
<li class="google"><a href="#">Google</a></li>
</ul>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_share_widget_basic_main',
    'label' => 'Share Widget Basic Main',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-basic_page_with_image-field_tagged'
  $field_instances['node-basic_page_with_image-field_tagged'] = array(
    'bundle' => 'basic_page_with_image',
    'default_value' => array(
      0 => array(
        'tid' => 'autocreate',
        'vid' => 1,
        'name' => 'In the News',
        'vocabulary_machine_name' => 'tags',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tagged',
    'label' => 'Tagged',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-event-field_event_address_1'
  $field_instances['node-event-field_event_address_1'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'event_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_event_address_1',
    'label' => 'Event Address 1',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-event-field_event_address_2'
  $field_instances['node-event-field_event_address_2'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'event_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_event_address_2',
    'label' => 'Event Address 2',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-event-field_event_attachments'
  $field_instances['node-event-field_event_attachments'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => 'Any files -- such as forms, PDFs, etc -- that are applicable to the event. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 10,
      ),
      'event_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_event_attachments',
    'label' => 'Event Attachments',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'event-documents',
      'file_extensions' => 'txt pdf doc docx rtf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 0,
            'upload' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 1,
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-event-field_event_city'
  $field_instances['node-event-field_event_city'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'event_view' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_event_city',
    'label' => 'Event City',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-event-field_event_day'
  $field_instances['node-event-field_event_day'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => 'This field generates the 2 digit date of the event on relevant pages only.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 12,
      ),
      'event_view' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'day',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 28,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_event_day',
    'label' => 'Event Day',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-event-field_event_description'
  $field_instances['node-event-field_event_description'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'event_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_event_description',
    'label' => 'Event Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-event-field_event_end_date'
  $field_instances['node-event-field_event_end_date'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'event_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_event_end_date',
    'label' => 'Event End Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-event-field_event_image'
  $field_instances['node-event-field_event_image'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'event_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_event_image',
    'label' => 'Event Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'event-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 0,
            'upload' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-event-field_event_month'
  $field_instances['node-event-field_event_month'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => 'This field generates the 3 letter month of the event on relevant pages only. Example: January becomes "Jan", etc.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 11,
      ),
      'event_view' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'month',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_event_month',
    'label' => 'Event Month',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-event-field_event_start_date'
  $field_instances['node-event-field_event_start_date'] = array(
    'bundle' => 'event',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'event_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_event_start_date',
    'label' => 'Event Start Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-event-field_event_state'
  $field_instances['node-event-field_event_state'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'event_view' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_event_state',
    'label' => 'Event State',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-event-field_event_venue'
  $field_instances['node-event-field_event_venue'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the location that the event is taking place -- perhaps a particular building or suite. It is <strong>different</strong> from the address, city, state, or zipcode.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'event_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_event_venue',
    'label' => 'Event Venue',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-event-field_event_zipcode'
  $field_instances['node-event-field_event_zipcode'] = array(
    'bundle' => 'event',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 9,
      ),
      'event_view' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_event_zipcode',
    'label' => 'Event Zipcode',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-front_page-body'
  $field_instances['node-front_page-body'] = array(
    'bundle' => 'front_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-front_page-field_headline'
  $field_instances['node-front_page-field_headline'] = array(
    'bundle' => 'front_page',
    'default_value' => array(
      0 => array(
        'value' => 'Acting on the premise that affordable and accessible banking is a basic right ',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-informational_gateway_item-body'
  $field_instances['node-informational_gateway_item-body'] = array(
    'bundle' => 'informational_gateway_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is a free form area for HTML markup for Informational Gateway Items. Proceed with caution when changing the content on this page. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Freestyle Info',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-informational_gateway_item-field_headline_description'
  $field_instances['node-informational_gateway_item-field_headline_description'] = array(
    'bundle' => 'informational_gateway_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Relatively short description for the informational gateway item that appears near the top of the content.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_headline_description',
    'label' => 'Headline Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 250,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-informational_gateway_item-field_headline_image'
  $field_instances['node-informational_gateway_item-field_headline_image'] = array(
    'bundle' => 'informational_gateway_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_headline_image',
    'label' => 'Headline Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'informational-gateway-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 0,
            'upload' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-informational_gateway_item-field_headline_subtitle'
  $field_instances['node-informational_gateway_item-field_headline_subtitle'] = array(
    'bundle' => 'informational_gateway_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_headline_subtitle',
    'label' => 'Headline Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-informational_gateway_item-field_headline_tagline'
  $field_instances['node-informational_gateway_item-field_headline_tagline'] = array(
    'bundle' => 'informational_gateway_item',
    'default_value' => array(
      0 => array(
        'value' => 'Amalgamated sponsors the Chhaya Home Buyer Fair in Jackson Heights Queens',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_headline_tagline',
    'label' => 'Headline Tagline',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-informational_gateway_item-field_headline_title'
  $field_instances['node-informational_gateway_item-field_headline_title'] = array(
    'bundle' => 'informational_gateway_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_headline_title',
    'label' => 'Headline Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-informational_gateway_item-field_slideshow_description'
  $field_instances['node-informational_gateway_item-field_slideshow_description'] = array(
    'bundle' => 'informational_gateway_item',
    'default_value' => array(
      0 => array(
        'value' => 'Noel Beasley, Chairman of the Amalgamated Bank Board, pushes for companies to disclose CEO-to-median worker pay',
      ),
    ),
    'deleted' => 0,
    'description' => 'Limit HTML to simple tags please. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_slideshow_description',
    'label' => 'Slideshow Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-informational_gateway_item-field_slideshow_image'
  $field_instances['node-informational_gateway_item-field_slideshow_image'] = array(
    'bundle' => 'informational_gateway_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_slideshow_image',
    'label' => 'Slideshow Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'center',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.ssi-image',
      'css_v_position' => 'center',
      'default_image' => 0,
      'file_directory' => 'slideshow-images',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-informational_gateway_item-field_slideshow_order'
  $field_instances['node-informational_gateway_item-field_slideshow_order'] = array(
    'bundle' => 'informational_gateway_item',
    'default_value' => array(
      0 => array(
        'value' => 10,
      ),
    ),
    'deleted' => 0,
    'description' => 'The order in which the slideshow item should appear in increments of 10. The reason for increments of 10 is so that you\'re able to go back and rearrange the order of slideshows without have to actually go back to each informational gateway item every time.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_slideshow_order',
    'label' => 'Slideshow Order',
    'required' => 0,
    'settings' => array(
      'max' => 1000,
      'min' => 10,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-informational_gateway_item-field_slideshow_title'
  $field_instances['node-informational_gateway_item-field_slideshow_title'] = array(
    'bundle' => 'informational_gateway_item',
    'default_value' => array(
      0 => array(
        'value' => 'What we are doing',
      ),
    ),
    'deleted' => 0,
    'description' => 'The orange text for the slideshow image. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_slideshow_title',
    'label' => 'Slideshow Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-page-body'
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_compare_popup'
  $field_instances['node-product_detail_page-field_compare_popup'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<div class="table-scolling-instructions visible-xs">
	Swipe to view complete table</div>

<div class="table-container-with-scrolling">
	<table class="table with-grid comparison">
		<thead>
			<tr>
				<th>
					&nbsp;</th>
				<th class="text-center">
					<strong class="with-blue-text">No Frills Checking</strong><br />
					<a class="btn rounded with-orange-background with-white-text" href="#">Open now</a></th>
				<th class="text-center with-gray-background">
					<strong class="with-blue-text">Peace of Mind Checking</strong><br />
					<a class="btn rounded with-orange-background with-white-text" href="#">Open now</a></th>
				<th class="text-center">
					<strong class="with-blue-text">Peace of Mind Checking While You Earn</strong> <a class="btn rounded with-orange-background with-white-text" href="#">Open now</a></th>
			</tr>
		</thead>
		<tbody>
			<tr>
				<td>
					Best if you want:</td>
				<td class="text-left">
					Checking account with easy access to your money</td>
				<td class="with-gray-background text-left">
					Checking and savings accounts bundled for easy access and additional value</td>
				<td class="text-left">
					Checking account with relationship discounts, benefits, and premium rates</td>
			</tr>
			<tr>
				<td>
					Monthly service fee</td>
				<td class="text-left">
					$7 with online-only statements ($9 with paper statements) or waived when requirements are met</td>
				<td class="with-gray-background text-left">
					$10 with online-only statements ($12 with paper statements) or waived when requirements are met</td>
				<td class="text-left">
					$30 or waived when requirements are met</td>
			</tr>
			<tr>
				<td>
					Minimum opening deposit<sup>1</sup></td>
				<td class="text-center">
					<strong>$150.00</strong></td>
				<td class="with-gray-background text-center">
					<strong>$50.00</strong></td>
				<td class="text-center">
					<strong>$50.00</strong></td>
			</tr>
			<tr>
				<td>
					Platinum Debit Card</td>
				<td class="text-center">
					&nbsp;</td>
				<td class="with-gray-background text-center">
					&nbsp;</td>
				<td class="text-center">
					&nbsp;</td>
			</tr>
			<tr>
				<td>
					Free Access to Online Banking</td>
				<td class="text-center">
					&nbsp;</td>
				<td class="with-gray-background text-center">
					&nbsp;</td>
				<td class="text-center">
					&nbsp;</td>
			</tr>
			<tr>
				<td>
					Mobile Banking</td>
				<td class="text-center">
					&nbsp;</td>
				<td class="with-gray-background text-center">
					&nbsp;</td>
				<td class="text-center">
					&nbsp;</td>
			</tr>
			<tr>
				<td>
					Account Alerts</td>
				<td class="text-center">
					&nbsp;</td>
				<td class="with-gray-background text-center">
					&nbsp;</td>
				<td class="text-center">
					&nbsp;</td>
			</tr>
			<tr>
				<td>
					Optional Overdraft Protection<sup>2</sup></td>
				<td class="text-center">
					&nbsp;</td>
				<td class="with-gray-background text-center">
					&nbsp;</td>
				<td class="text-center">
					&nbsp;</td>
			</tr>
			<tr>
				<td>
					Free Online Bill Pay</td>
				<td class="text-center">
					&nbsp;</td>
				<td class="with-gray-background text-center">
					&nbsp;</td>
				<td class="text-center">
					&nbsp;</td>
			</tr>
			<tr>
				<td>
					Check Discounts</td>
				<td class="text-center">
					&nbsp;</td>
				<td class="with-gray-background text-center">
					&nbsp;</td>
				<td class="text-center">
					&nbsp;</td>
			</tr>
			<tr>
				<td>
					Interest-Earning Checking Account</td>
				<td class="text-center">
					&nbsp;</td>
				<td class="with-gray-background text-center">
					&nbsp;</td>
				<td class="text-center">
					&nbsp;</td>
			</tr>
			<tr>
				<td>
					Monthly Combined Statement</td>
				<td class="text-center">
					&nbsp;</td>
				<td class="with-gray-background text-center">
					&nbsp;</td>
				<td class="text-center">
					&nbsp;</td>
			</tr>
			<tr>
				<td>
					Premium Relationship Benefits</td>
				<td class="text-center">
					&nbsp;</td>
				<td class="with-gray-background text-center">
					&nbsp;</td>
				<td class="text-center">
					&nbsp;</td>
			</tr>
		</tbody>
	</table>
</div>
',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => 'This field is the popup window used for comparing different account types on Product Details pages. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_compare_popup',
    'label' => 'Modal Content',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_content_spacer_details'
  $field_instances['node-product_detail_page-field_content_spacer_details'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_content_spacer_details',
    'label' => 'Content Spacer Details',
    'required' => 0,
    'settings' => array(
      'form_display' => 0,
      'text' => array(
        'format' => 'filtered_html',
        'value' => '<p>&nbsp;</p>',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'static_field',
      'settings' => array(),
      'type' => 'static_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_modal_control_button'
  $field_instances['node-product_detail_page-field_modal_control_button'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the button for showing the popup window',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_modal_control_button',
    'label' => 'Modal Control Button',
    'required' => 0,
    'settings' => array(
      'form_display' => 'markup',
      'text' => array(
        'format' => 'full_html',
        'value' => '<p>
<a href="#compareModal" data-toggle="modal" class="btn rounded with-orange-background with-white-text">Compare</a>
</p>',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'static_field',
      'settings' => array(),
      'type' => 'static_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_modal_footer_close_button'
  $field_instances['node-product_detail_page-field_modal_footer_close_button'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_modal_footer_close_button',
    'label' => 'Modal Footer Close Button',
    'required' => 0,
    'settings' => array(
      'form_display' => 0,
      'text' => array(
        'format' => 'full_html',
        'value' => '<button type="button" class="btn rounded btn-default" data-dismiss="modal">Close</button>',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'static_field',
      'settings' => array(),
      'type' => 'static_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_modal_header_close_button'
  $field_instances['node-product_detail_page-field_modal_header_close_button'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_modal_header_close_button',
    'label' => 'Modal Header Close Button',
    'required' => 0,
    'settings' => array(
      'form_display' => 0,
      'text' => array(
        'format' => 'ds_code',
        'value' => '<button aria-hidden="true" class="close" data-dismiss="modal" type="button"><span class="glyphicon glyphicon-remove"></span></button>
',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'static_field',
      'settings' => array(),
      'type' => 'static_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_modal_title'
  $field_instances['node-product_detail_page-field_modal_title'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'value' => 'Compare',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_modal_title',
    'label' => 'Modal Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_primary_headline'
  $field_instances['node-product_detail_page-field_primary_headline'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'value' => 'A simple checking account with the features you need',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_primary_headline',
    'label' => 'Primary Headline',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_secondary_headline'
  $field_instances['node-product_detail_page-field_secondary_headline'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'value' => 'Our checking accounts are designed around your needs. Whether you\'re looking for free checking, extra security or a way to teach your kids.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_secondary_headline',
    'label' => 'Secondary Headline',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 120,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_body'
  $field_instances['node-product_detail_page-field_tab_1_body'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<div class="row r2">
	<div class="col-sm-12 c1">
		<h3>
			Big on benefits and convenience</h3>

		<ul>
			<li>
				Access to 19,500 ATMs and 5,600 branches</li>
			<li>
				PLUS Access to Amalgamated Friendly ATMs</li>
			<li>
				PLUS Basic Debit Card</li>
			<li>
				24/7 Customer Service</li>
			<li>
				Optional checks</li>
		</ul>
	</div>
</div>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_body',
    'label' => 'Tab 1 Body 1',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_body_2'
  $field_instances['node-product_detail_page-field_tab_1_body_2'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<div class="row r4">
    <div class="col-sm-12 c1">
        <div class="panel panel-default apply" style="min-height: 155px;">
            <div class="panel-heading">
                <strong>Apply for Peace of Mind Checking</strong>
            </div>
            <div class="panel-body">
                <div class="row">
                    <div class="col-lg-3 col-md-12 col-sm-6 c1">
                        <a class="btn rounded with-orange-background with-white-text" href="#">Open account online</a>
                    </div>
                    <div class="col-lg-3 col-md-4 col-sm-6 c2">
                        <strong>Call us</strong><br>
                        1-800-222-2222
                    </div>
                    <div class="col-lg-3 col-md-4 col-sm-6 c3">
                        <strong>Schedule appointment</strong><br>
                        <a class="with-underline" href="#">Schedule now</a>
                    </div>
                    <div class="col-lg-3 col-md-4 col-sm-6 c4">
                        <strong>Apply in person</strong><br>
                        <a class="with-underline" href="#">Find a location</a>
                    </div>
                </div>
            </div>
        </div>
    </div>
</div>

<div class="row r5">
    <div class="col-sm-12 c1 legal">
        <p><strong>Some accounts and services, and fees vary from state to state. Please review the Personal Schedule of Fees for your state, also available at your local Banking Center.</strong></p>
        <ol>
            <li>With Regular Savings, avoid monthly maintenance fee when you meet one of the following during each statement cycle: make combined monthly automatic transfers of $25 or more from your Amalgamated Bank checking account to your savings accounts;  Maintain a minimum daily balance of $300 or more in your savings account; link your account to your Amalgamated Bank Advantage account (waiver applies to first 2 savings accounts). Transaction limits and excess withdrawal fees still apply.</li>
            <li>To access Online or Mobile Banking, you must first enroll in the service. Once enrolled, the same Online ID and passcode can be used to access both Online and Mobile Banking. View the Online Banking Service Agreement for more information about both Mobile and Online Banking. Wireless carrier fees may apply. Enrollment not available through the Mobile App on all devices.</li>
            <li>Amalgamated Bank does not charge for Text Banking. However, your mobile service provider may charge for sending and receiving text messages on your mobile phone. Check with your service provider for details on specific fees and charges that may apply.</li>
            <li>Alerts received as text messages on your mobile access device may incur a charge from your mobile access service provider. Mobile App alerts are not available on select devices.</li>
        </ol>
    </div>
</div>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => 'Covers the gray callout box and the legal disclaimer box beneath it on the page. <strong>Be careful editing this section.</strong>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_body_2',
    'label' => 'Tab 1 Body 2',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_1_body'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_1_body'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'value' => 'Incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_1_body',
    'label' => 'Tab 1 Section 2 Box 1 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_1_icon'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_1_icon'] = array(
    'bundle' => 'product_detail_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_1_icon',
    'label' => 'Tab 1 Section 2 Box 1 Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'left',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.pd-highlight-bg1',
      'css_v_position' => 'top',
      'default_image' => 108,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_1_link'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_1_link'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 28,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_1_link',
    'label' => 'Tab 1 Section 2 Box 1 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_1_titl'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_1_titl'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'value' => 'Free Online Banking & Bill Pay',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_1_titl',
    'label' => 'Tab 1 Section 2 Box 1 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_2_body'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_2_body'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'value' => 'Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis...',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_2_body',
    'label' => 'Tab 1 Section 2 Box 2 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_2_icon'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_2_icon'] = array(
    'bundle' => 'product_detail_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_2_icon',
    'label' => 'Tab 1 Section 2 Box 2 Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'left',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.pd-highlight-bg2',
      'css_v_position' => 'top',
      'default_image' => 110,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_2_link'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_2_link'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 29,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_2_link',
    'label' => 'Tab 1 Section 2 Box 2 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_2_titl'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_2_titl'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'value' => '50,000 All-Point ATMs',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_2_titl',
    'label' => 'Tab 1 Section 2 Box 2 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_3_body'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_3_body'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'value' => 'Incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris...',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_3_body',
    'label' => 'Tab 1 Section 2 Box 3 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_3_icon'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_3_icon'] = array(
    'bundle' => 'product_detail_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_3_icon',
    'label' => 'Tab 1 Section 2 Box 3 Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'left',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.pd-highlight-bg3',
      'css_v_position' => 'top',
      'default_image' => 112,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_3_link'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_3_link'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 30,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_3_link',
    'label' => 'Tab 1 Section 2 Box 3 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_3_titl'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_3_titl'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'value' => 'Unlimited Check-Writing Ability',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_3_titl',
    'label' => 'Tab 1 Section 2 Box 3 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_4_body'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_4_body'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'value' => 'Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis...',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_4_body',
    'label' => 'Tab 1 Section 2 Box 4 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_4_icon'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_4_icon'] = array(
    'bundle' => 'product_detail_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_4_icon',
    'label' => 'tab 1 Section 2 Box 4 Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'left',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.pd-highlight-bg4',
      'css_v_position' => 'top',
      'default_image' => 114,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_4_link'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_4_link'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_4_link',
    'label' => 'Tab 1 Section 2 Box 4 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_box_4_titl'
  $field_instances['node-product_detail_page-field_tab_1_section_2_box_4_titl'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'value' => 'No Per-Check Fees',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_box_4_titl',
    'label' => 'Tab 1 Section 2 Box 4 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_1_section_2_header'
  $field_instances['node-product_detail_page-field_tab_1_section_2_header'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'value' => 'Lorem Ipsum Dolor',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_tab_1_section_2_header',
    'label' => 'Tab 1 Section 2 Header',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_2_body'
  $field_instances['node-product_detail_page-field_tab_2_body'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<div class="r6">

    <div class="table-scolling-instructions visible-xs">Swipe to view complete table</div><div class="table-container-with-scrolling"><table class="table" style="margin-top:-5px;">

            <thead>
                <tr>
                    <th>Term</th>
                    <th>Minimum Deposit<br>Balance</th>
                    <th>Personal<br>Rate</th>
                    <th>Personal<br>APY</th>
                    <th>Commercial<br>Rate</th>
                    <th>Commercial<br>APY</th>
                </tr>
            </thead>

            <tbody>
                <tr>
                    <td>Peace of Mind Checking<sup>*</sup></td>
                    <td>$500.00</td>
                    <td>0.05%</td>
                    <td>0.05%</td>
                    <td>N/A</td>
                    <td>N/A</td>
                </tr>
            </tbody>

        </table></div>

    <br>

    <div class="legal">

        <p>*These are variable rate accounts. The rates may change after the accounts are opened.</p>
        <p>**Fees may reduce earnings.</p>

    </div>

</div>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tab_2_body',
    'label' => 'Tab 2 Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-product_detail_page-field_tab_3_body'
  $field_instances['node-product_detail_page-field_tab_3_body'] = array(
    'bundle' => 'product_detail_page',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<div class="r7">

    <h3>Check/ACH Items</h3>

    <div class="table-scolling-instructions visible-xs">Swipe to view complete table</div><div class="table-container-with-scrolling"><table class="table">

            <colgroup><col width="*">
                <col width="1">

            </colgroup><thead>
                <tr>
                    <th>Fee Description</th>
                    <th>Amount</th>
                </tr>
            </thead>

            <tbody>
                <tr>
                    <td>Personal Money Order (Customer Only)</td>
                    <td class="text-right">$10.00</td>
                </tr>
                <tr>
                    <td>Cashier\'s Check (payable to third party)</td>
                    <td class="text-right">$15.00</td>
                </tr>
                <tr>
                    <td>Retured Deposit Item</td>
                    <td class="text-right">$10.00</td>
                </tr>
                <tr>
                    <td>Insufficient Fund Fee (NSF) - Returned Item Fee Charged for Insufficient*</td>
                    <td class="text-right">$34.00</td>
                </tr>
                <tr>
                    <td>Insufficient Fund Fee (NSF) - Returned Item Fee Charged for Uncollected Funds*</td>
                    <td class="text-right">$34.00</td>
                </tr>
                <tr>
                    <td>Check Printing Fee</td>
                    <td class="text-right">Varies</td>
                </tr>
                <tr>
                    <td>Checkbook Reconciliation (per hour)</td>
                    <td class="text-right">$20.00</td>
                </tr>
            </tbody>

        </table></div>

    <h3>Lorem ipsum dolor</h3>

    <div class="table-scolling-instructions visible-xs">Swipe to view complete table</div><div class="table-container-with-scrolling"><table class="table">

            <colgroup><col width="*">
                <col width="1">

            </colgroup><thead>
                <tr>
                    <th>Fee Description</th>
                    <th>Amount</th>
                </tr>
            </thead>

            <tbody>
                <tr>
                    <td>Compliance with legal process</td>
                    <td class="text-right">$100.00</td>
                </tr>
                <tr>
                    <td>Consulate letter</td>
                    <td class="text-right">$15.00</td>
                </tr>
                <tr>
                    <td>Copy of check or statement (per item)</td>
                    <td class="text-right">$5.00</td>
                </tr>
                <tr>
                    <td>Dormant account maintenance fee (checking accounts only)</td>
                    <td class="text-right">$2.50</td>
                </tr>
                <tr>
                    <td>Abandoned property escheatment fee (accounts in New York State only)</td>
                    <td class="text-right">$10.00</td>
                </tr>
                <tr>
                    <td>Lost atm/debit card replacement</td>
                    <td class="text-right">$5.00</td>
                </tr>
                <tr>
                    <td>Lost savings passbook replacement</td>
                    <td class="text-right">$5.00</td>
                </tr>
                <tr>
                    <td>Signature guarantee (per item)</td>
                    <td class="text-right">$10.00</td>
                </tr>
            </tbody>

        </table></div>

    <h3>Safe deposit boxes</h3>

    <div class="table-scolling-instructions visible-xs">Swipe to view complete table</div><div class="table-container-with-scrolling"><table class="table">

            <colgroup><col width="*">
                <col width="1">

            </colgroup><thead>
                <tr>
                    <th>Fee Description</th>
                    <th>Amount</th>
                </tr>
            </thead>

            <tbody>
                <tr>
                    <td>One Lost Key</td>
                    <td class="text-right">$15.00</td>
                </tr>
                <tr>
                    <td>Two Lost Keys (break open)</td>
                    <td class="text-right">$125.00</td>
                </tr>
            </tbody>

        </table></div>

    <h3>EFT transaction fees</h3>

    <div class="table-scolling-instructions visible-xs">Swipe to view complete table</div><div class="table-container-with-scrolling"><table class="table">

            <colgroup><col width="*">
                <col width="1">

            </colgroup><thead>
                <tr>
                    <th>Fee Description</th>
                    <th>Amount</th>
                </tr>
            </thead>

            <tbody>
                <tr>
                    <td>Transactions at AB and Allpoint ATMs</td>
                    <td class="text-right">No fees</td>
                </tr>
                <tr>
                    <td>ATM Network Transaction Fee (non AB and non Allpoint ATMs)</td>
                    <td class="text-right">$1.00</td>
                </tr>
            </tbody>

        </table></div>

</div>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_tab_3_body',
    'label' => 'Tab 3 Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-product_landing_page-body'
  $field_instances['node-product_landing_page-body'] = array(
    'bundle' => 'product_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_freestyle-body'
  $field_instances['node-product_landing_page_freestyle-body'] = array(
    'bundle' => 'product_landing_page_freestyle',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_freestyle-field_features_section'
  $field_instances['node-product_landing_page_freestyle-field_features_section'] = array(
    'bundle' => 'product_landing_page_freestyle',
    'default_value' => array(
      0 => array(
        'value' => '<div class="container">
    <div class="row r1">
        <div class="col-sm-3 col-xs-12 c1">
            <h2>All checking accounts include</h2>
        </div>
        <div class="col-sm-9 col-xs-12 c2">
            <div class="row r1">
                <div class="col-sm-3 col-xs-6 c1">
                    <p><a href="#">Mobile Banking</a></p>
                </div>
                <div class="col-sm-3 col-xs-6 c2">
                    <p><a href="#">Online Banking</a></p>
                </div>
                <div class="col-sm-3 col-xs-6 c3">
                    <p><a href="#">50k All-point ATMs</a></p>
                </div>
                <div class="col-sm-3 col-xs-6 c4">
                    <p><a href="#">Overdraft Protection</a></p>
                </div>
            </div>
        </div>
    </div>
</div>',
      ),
    ),
    'deleted' => 0,
    'description' => 'The gray bar between the main masthead (top section).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_features_section',
    'label' => 'Features Section',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_freestyle-field_landing_subtitle'
  $field_instances['node-product_landing_page_freestyle-field_landing_subtitle'] = array(
    'bundle' => 'product_landing_page_freestyle',
    'default_value' => array(
      0 => array(
        'value' => 'Bank with purpose',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_landing_subtitle',
    'label' => 'Landing Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_freestyle-field_top_section'
  $field_instances['node-product_landing_page_freestyle-field_top_section'] = array(
    'bundle' => 'product_landing_page_freestyle',
    'default_value' => array(
      0 => array(
        'value' => '<!-- First Row -->
<div class="row r1">
	<div class="col-md-12">
		<div class="row">
			<div class="col-lg-8 col-md-8 col-sm-6 c1">
				<h2>
					<small><a href="#">Personal Banking</a></small> Checking Accounts</h2>
			</div>

			<div class="col-lg-4 col-md-4 col-sm-6 c2 hidden-xs callout">
				<p>
					<a class="btn rounded with-white-border with-white-text with-blue-background" href="#">His story </a> <strong>Micoy Hamilton</strong> Customer since 1995</p>
			</div>
		</div>
	</div>
</div>
<!-- Second Row -->

<div class="row r2">
	<div class="col-md-9 col-sm-6">
		<div class="row">
			<div class="col-md-4 c1">
				<div class="panel rounded" style="min-height: 405px;">
					<div class="panel-heading">
						<h3>
							<a href="#">Affordable Checking</a></h3>
					</div>

					<div class="panel-body">
						<p>
							Our entry level checking is straightforward and easy to use.</p>

						<ul class="hidden-sm hidden-xs">
							<li>
								No minimum balance required. No monthly fees.</li>
							<li>
								Standard debit card with zero liability for unauthorized transactions</li>
							<li>
								Free access to online &amp; mobile banking and 40,000+ surcharge free ATMs</li>
						</ul>
					</div>

					<div class="panel-footer">
						<p>
							<a class="btn rounded with-orange-background with-white-text" href="#">Open account</a> <a class="with-underline" href="#">Learn more</a></p>
					</div>
				</div>
			</div>

			<div class="col-md-4 c2">
				<div class="panel rounded" style="min-height: 405px;">
					<div class="panel-heading">
						<h3>
							<a href="#">Convenience Checking</a></h3>
					</div>

					<div class="panel-body">
						<p>
							Provides you additional protections for a low monthly fee.</p>

						<ul class="hidden-sm hidden-xs">
							<li>
								No minimum balance required. $5 flat fee without direct deposit</li>
							<li>
								Overdraft protection; first overdraft is on us</li>
							<li>
								Enhanced debit card (with price guarantees, extended warranties)</li>
						</ul>
					</div>

					<div class="panel-footer">
						<p>
							<a class="btn rounded with-orange-background with-white-text" href="#">Open account</a> <a class="with-underline" href="#">Learn more</a></p>
					</div>
				</div>
			</div>

			<div class="col-md-4 c3">
				<div class="panel rounded" style="min-height: 405px;">
					<div class="panel-heading">
						<h3>
							<a href="#">Convenience Plus Checking</a></h3>
					</div>

					<div class="panel-body">
						<p>
							Earn interest while maintaining maximum access and benefits with your checking account.</p>

						<ul class="hidden-sm hidden-xs">
							<li>
								No minimum balance required. $10 flat fee without direct deposit</li>
							<li>
								Tiered interest based on balances</li>
							<li>
								All the convenient services that you get in a Convenience Checking account</li>
						</ul>
					</div>

					<div class="panel-footer">
						<p>
							<a class="btn rounded with-orange-background with-white-text" href="#">Open account</a> <a class="with-underline" href="#">Learn more</a></p>
					</div>
				</div>
			</div>
			<!-- Background image for masthead -->

			<div class="masthead-image">
				<img class="image-responsive" src="/amalgamated-bank/sites/default/files/product-landing-section-products-background.png" /></div>
		</div>
	</div>
</div>
<!-- Third Row -->

<div class="row r3">
	<div class="col-md-9 col-sm-6">
		<div class="row">
			<div class="col-md-12 c1">
				<p>
					<a class="btn rounded with-white-border with-white-text with-blue-background" data-collapse-trigger="compare" href="#">Compare checking accounts</a></p>
			</div>
		</div>
	</div>
</div>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => 'This is the area that appears above the main content in the blue section of the page beneath the logo and navigation. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_top_section',
    'label' => 'Top Section',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 8,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_compare_table'
  $field_instances['node-product_landing_page_strict-field_compare_table'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<table class="table comparison with-grid" style="margin-top:0;">
	<thead>
		<tr>
			<th>
				&nbsp;</th>
			<th class="text-center">
				<strong class="with-blue-text">Affordable Checking</strong> <a class="btn rounded with-orange-background with-white-text" href="#">Open now</a></th>
			<th class="text-center">
				<strong class="with-blue-text">Convenience Checking</strong> <a class="btn rounded with-orange-background with-white-text" href="#">Open now</a></th>
			<th class="text-center">
				<strong class="with-blue-text">Convenience Plus Checking</strong> <a class="btn rounded with-orange-background with-white-text" href="#">Open now</a></th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>
				Best if you want:</td>
			<td class="text-left">
				Our entry level checking is straightforward and easy to use</td>
			<td class="text-left">
				Our standard personal checking account provides you additional protections for a low monthly fee</td>
			<td class="text-left">
				Earn interest while maintaining maximum access and benefits with your checking account</td>
		</tr>
		<tr>
			<td>
				No minimum balance</td>
			<td class="text-center">
				&nbsp;</td>
			<td class="text-center">
				&nbsp;</td>
			<td class="text-center">
				&nbsp;</td>
		</tr>
		<tr>
			<td>
				Surcharge free access to<br />
				40K+ ATMs</td>
			<td class="text-center">
				&nbsp;</td>
			<td class="text-center">
				&nbsp;</td>
			<td class="text-center">
				&nbsp;</td>
		</tr>
		<tr>
			<td>
				Debit Card</td>
			<td class="text-center">
				<strong>Basic</strong></td>
			<td class="text-center no-wrap">
				<strong>Enhanced (Price/Satisfaction guarantees)</strong></td>
			<td class="text-center no-wrap">
				<strong>Enhanced (Price/Satisfaction guarantees)</strong></td>
		</tr>
		<tr>
			<td>
				Unlimited check writing</td>
			<td class="text-center">
				&nbsp;</td>
			<td class="text-center">
				&nbsp;</td>
			<td class="text-center">
				&nbsp;</td>
		</tr>
		<tr>
			<td>
				Overdraft protection</td>
			<td class="text-center">
				&nbsp;</td>
			<td class="text-center">
				<strong>Opt-in; First free</strong></td>
			<td class="text-center">
				<strong>Opt-in; First free</strong></td>
		</tr>
		<tr>
			<td>
				Online Banking Access</td>
			<td class="text-center">
				&nbsp;</td>
			<td class="text-center">
				<strong>Select</strong></td>
			<td class="text-center">
				<strong>Select</strong></td>
		</tr>
		<tr>
			<td>
				Mobile Banking Access</td>
			<td class="text-center">
				&nbsp;</td>
			<td class="text-center">
				&nbsp;</td>
			<td class="text-center">
				&nbsp;</td>
		</tr>
		<tr>
			<td>
				Access to a live rep via phone</td>
			<td class="text-center no-wrap">
				<strong>8AM-8PM, Mon thru Fri<br />
				9AM — 1PM Sat</strong></td>
			<td class="text-center no-wrap">
				<strong>8AM-8PM, Mon thru Fri<br />
				9AM — 1PM Sat</strong></td>
			<td class="text-center no-wrap">
				<strong>8AM-8PM, Mon thru Fri<br />
				9AM — 1PM Sat</strong></td>
		</tr>
		<tr>
			<td>
				Interest</td>
			<td class="text-center">
				&nbsp;</td>
			<td class="text-center">
				&nbsp;</td>
			<td class="text-center">
				&nbsp;</td>
		</tr>
		<tr>
			<td>
				Fees</td>
			<td class="text-center">
				<strong>None</strong></td>
			<td class="text-center">
				<strong>$5; waived with Direct Deposit</strong></td>
			<td class="text-center">
				<strong>$10; waived with Direct Deposit</strong></td>
		</tr>
	</tbody>
</table>
',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '<div class="alert alert-info">
<span class="glyphicon glyphicon-pencil"></span>
Be very careful editing the information in this table. It\'s very important that any class names, IDs, or special tags be maintained. Otherwise, the content in the table won\'t display correctly.
</div>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 51,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_compare_table',
    'label' => 'Compare Table',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 78,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_compare_table_mobile_instr'
  $field_instances['node-product_landing_page_strict-field_compare_table_mobile_instr'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Swipe to view complete table.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 52,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_compare_table_mobile_instr',
    'label' => 'Compare Table Mobile Instructions',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 77,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_content_area_spacer'
  $field_instances['node-product_landing_page_strict-field_content_area_spacer'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 49,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_content_area_spacer',
    'label' => 'Content Area Spacer',
    'required' => 0,
    'settings' => array(
      'form_display' => 0,
      'text' => array(
        'format' => 'full_html',
        'value' => '<p>&nbsp;</p>',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'static_field',
      'settings' => array(),
      'type' => 'static_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_content_subtitle'
  $field_instances['node-product_landing_page_strict-field_content_subtitle'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Bank with purpose',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 43,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_content_subtitle',
    'label' => 'Content Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_content_title'
  $field_instances['node-product_landing_page_strict-field_content_title'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Why Choose Amalgamated',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_content_title',
    'label' => 'Content Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_customer_details'
  $field_instances['node-product_landing_page_strict-field_customer_details'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Customer since 1995',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_customer_details',
    'label' => 'Customer Details',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_customer_name'
  $field_instances['node-product_landing_page_strict-field_customer_name'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Micoy Hamilton',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_customer_name',
    'label' => 'Customer Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_customer_story_link'
  $field_instances['node-product_landing_page_strict-field_customer_story_link'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'His story',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_customer_story_link',
    'label' => 'Customer Story Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-white-border with-white-text with-blue-background',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_features_image_1'
  $field_instances['node-product_landing_page_strict-field_features_image_1'] = array(
    'bundle' => 'product_landing_page_strict',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 53,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_features_image_1',
    'label' => 'Features Image 1',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'center',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.features-link1',
      'css_v_position' => 'top',
      'default_image' => 96,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_features_image_2'
  $field_instances['node-product_landing_page_strict-field_features_image_2'] = array(
    'bundle' => 'product_landing_page_strict',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 54,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_features_image_2',
    'label' => 'Features Image 2',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'center',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.features-link2',
      'css_v_position' => 'top',
      'default_image' => 98,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_features_image_3'
  $field_instances['node-product_landing_page_strict-field_features_image_3'] = array(
    'bundle' => 'product_landing_page_strict',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 55,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_features_image_3',
    'label' => 'Features Image 3',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'center',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.features-link3',
      'css_v_position' => 'top',
      'default_image' => 100,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_features_image_4'
  $field_instances['node-product_landing_page_strict-field_features_image_4'] = array(
    'bundle' => 'product_landing_page_strict',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 56,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_features_image_4',
    'label' => 'Features Image 4',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'center',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.features-link4',
      'css_v_position' => 'top',
      'default_image' => 102,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_features_link_1'
  $field_instances['node-product_landing_page_strict-field_features_link_1'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Mobile Banking',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_features_link_1',
    'label' => 'Features Link 1',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_features_link_2'
  $field_instances['node-product_landing_page_strict-field_features_link_2'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Online Banking',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_features_link_2',
    'label' => 'Features Link 2',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_features_link_3'
  $field_instances['node-product_landing_page_strict-field_features_link_3'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => '50k All-Point ATMs',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_features_link_3',
    'label' => 'Features Link 3',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_features_link_4'
  $field_instances['node-product_landing_page_strict-field_features_link_4'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Overdraft Protection',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_features_link_4',
    'label' => 'Features Link 4',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_features_title'
  $field_instances['node-product_landing_page_strict-field_features_title'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'All accounts include',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_features_title',
    'label' => 'Features Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_masthead_compare_link'
  $field_instances['node-product_landing_page_strict-field_masthead_compare_link'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => '<a class="btn rounded with-white-border with-white-text" data-collapse-trigger="compare" href="#">Compare checking accounts</a>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 50,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_masthead_compare_link',
    'label' => 'Masthead Compare Link',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_masthead_main_image'
  $field_instances['node-product_landing_page_strict-field_masthead_main_image'] = array(
    'bundle' => 'product_landing_page_strict',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_masthead_main_image',
    'label' => 'Masthead Main Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'right',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.product-landing-container',
      'css_v_position' => 'bottom',
      'default_image' => 86,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_1_body'
  $field_instances['node-product_landing_page_strict-field_panel_1_body'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Relationships are recognized and honored. You will have access to live people who are accountable and available to assist you.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 26,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_panel_1_body',
    'label' => 'Panel 1 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_1_link'
  $field_instances['node-product_landing_page_strict-field_panel_1_link'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'See why',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 27,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_panel_1_link',
    'label' => 'Panel 1 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-blue-border js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_1_title'
  $field_instances['node-product_landing_page_strict-field_panel_1_title'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Personal attention & accountability',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_panel_1_title',
    'label' => 'Panel 1 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_2_body'
  $field_instances['node-product_landing_page_strict-field_panel_2_body'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea lorem commodo consequat. Duis lorem.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_panel_2_body',
    'label' => 'Panel 2 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_2_link'
  $field_instances['node-product_landing_page_strict-field_panel_2_link'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'See why',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 28,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_panel_2_link',
    'label' => 'Panel 2 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-blue-border js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_2_title'
  $field_instances['node-product_landing_page_strict-field_panel_2_title'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Banking opportunities for all',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_panel_2_title',
    'label' => 'Panel 2 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_3_author'
  $field_instances['node-product_landing_page_strict-field_panel_3_author'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => '—Cinnamon Chambers-Lewis',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 30,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 53,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_panel_3_author',
    'label' => 'Panel 3 Author',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 71,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_3_author_job'
  $field_instances['node-product_landing_page_strict-field_panel_3_author_job'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'VP, Community <br />Development Officer',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 54,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_panel_3_author_job',
    'label' => 'Panel 3 Author Job',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 72,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_3_image'
  $field_instances['node-product_landing_page_strict-field_panel_3_image'] = array(
    'bundle' => 'product_landing_page_strict',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 32,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 61,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_panel_3_image',
    'label' => 'Panel 3 Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'right',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.landing-panel3-image',
      'css_v_position' => 'bottom',
      'default_image' => 88,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 73,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_3_quote'
  $field_instances['node-product_landing_page_strict-field_panel_3_quote'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'I wanted to be a part of an institution that believed in going the extra mile for those who have worked hard to build their own finances.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 29,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 59,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_panel_3_quote',
    'label' => 'Panel 3 Quote',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 70,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_4_body'
  $field_instances['node-product_landing_page_strict-field_panel_4_body'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_panel_4_body',
    'label' => 'Panel 4 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_4_link'
  $field_instances['node-product_landing_page_strict-field_panel_4_link'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'See why',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 33,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 19,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_panel_4_link',
    'label' => 'Panel 4 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-blue-border js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_4_title'
  $field_instances['node-product_landing_page_strict-field_panel_4_title'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Advocates for social justice',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_panel_4_title',
    'label' => 'Panel 4 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_bottom_description'
  $field_instances['node-product_landing_page_strict-field_panel_bottom_description'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<p><strong>4.25<span>%</span><sup>1</sup></strong></p>
<p>30 year fixed mortgage</p>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '<strong>Be very careful editing this section, as changing it will result in the layout and presentation (look and feel) changing.<br />The percentage in particular has to be handled carefully.</strong>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_panel_bottom_description',
    'label' => 'Panel Bottom Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 66,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_bottom_heading'
  $field_instances['node-product_landing_page_strict-field_panel_bottom_heading'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Home Mortgage',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 43,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_panel_bottom_heading',
    'label' => 'Panel Bottom Heading',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 64,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_bottom_image'
  $field_instances['node-product_landing_page_strict-field_panel_bottom_image'] = array(
    'bundle' => 'product_landing_page_strict',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 47,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_panel_bottom_image',
    'label' => 'Panel Bottom Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'right',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.sidebar-bottom',
      'css_v_position' => 'bottom',
      'default_image' => 94,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 68,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_bottom_link'
  $field_instances['node-product_landing_page_strict-field_panel_bottom_link'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Check rates',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 46,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_panel_bottom_link',
    'label' => 'Panel Bottom Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-blue-border js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 67,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_bottom_subheading'
  $field_instances['node-product_landing_page_strict-field_panel_bottom_subheading'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Strike while the iron\'s hot',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_panel_bottom_subheading',
    'label' => 'Panel Bottom Subheading',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_top_description'
  $field_instances['node-product_landing_page_strict-field_panel_top_description'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit ipsum.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_panel_top_description',
    'label' => 'Panel Top Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_top_heading'
  $field_instances['node-product_landing_page_strict-field_panel_top_heading'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'value' => 'Contribute to a worthy cause, automatically',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 39,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_panel_top_heading',
    'label' => 'Panel Top Heading',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_top_image'
  $field_instances['node-product_landing_page_strict-field_panel_top_image'] = array(
    'bundle' => 'product_landing_page_strict',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 42,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_panel_top_image',
    'label' => 'Panel Top Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'right',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.sidebar-top',
      'css_v_position' => 'bottom',
      'default_image' => 92,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_panel_top_link'
  $field_instances['node-product_landing_page_strict-field_panel_top_link'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'See why',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 41,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_panel_top_link',
    'label' => 'Panel Top Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-blue-border js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_placard_1_body'
  $field_instances['node-product_landing_page_strict-field_placard_1_body'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<p>Our entry level checking is straightforward and easy to use.</p>
<ul class="hidden-sm hidden-xs">
    <li>No minimum balance required. No monthly fees.</li>
    <li>Standard debit card with zero liability for unauthorized transactions</li>
    <li>Free access to online &amp; mobile banking and 40,000+ surcharge free ATMs</li>
</ul>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '<strong>Be very careful with this field as it requires specific HTML to function correctly and look nice.</strong>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_placard_1_body',
    'label' => 'Placard 1 Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_placard_1_link_1'
  $field_instances['node-product_landing_page_strict-field_placard_1_link_1'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Open account',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_placard_1_link_1',
    'label' => 'Placard 1 Link 1',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-orange-background with-white-text',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_placard_1_link_2'
  $field_instances['node-product_landing_page_strict-field_placard_1_link_2'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_placard_1_link_2',
    'label' => 'Placard 1 Link 2',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'with-underline',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_placard_1_title'
  $field_instances['node-product_landing_page_strict-field_placard_1_title'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Affordable Checking',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_placard_1_title',
    'label' => 'Placard 1 Title',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_placard_2_body'
  $field_instances['node-product_landing_page_strict-field_placard_2_body'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<p>Provides you additional protections for a low monthly fee.</p>
<ul class="hidden-sm hidden-xs">
	 <li>No minimum balance required. $5 flat fee without direct deposit</li>
	 <li>Overdraft protection; first overdraft is on us</li>
     <li>Enhanced debit card (with price guarantees, extended warranties)</li>
</ul>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '<strong>Be very careful with this field as it requires specific HTML to function correctly and look nice.</strong>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 23,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_placard_2_body',
    'label' => 'Placard 2 Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_placard_2_link_1'
  $field_instances['node-product_landing_page_strict-field_placard_2_link_1'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Open account',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 24,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_placard_2_link_1',
    'label' => 'Placard 2 Link 1',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-orange-background with-white-text',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_placard_2_link_2'
  $field_instances['node-product_landing_page_strict-field_placard_2_link_2'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_placard_2_link_2',
    'label' => 'Placard 2 Link 2',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'with-underline',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_placard_2_title'
  $field_instances['node-product_landing_page_strict-field_placard_2_title'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Convenience Checking',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_placard_2_title',
    'label' => 'Placard 2 Title',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_placard_3_body'
  $field_instances['node-product_landing_page_strict-field_placard_3_body'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<p>Earn interest while maintaining maximum access and benefits with your checking account.</p>
<ul class="hidden-sm hidden-xs">
     <li>No minimum balance required. $10 flat fee without direct deposit</li>
     <li>Tiered interest based on balances</li>
     <li>All the convenient services that you get in a Convenience Checking account</li>
</ul>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '<strong>Be very careful with this field as it requires specific HTML to function correctly and look nice.</strong>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_placard_3_body',
    'label' => 'Placard 3 Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_placard_3_link_1'
  $field_instances['node-product_landing_page_strict-field_placard_3_link_1'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Open account',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_placard_3_link_1',
    'label' => 'Placard 3 Link 1',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-orange-background with-white-text',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_placard_3_link_2'
  $field_instances['node-product_landing_page_strict-field_placard_3_link_2'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_placard_3_link_2',
    'label' => 'Placard 3 Link 2',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'with-underline',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_placard_3_title'
  $field_instances['node-product_landing_page_strict-field_placard_3_title'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Convenience Plus Checking',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 20,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_placard_3_title',
    'label' => 'Placard 3 Title',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_product_landing_page_paren'
  $field_instances['node-product_landing_page_strict-field_product_landing_page_paren'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => array(
      0 => array(
        'title' => 'Personal Banking',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_product_landing_page_paren',
    'label' => 'Product Landing Page PARENT Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-product_landing_page_strict-field_quotation_marks'
  $field_instances['node-product_landing_page_strict-field_quotation_marks'] = array(
    'bundle' => 'product_landing_page_strict',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 48,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 58,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_quotation_marks',
    'label' => 'Quotation Marks',
    'required' => 0,
    'settings' => array(
      'form_display' => 0,
      'text' => array(
        'format' => 'full_html',
        'value' => '<span>“</span>',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'static_field',
      'settings' => array(),
      'type' => 'static_field',
      'weight' => 69,
    ),
  );

  // Exported field_instance: 'node-product_tout_item-body'
  $field_instances['node-product_tout_item-body'] = array(
    'bundle' => 'product_tout_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-product_tout_item-field_product_tout_image'
  $field_instances['node-product_tout_item-field_product_tout_image'] = array(
    'bundle' => 'product_tout_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_product_tout_image',
    'label' => 'Product Tout Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'right',
      'css_important' => 1,
      'css_repeat' => 'no-repeat',
      'css_selector' => 'body',
      'css_v_position' => 'bottom',
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-product_tout_item-field_product_tout_link'
  $field_instances['node-product_tout_item-field_product_tout_link'] = array(
    'bundle' => 'product_tout_item',
    'default_value' => array(
      0 => array(
        'title' => 'Learn More',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => 'This is a link to any page on the site. <br />Should be a relative link; i.e., "/link-to-site-content" and not an absolute link "http://www.amalgamatedbank.com/link-to-site-content".',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_product_tout_link',
    'label' => 'Product Tout Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-blue-border js-click-trigger',
        'configurable_title' => 1,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-product_tout_item-field_product_tout_subtitle'
  $field_instances['node-product_tout_item-field_product_tout_subtitle'] = array(
    'bundle' => 'product_tout_item',
    'default_value' => array(
      0 => array(
        'value' => 'Strike while the iron\'s hot',
      ),
    ),
    'deleted' => 0,
    'description' => 'Simple subtitle for the front page display. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_product_tout_subtitle',
    'label' => 'Product Tout Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_breadcrumbs'
  $field_instances['node-promotional_landing_page-field_breadcrumbs'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'static_field',
        'settings' => array(),
        'type' => 'static_field',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_breadcrumbs',
    'label' => 'Breadcrumbs',
    'required' => 0,
    'settings' => array(
      'form_display' => 0,
      'text' => array(
        'format' => 'php_code',
        'value' => '<?php
if (!empty($breadcrumb)): print $breadcrumb;
endif;
?>',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'static_field',
      'settings' => array(),
      'type' => 'static_field',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_masthead_body'
  $field_instances['node-promotional_landing_page-field_masthead_body'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<!--
<div class="col-md-3 c1 js-click-container" style="cursor: pointer;">
	<h3 class="with-orange-text" style="font-size:28px;">
		Access to your<br />
		accounts</h3>

	<p>
		Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do</p>

	<p>
		<a class="btn rounded with-white-border with-blue-background with-white-text js-click-trigger" href="#section-1">￬</a></p>
</div>

<div class="col-md-3 c2 js-click-container" style="cursor: pointer;">
	<h3 class="with-orange-text" style="font-size:28px;">
		Pay bills &amp; transfer<br />
		funds</h3>

	<p>
		Quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea lorem commodo consequat.</p>

	<p>
		<a class="btn rounded with-white-border with-blue-background with-white-text js-click-trigger" href="#section-2">￬</a></p>
</div>

<div class="col-md-3 c3 js-click-container" style="cursor: pointer;">
	<h3 class="with-orange-text" style="font-size:28px;">
		Set goals &amp; track<br />
		spending</h3>

	<p>
		Quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea lorem commodo consequat.</p>

	<p>
		<a class="btn rounded with-white-border with-blue-background with-white-text js-click-trigger" href="#section-3">￬</a></p>
</div>

<div class="col-md-3 c4 js-click-container" style="cursor: pointer;">
	<h3 class="with-orange-text" style="font-size:28px;">
		Mobile banking<br />
		wherever you are</h3>

	<p>
		Quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea lorem commodo consequat.</p>

	<p>
		<a class="btn rounded with-white-border with-blue-background with-white-text js-click-trigger" href="#section-4">￬</a></p>
</div>
-->',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => 'Content for the blue masthead at the top of each promotional page. <br>
<strong>DO NOT USE THIS FIELD IN CONJUNCTION WITH THE STRICT SECTIONS -- ONLY USE ONE OR THE OTHER.</strong><br>
If you use one field or the other, clear out the default contents when creating a new page. You can uncomment the hidden code by viewing the source and use it.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_masthead_body',
    'label' => 'Promo Masthead Freestyle',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promo_box_1_body'
  $field_instances['node-promotional_landing_page-field_promo_box_1_body'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_promo_box_1_body',
    'label' => 'Promo Box 1 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promo_box_1_link'
  $field_instances['node-promotional_landing_page-field_promo_box_1_link'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'title' => '￬',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promo_box_1_link',
    'label' => 'Promo Box 1 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-white-border with-blue-background with-white-text js-click-trigger',
        'configurable_title' => 1,
        'rel' => '',
        'target' => 'default',
        'title' => 'Learn more',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promo_box_1_title'
  $field_instances['node-promotional_landing_page-field_promo_box_1_title'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Access to your accounts',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_promo_box_1_title',
    'label' => 'Promo Box 1 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promo_box_2_body'
  $field_instances['node-promotional_landing_page-field_promo_box_2_body'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea lorem commodo consequat.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_promo_box_2_body',
    'label' => 'Promo Box 2 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promo_box_2_link'
  $field_instances['node-promotional_landing_page-field_promo_box_2_link'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'title' => '￬',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promo_box_2_link',
    'label' => 'Promo Box 2 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-white-border with-blue-background with-white-text js-click-trigger',
        'configurable_title' => 1,
        'rel' => '',
        'target' => 'default',
        'title' => 'Learn more',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promo_box_2_title'
  $field_instances['node-promotional_landing_page-field_promo_box_2_title'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Pay bills & transfer funds',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_promo_box_2_title',
    'label' => 'Promo Box 2 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promo_box_3_body'
  $field_instances['node-promotional_landing_page-field_promo_box_3_body'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea lorem commodo consequat.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_promo_box_3_body',
    'label' => 'Promo Box 3 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promo_box_3_link'
  $field_instances['node-promotional_landing_page-field_promo_box_3_link'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'title' => '￬',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promo_box_3_link',
    'label' => 'Promo Box 3 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-white-border with-blue-background with-white-text js-click-trigger',
        'configurable_title' => 1,
        'rel' => '',
        'target' => 'default',
        'title' => 'Learn more',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promo_box_3_title'
  $field_instances['node-promotional_landing_page-field_promo_box_3_title'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Set goals & track spending',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_promo_box_3_title',
    'label' => 'Promo Box 3 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promo_box_4_body'
  $field_instances['node-promotional_landing_page-field_promo_box_4_body'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea lorem commodo consequat.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_promo_box_4_body',
    'label' => 'Promo Box 4 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promo_box_4_title'
  $field_instances['node-promotional_landing_page-field_promo_box_4_title'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Mobile banking wherever you are',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_ds_field_reset',
    'entity_type' => 'node',
    'field_name' => 'field_promo_box_4_title',
    'label' => 'Promo Box 4 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promo_link_4_link'
  $field_instances['node-promotional_landing_page-field_promo_link_4_link'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'title' => '￬',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promo_link_4_link',
    'label' => 'Promo Link 4 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-white-border with-blue-background with-white-text js-click-trigger',
        'configurable_title' => 1,
        'rel' => '',
        'target' => 'default',
        'title' => 'Learn more',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotion_category'
  $field_instances['node-promotional_landing_page-field_promotion_category'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_promotion_category',
    'label' => 'Promotion Category',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_1_description'
  $field_instances['node-promotional_landing_page-field_promotional_1_description'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => '<p>With Online Banking you can check your balance and account activity or search your statements and payment history whenever you like from your laptop, tablet or smartphone. You can also create email and text alerts that let you know if your account balance is low or if a payment is due so you can avoid fees.</p>',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_1_description',
    'label' => 'Promotional 1 Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_1_freestyle'
  $field_instances['node-promotional_landing_page-field_promotional_1_freestyle'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>Use this field with caution. You\'re able to place any kind of HTML markup in this field. It can be used <em>with</em> or <em>without</em> the strict fields for this section.</strong>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_1_freestyle',
    'label' => 'Promotional 1 Freestyle',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_1_image'
  $field_instances['node-promotional_landing_page-field_promotional_1_image'] = array(
    'bundle' => 'promotional_landing_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'flexslider_fields',
        'settings' => array(
          'caption' => 0,
          'image_style' => '',
          'optionset' => 'default',
        ),
        'type' => 'flexslider',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_1_image',
    'label' => 'Promotional 1 Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'promo-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 0,
            'upload' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_1_subtitle'
  $field_instances['node-promotional_landing_page-field_promotional_1_subtitle'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Bank on your schedule',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_1_subtitle',
    'label' => 'Promotional 1 Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 120,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_1_tagline'
  $field_instances['node-promotional_landing_page-field_promotional_1_tagline'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Quickly access your accounts',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_1_tagline',
    'label' => 'Promotional 1 Tagline',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_1_title'
  $field_instances['node-promotional_landing_page-field_promotional_1_title'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Secure access to your accounts wherever you are.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_1_title',
    'label' => 'Promotional 1 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 175,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_2_body'
  $field_instances['node-promotional_landing_page-field_promotional_2_body'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => '<p>At your convenience—pay bills and make transfers online from home, the office, wherever you can connect. Transfer money safely and quickly between your own accounts or to your friends and family even if they have accounts at other banks. You can also schedule bills in advance knowing theyâ€™ll be paid securely and on time.</p>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 50,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_2_body',
    'label' => 'Promotional 2 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_2_freestyle'
  $field_instances['node-promotional_landing_page-field_promotional_2_freestyle'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>Use this field with caution. You\'re able to place any kind of HTML markup in this field. It can be used <em>with</em> or <em>without</em> the strict fields for this section.</strong>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 59,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_2_freestyle',
    'label' => 'Promotional 2 Freestyle',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_2_image'
  $field_instances['node-promotional_landing_page-field_promotional_2_image'] = array(
    'bundle' => 'promotional_landing_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 52,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_2_image',
    'label' => 'Promotional 2 Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'promo-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 0,
            'upload' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_2_title'
  $field_instances['node-promotional_landing_page-field_promotional_2_title'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Pay bills & transfer funds',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 49,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_2_title',
    'label' => 'Promotional 2 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_3_body'
  $field_instances['node-promotional_landing_page-field_promotional_3_body'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => '<p>From a single site, you can set up budgets, get organized for tax season and track spending in all your accounts, even at other financial institutions. Sign into your all accounts dashboard for easy accounts access and comparison so you never have to hop from site to site again.</p>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_3_body',
    'label' => 'Promotional 3 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_3_freestyle'
  $field_instances['node-promotional_landing_page-field_promotional_3_freestyle'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>Use this field with caution. You\'re able to place any kind of HTML markup in this field. It can be used <em>with</em> or <em>without</em> the strict fields for this section.</strong>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_3_freestyle',
    'label' => 'Promotional 3 Freestyle',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_3_image'
  $field_instances['node-promotional_landing_page-field_promotional_3_image'] = array(
    'bundle' => 'promotional_landing_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_3_image',
    'label' => 'Promotional 3 Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'promo-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 0,
            'upload' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_3_title'
  $field_instances['node-promotional_landing_page-field_promotional_3_title'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Set goals & track spending',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_3_title',
    'label' => 'Promotional 3 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_4_body'
  $field_instances['node-promotional_landing_page-field_promotional_4_body'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => '<p>Access your Amalgamated Bank accounts straight from your mobile device. Check your balance, deposit checks, pay bills, transfer money and get cash-back deals whether you\'re at home or on the go. Bank on your schedule with Mobile Banking and get the convenience and security of Online Banking wherever you are.</p>
',
        'format' => 'filtered_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_4_body',
    'label' => 'Promotional 4 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_4_freestyle'
  $field_instances['node-promotional_landing_page-field_promotional_4_freestyle'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>Use this field with caution. You\'re able to place any kind of HTML markup in this field. It can be used <em>with</em> or <em>without</em> the strict fields for this section.</strong>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 65,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_4_freestyle',
    'label' => 'Promotional 4 Freestyle',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_4_image'
  $field_instances['node-promotional_landing_page-field_promotional_4_image'] = array(
    'bundle' => 'promotional_landing_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_4_image',
    'label' => 'Promotional 4 Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'promo-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 0,
            'upload' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-promotional_landing_page-field_promotional_4_title'
  $field_instances['node-promotional_landing_page-field_promotional_4_title'] = array(
    'bundle' => 'promotional_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Mobile banking where you are',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_promotional_4_title',
    'label' => 'Promotional 4 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_masthead_image'
  $field_instances['node-segment_landing_page-field_masthead_image'] = array(
    'bundle' => 'segment_landing_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 79,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'backgroundfield',
        'settings' => array(),
        'type' => 'backgroundfield_formatter',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_masthead_image',
    'label' => 'Masthead Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => '',
      'css_attachment' => 'scroll',
      'css_h_position' => 'right',
      'css_important' => 0,
      'css_repeat' => 'no-repeat',
      'css_selector' => '.masthead-right',
      'css_v_position' => 'bottom',
      'default_image' => 83,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_style' => 'no_style',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'backgroundfield',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => '',
      ),
      'type' => 'backgroundfield_widget',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_masthead_quote'
  $field_instances['node-segment_landing_page-field_masthead_quote'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'I finally found a bank that has similar values to my own!',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 76,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_masthead_quote',
    'label' => 'Masthead Quote',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_masthead_quote_author'
  $field_instances['node-segment_landing_page-field_masthead_quote_author'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => '—Lauren Burke<br />
Atlas DIY',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 77,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_masthead_quote_author',
    'label' => 'Masthead Quote Author',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_masthead_quote_link'
  $field_instances['node-segment_landing_page-field_masthead_quote_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Her story',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 78,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_masthead_quote_link',
    'label' => 'Masthead Quote Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-white-border with-blue-background with-white-text',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_masthead_section_1_body'
  $field_instances['node-segment_landing_page-field_masthead_section_1_body'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea lorem commodo consequat.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 72,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_masthead_section_1_body',
    'label' => 'Masthead Section 1 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_masthead_section_1_link'
  $field_instances['node-segment_landing_page-field_masthead_section_1_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'See why',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 74,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_masthead_section_1_link',
    'label' => 'Masthead Section 1 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-white-border with-blue-background with-white-text js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_masthead_section_1_title'
  $field_instances['node-segment_landing_page-field_masthead_section_1_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Banking opportunities for all',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 70,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_masthead_section_1_title',
    'label' => 'Masthead Section 1 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_masthead_section_2_body'
  $field_instances['node-segment_landing_page-field_masthead_section_2_body'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea lorem commodo consequat.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 73,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_masthead_section_2_body',
    'label' => 'Masthead Section 2 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_masthead_section_2_link'
  $field_instances['node-segment_landing_page-field_masthead_section_2_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'See why',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 75,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 9,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_masthead_section_2_link',
    'label' => 'Masthead Section 2 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-white-border with-blue-background with-white-text js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_masthead_section_2_title'
  $field_instances['node-segment_landing_page-field_masthead_section_2_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Advocates for social justice',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 71,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_masthead_section_2_title',
    'label' => 'Masthead Section 2 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_features_link_1'
  $field_instances['node-segment_landing_page-field_s1_features_link_1'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Mobile Banking',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 54,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_features_link_1',
    'label' => 'S1 Features Link 1',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_features_link_2'
  $field_instances['node-segment_landing_page-field_s1_features_link_2'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Online Banking',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 55,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_features_link_2',
    'label' => 'S1 Features Link 2',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_features_link_3'
  $field_instances['node-segment_landing_page-field_s1_features_link_3'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => '50k All-Point ATMs',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 56,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_features_link_3',
    'label' => 'S1 Features Link 3',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_features_link_4'
  $field_instances['node-segment_landing_page-field_s1_features_link_4'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Overdraft Protection',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 57,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_features_link_4',
    'label' => 'S1 Features Link 4',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_features_title'
  $field_instances['node-segment_landing_page-field_s1_features_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Features for all bank products',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 52,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_features_title',
    'label' => 'S1 Features Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_main_title'
  $field_instances['node-segment_landing_page-field_s1_main_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Bank',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_main_title',
    'label' => 'S1 Main Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_p1_body'
  $field_instances['node-segment_landing_page-field_s1_p1_body'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 46,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_p1_body',
    'label' => 'S1 P1 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_p1_link'
  $field_instances['node-segment_landing_page-field_s1_p1_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 47,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_p1_link',
    'label' => 'S1 P1 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-orange-background with-white-text js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => 'Learn more',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_p1_title'
  $field_instances['node-segment_landing_page-field_s1_p1_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Checking Accounts',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 41,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_p1_title',
    'label' => 'S1 P1 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_p2_body'
  $field_instances['node-segment_landing_page-field_s1_p2_body'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 45,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_p2_body',
    'label' => 'S1 P2 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_p2_link'
  $field_instances['node-segment_landing_page-field_s1_p2_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 46,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_p2_link',
    'label' => 'S1 P2 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-orange-background with-white-text js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_p2_title'
  $field_instances['node-segment_landing_page-field_s1_p2_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Refinancing',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 44,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_p2_title',
    'label' => 'S1 P2 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_p3_body'
  $field_instances['node-segment_landing_page-field_s1_p3_body'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 48,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_p3_body',
    'label' => 'S1 P3 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_p3_link'
  $field_instances['node-segment_landing_page-field_s1_p3_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 49,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_p3_link',
    'label' => 'S1 P3 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-orange-background with-white-text js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s1_p3_title'
  $field_instances['node-segment_landing_page-field_s1_p3_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Personal Loans',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 142,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s1_p3_title',
    'label' => 'S1 P3 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s2_body_text'
  $field_instances['node-segment_landing_page-field_s2_body_text'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. In tempor commodo sem quis vulputate.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 137,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s2_body_text',
    'label' => 'S2 Body Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s2_image'
  $field_instances['node-segment_landing_page-field_s2_image'] = array(
    'bundle' => 'segment_landing_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 125,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s2_image',
    'label' => 'S2 Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 73,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '268x204',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 0,
            'upload' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 1,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s2_link'
  $field_instances['node-segment_landing_page-field_s2_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Start a plan',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 138,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s2_link',
    'label' => 'S2 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-blue-border',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s2_main_title'
  $field_instances['node-segment_landing_page-field_s2_main_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Savings Tip',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 135,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s2_main_title',
    'label' => 'S2 Main Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s2_subtitle'
  $field_instances['node-segment_landing_page-field_s2_subtitle'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Having a financial plan can double your savings',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 136,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s2_subtitle',
    'label' => 'S2 Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_features_link_1'
  $field_instances['node-segment_landing_page-field_s3_features_link_1'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Mobile Banking',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 111,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_features_link_1',
    'label' => 'S3 Features Link 1',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_features_link_2'
  $field_instances['node-segment_landing_page-field_s3_features_link_2'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Online Banking',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 112,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_features_link_2',
    'label' => 'S3 Features Link 2',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_features_link_3'
  $field_instances['node-segment_landing_page-field_s3_features_link_3'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => '50k All-Point ATMs',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 113,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_features_link_3',
    'label' => 'S3 Features Link 3',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_features_link_4'
  $field_instances['node-segment_landing_page-field_s3_features_link_4'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Overdraft Protection',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 114,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_features_link_4',
    'label' => 'S3 Features Link 4',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_features_title'
  $field_instances['node-segment_landing_page-field_s3_features_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Features of all bank products',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 161,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_features_title',
    'label' => 'S3 Features Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_main_title'
  $field_instances['node-segment_landing_page-field_s3_main_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Borrow',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 150,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_main_title',
    'label' => 'S3 Main Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_p1_body'
  $field_instances['node-segment_landing_page-field_s3_p1_body'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 154,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_p1_body',
    'label' => 'S3 P1 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_p1_link'
  $field_instances['node-segment_landing_page-field_s3_p1_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 155,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_p1_link',
    'label' => 'S3 P1 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-orange-background with-white-text js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_p1_title'
  $field_instances['node-segment_landing_page-field_s3_p1_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Mortgage',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 153,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_p1_title',
    'label' => 'S3 P1 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_p2_body'
  $field_instances['node-segment_landing_page-field_s3_p2_body'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 102,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_p2_body',
    'label' => 'S3 P2 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_p2_link'
  $field_instances['node-segment_landing_page-field_s3_p2_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 103,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_p2_link',
    'label' => 'S3 P2 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-orange-background with-white-text js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_p2_title'
  $field_instances['node-segment_landing_page-field_s3_p2_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Refinancing',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 101,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_p2_title',
    'label' => 'S3 P2 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_p3_body'
  $field_instances['node-segment_landing_page-field_s3_p3_body'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 153,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_p3_body',
    'label' => 'S3 P3 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_p3_link'
  $field_instances['node-segment_landing_page-field_s3_p3_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 154,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_p3_link',
    'label' => 'S3 P3 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-orange-background with-white-text js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s3_p3_title'
  $field_instances['node-segment_landing_page-field_s3_p3_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Personal Loans',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 152,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s3_p3_title',
    'label' => 'S3 P3 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s4_link'
  $field_instances['node-segment_landing_page-field_s4_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Start a plan',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 68,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 9,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s4_link',
    'label' => 'S4 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-blue-border',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s4_main_image'
  $field_instances['node-segment_landing_page-field_s4_main_image'] = array(
    'bundle' => 'segment_landing_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 65,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s4_main_image',
    'label' => 'S4 Main Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '264x276',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 0,
            'upload' => 0,
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'imce_filefield_on' => 0,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s4_quote'
  $field_instances['node-segment_landing_page-field_s4_quote'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => ' All I have to do is pick up the phone and it\'s "Hi Micoy." I felt like a number at my other bank.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s4_quote',
    'label' => 'S4 Quote',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 150,
      ),
      'type' => 'text_textfield',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s4_quote_author'
  $field_instances['node-segment_landing_page-field_s4_quote_author'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => '<p>
—Micoy Hamilton <br />
Customer since 1995
</p>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 67,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s4_quote_author',
    'label' => 'S4 Quote Author',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_features_link_1'
  $field_instances['node-segment_landing_page-field_s5_features_link_1'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => '50k All-Point ATMs',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 54,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_features_link_1',
    'label' => 'S5 Features Link 1',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_features_link_2'
  $field_instances['node-segment_landing_page-field_s5_features_link_2'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Online Banking',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 55,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_features_link_2',
    'label' => 'S5 Features Link 2',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_features_link_3'
  $field_instances['node-segment_landing_page-field_s5_features_link_3'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => '50k All-Point ATMs',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 56,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_features_link_3',
    'label' => 'S5 Features Link 3',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_features_link_4'
  $field_instances['node-segment_landing_page-field_s5_features_link_4'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Overdraft Protection',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 58,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_features_link_4',
    'label' => 'S5 Features Link 4',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_features_title'
  $field_instances['node-segment_landing_page-field_s5_features_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Features of all bank products',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 146,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_features_title',
    'label' => 'S5 Features Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_main_title'
  $field_instances['node-segment_landing_page-field_s5_main_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Invest',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 150,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_main_title',
    'label' => 'S5 Main Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_p1_body'
  $field_instances['node-segment_landing_page-field_s5_p1_body'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 152,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_p1_body',
    'label' => 'S5 P1 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_p1_link'
  $field_instances['node-segment_landing_page-field_s5_p1_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 153,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_p1_link',
    'label' => 'S5 P1 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-orange-background with-white-text js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_p1_title'
  $field_instances['node-segment_landing_page-field_s5_p1_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'IRAs',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 151,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_p1_title',
    'label' => 'S5 P1 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_p2_body'
  $field_instances['node-segment_landing_page-field_s5_p2_body'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 156,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_p2_body',
    'label' => 'S5 P2 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_p2_link'
  $field_instances['node-segment_landing_page-field_s5_p2_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 157,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_p2_link',
    'label' => 'S5 P2 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-orange-background with-white-text js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_p2_title'
  $field_instances['node-segment_landing_page-field_s5_p2_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Investment Products',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 155,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_p2_title',
    'label' => 'S5 P2 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_p3_body'
  $field_instances['node-segment_landing_page-field_s5_p3_body'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 159,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_p3_body',
    'label' => 'S5 P3 Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_p3_link'
  $field_instances['node-segment_landing_page-field_s5_p3_link'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'title' => 'Learn more',
        'url' => '<front>',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 160,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_p3_link',
    'label' => 'S5 P3 Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'btn rounded with-orange-background with-white-text js-click-trigger',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_s5_p3_title'
  $field_instances['node-segment_landing_page-field_s5_p3_title'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Another Product ',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 158,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_s5_p3_title',
    'label' => 'S5 P3 Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page-field_segment_page_subtitle'
  $field_instances['node-segment_landing_page-field_segment_page_subtitle'] = array(
    'bundle' => 'segment_landing_page',
    'default_value' => array(
      0 => array(
        'value' => 'Personal Banking',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 69,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_segment_page_subtitle',
    'label' => 'Segment Page Subtitle',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page_freestyle-body'
  $field_instances['node-segment_landing_page_freestyle-body'] = array(
    'bundle' => 'segment_landing_page_freestyle',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<style rel="stylesheet" type="text/css">.segment-landing-page section.title .r2 .c3 {
background-image: url(/amalgamated-bank/sites/default/files/sample-6.png );
}

.segment-landing-page section.title .r2 .c3 {
background-position: right bottom;
background-repeat: no-repeat;
margin-bottom: -144px;
margin-top: -120px;
padding-bottom: 180px;
padding-top: 30px;
}

.segment-landing-page section.title {
overflow-y: hidden;
}
</style>
<div class="container">
	<div class="row r1">
		<div class="col-md-12 c1">
			<h2>
				<small><a href="#">Personal Banking</a></small> Why choose Amalgamated</h2>
		</div>
	</div>

	<div class="row r2" style="margin-top:51px;">
		<div class="col-md-8 col-sm-6">
			<div class="row">
				<div class="col-md-6 c1 js-click-container" style="cursor: pointer;">
					<h3 class="with-orange-text" style="font-size:28px;">
						Banking<br />
						opportunities for all</h3>

					<p>
						Quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea lorem commodo consequat.</p>

					<p>
						<a class="btn rounded with-white-border with-blue-background with-white-text js-click-trigger" href="#">See why</a></p>
				</div>

				<div class="col-md-6 c2 js-click-container" style="cursor: pointer;">
					<h3 class="with-orange-text" style="font-size:28px;">
						Advocates for<br />
						social justice</h3>

					<p>
						Quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea lorem commodo consequat.</p>

					<p>
						<a class="btn rounded with-white-border with-blue-background with-white-text js-click-trigger" href="#">See why</a></p>
				</div>
			</div>
		</div>

		<div class="col-md-4 col-sm-6 c3">
			<blockquote>
				I finally found a<br />
				bank that has similar<br />
				values to my own!</blockquote>
			<cite>—Lauren Burke<br />
			Atlas DIY</cite>

			<p>
				<a class="btn rounded with-white-border with-blue-background with-white-text" href="#">Her story</a></p>
		</div>
	</div>
</div>
',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => 'This is the main blue area for the top of the page. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Masthead Section',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page_freestyle-field_segment_section_grey'
  $field_instances['node-segment_landing_page_freestyle-field_segment_section_grey'] = array(
    'bundle' => 'segment_landing_page_freestyle',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<div class="container">
	<div class="row r1" style="margin-bottom:40px;margin-top:38px;">
		<div class="col-md-3 col-sm-6">
			<img class="fluid" src="/amalgamated-bank/sites/default/files/segment-1.png" /></div>

		<div class="col-md-9 col-sm-6">
			<h3 class="with-blue-text">
				<small>Savings Tip</small> Having a financial plan can double your savings</h3>

			<p>
				Lorem ipsum dolor sit amet, consectetur adipiscing elit. In tempor commodo sem quis vulputate.</p>

			<p>
				<a class="btn rounded with-blue-border" href="#">Start a plan</a></p>
		</div>
	</div>
</div>
',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_segment_section_grey',
    'label' => 'Segment Section Grey 1',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page_freestyle-field_segment_section_grey_2'
  $field_instances['node-segment_landing_page_freestyle-field_segment_section_grey_2'] = array(
    'bundle' => 'segment_landing_page_freestyle',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<div class="container">
	<div class="row r1" style="margin-bottom:40px;margin-top:38px;">
		<div class="col-md-3 col-sm-6">
			<img class="fluid" src="/amalgamated-bank/sites/default/files/segment-1.png" /></div>

		<div class="col-md-9 col-sm-6">
			<h3 class="with-blue-text">
				<small>Savings Tip</small> Having a financial plan can double your savings</h3>

			<p>
				Lorem ipsum dolor sit amet, consectetur adipiscing elit. In tempor commodo sem quis vulputate.</p>

			<p>
				<a class="btn rounded with-blue-border" href="#">Start a plan</a></p>
		</div>
	</div>
</div>
',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_segment_section_grey_2',
    'label' => 'Segment Section Grey 2',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page_freestyle-field_segment_section_white'
  $field_instances['node-segment_landing_page_freestyle-field_segment_section_white'] = array(
    'bundle' => 'segment_landing_page_freestyle',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<div class="container">
	<div class="row r1">
		<div class="col-sm-12">
			<h2 class="with-blue-text">
				Bank</h2>
		</div>
	</div>

	<div class="row r2">
		<div class="col-md-3 col-sm-6 c1">
			<div class="panel rounded with-gray-border js-click-container" style="min-height: 263px; cursor: pointer;">
				<div class="panel-heading">
					<h3 class="with-orange-text">
						Checking Accounts</h3>
				</div>

				<div class="panel-body">
					<p>
						Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>

					<p>
						<a class="btn rounded with-orange-background with-white-text js-click-trigger" href="#">Learn more</a></p>
				</div>
			</div>
		</div>

		<div class="col-md-3 col-sm-6 c2">
			<div class="panel rounded with-gray-border js-click-container" style="min-height: 263px; cursor: pointer;">
				<div class="panel-heading">
					<h3 class="with-orange-text">
						Savings Accounts</h3>
				</div>

				<div class="panel-body">
					<p>
						Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>

					<p>
						<a class="btn rounded with-orange-background with-white-text js-click-trigger" href="#">Learn more</a></p>
				</div>
			</div>
		</div>

		<div class="col-md-3 col-sm-6 c3">
			<div class="panel rounded with-gray-border js-click-container" style="min-height: 263px; cursor: pointer;">
				<div class="panel-heading">
					<h3 class="with-orange-text">
						Other Accounts</h3>
				</div>

				<div class="panel-body">
					<p>
						Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>

					<p>
						<a class="btn rounded with-orange-background with-white-text js-click-trigger" href="#">Learn more</a></p>
				</div>
			</div>
		</div>

		<div class="col-md-3 col-sm-6 c4">
			<div class="panel features" style="min-height: 263px;">
				<div class="panel-body">
					<h3>
						Features for all bank products</h3>

					<ul>
						<li class="n1">
							<a href="#">Mobile Banking</a></li>
						<li class="n2">
							<a href="#">Online Banking</a></li>
						<li class="n3">
							<a href="#">50k All-point ATMs</a></li>
						<li class="n4">
							<a href="#">Overdraft Protection</a></li>
					</ul>
				</div>
			</div>
		</div>
	</div>
</div>
',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_segment_section_white',
    'label' => 'Segment Section White 1',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-segment_landing_page_freestyle-field_segment_section_white_2'
  $field_instances['node-segment_landing_page_freestyle-field_segment_section_white_2'] = array(
    'bundle' => 'segment_landing_page_freestyle',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<div class="container">
	<div class="row r1">
		<div class="col-sm-12">
			<h2 class="with-blue-text">
				Bank</h2>
		</div>
	</div>

	<div class="row r2">
		<div class="col-md-3 col-sm-6 c1">
			<div class="panel rounded with-gray-border js-click-container" style="min-height: 263px; cursor: pointer;">
				<div class="panel-heading">
					<h3 class="with-orange-text">
						Checking Accounts</h3>
				</div>

				<div class="panel-body">
					<p>
						Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>

					<p>
						<a class="btn rounded with-orange-background with-white-text js-click-trigger" href="#">Learn more</a></p>
				</div>
			</div>
		</div>

		<div class="col-md-3 col-sm-6 c2">
			<div class="panel rounded with-gray-border js-click-container" style="min-height: 263px; cursor: pointer;">
				<div class="panel-heading">
					<h3 class="with-orange-text">
						Savings Accounts</h3>
				</div>

				<div class="panel-body">
					<p>
						Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>

					<p>
						<a class="btn rounded with-orange-background with-white-text js-click-trigger" href="#">Learn more</a></p>
				</div>
			</div>
		</div>

		<div class="col-md-3 col-sm-6 c3">
			<div class="panel rounded with-gray-border js-click-container" style="min-height: 263px; cursor: pointer;">
				<div class="panel-heading">
					<h3 class="with-orange-text">
						Other Accounts</h3>
				</div>

				<div class="panel-body">
					<p>
						Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>

					<p>
						<a class="btn rounded with-orange-background with-white-text js-click-trigger" href="#">Learn more</a></p>
				</div>
			</div>
		</div>

		<div class="col-md-3 col-sm-6 c4">
			<div class="panel features" style="min-height: 263px;">
				<div class="panel-body">
					<h3>
						Features for all bank products</h3>

					<ul>
						<li class="n1">
							<a href="#">Mobile Banking</a></li>
						<li class="n2">
							<a href="#">Online Banking</a></li>
						<li class="n3">
							<a href="#">50k All-point ATMs</a></li>
						<li class="n4">
							<a href="#">Overdraft Protection</a></li>
					</ul>
				</div>
			</div>
		</div>
	</div>
</div>',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_segment_section_white_2',
    'label' => 'Segment Section White 2',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-webform-body'
  $field_instances['node-webform-body'] = array(
    'bundle' => 'webform',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<div class="alert alert-info">
<span class="glyphicon glyphicon-pencil"></span>
Be very careful editing the information in this table. It\'s very important that any class names, IDs, or special tags be maintained. Otherwise, the content in the table won\'t display correctly.
</div>');
  t('<strong>Be very careful editing this section, as changing it will result in the layout and presentation (look and feel) changing.<br />The percentage in particular has to be handled carefully.</strong>');
  t('<strong>Be very careful with this field as it requires specific HTML to function correctly and look nice.</strong>');
  t('<strong>Use this field with caution. You\'re able to place any kind of HTML markup in this field. It can be used <em>with</em> or <em>without</em> the strict fields for this section.</strong>');
  t('Any files -- such as forms, PDFs, etc -- that are applicable to the event. ');
  t('Basic Page Image');
  t('Basic Quote');
  t('Basic Quote Source');
  t('Basic Summary');
  t('Basic image for the page. Will be sized accordingly. This section is optional and not at all required. ');
  t('Body');
  t('Breadcrumbs');
  t('Comment');
  t('Compare Table');
  t('Compare Table Mobile Instructions');
  t('Content Area Spacer');
  t('Content Spacer Details');
  t('Content Subtitle');
  t('Content Title');
  t('Content for the blue masthead at the top of each promotional page. <br>
<strong>DO NOT USE THIS FIELD IN CONJUNCTION WITH THE STRICT SECTIONS -- ONLY USE ONE OR THE OTHER.</strong><br>
If you use one field or the other, clear out the default contents when creating a new page. You can uncomment the hidden code by viewing the source and use it.');
  t('Covers the gray callout box and the legal disclaimer box beneath it on the page. <strong>Be careful editing this section.</strong>');
  t('Customer Details');
  t('Customer Name');
  t('Customer Story Link');
  t('Event Address 1');
  t('Event Address 2');
  t('Event Attachments');
  t('Event City');
  t('Event Day');
  t('Event Description');
  t('Event End Date');
  t('Event Image');
  t('Event Month');
  t('Event Start Date');
  t('Event State');
  t('Event Venue');
  t('Event Zipcode');
  t('Features Image 1');
  t('Features Image 2');
  t('Features Image 3');
  t('Features Image 4');
  t('Features Link 1');
  t('Features Link 2');
  t('Features Link 3');
  t('Features Link 4');
  t('Features Section');
  t('Features Title');
  t('Freestyle Info');
  t('Headline');
  t('Headline Description');
  t('Headline Image');
  t('Headline Subtitle');
  t('Headline Tagline');
  t('Headline Title');
  t('Hero Tagged');
  t('Landing Subtitle');
  t('Limit HTML to simple tags please. ');
  t('Masthead Compare Link');
  t('Masthead Image');
  t('Masthead Main Image');
  t('Masthead Quote');
  t('Masthead Quote Author');
  t('Masthead Quote Link');
  t('Masthead Section');
  t('Masthead Section 1 Body');
  t('Masthead Section 1 Link');
  t('Masthead Section 1 Title');
  t('Masthead Section 2 Body');
  t('Masthead Section 2 Link');
  t('Masthead Section 2 Title');
  t('Modal Content');
  t('Modal Control Button');
  t('Modal Footer Close Button');
  t('Modal Header Close Button');
  t('Modal Title');
  t('Panel 1 Body');
  t('Panel 1 Link');
  t('Panel 1 Title');
  t('Panel 2 Body');
  t('Panel 2 Link');
  t('Panel 2 Title');
  t('Panel 3 Author');
  t('Panel 3 Author Job');
  t('Panel 3 Image');
  t('Panel 3 Quote');
  t('Panel 4 Body');
  t('Panel 4 Link');
  t('Panel 4 Title');
  t('Panel Bottom Description');
  t('Panel Bottom Heading');
  t('Panel Bottom Image');
  t('Panel Bottom Link');
  t('Panel Bottom Subheading');
  t('Panel Top Description');
  t('Panel Top Heading');
  t('Panel Top Image');
  t('Panel Top Link');
  t('Placard 1 Body');
  t('Placard 1 Link 1');
  t('Placard 1 Link 2');
  t('Placard 1 Title');
  t('Placard 2 Body');
  t('Placard 2 Link 1');
  t('Placard 2 Link 2');
  t('Placard 2 Title');
  t('Placard 3 Body');
  t('Placard 3 Link 1');
  t('Placard 3 Link 2');
  t('Placard 3 Title');
  t('Primary Headline');
  t('Product Landing Page PARENT Link');
  t('Product Tout Image');
  t('Product Tout Link');
  t('Product Tout Subtitle');
  t('Promo Box 1 Body');
  t('Promo Box 1 Link');
  t('Promo Box 1 Title');
  t('Promo Box 2 Body');
  t('Promo Box 2 Link');
  t('Promo Box 2 Title');
  t('Promo Box 3 Body');
  t('Promo Box 3 Link');
  t('Promo Box 3 Title');
  t('Promo Box 4 Body');
  t('Promo Box 4 Title');
  t('Promo Link 4 Link');
  t('Promo Masthead Freestyle');
  t('Promotion Category');
  t('Promotional 1 Description');
  t('Promotional 1 Freestyle');
  t('Promotional 1 Image');
  t('Promotional 1 Subtitle');
  t('Promotional 1 Tagline');
  t('Promotional 1 Title');
  t('Promotional 2 Body');
  t('Promotional 2 Freestyle');
  t('Promotional 2 Image');
  t('Promotional 2 Title');
  t('Promotional 3 Body');
  t('Promotional 3 Freestyle');
  t('Promotional 3 Image');
  t('Promotional 3 Title');
  t('Promotional 4 Body');
  t('Promotional 4 Freestyle');
  t('Promotional 4 Image');
  t('Promotional 4 Title');
  t('Published');
  t('Quotation Marks');
  t('Quote');
  t('Quote Source');
  t('Relatively short description for the informational gateway item that appears near the top of the content.');
  t('S1 Features Link 1');
  t('S1 Features Link 2');
  t('S1 Features Link 3');
  t('S1 Features Link 4');
  t('S1 Features Title');
  t('S1 Main Title');
  t('S1 P1 Body');
  t('S1 P1 Link');
  t('S1 P1 Title');
  t('S1 P2 Body');
  t('S1 P2 Link');
  t('S1 P2 Title');
  t('S1 P3 Body');
  t('S1 P3 Link');
  t('S1 P3 Title');
  t('S2 Body Text');
  t('S2 Image');
  t('S2 Link');
  t('S2 Main Title');
  t('S2 Subtitle');
  t('S3 Features Link 1');
  t('S3 Features Link 2');
  t('S3 Features Link 3');
  t('S3 Features Link 4');
  t('S3 Features Title');
  t('S3 Main Title');
  t('S3 P1 Body');
  t('S3 P1 Link');
  t('S3 P1 Title');
  t('S3 P2 Body');
  t('S3 P2 Link');
  t('S3 P2 Title');
  t('S3 P3 Body');
  t('S3 P3 Link');
  t('S3 P3 Title');
  t('S4 Link');
  t('S4 Main Image');
  t('S4 Quote');
  t('S4 Quote Author');
  t('S5 Features Link 1');
  t('S5 Features Link 2');
  t('S5 Features Link 3');
  t('S5 Features Link 4');
  t('S5 Features Title');
  t('S5 Main Title');
  t('S5 P1 Body');
  t('S5 P1 Link');
  t('S5 P1 Title');
  t('S5 P2 Body');
  t('S5 P2 Link');
  t('S5 P2 Title');
  t('S5 P3 Body');
  t('S5 P3 Link');
  t('S5 P3 Title');
  t('Secondary Headline');
  t('Segment Page Subtitle');
  t('Segment Section Grey 1');
  t('Segment Section Grey 2');
  t('Segment Section White 1');
  t('Segment Section White 2');
  t('Share Widget');
  t('Share Widget Basic');
  t('Share Widget Basic Main');
  t('Share Widget Main');
  t('Shouldn\'t need to be changed at all once this is set up.');
  t('Simple subtitle for the front page display. ');
  t('Slideshow Description');
  t('Slideshow Image');
  t('Slideshow Order');
  t('Slideshow Title');
  t('Summary');
  t('Summary for the article. This is the text that appears in bold at the top of the page. ');
  t('Tab 1 Body 1');
  t('Tab 1 Body 2');
  t('Tab 1 Section 2 Box 1 Body');
  t('Tab 1 Section 2 Box 1 Icon');
  t('Tab 1 Section 2 Box 1 Link');
  t('Tab 1 Section 2 Box 1 Title');
  t('Tab 1 Section 2 Box 2 Body');
  t('Tab 1 Section 2 Box 2 Icon');
  t('Tab 1 Section 2 Box 2 Link');
  t('Tab 1 Section 2 Box 2 Title');
  t('Tab 1 Section 2 Box 3 Body');
  t('Tab 1 Section 2 Box 3 Icon');
  t('Tab 1 Section 2 Box 3 Link');
  t('Tab 1 Section 2 Box 3 Title');
  t('Tab 1 Section 2 Box 4 Body');
  t('Tab 1 Section 2 Box 4 Link');
  t('Tab 1 Section 2 Box 4 Title');
  t('Tab 1 Section 2 Header');
  t('Tab 2 Body');
  t('Tab 3 Body');
  t('Tagged');
  t('The date the article was published. The default is the current date. ');
  t('The gray bar between the main masthead (top section).');
  t('The orange text for the slideshow image. ');
  t('The order in which the slideshow item should appear in increments of 10. The reason for increments of 10 is so that you\'re able to go back and rearrange the order of slideshows without have to actually go back to each informational gateway item every time.');
  t('This field generates the 2 digit date of the event on relevant pages only.');
  t('This field generates the 3 letter month of the event on relevant pages only. Example: January becomes "Jan", etc.');
  t('This field is the popup window used for comparing different account types on Product Details pages. ');
  t('This is a free form area for HTML markup for Informational Gateway Items. Proceed with caution when changing the content on this page. ');
  t('This is a link to any page on the site. <br />Should be a relative link; i.e., "/link-to-site-content" and not an absolute link "http://www.amalgamatedbank.com/link-to-site-content".');
  t('This is the area that appears above the main content in the blue section of the page beneath the logo and navigation. ');
  t('This is the button for showing the popup window');
  t('This is the location that the event is taking place -- perhaps a particular building or suite. It is <strong>different</strong> from the address, city, state, or zipcode.');
  t('This is the main blue area for the top of the page. ');
  t('This should be the same as the share widget in the right hand column. ');
  t('Top Section');
  t('by');
  t('spacer');
  t('tab 1 Section 2 Box 4 Icon');

  return $field_instances;
}
