#define MAINPREFIX z
#define PREFIX oetav

#include "script_version.hpp"

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH
#define VERSION_AR  MAJOR,MINOR,PATCH

#define VERSION_CONFIG version = MAJOR.MINOR; versionStr = QUOTE(MAJOR.MINOR.PATCH); versionAr[] = {MAJOR,MINOR,PATCH}

#define AUTHOR 183RD
#define QAUTHOR QUOTE(AUTHOR)
#define LOGO_PATH "\z\oetav\addons\common\images\183rd.paa"
#define URL "https://arma.wiki"
#define NAME 183rd

#define REQUIRED_VERSION 2.00

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(OETAV - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(OETAV - COMPONENT)
#endif
