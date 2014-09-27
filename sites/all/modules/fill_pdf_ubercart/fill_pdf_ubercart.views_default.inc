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
  $handler->display->display_options['title'] = 'Choose Your Plan';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Prices excluding VAT';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<strong>Norwegian customers:</strong> Prices are exclusive of VAT. It will be added at checkout.';
  $handler->display->display_options['header']['area']['format'] = '1';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = '';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '* <strong>See <a href="/faq">FAQ</a> for additional details about <a href="/content/faq#qi">image-filling support</a>, what is covered by <a href="/content/faq#qe">email support</a>, limitations on <a href="/content/faq#qc">setup help</a>.</strong>

* <strong>Non-profit? Student? Need more than 2000 monthly merges? Other special situations?</strong> <a href="/contact">Contact us</a> to discuss a special pricing arrangement. We would love to have you as a subscriber!';
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
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'pricing';

  $views[$view->name] = $view;

  return $views;
}
