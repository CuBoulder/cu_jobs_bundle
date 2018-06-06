<?php
/**
 * @file
 * cu_jobs_bundle.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cu_jobs_bundle_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
