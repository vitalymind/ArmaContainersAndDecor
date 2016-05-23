class ctrlMenu; //External class reference

class CfgPatches{
	class armaContainersAndDecorations {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"3DEN"};
		author[]= {"vitaly'mind'chizhikov"};
	};
};
class Cfg3DEN {
	class Notifications {
		class acd_nothingSelected {
			text = "$STR_acd_nothingSelected";
			isWarning = 1;
		};
		class acd_scriptExportedSimple {
			text = "$STR_acd_scriptExportedSimple";
			isWarning = 0;
		};
		class acd_scriptExportedVehicle {
			text = "$STR_acd_scriptExportedVehicle";
			isWarning = 0;
		};
	};
};
class Display3DEN {
	class ContextMenu : ctrlMenu {
		class Items {
			items[] += {"acd_exportScript"};
			class acd_exportScript {
				text = "$STR_acd_exportScript";
				picture = "\armaContainersAndDecorations\textures\acd.paa";
				value = 0;
				conditionShow = "hoverObject";
				items[] = {"acd_makeScriptSimple","acd_makeScriptVehicle"};
			};
			class acd_makeScriptSimple {
				text = "$STR_acd_exportSimple";
				value = 0;
				conditionShow = "hoverObject";
				action = "['simple',false] call acd_fnc_exportObjectsAsScript;";
			};
			class acd_makeScriptVehicle {
				text = "$STR_acd_exportVehicle";
				value = 0;
				conditionShow = "hoverObject";
				items[] = {"acd_makeScriptVehicleSimOn","acd_makeScriptVehicleSimOff"};
			};
			class acd_makeScriptVehicleSimOn {
				text = "$STR_acd_simulationOn";
				value = 0;
				conditionShow = "hoverObject";
				action = "['vehicle', true] call acd_fnc_exportObjectsAsScript;";
			};
			class acd_makeScriptVehicleSimOff {
				text = "$STR_acd_simulationOff";
				value = 0;
				conditionShow = "hoverObject";
				action = "['vehicle', false] call acd_fnc_exportObjectsAsScript;";
			};
		};
	};
};
class CfgEditorCategories {
	class acd_containers {displayName = "ACD containers";};
	class acd_containers15k {displayName = "ACD containers (15k load)";};
	class acd_decorations {displayName = "ACD decorations";};
};
class CfgEditorSubcategories {
	class acd_containers_civilian {displayName = "Civilian";};
	class acd_containers_military {displayName = "Military";};

	class acd_decorations_misc {displayName = "Misc.";};
	class acd_decorations_boxes {displayName = "Boxes";};
	class acd_decorations_devicesThings {displayName = "Devices & things";};
	class acd_decorations_housholdObjects {displayName = "Household";};
	class acd_decorations_shelves {displayName = "Shelves";};
	class acd_decorations_tables {displayName = "Tables and desks";};
	class acd_decorations_chairs {displayName = "Chairs & benches";};
	class acd_decorations_constructionSite {displayName = "Construction";};
	class acd_decorations_timbers {displayName = "Timbers";};
	class acd_decorations_garbage {displayName = "Garbage";};
	class acd_decorations_barriers {displayName = "Barriers";};
	class acd_decorations_bombsShells {displayName = "Bombs & shells";};
	class acd_decorations_milDevices {displayName = "Mil. devices";};
	class acd_decorations_signs {displayName = "Signs";};
	class acd_decorations_rocks {displayName = "Rocks & stones";};
	class acd_decorations_bigRocks {displayName = "Big rocks";};
	class acd_decorations_corals {displayName = "Corals";};
	class acd_decorations_trees {displayName = "Trees";};
	class acd_decorations_bushes {displayName = "Bushes";};
	class acd_decorations_flowers {displayName = "Flowers";};
	class acd_decorations_branches {displayName = "Branches";};
	class acd_decorations_grass {displayName = "Grass";};
	class acd_decorations_terEffects {displayName = "Terrain effects";};
	class acd_decorations_vehicleWreck {displayName = "Vehicle wrecks";};
};
class CfgFunctions {
	class acd_funcs {
		tag = "acd";
		project = "armaContainersAndDecorations";
		class Common {
			file = "armaContainersAndDecorations\functions";
			class exportObjectsAsScript{};
		};
	};
};
class CfgVehicles {
	class House_F; // External class reference
	class acd_decor_base : House_F {
		destrType = "DestructNo";
		editorCategory = "acd_decorations";
		editorSubcategory = "";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "ACD decorations";
		keepHorizontalPlacement = 0;
		icon = "armaContainersAndDecorations\textures\decoration.paa";
	};
	class acd_Timbers_F : acd_decor_base {
		model = "a3\structures_f\Civ\Accessories\Timbers_F.p3d";
		displayName = "Timbers";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_WoodPile_large_F : acd_decor_base {
		model = "a3\structures_f_epb\Civ\Accessories\WoodPile_large_F.p3d";
		displayName = "Woodpile (Large)";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_bw_SetBig_Brains_F : acd_decor_base {
		model = "a3\plants_f\Bush\bw_SetBig_Brains_F.p3d";
		displayName = "bw_SetBig_Brains_F";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_bw_SetBig_corals_F : acd_decor_base {
		model = "a3\plants_f\Bush\bw_SetBig_corals_F.p3d";
		displayName = "bw_SetBig_corals_F";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_bw_SetBig_TubeG_F : acd_decor_base {
		model = "a3\plants_f\Bush\bw_SetBig_TubeG_F.p3d";
		displayName = "bw_SetBig_TubeG_F";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_bw_SetBig_TubeY_F : acd_decor_base {
		model = "a3\plants_f\Bush\bw_SetBig_TubeY_F.p3d";
		displayName = "bw_SetBig_TubeY_F";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_bw_SetSmall_Brains_F : acd_decor_base {
		model = "a3\plants_f\Bush\bw_SetSmall_Brains_F.p3d";
		displayName = "bw_SetSmall_Brains_F";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_bw_SetSmall_TubeG_F : acd_decor_base {
		model = "a3\plants_f\Bush\bw_SetSmall_TubeG_F.p3d";
		displayName = "bw_SetSmall_TubeG_F";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_bw_SetSmall_TubeY_F : acd_decor_base {
		model = "a3\plants_f\Bush\bw_SetSmall_TubeY_F.p3d";
		displayName = "bw_SetSmall_TubeY_F";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_b_ArundoD2s_F : acd_decor_base {
		model = "a3\plants_f\Bush\b_ArundoD2s_F.p3d";
		displayName = "b_ArundoD2s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_b_ArundoD3s_F : acd_decor_base {
		model = "a3\plants_f\Bush\b_ArundoD3s_F.p3d";
		displayName = "b_ArundoD3s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_b_FicusC1s_F : acd_decor_base {
		model = "a3\plants_f\Bush\b_FicusC1s_F.p3d";
		displayName = "b_FicusC1s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_b_ficusC2d_F : acd_decor_base {
		model = "a3\plants_f\Bush\b_ficusC2d_F.p3d";
		displayName = "b_ficusC2d_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_b_FicusC2s_F : acd_decor_base {
		model = "a3\plants_f\Bush\b_FicusC2s_F.p3d";
		displayName = "b_FicusC2s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_b_NeriumO2d_F : acd_decor_base {
		model = "a3\plants_f\Bush\b_NeriumO2d_F.p3d";
		displayName = "b_NeriumO2d_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_b_NeriumO2s_F : acd_decor_base {
		model = "a3\plants_f\Bush\b_NeriumO2s_F.p3d";
		displayName = "b_NeriumO2s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_b_NeriumO2s_white_F : acd_decor_base {
		model = "a3\plants_f\Bush\b_NeriumO2s_white_F.p3d";
		displayName = "b_NeriumO2s_white_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_b_Thistle_Thorn_Green : acd_decor_base {
		model = "a3\plants_f\Bush\b_Thistle_Thorn_Green.p3d";
		displayName = "b_Thistle_Thorn_Green";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_c_bigFallenBranches_pine : acd_decor_base {
		model = "a3\plants_f\Clutter\c_bigFallenBranches_pine.p3d";
		displayName = "c_bigFallenBranches_pine";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_c_bigFallenBranches_pine02 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_bigFallenBranches_pine02.p3d";
		displayName = "c_bigFallenBranches_pine02";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_c_bigFallenBranches_pine03 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_bigFallenBranches_pine03.p3d";
		displayName = "c_bigFallenBranches_pine03";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_c_BranchBig : acd_decor_base {
		model = "a3\plants_f\Clutter\c_BranchBig.p3d";
		displayName = "c_BranchBig";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_c_Carduus : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Carduus.p3d";
		displayName = "c_Carduus";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_flowers";
	};
	class acd_c_Coral1 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral1.p3d";
		displayName = "c_Coral1";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral2 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral2.p3d";
		displayName = "c_Coral2";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral3 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral3.p3d";
		displayName = "c_Coral3";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral4 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral4.p3d";
		displayName = "c_Coral4";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral5 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral5.p3d";
		displayName = "c_Coral5";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Corals_set_t : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Corals_set_t.p3d";
		displayName = "c_Corals_set_t";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral_brain : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral_brain.p3d";
		displayName = "c_Coral_brain";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral_brain_flat1 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral_brain_flat1.p3d";
		displayName = "c_Coral_brain_flat1";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral_brain_flat2 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral_brain_flat2.p3d";
		displayName = "c_Coral_brain_flat2";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral_brain_flat3 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral_brain_flat3.p3d";
		displayName = "c_Coral_brain_flat3";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral_brain_flat4 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral_brain_flat4.p3d";
		displayName = "c_Coral_brain_flat4";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral_brain_flat_set1 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral_brain_flat_set1.p3d";
		displayName = "c_Coral_brain_flat_set1";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral_brain_white : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral_brain_white.p3d";
		displayName = "c_Coral_brain_white";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral_plant1 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral_plant1.p3d";
		displayName = "c_Coral_plant1";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral_plant2 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral_plant2.p3d";
		displayName = "c_Coral_plant2";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral_plant_set1 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral_plant_set1.p3d";
		displayName = "c_Coral_plant_set1";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral_SPS_pink_set : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral_SPS_pink_set.p3d";
		displayName = "c_Coral_SPS_pink_set";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Coral_SPS_pink_single : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Coral_SPS_pink_single.p3d";
		displayName = "c_Coral_SPS_pink_single";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Crack_Clutter1 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Crack_Clutter1.p3d";
		displayName = "c_Crack_Clutter1";
		editorSubcategory = "acd_decorations_terEffects";
	};
	class acd_c_Crack_Clutter2 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Crack_Clutter2.p3d";
		displayName = "c_Crack_Clutter2";
		editorSubcategory = "acd_decorations_terEffects";
	};
	class acd_c_Crack_Clutter3 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Crack_Clutter3.p3d";
		displayName = "c_Crack_Clutter3";
		editorSubcategory = "acd_decorations_terEffects";
	};
	class acd_c_Crack_Clutter4 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Crack_Clutter4.p3d";
		displayName = "c_Crack_Clutter4";
		editorSubcategory = "acd_decorations_terEffects";
	};
	class acd_c_Flower_BrushMedium_Blue : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Flower_BrushMedium_Blue.p3d";
		displayName = "c_Flower_BrushMedium_Blue";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_flowers";
	};
	class acd_c_Flower_BrushMedium_White : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Flower_BrushMedium_White.p3d";
		displayName = "c_Flower_BrushMedium_White";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_flowers";
	};
	class acd_c_Flower_Cakile : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Flower_Cakile.p3d";
		displayName = "c_Flower_Cakile";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_flowers";
	};
	class acd_c_Flower_Low_Yellow1 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Flower_Low_Yellow1.p3d";
		displayName = "c_Flower_Low_Yellow1";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_flowers";
	};
	class acd_c_Flower_Low_Yellow2 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Flower_Low_Yellow2.p3d";
		displayName = "c_Flower_Low_Yellow2";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_flowers";
	};
	class acd_c_Flower_Medium_White1 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Flower_Medium_White1.p3d";
		displayName = "c_Flower_Medium_White1";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_flowers";
	};
	class acd_c_Flower_Medium_White2 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Flower_Medium_White2.p3d";
		displayName = "c_Flower_Medium_White2";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_flowers";
	};
	class acd_c_Flower_Tansy : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Flower_Tansy.p3d";
		displayName = "c_Flower_Tansy";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_flowers";
	};
	class acd_c_GrassCrooked : acd_decor_base {
		model = "a3\plants_f\Clutter\c_GrassCrooked.p3d";
		displayName = "c_GrassCrooked";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_GrassDead_Tuft_Stony : acd_decor_base {
		model = "a3\plants_f\Clutter\c_GrassDead_Tuft_Stony.p3d";
		displayName = "c_GrassDead_Tuft_Stony";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_GrassDesert_GroupHard : acd_decor_base {
		model = "a3\plants_f\Clutter\c_GrassDesert_GroupHard.p3d";
		displayName = "c_GrassDesert_GroupHard";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_GrassGreen_GroupHard : acd_decor_base {
		model = "a3\plants_f\Clutter\c_GrassGreen_GroupHard.p3d";
		displayName = "c_GrassGreen_GroupHard";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_c_GrassGreen_GroupSoft : acd_decor_base {
		model = "a3\plants_f\Clutter\c_GrassGreen_GroupSoft.p3d";
		displayName = "c_GrassGreen_GroupSoft";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_GrassLong_DryBunch : acd_decor_base {
		model = "a3\plants_f\Clutter\c_GrassLong_DryBunch.p3d";
		displayName = "c_GrassLong_DryBunch";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_GrassTall : acd_decor_base {
		model = "a3\plants_f\Clutter\c_GrassTall.p3d";
		displayName = "c_GrassTall";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_c_Grass_BrushHigh_Dry : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Grass_BrushHigh_Dry.p3d";
		displayName = "c_Grass_BrushHigh_Dry";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Grass_BrushHigh_Green : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Grass_BrushHigh_Green.p3d";
		displayName = "c_Grass_BrushHigh_Green";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_c_Grass_BrushLow_Sharp : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Grass_BrushLow_Sharp.p3d";
		displayName = "c_Grass_BrushLow_Sharp";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Grass_Bunch_Small : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Grass_Bunch_Small.p3d";
		displayName = "c_Grass_Bunch_Small";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Grass_Dry : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Grass_Dry.p3d";
		displayName = "c_Grass_Dry";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Grass_Green : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Grass_Green.p3d";
		displayName = "c_Grass_Green";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Grass_Tall_Dead : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Grass_Tall_Dead.p3d";
		displayName = "c_Grass_Tall_Dead";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Grass_TuftDry : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Grass_TuftDry.p3d";
		displayName = "c_Grass_TuftDry";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Plant_Chicory : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Plant_Chicory.p3d";
		displayName = "c_Plant_Chicory";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_flowers";
	};
	class acd_c_Plant_Dock : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Plant_Dock.p3d";
		displayName = "c_Plant_Dock";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Plant_GreenBunch : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Plant_GreenBunch.p3d";
		displayName = "c_Plant_GreenBunch";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Plant_Green_Small : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Plant_Green_Small.p3d";
		displayName = "c_Plant_Green_Small";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Plant_Mullein : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Plant_Mullein.p3d";
		displayName = "c_Plant_Mullein";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Rubble_Clutter1 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Rubble_Clutter1.p3d";
		displayName = "c_Rubble_Clutter1";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_c_Rubble_Clutter2 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Rubble_Clutter2.p3d";
		displayName = "c_Rubble_Clutter2";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_c_Rubble_Clutter3 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Rubble_Clutter3.p3d";
		displayName = "c_Rubble_Clutter3";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_c_Rubble_Clutter4 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Rubble_Clutter4.p3d";
		displayName = "c_Rubble_Clutter4";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_c_Rubble_Clutter5 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Rubble_Clutter5.p3d";
		displayName = "c_Rubble_Clutter5";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_c_Rubble_Clutter6 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Rubble_Clutter6.p3d";
		displayName = "c_Rubble_Clutter6";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_c_SeaWeed1 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_SeaWeed1.p3d";
		displayName = "c_SeaWeed1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_SeaWeed2 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_SeaWeed2.p3d";
		displayName = "c_SeaWeed2";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_sharpStones_erosion : acd_decor_base {
		model = "a3\plants_f\Clutter\c_sharpStones_erosion.p3d";
		displayName = "c_sharpStones_erosion";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_c_sharpStones_erosion_v2 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_sharpStones_erosion_v2.p3d";
		displayName = "c_sharpStones_erosion_v2";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_c_Spong_tube_green1 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Spong_tube_green1.p3d";
		displayName = "c_Spong_tube_green1";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Spong_tube_green2 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Spong_tube_green2.p3d";
		displayName = "c_Spong_tube_green2";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Spong_tube_green3 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Spong_tube_green3.p3d";
		displayName = "c_Spong_tube_green3";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Spong_tube_green4 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Spong_tube_green4.p3d";
		displayName = "c_Spong_tube_green4";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Spong_tube_yellow1 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Spong_tube_yellow1.p3d";
		displayName = "c_Spong_tube_yellow1";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Spong_tube_yellow2 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Spong_tube_yellow2.p3d";
		displayName = "c_Spong_tube_yellow2";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Spong_tube_yellow3 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Spong_tube_yellow3.p3d";
		displayName = "c_Spong_tube_yellow3";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_Spong_tube_yellow4 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Spong_tube_yellow4.p3d";
		displayName = "c_Spong_tube_yellow4";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_StarFish1 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StarFish1.p3d";
		displayName = "c_StarFish1";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_StarFish2 : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StarFish2.p3d";
		displayName = "c_StarFish2";
		editorSubcategory = "acd_decorations_corals";
	};
	class acd_c_StrFlowerWhiteSmall : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrFlowerWhiteSmall.p3d";
		displayName = "c_StrFlowerWhiteSmall";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_flowers";
	};
	class acd_c_StrGrassDry : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrGrassDry.p3d";
		displayName = "c_StrGrassDry";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_StrGrassDryMedium_group : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrGrassDryMedium_group.p3d";
		displayName = "c_StrGrassDryMedium_group";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_StrGrassDry_group : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrGrassDry_group.p3d";
		displayName = "c_StrGrassDry_group";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_StrGrassGreen_group : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrGrassGreen_group.p3d";
		displayName = "c_StrGrassGreen_group";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_StrPlantGermader_group : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrPlantGermader_group.p3d";
		displayName = "c_StrPlantGermader_group";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_StrPlantGreenShrub : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrPlantGreenShrub.p3d";
		displayName = "c_StrPlantGreenShrub";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_StrPlantGreenSmall : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrPlantGreenSmall.p3d";
		displayName = "c_StrPlantGreenSmall";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_StrPlantMullein : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrPlantMullein.p3d";
		displayName = "c_StrPlantMullein";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_StrThistlePurple_small : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrThistlePurple_small.p3d";
		displayName = "c_StrThistlePurple_small";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_StrThistleSmallYellow : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrThistleSmallYellow.p3d";
		displayName = "c_StrThistleSmallYellow";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_StrThistleYellowShrub : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrThistleYellowShrub.p3d";
		displayName = "c_StrThistleYellowShrub";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_flowers";
	};
	class acd_c_StrThornGray : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrThornGray.p3d";
		displayName = "c_StrThornGray";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_c_StrThornGreen : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrThornGreen.p3d";
		displayName = "c_StrThornGreen";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_c_StrThornKhaki : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrThornKhaki.p3d";
		displayName = "c_StrThornKhaki";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_c_StrWeedBrownTall_group : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrWeedBrownTall_group.p3d";
		displayName = "c_StrWeedBrownTall_group";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_StrWeedGreenTall : acd_decor_base {
		model = "a3\plants_f\Clutter\c_StrWeedGreenTall.p3d";
		displayName = "c_StrWeedGreenTall";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Thistle_High : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Thistle_High.p3d";
		displayName = "c_Thistle_High";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Thistle_High_Dead : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Thistle_High_Dead.p3d";
		displayName = "c_Thistle_High_Dead";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Thistle_Medium : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Thistle_Medium.p3d";
		displayName = "c_Thistle_Medium";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Thistle_Small : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Thistle_Small.p3d";
		displayName = "c_Thistle_Small";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Thistle_Small_GreenYellow : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Thistle_Small_GreenYellow.p3d";
		displayName = "c_Thistle_Small_GreenYellow";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Thistle_Small_Yellow : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Thistle_Small_Yellow.p3d";
		displayName = "c_Thistle_Small_Yellow";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_flowers";
	};
	class acd_c_Thistle_Thorn_Brown : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d";
		displayName = "c_Thistle_Thorn_Brown";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_c_Thistle_Thorn_Desert : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Thistle_Thorn_Desert.p3d";
		displayName = "c_Thistle_Thorn_Desert";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_c_Thistle_Thorn_Gray : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Thistle_Thorn_Gray.p3d";
		displayName = "c_Thistle_Thorn_Gray";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_c_Thistle_Thorn_Green : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d";
		displayName = "c_Thistle_Thorn_Green";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_c_Urchin_black : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Urchin_black.p3d";
		displayName = "c_Urchin_black";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Urchin_black_grp : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Urchin_black_grp.p3d";
		displayName = "c_Urchin_black_grp";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Urchin_brown : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Urchin_brown.p3d";
		displayName = "c_Urchin_brown";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Urchin_brown_grp : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Urchin_brown_grp.p3d";
		displayName = "c_Urchin_brown_grp";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Urchin_red : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Urchin_red.p3d";
		displayName = "c_Urchin_red";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_c_Urchin_red_grp : acd_decor_base {
		model = "a3\plants_f\Clutter\c_Urchin_red_grp.p3d";
		displayName = "c_Urchin_red_grp";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_p_Reeds_F : acd_decor_base {
		model = "a3\plants_f\Plant\p_Reeds_F.p3d";
		displayName = "p_Reeds_F";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_t_BroussonetiaP1s_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_BroussonetiaP1s_F.p3d";
		displayName = "t_BroussonetiaP1s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_FicusB1s_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_FicusB1s_F.p3d";
		displayName = "t_FicusB1s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_FicusB2s_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_FicusB2s_F.p3d";
		displayName = "t_FicusB2s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_FraxinusAV2s_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_FraxinusAV2s_F.p3d";
		displayName = "t_FraxinusAV2s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_OleaE1s_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_OleaE1s_F.p3d";
		displayName = "t_OleaE1s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_OleaE2s_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_OleaE2s_F.p3d";
		displayName = "t_OleaE2s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_PhoenixC1s_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_PhoenixC1s_F.p3d";
		displayName = "t_PhoenixC1s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_PhoenixC3s_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_PhoenixC3s_F.p3d";
		displayName = "t_PhoenixC3s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_PinusP3s_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_PinusP3s_F.p3d";
		displayName = "t_PinusP3s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_PinusS1s_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_PinusS1s_F.p3d";
		displayName = "t_PinusS1s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_PinusS2s_b_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_PinusS2s_b_F.p3d";
		displayName = "t_PinusS2s_b_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_PinusS2s_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_PinusS2s_F.p3d";
		displayName = "t_PinusS2s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_poplar2f_dead_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_poplar2f_dead_F.p3d";
		displayName = "t_poplar2f_dead_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_PopulusN3s_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_PopulusN3s_F.p3d";
		displayName = "t_PopulusN3s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_t_QuercusIR2s_F : acd_decor_base {
		model = "a3\plants_f\Tree\t_QuercusIR2s_F.p3d";
		displayName = "t_QuercusIR2s_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_DataTerminal_01_F : acd_decor_base {
		model = "a3\props_f_exp_a\Military\Equipment\DataTerminal_01_F.p3d";
		displayName = "Data Terminal";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_Tablet_02_F : acd_decor_base {
		model = "a3\props_f_exp_a\Military\Equipment\Tablet_02_F.p3d";
		displayName = "Rugged Tablet";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_Small_Stone_01_F : acd_decor_base {
		model = "a3\rocks_f\Small_Stone_01_F.p3d";
		displayName = "Small_Stone_01_F";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_Small_Stone_02_F : acd_decor_base {
		model = "a3\rocks_f\Small_Stone_02_F.p3d";
		displayName = "Small_Stone_02_F";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_StoneSharp_big : acd_decor_base {
		model = "a3\rocks_f\StoneSharp_big.p3d";
		displayName = "StoneSharp_big";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_StoneSharp_big_W : acd_decor_base {
		model = "a3\rocks_f\StoneSharp_big_W.p3d";
		displayName = "StoneSharp_big_W";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_StoneSharp_medium : acd_decor_base {
		model = "a3\rocks_f\StoneSharp_medium.p3d";
		displayName = "StoneSharp_medium";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_StoneSharp_medium_W : acd_decor_base {
		model = "a3\rocks_f\StoneSharp_medium_W.p3d";
		displayName = "StoneSharp_medium_W";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_StoneSharp_small : acd_decor_base {
		model = "a3\rocks_f\StoneSharp_small.p3d";
		displayName = "StoneSharp_small";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_StoneSharp_small_W : acd_decor_base {
		model = "a3\rocks_f\StoneSharp_small_W.p3d";
		displayName = "StoneSharp_small_W";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_StoneSharp_Wall : acd_decor_base {
		model = "a3\rocks_f\StoneSharp_Wall.p3d";
		displayName = "StoneSharp_Wall";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_StoneSharp_Wall_W : acd_decor_base {
		model = "a3\rocks_f\StoneSharp_Wall_W.p3d";
		displayName = "StoneSharp_Wall_W";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_Stone_big_F : acd_decor_base {
		model = "a3\rocks_f\Stone_big_F.p3d";
		displayName = "Stone_big_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_Stone_big_W : acd_decor_base {
		model = "a3\rocks_f\Stone_big_W.p3d";
		displayName = "Stone_big_W";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_Stone_medium_F : acd_decor_base {
		model = "a3\rocks_f\Stone_medium_F.p3d";
		displayName = "Stone_medium_F";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_Stone_medium_W : acd_decor_base {
		model = "a3\rocks_f\Stone_medium_W.p3d";
		displayName = "Stone_medium_W";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_Stone_small_F : acd_decor_base {
		model = "a3\rocks_f\Stone_small_F.p3d";
		displayName = "Stone_small_F";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_Stone_small_W : acd_decor_base {
		model = "a3\rocks_f\Stone_small_W.p3d";
		displayName = "Stone_small_W";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_BluntRock_apart : acd_decor_base {
		model = "a3\rocks_f\Blunt\BluntRock_apart.p3d";
		displayName = "BluntRock_apart";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_BluntRock_monolith : acd_decor_base {
		model = "a3\rocks_f\Blunt\BluntRock_monolith.p3d";
		displayName = "BluntRock_monolith";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_BluntRock_spike : acd_decor_base {
		model = "a3\rocks_f\Blunt\BluntRock_spike.p3d";
		displayName = "BluntRock_spike";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_BluntRock_wallH : acd_decor_base {
		model = "a3\rocks_f\Blunt\BluntRock_wallH.p3d";
		displayName = "BluntRock_wallH";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_BluntRock_wallV : acd_decor_base {
		model = "a3\rocks_f\Blunt\BluntRock_wallV.p3d";
		displayName = "BluntRock_wallV";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_BluntStones_erosion : acd_decor_base {
		model = "a3\rocks_f\Blunt\BluntStones_erosion.p3d";
		displayName = "BluntStones_erosion";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_BluntStone_01_LC : acd_decor_base {
		model = "a3\rocks_f\Blunt\BluntStone_01_LC.p3d";
		displayName = "BluntStone_01_LC";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_BluntStone_02_LC : acd_decor_base {
		model = "a3\rocks_f\Blunt\BluntStone_02_LC.p3d";
		displayName = "BluntStone_02_LC";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_BluntStone_03_LC : acd_decor_base {
		model = "a3\rocks_f\Blunt\BluntStone_03_LC.p3d";
		displayName = "BluntStone_03_LC";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_sharpRock_apart : acd_decor_base {
		model = "a3\rocks_f\Sharp\sharpRock_apart.p3d";
		displayName = "sharpRock_apart";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_sharpRock_monolith : acd_decor_base {
		model = "a3\rocks_f\Sharp\sharpRock_monolith.p3d";
		displayName = "sharpRock_monolith";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_sharpRock_spike : acd_decor_base {
		model = "a3\rocks_f\Sharp\sharpRock_spike.p3d";
		displayName = "sharpRock_spike";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_sharpRock_wallH : acd_decor_base {
		model = "a3\rocks_f\Sharp\sharpRock_wallH.p3d";
		displayName = "sharpRock_wallH";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_sharpRock_wallV : acd_decor_base {
		model = "a3\rocks_f\Sharp\sharpRock_wallV.p3d";
		displayName = "sharpRock_wallV";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_sharpStones_erosion : acd_decor_base {
		model = "a3\rocks_f\Sharp\sharpStones_erosion.p3d";
		displayName = "sharpStones_erosion";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_sharpStone_01_LC : acd_decor_base {
		model = "a3\rocks_f\Sharp\sharpStone_01_LC.p3d";
		displayName = "sharpStone_01_LC";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_sharpStone_02_LC : acd_decor_base {
		model = "a3\rocks_f\Sharp\sharpStone_02_LC.p3d";
		displayName = "sharpStone_02_LC";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_sharpStone_03_LC : acd_decor_base {
		model = "a3\rocks_f\Sharp\sharpStone_03_LC.p3d";
		displayName = "sharpStone_03_LC";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_W_sharpRock_apart : acd_decor_base {
		model = "a3\rocks_f\Water\W_sharpRock_apart.p3d";
		displayName = "W_sharpRock_apart";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_W_sharpRock_monolith : acd_decor_base {
		model = "a3\rocks_f\Water\W_sharpRock_monolith.p3d";
		displayName = "W_sharpRock_monolith";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_W_sharpRock_spike : acd_decor_base {
		model = "a3\rocks_f\Water\W_sharpRock_spike.p3d";
		displayName = "W_sharpRock_spike";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_W_sharpRock_wallH : acd_decor_base {
		model = "a3\rocks_f\Water\W_sharpRock_wallH.p3d";
		displayName = "W_sharpRock_wallH";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_W_sharpRock_wallV : acd_decor_base {
		model = "a3\rocks_f\Water\W_sharpRock_wallV.p3d";
		displayName = "W_sharpRock_wallV";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_W_sharpStones_erosion : acd_decor_base {
		model = "a3\rocks_f\Water\W_sharpStones_erosion.p3d";
		displayName = "W_sharpStones_erosion";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_W_sharpStone_01 : acd_decor_base {
		model = "a3\rocks_f\Water\W_sharpStone_01.p3d";
		displayName = "W_sharpStone_01";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_W_sharpStone_02 : acd_decor_base {
		model = "a3\rocks_f\Water\W_sharpStone_02.p3d";
		displayName = "W_sharpStone_02";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_W_sharpStone_03 : acd_decor_base {
		model = "a3\rocks_f\Water\W_sharpStone_03.p3d";
		displayName = "W_sharpStone_03";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_SignM_Mines_F : acd_decor_base {
		model = "a3\signs_f\SignM\SignM_Mines_F.p3d";
		displayName = "Sign (Mines)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_SignM_WarningMilAreaSmall_F : acd_decor_base {
		model = "a3\signs_f\SignM\SignM_WarningMilAreaSmall_F.p3d";
		displayName = "Sign (Military Area, Small)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_SignM_WarningMilitaryArea_F : acd_decor_base {
		model = "a3\signs_f\SignM\SignM_WarningMilitaryArea_F.p3d";
		displayName = "Sign (Military Area)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_SignM_WarningMilitaryVehicles_F : acd_decor_base {
		model = "a3\signs_f\SignM\SignM_WarningMilitaryVehicles_F.p3d";
		displayName = "Sign (Military Vehicles)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_SignM_WarningUnexplodedAmmo_F : acd_decor_base {
		model = "a3\signs_f\SignM\SignM_WarningUnexplodedAmmo_F.p3d";
		displayName = "Sign (Risk Area)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_SignSpec_CampRogain_F : acd_decor_base {
		model = "a3\signs_f\SignSpecial\SignSpec_CampRogain_F.p3d";
		displayName = "SignSpec_CampRogain_F";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_SignSpec_KaminoFiringRange_F : acd_decor_base {
		model = "a3\signs_f\SignSpecial\SignSpec_KaminoFiringRange_F.p3d";
		displayName = "SignSpec_KaminoFiringRange_F";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_SignSpec_Maxwell_F : acd_decor_base {
		model = "a3\signs_f\SignSpecial\SignSpec_Maxwell_F.p3d";
		displayName = "SignSpec_Maxwell_F";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_SignSpec_Mike26_F : acd_decor_base {
		model = "a3\signs_f\SignSpecial\SignSpec_Mike26_F.p3d";
		displayName = "SignSpec_Mike26_F";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_SignSpec_StratisVehicleRange_F : acd_decor_base {
		model = "a3\signs_f\SignSpecial\SignSpec_StratisVehicleRange_F.p3d";
		displayName = "SignSpec_StratisVehicleRange_F";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_Sign_F : acd_decor_base {
		model = "a3\signs_f\SignSpecial\Sign_F.p3d";
		displayName = "Sign";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_signsAD_B2_ConstructionSite_F : acd_decor_base {
		model = "a3\signs_f\Signs_Ad\signsAD_B2_ConstructionSite_F.p3d";
		displayName = "signsAD_B2_ConstructionSite_F";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_signsAD_B_FactoryOlive_F : acd_decor_base {
		model = "a3\signs_f\Signs_Ad\signsAD_B_FactoryOlive_F.p3d";
		displayName = "signsAD_B_FactoryOlive_F";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_signsAD_R_HarbourDIrect_F : acd_decor_base {
		model = "a3\signs_f\Signs_Ad\signsAD_R_HarbourDIrect_F.p3d";
		displayName = "signsAD_R_HarbourDIrect_F";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_signsAD_R_HarbourLeft_F : acd_decor_base {
		model = "a3\signs_f\Signs_Ad\signsAD_R_HarbourLeft_F.p3d";
		displayName = "signsAD_R_HarbourLeft_F";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_signsAD_R_HarbourRIght_F : acd_decor_base {
		model = "a3\signs_f\Signs_Ad\signsAD_R_HarbourRIght_F.p3d";
		displayName = "signsAD_R_HarbourRIght_F";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_SignsAd_SponsorS_F : acd_decor_base {
		model = "a3\signs_f\Signs_Ad\SignsAd_SponsorS_F.p3d";
		displayName = "Sign (Sponsor - Small)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_SignsAd_Sponsor_F : acd_decor_base {
		model = "a3\signs_f\Signs_Ad\SignsAd_Sponsor_F.p3d";
		displayName = "Sign (Sponsor)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_signsAD_TouristDirect_F : acd_decor_base {
		model = "a3\signs_f\Signs_Ad\signsAD_TouristDirect_F.p3d";
		displayName = "signsAD_TouristDirect_F";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_signsAD_V_Hotel_F : acd_decor_base {
		model = "a3\signs_f\Signs_Ad\signsAD_V_Hotel_F.p3d";
		displayName = "signsAD_V_Hotel_F";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_Signs_noDump_F : acd_decor_base {
		model = "a3\signs_f\Signs_Ad\Signs_noDump_F.p3d";
		displayName = "Signs_noDump_F";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_ArrowDesk_F : acd_decor_base {
		model = "a3\signs_f\SignT\ArrowDesk_F.p3d";
		displayName = "Arrow Desk (left)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_ArrowDesk_R_F : acd_decor_base {
		model = "a3\signs_f\SignT\ArrowDesk_R_F.p3d";
		displayName = "Arrow Desk (right)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_ArrowMarker_F : acd_decor_base {
		model = "a3\signs_f\SignT\ArrowMarker_F.p3d";
		displayName = "Arrow Marker (left)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_ArrowMarker_R_F : acd_decor_base {
		model = "a3\signs_f\SignT\ArrowMarker_R_F.p3d";
		displayName = "Arrow Marker (right)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_Pole_F : acd_decor_base {
		model = "a3\signs_f\SignT\Pole_F.p3d";
		displayName = "Pole";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_RoadBarrier_F : acd_decor_base {
		model = "a3\signs_f\SignT\RoadBarrier_F.p3d";
		displayName = "Road barrier";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_RoadBarrier_small_F : acd_decor_base {
		model = "a3\signs_f\SignT\RoadBarrier_small_F.p3d";
		displayName = "Road Barrier (Small)";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_RoadCone_F : acd_decor_base {
		model = "a3\signs_f\SignT\RoadCone_F.p3d";
		displayName = "Road Cone";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_RoadCone_L_F : acd_decor_base {
		model = "a3\signs_f\SignT\RoadCone_L_F.p3d";
		displayName = "Road Cone (Light)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_TapeSign_F : acd_decor_base {
		model = "a3\signs_f\SignT\TapeSign_F.p3d";
		displayName = "Red-White Tape";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_VergePost_F : acd_decor_base {
		model = "a3\signs_f\SignT\VergePost_F.p3d";
		displayName = "VergePost_F";
		editorSubcategory = "acd_decorations_barriers";
		keepHorizontalPlacement = 1;
	};
	class acd_Proxy_covered_damaged_F : acd_decor_base {
		model = "a3\soft_f_beta\Truck_01\Proxy_covered_damaged_F.p3d";
		displayName = "Proxy_covered_damaged_F";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_Proxy_covered_F : acd_decor_base {
		model = "a3\soft_f_beta\Truck_01\Proxy_covered_F.p3d";
		displayName = "Proxy_covered_F";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_Proxy_transport_damaged_F : acd_decor_base {
		model = "a3\soft_f_beta\Truck_01\Proxy_transport_damaged_F.p3d";
		displayName = "Proxy_transport_damaged_F";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_Proxy_transport_F : acd_decor_base {
		model = "a3\soft_f_beta\Truck_01\Proxy_transport_F.p3d";
		displayName = "Proxy_transport_F";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_Truck_01_wreck_F : acd_decor_base {
		model = "a3\soft_f_beta\Truck_01\Truck_01_wreck_F.p3d";
		displayName = "Truck_01_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Truck_03_Base_wreck_F : acd_decor_base {
		model = "a3\soft_f_epc\Truck_03\Truck_03_Base_wreck_F.p3d";
		displayName = "Truck_03_Base_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Truck_03_device_wreck_F : acd_decor_base {
		model = "a3\soft_f_epc\Truck_03\Truck_03_device_wreck_F.p3d";
		displayName = "Truck_03_device_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Truck_03_fuel_wreck_F : acd_decor_base {
		model = "a3\soft_f_epc\Truck_03\Truck_03_fuel_wreck_F.p3d";
		displayName = "Truck_03_fuel_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Truck_03_repair_wreck_F : acd_decor_base {
		model = "a3\soft_f_epc\Truck_03\Truck_03_repair_wreck_F.p3d";
		displayName = "Truck_03_repair_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Truck_01_box_wreck_F : acd_decor_base {
		model = "a3\soft_f_gamma\Truck_01\Truck_01_box_wreck_F.p3d";
		displayName = "Truck_01_box_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Truck_01_fuel_wreck_F : acd_decor_base {
		model = "a3\soft_f_gamma\Truck_01\Truck_01_fuel_wreck_F.p3d";
		displayName = "Truck_01_fuel_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Sink_F : acd_decor_base {
		model = "a3\structures_f\civ\Accessories\Sink_F.p3d";
		displayName = "Sink";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_WoodPile_F : acd_decor_base {
		model = "a3\structures_f\civ\Accessories\WoodPile_F.p3d";
		displayName = "Woodpile";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_CampingChair_V1_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\CampingChair_V1_F.p3d";
		displayName = "Folding Chair";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_CampingChair_V1_folded_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\CampingChair_V1_folded_F.p3d";
		displayName = "Folding Chair (Folded)";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_CampingChair_V2_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\CampingChair_V2_F.p3d";
		displayName = "Camping Chair";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_CampingTable_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\CampingTable_F.p3d";
		displayName = "Camping Table";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_CampingTable_small_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\CampingTable_small_F.p3d";
		displayName = "Camping Table (Small)";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_Camping_Light_off_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Camping_Light_off_F.p3d";
		displayName = "Camping Lantern (Off)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Ground_sheet_blue_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Ground_sheet_blue_F.p3d";
		displayName = "Sleeping Mat (Blue)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Ground_sheet_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Ground_sheet_F.p3d";
		displayName = "Sleeping Mat";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Ground_sheet_folded_blue_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Ground_sheet_folded_blue_F.p3d";
		displayName = "Sleeping Mat (Blue, Folded)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Ground_sheet_folded_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Ground_sheet_folded_F.p3d";
		displayName = "Sleeping Mat (Folded)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Ground_sheet_folded_khaki_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Ground_sheet_folded_khaki_F.p3d";
		displayName = "Sleeping Mat (Khaki, Folded)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Ground_sheet_folded_OPFOR_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Ground_sheet_folded_OPFOR_F.p3d";
		displayName = "Sleeping Mat (OPFOR, Folded)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Ground_sheet_folded_yellow_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Ground_sheet_folded_yellow_F.p3d";
		displayName = "Sleeping Mat (Yellow, Folded)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Ground_sheet_khaki_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Ground_sheet_khaki_F.p3d";
		displayName = "Sleeping Mat (Khaki)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Ground_sheet_OPFOR_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Ground_sheet_OPFOR_F.p3d";
		displayName = "Sleeping Mat (OPFOR)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Ground_sheet_yellow_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Ground_sheet_yellow_F.p3d";
		displayName = "Sleeping Mat (Yellow)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Pillow_camouflage_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Pillow_camouflage_F.p3d";
		displayName = "Pillow (Camo)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Pillow_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Pillow_F.p3d";
		displayName = "Pillow";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Pillow_grey_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Pillow_grey_F.p3d";
		displayName = "Pillow (Grey)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Pillow_old_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Pillow_old_F.p3d";
		displayName = "Pillow (Old)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Sleeping_bag_blue_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Sleeping_bag_blue_F.p3d";
		displayName = "Sleeping Bag (Blue)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Sleeping_bag_blue_folded_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Sleeping_bag_blue_folded_F.p3d";
		displayName = "Sleeping Bag (Blue, Folded)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Sleeping_bag_brown_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Sleeping_bag_brown_F.p3d";
		displayName = "Sleeping Bag (Brown)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Sleeping_bag_brown_folded_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Sleeping_bag_brown_folded_F.p3d";
		displayName = "Sleeping Bag (Brown, Folded)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Sleeping_bag_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Sleeping_bag_F.p3d";
		displayName = "Sleeping Bag";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Sleeping_bag_folded_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Sleeping_bag_folded_F.p3d";
		displayName = "Sleeping Bag (Folded)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Sunshade_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Sunshade_F.p3d";
		displayName = "Sunshade";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Sun_chair_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Sun_chair_F.p3d";
		displayName = "Sun Chair";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_Sun_chair_green_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\Sun_chair_green_F.p3d";
		displayName = "Sun Chair (Green)";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_TentA_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\TentA_F.p3d";
		displayName = "Tent (A-shape)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_TentDome_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\TentDome_F.p3d";
		displayName = "Tent (Dome-shape)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_ToiletBox_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\ToiletBox_F.p3d";
		displayName = "Toiletbox";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_FieldToilet_F : acd_decor_base {
		model = "a3\structures_f\civ\Camping\FieldToilet_F.p3d";
		displayName = "Field Toilet";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_Bricks_V1_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\Bricks_V1_F.p3d";
		displayName = "Stack of Bricks (Full)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_Bricks_V2_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\Bricks_V2_F.p3d";
		displayName = "Stack of Bricks (Part, v1)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_Bricks_V3_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\Bricks_V3_F.p3d";
		displayName = "Stack of Bricks (Part, v2)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_Bricks_V4_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\Bricks_V4_F.p3d";
		displayName = "Stack of Bricks (Part, v3)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_CinderBlocks_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\CinderBlocks_F.p3d";
		displayName = "Cinder Blocks";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_Coil_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\Coil_F.p3d";
		displayName = "Coil";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_ConcretePipe_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\ConcretePipe_F.p3d";
		displayName = "Concrete Pipe";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_IronPipes_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\IronPipes_F.p3d";
		displayName = "Iron Pipe";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_Pallets_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\Pallets_F.p3d";
		displayName = "Pallets";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_Pallet_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\Pallet_F.p3d";
		displayName = "Pallet";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_Pallet_vertical_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\Pallet_vertical_F.p3d";
		displayName = "Pallet (Vertical)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_Pipes_large_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\Pipes_large_F.p3d";
		displayName = "Pipes (Large)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_Pipes_small_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\Pipes_small_F.p3d";
		displayName = "Pipes (Small)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_WheelCart_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\WheelCart_F.p3d";
		displayName = "Wheel Cart";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_WoodenBox_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\WoodenBox_F.p3d";
		displayName = "Wooden Box";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_WorkStand_F : acd_decor_base {
		model = "a3\structures_f\civ\Constructions\WorkStand_F.p3d";
		displayName = "Workstand";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_HumanSkull_F : acd_decor_base {
		model = "a3\structures_f\civ\Dead\HumanSkull_F.p3d";
		displayName = "Skull";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_GarbageBags_F : acd_decor_base {
		model = "a3\structures_f\civ\Garbage\GarbageBags_F.p3d";
		displayName = "Garbage (Bags)";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_GarbagePallet_F : acd_decor_base {
		model = "a3\structures_f\civ\Garbage\GarbagePallet_F.p3d";
		displayName = "Garbage Heap (Pallet)";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_GarbageWashingMachine_F : acd_decor_base {
		model = "a3\structures_f\civ\Garbage\GarbageWashingMachine_F.p3d";
		displayName = "Garbage Heap (Washing machine)";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_Garbage_line_F : acd_decor_base {
		model = "a3\structures_f\civ\Garbage\Garbage_line_F.p3d";
		displayName = "Garbage (Line)";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_Garbage_square3_F : acd_decor_base {
		model = "a3\structures_f\civ\Garbage\Garbage_square3_F.p3d";
		displayName = "Garbage (3x3)";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_Garbage_square5_F : acd_decor_base {
		model = "a3\structures_f\civ\Garbage\Garbage_square5_F.p3d";
		displayName = "Garbage (5x5)";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_JunkPile_F : acd_decor_base {
		model = "a3\structures_f\civ\Garbage\JunkPile_F.p3d";
		displayName = "Pile of Junk";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_Tyres_F : acd_decor_base {
		model = "a3\structures_f\civ\Garbage\Tyres_F.p3d";
		displayName = "Tires (Heap)";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_Tyre_F : acd_decor_base {
		model = "a3\structures_f\civ\Garbage\Tyre_F.p3d";
		displayName = "Tire";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_Billboard_F : acd_decor_base {
		model = "a3\structures_f\civ\InfoBoards\Billboard_F.p3d";
		displayName = "Billboard";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_InfoStand_V1_F : acd_decor_base {
		model = "a3\structures_f\civ\InfoBoards\InfoStand_V1_F.p3d";
		displayName = "Infostand (1 leg)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_InfoStand_V2_F : acd_decor_base {
		model = "a3\structures_f\civ\InfoBoards\InfoStand_V2_F.p3d";
		displayName = "Infostand (2 legs)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_MapBoard_F : acd_decor_base {
		model = "a3\structures_f\civ\InfoBoards\MapBoard_F.p3d";
		displayName = "Whiteboard (Empty)";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_Noticeboard_F : acd_decor_base {
		model = "a3\structures_f\civ\InfoBoards\Noticeboard_F.p3d";
		displayName = "Noticeboard";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_Basket_F : acd_decor_base {
		model = "a3\structures_f\civ\Market\Basket_F.p3d";
		displayName = "Basket";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Cages_F : acd_decor_base {
		model = "a3\structures_f\civ\Market\Cages_F.p3d";
		displayName = "Cages";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_CratesPlastic_F : acd_decor_base {
		model = "a3\structures_f\civ\Market\CratesPlastic_F.p3d";
		displayName = "Crates (Plastic)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_CratesShabby_F : acd_decor_base {
		model = "a3\structures_f\civ\Market\CratesShabby_F.p3d";
		displayName = "Crates (Shabby)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_CratesWooden_F : acd_decor_base {
		model = "a3\structures_f\civ\Market\CratesWooden_F.p3d";
		displayName = "Crates (Wooden)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Sacks_goods_F : acd_decor_base {
		model = "a3\structures_f\civ\Market\Sacks_goods_F.p3d";
		displayName = "Sacks (Full)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Sacks_heap_F : acd_decor_base {
		model = "a3\structures_f\civ\Market\Sacks_heap_F.p3d";
		displayName = "Sacks (Heap)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Sack_F : acd_decor_base {
		model = "a3\structures_f\civ\Market\Sack_F.p3d";
		displayName = "Sack";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_StallWater_F : acd_decor_base {
		model = "a3\structures_f\civ\Market\StallWater_F.p3d";
		displayName = "Stall (Water)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_WoodenCart_F : acd_decor_base {
		model = "a3\structures_f\civ\Market\WoodenCart_F.p3d";
		displayName = "Cart (Wooden)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Bench_F : acd_decor_base {
		model = "a3\structures_f\furniture\Bench_F.p3d";
		displayName = "Stool";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_CashDesk_F : acd_decor_base {
		model = "a3\structures_f\furniture\CashDesk_F.p3d";
		displayName = "Cashdesk";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_ChairPlastic_F : acd_decor_base {
		model = "a3\structures_f\furniture\ChairPlastic_F.p3d";
		displayName = "Chair (Plastic)";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_ChairWood_F : acd_decor_base {
		model = "a3\structures_f\furniture\ChairWood_F.p3d";
		displayName = "Chair (Wooden)";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_HeatPump_F : acd_decor_base {
		model = "a3\structures_f\furniture\HeatPump_F.p3d";
		displayName = "Heat pump";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Icebox_F : acd_decor_base {
		model = "a3\structures_f\furniture\Icebox_F.p3d";
		displayName = "Icebox";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Metal_rack_F : acd_decor_base {
		model = "a3\structures_f\furniture\Metal_rack_F.p3d";
		displayName = "Metal Rack (4 shelves)";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_Metal_rack_Tall_F : acd_decor_base {
		model = "a3\structures_f\furniture\Metal_rack_Tall_F.p3d";
		displayName = "Metal Rack (5 shelves)";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_Metal_wooden_rack_F : acd_decor_base {
		model = "a3\structures_f\furniture\Metal_wooden_rack_F.p3d";
		displayName = "Metal-Wooden Rack";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_Rack_F : acd_decor_base {
		model = "a3\structures_f\furniture\Rack_F.p3d";
		displayName = "Rack";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_ShelvesMetal_F : acd_decor_base {
		model = "a3\structures_f\furniture\ShelvesMetal_F.p3d";
		displayName = "Shelves (Metal)";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_ShelvesWooden_blue_F : acd_decor_base {
		model = "a3\structures_f\furniture\ShelvesWooden_blue_F.p3d";
		displayName = "Shelves (Wooden, Blue)";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_TableDesk_F : acd_decor_base {
		model = "a3\structures_f\furniture\TableDesk_F.p3d";
		displayName = "Desk";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_Airport_Bench : acd_decor_base {
		model = "a3\structures_f\ind\airport\Airport_Bench.p3d";
		displayName = "Airport_Bench";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_LandMark_F : acd_decor_base {
		model = "a3\structures_f\ind\airport\LandMark_F.p3d";
		displayName = "Runway Marker";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_PowerGenerator_F : acd_decor_base {
		model = "a3\structures_f\ind\windpowerplant\PowerGenerator_F.p3d";
		displayName = "Power Generator";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_File1_F : acd_decor_base {
		model = "a3\structures_f\Items\Documents\File1_F.p3d";
		displayName = "File (Documents)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_File2_F : acd_decor_base {
		model = "a3\structures_f\Items\Documents\File2_F.p3d";
		displayName = "File (Research)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_FilePhotos_F : acd_decor_base {
		model = "a3\structures_f\Items\Documents\FilePhotos_F.p3d";
		displayName = "File (Photos)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Map_F : acd_decor_base {
		model = "a3\structures_f\Items\Documents\Map_F.p3d";
		displayName = "Sleeved map";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Map_unfolded_F : acd_decor_base {
		model = "a3\structures_f\Items\Documents\Map_unfolded_F.p3d";
		displayName = "Sleeved map (Stratis)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Notepad_F : acd_decor_base {
		model = "a3\structures_f\Items\Documents\Notepad_F.p3d";
		displayName = "Notepad";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Photos_V1_F : acd_decor_base {
		model = "a3\structures_f\Items\Documents\Photos_V1_F.p3d";
		displayName = "Photos 1";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Photos_V2_F : acd_decor_base {
		model = "a3\structures_f\Items\Documents\Photos_V2_F.p3d";
		displayName = "Photos 2";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Photos_V3_F : acd_decor_base {
		model = "a3\structures_f\Items\Documents\Photos_V3_F.p3d";
		displayName = "Photos 3";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Photos_V4_F : acd_decor_base {
		model = "a3\structures_f\Items\Documents\Photos_V4_F.p3d";
		displayName = "Photos 4";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Photos_V5_F : acd_decor_base {
		model = "a3\structures_f\Items\Documents\Photos_V5_F.p3d";
		displayName = "Photos 5";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Photos_V6_F : acd_decor_base {
		model = "a3\structures_f\Items\Documents\Photos_V6_F.p3d";
		displayName = "Photos 6";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_ExtensionCord_F : acd_decor_base {
		model = "a3\structures_f\Items\Electronics\ExtensionCord_F.p3d";
		displayName = "Extension Cord";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_FloodLight_F : acd_decor_base {
		model = "a3\structures_f\Items\Electronics\FloodLight_F.p3d";
		displayName = "Floodlight";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_FMradio_F : acd_decor_base {
		model = "a3\structures_f\Items\Electronics\FMradio_F.p3d";
		displayName = "FM Radio";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_HandyCam_F : acd_decor_base {
		model = "a3\structures_f\Items\Electronics\HandyCam_F.p3d";
		displayName = "Handheld Camera";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Laptop_F : acd_decor_base {
		model = "a3\structures_f\Items\Electronics\Laptop_F.p3d";
		displayName = "Laptop (Closed)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Laptop_unfolded_F : acd_decor_base {
		model = "a3\structures_f\Items\Electronics\Laptop_unfolded_F.p3d";
		displayName = "Laptop (Open)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_MobilePhone_old_F : acd_decor_base {
		model = "a3\structures_f\Items\Electronics\MobilePhone_old_F.p3d";
		displayName = "Mobile Phone (Old)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_MobilePhone_smart_F : acd_decor_base {
		model = "a3\structures_f\Items\Electronics\MobilePhone_smart_F.p3d";
		displayName = "Mobile Phone (New)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PortableLongRangeRadio_F : acd_decor_base {
		model = "a3\structures_f\Items\Electronics\PortableLongRangeRadio_F.p3d";
		displayName = "Portable Long-range Radio";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Portable_generator_F : acd_decor_base {
		model = "a3\structures_f\Items\Electronics\Portable_generator_F.p3d";
		displayName = "Portable Generator";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_SatellitePhone_F : acd_decor_base {
		model = "a3\structures_f\Items\Electronics\SatellitePhone_F.p3d";
		displayName = "Satellite Phone";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_SurvivalRadio_F : acd_decor_base {
		model = "a3\structures_f\Items\Electronics\SurvivalRadio_F.p3d";
		displayName = "Survival Radio";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_BottlePlastic_V1_F : acd_decor_base {
		model = "a3\structures_f\Items\Food\BottlePlastic_V1_F.p3d";
		displayName = "Plastic Bottle";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Can_Dented_F : acd_decor_base {
		model = "a3\structures_f\Items\Food\Can_Dented_F.p3d";
		displayName = "Can (Dented)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Can_Rusty_F : acd_decor_base {
		model = "a3\structures_f\Items\Food\Can_Rusty_F.p3d";
		displayName = "Can (Rusty)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Can_V1_F : acd_decor_base {
		model = "a3\structures_f\Items\Food\Can_V1_F.p3d";
		displayName = "Can (Spirit)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Can_V2_F : acd_decor_base {
		model = "a3\structures_f\Items\Food\Can_V2_F.p3d";
		displayName = "Can (Franta)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Can_V3_F : acd_decor_base {
		model = "a3\structures_f\Items\Food\Can_V3_F.p3d";
		displayName = "Can (RedGull)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_TacticalBacon_F : acd_decor_base {
		model = "a3\structures_f\Items\Food\TacticalBacon_F.p3d";
		displayName = "Tactical Bacon";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Compass_F : acd_decor_base {
		model = "a3\structures_f\Items\Gadgets\Compass_F.p3d";
		displayName = "Compass";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Suitcase_F : acd_decor_base {
		model = "a3\structures_f\Items\Luggage\Suitcase_F.p3d";
		displayName = "Suitcase";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PenBlack_F : acd_decor_base {
		model = "a3\structures_f\Items\Stationery\PenBlack_F.p3d";
		displayName = "Pen (Black)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PencilBlue_F : acd_decor_base {
		model = "a3\structures_f\Items\Stationery\PencilBlue_F.p3d";
		displayName = "Pencil (Blue)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PencilGreen_F : acd_decor_base {
		model = "a3\structures_f\Items\Stationery\PencilGreen_F.p3d";
		displayName = "Pencil (Green)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PencilRed_F : acd_decor_base {
		model = "a3\structures_f\Items\Stationery\PencilRed_F.p3d";
		displayName = "Pencil (Red)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PencilYellow_F : acd_decor_base {
		model = "a3\structures_f\Items\Stationery\PencilYellow_F.p3d";
		displayName = "Pencil (Yellow)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PenRed_F : acd_decor_base {
		model = "a3\structures_f\Items\Stationery\PenRed_F.p3d";
		displayName = "Pen (Red)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PensAndPencils_F : acd_decor_base {
		model = "a3\structures_f\Items\Stationery\PensAndPencils_F.p3d";
		displayName = "Pens and Pencils";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Axe_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\Axe_F.p3d";
		displayName = "Axe";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Axe_fire_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\Axe_fire_F.p3d";
		displayName = "Axe (Firefighter)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_DrillAku_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\DrillAku_F.p3d";
		displayName = "Accu-Drill";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_DustMask_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\DustMask_F.p3d";
		displayName = "Dust Mask";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_File_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\File_F.p3d";
		displayName = "File";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Gloves_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\Gloves_F.p3d";
		displayName = "Gloves";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Grinder_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\Grinder_F.p3d";
		displayName = "Grinder";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Hammer_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\Hammer_F.p3d";
		displayName = "Hammer";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Meter3m_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\Meter3m_F.p3d";
		displayName = "Tape Measure";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_MultiMeter_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\MultiMeter_F.p3d";
		displayName = "Multi-meter";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Pliers_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\Pliers_F.p3d";
		displayName = "Pliers";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Saw_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\Saw_F.p3d";
		displayName = "Saw";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Screwdriver_V1_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\Screwdriver_V1_F.p3d";
		displayName = "Screwdriver (Slotted)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Screwdriver_V2_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\Screwdriver_V2_F.p3d";
		displayName = "Screwdriver (Phillips)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Wrench_F : acd_decor_base {
		model = "a3\structures_f\Items\Tools\Wrench_F.p3d";
		displayName = "Wrench";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Money_F : acd_decor_base {
		model = "a3\structures_f\Items\Valuables\Money_F.p3d";
		displayName = "Pile of Money";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_BarrelEmpty_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\BarrelEmpty_F.p3d";
		displayName = "Plastic Barrel (Empty)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_BarrelSand_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\BarrelSand_F.p3d";
		displayName = "Plastic Barrel (Sand)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_BarrelTrash_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\BarrelTrash_F.p3d";
		displayName = "Plastic Barrel (Trash)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_BarrelWater_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\BarrelWater_F.p3d";
		displayName = "Plastic Barrel (Water)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_BucketNavy_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\BucketNavy_F.p3d";
		displayName = "Bucket (NAVY)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Bucket_clean_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\Bucket_clean_F.p3d";
		displayName = "Bucket (Clean)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Bucket_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\Bucket_F.p3d";
		displayName = "Bucket";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Bucket_painted_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\Bucket_painted_F.p3d";
		displayName = "Bucket (Paint)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_CanisterFuel_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\CanisterFuel_F.p3d";
		displayName = "Canister (Fuel)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_CanisterOil_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\CanisterOil_F.p3d";
		displayName = "Canister (Oil)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_CanisterPlastic_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\CanisterPlastic_F.p3d";
		displayName = "Canister (Plastic)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_MetalBarrel_empty_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\MetalBarrel_empty_F.p3d";
		displayName = "Metal Barrel (Open)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_MetalBarrel_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\MetalBarrel_F.p3d";
		displayName = "Metal Barrel";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_WaterBarrel_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\WaterBarrel_F.p3d";
		displayName = "Water Barrel";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_WaterTank_F : acd_decor_base {
		model = "a3\structures_f\Items\Vessels\WaterTank_F.p3d";
		displayName = "Water Tank";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_Barracks_acc_proxy_1_F : acd_decor_base {
		model = "a3\structures_f\mil\barracks\Barracks_acc_proxy_1_F.p3d";
		displayName = "Barracks_acc_proxy_1_F";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Barracks_acc_proxy_2_F : acd_decor_base {
		model = "a3\structures_f\mil\barracks\Barracks_acc_proxy_2_F.p3d";
		displayName = "Barracks_acc_proxy_2_F";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Barracks_acc_proxy_3_F : acd_decor_base {
		model = "a3\structures_f\mil\barracks\Barracks_acc_proxy_3_F.p3d";
		displayName = "Barracks_acc_proxy_3_F";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Barracks_acc_proxy_4_F : acd_decor_base {
		model = "a3\structures_f\mil\barracks\Barracks_acc_proxy_4_F.p3d";
		displayName = "Barracks_acc_proxy_4_F";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Barracks_acc_proxy_5_F : acd_decor_base {
		model = "a3\structures_f\mil\barracks\Barracks_acc_proxy_5_F.p3d";
		displayName = "Barracks_acc_proxy_5_F";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_RowBoat_V1_F : acd_decor_base {
		model = "a3\structures_f\Naval\RowBoats\RowBoat_V1_F.p3d";
		displayName = "Rowboat (v1)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_RowBoat_V2_F : acd_decor_base {
		model = "a3\structures_f\Naval\RowBoats\RowBoat_V2_F.p3d";
		displayName = "Rowboat (v2)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_RowBoat_V3_F : acd_decor_base {
		model = "a3\structures_f\Naval\RowBoats\RowBoat_V3_F.p3d";
		displayName = "Rowboat (v3)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_Obstacle_Cross_F : acd_decor_base {
		model = "a3\structures_f\training\Obstacle_Cross_F.p3d";
		displayName = "Obstacle (Cross Over)";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_GymBench_01_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Civ\SportsGrounds\GymBench_01_F.p3d";
		displayName = "Gym Bench";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_GymRack_01_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Civ\SportsGrounds\GymRack_01_F.p3d";
		displayName = "Gym Rack (Big)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_GymRack_02_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Civ\SportsGrounds\GymRack_02_F.p3d";
		displayName = "Gym Rack (Small)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_GymRack_03_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Civ\SportsGrounds\GymRack_03_F.p3d";
		displayName = "Gym Rack (Weight plates)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_TyreBarrier_01_black_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Civ\SportsGrounds\TyreBarrier_01_black_F.p3d";
		displayName = "Tire Barrier (Black, 1)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_TyreBarrier_01_line_x4_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Civ\SportsGrounds\TyreBarrier_01_line_x4_F.p3d";
		displayName = "Tire Barrier (4)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_TyreBarrier_01_line_x6_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Civ\SportsGrounds\TyreBarrier_01_line_x6_F.p3d";
		displayName = "Tire Barrier (6)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_TyreBarrier_01_white_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Civ\SportsGrounds\TyreBarrier_01_white_F.p3d";
		displayName = "Tire Barrier";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_WinnersPodium_01_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Civ\SportsGrounds\WinnersPodium_01_F.p3d";
		displayName = "Winner's podium";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_CarBattery_01_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Items\Electronics\CarBattery_01_F.p3d";
		displayName = "Car Battery (Truck)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_CarBattery_02_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Items\Electronics\CarBattery_02_F.p3d";
		displayName = "Car Battery (Car)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_VRGoggles_01_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Items\Electronics\VRGoggles_01_F.p3d";
		displayName = "VR Goggles";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_WaterCooler_01_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Items\Electronics\WaterCooler_01_F.p3d";
		displayName = "Water Cooler (New)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_FoodContainer_01_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Items\Food\FoodContainer_01_F.p3d";
		displayName = "Food Container (Large)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_KartStand_01_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Items\Sport\KartStand_01_F.p3d";
		displayName = "Kart Stand";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_KartSteertingWheel_01_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Items\Sport\KartSteertingWheel_01_F.p3d";
		displayName = "Kart steering wheel";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_KartTrolly_01_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Items\Sport\KartTrolly_01_F.p3d";
		displayName = "Kart Trolly";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_KartTyre_01_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Items\Sport\KartTyre_01_F.p3d";
		displayName = "Kart Tire";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_KartTyre_01_x4_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Items\Sport\KartTyre_01_x4_F.p3d";
		displayName = "Kart Tires (4)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Trophy_01_bronze_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Items\Sport\Trophy_01_bronze_F.p3d";
		displayName = "Trophy (Bronze)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Trophy_01_gold_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Items\Sport\Trophy_01_gold_F.p3d";
		displayName = "Trophy (Gold)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Trophy_01_silver_F : acd_decor_base {
		model = "a3\structures_f_bootcamp\Items\Sport\Trophy_01_silver_F.p3d";
		displayName = "Trophy (Silver)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_WoodenLog_F : acd_decor_base {
		model = "a3\structures_f_epa\Civ\Camping\WoodenLog_F.p3d";
		displayName = "Wooden log";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_WoodenTable_large_F : acd_decor_base {
		model = "a3\structures_f_epa\Civ\Camping\WoodenTable_large_F.p3d";
		displayName = "Wooden table (Large)";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_WoodenTable_small_F : acd_decor_base {
		model = "a3\structures_f_epa\Civ\Camping\WoodenTable_small_F.p3d";
		displayName = "Wooden table (Small)";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_Pallets_stack_F : acd_decor_base {
		model = "a3\structures_f_epa\Civ\Constructions\Pallets_stack_F.p3d";
		displayName = "Stack of Pallets";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_PortableLight_double_F : acd_decor_base {
		model = "a3\structures_f_epa\Civ\Constructions\PortableLight_double_F.p3d";
		displayName = "Portable Lights (Double)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_PortableLight_single_F : acd_decor_base {
		model = "a3\structures_f_epa\Civ\Constructions\PortableLight_single_F.p3d";
		displayName = "Portable Lights (Single)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_Battery_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Electronics\Battery_F.p3d";
		displayName = "Battery";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_BakedBeans_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Food\BakedBeans_F.p3d";
		displayName = "Baked Beans";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_BottlePlastic_V2_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Food\BottlePlastic_V2_F.p3d";
		displayName = "Water bottle";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Canteen_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Food\Canteen_F.p3d";
		displayName = "Canteen";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_CerealsBox_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Food\CerealsBox_F.p3d";
		displayName = "Cereal box";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PowderedMilk_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Food\PowderedMilk_F.p3d";
		displayName = "Powdered milk";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_RiceBox_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Food\RiceBox_F.p3d";
		displayName = "Rice";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Antibiotic_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Medical\Antibiotic_F.p3d";
		displayName = "Antibiotics";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Bandage_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Medical\Bandage_F.p3d";
		displayName = "Bandages";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_BloodBag_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Medical\BloodBag_F.p3d";
		displayName = "Blood bag";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Defibrillator_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Medical\Defibrillator_F.p3d";
		displayName = "Defibrillator";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_DisinfectantSpray_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Medical\DisinfectantSpray_F.p3d";
		displayName = "Disinfectant spray";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_HeatPack_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Medical\HeatPack_F.p3d";
		displayName = "Heatpack";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PainKillers_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Medical\PainKillers_F.p3d";
		displayName = "Pain killers";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_VitaminBottle_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Medical\VitaminBottle_F.p3d";
		displayName = "Vitamin bottle";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_WaterPurificationTablets_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Medical\WaterPurificationTablets_F.p3d";
		displayName = "Water purification tablets";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_ButaneCanister_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Tools\ButaneCanister_F.p3d";
		displayName = "Butane canister";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_ButaneTorch_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Tools\ButaneTorch_F.p3d";
		displayName = "Butane torch";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_CanOpener_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Tools\CanOpener_F.p3d";
		displayName = "Can opener";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_DuctTape_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Tools\DuctTape_F.p3d";
		displayName = "Duct tape";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_FireExtinguisher_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Tools\FireExtinguisher_F.p3d";
		displayName = "Fire extinguisher";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_GasCanister_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Tools\GasCanister_F.p3d";
		displayName = "Gas canister";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_GasCooker_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Tools\GasCooker_F.p3d";
		displayName = "Gas cooker";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Matches_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Tools\Matches_F.p3d";
		displayName = "Box of matches";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_MetalWire_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Tools\MetalWire_F.p3d";
		displayName = "Metal wire";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Shovel_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Tools\Shovel_F.p3d";
		displayName = "Shovel";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_TinContainer_F : acd_decor_base {
		model = "a3\structures_f_epa\Items\Vessels\TinContainer_F.p3d";
		displayName = "Tin container";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Grave_dirt_F : acd_decor_base {
		model = "a3\structures_f_epb\Civ\Dead\Grave_dirt_F.p3d";
		displayName = "Grave (Dirt)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_Grave_forest_F : acd_decor_base {
		model = "a3\structures_f_epb\Civ\Dead\Grave_forest_F.p3d";
		displayName = "Grave (Forest)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_Grave_rocks_F : acd_decor_base {
		model = "a3\structures_f_epb\Civ\Dead\Grave_rocks_F.p3d";
		displayName = "Grave (Rocks)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_GarbageContainer_closed_F : acd_decor_base {
		model = "a3\structures_f_epb\Civ\Garbage\GarbageContainer_closed_F.p3d";
		displayName = "Trash container (Closed)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_GarbageContainer_open_F : acd_decor_base {
		model = "a3\structures_f_epb\Civ\Garbage\GarbageContainer_open_F.p3d";
		displayName = "Trash container (Open)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_ShelvesWooden_F : acd_decor_base {
		model = "a3\structures_f_epb\Furniture\ShelvesWooden_F.p3d";
		displayName = "Shelves (Wooden)";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_ShelvesWooden_khaki_F : acd_decor_base {
		model = "a3\structures_f_epb\Furniture\ShelvesWooden_khaki_F.p3d";
		displayName = "Shelves (Wooden, Khaki)";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_LuggageHeap_01_F : acd_decor_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_01_F.p3d";
		displayName = "Luggage (Couple)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_LuggageHeap_02_F : acd_decor_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_02_F.p3d";
		displayName = "Luggage (Few)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_LuggageHeap_03_F : acd_decor_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_03_F.p3d";
		displayName = "Luggage (Bunch)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_LuggageHeap_04_F : acd_decor_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_04_F.p3d";
		displayName = "Luggage (Pile)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_LuggageHeap_05_F : acd_decor_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_05_F.p3d";
		displayName = "Luggage (Heap)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Ammobox_rounds_F : acd_decor_base {
		model = "a3\structures_f_epb\Items\Military\Ammobox_rounds_F.p3d";
		displayName = "Ammo box";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_Magazine_rifle_F : acd_decor_base {
		model = "a3\structures_f_epb\Items\Military\Magazine_rifle_F.p3d";
		displayName = "Magazine (Rifle)";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_BarrelEmpty_grey_F : acd_decor_base {
		model = "a3\structures_f_epb\Items\Vessels\BarrelEmpty_grey_F.p3d";
		displayName = "Plastic Barrel (Empty, Grey)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_BarrelSand_grey_F : acd_decor_base {
		model = "a3\structures_f_epb\Items\Vessels\BarrelSand_grey_F.p3d";
		displayName = "Plastic Barrel (Sand, Grey)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_BarrelTrash_grey_F : acd_decor_base {
		model = "a3\structures_f_epb\Items\Vessels\BarrelTrash_grey_F.p3d";
		displayName = "Plastic Barrel (Trash, Grey)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_BarrelWater_grey_F : acd_decor_base {
		model = "a3\structures_f_epb\Items\Vessels\BarrelWater_grey_F.p3d";
		displayName = "Plastic Barrel (Water, Grey)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_CrabCages_F : acd_decor_base {
		model = "a3\structures_f_epb\Naval\Fishing\CrabCages_F.p3d";
		displayName = "Crab Cages";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_FishingGear_01_F : acd_decor_base {
		model = "a3\structures_f_epb\Naval\Fishing\FishingGear_01_F.p3d";
		displayName = "Fishing Gear";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_FishingGear_02_F : acd_decor_base {
		model = "a3\structures_f_epb\Naval\Fishing\FishingGear_02_F.p3d";
		displayName = "Fishing Nets";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_Bench_01_F : acd_decor_base {
		model = "a3\structures_f_epc\Civ\Accessories\Bench_01_F.p3d";
		displayName = "Bench";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_Bench_02_F : acd_decor_base {
		model = "a3\structures_f_epc\Civ\Accessories\Bench_02_F.p3d";
		displayName = "Bench (Blue)";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_TablePlastic_01_F : acd_decor_base {
		model = "a3\structures_f_epc\Civ\Accessories\TablePlastic_01_F.p3d";
		displayName = "Garden Table";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_GarbageBarrel_01_F : acd_decor_base {
		model = "a3\structures_f_epc\Civ\Garbage\GarbageBarrel_01_F.p3d";
		displayName = "Garbage Barrel (Smiley)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_GarbageBin_01_F : acd_decor_base {
		model = "a3\structures_f_epc\Civ\Garbage\GarbageBin_01_F.p3d";
		displayName = "Trash Bin";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Document_01_F : acd_decor_base {
		model = "a3\structures_f_epc\Items\Documents\Document_01_F.p3d";
		displayName = "Document (Top Secret)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Device_assembled_F : acd_decor_base {
		model = "a3\structures_f_epc\Items\Electronics\Device_assembled_F.p3d";
		displayName = "Device (Assembled)";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_Device_disassembled_F : acd_decor_base {
		model = "a3\structures_f_epc\Items\Electronics\Device_disassembled_F.p3d";
		displayName = "Device (Disassembled)";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_Ammobox : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\Ammobox.p3d";
		displayName = "Ammobox";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_AmmoBox_F : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\AmmoBox_F.p3d";
		displayName = "AmmoBox_F";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_AmmoVeh_F : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\AmmoVeh_F.p3d";
		displayName = "AmmoVeh_F";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Box_NATO_AmmoVeh_F : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\Box_NATO_AmmoVeh_F.p3d";
		displayName = "Box_NATO_AmmoVeh_F";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Proxy_UsBasicAmmoBox : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicAmmoBox.p3d";
		displayName = "Proxy_UsBasicAmmoBox";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Proxy_UsBasicAmmoBoxBig : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicAmmoBoxBig.p3d";
		displayName = "Proxy_UsBasicAmmoBoxBig";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Proxy_UsBasicAmmoBoxSmall : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicAmmoBoxSmall.p3d";
		displayName = "Proxy_UsBasicAmmoBoxSmall";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Proxy_UsBasicExplosives : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicExplosives.p3d";
		displayName = "Proxy_UsBasicExplosives";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Proxy_UsBasicWeaponBox : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicWeaponBox.p3d";
		displayName = "Proxy_UsBasicWeaponBox";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Proxy_UsLouncherBox : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsLouncherBox.p3d";
		displayName = "Proxy_UsLouncherBox";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Supplydrop : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\Supplydrop.p3d";
		displayName = "Supply Box [NATO]";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_USBasicAmmo : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\USBasicAmmo.p3d";
		displayName = "USBasicAmmo";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_USBasicWeapons : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\USBasicWeapons.p3d";
		displayName = "USBasicWeapons";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_USLaunchers : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\USLaunchers.p3d";
		displayName = "USLaunchers";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_WpnsBox_F : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\WpnsBox_F.p3d";
		displayName = "WpnsBox_F";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_WpnsBox_large_F : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\WpnsBox_large_F.p3d";
		displayName = "WpnsBox_large_F";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_WpnsBox_long_F : acd_decor_base {
		model = "a3\weapons_f\ammoboxes\WpnsBox_long_F.p3d";
		displayName = "WpnsBox_long_F";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Bomb_01_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Bomb_01_F.p3d";
		displayName = "Bomb_01_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Bomb_01_fly_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Bomb_01_fly_F.p3d";
		displayName = "Bomb_01_fly_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Bomb_01_proxy_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Bomb_01_proxy_F.p3d";
		displayName = "Bomb_01_proxy_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Bomb_02_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Bomb_02_F.p3d";
		displayName = "Bomb_02_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_cartridge : acd_decor_base {
		model = "a3\weapons_f\Ammo\cartridge.p3d";
		displayName = "cartridge";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_cartridge_127 : acd_decor_base {
		model = "a3\weapons_f\Ammo\cartridge_127.p3d";
		displayName = "cartridge_127";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_cartridge_65 : acd_decor_base {
		model = "a3\weapons_f\Ammo\cartridge_65.p3d";
		displayName = "cartridge_65";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_cartridge_762 : acd_decor_base {
		model = "a3\weapons_f\Ammo\cartridge_762.p3d";
		displayName = "cartridge_762";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_cartridge_slug : acd_decor_base {
		model = "a3\weapons_f\Ammo\cartridge_slug.p3d";
		displayName = "cartridge_slug";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_cartridge_small : acd_decor_base {
		model = "a3\weapons_f\Ammo\cartridge_small.p3d";
		displayName = "cartridge_small";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Flare : acd_decor_base {
		model = "a3\weapons_f\Ammo\Flare.p3d";
		displayName = "Flare";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_flare_green : acd_decor_base {
		model = "a3\weapons_f\Ammo\flare_green.p3d";
		displayName = "flare_green";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_flare_red : acd_decor_base {
		model = "a3\weapons_f\Ammo\flare_red.p3d";
		displayName = "flare_red";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_flare_white : acd_decor_base {
		model = "a3\weapons_f\Ammo\flare_white.p3d";
		displayName = "flare_white";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_flare_yellow : acd_decor_base {
		model = "a3\weapons_f\Ammo\flare_yellow.p3d";
		displayName = "flare_yellow";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Handgrenade : acd_decor_base {
		model = "a3\weapons_f\Ammo\Handgrenade.p3d";
		displayName = "Handgrenade";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mag_univ : acd_decor_base {
		model = "a3\weapons_f\Ammo\mag_univ.p3d";
		displayName = "mag_univ";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mini_frag : acd_decor_base {
		model = "a3\weapons_f\Ammo\mini_frag.p3d";
		displayName = "mini_frag";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AA_01_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Missile_AA_01_F.p3d";
		displayName = "Missile_AA_01_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AA_01_fly_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Missile_AA_01_fly_F.p3d";
		displayName = "Missile_AA_01_fly_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AA_02_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Missile_AA_02_F.p3d";
		displayName = "Missile_AA_02_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AA_02_fly_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Missile_AA_02_fly_F.p3d";
		displayName = "Missile_AA_02_fly_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AT_01_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Missile_AT_01_F.p3d";
		displayName = "Missile_AT_01_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AT_01_proxy_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Missile_AT_01_proxy_F.p3d";
		displayName = "Missile_AT_01_proxy_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AT_02_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Missile_AT_02_F.p3d";
		displayName = "Missile_AT_02_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AT_02_fly_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Missile_AT_02_fly_F.p3d";
		displayName = "Missile_AT_02_fly_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AT_03_fly_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Missile_AT_03_fly_F.p3d";
		displayName = "Missile_AT_03_fly_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Rocket_01_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Rocket_01_F.p3d";
		displayName = "Rocket_01_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Rocket_01_fly_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Rocket_01_fly_F.p3d";
		displayName = "Rocket_01_fly_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Rocket_02_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Rocket_02_F.p3d";
		displayName = "Rocket_02_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Rocket_02_fly_F : acd_decor_base {
		model = "a3\weapons_f\Ammo\Rocket_02_fly_F.p3d";
		displayName = "Rocket_02_fly_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_shell : acd_decor_base {
		model = "a3\weapons_f\Ammo\shell.p3d";
		displayName = "shell";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_shell_smoke : acd_decor_base {
		model = "a3\weapons_f\Ammo\shell_smoke.p3d";
		displayName = "shell_smoke";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_smokegrenade_blue : acd_decor_base {
		model = "a3\weapons_f\Ammo\smokegrenade_blue.p3d";
		displayName = "smokegrenade_blue";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_smokegrenade_green : acd_decor_base {
		model = "a3\weapons_f\Ammo\smokegrenade_green.p3d";
		displayName = "smokegrenade_green";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_smokegrenade_orange : acd_decor_base {
		model = "a3\weapons_f\Ammo\smokegrenade_orange.p3d";
		displayName = "smokegrenade_orange";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_smokegrenade_purple : acd_decor_base {
		model = "a3\weapons_f\Ammo\smokegrenade_purple.p3d";
		displayName = "smokegrenade_purple";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_smokegrenade_red : acd_decor_base {
		model = "a3\weapons_f\Ammo\smokegrenade_red.p3d";
		displayName = "smokegrenade_red";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_smokegrenade_white : acd_decor_base {
		model = "a3\weapons_f\Ammo\smokegrenade_white.p3d";
		displayName = "smokegrenade_white";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_smokegrenade_yellow : acd_decor_base {
		model = "a3\weapons_f\Ammo\smokegrenade_yellow.p3d";
		displayName = "smokegrenade_yellow";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_UGL_Flare : acd_decor_base {
		model = "a3\weapons_f\Ammo\UGL_Flare.p3d";
		displayName = "UGL_Flare";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_UGL_slug : acd_decor_base {
		model = "a3\weapons_f\Ammo\UGL_slug.p3d";
		displayName = "UGL_slug";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_binoculars_proxy : acd_decor_base {
		model = "a3\weapons_f\binocular\binoculars_proxy.p3d";
		displayName = "binoculars_proxy";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_laserdesignator_02_f : acd_decor_base {
		model = "a3\weapons_f\binocular\laserdesignator_02_f.p3d";
		displayName = "laserdesignator_02_f";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_laserdesignator_03_F : acd_decor_base {
		model = "a3\weapons_f\binocular\laserdesignator_03_F.p3d";
		displayName = "laserdesignator_03_F";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_laserdesignator_f : acd_decor_base {
		model = "a3\weapons_f\binocular\laserdesignator_f.p3d";
		displayName = "laserdesignator_f";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_LTLM : acd_decor_base {
		model = "a3\weapons_f\binocular\LTLM.p3d";
		displayName = "LTLM";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_NVG_helmet_off : acd_decor_base {
		model = "a3\weapons_f\binocular\NVG_helmet_off.p3d";
		displayName = "NVG_helmet_off";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_NVG_helmet_on : acd_decor_base {
		model = "a3\weapons_f\binocular\NVG_helmet_on.p3d";
		displayName = "NVG_helmet_on";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_NVG_proxy : acd_decor_base {
		model = "a3\weapons_f\binocular\NVG_proxy.p3d";
		displayName = "NVG_proxy";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_NVG_proxy_INDEP : acd_decor_base {
		model = "a3\weapons_f\binocular\NVG_proxy_INDEP.p3d";
		displayName = "NVG_proxy_INDEP";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_NVG_proxy_off : acd_decor_base {
		model = "a3\weapons_f\binocular\NVG_proxy_off.p3d";
		displayName = "NVG_proxy_off";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_NVG_proxy_off_INDEP : acd_decor_base {
		model = "a3\weapons_f\binocular\NVG_proxy_off_INDEP.p3d";
		displayName = "NVG_proxy_off_INDEP";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_NVG_proxy_off_OPFOR : acd_decor_base {
		model = "a3\weapons_f\binocular\NVG_proxy_off_OPFOR.p3d";
		displayName = "NVG_proxy_off_OPFOR";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_NVG_proxy_OPFOR : acd_decor_base {
		model = "a3\weapons_f\binocular\NVG_proxy_OPFOR.p3d";
		displayName = "NVG_proxy_OPFOR";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_c4_charge_small : acd_decor_base {
		model = "a3\weapons_f\explosives\c4_charge_small.p3d";
		displayName = "c4_charge_small";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_c4_charge_small_d : acd_decor_base {
		model = "a3\weapons_f\explosives\c4_charge_small_d.p3d";
		displayName = "c4_charge_small_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_c4_charge_small_i : acd_decor_base {
		model = "a3\weapons_f\explosives\c4_charge_small_i.p3d";
		displayName = "c4_charge_small_i";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Flare_tripwire : acd_decor_base {
		model = "a3\weapons_f\explosives\Flare_tripwire.p3d";
		displayName = "Flare_tripwire";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Flare_tripwire_d : acd_decor_base {
		model = "a3\weapons_f\explosives\Flare_tripwire_d.p3d";
		displayName = "Flare_tripwire_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Flare_tripwire_i : acd_decor_base {
		model = "a3\weapons_f\explosives\Flare_tripwire_i.p3d";
		displayName = "Flare_tripwire_i";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_IED_land_big : acd_decor_base {
		model = "a3\weapons_f\explosives\IED_land_big.p3d";
		displayName = "IED_land_big";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_IED_land_big_d : acd_decor_base {
		model = "a3\weapons_f\explosives\IED_land_big_d.p3d";
		displayName = "IED_land_big_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_IED_land_big_i : acd_decor_base {
		model = "a3\weapons_f\explosives\IED_land_big_i.p3d";
		displayName = "IED_land_big_i";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_IED_land_small : acd_decor_base {
		model = "a3\weapons_f\explosives\IED_land_small.p3d";
		displayName = "IED_land_small";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_IED_land_small_d : acd_decor_base {
		model = "a3\weapons_f\explosives\IED_land_small_d.p3d";
		displayName = "IED_land_small_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_IED_land_small_i : acd_decor_base {
		model = "a3\weapons_f\explosives\IED_land_small_i.p3d";
		displayName = "IED_land_small_i";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_IED_urban_big : acd_decor_base {
		model = "a3\weapons_f\explosives\IED_urban_big.p3d";
		displayName = "IED_urban_big";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_IED_urban_big_d : acd_decor_base {
		model = "a3\weapons_f\explosives\IED_urban_big_d.p3d";
		displayName = "IED_urban_big_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_IED_urban_big_i : acd_decor_base {
		model = "a3\weapons_f\explosives\IED_urban_big_i.p3d";
		displayName = "IED_urban_big_i";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_IED_urban_small : acd_decor_base {
		model = "a3\weapons_f\explosives\IED_urban_small.p3d";
		displayName = "IED_urban_small";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_IED_urban_small_d : acd_decor_base {
		model = "a3\weapons_f\explosives\IED_urban_small_d.p3d";
		displayName = "IED_urban_small_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_IED_urban_small_i : acd_decor_base {
		model = "a3\weapons_f\explosives\IED_urban_small_i.p3d";
		displayName = "IED_urban_small_i";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AP : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AP.p3d";
		displayName = "mine_AP";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AP_bouncing : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AP_bouncing.p3d";
		displayName = "mine_AP_bouncing";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AP_bouncing_d : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AP_bouncing_d.p3d";
		displayName = "mine_AP_bouncing_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AP_bouncing_i : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AP_bouncing_i.p3d";
		displayName = "mine_AP_bouncing_i";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AP_d : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AP_d.p3d";
		displayName = "mine_AP_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AP_i : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AP_i.p3d";
		displayName = "mine_AP_i";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AP_miniclaymore : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AP_miniclaymore.p3d";
		displayName = "mine_AP_miniclaymore";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AP_miniclaymore_d : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AP_miniclaymore_d.p3d";
		displayName = "mine_AP_miniclaymore_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AP_miniclaymore_i : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AP_miniclaymore_i.p3d";
		displayName = "mine_AP_miniclaymore_i";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AP_tripwire : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AP_tripwire.p3d";
		displayName = "mine_AP_tripwire";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AP_tripwire_d : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AP_tripwire_d.p3d";
		displayName = "mine_AP_tripwire_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AT : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AT.p3d";
		displayName = "mine_AT";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AT_d : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AT_d.p3d";
		displayName = "mine_AT_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_AT_i : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_AT_i.p3d";
		displayName = "mine_AT_i";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_naval : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_naval.p3d";
		displayName = "mine_naval";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_naval2 : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_naval2.p3d";
		displayName = "mine_naval2";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_naval2_d : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_naval2_d.p3d";
		displayName = "mine_naval2_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_naval3 : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_naval3.p3d";
		displayName = "mine_naval3";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_naval3_d : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_naval3_d.p3d";
		displayName = "mine_naval3_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_naval_d : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_naval_d.p3d";
		displayName = "mine_naval_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_SLAM_directional : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_SLAM_directional.p3d";
		displayName = "mine_SLAM_directional";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_SLAM_directional_d : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_SLAM_directional_d.p3d";
		displayName = "mine_SLAM_directional_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_mine_SLAM_directional_i : acd_decor_base {
		model = "a3\weapons_f\explosives\mine_SLAM_directional_i.p3d";
		displayName = "mine_SLAM_directional_i";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_satchel : acd_decor_base {
		model = "a3\weapons_f\explosives\satchel.p3d";
		displayName = "satchel";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_satchel_d : acd_decor_base {
		model = "a3\weapons_f\explosives\satchel_d.p3d";
		displayName = "satchel_d";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_satchel_i : acd_decor_base {
		model = "a3\weapons_f\explosives\satchel_i.p3d";
		displayName = "satchel_i";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_FirstAidkit : acd_decor_base {
		model = "a3\weapons_f\items\FirstAidkit.p3d";
		displayName = "FirstAidkit";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_gps : acd_decor_base {
		model = "a3\weapons_f\items\gps.p3d";
		displayName = "gps";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_Medikit : acd_decor_base {
		model = "a3\weapons_f\items\Medikit.p3d";
		displayName = "Medikit";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_Minedetector : acd_decor_base {
		model = "a3\weapons_f\items\Minedetector.p3d";
		displayName = "Minedetector";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_Toolkit : acd_decor_base {
		model = "a3\weapons_f\items\Toolkit.p3d";
		displayName = "Toolkit";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_pg32v_rocket_item : acd_decor_base {
		model = "a3\weapons_f\launchers\rpg32\pg32v_rocket_item.p3d";
		displayName = "pg32v_rocket_item";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_tbg32v_rocket_item : acd_decor_base {
		model = "a3\weapons_f\launchers\rpg32\tbg32v_rocket_item.p3d";
		displayName = "tbg32v_rocket_item";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_rake : acd_decor_base {
		model = "a3\weapons_f\mines\rake.p3d";
		displayName = "rake";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_titan_missile_ap : acd_decor_base {
		model = "a3\weapons_f_beta\Launchers\Titan\titan_missile_ap.p3d";
		displayName = "titan_missile_ap";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_titan_missile_at : acd_decor_base {
		model = "a3\weapons_f_beta\Launchers\Titan\titan_missile_at.p3d";
		displayName = "titan_missile_at";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_titan_missile_atl : acd_decor_base {
		model = "a3\weapons_f_beta\Launchers\Titan\titan_missile_atl.p3d";
		displayName = "titan_missile_atl";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Ammobox_02_F : acd_decor_base {
		model = "a3\weapons_f_bootcamp\Ammoboxes\Ammobox_02_F.p3d";
		displayName = "FIA Ammo Cache";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Itembox_02_F : acd_decor_base {
		model = "a3\weapons_f_bootcamp\Ammoboxes\Itembox_02_F.p3d";
		displayName = "FIA Equipment Cache";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Weaponsbox_02_F : acd_decor_base {
		model = "a3\weapons_f_bootcamp\Ammoboxes\Weaponsbox_02_F.p3d";
		displayName = "Weaponsbox_02_F";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Bomb_03_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Bomb_03_F.p3d";
		displayName = "Bomb_03_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Bomb_04_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Bomb_04_F.p3d";
		displayName = "Bomb_04_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AA_03_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Missile_AA_03_F.p3d";
		displayName = "Missile_AA_03_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AA_04_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Missile_AA_04_F.p3d";
		displayName = "Missile_AA_04_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AA_04_Pod_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Missile_AA_04_Pod_F.p3d";
		displayName = "Missile_AA_04_Pod_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AGM_01_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Missile_AGM_01_F.p3d";
		displayName = "Missile_AGM_01_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AGM_02_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Missile_AGM_02_F.p3d";
		displayName = "Missile_AGM_02_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Missile_AGM_02_Pod_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Missile_AGM_02_Pod_F.p3d";
		displayName = "Missile_AGM_02_Pod_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Rocket_03_AP_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Rocket_03_AP_F.p3d";
		displayName = "Rocket_03_AP_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Rocket_03_FL_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Rocket_03_FL_F.p3d";
		displayName = "Rocket_03_FL_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Rocket_03_HE_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Rocket_03_HE_F.p3d";
		displayName = "Rocket_03_HE_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Rocket_04_AP_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Rocket_04_AP_F.p3d";
		displayName = "Rocket_04_AP_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Rocket_04_FL_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Rocket_04_FL_F.p3d";
		displayName = "Rocket_04_FL_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Rocket_04_HE_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Rocket_04_HE_F.p3d";
		displayName = "Rocket_04_HE_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Rocket_Pod_01_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Rocket_Pod_01_F.p3d";
		displayName = "Rocket_Pod_01_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Rocket_Pod_02_F : acd_decor_base {
		model = "a3\weapons_f_epc\Ammo\Rocket_Pod_02_F.p3d";
		displayName = "Rocket_Pod_02_F";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_Heli_Attack_01_wreck_F : acd_decor_base {
		model = "a3\air_f_beta\Heli_Attack_01\Heli_Attack_01_wreck_F.p3d";
		displayName = "Heli_Attack_01_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Heli_Transport_03_wreck_F : acd_decor_base {
		model = "a3\air_f_heli\Heli_Transport_03\Heli_Transport_03_wreck_F.p3d";
		displayName = "Heli_Transport_03_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Heli_Transport_04_box_wreck_F : acd_decor_base {
		model = "a3\air_f_heli\Heli_Transport_04\Heli_Transport_04_box_wreck_F.p3d";
		displayName = "Heli_Transport_04_box_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Heli_Transport_04_fuel_wreck_F : acd_decor_base {
		model = "a3\air_f_heli\Heli_Transport_04\Heli_Transport_04_fuel_wreck_F.p3d";
		displayName = "Heli_Transport_04_fuel_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Heli_Transport_04_wreck_F : acd_decor_base {
		model = "a3\air_f_heli\Heli_Transport_04\Heli_Transport_04_wreck_F.p3d";
		displayName = "Heli_Transport_04_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_MBT_01_wreck_F : acd_decor_base {
		model = "a3\armor_f_gamma\mbt_01\MBT_01_wreck_F.p3d";
		displayName = "MBT_01_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_MBT_02_wreck_F : acd_decor_base {
		model = "a3\armor_f_gamma\mbt_02\MBT_02_wreck_F.p3d";
		displayName = "MBT_02_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_AirconCondenser_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Civ\Accessories\AirconCondenser_01_F.p3d";
		displayName = "Aircon Condenser";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_GasTank_01_blue_F : acd_decor_base {
		model = "a3\structures_f_heli\Civ\Constructions\GasTank_01_blue_F.p3d";
		displayName = "Gas Tank (Blue)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_GasTank_01_khaki_F : acd_decor_base {
		model = "a3\structures_f_heli\Civ\Constructions\GasTank_01_khaki_F.p3d";
		displayName = "Gas Tank (Khaki)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_GasTank_01_yellow_F : acd_decor_base {
		model = "a3\structures_f_heli\Civ\Constructions\GasTank_01_yellow_F.p3d";
		displayName = "Gas Tank (Yellow)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_GasTank_02_F : acd_decor_base {
		model = "a3\structures_f_heli\Civ\Constructions\GasTank_02_F.p3d";
		displayName = "Welding Tank";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_MobileScafolding_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Civ\Constructions\MobileScafolding_01_F.p3d";
		displayName = "Wheeled Scaffolding";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_ToolTrolley_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Civ\Constructions\ToolTrolley_01_F.p3d";
		displayName = "Tool Cart (Red)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_ToolTrolley_02_F : acd_decor_base {
		model = "a3\structures_f_heli\Civ\Constructions\ToolTrolley_02_F.p3d";
		displayName = "Tool Cart (Blue)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_WeldingTrolley_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Civ\Constructions\WeldingTrolley_01_F.p3d";
		displayName = "Welding Cart";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_WheelieBin_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Civ\Garbage\WheelieBin_01_F.p3d";
		displayName = "Wheelie Bin";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_PalletTrolley_01_khaki_F : acd_decor_base {
		model = "a3\structures_f_heli\Civ\Market\PalletTrolley_01_khaki_F.p3d";
		displayName = "Pallet Trolley (Khaki)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_PalletTrolley_01_yellow_F : acd_decor_base {
		model = "a3\structures_f_heli\Civ\Market\PalletTrolley_01_yellow_F.p3d";
		displayName = "Pallet Trolley (Yellow)";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_OfficeCabinet_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Furniture\OfficeCabinet_01_F.p3d";
		displayName = "Office Cabinet";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_OfficeChair_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Furniture\OfficeChair_01_F.p3d";
		displayName = "Office Chair";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_OfficeTable_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Furniture\OfficeTable_01_F.p3d";
		displayName = "Office Table";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_RattanChair_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Furniture\RattanChair_01_F.p3d";
		displayName = "Rattan Chair";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_RattanTable_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Furniture\RattanTable_01_F.p3d";
		displayName = "Rattan Table";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_Workbench_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Furniture\Workbench_01_F.p3d";
		displayName = "Workbench";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_MobileLandingPlatform_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Ind\Airport\MobileLandingPlatform_01_F.p3d";
		displayName = "Mobile Landing Platform";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_DieselGroundPowerUnit_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Ind\Machines\DieselGroundPowerUnit_01_F.p3d";
		displayName = "Diesel Ground Power Unit";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_EngineCrane_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Ind\Machines\EngineCrane_01_F.p3d";
		displayName = "Portable Engine Crane";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_JetEngineStarter_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Ind\Machines\JetEngineStarter_01_F.p3d";
		displayName = "Jet Engine Air Start Unit";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_PressureWasher_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Ind\Machines\PressureWasher_01_F.p3d";
		displayName = "Pressure Washer";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_WaterPump_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Ind\Machines\WaterPump_01_F.p3d";
		displayName = "Water Pump";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_AirIntakePlug_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Airport\AirIntakePlug_01_F.p3d";
		displayName = "Air Intake Plug (Ghosthawk)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_AirIntakePlug_02_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Airport\AirIntakePlug_02_F.p3d";
		displayName = "Air Intake Plug (Huron)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_AirIntakePlug_03_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Airport\AirIntakePlug_03_F.p3d";
		displayName = "Air Intake Plug (Kajman)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_AirIntakePlug_04_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Airport\AirIntakePlug_04_F.p3d";
		displayName = "Air Intake Plug (Taru)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_AirIntakePlug_05_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Airport\AirIntakePlug_05_F.p3d";
		displayName = "Air Intake Plug (Hellcat)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_DischargeStick_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Airport\DischargeStick_01_F.p3d";
		displayName = "Discharge Stick";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_HelicopterWheels_01_assembled_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Airport\HelicopterWheels_01_assembled_F.p3d";
		displayName = "Helicopter Wheels (Assembled)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_HelicopterWheels_01_disassembled_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Airport\HelicopterWheels_01_disassembled_F.p3d";
		displayName = "Helicopter Wheels (Disassembled)";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_PitotTubeCover_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Airport\PitotTubeCover_01_F.p3d";
		displayName = "Pitot Tube Cover";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_PortableHelipadLight_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Airport\PortableHelipadLight_01_F.p3d";
		displayName = "Portable Helipad Light";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_RotorCoversBag_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Airport\RotorCoversBag_01_F.p3d";
		displayName = "Rotor Covers Bag";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_Camera_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\Camera_01_F.p3d";
		displayName = "Camera";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_FlatTV_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\FlatTV_01_F.p3d";
		displayName = "Flat TV";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Fridge_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\Fridge_01_F.p3d";
		displayName = "Refrigerator";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_GamingSet_01_camera_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\GamingSet_01_camera_F.p3d";
		displayName = "Gaming Set (Camera)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_GamingSet_01_console_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\GamingSet_01_console_F.p3d";
		displayName = "Gaming Set (Console)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_GamingSet_01_controller_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\GamingSet_01_controller_F.p3d";
		displayName = "Gaming Set (Controller)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_GamingSet_01_powerSupply_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\GamingSet_01_powerSupply_F.p3d";
		displayName = "Gaming Set (Power Supply)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_HDMICable_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\HDMICable_01_F.p3d";
		displayName = "HDMI Cable";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Microwave_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\Microwave_01_F.p3d";
		displayName = "Microwave Oven";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PCSet_01_case_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\PCSet_01_case_F.p3d";
		displayName = "PC Set (Case)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PCSet_01_keyboard_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\PCSet_01_keyboard_F.p3d";
		displayName = "PC Set (Keyboard)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PCSet_01_mouse_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\PCSet_01_mouse_F.p3d";
		displayName = "PC Set (Mouse)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PCSet_01_screen_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\PCSet_01_screen_F.p3d";
		displayName = "PC Set (Screen)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_PortableSpeakers_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\PortableSpeakers_01_F.p3d";
		displayName = "Portable Speakers";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Printer_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\Printer_01_F.p3d";
		displayName = "Printer";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Projector_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\Projector_01_F.p3d";
		displayName = "Projector";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Tablet_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Electronics\Tablet_01_F.p3d";
		displayName = "Tablet";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Ketchup_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Food\Ketchup_01_F.p3d";
		displayName = "Ketchup Bottle";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Mustard_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Food\Mustard_01_F.p3d";
		displayName = "Mustard Bottle";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Tableware_01_cup_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Food\Tableware_01_cup_F.p3d";
		displayName = "Plastic Cup";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Tableware_01_fork_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Food\Tableware_01_fork_F.p3d";
		displayName = "Disposable Fork";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Tableware_01_knife_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Food\Tableware_01_knife_F.p3d";
		displayName = "Disposable Knife";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Tableware_01_napkin_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Food\Tableware_01_napkin_F.p3d";
		displayName = "Napkin";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Tableware_01_spoon_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Food\Tableware_01_spoon_F.p3d";
		displayName = "Disposable Spoon";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Tableware_01_stackOfNapkins_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Food\Tableware_01_stackOfNapkins_F.p3d";
		displayName = "Napkin Stack";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Tableware_01_tray_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Food\Tableware_01_tray_F.p3d";
		displayName = "Plastic Serving Tray";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_MetalCase_01_large_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Luggage\MetalCase_01_large_F.p3d";
		displayName = "Metal Case (Large)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_MetalCase_01_medium_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Luggage\MetalCase_01_medium_F.p3d";
		displayName = "Metal Case (Medium)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_MetalCase_01_small_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Luggage\MetalCase_01_small_F.p3d";
		displayName = "Metal Case (Small)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_PlasticCase_01_large_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Luggage\PlasticCase_01_large_F.p3d";
		displayName = "Plastic Case (Large)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_PlasticCase_01_medium_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Luggage\PlasticCase_01_medium_F.p3d";
		displayName = "Plastic Case (Medium)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_PlasticCase_01_small_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Luggage\PlasticCase_01_small_F.p3d";
		displayName = "Plastic Case (Small)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_BaseballMitt_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Sport\BaseballMitt_01_F.p3d";
		displayName = "Baseball Mitt";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Baseball_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Sport\Baseball_01_F.p3d";
		displayName = "Baseball";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Basketball_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Sport\Basketball_01_F.p3d";
		displayName = "Basketball";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Football_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Sport\Football_01_F.p3d";
		displayName = "Football";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Rugbyball_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Sport\Rugbyball_01_F.p3d";
		displayName = "Rugby Ball";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Volleyball_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Sport\Volleyball_01_F.p3d";
		displayName = "Volleyball";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Rope_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Tools\Rope_01_F.p3d";
		displayName = "Rigging Rope";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_WheelChock_01_F : acd_decor_base {
		model = "a3\structures_f_heli\Items\Tools\WheelChock_01_F.p3d";
		displayName = "Wheel Chock";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Oil_spill : acd_decor_base {
		model = "a3\structures_f_kart\Civ\SportsGrounds\Oil_spill.p3d";
		displayName = "Oil Spill";
		editorSubcategory = "acd_decorations_terEffects";
	};
	class acd_PlasticBarrier_02_F : acd_decor_base {
		model = "a3\structures_f_kart\Civ\SportsGrounds\PlasticBarrier_02_F.p3d";
		displayName = "Plastic Barrier";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_PlasticBarrier_03_F : acd_decor_base {
		model = "a3\structures_f_kart\Civ\SportsGrounds\PlasticBarrier_03_F.p3d";
		displayName = "Plastic Barrier";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_ShotTimer_01_F : acd_decor_base {
		model = "a3\structures_f_mark\Items\Military\ShotTimer_01_F.p3d";
		displayName = "Shot Timer";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_AirHorn_01_F : acd_decor_base {
		model = "a3\structures_f_mark\Items\Sport\AirHorn_01_F.p3d";
		displayName = "Air Horn";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Balloon_01_air_F : acd_decor_base {
		model = "a3\structures_f_mark\Items\Sport\Balloon_01_air_F.p3d";
		displayName = "Balloon (Air)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_Balloon_01_water_F : acd_decor_base {
		model = "a3\structures_f_mark\Items\Sport\Balloon_01_water_F.p3d";
		displayName = "Balloon (Water)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_BulletTrap_01_F : acd_decor_base {
		model = "a3\structures_f_mark\Training\BulletTrap_01_F.p3d";
		displayName = "Bullet Trap";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_ShootingMat_01_F : acd_decor_base {
		model = "a3\structures_f_mark\Training\ShootingMat_01_F.p3d";
		displayName = "Shooting Mat";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_ShootingMat_01_folded_F : acd_decor_base {
		model = "a3\structures_f_mark\Training\ShootingMat_01_folded_F.p3d";
		displayName = "Shooting Mat (Folded)";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_Target_Dueling_01_F : acd_decor_base {
		model = "a3\structures_f_mark\Training\Target_Dueling_01_F.p3d";
		displayName = "Dueling Target";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_Target_Swivel_01_F : acd_decor_base {
		model = "a3\structures_f_mark\Training\Target_Swivel_01_F.p3d";
		displayName = "Swivel Target";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_CargoNet_01_ammo_F : acd_decor_base {
		model = "a3\supplies_f_heli\CargoNets\CargoNet_01_ammo_F.p3d";
		displayName = "Ammoboxes";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_CargoNet_01_barrels_F : acd_decor_base {
		model = "a3\supplies_f_heli\CargoNets\CargoNet_01_barrels_F.p3d";
		displayName = "Cargo Net (Barrels)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_CargoNet_01_box_F : acd_decor_base {
		model = "a3\supplies_f_heli\CargoNets\CargoNet_01_box_F.p3d";
		displayName = "Cargo Net (Box)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_FlexibleTank_01_F : acd_decor_base {
		model = "a3\supplies_f_heli\Fuel\FlexibleTank_01_F.p3d";
		displayName = "FlexibleTank_01_F";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_Heli_Light_01_wreck_F : acd_decor_base {
		model = "a3\air_f\Heli_Light_01\Heli_Light_01_wreck_F.p3d";
		displayName = "Heli_Light_01_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Heli_Light_02_wreck_F : acd_decor_base {
		model = "a3\air_f\Heli_Light_02\Heli_Light_02_wreck_F.p3d";
		displayName = "Heli_Light_02_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Heli_Attack_02_wreck_F : acd_decor_base {
		model = "a3\air_f_beta\Heli_Attack_02\Heli_Attack_02_wreck_F.p3d";
		displayName = "Heli_Attack_02_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Heli_Transport_01_wreck_F : acd_decor_base {
		model = "a3\air_f_beta\heli_transport_01\Heli_Transport_01_wreck_F.p3d";
		displayName = "Heli_Transport_01_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Heli_Transport_02_wreck_F : acd_decor_base {
		model = "a3\air_f_beta\Heli_Transport_02\Heli_Transport_02_wreck_F.p3d";
		displayName = "Heli_Transport_02_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Heli_Light_03_Wreck_F : acd_decor_base {
		model = "a3\air_f_epb\Heli_Light_03\Heli_Light_03_Wreck_F.p3d";
		displayName = "Heli_Light_03_Wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Plane_cas_01_wreck_F : acd_decor_base {
		model = "a3\air_f_epc\Plane_CAS_01\Plane_cas_01_wreck_F.p3d";
		displayName = "Plane_cas_01_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Plane_cas_02_wreck_F : acd_decor_base {
		model = "a3\air_f_epc\Plane_CAS_02\Plane_cas_02_wreck_F.p3d";
		displayName = "Plane_cas_02_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Plane_Fighter_03_wreck_F : acd_decor_base {
		model = "a3\air_f_gamma\Plane_Fighter_03\Plane_Fighter_03_wreck_F.p3d";
		displayName = "Wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_APC_Tracked_01_wreck_F : acd_decor_base {
		model = "a3\armor_f_beta\apc_tracked_01\APC_Tracked_01_wreck_F.p3d";
		displayName = "APC_Tracked_01_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_APC_Tracked_02_aa_wreck_F : acd_decor_base {
		model = "a3\armor_f_beta\apc_tracked_02\APC_Tracked_02_aa_wreck_F.p3d";
		displayName = "APC_Tracked_02_aa_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_APC_Tracked_02_cannon_wreck_F : acd_decor_base {
		model = "a3\armor_f_beta\apc_tracked_02\APC_Tracked_02_cannon_wreck_F.p3d";
		displayName = "APC_Tracked_02_cannon_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_APC_tracked_03_wreck_F : acd_decor_base {
		model = "a3\armor_f_epb\APC_Tracked_03\APC_tracked_03_wreck_F.p3d";
		displayName = "APC_tracked_03_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_MBT_03_wreck_F : acd_decor_base {
		model = "a3\armor_f_epb\mbt_03\MBT_03_wreck_F.p3d";
		displayName = "MBT_03_wreck_F";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_Boat_Civil_04_F : acd_decor_base {
		model = "a3\boat_f_gamma\Boat_Civil_04\Boat_Civil_04_F.p3d";
		displayName = "Boat_Civil_04_F";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_UAV_01_F : acd_decor_base {
		model = "a3\drones_f\Air_F_Gamma\UAV_01\UAV_01_F.p3d";
		displayName = "AR-2 Darter";
		editorSubcategory = "acd_decorations_misc";
	};


	class acd_container_base : acd_decor_base {
		editorCategory = "acd_containers";
		vehicleClass = "ACD containers";
		maximumLoad = 3000;
		transportMaxBackpacks = 1;
		transportmaxmagazines = 1;
		transportmaxweapons = 1;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		icon = "armaContainersAndDecorations\textures\container.paa";
	};	
	class acd_container15k_base : acd_container_base {
		editorCategory = "acd_containers15k";
		vehicleClass = "ACD containers 15k";
		maximumLoad = 15000;
		icon = "armaContainersAndDecorations\textures\container15k.paa";
	};
	class acd_C_FieldToilet_F : acd_container_base {
		model = "a3\structures_f\civ\Camping\FieldToilet_F.p3d";
		displayName = "Field Toilet";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 10700;
	};
	class acd_C15k_FieldToilet_F : acd_container15k_base {
		model = "a3\structures_f\civ\Camping\FieldToilet_F.p3d";
		displayName = "Field Toilet (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_ToiletBox_F : acd_container_base {
		model = "a3\structures_f\civ\Camping\ToiletBox_F.p3d";
		displayName = "Toiletbox";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 10700;
	};
	class acd_C15k_ToiletBox_F : acd_container15k_base {
		model = "a3\structures_f\civ\Camping\ToiletBox_F.p3d";
		displayName = "Toiletbox (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_TentA_F : acd_container_base {
		model = "a3\structures_f\civ\Camping\TentA_F.p3d";
		displayName = "Tent (A-shape)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 6000;
	};
	class acd_C15k_TentA_F : acd_container15k_base {
		model = "a3\structures_f\civ\Camping\TentA_F.p3d";
		displayName = "Tent (A-shape) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_TentDome_F : acd_container_base {
		model = "a3\structures_f\civ\Camping\TentDome_F.p3d";
		displayName = "Tent (Dome-shape)";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 5000;
	};
	class acd_C15k_TentDome_F : acd_container15k_base {
		model = "a3\structures_f\civ\Camping\TentDome_F.p3d";
		displayName = "Tent (Dome-shape) (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_WoodenBox_F : acd_container_base {
		model = "a3\structures_f\civ\Constructions\WoodenBox_F.p3d";
		displayName = "Wooden Box";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1500;
	};
	class acd_C15k_WoodenBox_F : acd_container15k_base {
		model = "a3\structures_f\civ\Constructions\WoodenBox_F.p3d";
		displayName = "Wooden Box (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Grave_V1_F : acd_container_base {
		model = "a3\structures_f\civ\Dead\Grave_V1_F.p3d";
		displayName = "Grave (Stone, v1)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 19100;
	};
	class acd_C15k_Grave_V1_F : acd_container15k_base {
		model = "a3\structures_f\civ\Dead\Grave_V1_F.p3d";
		displayName = "Grave (Stone, v1) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Grave_V2_F : acd_container_base {
		model = "a3\structures_f\civ\Dead\Grave_V2_F.p3d";
		displayName = "Grave (Stone, v2)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 20000;
	};
	class acd_C15k_Grave_V2_F : acd_container15k_base {
		model = "a3\structures_f\civ\Dead\Grave_V2_F.p3d";
		displayName = "Grave (Stone, v2) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Grave_V3_F : acd_container_base {
		model = "a3\structures_f\civ\Dead\Grave_V3_F.p3d";
		displayName = "Grave (Stone, v3)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 20000;
	};
	class acd_C15k_Grave_V3_F : acd_container15k_base {
		model = "a3\structures_f\civ\Dead\Grave_V3_F.p3d";
		displayName = "Grave (Stone, v3) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_HumanSkeleton_F : acd_container_base {
		model = "a3\structures_f\civ\Dead\HumanSkeleton_F.p3d";
		displayName = "Skeleton";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 2000;
	};
	class acd_C15k_HumanSkeleton_F : acd_container15k_base {
		model = "a3\structures_f\civ\Dead\HumanSkeleton_F.p3d";
		displayName = "Skeleton (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_GarbageBags_F : acd_container_base {
		model = "a3\structures_f\civ\Garbage\GarbageBags_F.p3d";
		displayName = "Garbage (Bags)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 8000;
	};
	class acd_C15k_GarbageBags_F : acd_container15k_base {
		model = "a3\structures_f\civ\Garbage\GarbageBags_F.p3d";
		displayName = "Garbage (Bags) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_GarbagePallet_F : acd_container_base {
		model = "a3\structures_f\civ\Garbage\GarbagePallet_F.p3d";
		displayName = "Garbage Heap (Pallet)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 8000;
	};
	class acd_C15k_GarbagePallet_F : acd_container15k_base {
		model = "a3\structures_f\civ\Garbage\GarbagePallet_F.p3d";
		displayName = "Garbage Heap (Pallet) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_GarbageWashingMachine_F : acd_container_base {
		model = "a3\structures_f\civ\Garbage\GarbageWashingMachine_F.p3d";
		displayName = "Garbage Heap (Washing machine)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 8000;
	};
	class acd_C15k_GarbageWashingMachine_F : acd_container15k_base {
		model = "a3\structures_f\civ\Garbage\GarbageWashingMachine_F.p3d";
		displayName = "Garbage Heap (Washing machine) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_JunkPile_F : acd_container_base {
		model = "a3\structures_f\civ\Garbage\JunkPile_F.p3d";
		displayName = "Pile of Junk";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 8000;
	};
	class acd_C15k_JunkPile_F : acd_container15k_base {
		model = "a3\structures_f\civ\Garbage\JunkPile_F.p3d";
		displayName = "Pile of Junk (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Tyres_F : acd_container_base {
		model = "a3\structures_f\civ\Garbage\Tyres_F.p3d";
		displayName = "Tires (Heap)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 8000;
	};
	class acd_C15k_Tyres_F : acd_container15k_base {
		model = "a3\structures_f\civ\Garbage\Tyres_F.p3d";
		displayName = "Tires (Heap) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Cages_F : acd_container_base {
		model = "a3\structures_f\civ\Market\Cages_F.p3d";
		displayName = "Cages";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 4600;
	};
	class acd_C15k_Cages_F : acd_container15k_base {
		model = "a3\structures_f\civ\Market\Cages_F.p3d";
		displayName = "Cages (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_CratesShabby_F : acd_container_base {
		model = "a3\structures_f\civ\Market\CratesShabby_F.p3d";
		displayName = "Crates (Shabby)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1800;
	};
	class acd_C15k_CratesShabby_F : acd_container15k_base {
		model = "a3\structures_f\civ\Market\CratesShabby_F.p3d";
		displayName = "Crates (Shabby) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_CratesWooden_F : acd_container_base {
		model = "a3\structures_f\civ\Market\CratesWooden_F.p3d";
		displayName = "Crates (Wooden)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 8100;
	};
	class acd_C15k_CratesWooden_F : acd_container15k_base {
		model = "a3\structures_f\civ\Market\CratesWooden_F.p3d";
		displayName = "Crates (Wooden) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Sacks_goods_F : acd_container_base {
		model = "a3\structures_f\civ\Market\Sacks_goods_F.p3d";
		displayName = "Sacks (Full)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 3900;
	};
	class acd_C15k_Sacks_goods_F : acd_container15k_base {
		model = "a3\structures_f\civ\Market\Sacks_goods_F.p3d";
		displayName = "Sacks (Full) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Sacks_heap_F : acd_container_base {
		model = "a3\structures_f\civ\Market\Sacks_heap_F.p3d";
		displayName = "Sacks (Heap)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 3000;
	};
	class acd_C15k_Sacks_heap_F : acd_container15k_base {
		model = "a3\structures_f\civ\Market\Sacks_heap_F.p3d";
		displayName = "Sacks (Heap) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Sack_F : acd_container_base {
		model = "a3\structures_f\civ\Market\Sack_F.p3d";
		displayName = "Sack";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 800;
	};
	class acd_C15k_Sack_F : acd_container15k_base {
		model = "a3\structures_f\civ\Market\Sack_F.p3d";
		displayName = "Sack (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_StallWater_F : acd_container_base {
		model = "a3\structures_f\civ\Market\StallWater_F.p3d";
		displayName = "Stall (Water)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 5300;
	};
	class acd_C15k_StallWater_F : acd_container15k_base {
		model = "a3\structures_f\civ\Market\StallWater_F.p3d";
		displayName = "Stall (Water) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_CargoBox_V1_F : acd_container_base {
		model = "a3\structures_f\ind\Cargo\CargoBox_V1_F.p3d";
		displayName = "Cargo Box";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 5300;
	};
	class acd_C15k_CargoBox_V1_F : acd_container15k_base {
		model = "a3\structures_f\ind\Cargo\CargoBox_V1_F.p3d";
		displayName = "Cargo Box (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Tank_rust_F : acd_container_base {
		model = "a3\structures_f\ind\tank\Tank_rust_F.p3d";
		displayName = "Rusty Cistern";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 66700;
	};
	class acd_C15k_Tank_rust_F : acd_container15k_base {
		model = "a3\structures_f\ind\tank\Tank_rust_F.p3d";
		displayName = "Rusty Cistern (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Suitcase_F : acd_container_base {
		model = "a3\structures_f\Items\Luggage\Suitcase_F.p3d";
		displayName = "Suitcase";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 100;
	};
	class acd_C15k_Suitcase_F : acd_container15k_base {
		model = "a3\structures_f\Items\Luggage\Suitcase_F.p3d";
		displayName = "Suitcase (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_BarrelEmpty_F : acd_container_base {
		model = "a3\structures_f\Items\Vessels\BarrelEmpty_F.p3d";
		displayName = "Plastic Barrel (Empty)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 300;
	};
	class acd_C15k_BarrelEmpty_F : acd_container15k_base {
		model = "a3\structures_f\Items\Vessels\BarrelEmpty_F.p3d";
		displayName = "Plastic Barrel (Empty) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_BucketNavy_F : acd_container_base {
		model = "a3\structures_f\Items\Vessels\BucketNavy_F.p3d";
		displayName = "Bucket (NAVY)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 100;
	};
	class acd_C15k_BucketNavy_F : acd_container15k_base {
		model = "a3\structures_f\Items\Vessels\BucketNavy_F.p3d";
		displayName = "Bucket (NAVY) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Bucket_clean_F : acd_container_base {
		model = "a3\structures_f\Items\Vessels\Bucket_clean_F.p3d";
		displayName = "Bucket (Clean)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 50;
	};
	class acd_C15k_Bucket_clean_F : acd_container15k_base {
		model = "a3\structures_f\Items\Vessels\Bucket_clean_F.p3d";
		displayName = "Bucket (Clean) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Bucket_F : acd_container_base {
		model = "a3\structures_f\Items\Vessels\Bucket_F.p3d";
		displayName = "Bucket";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 50;
	};
	class acd_C15k_Bucket_F : acd_container15k_base {
		model = "a3\structures_f\Items\Vessels\Bucket_F.p3d";
		displayName = "Bucket (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Bucket_painted_F : acd_container_base {
		model = "a3\structures_f\Items\Vessels\Bucket_painted_F.p3d";
		displayName = "Bucket (Paint)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 50;
	};
	class acd_C15k_Bucket_painted_F : acd_container15k_base {
		model = "a3\structures_f\Items\Vessels\Bucket_painted_F.p3d";
		displayName = "Bucket (Paint) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_MetalBarrel_empty_F : acd_container_base {
		model = "a3\structures_f\Items\Vessels\MetalBarrel_empty_F.p3d";
		displayName = "Metal Barrel (Open)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 500;
	};
	class acd_C15k_MetalBarrel_empty_F : acd_container15k_base {
		model = "a3\structures_f\Items\Vessels\MetalBarrel_empty_F.p3d";
		displayName = "Metal Barrel (Open) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_TyreBarrier_01_black_F : acd_container_base {
		model = "a3\structures_f_bootcamp\Civ\SportsGrounds\TyreBarrier_01_black_F.p3d";
		displayName = "Tire Barrier (Black, 1)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 700;
	};
	class acd_C15k_TyreBarrier_01_black_F : acd_container15k_base {
		model = "a3\structures_f_bootcamp\Civ\SportsGrounds\TyreBarrier_01_black_F.p3d";
		displayName = "Tire Barrier (Black, 1) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_TyreBarrier_01_white_F : acd_container_base {
		model = "a3\structures_f_bootcamp\Civ\SportsGrounds\TyreBarrier_01_white_F.p3d";
		displayName = "Tire Barrier";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 600;
	};
	class acd_C15k_TyreBarrier_01_white_F : acd_container15k_base {
		model = "a3\structures_f_bootcamp\Civ\SportsGrounds\TyreBarrier_01_white_F.p3d";
		displayName = "Tire Barrier (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_FoodContainer_01_F : acd_container_base {
		model = "a3\structures_f_bootcamp\Items\Food\FoodContainer_01_F.p3d";
		displayName = "Food Container (Large)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 100;
	};
	class acd_C15k_FoodContainer_01_F : acd_container15k_base {
		model = "a3\structures_f_bootcamp\Items\Food\FoodContainer_01_F.p3d";
		displayName = "Food Container (Large) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_TinContainer_F : acd_container_base {
		model = "a3\structures_f_epa\Items\Vessels\TinContainer_F.p3d";
		displayName = "Tin container";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 10;
	};
	class acd_C15k_TinContainer_F : acd_container15k_base {
		model = "a3\structures_f_epa\Items\Vessels\TinContainer_F.p3d";
		displayName = "Tin container (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Pallet_MilBoxes_F : acd_container_base {
		model = "a3\structures_f_epa\Mil\Scrapyard\Pallet_MilBoxes_F.p3d";
		displayName = "Pallet (Military Boxes)";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 4700;
	};
	class acd_C15k_Pallet_MilBoxes_F : acd_container15k_base {
		model = "a3\structures_f_epa\Mil\Scrapyard\Pallet_MilBoxes_F.p3d";
		displayName = "Pallet (Military Boxes) (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_PaperBox_closed_F : acd_container_base {
		model = "a3\structures_f_epa\Mil\Scrapyard\PaperBox_closed_F.p3d";
		displayName = "Box (Closed)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 4200;
	};
	class acd_C15k_PaperBox_closed_F : acd_container15k_base {
		model = "a3\structures_f_epa\Mil\Scrapyard\PaperBox_closed_F.p3d";
		displayName = "Box (Closed) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_PaperBox_open_empty_F : acd_container_base {
		model = "a3\structures_f_epa\Mil\Scrapyard\PaperBox_open_empty_F.p3d";
		displayName = "Box (Open, Empty)";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 4700;
	};
	class acd_C15k_PaperBox_open_empty_F : acd_container15k_base {
		model = "a3\structures_f_epa\Mil\Scrapyard\PaperBox_open_empty_F.p3d";
		displayName = "Box (Open, Empty) (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_PaperBox_open_full_F : acd_container_base {
		model = "a3\structures_f_epa\Mil\Scrapyard\PaperBox_open_full_F.p3d";
		displayName = "Box (Open, Full)";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 4800;
	};
	class acd_C15k_PaperBox_open_full_F : acd_container15k_base {
		model = "a3\structures_f_epa\Mil\Scrapyard\PaperBox_open_full_F.p3d";
		displayName = "Box (Open, Full) (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Grave_dirt_F : acd_container_base {
		model = "a3\structures_f_epb\Civ\Dead\Grave_dirt_F.p3d";
		displayName = "Grave (Dirt)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 9300;
	};
	class acd_C15k_Grave_dirt_F : acd_container15k_base {
		model = "a3\structures_f_epb\Civ\Dead\Grave_dirt_F.p3d";
		displayName = "Grave (Dirt) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Grave_forest_F : acd_container_base {
		model = "a3\structures_f_epb\Civ\Dead\Grave_forest_F.p3d";
		displayName = "Grave (Forest)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 8800;
	};
	class acd_C15k_Grave_forest_F : acd_container15k_base {
		model = "a3\structures_f_epb\Civ\Dead\Grave_forest_F.p3d";
		displayName = "Grave (Forest) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Grave_rocks_F : acd_container_base {
		model = "a3\structures_f_epb\Civ\Dead\Grave_rocks_F.p3d";
		displayName = "Grave (Rocks)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 7200;
	};
	class acd_C15k_Grave_rocks_F : acd_container15k_base {
		model = "a3\structures_f_epb\Civ\Dead\Grave_rocks_F.p3d";
		displayName = "Grave (Rocks) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_GarbageContainer_open_F : acd_container_base {
		model = "a3\structures_f_epb\Civ\Garbage\GarbageContainer_open_F.p3d";
		displayName = "Trash container (Open)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 5200;
	};
	class acd_C15k_GarbageContainer_open_F : acd_container15k_base {
		model = "a3\structures_f_epb\Civ\Garbage\GarbageContainer_open_F.p3d";
		displayName = "Trash container (Open) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_GarbageContainer_closed_F : acd_container_base {
		model = "a3\structures_f_epb\Civ\Garbage\GarbageContainer_closed_F.p3d";
		displayName = "Trash container (Closed)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 5400;
	};
	class acd_C15k_GarbageContainer_closed_F : acd_container15k_base {
		model = "a3\structures_f_epb\Civ\Garbage\GarbageContainer_closed_F.p3d";
		displayName = "Trash container (Closed) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_LuggageHeap_01_F : acd_container_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_01_F.p3d";
		displayName = "Luggage (Couple)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1300;
	};
	class acd_C15k_LuggageHeap_01_F : acd_container15k_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_01_F.p3d";
		displayName = "Luggage (Couple) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_LuggageHeap_02_F : acd_container_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_02_F.p3d";
		displayName = "Luggage (Few)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1800;
	};
	class acd_C15k_LuggageHeap_02_F : acd_container15k_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_02_F.p3d";
		displayName = "Luggage (Few) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_LuggageHeap_03_F : acd_container_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_03_F.p3d";
		displayName = "Luggage (Bunch)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 6900;
	};
	class acd_C15k_LuggageHeap_03_F : acd_container15k_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_03_F.p3d";
		displayName = "Luggage (Bunch) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_LuggageHeap_04_F : acd_container_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_04_F.p3d";
		displayName = "Luggage (Pile)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 9500;
	};
	class acd_C15k_LuggageHeap_04_F : acd_container15k_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_04_F.p3d";
		displayName = "Luggage (Pile) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_LuggageHeap_05_F : acd_container_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_05_F.p3d";
		displayName = "Luggage (Heap)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 28800;
	};
	class acd_C15k_LuggageHeap_05_F : acd_container15k_base {
		model = "a3\structures_f_epb\Items\Luggage\LuggageHeap_05_F.p3d";
		displayName = "Luggage (Heap) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Ammobox_rounds_F : acd_container_base {
		model = "a3\structures_f_epb\Items\Military\Ammobox_rounds_F.p3d";
		displayName = "Ammo box";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 80;
	};
	class acd_C15k_Ammobox_rounds_F : acd_container15k_base {
		model = "a3\structures_f_epb\Items\Military\Ammobox_rounds_F.p3d";
		displayName = "Ammo box (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_BarrelEmpty_grey_F : acd_container_base {
		model = "a3\structures_f_epb\Items\Vessels\BarrelEmpty_grey_F.p3d";
		displayName = "Plastic Barrel (Empty, Grey)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 300;
	};
	class acd_C15k_BarrelEmpty_grey_F : acd_container15k_base {
		model = "a3\structures_f_epb\Items\Vessels\BarrelEmpty_grey_F.p3d";
		displayName = "Plastic Barrel (Empty, Grey) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_GarbageBarrel_01_F : acd_container_base {
		model = "a3\structures_f_epc\Civ\Garbage\GarbageBarrel_01_F.p3d";
		displayName = "Garbage Barrel (Smiley)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1100;
	};
	class acd_C15k_GarbageBarrel_01_F : acd_container15k_base {
		model = "a3\structures_f_epc\Civ\Garbage\GarbageBarrel_01_F.p3d";
		displayName = "Garbage Barrel (Smiley) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_GarbageBin_01_F : acd_container_base {
		model = "a3\structures_f_epc\Civ\Garbage\GarbageBin_01_F.p3d";
		displayName = "Trash Bin";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 500;
	};
	class acd_C15k_GarbageBin_01_F : acd_container15k_base {
		model = "a3\structures_f_epc\Civ\Garbage\GarbageBin_01_F.p3d";
		displayName = "Trash Bin (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Ammobox : acd_container_base {
		model = "a3\weapons_f\ammoboxes\Ammobox.p3d";
		displayName = "Ammobox";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 6400;
	};
	class acd_C15k_Ammobox : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\Ammobox.p3d";
		displayName = "Ammobox (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_AmmoBox_F : acd_container_base {
		model = "a3\weapons_f\ammoboxes\AmmoBox_F.p3d";
		displayName = "AmmoBox_F";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 2100;
	};
	class acd_C15k_AmmoBox_F : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\AmmoBox_F.p3d";
		displayName = "AmmoBox_F (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_AmmoVeh_F : acd_container_base {
		model = "a3\weapons_f\ammoboxes\AmmoVeh_F.p3d";
		displayName = "AmmoVeh_F";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 5700;
	};
	class acd_C15k_AmmoVeh_F : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\AmmoVeh_F.p3d";
		displayName = "AmmoVeh_F (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Box_NATO_AmmoVeh_F : acd_container_base {
		model = "a3\weapons_f\ammoboxes\Box_NATO_AmmoVeh_F.p3d";
		displayName = "Box_NATO_AmmoVeh_F";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 5700;
	};
	class acd_C15k_Box_NATO_AmmoVeh_F : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\Box_NATO_AmmoVeh_F.p3d";
		displayName = "Box_NATO_AmmoVeh_F (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Proxy_UsBasicAmmoBox : acd_container_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicAmmoBox.p3d";
		displayName = "Proxy_UsBasicAmmoBox";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 1300;
	};
	class acd_C15k_Proxy_UsBasicAmmoBox : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicAmmoBox.p3d";
		displayName = "Proxy_UsBasicAmmoBox (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Proxy_UsBasicAmmoBoxBig : acd_container_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicAmmoBoxBig.p3d";
		displayName = "Proxy_UsBasicAmmoBoxBig";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 400;
	};
	class acd_C15k_Proxy_UsBasicAmmoBoxBig : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicAmmoBoxBig.p3d";
		displayName = "Proxy_UsBasicAmmoBoxBig (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Proxy_UsBasicAmmoBoxSmall : acd_container_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicAmmoBoxSmall.p3d";
		displayName = "Proxy_UsBasicAmmoBoxSmall";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 200;
	};
	class acd_C15k_Proxy_UsBasicAmmoBoxSmall : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicAmmoBoxSmall.p3d";
		displayName = "Proxy_UsBasicAmmoBoxSmall (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Proxy_UsBasicExplosives : acd_container_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicExplosives.p3d";
		displayName = "Proxy_UsBasicExplosives";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 1300;
	};
	class acd_C15k_Proxy_UsBasicExplosives : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicExplosives.p3d";
		displayName = "Proxy_UsBasicExplosives (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Proxy_UsBasicWeaponBox : acd_container_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicWeaponBox.p3d";
		displayName = "Proxy_UsBasicWeaponBox";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 200;
	};
	class acd_C15k_Proxy_UsBasicWeaponBox : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsBasicWeaponBox.p3d";
		displayName = "Proxy_UsBasicWeaponBox (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Proxy_UsLouncherBox : acd_container_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsLouncherBox.p3d";
		displayName = "Proxy_UsLouncherBox";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 800;
	};
	class acd_C15k_Proxy_UsLouncherBox : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\Proxy_UsLouncherBox.p3d";
		displayName = "Proxy_UsLouncherBox (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Supplydrop : acd_container_base {
		model = "a3\weapons_f\ammoboxes\Supplydrop.p3d";
		displayName = "Supply Box [NATO]";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 4400;
	};
	class acd_C15k_Supplydrop : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\Supplydrop.p3d";
		displayName = "Supply Box [NATO] (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_USBasicAmmo : acd_container_base {
		model = "a3\weapons_f\ammoboxes\USBasicAmmo.p3d";
		displayName = "USBasicAmmo";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 1300;
	};
	class acd_C15k_USBasicAmmo : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\USBasicAmmo.p3d";
		displayName = "USBasicAmmo (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_USBasicWeapons : acd_container_base {
		model = "a3\weapons_f\ammoboxes\USBasicWeapons.p3d";
		displayName = "USBasicWeapons";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 9900;
	};
	class acd_C15k_USBasicWeapons : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\USBasicWeapons.p3d";
		displayName = "USBasicWeapons (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_USLaunchers : acd_container_base {
		model = "a3\weapons_f\ammoboxes\USLaunchers.p3d";
		displayName = "USLaunchers";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 10600;
	};
	class acd_C15k_USLaunchers : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\USLaunchers.p3d";
		displayName = "USLaunchers (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_WpnsBox_F : acd_container_base {
		model = "a3\weapons_f\ammoboxes\WpnsBox_F.p3d";
		displayName = "WpnsBox_F";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 1400;
	};
	class acd_C15k_WpnsBox_F : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\WpnsBox_F.p3d";
		displayName = "WpnsBox_F (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_WpnsBox_large_F : acd_container_base {
		model = "a3\weapons_f\ammoboxes\WpnsBox_large_F.p3d";
		displayName = "WpnsBox_large_F";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 1800;
	};
	class acd_C15k_WpnsBox_large_F : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\WpnsBox_large_F.p3d";
		displayName = "WpnsBox_large_F (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_WpnsBox_long_F : acd_container_base {
		model = "a3\weapons_f\ammoboxes\WpnsBox_long_F.p3d";
		displayName = "WpnsBox_long_F";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 1300;
	};
	class acd_C15k_WpnsBox_long_F : acd_container15k_base {
		model = "a3\weapons_f\ammoboxes\WpnsBox_long_F.p3d";
		displayName = "WpnsBox_long_F (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Toolkit : acd_container_base {
		model = "a3\weapons_f\items\Toolkit.p3d";
		displayName = "Toolkit";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 50;
	};
	class acd_C15k_Toolkit : acd_container15k_base {
		model = "a3\weapons_f\items\Toolkit.p3d";
		displayName = "Toolkit (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Medikit : acd_container_base {
		model = "a3\weapons_f\items\Medikit.p3d";
		displayName = "Medikit";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 50;
	};
	class acd_C15k_Medikit : acd_container15k_base {
		model = "a3\weapons_f\items\Medikit.p3d";
		displayName = "Medikit (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Ammobox_02_F : acd_container_base {
		model = "a3\weapons_f_bootcamp\Ammoboxes\Ammobox_02_F.p3d";
		displayName = "FIA Ammo Cache";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 10000;
	};
	class acd_C15k_Ammobox_02_F : acd_container15k_base {
		model = "a3\weapons_f_bootcamp\Ammoboxes\Ammobox_02_F.p3d";
		displayName = "FIA Ammo Cache (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Itembox_02_F : acd_container_base {
		model = "a3\weapons_f_bootcamp\Ammoboxes\Itembox_02_F.p3d";
		displayName = "FIA Equipment Cache";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 6000;
	};
	class acd_C15k_Itembox_02_F : acd_container15k_base {
		model = "a3\weapons_f_bootcamp\Ammoboxes\Itembox_02_F.p3d";
		displayName = "FIA Equipment Cache (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Weaponsbox_02_F : acd_container_base {
		model = "a3\weapons_f_bootcamp\Ammoboxes\Weaponsbox_02_F.p3d";
		displayName = "Weaponsbox_02_F";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 6000;
	};
	class acd_C15k_Weaponsbox_02_F : acd_container15k_base {
		model = "a3\weapons_f_bootcamp\Ammoboxes\Weaponsbox_02_F.p3d";
		displayName = "Weaponsbox_02_F (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Pod_Heli_Transport_04_ammo_F : acd_container_base {
		model = "a3\air_f_heli\Heli_Transport_04\Pod_Heli_Transport_04_ammo_F.p3d";
		displayName = "Taru Ammo Pod";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 73000;
	};
	class acd_C15k_Pod_Heli_Transport_04_ammo_F : acd_container15k_base {
		model = "a3\air_f_heli\Heli_Transport_04\Pod_Heli_Transport_04_ammo_F.p3d";
		displayName = "Taru Ammo Pod (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Pod_Heli_Transport_04_box_F : acd_container_base {
		model = "a3\air_f_heli\Heli_Transport_04\Pod_Heli_Transport_04_box_F.p3d";
		displayName = "Taru Cargo Pod";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 72600;
	};
	class acd_C15k_Pod_Heli_Transport_04_box_F : acd_container15k_base {
		model = "a3\air_f_heli\Heli_Transport_04\Pod_Heli_Transport_04_box_F.p3d";
		displayName = "Taru Cargo Pod (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Pod_Heli_Transport_04_covered_F : acd_container_base {
		model = "a3\air_f_heli\Heli_Transport_04\Pod_Heli_Transport_04_covered_F.p3d";
		displayName = "Taru Transport Pod";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 115100;
	};
	class acd_C15k_Pod_Heli_Transport_04_covered_F : acd_container15k_base {
		model = "a3\air_f_heli\Heli_Transport_04\Pod_Heli_Transport_04_covered_F.p3d";
		displayName = "Taru Transport Pod (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Pod_Heli_Transport_04_fuel_F : acd_container_base {
		model = "a3\air_f_heli\Heli_Transport_04\Pod_Heli_Transport_04_fuel_F.p3d";
		displayName = "Taru Fuel Pod";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 68400;
	};
	class acd_C15k_Pod_Heli_Transport_04_fuel_F : acd_container15k_base {
		model = "a3\air_f_heli\Heli_Transport_04\Pod_Heli_Transport_04_fuel_F.p3d";
		displayName = "Taru Fuel Pod (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Pod_Heli_Transport_04_medevac_F : acd_container_base {
		model = "a3\air_f_heli\Heli_Transport_04\Pod_Heli_Transport_04_medevac_F.p3d";
		displayName = "Taru Medical Pod";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 109600;
	};
	class acd_C15k_Pod_Heli_Transport_04_medevac_F : acd_container15k_base {
		model = "a3\air_f_heli\Heli_Transport_04\Pod_Heli_Transport_04_medevac_F.p3d";
		displayName = "Taru Medical Pod (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Pod_Heli_Transport_04_repair_F : acd_container_base {
		model = "a3\air_f_heli\Heli_Transport_04\Pod_Heli_Transport_04_repair_F.p3d";
		displayName = "Taru Repair Pod";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 73300;
	};
	class acd_C15k_Pod_Heli_Transport_04_repair_F : acd_container15k_base {
		model = "a3\air_f_heli\Heli_Transport_04\Pod_Heli_Transport_04_repair_F.p3d";
		displayName = "Taru Repair Pod (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_ToolTrolley_02_F : acd_container_base {
		model = "a3\structures_f_heli\Civ\Constructions\ToolTrolley_02_F.p3d";
		displayName = "Tool Cart (Blue)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 2000;
	};
	class acd_C15k_ToolTrolley_02_F : acd_container15k_base {
		model = "a3\structures_f_heli\Civ\Constructions\ToolTrolley_02_F.p3d";
		displayName = "Tool Cart (Blue) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_WheelieBin_01_F : acd_container_base {
		model = "a3\structures_f_heli\Civ\Garbage\WheelieBin_01_F.p3d";
		displayName = "Wheelie Bin";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 2000;
	};
	class acd_C15k_WheelieBin_01_F : acd_container15k_base {
		model = "a3\structures_f_heli\Civ\Garbage\WheelieBin_01_F.p3d";
		displayName = "Wheelie Bin (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_OfficeCabinet_01_F : acd_container_base {
		model = "a3\structures_f_heli\Furniture\OfficeCabinet_01_F.p3d";
		displayName = "Office Cabinet";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1500;
	};
	class acd_C15k_OfficeCabinet_01_F : acd_container15k_base {
		model = "a3\structures_f_heli\Furniture\OfficeCabinet_01_F.p3d";
		displayName = "Office Cabinet (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_OfficeTable_01_F : acd_container_base {
		model = "a3\structures_f_heli\Furniture\OfficeTable_01_F.p3d";
		displayName = "Office Table";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1200;
	};
	class acd_C15k_OfficeTable_01_F : acd_container15k_base {
		model = "a3\structures_f_heli\Furniture\OfficeTable_01_F.p3d";
		displayName = "Office Table (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Workbench_01_F : acd_container_base {
		model = "a3\structures_f_heli\Furniture\Workbench_01_F.p3d";
		displayName = "Workbench";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 500;
	};
	class acd_C15k_Workbench_01_F : acd_container15k_base {
		model = "a3\structures_f_heli\Furniture\Workbench_01_F.p3d";
		displayName = "Workbench (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Cargo10_blue_F : acd_container_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_blue_F.p3d";
		displayName = "Cargo Container (Short, Blue)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 30800;
	};
	class acd_C15k_Cargo10_blue_F : acd_container15k_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_blue_F.p3d";
		displayName = "Cargo Container (Short, Blue) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Cargo10_brick_red_F : acd_container_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_brick_red_F.p3d";
		displayName = "Cargo Container (Short, Brick Red)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 30800;
	};
	class acd_C15k_Cargo10_brick_red_F : acd_container15k_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_brick_red_F.p3d";
		displayName = "Cargo Container (Short, Brick Red) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Cargo10_cyan_F : acd_container_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_cyan_F.p3d";
		displayName = "Cargo Container (Short, Cyan)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 30800;
	};
	class acd_C15k_Cargo10_cyan_F : acd_container15k_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_cyan_F.p3d";
		displayName = "Cargo Container (Short, Cyan) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Cargo10_grey_F : acd_container_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_grey_F.p3d";
		displayName = "Cargo Container (Short, Grey)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 30800;
	};
	class acd_C15k_Cargo10_grey_F : acd_container15k_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_grey_F.p3d";
		displayName = "Cargo Container (Short, Grey) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Cargo10_light_blue_F : acd_container_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_light_blue_F.p3d";
		displayName = "Cargo Container (Short, Light Blue)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 30800;
	};
	class acd_C15k_Cargo10_light_blue_F : acd_container15k_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_light_blue_F.p3d";
		displayName = "Cargo Container (Short, Light Blue) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Cargo10_light_green_F : acd_container_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_light_green_F.p3d";
		displayName = "Cargo Container (Short, Light Green)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 30800;
	};
	class acd_C15k_Cargo10_light_green_F : acd_container15k_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_light_green_F.p3d";
		displayName = "Cargo Container (Short, Light Green) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Cargo10_military_green_F : acd_container_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_military_green_F.p3d";
		displayName = "Cargo Container (Short, Military Green)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 30800;
	};
	class acd_C15k_Cargo10_military_green_F : acd_container15k_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_military_green_F.p3d";
		displayName = "Cargo Container (Short, Military Green) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Cargo10_orange_F : acd_container_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_orange_F.p3d";
		displayName = "Cargo Container (Short, Orange)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 30800;
	};
	class acd_C15k_Cargo10_orange_F : acd_container15k_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_orange_F.p3d";
		displayName = "Cargo Container (Short, Orange) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Cargo10_red_F : acd_container_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_red_F.p3d";
		displayName = "Cargo Container (Short, Red)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 30800;
	};
	class acd_C15k_Cargo10_red_F : acd_container15k_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_red_F.p3d";
		displayName = "Cargo Container (Short, Red) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Cargo10_sand_F : acd_container_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_sand_F.p3d";
		displayName = "Cargo Container (Short, Sand)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 30800;
	};
	class acd_C15k_Cargo10_sand_F : acd_container15k_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_sand_F.p3d";
		displayName = "Cargo Container (Short, Sand) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Cargo10_white_F : acd_container_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_white_F.p3d";
		displayName = "Cargo Container (Short, White)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 30800;
	};
	class acd_C15k_Cargo10_white_F : acd_container15k_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_white_F.p3d";
		displayName = "Cargo Container (Short, White) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Cargo10_yellow_F : acd_container_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_yellow_F.p3d";
		displayName = "Cargo Container (Short, Yellow)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 30800;
	};
	class acd_C15k_Cargo10_yellow_F : acd_container15k_base {
		model = "a3\structures_f_heli\Ind\Cargo\Cargo10_yellow_F.p3d";
		displayName = "Cargo Container (Short, Yellow) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_RotorCoversBag_01_F : acd_container_base {
		model = "a3\structures_f_heli\Items\Airport\RotorCoversBag_01_F.p3d";
		displayName = "Rotor Covers Bag";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 200;
	};
	class acd_C15k_RotorCoversBag_01_F : acd_container15k_base {
		model = "a3\structures_f_heli\Items\Airport\RotorCoversBag_01_F.p3d";
		displayName = "Rotor Covers Bag (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Fridge_01_F : acd_container_base {
		model = "a3\structures_f_heli\Items\Electronics\Fridge_01_F.p3d";
		displayName = "Refrigerator";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 600;
	};
	class acd_C15k_Fridge_01_F : acd_container15k_base {
		model = "a3\structures_f_heli\Items\Electronics\Fridge_01_F.p3d";
		displayName = "Refrigerator (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Microwave_01_F : acd_container_base {
		model = "a3\structures_f_heli\Items\Electronics\Microwave_01_F.p3d";
		displayName = "Microwave Oven";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 50;
	};
	class acd_C15k_Microwave_01_F : acd_container15k_base {
		model = "a3\structures_f_heli\Items\Electronics\Microwave_01_F.p3d";
		displayName = "Microwave Oven (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_PCSet_01_case_F : acd_container_base {
		model = "a3\structures_f_heli\Items\Electronics\PCSet_01_case_F.p3d";
		displayName = "PC Set (Case)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 100;
	};
	class acd_C15k_PCSet_01_case_F : acd_container15k_base {
		model = "a3\structures_f_heli\Items\Electronics\PCSet_01_case_F.p3d";
		displayName = "PC Set (Case) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_MetalCase_01_large_F : acd_container_base {
		model = "a3\structures_f_heli\Items\Luggage\MetalCase_01_large_F.p3d";
		displayName = "Metal Case (Large)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1500;
	};
	class acd_C15k_MetalCase_01_large_F : acd_container15k_base {
		model = "a3\structures_f_heli\Items\Luggage\MetalCase_01_large_F.p3d";
		displayName = "Metal Case (Large) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_MetalCase_01_medium_F : acd_container_base {
		model = "a3\structures_f_heli\Items\Luggage\MetalCase_01_medium_F.p3d";
		displayName = "Metal Case (Medium)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 900;
	};
	class acd_C15k_MetalCase_01_medium_F : acd_container15k_base {
		model = "a3\structures_f_heli\Items\Luggage\MetalCase_01_medium_F.p3d";
		displayName = "Metal Case (Medium) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_MetalCase_01_small_F : acd_container_base {
		model = "a3\structures_f_heli\Items\Luggage\MetalCase_01_small_F.p3d";
		displayName = "Metal Case (Small)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 600;
	};
	class acd_C15k_MetalCase_01_small_F : acd_container15k_base {
		model = "a3\structures_f_heli\Items\Luggage\MetalCase_01_small_F.p3d";
		displayName = "Metal Case (Small) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_PlasticCase_01_large_F : acd_container_base {
		model = "a3\structures_f_heli\Items\Luggage\PlasticCase_01_large_F.p3d";
		displayName = "Plastic Case (Large)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1500;
	};
	class acd_C15k_PlasticCase_01_large_F : acd_container15k_base {
		model = "a3\structures_f_heli\Items\Luggage\PlasticCase_01_large_F.p3d";
		displayName = "Plastic Case (Large) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_PlasticCase_01_medium_F : acd_container_base {
		model = "a3\structures_f_heli\Items\Luggage\PlasticCase_01_medium_F.p3d";
		displayName = "Plastic Case (Medium)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 900;
	};
	class acd_C15k_PlasticCase_01_medium_F : acd_container15k_base {
		model = "a3\structures_f_heli\Items\Luggage\PlasticCase_01_medium_F.p3d";
		displayName = "Plastic Case (Medium) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_PlasticCase_01_small_F : acd_container_base {
		model = "a3\structures_f_heli\Items\Luggage\PlasticCase_01_small_F.p3d";
		displayName = "Plastic Case (Small)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 600;
	};
	class acd_C15k_PlasticCase_01_small_F : acd_container15k_base {
		model = "a3\structures_f_heli\Items\Luggage\PlasticCase_01_small_F.p3d";
		displayName = "Plastic Case (Small) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_CargoNet_01_ammo_F : acd_container_base {
		model = "a3\supplies_f_heli\CargoNets\CargoNet_01_ammo_F.p3d";
		displayName = "Ammoboxes";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 6700;
	};
	class acd_C15k_CargoNet_01_ammo_F : acd_container15k_base {
		model = "a3\supplies_f_heli\CargoNets\CargoNet_01_ammo_F.p3d";
		displayName = "Ammoboxes (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_CargoNet_01_box_F : acd_container_base {
		model = "a3\supplies_f_heli\CargoNets\CargoNet_01_box_F.p3d";
		displayName = "Cargo Net (Box)";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 4300;
	};
	class acd_C15k_CargoNet_01_box_F : acd_container15k_base {
		model = "a3\supplies_f_heli\CargoNets\CargoNet_01_box_F.p3d";
		displayName = "Cargo Net (Box) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_C_Slingload_01_Ammo_F : acd_container_base {
		model = "a3\supplies_f_heli\Slingload\Slingload_01_Ammo_F.p3d";
		displayName = "Huron Ammo Container";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 61600;
	};
	class acd_C15k_Slingload_01_Ammo_F : acd_container15k_base {
		model = "a3\supplies_f_heli\Slingload\Slingload_01_Ammo_F.p3d";
		displayName = "Huron Ammo Container (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Slingload_01_Cargo_F : acd_container_base {
		model = "a3\supplies_f_heli\Slingload\Slingload_01_Cargo_F.p3d";
		displayName = "Huron Cargo Container";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 61800;
	};
	class acd_C15k_Slingload_01_Cargo_F : acd_container15k_base {
		model = "a3\supplies_f_heli\Slingload\Slingload_01_Cargo_F.p3d";
		displayName = "Huron Cargo Container (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Slingload_01_Fuel_F : acd_container_base {
		model = "a3\supplies_f_heli\Slingload\Slingload_01_Fuel_F.p3d";
		displayName = "Huron Fuel Container";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 62600;
	};
	class acd_C15k_Slingload_01_Fuel_F : acd_container15k_base {
		model = "a3\supplies_f_heli\Slingload\Slingload_01_Fuel_F.p3d";
		displayName = "Huron Fuel Container (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Slingload_01_Medevac_F : acd_container_base {
		model = "a3\supplies_f_heli\Slingload\Slingload_01_Medevac_F.p3d";
		displayName = "Huron Medical Container";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 70600;
	};
	class acd_C15k_Slingload_01_Medevac_F : acd_container15k_base {
		model = "a3\supplies_f_heli\Slingload\Slingload_01_Medevac_F.p3d";
		displayName = "Huron Medical Container (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_Slingload_01_Repair_F : acd_container_base {
		model = "a3\supplies_f_heli\Slingload\Slingload_01_Repair_F.p3d";
		displayName = "Huron Repair Container";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 63600;
	};
	class acd_C15k_Slingload_01_Repair_F : acd_container15k_base {
		model = "a3\supplies_f_heli\Slingload\Slingload_01_Repair_F.p3d";
		displayName = "Huron Repair Container (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_C_DataTerminal_01_F : acd_container_base {
		model = "a3\props_f_exp_a\Military\Equipment\DataTerminal_01_F.p3d";
		displayName = "Data Terminal";
		editorSubcategory = "acd_containers_military";
		maximumLoad = 1500;
	};
	class acd_C15k_DataTerminal_01_F : acd_container15k_base {
		model = "a3\props_f_exp_a\Military\Equipment\DataTerminal_01_F.p3d";
		displayName = "Data Terminal (15k load)";
		editorSubcategory = "acd_containers_military";
	};
};

