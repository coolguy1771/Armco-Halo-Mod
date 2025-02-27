#include "cfgPatches.hpp"
class CfgFunctions
{
    class armco
    {
        class PelicanMagLiftSystem
        {
            file = "custom_vehicles\Pelican";
            class PelicanLoadValidate{};
			class PelicanUnLoadValidate{};
        };
    };
};
class CfgVehicles
{
class OPTRE_Pelican_unarmed;
class OPTRE_Pelican_armed;


class ARMCO_Pelican_Base_T : OPTRE_Pelican_unarmed
{
    class UserActions;
};
class ARMCO_Pelican_Base_U : ARMCO_Pelican_Base_T
{
	scope=1;
    class UserActions: UserActions
    {
        class PelLift_LoadVehicle {
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				displayName="<t color='#00ffff'>Load Vehicle";
				displayNameDefault="<t color='#00ffff'>Load Vehicle";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn armco_fnc_PelicanLoadValidate";
				textToolTip="<t color='#00ffff'>Load Vehicle";
				userActionID=6;
			};
		class RampClose
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this) AND (player in [gunner this, driver this, crew this]))";
				displayName="Close Ramp";
				displayNameDefault="Close Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=100000;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				textToolTip="Close Ramp";
				userActionID=51;
			};
		class RampOpen
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this) AND (player in [gunner this, driver this, crew this]))";
				displayName="Open Ramp";
				displayNameDefault="Open Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=100000;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				textToolTip="Open Ramp";
				userActionID=50;
			};
		class PelLift_UnLoadVehicle
			{
				userActionID=7;
				displayName="Unload Vehicle / Supply Pods";
				displayNameDefault="Unload Vehicle / Supply Pods";
				textToolTip="Unload Vehicle / Supply Pods";
				position="cargo_door_handle";
				showWindow=0;
				radius=5;
				priority=3;
				onlyForPlayer=0;
				condition="(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement="0 = [this] spawn armco_fnc_PelicanUnLoadValidate;";
			};
			class AirbrakeEngage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn OPTRE_fnc_AirbrakeEngage";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=54;
			};
			class ThrusterEngage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn OPTRE_fnc_ThrusterEngage";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class ThrusterDisengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FE2E2E'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FE2E2E'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn OPTRE_fnc_ThrusterDisengage";
				textToolTip="<t color='#FE2E2E'>Disengage Forward Thrusters";
				userActionID=53;
			};
		};
    };
class ARMCO_Pelican_Base: OPTRE_Pelican_armed
{
    class UserActions;
};
class ARMCO_Pelican_Base_A: ARMCO_Pelican_Base
{
	scope=1;
    class UserActions: UserActions
    {
		class PelLift_LoadPodMenu
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				displayName="Load Supply Pods";
				displayNameDefault="Load Supply Pods";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
				textToolTip="Load Supply Pods";
				userActionID=9;
			};
        class PelLift_LoadVehicle {
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				displayName="<t color='#00ffff'>Load Vehicle";
				displayNameDefault="<t color='#00ffff'>Load Vehicle";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn armco_fnc_PelicanLoadValidate";
				textToolTip="<t color='#00ffff'>Load Vehicle";
				userActionID=6;
			};
		class RampClose
            {
                animPeriod=5;
                condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this) AND (player in [gunner this, driver this, crew this]))";
                displayName="Close Ramp";
                displayNameDefault="Close Ramp";
                onlyForPlayer=0;
                position="cargo_door_handle";
                priority=4;
                radius=100000;
                showWindow=0;
                statement="this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
                textToolTip="Close Ramp";
                userActionID=51;
            };
        class RampOpen
            {
                animPeriod=5;
                condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this) AND (player in [gunner this, driver this, crew this]))";
                displayName="Open Ramp";
                displayNameDefault="Open Ramp";
                onlyForPlayer=0;
                position="cargo_door_handle";
                priority=4;
                radius=100000;
                showWindow=0;
                statement="this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
                textToolTip="Open Ramp";
                userActionID=50;
            };
		class PelLift_UnLoadVehicle
			{
				userActionID=7;
				displayName="Unload Vehicle / Supply Pods";
				displayNameDefault="Unload Vehicle / Supply Pods";
				textToolTip="Unload Vehicle / Supply Pods";
				position="cargo_door_handle";
				showWindow=0;
				radius=5;
				priority=3;
				onlyForPlayer=0;
				condition="(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement="0 = [this] spawn armco_fnc_PelicanUnLoadValidate;";
			};
			class PelLift_OpenDetatchPodMenu
			{
				condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="Detach Individual Supply Pod Menu";
				displayNameDefault="<Detach Individual Supply Pod Menu";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = this spawn OPTRE_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
				textToolTip="Detach Individual Supply Pod Menu";
				userActionID=8;
			};
			class AirbrakeEngage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn OPTRE_fnc_AirbrakeEngage";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=54;
			};
			class ThrusterEngage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn OPTRE_fnc_ThrusterEngage";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class ThrusterDisengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FE2E2E'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FE2E2E'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn OPTRE_fnc_ThrusterDisengage";
				textToolTip="<t color='#FE2E2E'>Disengage Forward Thrusters";
				userActionID=53;
			};
		};
	};
class ARMCO_Pelican_Transport: ARMCO_Pelican_Base_U
	{
		side=1;
		scope=2;
		scopeCurator =2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] DC77 Pelican Transport";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia",
			"attach_gun"
		};
		hiddenSelectionsTextures[]=
		{
			"\custom_vehicles\Pelican\data\Armco_Pelican_Transport.paa"
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_pelicans";
	};
class ARMCO_Pelican_Gunship: ARMCO_Pelican_Base_A
	{
		side=1;
		scope=2;
		scopeCurator =2;
		crew="ARMCO_Soldier_O_Phoenix";
		faction="ARMCO_PMC";
		displayName="[ARMCO] DC77/TAL Pelican Gunship";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\custom_vehicles\Pelican\data\Armco_Pelican_Transport.paa"
		};
	editorCategory = "armco_units";
	editorSubcategory = "armco_units_pelicans";
	};
class ARMCO_Pelican_Medevac: ARMCO_Pelican_Base_U
	{
		side=1;
		scope=2;
		scopeCurator =2;
		attendant = 1;
		crew="ARMCO_Soldier_Phoenix_Medic";
		faction="ARMCO_PMC";
		displayName="[ARMCO] DC77/M Pelican Medevac";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia",
			"attach_gun"
		};
		hiddenSelectionsTextures[]=
		{
			"\custom_vehicles\Pelican\data\Armco_Pelican_Med.paa"
		};
		editorCategory = "armco_units";
		editorSubcategory = "armco_units_pelicans";
	};

	
//---Green Horns Pelicans---//
class GH_Pelican_Transport: ARMCO_Pelican_Base_U
	{
		side=0;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_GH";
		faction="ARMCO_Green_Horns";
		displayName="[GH] DC76 Pelican Transport";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia",
			"attach_gun"
		};
		hiddenSelectionsTextures[]=
		{
			"\custom_vehicles\Pelican\data\PelicanExterior_URF_CO.paa"
		};
	editorCategory = "armco_units_green_horns";
	editorSubcategory = "gh_units_pelicans";
	};
class GH_Pelican_Gunship: ARMCO_Pelican_Base_A
	{
		side=0;
		scope=2;
		scopeCurator = 2;
		crew="ARMCO_Soldier_GH";
		faction="ARMCO_Green_Horns";
		displayName="[GH] DC76/TAL Pelican Gunship";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\custom_vehicles\Pelican\data\PelicanExterior_URF_CO.paa"
		};
	editorCategory = "armco_units_green_horns";
	editorSubcategory = "gh_units_pelicans";
	};
class GH_Pelican_Medevac: ARMCO_Pelican_Base_U
	{
		side=0;
		scope=2;
		scopeCurator = 2;
		attendant = 1;
		crew="ARMCO_Soldier_GH_Medic";
		faction="ARMCO_Green_Horns";
		displayName="[GH] DC76/M Pelican Medevac";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia",
			"attach_gun"
		};
		hiddenSelectionsTextures[]=
		{
			"\custom_vehicles\Pelican\data\PelicanExterior_URF_CO.paa"
		};
		editorCategory = "armco_units_green_horns";
		editorSubcategory = "gh_units_pelicans";
	};
};