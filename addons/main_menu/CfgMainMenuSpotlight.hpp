
class CfgMainMenuSpotlight {

    class GVAR(server1) {
        text = "183rd Air Assault Unit [183rd] Operations";
        textIsQuote = 0;
        picture = QUOTE(\z\oetav\addons\common\images\183rd.paa);
        action = QUOTE(_this call (uiNamespace getVariable QQFUNC(join)));
        actionText = CSTRING(SpotlightHeader);
        condition = QUOTE(true);
    };

    delete ApexProtocol;
    delete BootCamp;
    delete EastWind;

    delete Orange_CampaignGerman;
    delete Orange_Showcase_IDAP;
    delete Orange_Showcase_LoW;
    delete Orange_Campaign;

    delete Showcase_TankDestroyers;

    delete Tacops_Campaign_03;
    delete Tacops_Campaign_02;
    delete Tacops_Campaign_01;

    delete Tanks_Campaign_01;

    delete OldMan;

    delete Contact_Campaign;

    delete gm_campaign_01;

    delete SP_FD14;

    delete AoW_Showcase_AoW;
    delete AoW_Showcase_Future;
};
