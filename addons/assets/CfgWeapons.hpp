class CfgWeapons {
    class ACE_ItemCore;

    class ACE_EntrenchingTool: ACE_ItemCore {
        model = QPATHTOF(data\entrenching_tool.p3d);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\entrenching_tool.paa)};
    };
};
