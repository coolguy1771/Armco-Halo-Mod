// this CfgPatches is for Backpacks
class CfgPatches {
  class ARMCO_Units_Army {
    units[] = {"ARMCO_Rucksack_Hard_Alpha",   "ARMCO_Rucksack_Hard_Sabre",
               "ARMCO_Rucksack_Hard_Zulu",    "ARMCO_Rucksack_Hard_Phoenix",
               "ARMCO_Rucksack_Hard_Medical", "ARMCO_Rucksack_Soft_Alpha",
               "ARMCO_Rucksack_Soft_Sabre",   "ARMCO_Rucksack_Soft_Zulu",
               "ARMCO_Rucksack_Soft_Phoenix", "ARMCO_Rucksack_Soft_Medical"};
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {
        "OPTRE_UNSC_Units", "A3_Weapons_F",           "OPTRE_Core",
        "ace_main",         "A3_Characters_F_BLUFOR", "OPTRE_Weapons"};
  };
};
