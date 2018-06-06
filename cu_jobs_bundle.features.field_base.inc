<?php
/**
 * @file
 * cu_jobs_bundle.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cu_jobs_bundle_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_jobs_feed_count'.
  $field_bases['field_jobs_feed_count'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_jobs_feed_count',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
        5 => 5,
        6 => 6,
        7 => 7,
        8 => 8,
        9 => 9,
        10 => 10,
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  return $field_bases;
}
