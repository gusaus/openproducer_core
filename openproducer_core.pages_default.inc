<?php
/**
 * @file
 * openproducer_core.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function openproducer_core_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'openproducer_front';
  $page->task = 'page';
  $page->admin_title = 'Front Page';
  $page->admin_description = 'This is the front page of the site used to kick things off on a good foot!';
  $page->path = 'front';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access content',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Home',
    'name' => 'main-menu',
    'weight' => '-20',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_openproducer_front_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'openproducer_front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Front Page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => 'front-panel',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'coltrane_double';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'slider' => NULL,
      'slidergutter' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'footercolumn1' => NULL,
      'footercolumn2' => NULL,
      'footercolumn3' => NULL,
      'header' => NULL,
      'secondarycolumn1' => NULL,
      'secondarycolumn2' => NULL,
      'secondarycolumn3' => NULL,
      'middle' => NULL,
      'secondcolumn1' => NULL,
      'secondcolumn2' => NULL,
      'footer' => NULL,
    ),
    'footer' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cd0f9fef-5202-4c91-9ec0-2b36f9251fbe';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fc4506c2-b0de-4780-b526-a394c6d06e35';
  $pane->panel = 'column1';
  $pane->type = 'views_panes';
  $pane->subtype = 'releases-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '1',
    'fields_override' => array(
      'field_artwork' => 1,
      'title' => 1,
      'field_artist' => 0,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Featured Release',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fc4506c2-b0de-4780-b526-a394c6d06e35';
  $display->content['new-fc4506c2-b0de-4780-b526-a394c6d06e35'] = $pane;
  $display->panels['column1'][0] = 'new-fc4506c2-b0de-4780-b526-a394c6d06e35';
  $pane = new stdClass();
  $pane->pid = 'new-24a6d8bb-8b4d-47e1-ab36-e03c5f4c7a10';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'more_link' => 1,
    'items_per_page' => '3',
    'fields_override' => array(
      'field_featured_image' => 1,
      'title' => 0,
      'field_event_date' => 0,
      'field_event_venue' => 0,
      'field_event_city' => 0,
      'field_event_state' => 0,
      'nothing' => 1,
    ),
    'override_title' => '',
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'view_settings' => 'fields',
    'header_type' => 'none',
    'view_mode' => 'teaser',
    'widget_title' => 'Upcoming shows',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'bootstrap_styles:well',
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '24a6d8bb-8b4d-47e1-ab36-e03c5f4c7a10';
  $display->content['new-24a6d8bb-8b4d-47e1-ab36-e03c5f4c7a10'] = $pane;
  $display->panels['column2'][0] = 'new-24a6d8bb-8b4d-47e1-ab36-e03c5f4c7a10';
  $pane = new stdClass();
  $pane->pid = 'new-98392514-52c6-410e-a43b-a0f867c7770e';
  $pane->panel = 'column2';
  $pane->type = 'block';
  $pane->subtype = 'follow-site';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '98392514-52c6-410e-a43b-a0f867c7770e';
  $display->content['new-98392514-52c6-410e-a43b-a0f867c7770e'] = $pane;
  $display->panels['column2'][1] = 'new-98392514-52c6-410e-a43b-a0f867c7770e';
  $pane = new stdClass();
  $pane->pid = 'new-fb6e2b71-b8a8-4ae1-a6e1-64aea74c2663';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'releases-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '4',
    'fields_override' => array(
      'field_artwork' => 1,
      'title' => 1,
    ),
    'exposed' => array(
      'widget_title' => 'Releases',
      'sort_by' => 'field_release_date_value',
      'sort_order' => 'DESC',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Releases',
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'bootstrap_styles:well',
    'settings' => array(
      'modifier_class' => '',
      'hide_classes' => array(),
      'additional_classes' => array(),
      'collapsible' => FALSE,
      'collapsed' => '',
      'region_title' => '',
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fb6e2b71-b8a8-4ae1-a6e1-64aea74c2663';
  $display->content['new-fb6e2b71-b8a8-4ae1-a6e1-64aea74c2663'] = $pane;
  $display->panels['footer'][0] = 'new-fb6e2b71-b8a8-4ae1-a6e1-64aea74c2663';
  $pane = new stdClass();
  $pane->pid = 'new-7cfe4dc2-f5b3-4121-a3bf-8c7feb5c2c23';
  $pane->panel = 'header';
  $pane->type = 'fieldable_panels_pane';
  $pane->subtype = 'uuid:a14393f3-cb4b-4258-9aa9-1c49f0486831';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'fieldable_panels_pane' => (object) array(
      'bundle' => 'widgets',
      'language' => 'und',
      'is_new' => TRUE,
      'title' => 'List',
      'link' => 0,
      'path' => '',
      'reusable' => 0,
      'admin_title' => '',
      'admin_description' => '',
      'category' => 'Reusable Content',
      'vid' => '1',
      'current_vid' => '',
      'revision' => 1,
      'fpid' => '1',
      'field_widget' => array(
        'und' => array(
          0 => array(
            'value' => '<iframe width="100%" height="450" scrolling="no" frameborder="no" src="https://w.soundcloud.com/player/?url=https%3A//api.soundcloud.com/tracks/90622155&amp;auto_play=false&amp;hide_related=false&amp;show_comments=true&amp;show_user=true&amp;show_reposts=false&amp;visual=true"></iframe>',
            'format' => 'php_code',
          ),
        ),
      ),
      'log' => '',
      'created' => 1441955544,
      'timestamp' => 1441955544,
      'changed' => 1441955544,
      'uuid' => 'a14393f3-cb4b-4258-9aa9-1c49f0486831',
      'vuuid' => '562968f7-eeef-429e-be6d-2ba7be5576c8',
      'uid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7cfe4dc2-f5b3-4121-a3bf-8c7feb5c2c23';
  $display->content['new-7cfe4dc2-f5b3-4121-a3bf-8c7feb5c2c23'] = $pane;
  $display->panels['header'][0] = 'new-7cfe4dc2-f5b3-4121-a3bf-8c7feb5c2c23';
  $pane = new stdClass();
  $pane->pid = 'new-2f7e8ec5-14be-4c4f-a820-dd5435994ff5';
  $pane->panel = 'header';
  $pane->type = 'views_panes';
  $pane->subtype = 'news-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'bootstrap_styles:jumbotron',
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2f7e8ec5-14be-4c4f-a820-dd5435994ff5';
  $display->content['new-2f7e8ec5-14be-4c4f-a820-dd5435994ff5'] = $pane;
  $display->panels['header'][1] = 'new-2f7e8ec5-14be-4c4f-a820-dd5435994ff5';
  $pane = new stdClass();
  $pane->pid = 'new-01bf7cce-3eb2-49c0-b8f4-cd0bd9f92ab0';
  $pane->panel = 'secondcolumn1';
  $pane->type = 'views_panes';
  $pane->subtype = 'photosets-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '1',
    'offset' => '0',
    'fields_override' => array(
      'field_photos' => 0,
      'field_photos_1' => 0,
      'colorbox' => 1,
    ),
    'exposed' => array(
      'widget_title' => 'Featured Photoset',
      'more_link' => 0,
      'use_pager' => 1,
      'pager_id' => '',
      'sort_by' => 'random',
      'sort_order' => 'ASC',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Featured Photoset',
    'use_pager' => NULL,
    'pager_id' => NULL,
    'link_to_view' => NULL,
    'more_link' => 0,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '01bf7cce-3eb2-49c0-b8f4-cd0bd9f92ab0';
  $display->content['new-01bf7cce-3eb2-49c0-b8f4-cd0bd9f92ab0'] = $pane;
  $display->panels['secondcolumn1'][0] = 'new-01bf7cce-3eb2-49c0-b8f4-cd0bd9f92ab0';
  $pane = new stdClass();
  $pane->pid = 'new-be6a5afb-0676-496f-88fe-eefb7dda074f';
  $pane->panel = 'secondcolumn2';
  $pane->type = 'views_panes';
  $pane->subtype = 'video-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '1',
    'exposed' => array(
      'widget_title' => 'Featured Videoset',
      'sort_by' => 'created',
      'sort_order' => 'DESC',
    ),
    'override_title' => '',
    'override_title_text' => '',
    'view_mode' => 'teaser',
    'widget_title' => 'Featured Videoset',
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'hide_classes' => array(
        'hidden-xs' => 0,
        'hidden-sm' => 0,
        'hidden-md' => 0,
        'hidden-lg' => 0,
      ),
      'additional_classes' => array(
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
      ),
    ),
    'style' => 'bootstrap_styles:well',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'be6a5afb-0676-496f-88fe-eefb7dda074f';
  $display->content['new-be6a5afb-0676-496f-88fe-eefb7dda074f'] = $pane;
  $display->panels['secondcolumn2'][0] = 'new-be6a5afb-0676-496f-88fe-eefb7dda074f';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['openproducer_front'] = $page;

  return $pages;

}
