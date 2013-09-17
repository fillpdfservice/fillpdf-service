<?php

/**
 * Implementation of hook_default_features_overrides().
 */
function fill_pdf_service_blog_default_features_overrides() {
  $export = array();
  $features_override = new stdClass;
  $features_override->disabled = FALSE; /* Edit this to true to make a default features_override disabled initially */
  $features_override->api_version = 1;
  $features_override->name = 'fillpdfservice_blog_view';
  $features_override->description = 'Tweaks to the /blog page.';
  $features_override->component_type = 'views';
  $features_override->component_id = 'blog';
  $features_override->value = array(
    'additions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'current_page',
          ),
        ),
        'value' => NULL,
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'query',
          ),
        ),
        'value' => NULL,
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'nid',
          ),
        ),
        'value' => array(
          'id' => 'nid',
          'table' => 'node',
          'field' => 'nid',
          'exclude' => TRUE,
          'alter' => array(
            'alter_text' => 0,
            'make_link' => 0,
            'trim' => 0,
            'word_boundary' => 1,
            'ellipsis' => 1,
            'strip_tags' => 0,
            'html' => 0,
          ),
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_node' => 0,
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'teaser',
          ),
        ),
        'value' => array(
          'id' => 'teaser',
          'table' => 'node_revisions',
          'field' => 'teaser',
          'label' => '',
          'alter' => array(
            'alter_text' => 0,
            'make_link' => 0,
            'trim' => 0,
            'word_boundary' => 1,
            'ellipsis' => 1,
            'strip_tags' => 0,
            'html' => 0,
          ),
          'hide_empty' => 0,
          'empty_zero' => 0,
        ),
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'comment_count',
          ),
        ),
        'value' => array(
          'id' => 'comment_count',
          'table' => 'node_comment_statistics',
          'field' => 'comment_count',
          'label' => '',
          'alter' => array(
            'alter_text' => 0,
            'make_link' => 1,
            'path' => 'node/[nid]#comments',
            'trim' => 0,
            'word_boundary' => 1,
            'ellipsis' => 1,
            'strip_tags' => 0,
            'html' => 0,
          ),
          'hide_empty' => 0,
          'empty_zero' => 0,
          'suffix' => ' comments',
        ),
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'nid',
          ),
        ),
        'value' => array(
          'id' => 'nid',
          'table' => 'node',
          'field' => 'nid',
          'exclude' => TRUE,
          'alter' => array(
            'alter_text' => 0,
            'make_link' => 0,
            'trim' => 0,
            'word_boundary' => 1,
            'ellipsis' => 1,
            'strip_tags' => 0,
            'html' => 0,
          ),
          'hide_empty' => 0,
          'empty_zero' => 0,
          'link_to_node' => 0,
        ),
      ),
      6 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'teaser',
          ),
        ),
        'value' => array(
          'id' => 'teaser',
          'table' => 'node_revisions',
          'field' => 'teaser',
          'label' => '',
          'alter' => array(
            'alter_text' => 0,
            'make_link' => 0,
            'trim' => 0,
            'word_boundary' => 1,
            'ellipsis' => 1,
            'strip_tags' => 0,
            'html' => 0,
          ),
          'hide_empty' => 0,
          'empty_zero' => 0,
        ),
      ),
      7 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'default',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'fields',
          ),
          5 => array(
            'type' => 'array',
            'key' => 'comment_count',
          ),
        ),
        'value' => array(
          'id' => 'comment_count',
          'table' => 'node_comment_statistics',
          'field' => 'comment_count',
          'label' => '',
          'alter' => array(
            'alter_text' => 0,
            'make_link' => 1,
            'path' => 'node/[nid]#comments',
            'trim' => 0,
            'word_boundary' => 1,
            'ellipsis' => 1,
            'strip_tags' => 0,
            'html' => 0,
          ),
          'hide_empty' => 0,
          'empty_zero' => 0,
          'suffix' => ' comments',
        ),
      ),
    ),
    'deletions' => array(
      0 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'current_page',
          ),
        ),
      ),
      1 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'query',
          ),
        ),
      ),
      2 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'use_more_text',
          ),
        ),
      ),
      3 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_1',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'use_more_text',
          ),
        ),
      ),
      4 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'display_options',
          ),
          3 => array(
            'type' => 'array',
            'key' => 'use_more_text',
          ),
        ),
      ),
      5 => array(
        'keys' => array(
          0 => array(
            'type' => 'object',
            'key' => 'display',
          ),
          1 => array(
            'type' => 'array',
            'key' => 'block_2',
          ),
          2 => array(
            'type' => 'object',
            'key' => 'handler',
          ),
          3 => array(
            'type' => 'object',
            'key' => 'options',
          ),
          4 => array(
            'type' => 'array',
            'key' => 'use_more_text',
          ),
        ),
      ),
    ),
  );

  $export['fillpdfservice_blog_view'] = $features_override;
  return $export;
}
