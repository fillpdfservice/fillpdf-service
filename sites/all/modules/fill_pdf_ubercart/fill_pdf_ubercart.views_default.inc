<?php

/**
 * Implementation of hook_views_default_views().
 */
function fill_pdf_ubercart_views_default_views() {
  $views = array();

  // Exported view: product_listing
  $view = new view;
  $view->name = 'product_listing';
  $view->description = '';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Pricing + Signup';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'node';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = '';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '* There is also a <a href="/content/free">free plan</a> ideal for developing or light usage. 100 PDF merges/month, no image-filling support. There is no time limit on the account, and all new user accounts are automatically on this plan.

* For additional custom support, <a href="/contact">contact me for rates</a>.  The Premium and Business subscriptions get one free Fill PDF form setup (Webform/CCK-to-PDF mapping, 20 PDF fields maximum, simple mappings). Any bugs or feature requests should go to the <a href="http://drupal.org/project/issues/fillpdf</a>Drupal issue queue</a>, and service-specific issues should go to <a href="/contact">the site contact form</a>. But if you have any additional in-house support needs (such as additional forms, help with an in-house Tomcat setup, etc), feel free to ping me.';
  $handler->display->display_options['footer']['area']['format'] = '1';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Sort criterion: Product: Sell price */
  $handler->display->display_options['sorts']['sell_price']['id'] = 'sell_price';
  $handler->display->display_options['sorts']['sell_price']['table'] = 'uc_products';
  $handler->display->display_options['sorts']['sell_price']['field'] = 'sell_price';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter: Product: Sell price */
  $handler->display->display_options['filters']['sell_price']['id'] = 'sell_price';
  $handler->display->display_options['filters']['sell_price']['table'] = 'uc_products';
  $handler->display->display_options['filters']['sell_price']['field'] = 'sell_price';
  $handler->display->display_options['filters']['sell_price']['operator'] = '>';
  $handler->display->display_options['filters']['sell_price']['value']['value'] = '0';
  $handler->display->display_options['filters']['sell_price']['allow_null'] = 1;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'products';

  $views[$view->name] = $view;

  return $views;
}
