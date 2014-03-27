<?php
/**
 * @file
 * bl_panelizer.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function bl_panelizer_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'a4bcfb22-68fa-47f0-9d04-9b980cfa3e27';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5239ab5d-9fee-403c-b475-91a2acd0b163';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5239ab5d-9fee-403c-b475-91a2acd0b163';
    $display->content['new-5239ab5d-9fee-403c-b475-91a2acd0b163'] = $pane;
    $display->panels['center'][0] = 'new-5239ab5d-9fee-403c-b475-91a2acd0b163';
    $pane = new stdClass();
    $pane->pid = 'new-cf384c4a-e79a-4583-9fe7-a1a17c18816a';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cf384c4a-e79a-4583-9fe7-a1a17c18816a';
    $display->content['new-cf384c4a-e79a-4583-9fe7-a1a17c18816a'] = $pane;
    $display->panels['center'][1] = 'new-cf384c4a-e79a-4583-9fe7-a1a17c18816a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cf384c4a-e79a-4583-9fe7-a1a17c18816a';
  $panelizer->display = $display;
  $export['node:page:default:default'] = $panelizer;

  return $export;
}
