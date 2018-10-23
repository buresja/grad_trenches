class CfgWeapons {
    class ACE_ItemCore;

    class ACE_EntrenchingTool: ACE_ItemCore {
        model = QPATHTOF(data\models\entrenching_tool.p3d);
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\textures\entrenching_tool.paa)};
    };
};
