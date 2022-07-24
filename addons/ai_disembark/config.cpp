#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "oetav_common"
        };
        author = "183rd";
        authors[] = {"Madin", "veteran29"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
