<?php

/**
 * Implementation of hook_views_default_views().
 */
function debut_image_views_default_views() {
  $views = array();

  // Exported view: image
  $view = new view;
  $view->name = 'image';
  $view->description = 'A list of images';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 3.0-alpha1;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Images';
  $handler->display->display_options['use_more_text'] = 'View all images';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image (field_image) */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'node_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'medium_linked';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Node: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  
/* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent images';
  $handler->display->display_options['defaults']['items_per_page'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all images';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image (field_image) */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'node_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_image_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_image_fid']['format'] = 'thumbnail_linked';
  $handler->display->display_options['block_description'] = 'Recent images';
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'image';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Images';
  $handler->display->display_options['menu']['description'] = 'View a listing of image files available for viewing.';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'secondary-links';
  
/* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['mission_description'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'image.rss';
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'page_1' => 'page_1',
    'default' => 0,
  );

  $views[$view->name] = $view;

  return $views;
}
