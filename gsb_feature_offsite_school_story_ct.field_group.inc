<?php
/**
 * @file
 * gsb_feature_offsite_school_story_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_offsite_school_story_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alumni_story|node|offsite_school_story|form';
  $field_group->group_name = 'group_alumni_story';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'offsite_school_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Alumni Story',
    'weight' => '10',
    'children' => array(
      0 => 'field_alumni_story',
      1 => 'field_program_single',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_alumni_story|node|offsite_school_story|form'] = $field_group;

  return $export;
}
