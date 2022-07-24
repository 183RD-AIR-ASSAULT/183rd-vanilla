/*
  Author: diwako
  Description:
  Pre init method for CBA settings
*/
// #define CBA_SETTINGS_CAT "OETAV Quick Actions"

[
    "OETAV_quickActions_add_detonator"
    ,"CHECKBOX"
    ,["Add detonate action", "Adds the detonation quick action to detonate all placed explosives"]
    ,COMPONENT_NAME
    ,true
    ,true
] call CBA_Settings_fnc_init;

[
    "OETAV_quickActions_add_fast_rope"
    ,"CHECKBOX"
    ,["Add fast rope action", "Adds the fast rope action to the quick action menu to fast rope"]
    ,COMPONENT_NAME
    ,true
    ,true
] call CBA_Settings_fnc_init;
