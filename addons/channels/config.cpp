#include "script_component.hpp"

class CfgPatches {
    class OETAVFundamentals_Channels {

        author = QAUTHOR;
        name = COMPONENT_NAME;
        units[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_UI_F","cba_main","cba_xeh"};
        VERSION_CONFIG;
        authors[] = {"MitchJC"};
        weapons[] = {};
    };
};

class Extended_PreInit_EventHandlers {
    class OETAVFundamentals_Channels_Event {
        init = "call compile preprocessFileLineNumbers 'z\oetav\addons\channels\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class OETAV_AI_Event {
        init = "call compile preprocessFileLineNumbers 'z\oetav\addons\channels\XEH_postInit.sqf'";
    };
};
