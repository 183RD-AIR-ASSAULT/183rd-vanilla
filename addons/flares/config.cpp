#include "script_component.hpp"

#ifndef OETAV_LEAN_RHS_CUP_HLC

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"oetav_common"};
        author = QAUTHOR;
        authors[] = {"PabstMirror"};
        authorUrl = URL;
        VERSION_CONFIG;
    };
};

#include "CfgAmmo.hpp"

#endif
