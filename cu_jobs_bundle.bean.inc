<?php
/**
 * @file
 * cu_jobs_bundle.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function cu_jobs_bundle_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'cu_jobs_feed';
  $bean_type->label = 'CU Jobs Feed';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['cu_jobs_feed'] = $bean_type;

  return $export;
}
