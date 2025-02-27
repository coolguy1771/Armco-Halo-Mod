/*hiddenSelections Options
Armor Breakdown
This area is for all the options the M52A Armour have in hiddenSelections. Just
for a point when doing armor you have to remove the code bit from the hidden
selection and it will show it on the amour. so you remove what you want from the
hiddent selections other then the camo bit
- `A_base` = [front img](https://i.imgur.com/zzgcpmA.png)[back
img](https://i.imgur.com/8X1WsjV.png)
- `A_ChestArmor` = [front img](https://i.imgur.com/1aP15da.png)
- `A_Ghillie` = [front img](https://i.imgur.com/cCBL4Qd.png)
- `A_KneesLeft` = [front img](https://i.imgur.com/3v98386.png)
- `A_KneesMarLeft` = [front img](https://i.imgur.com/LQegg9L.png)
- `A_KneesMarRight` = [front img](https://i.imgur.com/HzQR3dX.png)
- `A_KneesRight` = [front img](https://i.imgur.com/Zl4NizT.png)
- `A_ODST` = [front img](https://i.imgur.com/TRFVlkF.png)[back
img](https://i.imgur.com/LbsKPwe.png)
- `A_ShinArmorLeft` = [front img](https://i.imgur.com/Lxq6xE4.png)
- `A_ShinArmorRight` = [front img](https://i.imgur.com/6YAhbXE.png)
- `A_TacPad` = [front img](https://i.imgur.com/XdIBmNn.png)
- `A_ThighArmorLeft` = [front img](https://i.imgur.com/JcG9INA.png)
- `A_ThighArmorRight` = [front img](https://i.imgur.com/0Q8m6Db.png)
- `AP_AR` = [front img](https://i.imgur.com/DEyWMdx.png)
- `AP_BR` = [front img](https://i.imgur.com/15iyLE0.png)
- `AP_Canteen` = [front img](https://i.imgur.com/Ja9Ve9Y.png)
- `AP_Frag` = [front img](https://i.imgur.com/oFLG1HE.png)
- `AP_GL` = [front img](https://i.imgur.com/RCWiwyw.png)
- `AP_MGThigh` = [front img](https://i.imgur.com/tUIYOP8.png)
- `AP_Pack` = [front img](https://i.imgur.com/2m1Sfuw.png)
- `AP_Pistol` = [front img](https://i.imgur.com/XgkGVlS.png)
- `AP_Rounds` = [front img](https://i.imgur.com/yPEUGNs.png)
- `AP_SG` = [front img](https://i.imgur.com/6jItLfD.png)
- `AP_SMG` = [front img](https://i.imgur.com/uhTgs9o.png)
- `AP_Smoke` = [front img](https://i.imgur.com/hDr3PaW.png)
- `AP_Sniper` = [front img](https://i.imgur.com/Qbn1UiY.png)
- `AP_Thigh` = [front img](https://i.imgur.com/IzMq23w.png)
- `APO_AR` = [front img](https://i.imgur.com/p3gIuRv.png)
- `APO_BR` = [front img](https://i.imgur.com/uubD8XU.png)
- `APO_Knife` = [front img](https://i.imgur.com/b1Mng5f.png)
- `APO_SMG` = [front img](https://i.imgur.com/KNgPnrX.png)
- `APO_Sniper` = [front img](https://i.imgur.com/Kgq7eJL.png)
- `AS_BaseLeft` = [front img](https://i.imgur.com/1yGCYQA.png)
- `AS_BaseRight` = [front img](https://i.imgur.com/YIhYq02.png)
- `AS_LargeLeft` = [front img](https://i.imgur.com/CNkSjXp.png)
- `AS_LargeRight` = [front img](https://i.imgur.com/ebBO7Sq.png)
- `AS_MediumLeft` = [front img](https://i.imgur.com/GzC9q6s.png)
- `AS_MediumRight` = [front img](https://i.imgur.com/cr13bIL.png)
- `AS_ODSTCQBLeft` = [front img](https://i.imgur.com/gX4Q0BW.png)
- `AS_ODSTCQBRight` = [front img](https://i.imgur.com/uKbtml6.png)
- `AS_ODSTLeft` = [front img](https://i.imgur.com/XRE4IvI.png)
- `AS_ODSTRight` = [front img](https://i.imgur.com/TVz68LX.png)
- `AS_ODSTSniperLeft` = [front img](https://i.imgur.com/54952kF.png)
- `AS_ODSTSniperRight` = [front img](https://imgur.com/aWSi2kc.png)
- `AS_SmallLeft` = [front img](https://i.imgur.com/brXnG04.png)
- `AS_SmallRight` = [front img](https://i.imgur.com/aA5oXJ5.png)
- `CustomKit_Scorch` = [front img](https://i.imgur.com/uHjTO3W.png)[back
img](https://i.imgur.com/IUVBpKa.png)
*/
class OPTRE_UNSC_M52A_Armor2_WDL;
// removed A_Base, A_ChestArmor, A_ShinArmorLeft, A_ShinArmorRight,
// A_ThighArmorLeft, A_ThighArmorRight
class ARMCO_Base_Armor : OPTRE_UNSC_M52A_Armor2_WDL {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  hiddenSelections[] = {"camo",
                        "camo2",
                        "camo3",
                        "camo4",
                        "camo5",
                        "A_Ghillie",
                        "A_KneesLeft",
                        "A_KneesRight",
                        "A_KneesMarLeft",
                        "A_KneesMarRight",
                        "A_ODST",
                        "A_TacPad",
                        "AS_BaseLeft",
                        "AS_BaseRight",
                        "AS_LargeLeft",
                        "AS_LargeRight",
                        "AS_MediumLeft",
                        "AS_MediumRight",
                        "AS_ODSTCQBLeft",
                        "AS_ODSTCQBRight",
                        "AS_ODSTLeft",
                        "AS_ODSTRight",
                        "AS_ODSTSniperLeft",
                        "AS_ODSTSniperRight",
                        "AS_SmallLeft",
                        "AS_SmallRight",
                        "AP_AR",
                        "AP_BR",
                        "AP_Canteen",
                        "AP_GL",
                        "AP_Knife",
                        "AP_MGThigh",
                        "AP_AR",
                        "AP_Pack",
                        "AP_Pistol",
                        "AP_Rounds",
                        "AP_SG",
                        "AP_SMG",
                        "AP_Sniper",
                        "AP_Thigh",
                        "AP_Frag",
                        "AP_Smoke",
                        "APO_AR",
                        "APO_BR",
                        "APO_Knife",
                        "APO_SMG",
                        "APO_Sniper",
                        "CustomKit_Scorch"};
  hiddenSelectionsTextures[] = {
      "OPTRE_UNSC_Units\Army\data\vest_co.paa",
      "optre_unsc_units\army\data\armor_co.paa",
      "optre_unsc_units\army\data\legs_co.paa",
      "optre_unsc_units\army\data\ghillie_woodland_co.paa",
      "optre_unsc_units\army\data\odst_armor_co.paa"};
  class ItemInfo : ItemInfo {
    containerClass = "Supply120";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesRight",
                          "A_KneesMarLeft",
                          "A_KneesMarRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_BaseLeft",
                          "AS_BaseRight",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "AP_Smoke",
                          "APO_AR",
                          "APO_BR",
                          "APO_Knife",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"};
    hiddenSelectionsTextures[] = {
        "OPTRE_UNSC_Units\Army\data\vest_co.paa",
        "optre_unsc_units\army\data\armor_co.paa",
        "optre_unsc_units\army\data\legs_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
  };
};
// Alpha Base Armour AS_LargeLeft, AS_MediumRight, AP_AR, AP_Smoke, AP_Pistol,
// AP_Pack, A_KneesMarRight, A_KneesMarLeft, AP_Thigh, APO_Knife
class ARMCO_Alpha_Armor : ARMCO_Base_Armor {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Base Alpha";
  hiddenSelections[] = {"camo",
                        "camo2",
                        "camo3",
                        "camo4",
                        "camo5",
                        "A_Ghillie",
                        "A_KneesLeft",
                        "A_KneesRight",
                        "A_ODST",
                        "A_TacPad",
                        "AS_BaseLeft",
                        "AS_BaseRight",
                        "AS_LargeRight",
                        "AS_MediumLeft",
                        "AS_ODSTCQBLeft",
                        "AS_ODSTCQBRight",
                        "AS_ODSTLeft",
                        "AS_ODSTRight",
                        "AS_ODSTSniperLeft",
                        "AS_ODSTSniperRight",
                        "AS_SmallLeft",
                        "AS_SmallRight",
                        "AP_BR",
                        "AP_Canteen",
                        "AP_GL",
                        "AP_Knife",
                        "AP_MGThigh",
                        "AP_Rounds",
                        "AP_SG",
                        "AP_SMG",
                        "AP_Sniper",
                        "AP_Frag",
                        "APO_AR",
                        "APO_BR",
                        "APO_SMG",
                        "APO_Sniper",
                        "CustomKit_Scorch"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\armors\vest_alpha_co.paa",
      "armco_armours\data\marine\armors\armour_alpha_co.paa",
      "armco_armours\data\marine\armors\legs_alpha_co.paa",
      "optre_unsc_units\army\data\ghillie_woodland_co.paa",
      "optre_unsc_units\army\data\odst_armor_co.paa"};
  class ItemInfo : ItemInfo {
    containerClass = "Supply120";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_BaseLeft",
                          "AS_BaseRight",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_BR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"};
    hiddenSelectionsTextures[] = {
        "armco_armours\data\marine\armors\vest_alpha_co.paa",
        "armco_armours\data\marine\armors\armour_alpha_co.paa",
        "armco_armours\data\marine\armors\legs_alpha_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
  };
};
// Alpha
// Sabre Base Armour AS_MediumLeft,AS_SmallRight,AP_BR,AP_Smoke,AP_Frag, No
// Upper Chest Add-on, A_KneesMarRight, A_KneesMarLeft, AP_Thigh, APO_Knife
class ARMCO_Sabre_Armor : ARMCO_Base_Armor {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Base Sabre";
  hiddenSelections[] = {"camo",
                        "camo2",
                        "camo3",
                        "camo4",
                        "camo5",
                        "A_Ghillie",
                        "A_KneesLeft",
                        "A_KneesRight",
                        "A_ODST",
                        "A_TacPad",
                        "AS_BaseLeft",
                        "AS_BaseRight",
                        "AS_LargeLeft",
                        "AS_LargeRight",
                        "AS_MediumRight",
                        "AS_ODSTCQBLeft",
                        "AS_ODSTCQBRight",
                        "AS_ODSTLeft",
                        "AS_ODSTRight",
                        "AS_ODSTSniperLeft",
                        "AS_ODSTSniperRight",
                        "AS_SmallLeft",
                        "AP_AR",
                        "AP_Canteen",
                        "AP_GL",
                        "AP_Knife",
                        "AP_MGThigh",
                        "AP_AR",
                        "AP_Pack",
                        "AP_Pistol",
                        "AP_Rounds",
                        "AP_SG",
                        "AP_SMG",
                        "AP_Sniper",
                        "APO_AR",
                        "APO_BR",
                        "APO_SMG",
                        "APO_Sniper",
                        "CustomKit_Scorch"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\armors\vest_sabre_co.paa",
      "armco_armours\data\marine\armors\armour_sabre_co.paa",
      "armco_armours\data\marine\armors\legs_sabre_co.paa",
      "optre_unsc_units\army\data\ghillie_woodland_co.paa",
      "optre_unsc_units\army\data\odst_armor_co.paa"};
  class ItemInfo : ItemInfo {
    containerClass = "Supply120";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_BaseLeft",
                          "AS_BaseRight",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_MediumRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AP_AR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"};
    hiddenSelectionsTextures[] = {
        "armco_armours\data\marine\armors\vest_sabre_co.paa",
        "armco_armours\data\marine\armors\armour_sabre_co.paa",
        "armco_armours\data\marine\armors\legs_sabre_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
  };
};
// Zulu Base Armour
// AS_MediumLeft,AS_MediumRight,AP_BR,AP_Smoke,AP_Pistol,AP_Pack,A_KneesMarRight,AP_Rounds,
// APO_Knife
class ARMCO_Zulu_Armor : ARMCO_Base_Armor {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Base Zulu";
  hiddenSelections[] = {"camo",
                        "camo2",
                        "camo3",
                        "camo4",
                        "camo5",
                        "A_Ghillie",
                        "A_KneesLeft",
                        "A_KneesRight",
                        "A_KneesMarLeft",
                        "A_ODST",
                        "A_TacPad",
                        "AS_BaseLeft",
                        "AS_BaseRight",
                        "AS_LargeLeft",
                        "AS_LargeRight",
                        "AS_ODSTCQBLeft",
                        "AS_ODSTCQBRight",
                        "AS_ODSTLeft",
                        "AS_ODSTRight",
                        "AS_ODSTSniperLeft",
                        "AS_ODSTSniperRight",
                        "AS_SmallLeft",
                        "AS_SmallRight",
                        "AP_AR",
                        "AP_Canteen",
                        "AP_GL",
                        "AP_Knife",
                        "AP_MGThigh",
                        "AP_AR",
                        "AP_SG",
                        "AP_SMG",
                        "AP_Sniper",
                        "AP_Thigh",
                        "AP_Frag",
                        "APO_AR",
                        "APO_BR",
                        "APO_SMG",
                        "APO_Sniper",
                        "CustomKit_Scorch"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\armors\vest_zulu_co.paa",
      "armco_armours\data\marine\armors\armour_zulu_co.paa",
      "armco_armours\data\marine\armors\legs_zulu_co.paa",
      "optre_unsc_units\army\data\ghillie_woodland_co.paa",
      "optre_unsc_units\army\data\odst_armor_co.paa"};
  class ItemInfo : ItemInfo {
    containerClass = "Supply120";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesRight",
                          "A_KneesMarLeft",
                          "A_ODST",
                          "A_TacPad",
                          "AS_BaseLeft",
                          "AS_BaseRight",
                          "AS_LargeLeft",
                          "AS_LargeRight",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_Canteen",
                          "AP_GL",
                          "AP_Knife",
                          "AP_MGThigh",
                          "AP_AR",
                          "AP_SG",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Frag",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"};
    hiddenSelectionsTextures[] = {
        "armco_armours\data\marine\armors\vest_zulu_co.paa",
        "armco_armours\data\marine\armors\armour_zulu_co.paa",
        "armco_armours\data\marine\armors\legs_zulu_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
  };
};
// Phoenix Base Armour
// AS_LargeLeft,AS_MediumRight,AP_BR,AP_Canteen,AP_Frag,AP_SG,A_KneesMarRight,
// A_KneesMarLeft,AP_MGThigh, APO_Knife
class ARMCO_Phoenix_Armor : ARMCO_Base_Armor {
  dlc = "ARMCO_PMC";
  author = "Belhun";
  displayName = "[A][ARMCO] Base Phoenix";
  hiddenSelections[] = {"camo",
                        "camo2",
                        "camo3",
                        "camo4",
                        "camo5",
                        "A_Ghillie",
                        "A_KneesLeft",
                        "A_KneesRight",
                        "A_ODST",
                        "A_TacPad",
                        "AS_BaseLeft",
                        "AS_BaseRight",
                        "AS_LargeRight",
                        "AS_MediumLeft",
                        "AS_ODSTCQBLeft",
                        "AS_ODSTCQBRight",
                        "AS_ODSTLeft",
                        "AS_ODSTRight",
                        "AS_ODSTSniperLeft",
                        "AS_ODSTSniperRight",
                        "AS_SmallLeft",
                        "AS_SmallRight",
                        "AP_AR",
                        "AP_GL",
                        "AP_Knife",
                        "AP_AR",
                        "AP_Pack",
                        "AP_Pistol",
                        "AP_Rounds",
                        "AP_SMG",
                        "AP_Sniper",
                        "AP_Thigh",
                        "AP_Smoke",
                        "APO_AR",
                        "APO_BR",
                        "APO_SMG",
                        "APO_Sniper",
                        "CustomKit_Scorch"};
  hiddenSelectionsTextures[] = {
      "armco_armours\data\marine\armors\vest_phoenix_co.paa",
      "armco_armours\data\marine\armors\armour_phoenix_co.paa",
      "armco_armours\data\marine\armors\legs_phoenix_co.paa",
      "optre_unsc_units\army\data\ghillie_woodland_co.paa",
      "optre_unsc_units\army\data\odst_armor_co.paa"};
  class ItemInfo : ItemInfo {
    containerClass = "Supply120";
    hiddenSelections[] = {"camo",
                          "camo2",
                          "camo3",
                          "camo4",
                          "camo5",
                          "A_Ghillie",
                          "A_KneesLeft",
                          "A_KneesRight",
                          "A_ODST",
                          "A_TacPad",
                          "AS_BaseLeft",
                          "AS_BaseRight",
                          "AS_LargeRight",
                          "AS_MediumLeft",
                          "AS_ODSTCQBLeft",
                          "AS_ODSTCQBRight",
                          "AS_ODSTLeft",
                          "AS_ODSTRight",
                          "AS_ODSTSniperLeft",
                          "AS_ODSTSniperRight",
                          "AS_SmallLeft",
                          "AS_SmallRight",
                          "AP_AR",
                          "AP_GL",
                          "AP_Knife",
                          "AP_AR",
                          "AP_Pack",
                          "AP_Pistol",
                          "AP_Rounds",
                          "AP_SMG",
                          "AP_Sniper",
                          "AP_Thigh",
                          "AP_Smoke",
                          "APO_AR",
                          "APO_BR",
                          "APO_SMG",
                          "APO_Sniper",
                          "CustomKit_Scorch"};
    hiddenSelectionsTextures[] = {
        "armco_armours\data\marine\armors\vest_phoenix_co.paa",
        "armco_armours\data\marine\armors\armour_phoenix_co.paa",
        "armco_armours\data\marine\armors\legs_phoenix_co.paa",
        "optre_unsc_units\army\data\ghillie_woodland_co.paa",
        "optre_unsc_units\army\data\odst_armor_co.paa"};
  };
};
