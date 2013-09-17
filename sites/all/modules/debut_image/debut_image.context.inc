<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function debut_image_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'image-content-type';
  $context->description = '';
  $context->tag = 'Multimedia';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'image' => 'image',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-image-block_1' => array(
          'module' => 'views',
          'delta' => 'image-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'breadcrumb' => 'image',
    'menu' => 'image',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Multimedia');

  $export['image-content-type'] = $context;
  return $export;
}
