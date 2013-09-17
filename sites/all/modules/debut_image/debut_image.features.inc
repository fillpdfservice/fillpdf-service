<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function debut_image_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function debut_image_imagecache_default_presets() {
  $items = array(
    'large' => array(
      'presetname' => 'large',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '640',
            'height' => '640',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'medium' => array(
      'presetname' => 'medium',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '220',
            'height' => '220',
            'upscale' => 1,
          ),
        ),
      ),
    ),
    'thumbnail' => array(
      'presetname' => 'thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100',
            'height' => '100',
            'upscale' => 1,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function debut_image_node_info() {
  $items = array(
    'image' => array(
      'name' => t('Image'),
      'module' => 'features',
      'description' => t('An image is a photograph or illustration that can be uploaded and displayed in a variety of contexts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function debut_image_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
