#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            "OETAV_boc_moduleAdd",
            "OETAV_boc_moduleOnChest",
            "OETAV_boc_weaponHolder"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "OETAV_main",
            "a3_ui_f",
            "A3_Modules_F",
            "ace_main",
            "ace_common",
            "ace_movement"
        };
        author = "NemesisRE";
        authors[] = {"DerZade"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
