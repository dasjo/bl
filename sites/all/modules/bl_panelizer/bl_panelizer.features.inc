<?php
/**
 * @file
 * bl_panelizer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bl_panelizer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}
