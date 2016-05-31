class CfgPatches {
	class armaContainersAndDecorations_CUP {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"3DEN","armaContainersAndDecorations"};
		author = "vitaly'mind'chizhikov"
		name = "Arma3 Containers & Decorations (CUP)";
		url = "https://github.com/vitalymind/ArmaContainersAndDecor";
	};
};
class CfgEditorCategories {
	class acd_containers_cup {displayName = "ACD containers (CUP)";};
	class acd_containers15k_cup {displayName = "ACD containers (15k load) (CUP)";};
	class acd_decorations_cup {displayName = "ACD decorations (CUP)";};
};
class CfgVehicles {
	class House_F; // External class reference
	class acd_cup_decor_base : House_F {
		destrType = "DestructNo";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
		editorCategory = "acd_decorations_cup";
		editorSubcategory = "";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "ACD decorations CUP";
		keepHorizontalPlacement = 0;
		icon = "armaContainersAndDecorations\textures\decoration.paa";
	};
	class acd_cup_A10Wreck : acd_cup_decor_base {
		model = "ca\a10\A10Wreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\A10Wreck.jpg";
		displayName = "a10wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_C130JWreck : acd_cup_decor_base {
		model = "ca\air2\c130j\C130JWreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\C130JWreck.jpg";
		displayName = "C130JWreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_F35bWreck : acd_cup_decor_base {
		model = "ca\air2\f35b\F35bWreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\F35bWreck.jpg";
		displayName = "f35bwreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_Ka52Wreck : acd_cup_decor_base {
		model = "ca\air2\ka52\Ka52Wreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Ka52Wreck.jpg";
		displayName = "ka52wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_mi24wreck : acd_cup_decor_base {
		model = "ca\air2\mi35\mi24wreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\mi24wreck.jpg";
		displayName = "mi24wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_MV22Wreck : acd_cup_decor_base {
		model = "ca\air2\mv22\MV22Wreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\MV22Wreck.jpg";
		displayName = "mv22wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_UH1YWreck : acd_cup_decor_base {
		model = "ca\air2\uh1y\UH1YWreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\UH1YWreck.jpg";
		displayName = "uh1ywreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_UH1Y_crashed : acd_cup_decor_base {
		model = "ca\air2\uh1y\UH1Y_crashed.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\UH1Y_crashed.jpg";
		displayName = "UH1Y_crashed";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_su34Wreck : acd_cup_decor_base {
		model = "ca\air3\su34\su34Wreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\su34Wreck.jpg";
		displayName = "su34wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_AGM114Hellfire : acd_cup_decor_base {
		model = "ca\air\AGM114Hellfire.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\AGM114Hellfire.jpg";
		displayName = "AGM114Hellfire";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_cup_AH1ZWreck : acd_cup_decor_base {
		model = "ca\air\AH1ZWreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\AH1ZWreck.jpg";
		displayName = "ah1zwreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_AIM9xSidewinder : acd_cup_decor_base {
		model = "ca\air\AIM9xSidewinder.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\AIM9xSidewinder.jpg";
		displayName = "AIM9xSidewinder";
		editorSubcategory = "acd_decorations_bombsShells";
	};
	class acd_cup_AV8BWreck : acd_cup_decor_base {
		model = "ca\air\AV8BWreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\AV8BWreck.jpg";
		displayName = "av8bwreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_MH_60Wreck : acd_cup_decor_base {
		model = "ca\air\MH_60Wreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\MH_60Wreck.jpg";
		displayName = "mh_60wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_MI8Wreck : acd_cup_decor_base {
		model = "ca\air\MI8Wreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\MI8Wreck.jpg";
		displayName = "MI8Wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_AW159_BAF_Wreck : acd_cup_decor_base {
		model = "ca\air_d_baf\AW159_BAF_Wreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\AW159_BAF_Wreck.jpg";
		displayName = "aw159_baf_wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_Ah64DWreck : acd_cup_decor_base {
		model = "ca\air_e\ah64\Ah64DWreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Ah64DWreck.jpg";
		displayName = "ah64dwreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_ah6Wreck : acd_cup_decor_base {
		model = "ca\air_e\ah6j\ah6Wreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ah6Wreck.jpg";
		displayName = "ah6wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_an2Wreck : acd_cup_decor_base {
		model = "ca\air_e\an2\an2Wreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\an2Wreck.jpg";
		displayName = "an2wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_CH_47FWreck : acd_cup_decor_base {
		model = "ca\air_e\ch47\CH_47FWreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\CH_47FWreck.jpg";
		displayName = "ch_47fwreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_Su25Wreck : acd_cup_decor_base {
		model = "ca\air_e\su25\Su25Wreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Su25Wreck.jpg";
		displayName = "su25wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_uh1hWreck : acd_cup_decor_base {
		model = "ca\air_e\uh1h\uh1hWreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\uh1hWreck.jpg";
		displayName = "uh1hwreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_Ka60_PMCWreck : acd_cup_decor_base {
		model = "ca\air_pmc\ka60\Ka60_PMCWreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Ka60_PMCWreck.jpg";
		displayName = "ka60_pmcwreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_ammobednaX : acd_cup_decor_base {
		model = "ca\buildings\furniture\ammobednaX.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ammobednaX.jpg";
		displayName = "ammobednaX";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_armchair : acd_cup_decor_base {
		model = "ca\buildings\furniture\armchair.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\armchair.jpg";
		displayName = "armchair";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_bath : acd_cup_decor_base {
		model = "ca\buildings\furniture\bath.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bath.jpg";
		displayName = "bath";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_bedna_ammo2X : acd_cup_decor_base {
		model = "ca\buildings\furniture\bedna_ammo2X.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bedna_ammo2X.jpg";
		displayName = "bedna_ammo2X";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_bed_big_a : acd_cup_decor_base {
		model = "ca\buildings\furniture\bed_big_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bed_big_a.jpg";
		displayName = "bed_big_a";
		editorSubcategory = "acd_decorations_beds";
	};
	class acd_cup_bed_husbands : acd_cup_decor_base {
		model = "ca\buildings\furniture\bed_husbands.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bed_husbands.jpg";
		displayName = "bed_husbands";
		editorSubcategory = "acd_decorations_beds";
	};
	class acd_cup_case_bedroom_b : acd_cup_decor_base {
		model = "ca\buildings\furniture\case_bedroom_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_bedroom_b.jpg";
		displayName = "case_bedroom_b";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_case_wall_unit_part_c : acd_cup_decor_base {
		model = "ca\buildings\furniture\case_wall_unit_part_c.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_wall_unit_part_c.jpg";
		displayName = "case_wall_unit_part_c";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_case_wall_unit_part_d : acd_cup_decor_base {
		model = "ca\buildings\furniture\case_wall_unit_part_d.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_wall_unit_part_d.jpg";
		displayName = "case_wall_unit_part_d";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_case_wooden_b : acd_cup_decor_base {
		model = "ca\buildings\furniture\case_wooden_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_wooden_b.jpg";
		displayName = "case_wooden_b";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_ch_mod_c : acd_cup_decor_base {
		model = "ca\buildings\furniture\ch_mod_c.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ch_mod_c.jpg";
		displayName = "ch_mod_c";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_ch_mod_d : acd_cup_decor_base {
		model = "ca\buildings\furniture\ch_mod_d.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ch_mod_d.jpg";
		displayName = "ch_mod_d";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_ch_mod_e : acd_cup_decor_base {
		model = "ca\buildings\furniture\ch_mod_e.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ch_mod_e.jpg";
		displayName = "ch_mod_e";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_conference_table_a1 : acd_cup_decor_base {
		model = "ca\buildings\furniture\conference_table_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\conference_table_a.jpg";
		displayName = "conference_table_a";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_Dhangar_brownskrin1 : acd_cup_decor_base {
		model = "ca\buildings\furniture\Dhangar_brownskrin.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_brownskrin.jpg";
		displayName = "Dhangar_brownskrin";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_Dhangar_knihovna : acd_cup_decor_base {
		model = "ca\buildings\furniture\Dhangar_knihovna.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_knihovna.jpg";
		displayName = "Dhangar_knihovna";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_Dhangar_psacistul : acd_cup_decor_base {
		model = "ca\buildings\furniture\Dhangar_psacistul.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_psacistul.jpg";
		displayName = "Dhangar_psacistul";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_Dhangar_whiteskrin : acd_cup_decor_base {
		model = "ca\buildings\furniture\Dhangar_whiteskrin.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_whiteskrin.jpg";
		displayName = "Dhangar_whiteskrin";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_Dkamna_bila : acd_cup_decor_base {
		model = "ca\buildings\furniture\Dkamna_bila.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dkamna_bila.jpg";
		displayName = "Dkamna_bila";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_Dkamna_uhli1 : acd_cup_decor_base {
		model = "ca\buildings\furniture\Dkamna_uhli.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dkamna_uhli.jpg";
		displayName = "Dkamna_uhli";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_hromada_beden_dekorativniX : acd_cup_decor_base {
		model = "ca\buildings\furniture\hromada_beden_dekorativniX.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hromada_beden_dekorativniX.jpg";
		displayName = "hromada_beden_dekorativniX";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_kitchen_table_a1 : acd_cup_decor_base {
		model = "ca\buildings\furniture\kitchen_table_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\kitchen_table_a.jpg";
		displayName = "kitchen_table_a";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_postel_manz_kov1 : acd_cup_decor_base {
		model = "ca\buildings\furniture\postel_manz_kov.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\postel_manz_kov.jpg";
		displayName = "postel_manz_kov";
		editorSubcategory = "acd_decorations_beds";
	};
	class acd_cup_postel_panelak11 : acd_cup_decor_base {
		model = "ca\buildings\furniture\postel_panelak1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\postel_panelak1.jpg";
		displayName = "postel_panelak1";
		editorSubcategory = "acd_decorations_beds";
	};
	class acd_cup_postel_panelak2 : acd_cup_decor_base {
		model = "ca\buildings\furniture\postel_panelak2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\postel_panelak2.jpg";
		displayName = "postel_panelak2";
		editorSubcategory = "acd_decorations_beds";
	};
	class acd_cup_skrin_bar1 : acd_cup_decor_base {
		model = "ca\buildings\furniture\skrin_bar.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\skrin_bar.jpg";
		displayName = "skrin_bar";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_Skrin_opalena : acd_cup_decor_base {
		model = "ca\buildings\furniture\Skrin_opalena.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skrin_opalena.jpg";
		displayName = "Skrin_opalena";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_stul_hospoda : acd_cup_decor_base {
		model = "ca\buildings\furniture\stul_hospoda.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stul_hospoda.jpg";
		displayName = "stul_hospoda";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_stul_kuch11 : acd_cup_decor_base {
		model = "ca\buildings\furniture\stul_kuch1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stul_kuch1.jpg";
		displayName = "stul_kuch1";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_toilet_b1 : acd_cup_decor_base {
		model = "ca\buildings\furniture\toilet_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\toilet_b.jpg";
		displayName = "toilet_b";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_Truhla_stara : acd_cup_decor_base {
		model = "ca\buildings\furniture\Truhla_stara.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Truhla_stara.jpg";
		displayName = "Truhla_stara";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_Vojenska_palanda1 : acd_cup_decor_base {
		model = "ca\buildings\furniture\Vojenska_palanda.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Vojenska_palanda.jpg";
		displayName = "Vojenska_palanda";
		editorSubcategory = "acd_decorations_beds";
	};
	class acd_cup_4drawer_case_bedroom_b : acd_cup_decor_base {
		model = "ca\buildings\misc\4drawer_case_bedroom_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\4drawer_case_bedroom_b.jpg";
		displayName = "4drawer_case_bedroom_b";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_Hrob2 : acd_cup_decor_base {
		model = "ca\buildings\misc\Hrob2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Hrob2.jpg";
		displayName = "Hrob2";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_hrobecek : acd_cup_decor_base {
		model = "ca\buildings\misc\hrobecek.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hrobecek.jpg";
		displayName = "Grave";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_hrobecek2 : acd_cup_decor_base {
		model = "ca\buildings\misc\hrobecek2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hrobecek2.jpg";
		displayName = "hrobecek2";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_Hrob1 : acd_cup_decor_base {
		model = "ca\buildings\misc\Hrob1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Hrob1.jpg";
		displayName = "Hrob1";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_hrobecek_krizek1 : acd_cup_decor_base {
		model = "ca\buildings\misc\hrobecek_krizek1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hrobecek_krizek1.jpg";
		displayName = "Cross w. dogtags";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_hrobecek_krizek2 : acd_cup_decor_base {
		model = "ca\buildings\misc\hrobecek_krizek2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hrobecek_krizek2.jpg";
		displayName = "Cross";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_hrobecek_krizekhelma : acd_cup_decor_base {
		model = "ca\buildings\misc\hrobecek_krizekhelma.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hrobecek_krizekhelma.jpg";
		displayName = "Cross w. helmet";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_jezek_kov : acd_cup_decor_base {
		model = "ca\buildings\misc\jezek kov.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\jezek kov.jpg";
		displayName = "jezek kov";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_lavicka_1 : acd_cup_decor_base {
		model = "ca\buildings\misc\lavicka_1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lavicka_1.jpg";
		displayName = "lavicka_1";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_lavicka_2 : acd_cup_decor_base {
		model = "ca\buildings\misc\lavicka_2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lavicka_2.jpg";
		displayName = "lavicka_2";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_lavicka_3 : acd_cup_decor_base {
		model = "ca\buildings\misc\lavicka_3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lavicka_3.jpg";
		displayName = "Park bench 1";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_lavicka_4 : acd_cup_decor_base {
		model = "ca\buildings\misc\lavicka_4.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lavicka_4.jpg";
		displayName = "Park bench 2";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_lavicka_4bezroadwaye : acd_cup_decor_base {
		model = "ca\buildings\misc\lavicka_4bezroadwaye.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lavicka_4bezroadwaye.jpg";
		displayName = "Park bench";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_Nahrobek1 : acd_cup_decor_base {
		model = "ca\buildings\misc\Nahrobek1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Nahrobek1.jpg";
		displayName = "Nahrobek1";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_Nahrobek2 : acd_cup_decor_base {
		model = "ca\buildings\misc\Nahrobek2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Nahrobek2.jpg";
		displayName = "Nahrobek2";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_Nahrobek3 : acd_cup_decor_base {
		model = "ca\buildings\misc\Nahrobek3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Nahrobek3.jpg";
		displayName = "Nahrobek3";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_Nahrobek4 : acd_cup_decor_base {
		model = "ca\buildings\misc\Nahrobek4.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Nahrobek4.jpg";
		displayName = "Nahrobek4";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_Nahrobek5 : acd_cup_decor_base {
		model = "ca\buildings\misc\Nahrobek5.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Nahrobek5.jpg";
		displayName = "Nahrobek5";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_nastenka2 : acd_cup_decor_base {
		model = "ca\buildings\misc\nastenka2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\nastenka2.jpg";
		displayName = "nastenka2";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_nastenka3 : acd_cup_decor_base {
		model = "ca\buildings\misc\nastenka3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\nastenka3.jpg";
		displayName = "nastenka3";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_stanek_1 : acd_cup_decor_base {
		model = "ca\buildings\misc\stanek_1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stanek_1.jpg";
		displayName = "stanek_1";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stanek_1B : acd_cup_decor_base {
		model = "ca\buildings\misc\stanek_1B.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stanek_1B.jpg";
		displayName = "stanek_1B";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stanek_1C : acd_cup_decor_base {
		model = "ca\buildings\misc\stanek_1C.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stanek_1C.jpg";
		displayName = "stanek_1C";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stanek_2 : acd_cup_decor_base {
		model = "ca\buildings\misc\stanek_2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stanek_2.jpg";
		displayName = "stanek_2";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stanek_2B : acd_cup_decor_base {
		model = "ca\buildings\misc\stanek_2B.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stanek_2B.jpg";
		displayName = "stanek_2B";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stanek_2C : acd_cup_decor_base {
		model = "ca\buildings\misc\stanek_2C.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stanek_2C.jpg";
		displayName = "stanek_2C";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stanek_3 : acd_cup_decor_base {
		model = "ca\buildings\misc\stanek_3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stanek_3.jpg";
		displayName = "stanek_3";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stanek_3B : acd_cup_decor_base {
		model = "ca\buildings\misc\stanek_3B.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stanek_3B.jpg";
		displayName = "stanek_3B";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stanek_3C : acd_cup_decor_base {
		model = "ca\buildings\misc\stanek_3C.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stanek_3C.jpg";
		displayName = "stanek_3C";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stanek_3_d : acd_cup_decor_base {
		model = "ca\buildings\misc\stanek_3_d.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stanek_3_d.jpg";
		displayName = "stanek_3_d";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stanek_4 : acd_cup_decor_base {
		model = "ca\buildings\misc\stanek_4.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stanek_4.jpg";
		displayName = "stanek_4";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stanek_4B : acd_cup_decor_base {
		model = "ca\buildings\misc\stanek_4B.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stanek_4B.jpg";
		displayName = "stanek_4B";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stanek_4C : acd_cup_decor_base {
		model = "ca\buildings\misc\stanek_4C.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stanek_4C.jpg";
		displayName = "stanek_4C";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_pumpa : acd_cup_decor_base {
		model = "ca\buildings\misc\pumpa.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\pumpa.jpg";
		displayName = "Water Pump";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_A_AdvertColumn : acd_cup_decor_base {
		model = "ca\buildings2\A_AdvertisingColumn\A_AdvertColumn.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\A_AdvertColumn.jpg";
		displayName = "advertcolumn";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_T34 : acd_cup_decor_base {
		model = "ca\buildings2\A_Statue\T34.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\T34.jpg";
		displayName = "T34";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Ind_TankSmall2 : acd_cup_decor_base {
		model = "ca\buildings2\Ind_Tank\Ind_TankSmall2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Ind_TankSmall2.jpg";
		displayName = "Small fuel tank";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Misc_Concrete_High : acd_cup_decor_base {
		model = "ca\buildings2\Misc_concrete\Misc_Concrete_High.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_Concrete_High.jpg";
		displayName = "Concrete panels";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_krater : acd_cup_decor_base {
		model = "ca\data\krater.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\krater.jpg";
		displayName = "krater";
		editorSubcategory = "acd_decorations_terEffects";
	};
	class acd_cup_sticks : acd_cup_decor_base {
		model = "ca\data\ParticleEffects\hit_leaves\sticks.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sticks.jpg";
		displayName = "sticks";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_sticks_green : acd_cup_decor_base {
		model = "ca\data\ParticleEffects\hit_leaves\sticks_green.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sticks_green.jpg";
		displayName = "sticks_green";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_ClutterFix_Grass_General : acd_cup_decor_base {
		model = "ca\hotfix\ClutterFix_Grass_General.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ClutterFix_Grass_General.jpg";
		displayName = "ClutterFix_Grass_General";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_ClutterFix_Grass_Long : acd_cup_decor_base {
		model = "ca\hotfix\ClutterFix_Grass_Long.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ClutterFix_Grass_Long.jpg";
		displayName = "ClutterFix_Grass_Long";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_L39wreck : acd_cup_decor_base {
		model = "ca\l39\L39wreck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\L39wreck.jpg";
		displayName = "l39wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_Barel1 : acd_cup_decor_base {
		model = "ca\misc\Barel1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel1.jpg";
		displayName = "Barrel (red)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Barel2 : acd_cup_decor_base {
		model = "ca\misc\Barel2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel2.jpg";
		displayName = "Barrel (brown)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Barel3 : acd_cup_decor_base {
		model = "ca\misc\Barel3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel3.jpg";
		displayName = "Barrel (yellow)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Barel4 : acd_cup_decor_base {
		model = "ca\misc\Barel4.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel4.jpg";
		displayName = "Barrel (black)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Barel5 : acd_cup_decor_base {
		model = "ca\misc\Barel5.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel5.jpg";
		displayName = "Barrel (green)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Barel6 : acd_cup_decor_base {
		model = "ca\misc\Barel6.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel6.jpg";
		displayName = "Barrel (purple)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Barel7 : acd_cup_decor_base {
		model = "ca\misc\Barel7.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel7.jpg";
		displayName = "Barrel fire";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Barel8 : acd_cup_decor_base {
		model = "ca\misc\Barel8.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel8.jpg";
		displayName = "barel8";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Barels : acd_cup_decor_base {
		model = "ca\misc\Barels.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barels.jpg";
		displayName = "Barrels";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Barels2 : acd_cup_decor_base {
		model = "ca\misc\Barels2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barels2.jpg";
		displayName = "barels2";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Barels3 : acd_cup_decor_base {
		model = "ca\misc\Barels3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barels3.jpg";
		displayName = "barels3";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Betacam : acd_cup_decor_base {
		model = "ca\misc\Betacam.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Betacam.jpg";
		displayName = "Camera";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_BetonL_maly : acd_cup_decor_base {
		model = "ca\misc\BetonL_maly.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\BetonL_maly.jpg";
		displayName = "BetonL_maly";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_BetonL_velky : acd_cup_decor_base {
		model = "ca\misc\BetonL_velky.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\BetonL_velky.jpg";
		displayName = "BetonL_velky";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Betonovy_blok : acd_cup_decor_base {
		model = "ca\misc\Betonovy_blok.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Betonovy_blok.jpg";
		displayName = "Betonovy_blok";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_Betonovy_blok_zacatek : acd_cup_decor_base {
		model = "ca\misc\Betonovy_blok_zacatek.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Betonovy_blok_zacatek.jpg";
		displayName = "Betonovy_blok_zacatek";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_Bilboard_Ada : acd_cup_decor_base {
		model = "ca\misc\Bilboard_Ada.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_Ada.jpg";
		displayName = "Bilboard_Ada";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_alkohol : acd_cup_decor_base {
		model = "ca\misc\Bilboard_alkohol.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_alkohol.jpg";
		displayName = "bilboard_alkohol";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_Beach : acd_cup_decor_base {
		model = "ca\misc\Bilboard_Beach.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_Beach.jpg";
		displayName = "bilboard_beach";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_Bienvenudo : acd_cup_decor_base {
		model = "ca\misc\Bilboard_Bienvenudo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_Bienvenudo.jpg";
		displayName = "Bilboard_Bienvenudo";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_che : acd_cup_decor_base {
		model = "ca\misc\Bilboard_che.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_che.jpg";
		displayName = "Bilboard_che";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_cibulka : acd_cup_decor_base {
		model = "ca\misc\Bilboard_cibulka.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_cibulka.jpg";
		displayName = "bilboard_cibulka";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_cigara_chernomorky : acd_cup_decor_base {
		model = "ca\misc\Bilboard_cigara_chernomorky.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_cigara_chernomorky.jpg";
		displayName = "bilboard_cigara_chernomorky";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_Escape : acd_cup_decor_base {
		model = "ca\misc\Bilboard_Escape.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_Escape.jpg";
		displayName = "bilboard_escape";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_Everon : acd_cup_decor_base {
		model = "ca\misc\Bilboard_Everon.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_Everon.jpg";
		displayName = "bilboard_everon";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_HELLMART : acd_cup_decor_base {
		model = "ca\misc\Bilboard_HELLMART.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_HELLMART.jpg";
		displayName = "Bilboard_HELLMART";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_hlinik : acd_cup_decor_base {
		model = "ca\misc\Bilboard_hlinik.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_hlinik.jpg";
		displayName = "bilboard_hlinik";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_Konstantin : acd_cup_decor_base {
		model = "ca\misc\Bilboard_Konstantin.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_Konstantin.jpg";
		displayName = "Bilboard_Konstantin";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_likery_bardak : acd_cup_decor_base {
		model = "ca\misc\Bilboard_likery_bardak.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_likery_bardak.jpg";
		displayName = "bilboard_likery_bardak";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_Nogova : acd_cup_decor_base {
		model = "ca\misc\Bilboard_Nogova.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_Nogova.jpg";
		displayName = "bilboard_nogova";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_nopassarao : acd_cup_decor_base {
		model = "ca\misc\Bilboard_nopassarao.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_nopassarao.jpg";
		displayName = "Bilboard_nopassarao";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_pivo_small : acd_cup_decor_base {
		model = "ca\misc\Bilboard_pivo_small.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_pivo_small.jpg";
		displayName = "Bilboard_pivo_small";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_pizza_presto : acd_cup_decor_base {
		model = "ca\misc\Bilboard_pizza_presto.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_pizza_presto.jpg";
		displayName = "bilboard_pizza_presto";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_Revolucion : acd_cup_decor_base {
		model = "ca\misc\Bilboard_Revolucion.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_Revolucion.jpg";
		displayName = "Bilboard_Revolucion";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_Riviera : acd_cup_decor_base {
		model = "ca\misc\Bilboard_Riviera.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_Riviera.jpg";
		displayName = "Bilboard_Riviera";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_seci_stroje : acd_cup_decor_base {
		model = "ca\misc\Bilboard_seci_stroje.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_seci_stroje.jpg";
		displayName = "bilboard_seci_stroje";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_smadny_maskrnik : acd_cup_decor_base {
		model = "ca\misc\Bilboard_smadny_maskrnik.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_smadny_maskrnik.jpg";
		displayName = "bilboard_smadny_maskrnik";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_strana_noveho_radu : acd_cup_decor_base {
		model = "ca\misc\Bilboard_strana_noveho_radu.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_strana_noveho_radu.jpg";
		displayName = "bilboard_strana_noveho_radu";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_test : acd_cup_decor_base {
		model = "ca\misc\Bilboard_test.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_test.jpg";
		displayName = "Bilboard_test";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_toaletak_armasan : acd_cup_decor_base {
		model = "ca\misc\Bilboard_toaletak_armasan.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_toaletak_armasan.jpg";
		displayName = "bilboard_toaletak_armasan";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_Traidores : acd_cup_decor_base {
		model = "ca\misc\Bilboard_Traidores.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_Traidores.jpg";
		displayName = "Bilboard_Traidores";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_veterans_choice : acd_cup_decor_base {
		model = "ca\misc\Bilboard_veterans_choice.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_veterans_choice.jpg";
		displayName = "bilboard_veterans_choice";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_vodka : acd_cup_decor_base {
		model = "ca\misc\Bilboard_vodka.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_vodka.jpg";
		displayName = "bilboard_vodka";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_volte_cernaruske_hnuti : acd_cup_decor_base {
		model = "ca\misc\Bilboard_volte_cernaruske_hnuti.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_volte_cernaruske_hnuti.jpg";
		displayName = "bilboard_volte_cernaruske_hnuti";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_vstup_do_CDF : acd_cup_decor_base {
		model = "ca\misc\Bilboard_vstup_do_CDF.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_vstup_do_CDF.jpg";
		displayName = "bilboard_vstup_do_cdf";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_work : acd_cup_decor_base {
		model = "ca\misc\Bilboard_work.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_work.jpg";
		displayName = "Bilboard_work";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Bilboard_zlute_zgrynda : acd_cup_decor_base {
		model = "ca\misc\Bilboard_zlute_zgrynda.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bilboard_zlute_zgrynda.jpg";
		displayName = "bilboard_zlute_zgrynda";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_BMP2_AF : acd_cup_decor_base {
		model = "ca\misc\BMP2_AF.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\BMP2_AF.jpg";
		displayName = "BMP2_AF";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_bmp2_wrecked : acd_cup_decor_base {
		model = "ca\misc\bmp2_wrecked.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bmp2_wrecked.jpg";
		displayName = "BMP-2";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_BRDM2_wrecked : acd_cup_decor_base {
		model = "ca\misc\BRDM2_wrecked.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\BRDM2_wrecked.jpg";
		displayName = "BRDM-2";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_bvp1T : acd_cup_decor_base {
		model = "ca\misc\bvp1T.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bvp1T.jpg";
		displayName = "bvp1T";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_Danger : acd_cup_decor_base {
		model = "ca\misc\Danger!.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Danger!.jpg";
		displayName = "Danger!";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Danger_res : acd_cup_decor_base {
		model = "ca\misc\Danger_res.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Danger_res.jpg";
		displayName = "Danger Independent";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Danger_rus : acd_cup_decor_base {
		model = "ca\misc\Danger_rus.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Danger_rus.jpg";
		displayName = "Danger OPFOR";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Danger_us : acd_cup_decor_base {
		model = "ca\misc\Danger_us.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Danger_us.jpg";
		displayName = "Danger BLUFOR";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_datsun01T : acd_cup_decor_base {
		model = "ca\misc\datsun01T.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\datsun01T.jpg";
		displayName = "Pickup";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_datsun02T : acd_cup_decor_base {
		model = "ca\misc\datsun02T.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\datsun02T.jpg";
		displayName = "Pickup II";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_drevena_bedna : acd_cup_decor_base {
		model = "ca\misc\drevena_bedna.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\drevena_bedna.jpg";
		displayName = "Wooden crate";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_Drevtank : acd_cup_decor_base {
		model = "ca\misc\Drevtank.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Drevtank.jpg";
		displayName = "Tank";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Drevtank_ruin : acd_cup_decor_base {
		model = "ca\misc\Drevtank_ruin.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Drevtank_ruin.jpg";
		displayName = "Drevtank_ruin";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_flasa_1 : acd_cup_decor_base {
		model = "ca\misc\flasa_1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\flasa_1.jpg";
		displayName = "flasa_1";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_flasa_1H : acd_cup_decor_base {
		model = "ca\misc\flasa_1H.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\flasa_1H.jpg";
		displayName = "flasa_1H";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_flasa_2 : acd_cup_decor_base {
		model = "ca\misc\flasa_2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\flasa_2.jpg";
		displayName = "flasa_2";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_flasa_2H : acd_cup_decor_base {
		model = "ca\misc\flasa_2H.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\flasa_2H.jpg";
		displayName = "flasa_2H";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_flasa_3 : acd_cup_decor_base {
		model = "ca\misc\flasa_3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\flasa_3.jpg";
		displayName = "flasa_3";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_flasa_3H : acd_cup_decor_base {
		model = "ca\misc\flasa_3H.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\flasa_3H.jpg";
		displayName = "flasa_3H";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_Fort_Barricade : acd_cup_decor_base {
		model = "ca\misc\Fort_Barricade.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Fort_Barricade.jpg";
		displayName = "Barricade";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_Fort_EnvelopeBig : acd_cup_decor_base {
		model = "ca\misc\Fort_EnvelopeBig.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Fort_EnvelopeBig.jpg";
		displayName = "Trench";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_Fort_EnvelopeSmall : acd_cup_decor_base {
		model = "ca\misc\Fort_EnvelopeSmall.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Fort_EnvelopeSmall.jpg";
		displayName = "Trench (Small)";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_Fort_Razorwire : acd_cup_decor_base {
		model = "ca\misc\Fort_Razorwire.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Fort_Razorwire.jpg";
		displayName = "Wire";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_Fuel_tank_big : acd_cup_decor_base {
		model = "ca\misc\Fuel_tank_big.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Fuel_tank_big.jpg";
		displayName = "Fuel station";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_fuel_tank_small : acd_cup_decor_base {
		model = "ca\misc\fuel_tank_small.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\fuel_tank_small.jpg";
		displayName = "Building";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Fuel_tank_stairs : acd_cup_decor_base {
		model = "ca\misc\Fuel_tank_stairs.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Fuel_tank_stairs.jpg";
		displayName = "Building";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_garbage_metal : acd_cup_decor_base {
		model = "ca\misc\garbage_metal.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\garbage_metal.jpg";
		displayName = "garbage_metal";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_garbage_misc : acd_cup_decor_base {
		model = "ca\misc\garbage_misc.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\garbage_misc.jpg";
		displayName = "garbage_misc";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_garbage_paleta : acd_cup_decor_base {
		model = "ca\misc\garbage_paleta.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\garbage_paleta.jpg";
		displayName = "garbage_paleta";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_garbage_plastic : acd_cup_decor_base {
		model = "ca\misc\garbage_plastic.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\garbage_plastic.jpg";
		displayName = "garbage_plastic";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_ground_garbage_long : acd_cup_decor_base {
		model = "ca\misc\ground_garbage_long.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ground_garbage_long.jpg";
		displayName = "ground_garbage_long";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_ground_garbage_square3 : acd_cup_decor_base {
		model = "ca\misc\ground_garbage_square3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ground_garbage_square3.jpg";
		displayName = "ground_garbage_square3";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_ground_garbage_square5 : acd_cup_decor_base {
		model = "ca\misc\ground_garbage_square5.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ground_garbage_square5.jpg";
		displayName = "ground_garbage_square5";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_hiluxT : acd_cup_decor_base {
		model = "ca\misc\hiluxT.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hiluxT.jpg";
		displayName = "Off-road";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_jehlan_cs : acd_cup_decor_base {
		model = "ca\misc\jehlan_cs.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\jehlan_cs.jpg";
		displayName = "jehlan_cs";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_jezek_kov1 : acd_cup_decor_base {
		model = "ca\misc\jezek kov.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\jezek kov.jpg";
		displayName = "jezek kov";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_jezekbeton : acd_cup_decor_base {
		model = "ca\misc\jezekbeton.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\jezekbeton.jpg";
		displayName = "jezekbeton";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_jezek_kov2 : acd_cup_decor_base {
		model = "ca\misc\jezek_kov.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\jezek_kov.jpg";
		displayName = "Hedgehog (Steel)";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_junkpile : acd_cup_decor_base {
		model = "ca\misc\junkpile.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\junkpile.jpg";
		displayName = "junkpile";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_Kolotoc : acd_cup_decor_base {
		model = "ca\misc\Kolotoc.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kolotoc.jpg";
		displayName = "Carousel";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Kontejner : acd_cup_decor_base {
		model = "ca\misc\Kontejner.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kontejner.jpg";
		displayName = "Trash";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_Kontejner_papir : acd_cup_decor_base {
		model = "ca\misc\Kontejner_papir.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kontejner_papir.jpg";
		displayName = "Trash Paper";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_Kontejner_plasty : acd_cup_decor_base {
		model = "ca\misc\Kontejner_plasty.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kontejner_plasty.jpg";
		displayName = "Trash Plastic";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_Kontejner_sklo : acd_cup_decor_base {
		model = "ca\misc\Kontejner_sklo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kontejner_sklo.jpg";
		displayName = "Trash Glass";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_Kulata_prolezacka : acd_cup_decor_base {
		model = "ca\misc\Kulata_prolezacka.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kulata_prolezacka.jpg";
		displayName = "Swingset";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_lekarnika_proxy : acd_cup_decor_base {
		model = "ca\misc\lekarnika_proxy.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lekarnika_proxy.jpg";
		displayName = "lekarnika_proxy";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_MailBoxNorth : acd_cup_decor_base {
		model = "ca\misc\MailBoxNorth.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\MailBoxNorth.jpg";
		displayName = "MailBoxNorth";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_MailBoxSouth : acd_cup_decor_base {
		model = "ca\misc\MailBoxSouth.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\MailBoxSouth.jpg";
		displayName = "MailBoxSouth";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Maly_Kolotoc : acd_cup_decor_base {
		model = "ca\misc\Maly_Kolotoc.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Maly_Kolotoc.jpg";
		displayName = "Carousel small";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Mi8_Crashed : acd_cup_decor_base {
		model = "ca\misc\Mi8_Crashed.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Mi8_Crashed.jpg";
		displayName = "Mi-8";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_Misc_Backpackheap : acd_cup_decor_base {
		model = "ca\misc\Misc_Backpackheap.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_Backpackheap.jpg";
		displayName = "Backpack heap";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_Misc_cargo_cont_net1 : acd_cup_decor_base {
		model = "ca\misc\Misc_cargo_cont_net1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_cargo_cont_net1.jpg";
		displayName = "Container in net";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_Misc_cargo_cont_tiny : acd_cup_decor_base {
		model = "ca\misc\Misc_cargo_cont_tiny.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_cargo_cont_tiny.jpg";
		displayName = "Cargo container tiny";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_Misc_palletsfoiled : acd_cup_decor_base {
		model = "ca\misc\Misc_palletsfoiled.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_palletsfoiled.jpg";
		displayName = "Foiled pallet";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Misc_palletsfoiled_heap : acd_cup_decor_base {
		model = "ca\misc\Misc_palletsfoiled_heap.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_palletsfoiled_heap.jpg";
		displayName = "Foiled pallets";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Misc_TyreHeap : acd_cup_decor_base {
		model = "ca\misc\Misc_TyreHeap.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_TyreHeap.jpg";
		displayName = "Tyre heap";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_misc_videoprojector : acd_cup_decor_base {
		model = "ca\misc\misc_videoprojector.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\misc_videoprojector.jpg";
		displayName = "Videoprojector";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_misc_videoprojector_platno : acd_cup_decor_base {
		model = "ca\misc\misc_videoprojector_platno.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\misc_videoprojector_platno.jpg";
		displayName = "Videoprojector Screen";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_Mrtvola_Army1 : acd_cup_decor_base {
		model = "ca\misc\Mrtvola_Army1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Mrtvola_Army1.jpg";
		displayName = "Body";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_Mrtvola_Army2 : acd_cup_decor_base {
		model = "ca\misc\Mrtvola_Army2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Mrtvola_Army2.jpg";
		displayName = "Mrtvola_Army2";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_Mrtvola_Army3 : acd_cup_decor_base {
		model = "ca\misc\Mrtvola_Army3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Mrtvola_Army3.jpg";
		displayName = "Mrtvola_Army3";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_mutt_vysilacka : acd_cup_decor_base {
		model = "ca\misc\mutt_vysilacka.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\mutt_vysilacka.jpg";
		displayName = "Radio (RT-254)";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_cup_nastenkaX : acd_cup_decor_base {
		model = "ca\misc\nastenkaX.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\nastenkaX.jpg";
		displayName = "Map (Sahrani)";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_cup_obstacle_get_over : acd_cup_decor_base {
		model = "ca\misc\obstacle_get_over.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\obstacle_get_over.jpg";
		displayName = "Obstacle (get over)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_obstacle_prone : acd_cup_decor_base {
		model = "ca\misc\obstacle_prone.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\obstacle_prone.jpg";
		displayName = "Obstacle (prone)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_obstacle_run_duck : acd_cup_decor_base {
		model = "ca\misc\obstacle_run_duck.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\obstacle_run_duck.jpg";
		displayName = "Obstacle (duck run)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_Odpadkovy_kos : acd_cup_decor_base {
		model = "ca\misc\Odpadkovy_kos.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Odpadkovy_kos.jpg";
		displayName = "Odpadkovy_kos";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_paletaA : acd_cup_decor_base {
		model = "ca\misc\paletaA.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\paletaA.jpg";
		displayName = "Pallet";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_paletyC : acd_cup_decor_base {
		model = "ca\misc\paletyC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\paletyC.jpg";
		displayName = "Pallets";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_paletyD : acd_cup_decor_base {
		model = "ca\misc\paletyD.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\paletyD.jpg";
		displayName = "paletyD";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Pallets_Column : acd_cup_decor_base {
		model = "ca\misc\Pallets_Column.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Pallets_Column.jpg";
		displayName = "pallets_column";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_pa_sx : acd_cup_decor_base {
		model = "ca\misc\pa_sx.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\pa_sx.jpg";
		displayName = "pa_sx";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_PC : acd_cup_decor_base {
		model = "ca\misc\PC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\PC.jpg";
		displayName = "Computer";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_phone_box_north : acd_cup_decor_base {
		model = "ca\misc\phone_box_north.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\phone_box_north.jpg";
		displayName = "phone_box_north";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_phone_box_south : acd_cup_decor_base {
		model = "ca\misc\phone_box_south.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\phone_box_south.jpg";
		displayName = "phone_box_south";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Piskoviste : acd_cup_decor_base {
		model = "ca\misc\Piskoviste.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Piskoviste.jpg";
		displayName = "Sandpit";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_plechovka_1 : acd_cup_decor_base {
		model = "ca\misc\plechovka_1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\plechovka_1.jpg";
		displayName = "Can (small)";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_plechovka_1H : acd_cup_decor_base {
		model = "ca\misc\plechovka_1H.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\plechovka_1H.jpg";
		displayName = "plechovka_1H";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_plechovka_2 : acd_cup_decor_base {
		model = "ca\misc\plechovka_2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\plechovka_2.jpg";
		displayName = "plechovka_2";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_plechovka_2H : acd_cup_decor_base {
		model = "ca\misc\plechovka_2H.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\plechovka_2H.jpg";
		displayName = "plechovka_2H";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_plechovka_3 : acd_cup_decor_base {
		model = "ca\misc\plechovka_3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\plechovka_3.jpg";
		displayName = "plechovka_3";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_plechovka_3H : acd_cup_decor_base {
		model = "ca\misc\plechovka_3H.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\plechovka_3H.jpg";
		displayName = "plechovka_3H";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_popelnice : acd_cup_decor_base {
		model = "ca\misc\popelnice.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\popelnice.jpg";
		displayName = "Trashcan";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_popelnice_2 : acd_cup_decor_base {
		model = "ca\misc\popelnice_2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\popelnice_2.jpg";
		displayName = "popelnice_2";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_radio : acd_cup_decor_base {
		model = "ca\misc\radio.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\radio.jpg";
		displayName = "Radio";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_radio2 : acd_cup_decor_base {
		model = "ca\misc\radio2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\radio2.jpg";
		displayName = "radio2";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_sekyraspalek : acd_cup_decor_base {
		model = "ca\misc\sekyraspalek.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sekyraspalek.jpg";
		displayName = "Woodblock w. axe";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_seno_balik : acd_cup_decor_base {
		model = "ca\misc\seno_balik.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\seno_balik.jpg";
		displayName = "Black cube";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Sign150x50_North01 : acd_cup_decor_base {
		model = "ca\misc\Sign150x50_North01.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign150x50_North01.jpg";
		displayName = "Sign150x50_North01";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign150x50_North02 : acd_cup_decor_base {
		model = "ca\misc\Sign150x50_North02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign150x50_North02.jpg";
		displayName = "Sign150x50_North02";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign150x50_South01 : acd_cup_decor_base {
		model = "ca\misc\Sign150x50_South01.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign150x50_South01.jpg";
		displayName = "Sign150x50_South01";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign150x50_South02 : acd_cup_decor_base {
		model = "ca\misc\Sign150x50_South02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign150x50_South02.jpg";
		displayName = "Sign150x50_South02";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign150x50_South03 : acd_cup_decor_base {
		model = "ca\misc\Sign150x50_South03.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign150x50_South03.jpg";
		displayName = "Sign150x50_South03";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign300x90 : acd_cup_decor_base {
		model = "ca\misc\Sign300x90.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign300x90.jpg";
		displayName = "Sign300x90";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign300x90_North01 : acd_cup_decor_base {
		model = "ca\misc\Sign300x90_North01.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign300x90_North01.jpg";
		displayName = "Sign300x90_North01";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign300x90_North02 : acd_cup_decor_base {
		model = "ca\misc\Sign300x90_North02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign300x90_North02.jpg";
		displayName = "Sign300x90_North02";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign300x90_South01 : acd_cup_decor_base {
		model = "ca\misc\Sign300x90_South01.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign300x90_South01.jpg";
		displayName = "Sign300x90_South01";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign300x90_South02 : acd_cup_decor_base {
		model = "ca\misc\Sign300x90_South02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign300x90_South02.jpg";
		displayName = "Sign300x90_South02";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign300x90_South03 : acd_cup_decor_base {
		model = "ca\misc\Sign300x90_South03.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign300x90_South03.jpg";
		displayName = "Sign300x90_South03";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign40x120 : acd_cup_decor_base {
		model = "ca\misc\Sign40x120.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign40x120.jpg";
		displayName = "Sign40x120";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign40x120_North01 : acd_cup_decor_base {
		model = "ca\misc\Sign40x120_North01.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign40x120_North01.jpg";
		displayName = "Sign40x120_North01";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign40x120_South01 : acd_cup_decor_base {
		model = "ca\misc\Sign40x120_South01.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign40x120_South01.jpg";
		displayName = "Sign40x120_South01";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign40x120_South02 : acd_cup_decor_base {
		model = "ca\misc\Sign40x120_South02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign40x120_South02.jpg";
		displayName = "Sign40x120_South02";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign40x120_South03 : acd_cup_decor_base {
		model = "ca\misc\Sign40x120_South03.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign40x120_South03.jpg";
		displayName = "Sign40x120_South03";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign150x50 : acd_cup_decor_base {
		model = "ca\misc\Sign150x50.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign150x50.jpg";
		displayName = "Sign150x50";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_sign_board : acd_cup_decor_base {
		model = "ca\misc\sign_board.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sign_board.jpg";
		displayName = "Danger";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_sign_danger : acd_cup_decor_base {
		model = "ca\misc\sign_danger.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sign_danger.jpg";
		displayName = "traffics_danger";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_sign_danger_mines : acd_cup_decor_base {
		model = "ca\misc\sign_danger_mines.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sign_danger_mines.jpg";
		displayName = "danger_mines";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_sign_one_leg_h : acd_cup_decor_base {
		model = "ca\misc\sign_one_leg_h.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sign_one_leg_h.jpg";
		displayName = "Border sign";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_sign_one_leg_v_nodumping : acd_cup_decor_base {
		model = "ca\misc\sign_one_leg_v_nodumping.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sign_one_leg_v_nodumping.jpg";
		displayName = "sign_one_leg_v_nodumping";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_sign_one_leg_v_quarry : acd_cup_decor_base {
		model = "ca\misc\sign_one_leg_v_quarry.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sign_one_leg_v_quarry.jpg";
		displayName = "sign_one_leg_v_quarry";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_sign_wooden_relic_building : acd_cup_decor_base {
		model = "ca\misc\sign_wooden_relic_building.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sign_wooden_relic_building.jpg";
		displayName = "wooden_relic_building";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_sign_wooden_relic_tree : acd_cup_decor_base {
		model = "ca\misc\sign_wooden_relic_tree.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sign_wooden_relic_tree.jpg";
		displayName = "wooden_relic_tree";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_sign_wooden_relic_zagorie : acd_cup_decor_base {
		model = "ca\misc\sign_wooden_relic_zagorie.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sign_wooden_relic_zagorie.jpg";
		displayName = "wooden_relic_zagorie";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_SmallObj_dog_tags : acd_cup_decor_base {
		model = "ca\misc\SmallObj_dog_tags.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SmallObj_dog_tags.jpg";
		displayName = "Evidence (Dog tags)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_SmallObj_dog_tags_WPN : acd_cup_decor_base {
		model = "ca\misc\SmallObj_dog_tags_WPN.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SmallObj_dog_tags_WPN.jpg";
		displayName = "SmallObj_dog_tags_WPN";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_SmallObj_file_map : acd_cup_decor_base {
		model = "ca\misc\SmallObj_file_map.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SmallObj_file_map.jpg";
		displayName = "Evidence (Map)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_SmallObj_file_map_WPN : acd_cup_decor_base {
		model = "ca\misc\SmallObj_file_map_WPN.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SmallObj_file_map_WPN.jpg";
		displayName = "SmallObj_file_map_WPN";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_SmallObj_File_photos : acd_cup_decor_base {
		model = "ca\misc\SmallObj_File_photos.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SmallObj_File_photos.jpg";
		displayName = "Evidence (Photos)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_SmallObj_File_photos_WPN : acd_cup_decor_base {
		model = "ca\misc\SmallObj_File_photos_WPN.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SmallObj_File_photos_WPN.jpg";
		displayName = "SmallObj_File_photos_WPN";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_SmallObj_money : acd_cup_decor_base {
		model = "ca\misc\SmallObj_money.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SmallObj_money.jpg";
		displayName = "Evidence (Money)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_SmallObj_money_WPN : acd_cup_decor_base {
		model = "ca\misc\SmallObj_money_WPN.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SmallObj_money_WPN.jpg";
		displayName = "SmallObj_money_WPN";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_SmallObj_moscow_docs : acd_cup_decor_base {
		model = "ca\misc\SmallObj_moscow_docs.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SmallObj_moscow_docs.jpg";
		displayName = "Evidence (File1)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_SmallObj_moscow_docs_WPN : acd_cup_decor_base {
		model = "ca\misc\SmallObj_moscow_docs_WPN.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SmallObj_moscow_docs_WPN.jpg";
		displayName = "SmallObj_moscow_docs_WPN";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_SmallObj_spukayev_docs : acd_cup_decor_base {
		model = "ca\misc\SmallObj_spukayev_docs.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SmallObj_spukayev_docs.jpg";
		displayName = "Evidence (File2)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_SmallObj_spukayev_docs_WPN : acd_cup_decor_base {
		model = "ca\misc\SmallObj_spukayev_docs_WPN.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SmallObj_spukayev_docs_WPN.jpg";
		displayName = "SmallObj_spukayev_docs_WPN";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_snowman : acd_cup_decor_base {
		model = "ca\misc\snowman.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\snowman.jpg";
		displayName = "snowman";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_T72_Wrecked : acd_cup_decor_base {
		model = "ca\misc\T72_Wrecked.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\T72_Wrecked.jpg";
		displayName = "T-72";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_t72_wrecked_turret : acd_cup_decor_base {
		model = "ca\misc\t72_wrecked_turret.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t72_wrecked_turret.jpg";
		displayName = "T-72 Turret";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_uaz_wrecked : acd_cup_decor_base {
		model = "ca\misc\uaz_wrecked.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\uaz_wrecked.jpg";
		displayName = "UAZ";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_UH60_Crashed : acd_cup_decor_base {
		model = "ca\misc\UH60_Crashed.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\UH60_Crashed.jpg";
		displayName = "UH-60 Wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_uralT : acd_cup_decor_base {
		model = "ca\misc\uralT.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\uralT.jpg";
		displayName = "uralT";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_ural_wrecked : acd_cup_decor_base {
		model = "ca\misc\ural_wrecked.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ural_wrecked.jpg";
		displayName = "Ural";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_t_pinusS2f_destruct : acd_cup_decor_base {
		model = "ca\misc\t_pinusS2f_destruct.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_pinusS2f_destruct.jpg";
		displayName = "pinuss2f_destruct";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_uzaverka : acd_cup_decor_base {
		model = "ca\misc\uzaverka.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\uzaverka.jpg";
		displayName = "uzaverka";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_Gunrack1 : acd_cup_decor_base {
		model = "ca\misc2\Gunrack1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Gunrack1.jpg";
		displayName = "Gun rack";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_cup_Gunrack2 : acd_cup_decor_base {
		model = "ca\misc2\Gunrack2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Gunrack2.jpg";
		displayName = "Gun rack (rifles)";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_cup_Gunrack_Empty : acd_cup_decor_base {
		model = "ca\misc2\Gunrack_Empty.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Gunrack_Empty.jpg";
		displayName = "gunrack_empty";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_cup_desk : acd_cup_decor_base {
		model = "ca\misc2\Desk\desk.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\desk.jpg";
		displayName = "Desk";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_explosive_1 : acd_cup_decor_base {
		model = "ca\misc2\explosive\explosive.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\explosive.jpg";
		displayName = "Explosive Charge";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_MetalBucket : acd_cup_decor_base {
		model = "ca\misc2\MetalBucket\MetalBucket.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\MetalBucket.jpg";
		displayName = "Bucket";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_notebook : acd_cup_decor_base {
		model = "ca\misc2\Notebook\Notebook.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Notebook.jpg";
		displayName = "Notebook";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_PowGen_Big : acd_cup_decor_base {
		model = "ca\misc2\Samsite\PowGen_Big.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\PowGen_Big.jpg";
		displayName = "Generator trailer";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_PowGen_Big_ruins : acd_cup_decor_base {
		model = "ca\misc2\Samsite\PowGen_Big_ruins.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\PowGen_Big_ruins.jpg";
		displayName = "PowGen_Big_ruins";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_SkeetMachine : acd_cup_decor_base {
		model = "ca\misc2\SkeetMachine\SkeetMachine.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SkeetMachine.jpg";
		displayName = "Skeet Machine";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_SkeetDisk : acd_cup_decor_base {
		model = "ca\misc2\SkeetMachine\SkeetDisk.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SkeetDisk.jpg";
		displayName = "Skeet Disk";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_SmallTable : acd_cup_decor_base {
		model = "ca\misc2\SmallTable\SmallTable.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SmallTable.jpg";
		displayName = "Table (small)";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_smallTV : acd_cup_decor_base {
		model = "ca\misc2\SmallTV\smallTV.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\smallTV.jpg";
		displayName = "TV";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_A_tent : acd_cup_decor_base {
		model = "ca\misc3\A_tent.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\A_tent.jpg";
		displayName = "Old camping tent";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_BoatSmall_1 : acd_cup_decor_base {
		model = "ca\misc3\BoatSmall_1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\BoatSmall_1.jpg";
		displayName = "Small boat";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_BoatSmall_2A : acd_cup_decor_base {
		model = "ca\misc3\BoatSmall_2A.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\BoatSmall_2A.jpg";
		displayName = "Small boat II";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_BoatSmall_2B : acd_cup_decor_base {
		model = "ca\misc3\BoatSmall_2B.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\BoatSmall_2B.jpg";
		displayName = "Small boat III";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_briefcase : acd_cup_decor_base {
		model = "ca\misc3\briefcase.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\briefcase.jpg";
		displayName = "Suitcase";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_campfire : acd_cup_decor_base {
		model = "ca\misc3\campfire.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\campfire.jpg";
		displayName = "Campfire";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_CncBlock : acd_cup_decor_base {
		model = "ca\misc3\CncBlock.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\CncBlock.jpg";
		displayName = "Concrete barrier";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_CncBlock_D : acd_cup_decor_base {
		model = "ca\misc3\CncBlock_D.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\CncBlock_D.jpg";
		displayName = "Concrete barrier (damaged)";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_CncBlock_stripes : acd_cup_decor_base {
		model = "ca\misc3\CncBlock_stripes.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\CncBlock_stripes.jpg";
		displayName = "Concrete barrier (stripes)";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_dragonTeeth : acd_cup_decor_base {
		model = "ca\misc3\dragonTeeth\dragonTeeth.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\dragonTeeth.jpg";
		displayName = "Dragon Teeth (Small)";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_dragonTeethBig : acd_cup_decor_base {
		model = "ca\misc3\dragonTeeth\dragonTeethBig.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\dragonTeethBig.jpg";
		displayName = "Dragon Teeth";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_parabola_big : acd_cup_decor_base {
		model = "ca\misc3\Parabola_big\parabola_big.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\parabola_big.jpg";
		displayName = "Satellite dish";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_PowerGenerator : acd_cup_decor_base {
		model = "ca\misc3\PowerGenerator\PowerGenerator.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\PowerGenerator.jpg";
		displayName = "Power generator";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_satellitePhone : acd_cup_decor_base {
		model = "ca\misc3\satelitePhone\satellitePhone.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\satellitePhone.jpg";
		displayName = "Satellite Phone";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_cup_IED_V1 : acd_cup_decor_base {
		model = "ca\misc_baf\IED_V1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\IED_V1.jpg";
		displayName = "IED_V1";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_IED_V2 : acd_cup_decor_base {
		model = "ca\misc_baf\IED_V2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\IED_V2.jpg";
		displayName = "IED_V2";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_IED_V3 : acd_cup_decor_base {
		model = "ca\misc_baf\IED_V3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\IED_V3.jpg";
		displayName = "IED_V3";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_IED_V4 : acd_cup_decor_base {
		model = "ca\misc_baf\IED_V4.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\IED_V4.jpg";
		displayName = "IED_V4";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_hrobecek_krizek2_ep1 : acd_cup_decor_base {
		model = "ca\misc_e\hrobecek_krizek2_ep1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hrobecek_krizek2_ep1.jpg";
		displayName = "Cross";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_hrobecek_krizekhelma_ep1 : acd_cup_decor_base {
		model = "ca\misc_e\hrobecek_krizekhelma_ep1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hrobecek_krizekhelma_ep1.jpg";
		displayName = "Cross w. helmet";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_concrete_wall : acd_cup_decor_base {
		model = "ca\mp_armory\misc\concrete_wall\concrete_wall.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\concrete_wall.jpg";
		displayName = "Concrete Wall";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_cup_infostand_1 : acd_cup_decor_base {
		model = "ca\mp_armory\misc\Infostands\infostand_1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\infostand_1.jpg";
		displayName = "Infostand 1";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_infostand_2 : acd_cup_decor_base {
		model = "ca\mp_armory\misc\Infostands\infostand_2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\infostand_2.jpg";
		displayName = "Infostand 2";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_info_board_ep1 : acd_cup_decor_base {
		model = "ca\mp_armory\misc\Info_Board\info_board_ep1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\info_board_ep1.jpg";
		displayName = "Info Board";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_laptop : acd_cup_decor_base {
		model = "ca\mp_armory\misc\Laptop\laptop.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\laptop.jpg";
		displayName = "Laptop";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_Akat02S : acd_cup_decor_base {
		model = "ca\plants\Akat02S.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Akat02S.jpg";
		displayName = "Akat02S";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_banana_1 : acd_cup_decor_base {
		model = "ca\plants\banana_1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\banana_1.jpg";
		displayName = "banana_1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_banana_2 : acd_cup_decor_base {
		model = "ca\plants\banana_2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\banana_2.jpg";
		displayName = "banana_2";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_banana_4 : acd_cup_decor_base {
		model = "ca\plants\banana_4.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\banana_4.jpg";
		displayName = "banana_4";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_bodlak_group : acd_cup_decor_base {
		model = "ca\plants\bodlak_group.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bodlak_group.jpg";
		displayName = "bodlak_group";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_bolsevnik_group : acd_cup_decor_base {
		model = "ca\plants\bolsevnik_group.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bolsevnik_group.jpg";
		displayName = "bolsevnik_group";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_clutter_flower_mix : acd_cup_decor_base {
		model = "ca\plants\clutter_flower_mix.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_flower_mix.jpg";
		displayName = "clutter_flower_mix";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_clutter_forest_fern : acd_cup_decor_base {
		model = "ca\plants\clutter_forest_fern.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_forest_fern.jpg";
		displayName = "clutter_forest_fern";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_clutter_grass_desert : acd_cup_decor_base {
		model = "ca\plants\clutter_grass_desert.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_grass_desert.jpg";
		displayName = "clutter_grass_desert";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_clutter_grass_desert2 : acd_cup_decor_base {
		model = "ca\plants\clutter_grass_desert2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_grass_desert2.jpg";
		displayName = "clutter_grass_desert2";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_clutter_grass_flowers : acd_cup_decor_base {
		model = "ca\plants\clutter_grass_flowers.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_grass_flowers.jpg";
		displayName = "clutter_grass_flowers";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_clutter_grass_general : acd_cup_decor_base {
		model = "ca\plants\clutter_grass_general.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_grass_general.jpg";
		displayName = "clutter_grass_general";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_clutter_grass_long : acd_cup_decor_base {
		model = "ca\plants\clutter_grass_long.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_grass_long.jpg";
		displayName = "clutter_grass_long";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_clutter_grass_sevenbaeuty : acd_cup_decor_base {
		model = "ca\plants\clutter_grass_sevenbaeuty.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_grass_sevenbaeuty.jpg";
		displayName = "clutter_grass_sevenbaeuty";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_clutter_grass_short : acd_cup_decor_base {
		model = "ca\plants\clutter_grass_short.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_grass_short.jpg";
		displayName = "clutter_grass_short";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_clutter_grass_yellow : acd_cup_decor_base {
		model = "ca\plants\clutter_grass_yellow.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_grass_yellow.jpg";
		displayName = "clutter_grass_yellow";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_clutter_mochomurka : acd_cup_decor_base {
		model = "ca\plants\clutter_mochomurka.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_mochomurka.jpg";
		displayName = "clutter_mochomurka";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_clutter_muchomurka : acd_cup_decor_base {
		model = "ca\plants\clutter_muchomurka.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_muchomurka.jpg";
		displayName = "clutter_muchomurka";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_clutter_prasivky : acd_cup_decor_base {
		model = "ca\plants\clutter_prasivky.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_prasivky.jpg";
		displayName = "clutter_prasivky";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_clutter_smetanka : acd_cup_decor_base {
		model = "ca\plants\clutter_smetanka.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_smetanka.jpg";
		displayName = "clutter_smetanka";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_clutter_trava_dlouha : acd_cup_decor_base {
		model = "ca\plants\clutter_trava_dlouha.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_trava_dlouha.jpg";
		displayName = "clutter_trava_dlouha";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_clutter_white_flower : acd_cup_decor_base {
		model = "ca\plants\clutter_white_flower.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_white_flower.jpg";
		displayName = "clutter_white_flower";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_DD_borovice : acd_cup_decor_base {
		model = "ca\plants\DD_borovice.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\DD_borovice.jpg";
		displayName = "DD_borovice";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_DD_borovice02 : acd_cup_decor_base {
		model = "ca\plants\DD_borovice02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\DD_borovice02.jpg";
		displayName = "DD_borovice02";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_DD_bush01 : acd_cup_decor_base {
		model = "ca\plants\DD_bush01.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\DD_bush01.jpg";
		displayName = "DD_bush01";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_DD_bush02 : acd_cup_decor_base {
		model = "ca\plants\DD_bush02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\DD_bush02.jpg";
		displayName = "DD_bush02";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_hrusen2 : acd_cup_decor_base {
		model = "ca\plants\hrusen2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hrusen2.jpg";
		displayName = "hrusen2";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_jablon : acd_cup_decor_base {
		model = "ca\plants\jablon.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\jablon.jpg";
		displayName = "jablon";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_ker_buxus : acd_cup_decor_base {
		model = "ca\plants\ker buxus.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ker buxus.jpg";
		displayName = "ker buxus";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_ker_deravej : acd_cup_decor_base {
		model = "ca\plants\ker deravej.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ker deravej.jpg";
		displayName = "ker deravej";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_ker_pichlavej : acd_cup_decor_base {
		model = "ca\plants\ker pichlavej.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ker pichlavej.jpg";
		displayName = "ker pichlavej";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_ker_s_bobulema : acd_cup_decor_base {
		model = "ca\plants\ker s bobulema.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ker s bobulema.jpg";
		displayName = "ker s bobulema";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_ker_trs_travy3 : acd_cup_decor_base {
		model = "ca\plants\ker trs travy3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ker trs travy3.jpg";
		displayName = "ker trs travy3";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_ker_trs_travy5 : acd_cup_decor_base {
		model = "ca\plants\ker trs travy5.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ker trs travy5.jpg";
		displayName = "ker trs travy5";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_klady_ihlic : acd_cup_decor_base {
		model = "ca\plants\klady_ihlic.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\klady_ihlic.jpg";
		displayName = "klady_ihlic";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_cup_klady_smrk : acd_cup_decor_base {
		model = "ca\plants\klady_smrk.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\klady_smrk.jpg";
		displayName = "klady_smrk";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_cup_kmen_1_buk : acd_cup_decor_base {
		model = "ca\plants\kmen_1_buk.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\kmen_1_buk.jpg";
		displayName = "kmen_1_buk";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_cup_koprivy : acd_cup_decor_base {
		model = "ca\plants\koprivy.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\koprivy.jpg";
		displayName = "koprivy";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Krovi : acd_cup_decor_base {
		model = "ca\plants\Krovi.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Krovi.jpg";
		displayName = "Krovi";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Krovi2 : acd_cup_decor_base {
		model = "ca\plants\Krovi2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Krovi2.jpg";
		displayName = "Krovi2";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Krovi4 : acd_cup_decor_base {
		model = "ca\plants\Krovi4.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Krovi4.jpg";
		displayName = "Krovi4";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Krovi_bigest : acd_cup_decor_base {
		model = "ca\plants\Krovi_bigest.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Krovi_bigest.jpg";
		displayName = "Krovi_bigest";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Krovi_long : acd_cup_decor_base {
		model = "ca\plants\Krovi_long.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Krovi_long.jpg";
		displayName = "Krovi_long";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_les_buk : acd_cup_decor_base {
		model = "ca\plants\les_buk.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\les_buk.jpg";
		displayName = "les_buk";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_les_dub : acd_cup_decor_base {
		model = "ca\plants\les_dub.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\les_dub.jpg";
		displayName = "les_dub";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_les_dub_jiny : acd_cup_decor_base {
		model = "ca\plants\les_dub_jiny.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\les_dub_jiny.jpg";
		displayName = "les_dub_jiny";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_les_fikovnik2 : acd_cup_decor_base {
		model = "ca\plants\les_fikovnik2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\les_fikovnik2.jpg";
		displayName = "les_fikovnik2";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_les_singlestrom : acd_cup_decor_base {
		model = "ca\plants\les_singlestrom.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\les_singlestrom.jpg";
		displayName = "les_singlestrom";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_les_singlestrom_b : acd_cup_decor_base {
		model = "ca\plants\les_singlestrom_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\les_singlestrom_b.jpg";
		displayName = "les_singlestrom_b";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_lopuch : acd_cup_decor_base {
		model = "ca\plants\lopuch.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lopuch.jpg";
		displayName = "lopuch";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_oliva : acd_cup_decor_base {
		model = "ca\plants\oliva.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\oliva.jpg";
		displayName = "oliva";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_palmTest : acd_cup_decor_base {
		model = "ca\plants\palmTest.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\palmTest.jpg";
		displayName = "palmTest";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_palm_01 : acd_cup_decor_base {
		model = "ca\plants\palm_01.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\palm_01.jpg";
		displayName = "palm_01";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_palm_02 : acd_cup_decor_base {
		model = "ca\plants\palm_02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\palm_02.jpg";
		displayName = "palm_02";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_palm_03 : acd_cup_decor_base {
		model = "ca\plants\palm_03.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\palm_03.jpg";
		displayName = "palm_03";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_palm_04 : acd_cup_decor_base {
		model = "ca\plants\palm_04.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\palm_04.jpg";
		displayName = "palm_04";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_palm_08small : acd_cup_decor_base {
		model = "ca\plants\palm_08small.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\palm_08small.jpg";
		displayName = "palm_08small";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_palm_09 : acd_cup_decor_base {
		model = "ca\plants\palm_09.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\palm_09.jpg";
		displayName = "palm_09";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_palm_10 : acd_cup_decor_base {
		model = "ca\plants\palm_10.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\palm_10.jpg";
		displayName = "palm_10";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_parez : acd_cup_decor_base {
		model = "ca\plants\parez.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\parez.jpg";
		displayName = "parez";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_pinus_mugo_lowpoly : acd_cup_decor_base {
		model = "ca\plants\pinus_mugo_lowpoly.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\pinus_mugo_lowpoly.jpg";
		displayName = "pinus_mugo_lowpoly";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Smrk_maly : acd_cup_decor_base {
		model = "ca\plants\Smrk_maly.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Smrk_maly.jpg";
		displayName = "Smrk_maly";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Smrk_siroky : acd_cup_decor_base {
		model = "ca\plants\Smrk_siroky.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Smrk_siroky.jpg";
		displayName = "Smrk_siroky";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Smrk_velky : acd_cup_decor_base {
		model = "ca\plants\Smrk_velky.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Smrk_velky.jpg";
		displayName = "Smrk_velky";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_briza : acd_cup_decor_base {
		model = "ca\plants\str briza.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str briza.jpg";
		displayName = "str briza";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_buk : acd_cup_decor_base {
		model = "ca\plants\str buk.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str buk.jpg";
		displayName = "str buk";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_dub_jiny : acd_cup_decor_base {
		model = "ca\plants\str dub jiny.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str dub jiny.jpg";
		displayName = "str dub jiny";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_dub : acd_cup_decor_base {
		model = "ca\plants\str dub.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str dub.jpg";
		displayName = "str dub";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_habr : acd_cup_decor_base {
		model = "ca\plants\str habr.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str habr.jpg";
		displayName = "str habr";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_jalovec : acd_cup_decor_base {
		model = "ca\plants\str jalovec.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str jalovec.jpg";
		displayName = "str jalovec";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_javor : acd_cup_decor_base {
		model = "ca\plants\str javor.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str javor.jpg";
		displayName = "str javor";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_jerabina : acd_cup_decor_base {
		model = "ca\plants\str jerabina.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str jerabina.jpg";
		displayName = "str jerabina";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_kastan : acd_cup_decor_base {
		model = "ca\plants\str kastan.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str kastan.jpg";
		displayName = "str kastan";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_krovisko_vysoke : acd_cup_decor_base {
		model = "ca\plants\str krovisko vysoke.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str krovisko vysoke.jpg";
		displayName = "str krovisko vysoke";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_lipa : acd_cup_decor_base {
		model = "ca\plants\str lipa.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str lipa.jpg";
		displayName = "str lipa";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_osika : acd_cup_decor_base {
		model = "ca\plants\str osika.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str osika.jpg";
		displayName = "str osika";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_trnka : acd_cup_decor_base {
		model = "ca\plants\str trnka.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str trnka.jpg";
		displayName = "str trnka";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_vrba : acd_cup_decor_base {
		model = "ca\plants\str vrba.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str vrba.jpg";
		displayName = "str vrba";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_Briza_kriva : acd_cup_decor_base {
		model = "ca\plants\str_Briza_kriva.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str_Briza_kriva.jpg";
		displayName = "str_Briza_kriva";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_Briza_rovna : acd_cup_decor_base {
		model = "ca\plants\str_Briza_rovna.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str_Briza_rovna.jpg";
		displayName = "str_Briza_rovna";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_fikovnik : acd_cup_decor_base {
		model = "ca\plants\str_fikovnik.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str_fikovnik.jpg";
		displayName = "str_fikovnik";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_fikovnik2 : acd_cup_decor_base {
		model = "ca\plants\str_fikovnik2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str_fikovnik2.jpg";
		displayName = "str_fikovnik2";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_fikovnik_ker : acd_cup_decor_base {
		model = "ca\plants\str_fikovnik_ker.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str_fikovnik_ker.jpg";
		displayName = "str_fikovnik_ker";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_liskac : acd_cup_decor_base {
		model = "ca\plants\str_liskac.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str_liskac.jpg";
		displayName = "str_liskac";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_pinie : acd_cup_decor_base {
		model = "ca\plants\str_pinie.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str_pinie.jpg";
		displayName = "str_pinie";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_topol : acd_cup_decor_base {
		model = "ca\plants\str_topol.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str_topol.jpg";
		displayName = "str_topol";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_str_Topol2 : acd_cup_decor_base {
		model = "ca\plants\str_Topol2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\str_Topol2.jpg";
		displayName = "str_Topol2";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_vetev_1_buk : acd_cup_decor_base {
		model = "ca\plants\vetev_1_buk.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vetev_1_buk.jpg";
		displayName = "vetev_1_buk";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_cup_vetev_2_dub : acd_cup_decor_base {
		model = "ca\plants\vetev_2_dub.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vetev_2_dub.jpg";
		displayName = "vetev_2_dub";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_cup_vetev_3_borovice : acd_cup_decor_base {
		model = "ca\plants\vetev_3_borovice.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vetev_3_borovice.jpg";
		displayName = "vetev_3_borovice";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_cup_vetev_4_smrk : acd_cup_decor_base {
		model = "ca\plants\vetev_4_smrk.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vetev_4_smrk.jpg";
		displayName = "vetev_4_smrk";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_cup_b_betulaHumilis : acd_cup_decor_base {
		model = "ca\plants2\Bush\b_betulaHumilis.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_betulaHumilis.jpg";
		displayName = "b_betulahumilis";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_canina2s : acd_cup_decor_base {
		model = "ca\plants2\Bush\b_canina2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_canina2s.jpg";
		displayName = "b_canina2s";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_corylus : acd_cup_decor_base {
		model = "ca\plants2\Bush\b_corylus.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_corylus.jpg";
		displayName = "b_corylus";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_corylus2s : acd_cup_decor_base {
		model = "ca\plants2\Bush\b_corylus2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_corylus2s.jpg";
		displayName = "b_corylus2s";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_craet1 : acd_cup_decor_base {
		model = "ca\plants2\Bush\b_craet1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_craet1.jpg";
		displayName = "b_craet1";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_craet2 : acd_cup_decor_base {
		model = "ca\plants2\Bush\b_craet2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_craet2.jpg";
		displayName = "b_craet2";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_pmugo : acd_cup_decor_base {
		model = "ca\plants2\Bush\b_pmugo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_pmugo.jpg";
		displayName = "b_pmugo";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_prunus : acd_cup_decor_base {
		model = "ca\plants2\Bush\b_prunus.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_prunus.jpg";
		displayName = "b_prunus";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_salix2s : acd_cup_decor_base {
		model = "ca\plants2\Bush\b_salix2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_salix2s.jpg";
		displayName = "b_salix2s";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_sambucus : acd_cup_decor_base {
		model = "ca\plants2\Bush\b_sambucus.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_sambucus.jpg";
		displayName = "b_sambucus";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_autumn_flowers : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_autumn_flowers.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_autumn_flowers.jpg";
		displayName = "c_autumn_flowers";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_blueBerry : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_blueBerry.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_blueBerry.jpg";
		displayName = "c_blueBerry";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_caluna : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_caluna.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_caluna.jpg";
		displayName = "c_caluna";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_deadGrassBunch : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_deadGrassBunch.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_deadGrassBunch.jpg";
		displayName = "c_deadGrassBunch";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_fern : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_fern.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_fern.jpg";
		displayName = "c_fern";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_fernTall : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_fernTall.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_fernTall.jpg";
		displayName = "c_fernTall";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassAutumn : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_GrassAutumn.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassAutumn.jpg";
		displayName = "c_GrassAutumn";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassAutumnBrown : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_GrassAutumnBrown.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassAutumnBrown.jpg";
		displayName = "c_GrassAutumnBrown";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassAutumn_t : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_GrassAutumn_t.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassAutumn_t.jpg";
		displayName = "c_GrassAutumn_t";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_grassBunch : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_grassBunch.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_grassBunch.jpg";
		displayName = "c_grassBunch";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassCrooked : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_GrassCrooked.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassCrooked.jpg";
		displayName = "c_GrassCrooked";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassCrookedForest : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_GrassCrookedForest.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassCrookedForest.jpg";
		displayName = "c_GrassCrookedForest";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassCrookedGreen : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_GrassCrookedGreen.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassCrookedGreen.jpg";
		displayName = "c_GrassCrookedGreen";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassDryLong : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_GrassDryLong.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassDryLong.jpg";
		displayName = "c_GrassDryLong";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_grassDryLongBunch : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_grassDryLongBunch.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_grassDryLongBunch.jpg";
		displayName = "c_grassDryLongBunch";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassTall : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_GrassTall.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassTall.jpg";
		displayName = "c_GrassTall";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_leaves : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_leaves.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_leaves.jpg";
		displayName = "c_leaves";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_MushroomBabka : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_MushroomBabka.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_MushroomBabka.jpg";
		displayName = "c_MushroomBabka";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_picea : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_picea.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_picea.jpg";
		displayName = "c_picea";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_PlantsAutumnForest : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_PlantsAutumnForest.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_PlantsAutumnForest.jpg";
		displayName = "c_PlantsAutumnForest";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_raspBerry : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_raspBerry.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_raspBerry.jpg";
		displayName = "c_raspBerry";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_C_SmallLeafPlant : acd_cup_decor_base {
		model = "ca\plants2\Clutter\C_SmallLeafPlant.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\C_SmallLeafPlant.jpg";
		displayName = "C_SmallLeafPlant";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_stubble : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_stubble.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_stubble.jpg";
		displayName = "c_stubble";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_weed2 : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_weed2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_weed2.jpg";
		displayName = "c_weed2";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_weed3 : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_weed3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_weed3.jpg";
		displayName = "c_weed3";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_WeedDead : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_WeedDead.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_WeedDead.jpg";
		displayName = "c_WeedDead";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_WeedDead2 : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_WeedDead2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_WeedDead2.jpg";
		displayName = "c_WeedDead2";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_wideLeafPlant : acd_cup_decor_base {
		model = "ca\plants2\Clutter\c_wideLeafPlant.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_wideLeafPlant.jpg";
		displayName = "c_wideLeafPlant";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_misc_FallenSpruce : acd_cup_decor_base {
		model = "ca\plants2\Misc\misc_FallenSpruce.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\misc_FallenSpruce.jpg";
		displayName = "misc_fallenspruce";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_cup_misc_FallenTree1 : acd_cup_decor_base {
		model = "ca\plants2\Misc\misc_FallenTree1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\misc_FallenTree1.jpg";
		displayName = "misc_fallentree1";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_cup_misc_FallenTree2 : acd_cup_decor_base {
		model = "ca\plants2\Misc\misc_FallenTree2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\misc_FallenTree2.jpg";
		displayName = "misc_fallentree2";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_cup_misc_stub1 : acd_cup_decor_base {
		model = "ca\plants2\Misc\misc_stub1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\misc_stub1.jpg";
		displayName = "misc_stub1";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_cup_misc_stub2 : acd_cup_decor_base {
		model = "ca\plants2\Misc\misc_stub2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\misc_stub2.jpg";
		displayName = "misc_stub2";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_cup_Misc_trunk_torzo : acd_cup_decor_base {
		model = "ca\plants2\Misc\Misc_trunk_torzo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_trunk_torzo.jpg";
		displayName = "misc_trunk_torzo";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_cup_Misc_trunk_water : acd_cup_decor_base {
		model = "ca\plants2\Misc\Misc_trunk_water.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_trunk_water.jpg";
		displayName = "misc_trunk_water";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_lopuch_podzimni : acd_cup_decor_base {
		model = "ca\plants2\Plant\lopuch_podzimni.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lopuch_podzimni.jpg";
		displayName = "p_lopuch_podzimni";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_pumpkin : acd_cup_decor_base {
		model = "ca\plants2\Plant\pumpkin.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\pumpkin.jpg";
		displayName = "pumpkin";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_pumpkin2 : acd_cup_decor_base {
		model = "ca\plants2\Plant\pumpkin2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\pumpkin2.jpg";
		displayName = "pumpkin2";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_p_articum : acd_cup_decor_base {
		model = "ca\plants2\Plant\p_articum.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_articum.jpg";
		displayName = "p_articum";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_p_carduus : acd_cup_decor_base {
		model = "ca\plants2\Plant\p_carduus.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_carduus.jpg";
		displayName = "p_carduus";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_p_Helianthus : acd_cup_decor_base {
		model = "ca\plants2\Plant\p_Helianthus.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_Helianthus.jpg";
		displayName = "p_helianthus";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_p_heracleum : acd_cup_decor_base {
		model = "ca\plants2\Plant\p_heracleum.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_heracleum.jpg";
		displayName = "p_heracleum";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_p_Phragmites : acd_cup_decor_base {
		model = "ca\plants2\Plant\p_Phragmites.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_Phragmites.jpg";
		displayName = "p_phragmites";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_p_urtica : acd_cup_decor_base {
		model = "ca\plants2\Plant\p_urtica.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_urtica.jpg";
		displayName = "p_urtica";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_t_acer2s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_acer2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_acer2s.jpg";
		displayName = "t_acer2s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_alnus2s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_alnus2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_alnus2s.jpg";
		displayName = "t_alnus2s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_betula1f : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_betula1f.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_betula1f.jpg";
		displayName = "t_betula1f";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_betula2f : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_betula2f.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_betula2f.jpg";
		displayName = "t_betula2f";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_betula2s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_betula2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_betula2s.jpg";
		displayName = "t_betula2s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_betula2w : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_betula2w.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_betula2w.jpg";
		displayName = "t_betula2w";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_carpinus2s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_carpinus2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_carpinus2s.jpg";
		displayName = "t_carpinus2s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_fagus2f : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_fagus2f.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_fagus2f.jpg";
		displayName = "t_fagus2f";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_fagus2s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_fagus2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_fagus2s.jpg";
		displayName = "t_fagus2s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_fagus2W : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_fagus2W.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_fagus2W.jpg";
		displayName = "t_fagus2w";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_fraxinus2s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_fraxinus2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_fraxinus2s.jpg";
		displayName = "t_fraxinus2s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_fraxinus2W : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_fraxinus2W.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_fraxinus2W.jpg";
		displayName = "t_fraxinus2w";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_larix3f : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_larix3f.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_larix3f.jpg";
		displayName = "t_larix3f";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_larix3s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_larix3s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_larix3s.jpg";
		displayName = "t_larix3s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_malus1s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_malus1s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_malus1s.jpg";
		displayName = "t_malus1s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_picea1s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_picea1s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_picea1s.jpg";
		displayName = "t_picea1s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_picea2s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_picea2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_picea2s.jpg";
		displayName = "t_picea2s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_picea3f : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_picea3f.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_picea3f.jpg";
		displayName = "t_picea3f";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_pinusN1s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_pinusN1s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_pinusN1s.jpg";
		displayName = "t_pinusn1s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_pinusN2s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_pinusN2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_pinusN2s.jpg";
		displayName = "t_pinusN2s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_pinusS2f : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_pinusS2f.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_pinusS2f.jpg";
		displayName = "t_pinuss2f";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_populus3s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_populus3s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_populus3s.jpg";
		displayName = "t_populus3s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_pyrus2s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_pyrus2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_pyrus2s.jpg";
		displayName = "t_pyrus2s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_quercus2f : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_quercus2f.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_quercus2f.jpg";
		displayName = "t_quercus2f";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_quercus3s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_quercus3s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_quercus3s.jpg";
		displayName = "t_quercus3s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_salix2s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_salix2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_salix2s.jpg";
		displayName = "t_salix2s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_sorbus2s : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_sorbus2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_sorbus2s.jpg";
		displayName = "t_sorbus2s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_stub_picea : acd_cup_decor_base {
		model = "ca\plants2\Tree\t_stub_picea.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_stub_picea.jpg";
		displayName = "t_stub_picea";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_AmygdalusN1s_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Bush\b_AmygdalusN1s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_AmygdalusN1s_EP1.jpg";
		displayName = "b_amygdalusn1s_ep1";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_PinusM1s_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Bush\b_PinusM1s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_PinusM1s_EP1.jpg";
		displayName = "b_pinusm1s_ep1";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_PistaciaL1s_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Bush\b_PistaciaL1s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_PistaciaL1s_EP1.jpg";
		displayName = "b_pistacial1s_ep1";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_Brush_Hard_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_Brush_Hard_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_Brush_Hard_EP1.jpg";
		displayName = "c_Brush_Hard_EP1";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_Brush_Soft_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_Brush_Soft_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_Brush_Soft_EP1.jpg";
		displayName = "c_Brush_Soft_EP1";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_GrassDesert_GroupSoft_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_GrassDesert_GroupSoft_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassDesert_GroupSoft_EP1.jpg";
		displayName = "c_GrassDesert_GroupSoft_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassDryLong_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_GrassDryLong_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassDryLong_EP1.jpg";
		displayName = "c_GrassDryLong_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassDry_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_GrassDry_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassDry_EP1.jpg";
		displayName = "c_GrassDry_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassGreenLong_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_GrassGreenLong_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassGreenLong_EP1.jpg";
		displayName = "c_GrassGreenLong_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassGreen_AreaLowSoft_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_GrassGreen_AreaLowSoft_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassGreen_AreaLowSoft_EP1.jpg";
		displayName = "c_GrassGreen_AreaLowSoft_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassGreen_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_GrassGreen_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassGreen_EP1.jpg";
		displayName = "c_GrassGreen_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassGreen_GroupHard_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_GrassGreen_GroupHard_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassGreen_GroupHard_EP1.jpg";
		displayName = "c_GrassGreen_GroupHard_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_Grass_desert_bunch_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_Grass_desert_bunch_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_Grass_desert_bunch_EP1.jpg";
		displayName = "c_Grass_desert_bunch_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_grass_desert_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_grass_desert_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_grass_desert_EP1.jpg";
		displayName = "c_grass_desert_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_grass_desert_long_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_grass_desert_long_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_grass_desert_long_EP1.jpg";
		displayName = "c_grass_desert_long_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_papaver_05_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_papaver_05_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_papaver_05_EP1.jpg";
		displayName = "c_papaver_05_EP1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_papaver_06_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_papaver_06_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_papaver_06_EP1.jpg";
		displayName = "c_papaver_06_EP1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_papaver_07_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_papaver_07_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_papaver_07_EP1.jpg";
		displayName = "c_papaver_07_EP1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_papaver_flower01_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_papaver_flower01_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_papaver_flower01_EP1.jpg";
		displayName = "c_papaver_flower01_EP1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_papaver_flower02_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_papaver_flower02_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_papaver_flower02_EP1.jpg";
		displayName = "c_papaver_flower02_EP1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_papaver_flower03_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_papaver_flower03_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_papaver_flower03_EP1.jpg";
		displayName = "c_papaver_flower03_EP1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_papaver_flower04_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_papaver_flower04_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_papaver_flower04_EP1.jpg";
		displayName = "c_papaver_flower04_EP1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_Plants_HightSingleDeath_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_Plants_HightSingleDeath_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_Plants_HightSingleDeath_EP1.jpg";
		displayName = "c_Plants_HightSingleDeath_EP1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_Plants_HightSingleHard_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_Plants_HightSingleHard_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_Plants_HightSingleHard_EP1.jpg";
		displayName = "c_Plants_HightSingleHard_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_Plants_HightSingleSoft_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_Plants_HightSingleSoft_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_Plants_HightSingleSoft_EP1.jpg";
		displayName = "c_Plants_HightSingleSoft_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_Plants_Thistle_desert_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_Plants_Thistle_desert_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_Plants_Thistle_desert_EP1.jpg";
		displayName = "c_Plants_Thistle_desert_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_Plants_Violet_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_Plants_Violet_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_Plants_Violet_EP1.jpg";
		displayName = "c_Plants_Violet_EP1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_Plants_White_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_Plants_White_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_Plants_White_EP1.jpg";
		displayName = "c_Plants_White_EP1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_Plants_Yellow_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_Plants_Yellow_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_Plants_Yellow_EP1.jpg";
		displayName = "c_Plants_Yellow_EP1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_StoneMiddleGroupCamp_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_StoneMiddleGroupCamp_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_StoneMiddleGroupCamp_EP1.jpg";
		displayName = "c_StoneMiddleGroupCamp_EP1";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_c_StoneMiddleGroupMount_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_StoneMiddleGroupMount_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_StoneMiddleGroupMount_EP1.jpg";
		displayName = "c_StoneMiddleGroupMount_EP1";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_c_StoneMiddleSharpSingle_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_StoneMiddleSharpSingle_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_StoneMiddleSharpSingle_EP1.jpg";
		displayName = "c_StoneMiddleSharpSingle_EP1";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_c_StoneSmallRounded_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_StoneSmallRounded_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_StoneSmallRounded_EP1.jpg";
		displayName = "c_StoneSmallRounded_EP1";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_c_weed2_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_weed2_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_weed2_EP1.jpg";
		displayName = "c_weed2_EP1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_Weed_1_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_Weed_1_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_Weed_1_EP1.jpg";
		displayName = "c_Weed_1_EP1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_Weed_Thistle_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Clutter\c_Weed_Thistle_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_Weed_Thistle_EP1.jpg";
		displayName = "c_Weed_Thistle_EP1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Misc_trunk_torzo_ep1 : acd_cup_decor_base {
		model = "ca\plants_e\Misc\Misc_trunk_torzo_ep1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_trunk_torzo_ep1.jpg";
		displayName = "misc_trunk_torzo_ep1";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_cup_Misc_trunk_water_ep1 : acd_cup_decor_base {
		model = "ca\plants_e\Misc\Misc_trunk_water_ep1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_trunk_water_ep1.jpg";
		displayName = "misc_trunk_water_ep1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_p_fiberPlant_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Plant\p_fiberPlant_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_fiberPlant_EP1.jpg";
		displayName = "p_fiberplant_ep1";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_p_papaver_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Plant\p_papaver_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_papaver_EP1.jpg";
		displayName = "p_papaver_ep1";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_p_wheat_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Plant\p_wheat_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_wheat_EP1.jpg";
		displayName = "p_wheat_ep1";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_t_AmygdalusC2s_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Tree\t_AmygdalusC2s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_AmygdalusC2s_EP1.jpg";
		displayName = "t_amygdalusc2s_ep1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_FicusB2s_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Tree\t_FicusB2s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_FicusB2s_EP1.jpg";
		displayName = "t_ficusb2s_ep1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_JuniperusC2s_EP1_1 : acd_cup_decor_base {
		model = "ca\plants_e\Tree\t_JuniperusC2s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_JuniperusC2s_EP1.jpg";
		displayName = "t_juniperusc2s_ep1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_PinusE2s_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Tree\t_PinusE2s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_PinusE2s_EP1.jpg";
		displayName = "t_pinuse2s_ep1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_PinusS3s_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Tree\t_PinusS3s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_PinusS3s_EP1.jpg";
		displayName = "t_pinuss3s_ep1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_PistaciaL2s_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Tree\t_PistaciaL2s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_PistaciaL2s_EP1.jpg";
		displayName = "t_pistacial2s_ep1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_PopulusB2s_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Tree\t_PopulusB2s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_PopulusB2s_EP1.jpg";
		displayName = "t_populusb2s_ep1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_PopulusF2s_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Tree\t_PopulusF2s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_PopulusF2s_EP1.jpg";
		displayName = "t_populusf2s_ep1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_PrunusS2s_EP1 : acd_cup_decor_base {
		model = "ca\plants_e\Tree\t_PrunusS2s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_PrunusS2s_EP1.jpg";
		displayName = "t_prunuss2s_ep1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_betula2w_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Bush\b_betula2w_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_betula2w_summer.jpg";
		displayName = "b_betula2w_summer";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_canina2s_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Bush\b_canina2s_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_canina2s_summer.jpg";
		displayName = "b_canina2s_summer";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_corylus2s_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Bush\b_corylus2s_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_corylus2s_summer.jpg";
		displayName = "b_corylus2s_summer";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_craet1_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Bush\b_craet1_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_craet1_summer.jpg";
		displayName = "b_craet1_summer";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_sambucus_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Bush\b_sambucus_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_sambucus_summer.jpg";
		displayName = "b_sambucus_summer";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_blueBerry_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Clutter\c_blueBerry_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_blueBerry_summer.jpg";
		displayName = "c_blueBerry_summer";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_caluna_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Clutter\c_caluna_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_caluna_summer.jpg";
		displayName = "c_caluna_summer";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_fernTall_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Clutter\c_fernTall_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_fernTall_summer.jpg";
		displayName = "c_fernTall_summer";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassCrookedGreen_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Clutter\c_GrassCrookedGreen_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassCrookedGreen_summer.jpg";
		displayName = "c_GrassCrookedGreen_summer";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassCrooked_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Clutter\c_GrassCrooked_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassCrooked_summer.jpg";
		displayName = "c_GrassCrooked_summer";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_GrassTall_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Clutter\c_GrassTall_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_GrassTall_summer.jpg";
		displayName = "c_GrassTall_summer";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_raspBerry_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Clutter\c_raspBerry_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_raspBerry_summer.jpg";
		displayName = "c_raspBerry_summer";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_summer_flowers : acd_cup_decor_base {
		model = "ca\plants_e2\Clutter\c_summer_flowers.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_summer_flowers.jpg";
		displayName = "c_summer_flowers";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_summer_smetanka : acd_cup_decor_base {
		model = "ca\plants_e2\Clutter\c_summer_smetanka.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_summer_smetanka.jpg";
		displayName = "c_summer_smetanka";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_c_summer_white_flower : acd_cup_decor_base {
		model = "ca\plants_e2\Clutter\c_summer_white_flower.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_summer_white_flower.jpg";
		displayName = "c_summer_white_flower";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_p_articum_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Plants\p_articum_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_articum_summer.jpg";
		displayName = "p_articum_summer";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_p_carduus_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Plants\p_carduus_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_carduus_summer.jpg";
		displayName = "p_carduus_summer";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_p_Helianthus_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Plants\p_Helianthus_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_Helianthus_summer.jpg";
		displayName = "p_helianthus_summer";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_p_heracleum_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Plants\p_heracleum_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_heracleum_summer.jpg";
		displayName = "p_heracleum_summer";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_p_Phragmites_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Plants\p_Phragmites_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_Phragmites_summer.jpg";
		displayName = "p_phragmites_summer";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_p_pumpkin2_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Plants\p_pumpkin2_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_pumpkin2_summer.jpg";
		displayName = "p_pumpkin2_summer";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_p_pumpkin_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Plants\p_pumpkin_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\p_pumpkin_summer.jpg";
		displayName = "p_pumpkin_summer";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_cup_t_betula2f_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Tree\t_betula2f_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_betula2f_summer.jpg";
		displayName = "t_betula2f_summer";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_betula2s_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Tree\t_betula2s_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_betula2s_summer.jpg";
		displayName = "t_betula2s_summer";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_fagus2f_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Tree\t_fagus2f_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_fagus2f_summer.jpg";
		displayName = "t_fagus2f_summer";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_fagus2s_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Tree\t_fagus2s_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_fagus2s_summer.jpg";
		displayName = "t_fagus2s_summer";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_JuniperusC2s_EP1 : acd_cup_decor_base {
		model = "ca\plants_e2\Tree\t_JuniperusC2s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_JuniperusC2s_EP1.jpg";
		displayName = "t_JuniperusC2s_EP1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_malus1s_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Tree\t_malus1s_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_malus1s_summer.jpg";
		displayName = "t_malus1s_summer";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_picea2s1 : acd_cup_decor_base {
		model = "ca\plants_e2\Tree\t_picea2s.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_picea2s.jpg";
		displayName = "t_picea2s";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_picea3f_1 : acd_cup_decor_base {
		model = "ca\plants_e2\Tree\t_picea3f.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_picea3f.jpg";
		displayName = "t_picea3f";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_PopulusB2s_EP1_1 : acd_cup_decor_base {
		model = "ca\plants_e2\Tree\t_PopulusB2s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_PopulusB2s_EP1.jpg";
		displayName = "t_PopulusB2s_EP1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_PopulusF2s_EP1_1 : acd_cup_decor_base {
		model = "ca\plants_e2\Tree\t_PopulusF2s_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_PopulusF2s_EP1.jpg";
		displayName = "t_PopulusF2s_EP1";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_t_quercus2f_summer : acd_cup_decor_base {
		model = "ca\plants_e2\Tree\t_quercus2f_summer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\t_quercus2f_summer.jpg";
		displayName = "t_quercus2f_summer";
		editorSubcategory = "acd_decorations_trees";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_Elderberry2s_PMC : acd_cup_decor_base {
		model = "ca\plants_pmc\Bush\b_Elderberry2s_PMC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_Elderberry2s_PMC.jpg";
		displayName = "b_elderberry2s_pmc";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_b_Hip2s_PMC : acd_cup_decor_base {
		model = "ca\plants_pmc\Bush\b_Hip2s_PMC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\b_Hip2s_PMC.jpg";
		displayName = "b_hip2s_pmc";
		editorSubcategory = "acd_decorations_bushes";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_c_branchBig_PMC : acd_cup_decor_base {
		model = "ca\plants_pmc\Clutter\c_branchBig_PMC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_branchBig_PMC.jpg";
		displayName = "c_branchBig_PMC";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_cup_c_carduus_PMC : acd_cup_decor_base {
		model = "ca\plants_pmc\Clutter\c_carduus_PMC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\c_carduus_PMC.jpg";
		displayName = "c_carduus_PMC";
		editorSubcategory = "acd_decorations_flowers";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_clutter_stone_small : acd_cup_decor_base {
		model = "ca\rocks\clutter_stone_small.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\clutter_stone_small.jpg";
		displayName = "clutter_stone_small";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Hromada_kameni : acd_cup_decor_base {
		model = "ca\rocks\Hromada_kameni.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Hromada_kameni.jpg";
		displayName = "Hromada_kameni";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Kamen1_Piskove2 : acd_cup_decor_base {
		model = "ca\rocks\Kamen1_Piskove2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen1_Piskove2.jpg";
		displayName = "Kamen1_Piskove2";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen1_piskovec : acd_cup_decor_base {
		model = "ca\rocks\Kamen1_piskovec.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen1_piskovec.jpg";
		displayName = "Kamen1_piskovec";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen1_piskovec2 : acd_cup_decor_base {
		model = "ca\rocks\Kamen1_piskovec2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen1_piskovec2.jpg";
		displayName = "Kamen1_piskovec2";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen1_zula : acd_cup_decor_base {
		model = "ca\rocks\Kamen1_zula.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen1_zula.jpg";
		displayName = "Kamen1_zula";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen2_piskovec : acd_cup_decor_base {
		model = "ca\rocks\Kamen2_piskovec.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen2_piskovec.jpg";
		displayName = "Kamen2_piskovec";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen2_piskovec2 : acd_cup_decor_base {
		model = "ca\rocks\Kamen2_piskovec2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen2_piskovec2.jpg";
		displayName = "Kamen2_piskovec2";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen2_zula : acd_cup_decor_base {
		model = "ca\rocks\Kamen2_zula.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen2_zula.jpg";
		displayName = "Kamen2_zula";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen3_piskovec : acd_cup_decor_base {
		model = "ca\rocks\Kamen3_piskovec.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen3_piskovec.jpg";
		displayName = "Kamen3_piskovec";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen3_piskovec2 : acd_cup_decor_base {
		model = "ca\rocks\Kamen3_piskovec2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen3_piskovec2.jpg";
		displayName = "Kamen3_piskovec2";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen3_zula : acd_cup_decor_base {
		model = "ca\rocks\Kamen3_zula.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen3_zula.jpg";
		displayName = "Kamen3_zula";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen4_piskovec : acd_cup_decor_base {
		model = "ca\rocks\Kamen4_piskovec.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen4_piskovec.jpg";
		displayName = "Kamen4_piskovec";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen4_piskovec2 : acd_cup_decor_base {
		model = "ca\rocks\Kamen4_piskovec2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen4_piskovec2.jpg";
		displayName = "Kamen4_piskovec2";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen4_zula : acd_cup_decor_base {
		model = "ca\rocks\Kamen4_zula.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen4_zula.jpg";
		displayName = "Kamen4_zula";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen5_piskovec : acd_cup_decor_base {
		model = "ca\rocks\Kamen5_piskovec.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen5_piskovec.jpg";
		displayName = "Kamen5_piskovec";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen5_piskovec2 : acd_cup_decor_base {
		model = "ca\rocks\Kamen5_piskovec2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen5_piskovec2.jpg";
		displayName = "Kamen5_piskovec2";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Kamen5_zula : acd_cup_decor_base {
		model = "ca\rocks\Kamen5_zula.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kamen5_zula.jpg";
		displayName = "Kamen5_zula";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_kaminek_clutter : acd_cup_decor_base {
		model = "ca\rocks\kaminek_clutter.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\kaminek_clutter.jpg";
		displayName = "kaminek_clutter";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Kopa_kameni : acd_cup_decor_base {
		model = "ca\rocks\Kopa_kameni.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kopa_kameni.jpg";
		displayName = "Kopa_kameni";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Kopa_kameni2 : acd_cup_decor_base {
		model = "ca\rocks\Kopa_kameni2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kopa_kameni2.jpg";
		displayName = "Kopa_kameni2";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_rock : acd_cup_decor_base {
		model = "ca\rocks\rock.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\rock.jpg";
		displayName = "rock";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_rockN_01 : acd_cup_decor_base {
		model = "ca\rocks\rockN_01.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\rockN_01.jpg";
		displayName = "rockN_01";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_rockN_02 : acd_cup_decor_base {
		model = "ca\rocks\rockN_02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\rockN_02.jpg";
		displayName = "rockN_02";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_rockS_01 : acd_cup_decor_base {
		model = "ca\rocks\rockS_01.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\rockS_01.jpg";
		displayName = "rockS_01";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_rockS_02 : acd_cup_decor_base {
		model = "ca\rocks\rockS_02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\rockS_02.jpg";
		displayName = "rockS_02";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_skala : acd_cup_decor_base {
		model = "ca\rocks\skala.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\skala.jpg";
		displayName = "skala";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Skala1_1 : acd_cup_decor_base {
		model = "ca\rocks\Skala1_1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala1_1.jpg";
		displayName = "Skala1_1";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Skala1_2 : acd_cup_decor_base {
		model = "ca\rocks\Skala1_2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala1_2.jpg";
		displayName = "Skala1_2";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Skala1_3 : acd_cup_decor_base {
		model = "ca\rocks\Skala1_3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala1_3.jpg";
		displayName = "Skala1_3";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Skala1_4 : acd_cup_decor_base {
		model = "ca\rocks\Skala1_4.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala1_4.jpg";
		displayName = "Skala1_4";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Skala1_5 : acd_cup_decor_base {
		model = "ca\rocks\Skala1_5.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala1_5.jpg";
		displayName = "Skala1_5";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Skala2 : acd_cup_decor_base {
		model = "ca\rocks\Skala2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala2.jpg";
		displayName = "Skala2";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Skala2_1 : acd_cup_decor_base {
		model = "ca\rocks\Skala2_1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala2_1.jpg";
		displayName = "Skala2_1";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_skala2_2 : acd_cup_decor_base {
		model = "ca\rocks\skala2_2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\skala2_2.jpg";
		displayName = "skala2_2";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Skala2_3 : acd_cup_decor_base {
		model = "ca\rocks\Skala2_3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala2_3.jpg";
		displayName = "Skala2_3";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Skala2_4 : acd_cup_decor_base {
		model = "ca\rocks\Skala2_4.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala2_4.jpg";
		displayName = "Skala2_4";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Skala2_5 : acd_cup_decor_base {
		model = "ca\rocks\Skala2_5.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala2_5.jpg";
		displayName = "Skala2_5";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Skala3_1 : acd_cup_decor_base {
		model = "ca\rocks\Skala3_1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala3_1.jpg";
		displayName = "Skala3_1";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Skala3_2 : acd_cup_decor_base {
		model = "ca\rocks\Skala3_2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala3_2.jpg";
		displayName = "Skala3_2";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Skala3_3 : acd_cup_decor_base {
		model = "ca\rocks\Skala3_3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala3_3.jpg";
		displayName = "Skala3_3";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Skala3_4 : acd_cup_decor_base {
		model = "ca\rocks\Skala3_4.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala3_4.jpg";
		displayName = "Skala3_4";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Skala3_5 : acd_cup_decor_base {
		model = "ca\rocks\Skala3_5.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skala3_5.jpg";
		displayName = "Skala3_5";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_skala_new : acd_cup_decor_base {
		model = "ca\rocks\skala_new.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\skala_new.jpg";
		displayName = "skala_new";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_skala_newK : acd_cup_decor_base {
		model = "ca\rocks\skala_newK.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\skala_newK.jpg";
		displayName = "skala_newK";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_Stone3 : acd_cup_decor_base {
		model = "ca\rocks\Stone3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Stone3.jpg";
		displayName = "Stone3";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_Stone3a : acd_cup_decor_base {
		model = "ca\rocks\Stone3a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Stone3a.jpg";
		displayName = "Stone3a";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_R2_Boulder1 : acd_cup_decor_base {
		model = "ca\rocks2\R2_Boulder1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R2_Boulder1.jpg";
		displayName = "r2_boulder1";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_R2_Boulder2 : acd_cup_decor_base {
		model = "ca\rocks2\R2_Boulder2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R2_Boulder2.jpg";
		displayName = "r2_boulder2";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_R2_Rock1 : acd_cup_decor_base {
		model = "ca\rocks2\R2_Rock1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R2_Rock1.jpg";
		displayName = "r2_rock1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R2_Rock2 : acd_cup_decor_base {
		model = "ca\rocks2\R2_Rock2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R2_Rock2.jpg";
		displayName = "r2_rock2";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R2_RockTower : acd_cup_decor_base {
		model = "ca\rocks2\R2_RockTower.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R2_RockTower.jpg";
		displayName = "r2_rocktower";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R2_RockWall : acd_cup_decor_base {
		model = "ca\rocks2\R2_RockWall.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R2_RockWall.jpg";
		displayName = "r2_rockwall";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R2_Stone : acd_cup_decor_base {
		model = "ca\rocks2\R2_Stone.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R2_Stone.jpg";
		displayName = "r2_stone";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_R_Boulder_01_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_Boulder_01_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_Boulder_01_EP1.jpg";
		displayName = "r_boulder_01_ep1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R_Boulder_02_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_Boulder_02_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_Boulder_02_EP1.jpg";
		displayName = "r_boulder_02_ep1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R_Boulder_03_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_Boulder_03_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_Boulder_03_EP1.jpg";
		displayName = "r_boulder_03_ep1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R_Rock_01_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_Rock_01_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_Rock_01_EP1.jpg";
		displayName = "r_rock_01_ep1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R_Rock_02_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_Rock_02_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_Rock_02_EP1.jpg";
		displayName = "r_rock_02_ep1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R_Rock_03_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_Rock_03_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_Rock_03_EP1.jpg";
		displayName = "r_rock_03_ep1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R_Stone_01_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_Stone_01_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_Stone_01_EP1.jpg";
		displayName = "r_stone_01_ep1";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_R_Stone_02_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_Stone_02_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_Stone_02_EP1.jpg";
		displayName = "r_stone_02_ep1";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_R_tk_Boulder_01_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_tk_Boulder_01_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_tk_Boulder_01_EP1.jpg";
		displayName = "r_tk_boulder_01_ep1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R_tk_Boulder_02_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_tk_Boulder_02_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_tk_Boulder_02_EP1.jpg";
		displayName = "r_tk_boulder_02_ep1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R_tk_Boulder_03_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_tk_Boulder_03_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_tk_Boulder_03_EP1.jpg";
		displayName = "r_tk_boulder_03_ep1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R_tk_Rock_01_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_tk_Rock_01_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_tk_Rock_01_EP1.jpg";
		displayName = "r_tk_rock_01_ep1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R_tk_Rock_02_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_tk_Rock_02_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_tk_Rock_02_EP1.jpg";
		displayName = "r_tk_rock_02_ep1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R_tk_Rock_03_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_tk_Rock_03_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_tk_Rock_03_EP1.jpg";
		displayName = "r_tk_rock_03_ep1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R_tk_Stone_01_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_tk_Stone_01_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_tk_Stone_01_EP1.jpg";
		displayName = "r_tk_stone_01_ep1";
		editorSubcategory = "acd_decorations_bigRocks";
		keepHorizontalPlacement = 1;
	};
	class acd_cup_R_tk_Stone_02_EP1 : acd_cup_decor_base {
		model = "ca\rocks_e\R_tk_Stone_02_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_tk_Stone_02_EP1.jpg";
		displayName = "r_tk_stone_02_ep1";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_SignB_GovSign : acd_cup_decor_base {
		model = "ca\signs2\SignB_GovSign.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SignB_GovSign.jpg";
		displayName = "SignB_GovSign";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_SignB_Hotel_CZ : acd_cup_decor_base {
		model = "ca\signs2\SignB_Hotel_CZ.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SignB_Hotel_CZ.jpg";
		displayName = "SignB_Hotel_CZ";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_SignB_Hotel_CZ2 : acd_cup_decor_base {
		model = "ca\signs2\SignB_Hotel_CZ2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SignB_Hotel_CZ2.jpg";
		displayName = "SignB_Hotel_CZ2";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_SignB_Hotel_CZ3 : acd_cup_decor_base {
		model = "ca\signs2\SignB_Hotel_CZ3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SignB_Hotel_CZ3.jpg";
		displayName = "SignB_Hotel_CZ3";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_SignB_Pharmacy : acd_cup_decor_base {
		model = "ca\signs2\SignB_Pharmacy.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SignB_Pharmacy.jpg";
		displayName = "SignB_Pharmacy";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_SignB_PostOffice : acd_cup_decor_base {
		model = "ca\signs2\SignB_PostOffice.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SignB_PostOffice.jpg";
		displayName = "SignB_PostOffice";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_SignB_Pub_CZ1 : acd_cup_decor_base {
		model = "ca\signs2\SignB_Pub_CZ1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SignB_Pub_CZ1.jpg";
		displayName = "SignB_Pub_CZ1";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_SignB_Pub_CZ2 : acd_cup_decor_base {
		model = "ca\signs2\SignB_Pub_CZ2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SignB_Pub_CZ2.jpg";
		displayName = "SignB_Pub_CZ2";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_SignB_Pub_CZ3 : acd_cup_decor_base {
		model = "ca\signs2\SignB_Pub_CZ3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SignB_Pub_CZ3.jpg";
		displayName = "SignB_Pub_CZ3";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_SignB_Pub_RU1 : acd_cup_decor_base {
		model = "ca\signs2\SignB_Pub_RU1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SignB_Pub_RU1.jpg";
		displayName = "SignB_Pub_RU1";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_SignB_Pub_RU2 : acd_cup_decor_base {
		model = "ca\signs2\SignB_Pub_RU2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SignB_Pub_RU2.jpg";
		displayName = "SignB_Pub_RU2";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_SignB_Pub_RU3 : acd_cup_decor_base {
		model = "ca\signs2\SignB_Pub_RU3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\SignB_Pub_RU3.jpg";
		displayName = "SignB_Pub_RU3";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign_Bar_RU : acd_cup_decor_base {
		model = "ca\signs2\Sign_Bar_RU.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign_Bar_RU.jpg";
		displayName = "Sign_Bar_RU";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Sign_BES : acd_cup_decor_base {
		model = "ca\signs2\Sign_BES.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Sign_BES.jpg";
		displayName = "Sign_BES";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_sign_TEC : acd_cup_decor_base {
		model = "ca\signs2\sign_TEC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sign_TEC.jpg";
		displayName = "sign_TEC";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_bedna : acd_cup_decor_base {
		model = "ca\structures\A_BuildingWIP\data\bedna\bedna.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bedna.jpg";
		displayName = "bedna";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_cihly1 : acd_cup_decor_base {
		model = "ca\structures\A_BuildingWIP\data\cihly1\cihly1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\cihly1.jpg";
		displayName = "cihly1";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_cihly2 : acd_cup_decor_base {
		model = "ca\structures\A_BuildingWIP\data\cihly2\cihly2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\cihly2.jpg";
		displayName = "cihly2";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_cihly3 : acd_cup_decor_base {
		model = "ca\structures\A_BuildingWIP\data\cihly3\cihly3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\cihly3.jpg";
		displayName = "cihly3";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_cihly4 : acd_cup_decor_base {
		model = "ca\structures\A_BuildingWIP\data\cihly4\cihly4.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\cihly4.jpg";
		displayName = "cihly4";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_pipe_big : acd_cup_decor_base {
		model = "ca\structures\A_BuildingWIP\data\pipe-big\pipe-big.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\pipe-big.jpg";
		displayName = "pipe-big";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_pipe_small : acd_cup_decor_base {
		model = "ca\structures\A_BuildingWIP\data\pipe-small\pipe-small.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\pipe-small.jpg";
		displayName = "pipe-small";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_koz : acd_cup_decor_base {
		model = "ca\structures\A_BuildingWIP\data\Stavebni_kozy\koz.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\koz.jpg";
		displayName = "koz";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_ytong : acd_cup_decor_base {
		model = "ca\structures\A_BuildingWIP\data\ytong\ytong.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ytong.jpg";
		displayName = "ytong";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_bath_1 : acd_cup_decor_base {
		model = "ca\structures\Furniture\Bathroom\bath\bath.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bath.jpg";
		displayName = "bath";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_sink : acd_cup_decor_base {
		model = "ca\structures\Furniture\Bathroom\SINK\sink.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sink.jpg";
		displayName = "sink";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_toilet_b_02 : acd_cup_decor_base {
		model = "ca\structures\Furniture\Bathroom\toilet_b_02\toilet_b_02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\toilet_b_02.jpg";
		displayName = "toilet_b_02";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_almara : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\almara\almara.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\almara.jpg";
		displayName = "almara";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_case_a : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\case_a\case_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_a.jpg";
		displayName = "case_a";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_case_bedroom_a : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\case_bedroom_a\case_bedroom_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_bedroom_a.jpg";
		displayName = "case_bedroom_a";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_case_cans_b : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\case_cans_b\case_cans_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_cans_b.jpg";
		displayName = "case_cans_b";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_case_d : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\case_d\case_d.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_d.jpg";
		displayName = "case_d";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_Dhangar_brownskrin : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\Dhangar_borwnskrin\Dhangar_brownskrin.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_brownskrin.jpg";
		displayName = "Dhangar_brownskrin";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_library_a : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\library_a\library_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\library_a.jpg";
		displayName = "library_a";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_lobby_case : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\lobby_case\lobby_case.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lobby_case.jpg";
		displayName = "lobby_case";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_metalcase_01 : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\metalcase\metalcase_01.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\metalcase_01.jpg";
		displayName = "metalcase_01";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_metalcase_02 : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\metalcase\metalcase_02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\metalcase_02.jpg";
		displayName = "metalcase_02";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_metalcrate : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\metalcrate\metalcrate.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\metalcrate.jpg";
		displayName = "metalcrate";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_metalcrate_02 : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\metalcrate_02\metalcrate_02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\metalcrate_02.jpg";
		displayName = "metalcrate_02";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_sarcophagus : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\sarcophagus\sarcophagus.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sarcophagus.jpg";
		displayName = "sarcophagus";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_skrin_bar : acd_cup_decor_base {
		model = "ca\structures\Furniture\Cases\Skrin_bar\skrin_bar.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\skrin_bar.jpg";
		displayName = "skrin_bar";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_church_chair : acd_cup_decor_base {
		model = "ca\structures\Furniture\Chairs\Church_chair\church_chair.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\church_chair.jpg";
		displayName = "church_chair";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_ch_mod_c_1 : acd_cup_decor_base {
		model = "ca\structures\Furniture\Chairs\ch_mod_c\ch_mod_c.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ch_mod_c.jpg";
		displayName = "Chair - wood";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_ch_mod_h : acd_cup_decor_base {
		model = "ca\structures\Furniture\Chairs\ch_mod_h\ch_mod_h.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ch_mod_h.jpg";
		displayName = "ch_mod_h";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_ch_office_B : acd_cup_decor_base {
		model = "ca\structures\Furniture\Chairs\ch_office_B\ch_office_B.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ch_office_B.jpg";
		displayName = "ch_office_b";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_hospital_bench : acd_cup_decor_base {
		model = "ca\structures\Furniture\Chairs\hospital_bench\hospital_bench.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hospital_bench.jpg";
		displayName = "hospital_bench";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_kitchen_chair_a : acd_cup_decor_base {
		model = "ca\structures\Furniture\Chairs\kitchen_chair_a\kitchen_chair_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\kitchen_chair_a.jpg";
		displayName = "kitchen_chair_a";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_Lobby_Chair : acd_cup_decor_base {
		model = "ca\structures\Furniture\Chairs\lobby_chair\Lobby_Chair.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Lobby_Chair.jpg";
		displayName = "lobby_chair";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_office_chair : acd_cup_decor_base {
		model = "ca\structures\Furniture\Chairs\office_chair\office_chair.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\office_chair.jpg";
		displayName = "office_chair";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_postel_manz_kov : acd_cup_decor_base {
		model = "ca\structures\Furniture\Chairs\postel_manz_kov\postel_manz_kov.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\postel_manz_kov.jpg";
		displayName = "postel_manz_kov";
		editorSubcategory = "acd_decorations_beds";
	};
	class acd_cup_postel_panelak1 : acd_cup_decor_base {
		model = "ca\structures\Furniture\Chairs\postel_panelak1\postel_panelak1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\postel_panelak1.jpg";
		displayName = "postel_panelak1";
		editorSubcategory = "acd_decorations_beds";
	};
	class acd_cup_Vojenska_palanda : acd_cup_decor_base {
		model = "ca\structures\Furniture\Chairs\vojenska_palanda\Vojenska_palanda.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Vojenska_palanda.jpg";
		displayName = "vojenska_palanda";
		editorSubcategory = "acd_decorations_beds";
	};
	class acd_cup_box_c : acd_cup_decor_base {
		model = "ca\structures\Furniture\Decoration\box_c\box_c.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\box_c.jpg";
		displayName = "box_c";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_bucket : acd_cup_decor_base {
		model = "ca\structures\Furniture\Decoration\bucket\bucket.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bucket.jpg";
		displayName = "bucket";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_flower_01 : acd_cup_decor_base {
		model = "ca\structures\Furniture\Decoration\Flowers\flower_01.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\flower_01.jpg";
		displayName = "flower_01";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_flower_02 : acd_cup_decor_base {
		model = "ca\structures\Furniture\Decoration\Flowers\flower_02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\flower_02.jpg";
		displayName = "flower_02";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_lekarnicka : acd_cup_decor_base {
		model = "ca\structures\Furniture\Decoration\lekarnicka\lekarnicka.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lekarnicka.jpg";
		displayName = "lekarnicka";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_PC_1 : acd_cup_decor_base {
		model = "ca\structures\Furniture\Eletrical_appliances\pc\PC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\PC.jpg";
		displayName = "pc";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_phonebox : acd_cup_decor_base {
		model = "ca\structures\Furniture\Eletrical_appliances\phonebox\phonebox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\phonebox.jpg";
		displayName = "phonebox";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_radio_b : acd_cup_decor_base {
		model = "ca\structures\Furniture\Eletrical_appliances\radio_b\radio_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\radio_b.jpg";
		displayName = "radio_b";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_tv_a : acd_cup_decor_base {
		model = "ca\structures\Furniture\Eletrical_appliances\tv_a\tv_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\tv_a.jpg";
		displayName = "tv_a";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_vending_machine : acd_cup_decor_base {
		model = "ca\structures\Furniture\Eletrical_appliances\vending_machine\vending_machine.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vending_machine.jpg";
		displayName = "vending_machine";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_washing_machine : acd_cup_decor_base {
		model = "ca\structures\Furniture\Eletrical_appliances\washing_machine\washing_machine.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\washing_machine.jpg";
		displayName = "washing_machine";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_icebox : acd_cup_decor_base {
		model = "ca\structures\Furniture\generalstore\icebox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\icebox.jpg";
		displayName = "icebox";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_pultskasou : acd_cup_decor_base {
		model = "ca\structures\Furniture\generalstore\pultskasou.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\pultskasou.jpg";
		displayName = "pultskasou";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_shelf : acd_cup_decor_base {
		model = "ca\structures\Furniture\generalstore\shelf.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\shelf.jpg";
		displayName = "shelf";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_Dkamna_uhli : acd_cup_decor_base {
		model = "ca\structures\Furniture\kitchen\Dkamna_uhli\Dkamna_uhli.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dkamna_uhli.jpg";
		displayName = "Dkamna_uhli";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_fridge : acd_cup_decor_base {
		model = "ca\structures\Furniture\kitchen\fridge\fridge.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\fridge.jpg";
		displayName = "fridge";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_Kitchenstove_Elec : acd_cup_decor_base {
		model = "ca\structures\Furniture\kitchen\Kitchenstove_Elec\Kitchenstove_Elec.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kitchenstove_Elec.jpg";
		displayName = "kitchenstove_elec";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_lantern : acd_cup_decor_base {
		model = "ca\structures\Furniture\Lighting\lantern\lantern.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lantern.jpg";
		displayName = "lantern";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_conference_table_a : acd_cup_decor_base {
		model = "ca\structures\Furniture\Tables\conference_table_a\conference_table_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\conference_table_a.jpg";
		displayName = "conference_table_a";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_kitchen_table_a : acd_cup_decor_base {
		model = "ca\structures\Furniture\Tables\kitchen_table_a\kitchen_table_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\kitchen_table_a.jpg";
		displayName = "kitchen_table_a";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_lobby_counter : acd_cup_decor_base {
		model = "ca\structures\Furniture\Tables\lobby_counter\lobby_counter.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lobby_counter.jpg";
		displayName = "lobby_counter";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_lobby_table : acd_cup_decor_base {
		model = "ca\structures\Furniture\Tables\lobby_table\lobby_table.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lobby_table.jpg";
		displayName = "lobby_table";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_office_table_a : acd_cup_decor_base {
		model = "ca\structures\Furniture\Tables\office_table_a\office_table_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\office_table_a.jpg";
		displayName = "office_table_a";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_stul_kuch1 : acd_cup_decor_base {
		model = "ca\structures\Furniture\Tables\stul_kuch1\stul_kuch1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stul_kuch1.jpg";
		displayName = "stul_kuch1";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_table_drawer : acd_cup_decor_base {
		model = "ca\structures\Furniture\Tables\table_drawer\table_drawer.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\table_drawer.jpg";
		displayName = "table_drawer";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_Ind_BoardsPack1 : acd_cup_decor_base {
		model = "ca\structures\Ind_SawMill\Ind_BoardsPack1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Ind_BoardsPack1.jpg";
		displayName = "Boards pack";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_cup_Ind_BoardsPack2 : acd_cup_decor_base {
		model = "ca\structures\Ind_SawMill\Ind_BoardsPack2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Ind_BoardsPack2.jpg";
		displayName = "Boards pack (small)";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_cup_Ind_Timbers : acd_cup_decor_base {
		model = "ca\structures\Ind_SawMill\Ind_Timbers.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Ind_Timbers.jpg";
		displayName = "Timbers";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_cup_barrel_empty : acd_cup_decor_base {
		model = "ca\structures\Misc\Armory\Barels\barrel_empty.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\barrel_empty.jpg";
		displayName = "Plastic barrel (empty)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_barrel_sand : acd_cup_decor_base {
		model = "ca\structures\Misc\Armory\Barels\barrel_sand.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\barrel_sand.jpg";
		displayName = "Plastic barrel (sand)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_barrel_water : acd_cup_decor_base {
		model = "ca\structures\Misc\Armory\Barels\barrel_water.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\barrel_water.jpg";
		displayName = "Plastic barrel (water)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_coneLight : acd_cup_decor_base {
		model = "ca\structures\Misc\Armory\coneLight\coneLight.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\coneLight.jpg";
		displayName = "Road cone (light)";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_pneu : acd_cup_decor_base {
		model = "ca\structures\Misc\Armory\Pneu\pneu.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\pneu.jpg";
		displayName = "Tyre";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Misc_ChickenCoop : acd_cup_decor_base {
		model = "ca\structures\Misc\ChickenCoop\Misc_ChickenCoop.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_ChickenCoop.jpg";
		displayName = "chickencoop";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Church_tomb_1 : acd_cup_decor_base {
		model = "ca\structures\Misc\Church\Church_tomb_1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Church_tomb_1.jpg";
		displayName = "Grave cross 1";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_Church_tomb_2 : acd_cup_decor_base {
		model = "ca\structures\Misc\Church\Church_tomb_2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Church_tomb_2.jpg";
		displayName = "Grave cross 2";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_Church_tomb_3 : acd_cup_decor_base {
		model = "ca\structures\Misc\Church\Church_tomb_3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Church_tomb_3.jpg";
		displayName = "Grave cross 3";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_cup_Misc_Hutch : acd_cup_decor_base {
		model = "ca\structures\Misc\Hutch\Misc_Hutch.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_Hutch.jpg";
		displayName = "hutch";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Zastavka_cedule : acd_cup_decor_base {
		model = "ca\structures\Misc\misc_BusStop\Zastavka_cedule.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Zastavka_cedule.jpg";
		displayName = "zastavka_cedule";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Zastavka_stojan : acd_cup_decor_base {
		model = "ca\structures\Misc\misc_BusStop\Zastavka_stojan.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Zastavka_stojan.jpg";
		displayName = "zastavka_stojan";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_cup_Misc_GContainer_Big : acd_cup_decor_base {
		model = "ca\structures\Misc\Misc_GContainer_Big\Misc_GContainer_Big.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_GContainer_Big.jpg";
		displayName = "Garbage container (large)";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_Misc_Greenhouse : acd_cup_decor_base {
		model = "ca\structures\Misc\Misc_Greenhouse\Misc_Greenhouse.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_Greenhouse.jpg";
		displayName = "greenhouse";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Misc_G_Pipes : acd_cup_decor_base {
		model = "ca\structures\Misc\Misc_G_Pipes\Misc_G_Pipes.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_G_Pipes.jpg";
		displayName = "g_pipes";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_Misc_HayStack : acd_cup_decor_base {
		model = "ca\structures\Misc\Misc_HayStack\Misc_HayStack.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_HayStack.jpg";
		displayName = "haystack";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Misc_Boogieman : acd_cup_decor_base {
		model = "ca\structures\Misc\Misc_Small\Misc_Boogieman.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_Boogieman.jpg";
		displayName = "boogieman";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Misc_Well : acd_cup_decor_base {
		model = "ca\structures\Misc\Misc_Well\Misc_Well.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_Well.jpg";
		displayName = "well";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Misc_WellPump : acd_cup_decor_base {
		model = "ca\structures\Misc\Misc_WellPump\Misc_WellPump.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_WellPump.jpg";
		displayName = "wellpump";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Misc_WindBreak : acd_cup_decor_base {
		model = "ca\structures\Misc\Misc_WindBreak\Misc_WindBreak.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_WindBreak.jpg";
		displayName = "windbreak";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_AirCond_big : acd_cup_decor_base {
		model = "ca\structures\Proxy_BuildingParts\AirCondition\AirCond_big.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\AirCond_big.jpg";
		displayName = "AirCond_big";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_AirCond_small : acd_cup_decor_base {
		model = "ca\structures\Proxy_BuildingParts\AirCondition\AirCond_small.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\AirCond_small.jpg";
		displayName = "AirCond_small";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_GasMeterExt : acd_cup_decor_base {
		model = "ca\structures\Proxy_BuildingParts\GasMeterExt\GasMeterExt.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\GasMeterExt.jpg";
		displayName = "GasMeterExt";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_LightningConductorBottom : acd_cup_decor_base {
		model = "ca\structures\Proxy_BuildingParts\LightningCond\LightningConductorBottom\LightningConductorBottom.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\LightningConductorBottom.jpg";
		displayName = "LightningConductorBottom";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_AirCondition_A : acd_cup_decor_base {
		model = "ca\structures\Proxy_BuildingParts\Roof\AirCondition\AirCondition_A.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\AirCondition_A.jpg";
		displayName = "AirCondition_A";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_AirCondition_B : acd_cup_decor_base {
		model = "ca\structures\Proxy_BuildingParts\Roof\AirCondition\AirCondition_B.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\AirCondition_B.jpg";
		displayName = "AirCondition_B";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_antenna_big_roof : acd_cup_decor_base {
		model = "ca\structures\Proxy_BuildingParts\Roof\AntennaBigRoof\antenna_big_roof.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\antenna_big_roof.jpg";
		displayName = "antenna_big_roof";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_antenna_small_roof : acd_cup_decor_base {
		model = "ca\structures\Proxy_BuildingParts\Roof\AntennaSmallRoof\antenna_small_roof.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\antenna_small_roof.jpg";
		displayName = "antenna_small_roof";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_antenna_small_roof_1 : acd_cup_decor_base {
		model = "ca\structures\Proxy_BuildingParts\Roof\AntennaSmallRoof\antenna_small_roof_1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\antenna_small_roof_1.jpg";
		displayName = "antenna_small_roof_1";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Misc_Rubble_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Construction\Misc_Rubble_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_Rubble_EP1.jpg";
		displayName = "Rubble";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_Misc_Garb_Heap_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Garbage\Misc_Garb_Heap_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_Garb_Heap_EP1.jpg";
		displayName = "Garbage";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_bag_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\bag_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bag_EP1.jpg";
		displayName = "Bag";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_basket_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\basket_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\basket_EP1.jpg";
		displayName = "Basket";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_bench_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\bench_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bench_EP1.jpg";
		displayName = "Wooden bench";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_blankets_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\blankets_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\blankets_EP1.jpg";
		displayName = "Blankets";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_boots_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\boots_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\boots_EP1.jpg";
		displayName = "Boots";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_bowl_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\bowl_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bowl_EP1.jpg";
		displayName = "Bowl";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_bucket_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\bucket_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bucket_EP1.jpg";
		displayName = "Bucket";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_cabinet_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\cabinet_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\cabinet_EP1.jpg";
		displayName = "Wooden cabinet";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_canister_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\canister_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\canister_EP1.jpg";
		displayName = "Plastic canister";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_carpetV2_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\carpetV2_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\carpetV2_EP1.jpg";
		displayName = "carpetv2_ep1";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_carpet_2_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\carpet_2_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\carpet_2_EP1.jpg";
		displayName = "Takistani carpet (fold)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_carpet_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\carpet_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\carpet_EP1.jpg";
		displayName = "Takistani carpet";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_chair_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\chair_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\chair_EP1.jpg";
		displayName = "Garden chair";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_chest_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\chest_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\chest_EP1.jpg";
		displayName = "Chest";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_crates_EP1_1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\crates_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\crates_EP1.jpg";
		displayName = "Cardboard crates";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_pillowV2_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\pillowV2_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\pillowV2_EP1.jpg";
		displayName = "pillowv2_ep1";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_pillow_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\pillow_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\pillow_EP1.jpg";
		displayName = "Pillow";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_rack_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\rack_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\rack_EP1.jpg";
		displayName = "Rack";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_reservoir_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\reservoir_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\reservoir_EP1.jpg";
		displayName = "Reservoir";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_sack_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\sack_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sack_EP1.jpg";
		displayName = "Sack";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_shelf_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\shelf_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\shelf_EP1.jpg";
		displayName = "Shelf";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_cup_table_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\table_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\table_EP1.jpg";
		displayName = "Wooden table";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_table_small_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\table_small_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\table_small_EP1.jpg";
		displayName = "Small table";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_cup_teapot_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\teapot_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\teapot_EP1.jpg";
		displayName = "Teapot";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_urn_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\urn_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\urn_EP1.jpg";
		displayName = "Urn";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_vase_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\vase_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vase_EP1.jpg";
		displayName = "Vase";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_vase_loam_2_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\vase_loam_2_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vase_loam_2_EP1.jpg";
		displayName = "Vase (adobe) 2";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_vase_loam_3_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\vase_loam_3_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vase_loam_3_EP1.jpg";
		displayName = "Vase (adobe) 3";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_vase_loam_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\vase_loam_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vase_loam_EP1.jpg";
		displayName = "Vase (adobe)";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_water_pipe_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\water_pipe_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\water_pipe_EP1.jpg";
		displayName = "Water pipe";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_wheel_cart_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\wheel_cart_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\wheel_cart_EP1.jpg";
		displayName = "Wheel cart";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_wicker_basket_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Interier\wicker_basket_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\wicker_basket_EP1.jpg";
		displayName = "Wicker basket";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_cup_Bags_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\Bags_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bags_EP1.jpg";
		displayName = "Bags with goods";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_bags_stack_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\bags_stack_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bags_stack_EP1.jpg";
		displayName = "Heap of bags";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_cages_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\cages_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\cages_EP1.jpg";
		displayName = "Poultry cages";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_carpet_rack_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\carpet_rack_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\carpet_rack_EP1.jpg";
		displayName = "Carpet rack";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_cup_counter_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\counter_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\counter_EP1.jpg";
		displayName = "counter_ep1";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_cup_covering_hut_big_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\covering_hut_big_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\covering_hut_big_EP1.jpg";
		displayName = "Canvas hut (big)";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_covering_hut_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\covering_hut_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\covering_hut_EP1.jpg";
		displayName = "Canvas hut";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_crates_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\crates_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\crates_EP1.jpg";
		displayName = "Wooden crates";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_crates_stack_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\crates_stack_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\crates_stack_EP1.jpg";
		displayName = "Shabby crates";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_kiosk_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\kiosk_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\kiosk_EP1.jpg";
		displayName = "Stand";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Market_shelter_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\Market_shelter_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Market_shelter_EP1.jpg";
		displayName = "Market shelter";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Market_Stalls_01_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\Market_Stalls_01_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Market_Stalls_01_EP1.jpg";
		displayName = "Market stalls 1";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Market_Stalls_02_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\Market_Stalls_02_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Market_Stalls_02_EP1.jpg";
		displayName = "Market stalls 2";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Misc_Market_Proxies_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\Misc_Market_Proxies_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_Market_Proxies_EP1.jpg";
		displayName = "Misc_Market_Proxies_EP1";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stand_meat_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\stand_meat_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stand_meat_EP1.jpg";
		displayName = "Stand (lamb)";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stand_small_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\stand_small_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stand_small_EP1.jpg";
		displayName = "Stand (small)";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_stand_water_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\stand_water_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\stand_water_EP1.jpg";
		displayName = "Stand (water)";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_tires_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\tires_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\tires_EP1.jpg";
		displayName = "Tyre pile";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_transport_cart_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Market\transport_cart_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\transport_cart_EP1.jpg";
		displayName = "Wooden cart";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Misc_Well_C_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Well\Misc_Well_C_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_Well_C_EP1.jpg";
		displayName = "Concrete well";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_Misc_Well_L_EP1 : acd_cup_decor_base {
		model = "ca\structures_e\Misc\Misc_Well\Misc_Well_L_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_Well_L_EP1.jpg";
		displayName = "Village well";
		editorSubcategory = "acd_decorations_outdoor";
	};
	class acd_cup_paletaA_PMC : acd_cup_decor_base {
		model = "ca\structures_pmc\Misc\Accessory\paletaA_PMC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\paletaA_PMC.jpg";
		displayName = "paletaA_PMC";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_paletyC_PMC : acd_cup_decor_base {
		model = "ca\structures_pmc\Misc\Accessory\paletyC_PMC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\paletyC_PMC.jpg";
		displayName = "paletyC_PMC";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_cup_garb_Heap_PMC : acd_cup_decor_base {
		model = "ca\structures_pmc\Misc\Garbage\garb_Heap_PMC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\garb_Heap_PMC.jpg";
		displayName = "garb_heap_pmc";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_garb_junkpile_PMC : acd_cup_decor_base {
		model = "ca\structures_pmc\Misc\Garbage\garb_junkpile_PMC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\garb_junkpile_PMC.jpg";
		displayName = "garb_junkpile_pmc";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_garb_misc_PMC : acd_cup_decor_base {
		model = "ca\structures_pmc\Misc\Garbage\garb_misc_PMC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\garb_misc_PMC.jpg";
		displayName = "garb_misc_pmc";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_garb_paleta_PMC : acd_cup_decor_base {
		model = "ca\structures_pmc\Misc\Garbage\garb_paleta_PMC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\garb_paleta_PMC.jpg";
		displayName = "garb_paleta_pmc";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_cup_R_Stone_01_PMC : acd_cup_decor_base {
		model = "ca\structures_pmc\Misc\Rocks\R_Stone_01_PMC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_Stone_01_PMC.jpg";
		displayName = "R_Stone_01_PMC";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_R_Stone_02_PMC : acd_cup_decor_base {
		model = "ca\structures_pmc\Misc\Rocks\R_Stone_02_PMC.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\R_Stone_02_PMC.jpg";
		displayName = "R_Stone_02_PMC";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_cup_explosive : acd_cup_decor_base {
		model = "ca\weapons\explosive.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\explosive.jpg";
		displayName = "explosive";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_cup_satchel : acd_cup_decor_base {
		model = "ca\weapons\satchel.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\satchel.jpg";
		displayName = "satchel";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_cup_searchlight_manual : acd_cup_decor_base {
		model = "ca\weapons\searchlight_manual.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\searchlight_manual.jpg";
		displayName = "searchlight_manual";
		editorSubcategory = "acd_decorations_milDevices";
	};
	class acd_cup_proxy_ruammosmall : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\proxy_ruammosmall.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_ruammosmall.jpg";
		displayName = "proxy_ruammosmall";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_proxy_rubasicammobox : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\proxy_rubasicammobox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_rubasicammobox.jpg";
		displayName = "proxy_rubasicammobox";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_proxy_ruexplosives : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\proxy_ruexplosives.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_ruexplosives.jpg";
		displayName = "proxy_ruexplosives";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_proxy_rulouncherbox : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\proxy_rulouncherbox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_rulouncherbox.jpg";
		displayName = "proxy_rulouncherbox";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_proxy_ruweaponbox : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\proxy_ruweaponbox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_ruweaponbox.jpg";
		displayName = "proxy_ruweaponbox";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_proxy_ruweaponboxlow : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\proxy_ruweaponboxlow.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_ruweaponboxlow.jpg";
		displayName = "proxy_ruweaponboxlow";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_proxy_usbasicammobox : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\proxy_usbasicammobox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicammobox.jpg";
		displayName = "proxy_usbasicammobox";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_proxy_usbasicammoboxbig : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\proxy_usbasicammoboxbig.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicammoboxbig.jpg";
		displayName = "proxy_usbasicammoboxbig";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_proxy_usbasicammoboxsmall : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\proxy_usbasicammoboxsmall.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicammoboxsmall.jpg";
		displayName = "proxy_usbasicammoboxsmall";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_proxy_usbasicexplosives : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\proxy_usbasicexplosives.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicexplosives.jpg";
		displayName = "proxy_usbasicexplosives";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_proxy_usbasicweaponbox : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\proxy_usbasicweaponbox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicweaponbox.jpg";
		displayName = "proxy_usbasicweaponbox";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_proxy_uslouncherbox : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\proxy_uslouncherbox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_uslouncherbox.jpg";
		displayName = "proxy_uslouncherbox";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_rubasicammo : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\rubasicammo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\rubasicammo.jpg";
		displayName = "rubasicammo";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_rulaunchers : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\rulaunchers.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\rulaunchers.jpg";
		displayName = "rulaunchers";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_ruordnance : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\ruordnance.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ruordnance.jpg";
		displayName = "ruordnance";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_ruvehicleammo : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\ruvehicleammo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ruvehicleammo.jpg";
		displayName = "ruvehicleammo";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_usbasicammo : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\usbasicammo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\usbasicammo.jpg";
		displayName = "Ammo Crate";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_usbasicweapons : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\usbasicweapons.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\usbasicweapons.jpg";
		displayName = "Ammo Crates (medium)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_uslaunchers : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\uslaunchers.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\uslaunchers.jpg";
		displayName = "Ammo Crates (small)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_USOrdnance : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\USOrdnance.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\USOrdnance.jpg";
		displayName = "USOrdnance";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_usspecialweapons : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\usspecialweapons.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\usspecialweapons.jpg";
		displayName = "Ammo Crates (large)";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_usvehicleammo : acd_cup_decor_base {
		model = "ca\weapons\ammoboxes\usvehicleammo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\usvehicleammo.jpg";
		displayName = "usvehicleammo";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_cup_lada_wrecked : acd_cup_decor_base {
		model = "ca\wheeled2\lada\lada_wrecked.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lada_wrecked.jpg";
		displayName = "Car";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_hmmwv_wrecked : acd_cup_decor_base {
		model = "ca\wheeled\hmmwv_wrecked.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hmmwv_wrecked.jpg";
		displayName = "HMMWV";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_skodovka_wrecked : acd_cup_decor_base {
		model = "ca\wheeled\skodovka_wrecked.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\skodovka_wrecked.jpg";
		displayName = "Sedan";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_cup_scud_rocket : acd_cup_decor_base {
		model = "ca\wheeled_e\scud\data\scud_rocket.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\scud_rocket.jpg";
		displayName = "scud_rocket";
		editorSubcategory = "acd_decorations_bombsShells";
	};

	class acd_cup_container_base : acd_cup_decor_base {
		editorCategory = "acd_containers_cup";
		vehicleClass = "ACD containers CUP";
		maximumLoad = 3000;
		transportMaxBackpacks = 1;
		transportmaxmagazines = 1;
		transportmaxweapons = 1;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		icon = "armaContainersAndDecorations\textures\container.paa";
	};	
	class acd_cup_container15k_base : acd_cup_container_base {
		editorCategory = "acd_containers15k_cup";
		vehicleClass = "ACD containers 15k CUP";
		maximumLoad = 15000;
		icon = "armaContainersAndDecorations\textures\container15k.paa";
	};
	class acd_cup_C_ammobednaX : acd_cup_container_base {
		maximumLoad = 800;
		model = "ca\buildings\furniture\ammobednaX.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ammobednaX.jpg";
		displayName = "ammobednaX";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_bedna_ammo2X : acd_cup_container_base {
		maximumLoad = 2500;
		model = "ca\buildings\furniture\bedna_ammo2X.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bedna_ammo2X.jpg";
		displayName = "bedna_ammo2X";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_case_bedroom_b : acd_cup_container_base {
		maximumLoad = 600;
		model = "ca\buildings\furniture\case_bedroom_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_bedroom_b.jpg";
		displayName = "case_bedroom_b";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_case_wooden_b : acd_cup_container_base {
		maximumLoad = 1900;
		model = "ca\buildings\furniture\case_wooden_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_wooden_b.jpg";
		displayName = "case_wooden_b";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_conference_table_a : acd_cup_container_base {
		maximumLoad = 1100;
		model = "ca\buildings\furniture\conference_table_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\conference_table_a.jpg";
		displayName = "conference_table_a";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Dhangar_brownskrin : acd_cup_container_base {
		maximumLoad = 2200;
		model = "ca\buildings\furniture\Dhangar_brownskrin.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_brownskrin.jpg";
		displayName = "Dhangar_brownskrin";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Dhangar_knihovna : acd_cup_container_base {
		maximumLoad = 700;
		model = "ca\buildings\furniture\Dhangar_knihovna.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_knihovna.jpg";
		displayName = "Dhangar_knihovna";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Dhangar_psacistul : acd_cup_container_base {
		maximumLoad = 3200;
		model = "ca\buildings\furniture\Dhangar_psacistul.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_psacistul.jpg";
		displayName = "Dhangar_psacistul";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Dhangar_whiteskrin : acd_cup_container_base {
		maximumLoad = 2800;
		model = "ca\buildings\furniture\Dhangar_whiteskrin.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_whiteskrin.jpg";
		displayName = "Dhangar_whiteskrin";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Dkamna_bila : acd_cup_container_base {
		maximumLoad = 2400;
		model = "ca\buildings\furniture\Dkamna_bila.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dkamna_bila.jpg";
		displayName = "Dkamna_bila";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Dkamna_uhli : acd_cup_container_base {
		maximumLoad = 2000;
		model = "ca\buildings\furniture\Dkamna_uhli.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dkamna_uhli.jpg";
		displayName = "Dkamna_uhli";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_hromada_beden_dekorativniX : acd_cup_container_base {
		maximumLoad = 6400;
		model = "ca\buildings\furniture\hromada_beden_dekorativniX.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hromada_beden_dekorativniX.jpg";
		displayName = "hromada_beden_dekorativniX";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_skrin_bar : acd_cup_container_base {
		maximumLoad = 7000;
		model = "ca\buildings\furniture\skrin_bar.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\skrin_bar.jpg";
		displayName = "skrin_bar";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Skrin_opalena : acd_cup_container_base {
		maximumLoad = 4600;
		model = "ca\buildings\furniture\Skrin_opalena.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skrin_opalena.jpg";
		displayName = "Skrin_opalena";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Truhla_stara : acd_cup_container_base {
		maximumLoad = 1500;
		model = "ca\buildings\furniture\Truhla_stara.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Truhla_stara.jpg";
		displayName = "Truhla_stara";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_4drawer_case_bedroom_b : acd_cup_container_base {
		maximumLoad = 600;
		model = "ca\buildings\misc\4drawer_case_bedroom_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\4drawer_case_bedroom_b.jpg";
		displayName = "4drawer_case_bedroom_b";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Hrob1 : acd_cup_container_base {
		maximumLoad = 2700;
		model = "ca\buildings\misc\Hrob1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Hrob1.jpg";
		displayName = "Hrob1";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Hrob2 : acd_cup_container_base {
		maximumLoad = 2600;
		model = "ca\buildings\misc\Hrob2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Hrob2.jpg";
		displayName = "Hrob2";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_hrobecek : acd_cup_container_base {
		maximumLoad = 6200;
		model = "ca\buildings\misc\hrobecek.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hrobecek.jpg";
		displayName = "Grave";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_hrobecek2 : acd_cup_container_base {
		maximumLoad = 3600;
		model = "ca\buildings\misc\hrobecek2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hrobecek2.jpg";
		displayName = "hrobecek2";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Barel1 : acd_cup_container_base {
		maximumLoad = 700;
		model = "ca\misc\Barel1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel1.jpg";
		displayName = "Barrel (red)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Barel2 : acd_cup_container_base {
		maximumLoad = 700;
		model = "ca\misc\Barel2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel2.jpg";
		displayName = "Barrel (brown)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Barel3 : acd_cup_container_base {
		maximumLoad = 700;
		model = "ca\misc\Barel3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel3.jpg";
		displayName = "Barrel (yellow)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Barel4 : acd_cup_container_base {
		maximumLoad = 700;
		model = "ca\misc\Barel4.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel4.jpg";
		displayName = "Barrel (black)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Barel5 : acd_cup_container_base {
		maximumLoad = 700;
		model = "ca\misc\Barel5.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel5.jpg";
		displayName = "Barrel (green)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Barel6 : acd_cup_container_base {
		maximumLoad = 700;
		model = "ca\misc\Barel6.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel6.jpg";
		displayName = "Barrel (purple)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Barel7 : acd_cup_container_base {
		maximumLoad = 700;
		model = "ca\misc\Barel7.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel7.jpg";
		displayName = "Barrel fire";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Barel8 : acd_cup_container_base {
		maximumLoad = 700;
		model = "ca\misc\Barel8.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel8.jpg";
		displayName = "barel8";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_drevena_bedna : acd_cup_container_base {
		maximumLoad = 1500;
		model = "ca\misc\drevena_bedna.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\drevena_bedna.jpg";
		displayName = "Wooden crate";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Kontejner : acd_cup_container_base {
		maximumLoad = 6700;
		model = "ca\misc\Kontejner.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kontejner.jpg";
		displayName = "Trash";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Kontejner_papir : acd_cup_container_base {
		maximumLoad = 4500;
		model = "ca\misc\Kontejner_papir.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kontejner_papir.jpg";
		displayName = "Trash Paper";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Kontejner_plasty : acd_cup_container_base {
		maximumLoad = 4500;
		model = "ca\misc\Kontejner_plasty.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kontejner_plasty.jpg";
		displayName = "Trash Plastic";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Kontejner_sklo : acd_cup_container_base {
		maximumLoad = 4500;
		model = "ca\misc\Kontejner_sklo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kontejner_sklo.jpg";
		displayName = "Trash Glass";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_lekarnika_proxy : acd_cup_container_base {
		maximumLoad = 200;
		model = "ca\misc\lekarnika_proxy.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lekarnika_proxy.jpg";
		displayName = "lekarnika_proxy";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_MailBoxNorth : acd_cup_container_base {
		maximumLoad = 500;
		model = "ca\misc\MailBoxNorth.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\MailBoxNorth.jpg";
		displayName = "MailBoxNorth";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_MailBoxSouth : acd_cup_container_base {
		maximumLoad = 600;
		model = "ca\misc\MailBoxSouth.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\MailBoxSouth.jpg";
		displayName = "MailBoxSouth";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Misc_Backpackheap : acd_cup_container_base {
		maximumLoad = 4500;
		model = "ca\misc\Misc_Backpackheap.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_Backpackheap.jpg";
		displayName = "Backpack heap";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_Misc_cargo_cont_net1 : acd_cup_container_base {
		maximumLoad = 7100;
		model = "ca\misc\Misc_cargo_cont_net1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_cargo_cont_net1.jpg";
		displayName = "Container in net";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_Misc_cargo_cont_tiny : acd_cup_container_base {
		maximumLoad = 7300;
		model = "ca\misc\Misc_cargo_cont_tiny.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_cargo_cont_tiny.jpg";
		displayName = "Cargo container tiny";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_Odpadkovy_kos : acd_cup_container_base {
		maximumLoad = 500;
		model = "ca\misc\Odpadkovy_kos.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Odpadkovy_kos.jpg";
		displayName = "Odpadkovy_kos";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_popelnice : acd_cup_container_base {
		maximumLoad = 800;
		model = "ca\misc\popelnice.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\popelnice.jpg";
		displayName = "Trashcan";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_popelnice_2 : acd_cup_container_base {
		maximumLoad = 800;
		model = "ca\misc\popelnice_2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\popelnice_2.jpg";
		displayName = "popelnice_2";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Gunrack1 : acd_cup_container_base {
		maximumLoad = 1500;
		model = "ca\misc2\Gunrack1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Gunrack1.jpg";
		displayName = "Gun rack";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Gunrack2 : acd_cup_container_base {
		maximumLoad = 1500;
		model = "ca\misc2\Gunrack2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Gunrack2.jpg";
		displayName = "Gun rack (rifles)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Gunrack_Empty : acd_cup_container_base {
		maximumLoad = 1500;
		model = "ca\misc2\Gunrack_Empty.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Gunrack_Empty.jpg";
		displayName = "gunrack_empty";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_A_tent : acd_cup_container_base {
		maximumLoad = 5000;
		model = "ca\misc3\A_tent.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\A_tent.jpg";
		displayName = "Old camping tent";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_briefcase : acd_cup_container_base {
		maximumLoad = 300;
		model = "ca\misc3\briefcase.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\briefcase.jpg";
		displayName = "Suitcase";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_IED_V1 : acd_cup_container_base {
		maximumLoad = 900;
		model = "ca\misc_baf\IED_V1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\IED_V1.jpg";
		displayName = "IED_V1";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_IED_V2 : acd_cup_container_base {
		maximumLoad = 400;
		model = "ca\misc_baf\IED_V2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\IED_V2.jpg";
		displayName = "IED_V2";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_IED_V3 : acd_cup_container_base {
		maximumLoad = 600;
		model = "ca\misc_baf\IED_V3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\IED_V3.jpg";
		displayName = "IED_V3";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_bedna : acd_cup_container_base {
		maximumLoad = 800;
		model = "ca\structures\A_BuildingWIP\data\bedna\bedna.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bedna.jpg";
		displayName = "bedna";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_toilet_b_02 : acd_cup_container_base {
		maximumLoad = 300;
		model = "ca\structures\Furniture\Bathroom\toilet_b_02\toilet_b_02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\toilet_b_02.jpg";
		displayName = "toilet_b_02";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_almara : acd_cup_container_base {
		maximumLoad = 3800;
		model = "ca\structures\Furniture\Cases\almara\almara.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\almara.jpg";
		displayName = "almara";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_case_a : acd_cup_container_base {
		maximumLoad = 2100;
		model = "ca\structures\Furniture\Cases\case_a\case_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_a.jpg";
		displayName = "case_a";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_case_bedroom_a : acd_cup_container_base {
		maximumLoad = 500;
		model = "ca\structures\Furniture\Cases\case_bedroom_a\case_bedroom_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_bedroom_a.jpg";
		displayName = "case_bedroom_a";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_case_cans_b : acd_cup_container_base {
		maximumLoad = 2200;
		model = "ca\structures\Furniture\Cases\case_cans_b\case_cans_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_cans_b.jpg";
		displayName = "case_cans_b";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Dhangar_brownskrin_1 : acd_cup_container_base {
		maximumLoad = 2200;
		model = "ca\structures\Furniture\Cases\Dhangar_borwnskrin\Dhangar_brownskrin.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_brownskrin.jpg";
		displayName = "Dhangar_brownskrin";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_vending_machine : acd_cup_container_base {
		maximumLoad = 3300;
		model = "ca\structures\Furniture\Eletrical_appliances\vending_machine\vending_machine.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vending_machine.jpg";
		displayName = "vending_machine";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_washing_machine : acd_cup_container_base {
		maximumLoad = 1000;
		model = "ca\structures\Furniture\Eletrical_appliances\washing_machine\washing_machine.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\washing_machine.jpg";
		displayName = "washing_machine";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Dkamna_uhli_1 : acd_cup_container_base {
		maximumLoad = 2000;
		model = "ca\structures\Furniture\kitchen\Dkamna_uhli\Dkamna_uhli.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dkamna_uhli.jpg";
		displayName = "Dkamna_uhli";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_conference_table_a_1 : acd_cup_container_base {
		maximumLoad = 1100;
		model = "ca\structures\Furniture\Tables\conference_table_a\conference_table_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\conference_table_a.jpg";
		displayName = "conference_table_a";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_office_table_a : acd_cup_container_base {
		maximumLoad = 1200;
		model = "ca\structures\Furniture\Tables\office_table_a\office_table_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\office_table_a.jpg";
		displayName = "office_table_a";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_fridge : acd_cup_container_base {
		maximumLoad = 700;
		model = "ca\structures\Furniture\kitchen\fridge\fridge.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\fridge.jpg";
		displayName = "fridge";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Kitchenstove_Elec : acd_cup_container_base {
		maximumLoad = 400;
		model = "ca\structures\Furniture\kitchen\Kitchenstove_Elec\Kitchenstove_Elec.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kitchenstove_Elec.jpg";
		displayName = "kitchenstove_elec";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Misc_ChickenCoop : acd_cup_container_base {
		maximumLoad = 25500;
		model = "ca\structures\Misc\ChickenCoop\Misc_ChickenCoop.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_ChickenCoop.jpg";
		displayName = "chickencoop";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Misc_PostBox : acd_cup_container_base {
		maximumLoad = 200;
		model = "ca\structures\Misc\Misc_PostBox\Misc_PostBox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_PostBox.jpg";
		displayName = "postbox";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_bag_EP1 : acd_cup_container_base {
		maximumLoad = 800;
		model = "ca\structures_e\Misc\Misc_Interier\bag_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bag_EP1.jpg";
		displayName = "Bag";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_cabinet_EP1 : acd_cup_container_base {
		maximumLoad = 4300;
		model = "ca\structures_e\Misc\Misc_Interier\cabinet_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\cabinet_EP1.jpg";
		displayName = "Wooden cabinet";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_chest_EP1 : acd_cup_container_base {
		maximumLoad = 1600;
		model = "ca\structures_e\Misc\Misc_Interier\chest_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\chest_EP1.jpg";
		displayName = "Chest";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_reservoir_EP1 : acd_cup_container_base {
		maximumLoad = 2900;
		model = "ca\structures_e\Misc\Misc_Interier\reservoir_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\reservoir_EP1.jpg";
		displayName = "Reservoir";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_sack_EP1 : acd_cup_container_base {
		maximumLoad = 200;
		model = "ca\structures_e\Misc\Misc_Interier\sack_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sack_EP1.jpg";
		displayName = "Sack";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_vase_EP1 : acd_cup_container_base {
		maximumLoad = 200;
		model = "ca\structures_e\Misc\Misc_Interier\vase_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vase_EP1.jpg";
		displayName = "Vase";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_vase_loam_2_EP1 : acd_cup_container_base {
		maximumLoad = 200;
		model = "ca\structures_e\Misc\Misc_Interier\vase_loam_2_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vase_loam_2_EP1.jpg";
		displayName = "Vase (adobe) 2";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_vase_loam_3_EP1 : acd_cup_container_base {
		maximumLoad = 300;
		model = "ca\structures_e\Misc\Misc_Interier\vase_loam_3_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vase_loam_3_EP1.jpg";
		displayName = "Vase (adobe) 3";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_vase_loam_EP1 : acd_cup_container_base {
		maximumLoad = 500;
		model = "ca\structures_e\Misc\Misc_Interier\vase_loam_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vase_loam_EP1.jpg";
		displayName = "Vase (adobe)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_Bags_EP1 : acd_cup_container_base {
		maximumLoad = 3900;
		model = "ca\structures_e\Misc\Misc_Market\Bags_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bags_EP1.jpg";
		displayName = "Bags with goods";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_crates_EP1 : acd_cup_container_base {
		maximumLoad = 8100;
		model = "ca\structures_e\Misc\Misc_Market\crates_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\crates_EP1.jpg";
		displayName = "Wooden crates";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_crates_stack_EP1 : acd_cup_container_base {
		maximumLoad = 1800;
		model = "ca\structures_e\Misc\Misc_Market\crates_stack_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\crates_stack_EP1.jpg";
		displayName = "Shabby crates";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C_proxy_ruammosmall : acd_cup_container_base {
		maximumLoad = 50;
		model = "ca\weapons\ammoboxes\proxy_ruammosmall.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_ruammosmall.jpg";
		displayName = "proxy_ruammosmall";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_proxy_rubasicammobox : acd_cup_container_base {
		maximumLoad = 100;
		model = "ca\weapons\ammoboxes\proxy_rubasicammobox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_rubasicammobox.jpg";
		displayName = "proxy_rubasicammobox";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_proxy_ruexplosives : acd_cup_container_base {
		maximumLoad = 800;
		model = "ca\weapons\ammoboxes\proxy_ruexplosives.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_ruexplosives.jpg";
		displayName = "proxy_ruexplosives";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_proxy_rulouncherbox : acd_cup_container_base {
		maximumLoad = 2700;
		model = "ca\weapons\ammoboxes\proxy_rulouncherbox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_rulouncherbox.jpg";
		displayName = "proxy_rulouncherbox";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_proxy_ruweaponbox : acd_cup_container_base {
		maximumLoad = 900;
		model = "ca\weapons\ammoboxes\proxy_ruweaponbox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_ruweaponbox.jpg";
		displayName = "proxy_ruweaponbox";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_proxy_ruweaponboxlow : acd_cup_container_base {
		maximumLoad = 300;
		model = "ca\weapons\ammoboxes\proxy_ruweaponboxlow.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_ruweaponboxlow.jpg";
		displayName = "proxy_ruweaponboxlow";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_proxy_usbasicammobox : acd_cup_container_base {
		maximumLoad = 1300;
		model = "ca\weapons\ammoboxes\proxy_usbasicammobox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicammobox.jpg";
		displayName = "proxy_usbasicammobox";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_proxy_usbasicammoboxbig : acd_cup_container_base {
		maximumLoad = 400;
		model = "ca\weapons\ammoboxes\proxy_usbasicammoboxbig.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicammoboxbig.jpg";
		displayName = "proxy_usbasicammoboxbig";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_proxy_usbasicammoboxsmall : acd_cup_container_base {
		maximumLoad = 200;
		model = "ca\weapons\ammoboxes\proxy_usbasicammoboxsmall.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicammoboxsmall.jpg";
		displayName = "proxy_usbasicammoboxsmall";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_proxy_usbasicexplosives : acd_cup_container_base {
		maximumLoad = 1300;
		model = "ca\weapons\ammoboxes\proxy_usbasicexplosives.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicexplosives.jpg";
		displayName = "proxy_usbasicexplosives";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_proxy_usbasicweaponbox : acd_cup_container_base {
		maximumLoad = 200;
		model = "ca\weapons\ammoboxes\proxy_usbasicweaponbox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicweaponbox.jpg";
		displayName = "proxy_usbasicweaponbox";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_proxy_uslouncherbox : acd_cup_container_base {
		maximumLoad = 800;
		model = "ca\weapons\ammoboxes\proxy_uslouncherbox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_uslouncherbox.jpg";
		displayName = "proxy_uslouncherbox";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_rubasicammo : acd_cup_container_base {
		maximumLoad = 3400;
		model = "ca\weapons\ammoboxes\rubasicammo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\rubasicammo.jpg";
		displayName = "rubasicammo";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_rulaunchers : acd_cup_container_base {
		maximumLoad = 5100;
		model = "ca\weapons\ammoboxes\rulaunchers.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\rulaunchers.jpg";
		displayName = "rulaunchers";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_ruordnance : acd_cup_container_base {
		maximumLoad = 6500;
		model = "ca\weapons\ammoboxes\ruordnance.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ruordnance.jpg";
		displayName = "ruordnance";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_ruvehicleammo : acd_cup_container_base {
		maximumLoad = 150500;
		model = "ca\weapons\ammoboxes\ruvehicleammo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ruvehicleammo.jpg";
		displayName = "ruvehicleammo";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_usbasicammo : acd_cup_container_base {
		maximumLoad = 1300;
		model = "ca\weapons\ammoboxes\usbasicammo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\usbasicammo.jpg";
		displayName = "Ammo Crate";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_usbasicweapons : acd_cup_container_base {
		maximumLoad = 9900;
		model = "ca\weapons\ammoboxes\usbasicweapons.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\usbasicweapons.jpg";
		displayName = "Ammo Crates (medium)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_uslaunchers : acd_cup_container_base {
		maximumLoad = 10600;
		model = "ca\weapons\ammoboxes\uslaunchers.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\uslaunchers.jpg";
		displayName = "Ammo Crates (small)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_USOrdnance : acd_cup_container_base {
		maximumLoad = 7300;
		model = "ca\weapons\ammoboxes\USOrdnance.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\USOrdnance.jpg";
		displayName = "USOrdnance";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_usspecialweapons : acd_cup_container_base {
		maximumLoad = 31300;
		model = "ca\weapons\ammoboxes\usspecialweapons.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\usspecialweapons.jpg";
		displayName = "Ammo Crates (large)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C_usvehicleammo : acd_cup_container_base {
		maximumLoad = 42200;
		model = "ca\weapons\ammoboxes\usvehicleammo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\usvehicleammo.jpg";
		displayName = "usvehicleammo";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_ammobednaX : acd_cup_container15k_base {
		model = "ca\buildings\furniture\ammobednaX.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ammobednaX.jpg";
		displayName = "ammobednaX (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_bedna_ammo2X : acd_cup_container15k_base {
		model = "ca\buildings\furniture\bedna_ammo2X.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bedna_ammo2X.jpg";
		displayName = "bedna_ammo2X (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_case_bedroom_b : acd_cup_container15k_base {
		model = "ca\buildings\furniture\case_bedroom_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_bedroom_b.jpg";
		displayName = "case_bedroom_b (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_case_wooden_b : acd_cup_container15k_base {
		model = "ca\buildings\furniture\case_wooden_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_wooden_b.jpg";
		displayName = "case_wooden_b (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_conference_table_a : acd_cup_container15k_base {
		model = "ca\buildings\furniture\conference_table_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\conference_table_a.jpg";
		displayName = "conference_table_a (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Dhangar_brownskrin : acd_cup_container15k_base {
		model = "ca\buildings\furniture\Dhangar_brownskrin.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_brownskrin.jpg";
		displayName = "Dhangar_brownskrin (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Dhangar_knihovna : acd_cup_container15k_base {
		model = "ca\buildings\furniture\Dhangar_knihovna.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_knihovna.jpg";
		displayName = "Dhangar_knihovna (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Dhangar_psacistul : acd_cup_container15k_base {
		model = "ca\buildings\furniture\Dhangar_psacistul.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_psacistul.jpg";
		displayName = "Dhangar_psacistul (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Dhangar_whiteskrin : acd_cup_container15k_base {
		model = "ca\buildings\furniture\Dhangar_whiteskrin.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_whiteskrin.jpg";
		displayName = "Dhangar_whiteskrin (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Dkamna_bila : acd_cup_container15k_base {
		model = "ca\buildings\furniture\Dkamna_bila.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dkamna_bila.jpg";
		displayName = "Dkamna_bila (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Dkamna_uhli : acd_cup_container15k_base {
		model = "ca\buildings\furniture\Dkamna_uhli.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dkamna_uhli.jpg";
		displayName = "Dkamna_uhli (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_hromada_beden_dekorativniX : acd_cup_container15k_base {
		model = "ca\buildings\furniture\hromada_beden_dekorativniX.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hromada_beden_dekorativniX.jpg";
		displayName = "hromada_beden_dekorativniX (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_skrin_bar : acd_cup_container15k_base {
		model = "ca\buildings\furniture\skrin_bar.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\skrin_bar.jpg";
		displayName = "skrin_bar (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Skrin_opalena : acd_cup_container15k_base {
		model = "ca\buildings\furniture\Skrin_opalena.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Skrin_opalena.jpg";
		displayName = "Skrin_opalena (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Truhla_stara : acd_cup_container15k_base {
		model = "ca\buildings\furniture\Truhla_stara.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Truhla_stara.jpg";
		displayName = "Truhla_stara (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_4drawer_case_bedroom_b : acd_cup_container15k_base {
		model = "ca\buildings\misc\4drawer_case_bedroom_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\4drawer_case_bedroom_b.jpg";
		displayName = "4drawer_case_bedroom_b (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Hrob1 : acd_cup_container15k_base {
		model = "ca\buildings\misc\Hrob1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Hrob1.jpg";
		displayName = "Hrob1 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Hrob2 : acd_cup_container15k_base {
		model = "ca\buildings\misc\Hrob2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Hrob2.jpg";
		displayName = "Hrob2 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_hrobecek : acd_cup_container15k_base {
		model = "ca\buildings\misc\hrobecek.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hrobecek.jpg";
		displayName = "Grave (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_hrobecek2 : acd_cup_container15k_base {
		model = "ca\buildings\misc\hrobecek2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\hrobecek2.jpg";
		displayName = "hrobecek2 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Barel1 : acd_cup_container15k_base {
		model = "ca\misc\Barel1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel1.jpg";
		displayName = "Barrel (red) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Barel2 : acd_cup_container15k_base {
		model = "ca\misc\Barel2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel2.jpg";
		displayName = "Barrel (brown) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Barel3 : acd_cup_container15k_base {
		model = "ca\misc\Barel3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel3.jpg";
		displayName = "Barrel (yellow) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Barel4 : acd_cup_container15k_base {
		model = "ca\misc\Barel4.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel4.jpg";
		displayName = "Barrel (black) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Barel5 : acd_cup_container15k_base {
		model = "ca\misc\Barel5.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel5.jpg";
		displayName = "Barrel (green) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Barel6 : acd_cup_container15k_base {
		model = "ca\misc\Barel6.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel6.jpg";
		displayName = "Barrel (purple) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Barel7 : acd_cup_container15k_base {
		model = "ca\misc\Barel7.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel7.jpg";
		displayName = "Barrel fire (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Barel8 : acd_cup_container15k_base {
		model = "ca\misc\Barel8.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Barel8.jpg";
		displayName = "barel8 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_drevena_bedna : acd_cup_container15k_base {
		model = "ca\misc\drevena_bedna.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\drevena_bedna.jpg";
		displayName = "Wooden crate (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Kontejner : acd_cup_container15k_base {
		model = "ca\misc\Kontejner.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kontejner.jpg";
		displayName = "Trash (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Kontejner_papir : acd_cup_container15k_base {
		model = "ca\misc\Kontejner_papir.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kontejner_papir.jpg";
		displayName = "Trash Paper (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Kontejner_plasty : acd_cup_container15k_base {
		model = "ca\misc\Kontejner_plasty.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kontejner_plasty.jpg";
		displayName = "Trash Plastic (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Kontejner_sklo : acd_cup_container15k_base {
		model = "ca\misc\Kontejner_sklo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kontejner_sklo.jpg";
		displayName = "Trash Glass (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_lekarnika_proxy : acd_cup_container15k_base {
		model = "ca\misc\lekarnika_proxy.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\lekarnika_proxy.jpg";
		displayName = "lekarnika_proxy (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_MailBoxNorth : acd_cup_container15k_base {
		model = "ca\misc\MailBoxNorth.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\MailBoxNorth.jpg";
		displayName = "MailBoxNorth (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_MailBoxSouth : acd_cup_container15k_base {
		model = "ca\misc\MailBoxSouth.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\MailBoxSouth.jpg";
		displayName = "MailBoxSouth (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Misc_Backpackheap : acd_cup_container15k_base {
		model = "ca\misc\Misc_Backpackheap.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_Backpackheap.jpg";
		displayName = "Backpack heap (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_Misc_cargo_cont_net1 : acd_cup_container15k_base {
		model = "ca\misc\Misc_cargo_cont_net1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_cargo_cont_net1.jpg";
		displayName = "Container in net (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_Misc_cargo_cont_tiny : acd_cup_container15k_base {
		model = "ca\misc\Misc_cargo_cont_tiny.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_cargo_cont_tiny.jpg";
		displayName = "Cargo container tiny (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_Odpadkovy_kos : acd_cup_container15k_base {
		model = "ca\misc\Odpadkovy_kos.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Odpadkovy_kos.jpg";
		displayName = "Odpadkovy_kos (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_popelnice : acd_cup_container15k_base {
		model = "ca\misc\popelnice.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\popelnice.jpg";
		displayName = "Trashcan (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_popelnice_2 : acd_cup_container15k_base {
		model = "ca\misc\popelnice_2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\popelnice_2.jpg";
		displayName = "popelnice_2 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Gunrack1 : acd_cup_container15k_base {
		model = "ca\misc2\Gunrack1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Gunrack1.jpg";
		displayName = "Gun rack (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Gunrack2 : acd_cup_container15k_base {
		model = "ca\misc2\Gunrack2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Gunrack2.jpg";
		displayName = "Gun rack (rifles) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Gunrack_Empty : acd_cup_container15k_base {
		model = "ca\misc2\Gunrack_Empty.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Gunrack_Empty.jpg";
		displayName = "gunrack_empty (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_A_tent : acd_cup_container15k_base {
		model = "ca\misc3\A_tent.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\A_tent.jpg";
		displayName = "Old camping tent (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_briefcase : acd_cup_container15k_base {
		model = "ca\misc3\briefcase.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\briefcase.jpg";
		displayName = "Suitcase (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_IED_V1 : acd_cup_container15k_base {
		model = "ca\misc_baf\IED_V1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\IED_V1.jpg";
		displayName = "IED_V1 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_IED_V2 : acd_cup_container15k_base {
		model = "ca\misc_baf\IED_V2.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\IED_V2.jpg";
		displayName = "IED_V2 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_IED_V3 : acd_cup_container15k_base {
		model = "ca\misc_baf\IED_V3.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\IED_V3.jpg";
		displayName = "IED_V3 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_bedna : acd_cup_container15k_base {
		model = "ca\structures\A_BuildingWIP\data\bedna\bedna.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bedna.jpg";
		displayName = "bedna (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_toilet_b_02 : acd_cup_container15k_base {
		model = "ca\structures\Furniture\Bathroom\toilet_b_02\toilet_b_02.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\toilet_b_02.jpg";
		displayName = "toilet_b_02 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_almara : acd_cup_container15k_base {
		model = "ca\structures\Furniture\Cases\almara\almara.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\almara.jpg";
		displayName = "almara (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_case_a : acd_cup_container15k_base {
		model = "ca\structures\Furniture\Cases\case_a\case_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_a.jpg";
		displayName = "case_a (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_case_bedroom_a : acd_cup_container15k_base {
		model = "ca\structures\Furniture\Cases\case_bedroom_a\case_bedroom_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_bedroom_a.jpg";
		displayName = "case_bedroom_a (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_case_cans_b : acd_cup_container15k_base {
		model = "ca\structures\Furniture\Cases\case_cans_b\case_cans_b.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\case_cans_b.jpg";
		displayName = "case_cans_b (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Dhangar_brownskrin_1 : acd_cup_container15k_base {
		model = "ca\structures\Furniture\Cases\Dhangar_borwnskrin\Dhangar_brownskrin.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dhangar_brownskrin.jpg";
		displayName = "Dhangar_brownskrin (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_vending_machine : acd_cup_container15k_base {
		model = "ca\structures\Furniture\Eletrical_appliances\vending_machine\vending_machine.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vending_machine.jpg";
		displayName = "vending_machine (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_washing_machine : acd_cup_container15k_base {
		model = "ca\structures\Furniture\Eletrical_appliances\washing_machine\washing_machine.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\washing_machine.jpg";
		displayName = "washing_machine (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Dkamna_uhli_1 : acd_cup_container15k_base {
		model = "ca\structures\Furniture\kitchen\Dkamna_uhli\Dkamna_uhli.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Dkamna_uhli.jpg";
		displayName = "Dkamna_uhli (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_conference_table_a_1 : acd_cup_container15k_base {
		model = "ca\structures\Furniture\Tables\conference_table_a\conference_table_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\conference_table_a.jpg";
		displayName = "conference_table_a (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_office_table_a : acd_cup_container15k_base {
		model = "ca\structures\Furniture\Tables\office_table_a\office_table_a.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\office_table_a.jpg";
		displayName = "office_table_a (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_fridge : acd_cup_container15k_base {
		model = "ca\structures\Furniture\kitchen\fridge\fridge.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\fridge.jpg";
		displayName = "fridge (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Kitchenstove_Elec : acd_cup_container15k_base {
		model = "ca\structures\Furniture\kitchen\Kitchenstove_Elec\Kitchenstove_Elec.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Kitchenstove_Elec.jpg";
		displayName = "kitchenstove_elec (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Misc_ChickenCoop : acd_cup_container15k_base {
		model = "ca\structures\Misc\ChickenCoop\Misc_ChickenCoop.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_ChickenCoop.jpg";
		displayName = "chickencoop (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Misc_PostBox : acd_cup_container15k_base {
		model = "ca\structures\Misc\Misc_PostBox\Misc_PostBox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Misc_PostBox.jpg";
		displayName = "postbox (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_bag_EP1 : acd_cup_container15k_base {
		model = "ca\structures_e\Misc\Misc_Interier\bag_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\bag_EP1.jpg";
		displayName = "Bag (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_cabinet_EP1 : acd_cup_container15k_base {
		model = "ca\structures_e\Misc\Misc_Interier\cabinet_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\cabinet_EP1.jpg";
		displayName = "Wooden cabinet (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_chest_EP1 : acd_cup_container15k_base {
		model = "ca\structures_e\Misc\Misc_Interier\chest_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\chest_EP1.jpg";
		displayName = "Chest (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_reservoir_EP1 : acd_cup_container15k_base {
		model = "ca\structures_e\Misc\Misc_Interier\reservoir_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\reservoir_EP1.jpg";
		displayName = "Reservoir (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_sack_EP1 : acd_cup_container15k_base {
		model = "ca\structures_e\Misc\Misc_Interier\sack_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\sack_EP1.jpg";
		displayName = "Sack (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_vase_EP1 : acd_cup_container15k_base {
		model = "ca\structures_e\Misc\Misc_Interier\vase_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vase_EP1.jpg";
		displayName = "Vase (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_vase_loam_2_EP1 : acd_cup_container15k_base {
		model = "ca\structures_e\Misc\Misc_Interier\vase_loam_2_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vase_loam_2_EP1.jpg";
		displayName = "Vase (adobe) 2 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_vase_loam_3_EP1 : acd_cup_container15k_base {
		model = "ca\structures_e\Misc\Misc_Interier\vase_loam_3_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vase_loam_3_EP1.jpg";
		displayName = "Vase (adobe) 3 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_vase_loam_EP1 : acd_cup_container15k_base {
		model = "ca\structures_e\Misc\Misc_Interier\vase_loam_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\vase_loam_EP1.jpg";
		displayName = "Vase (adobe) (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_Bags_EP1 : acd_cup_container15k_base {
		model = "ca\structures_e\Misc\Misc_Market\Bags_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\Bags_EP1.jpg";
		displayName = "Bags with goods (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_crates_EP1 : acd_cup_container15k_base {
		model = "ca\structures_e\Misc\Misc_Market\crates_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\crates_EP1.jpg";
		displayName = "Wooden crates (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_crates_stack_EP1 : acd_cup_container15k_base {
		model = "ca\structures_e\Misc\Misc_Market\crates_stack_EP1.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\crates_stack_EP1.jpg";
		displayName = "Shabby crates (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_cup_C15k_proxy_ruammosmall : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\proxy_ruammosmall.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_ruammosmall.jpg";
		displayName = "proxy_ruammosmall (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_proxy_rubasicammobox : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\proxy_rubasicammobox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_rubasicammobox.jpg";
		displayName = "proxy_rubasicammobox (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_proxy_ruexplosives : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\proxy_ruexplosives.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_ruexplosives.jpg";
		displayName = "proxy_ruexplosives (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_proxy_rulouncherbox : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\proxy_rulouncherbox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_rulouncherbox.jpg";
		displayName = "proxy_rulouncherbox (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_proxy_ruweaponbox : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\proxy_ruweaponbox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_ruweaponbox.jpg";
		displayName = "proxy_ruweaponbox (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_proxy_ruweaponboxlow : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\proxy_ruweaponboxlow.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_ruweaponboxlow.jpg";
		displayName = "proxy_ruweaponboxlow (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_proxy_usbasicammobox : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\proxy_usbasicammobox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicammobox.jpg";
		displayName = "proxy_usbasicammobox (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_proxy_usbasicammoboxbig : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\proxy_usbasicammoboxbig.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicammoboxbig.jpg";
		displayName = "proxy_usbasicammoboxbig (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_proxy_usbasicammoboxsmall : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\proxy_usbasicammoboxsmall.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicammoboxsmall.jpg";
		displayName = "proxy_usbasicammoboxsmall (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_proxy_usbasicexplosives : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\proxy_usbasicexplosives.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicexplosives.jpg";
		displayName = "proxy_usbasicexplosives (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_proxy_usbasicweaponbox : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\proxy_usbasicweaponbox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_usbasicweaponbox.jpg";
		displayName = "proxy_usbasicweaponbox (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_proxy_uslouncherbox : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\proxy_uslouncherbox.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\proxy_uslouncherbox.jpg";
		displayName = "proxy_uslouncherbox (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_rubasicammo : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\rubasicammo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\rubasicammo.jpg";
		displayName = "rubasicammo (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_rulaunchers : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\rulaunchers.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\rulaunchers.jpg";
		displayName = "rulaunchers (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_ruordnance : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\ruordnance.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ruordnance.jpg";
		displayName = "ruordnance (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_ruvehicleammo : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\ruvehicleammo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\ruvehicleammo.jpg";
		displayName = "ruvehicleammo (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_usbasicammo : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\usbasicammo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\usbasicammo.jpg";
		displayName = "Ammo Crate (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_usbasicweapons : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\usbasicweapons.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\usbasicweapons.jpg";
		displayName = "Ammo Crates (medium) (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_uslaunchers : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\uslaunchers.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\uslaunchers.jpg";
		displayName = "Ammo Crates (small) (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_USOrdnance : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\USOrdnance.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\USOrdnance.jpg";
		displayName = "USOrdnance (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_usspecialweapons : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\usspecialweapons.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\usspecialweapons.jpg";
		displayName = "Ammo Crates (large) (15k load)";
		editorSubcategory = "acd_containers_military";
	};
	class acd_cup_C15k_usvehicleammo : acd_cup_container15k_base {
		model = "ca\weapons\ammoboxes\usvehicleammo.p3d";
		editorPreview = "\armaContainersAndDecorations_CUP\preview\usvehicleammo.jpg";
		displayName = "usvehicleammo (15k load)";
		editorSubcategory = "acd_containers_military";
	};
};

