<?php
/**
 * @file
 * hr_iframe.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function hr_iframe_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'iframe';
  $context->description = 'IFramed version of a page';
  $context->tag = '';
  $context->conditions = array(
    'context_get' => array(
      'values' => array(
        'iframe=true' => 'iframe=true',
      ),
    ),
  );
  $context->reactions = array(
    'disable_context' => array(
      'disabled' => array(
        'sitewide' => 'sitewide',
        'search_box' => 'search_box',
      ),
    ),
    'theme_html' => array(
      'class' => 'iframe',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('IFramed version of a page');
  $export['iframe'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'unbranded_iframe';
  $context->description = 'Unbranded IFramed version of a page';
  $context->tag = '';
  $context->conditions = array(
    'context_get' => array(
      'values' => array(
        'iframe=true' => 'iframe=true',
        'unbranded=true' => 'unbranded=true',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'unbranded',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Unbranded IFramed version of a page');
  $export['unbranded_iframe'] = $context;

  return $export;
}
