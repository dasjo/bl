<?php
/**
 * @file
 * bl_page_manager.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bl_page_manager_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_http_response';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Private term pages',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '301',
    'destination' => '<front>',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['term_view_http_response'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Default term pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      1 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '75328ec1-c3c6-4ca0-b47a-940e590dd1ee';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e948d29b-bed0-4cec-8c5f-f5cc7a1b6167';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'taxonomy_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'context' => array(
        0 => 'argument_term_1.tid',
        1 => '',
      ),
      'override_title' => 1,
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
    $pane->uuid = 'e948d29b-bed0-4cec-8c5f-f5cc7a1b6167';
    $display->content['new-e948d29b-bed0-4cec-8c5f-f5cc7a1b6167'] = $pane;
    $display->panels['bottom'][0] = 'new-e948d29b-bed0-4cec-8c5f-f5cc7a1b6167';
    $pane = new stdClass();
    $pane->pid = 'new-ed7861ff-22af-4ab2-86c3-533654b89af0';
    $pane->panel = 'left';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
      'override_title' => 1,
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
    $pane->uuid = 'ed7861ff-22af-4ab2-86c3-533654b89af0';
    $display->content['new-ed7861ff-22af-4ab2-86c3-533654b89af0'] = $pane;
    $display->panels['left'][0] = 'new-ed7861ff-22af-4ab2-86c3-533654b89af0';
    $pane = new stdClass();
    $pane->pid = 'new-31a06150-34e9-4742-b194-931429b98863';
    $pane->panel = 'right';
    $pane->type = 'user_profile';
    $pane->subtype = 'user_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'context_user_1',
      'override_title' => 1,
      'override_title_text' => 'Hello %user:name',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '31a06150-34e9-4742-b194-931429b98863';
    $display->content['new-31a06150-34e9-4742-b194-931429b98863'] = $pane;
    $display->panels['right'][0] = 'new-31a06150-34e9-4742-b194-931429b98863';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ed7861ff-22af-4ab2-86c3-533654b89af0';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}
