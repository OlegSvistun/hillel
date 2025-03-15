modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded (pType, pBehavior);
        pType.AddItemInHandsProfileIK("CookZ_EmptyBox",         "dz/anims/workspaces/player/player_main/player_main_1h.asi",    pBehavior,  "dz/anims/anm/player/ik/gear/pepper_green_fresh.anm");
        pType.AddItemInHandsProfileIK("CookZ_Box_Base",         "dz/anims/workspaces/player/player_main/player_main_1h.asi",    pBehavior,  "dz/anims/anm/player/ik/gear/pepper_green_fresh.anm");
        pType.AddItemInHandsProfileIK("CookZ_BoxOpened_Base",   "dz/anims/workspaces/player/player_main/player_main_1h.asi",    pBehavior,  "dz/anims/anm/player/ik/gear/pepper_green_fresh.anm");
        pType.AddItemInHandsProfileIK("CookZ_Sausage_Base",     "dz/anims/workspaces/player/player_main/player_main_1h.asi",    pBehavior,  "dz/anims/anm/player/ik/gear/zucchini_fresh.anm");
        pType.AddItemInHandsProfileIK("CookZ_Cheese_Base",      "dz/anims/workspaces/player/player_main/player_main_1h.asi",    pBehavior,  "dz/anims/anm/player/ik/gear/food_can.anm");
        
        pType.AddItemInHandsProfileIK("CookZ_Cookbook_Item",    "dz/anims/workspaces/player/player_main/player_main_1h.asi",    pBehavior,  "dz/anims/anm/player/ik/gear/book.anm");
        pType.AddItemInHandsProfileIK("CookZ_mini_metal_plate",    "dz/anims/workspaces/player/player_main/player_main_1h.asi",    pBehavior,  "dz/anims/anm/player/ik/gear/book.anm");
        pType.AddItemInHandsProfileIK("CookZ_BreadForm",    "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/rice.anm");
        pType.AddItemInHandsProfileIK("CookZ_CookZ_Sunflower_Oil",    "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/bandage_dressing.anm");
   };
   override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
   {
       super.RegisterTwoHanded (pType, pBehavior);
       pType.AddItemInHandsProfileIK("CookZ_Steamer_Pot",     "dz/anims/workspaces/player/player_main/props/player_main_2h_pot.asi",    pBehavior,  "dz/anims/anm/player/ik/two_handed/CookingPot.anm");
       pType.AddItemInHandsProfileIK("CookZ_Large_Pan",     "dz/anims/workspaces/player/player_main/player_main_heavy.asi",    pBehavior,  "dz/anims/anm/player/ik/vehicles/sedan_02/sedan_02_wheel.anm");
   };
};
