<?php
/**
 * @file
 * cu_jobs_bundle.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cu_jobs_bundle_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-cu_jobs_feed-field_jobs_feed_count'.
  $field_instances['bean-cu_jobs_feed-field_jobs_feed_count'] = array(
    'bundle' => 'cu_jobs_feed',
    'default_value' => array(
      0 => array(
        'value' => 5,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => FALSE,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_jobs_feed_count',
    'label' => 'Number of Jobs',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Number of Jobs');

  return $field_instances;
}
