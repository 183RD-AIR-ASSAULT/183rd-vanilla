#include "script_component.hpp"

if (isNil QEGVAR(common,OETAV_enabled) || !(EGVAR(common,OETAV_enabled))) exitWith {};

if !(hasInterface) exitWith {};

call FUNC(arsenal_postInit);

OETAV_unit setVariable [QGVAR(preventProne),false,true];

[{
    if (
        (stance OETAV_unit) == "PRONE" && {OETAV_unit getvariable [QGVAR(preventProne),false]} && {!(OETAV_unit getVariable ["ACE_isUnconscious", false]) || lifeState OETAV_unit != "INCAPACITATED"}
       ) then {
        OETAV_unit playAction "PlayerCrouch";
        hint localize "str_OETAV_boc_crouch";
    };
},1] call CBA_fnc_addPerFrameHandler;
