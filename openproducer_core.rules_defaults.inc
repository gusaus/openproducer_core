<?php
/**
 * @file
 * openproducer_core.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function openproducer_core_default_rules_configuration() {
  $items = array();
  $items['rules_design_mode'] = entity_import('rules_config', '{ "rules_design_mode" : {
      "LABEL" : "Design mode",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_linkevent" ],
      "ON" : { "rules_linkevent_design_mode" : [] },
      "DO" : [
        { "user_add_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "208027146" : "208027146" } }
          }
        },
        { "user_remove_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "200153887" : "200153887" } }
          }
        }
      ]
    }
  }');
  $items['rules_edit_mode'] = entity_import('rules_config', '{ "rules_edit_mode" : {
      "LABEL" : "Edit mode",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_linkevent" ],
      "ON" : { "rules_linkevent_edit_mode" : [] },
      "DO" : [
        { "user_add_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "200153887" : "200153887" } }
          }
        },
        { "user_remove_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "208027146" : "208027146" } }
          }
        }
      ]
    }
  }');
  return $items;
}
