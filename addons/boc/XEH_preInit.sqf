#include "script_component.hpp"

ADDON = false;

#include "initCBASettings.sqf"

if (isNil QEGVAR(common,OETAV_enabled) || !(EGVAR(common,OETAV_enabled))) exitWith {};

#include "XEH_PREP.hpp"

ADDON = true;
