
class EMM_mainMenu_CfgMenus {
    class VN {
        class menus {
            class MainMenu;
            class MultiplayerVN: MainMenu {
                items[] = {"oetav", "ServerBrowser", "SOGPrairieFire", "MikeForce", "Exit"};

                class ServerBrowser;
                class oetav: ServerBrowser {
                    action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join)));
                    text = CSTRING(SpotlightHeader);
                };
            };
        };
    };
};

