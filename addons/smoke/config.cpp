#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "oetav_main"
        };
        author = "183rd";
        authors[] = {"veteran29"};
        VERSION_CONFIG;
    };
};

#include "CfgCloudlets.hpp"
