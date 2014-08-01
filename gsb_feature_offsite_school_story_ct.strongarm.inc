<?php
/**
 * @file
 * gsb_feature_offsite_school_story_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_offsite_school_story_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__offsite_school_story';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '14',
        ),
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '12',
        ),
        'redirect' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__offsite_school_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_offsite_school_story';
  $strongarm->value = array();
  $export['menu_options_offsite_school_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_offsite_school_story';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_offsite_school_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_offsite_school_story';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_offsite_school_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_offsite_school_story';
  $strongarm->value = '1';
  $export['node_preview_offsite_school_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_offsite_school_story';
  $strongarm->value = 0;
  $export['node_submitted_offsite_school_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_offsite_school_story';
  $strongarm->value = 0;
  $export['workbench_access_node_type_offsite_school_story'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_offsite_school_story';
  $strongarm->value = 'published';
  $export['workbench_moderation_default_state_offsite_school_story'] = $strongarm;

  return $export;
}
