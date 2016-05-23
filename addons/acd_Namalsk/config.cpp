class CfgPatches {
	class armaContainersAndDecorations_Namalsk {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		author[]= {"vitaly'mind'chizhikov"};
		requiredAddons[] = {"armaContainersAndDecorations"};
	};
};
class CfgEditorCategories {
	class acd_containers_nam {displayName = "ACD containers (Namalsk)";};
	class acd_containers15k_nam {displayName = "ACD containers (15k load) (Namalsk)";};
	class acd_decorations_nam {displayName = "ACD decorations (Namalsk)";};
};
class CfgVehicles {
	class House_F; // External class reference
	class acd_nam_decor_base : House_F {
		destrType = "DestructNo";
		editorCategory = "acd_decorations_nam";
		editorSubcategory = "";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "ACD decorations Namalsk";
		keepHorizontalPlacement = 0;
		icon = "armaContainersAndDecorations\textures\decoration.paa";
	};
	class acd_nam_t_picea1s : acd_nam_decor_base {
		model = "nst\ns_plants\newtree\t_picea1s.p3d";
		displayName = "t_picea1s";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_nam_t_picea3f : acd_nam_decor_base {
		model = "nst\ns_plants\newtree\t_picea3f.p3d";
		displayName = "t_picea3f";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_nam_t_picea2s_w : acd_nam_decor_base {
		model = "nst\ns_plants\newtree\t_picea2s_w.p3d";
		displayName = "t_picea2s_w";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_nam_t_picea1s_w : acd_nam_decor_base {
		model = "nst\ns_plants\newtree\t_picea1s_w.p3d";
		displayName = "t_picea1s_w";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_nam_z_pinus_mugo_lowpoly : acd_nam_decor_base {
		model = "nst\ns_plants\bush\z_pinus_mugo_lowpoly.p3d";
		displayName = "z_pinus_mugo_lowpoly";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_nam_s_ker_trs_5 : acd_nam_decor_base {
		model = "nst\ns_plants\bush\s_ker_trs_5.p3d";
		displayName = "s_ker_trs_5";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_nam_pinus_mugo_lowpoly : acd_nam_decor_base {
		model = "nst\ns_plants\bush\pinus_mugo_lowpoly.p3d";
		displayName = "pinus_mugo_lowpoly";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bushes";
	};
	class acd_nam_vetev_4_smrk : acd_nam_decor_base {
		model = "nst\ns_plants\misc\vetev_4_smrk.p3d";
		displayName = "vetev_4_smrk";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_nam_grass_kytky : acd_nam_decor_base {
		model = "nst\ns_plants\clutter\grass_kytky.p3d";
		displayName = "grass_kytky";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_nam_r2_boulder1 : acd_nam_decor_base {
		model = "nst\ns_a2\r2_boulder1.p3d";
		displayName = "r2_boulder1";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_nam_r2_stone : acd_nam_decor_base {
		model = "nst\ns_a2\r2_stone.p3d";
		displayName = "r2_stone";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_nam_misc_trunk_torzo : acd_nam_decor_base {
		model = "nst\ns_a2\misc_trunk_torzo.p3d";
		displayName = "misc_trunk_torzo";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_nam_misc_stub1 : acd_nam_decor_base {
		model = "nst\ns_a2\misc_stub1.p3d";
		displayName = "misc_stub1";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_nam_r2_boulder2 : acd_nam_decor_base {
		model = "nst\ns_a2\r2_boulder2.p3d";
		displayName = "r2_boulder2";
		editorSubcategory = "acd_decorations_rocks";
	};
	class acd_nam_r2_rock2 : acd_nam_decor_base {
		model = "nst\ns_a2\r2_rock2.p3d";
		displayName = "r2_rock2";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_bigRocks";
	};
	class acd_nam_parabola_big : acd_nam_decor_base {
		model = "nst\ns_a2\parabola_big.p3d";
		displayName = "parabola_big";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_jezek_kov : acd_nam_decor_base {
		model = "nst\ns_a2\jezek_kov.p3d";
		displayName = "jezek_kov";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_misc_fallenspruce : acd_nam_decor_base {
		model = "nst\ns_a2\misc_fallenspruce.p3d";
		displayName = "misc_fallenspruce";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_nam_misc_fallentree1 : acd_nam_decor_base {
		model = "nst\ns_a2\misc_fallentree1.p3d";
		displayName = "misc_fallentree1";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_nam_sign_board : acd_nam_decor_base {
		model = "nst\ns_a2\sign_board.p3d";
		displayName = "Danger";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_betonovy_blok : acd_nam_decor_base {
		model = "nst\ns_a2\betonovy_blok.p3d";
		displayName = "betonovy_blok";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_lavicka_2 : acd_nam_decor_base {
		model = "nst\ns_a2\lavicka_2.p3d";
		displayName = "lavicka_2";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_nam_ind_boardspack1 : acd_nam_decor_base {
		model = "nst\ns_a2\ind_boardspack1.p3d";
		displayName = "Boards pack";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_nam_ind_timbers : acd_nam_decor_base {
		model = "nst\ns_a2\ind_timbers.p3d";
		displayName = "ind_timbers";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_nam_ind_boardspack2 : acd_nam_decor_base {
		model = "nst\ns_a2\ind_boardspack2.p3d";
		displayName = "Boards pack (small)";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_nam_misc_gcontainer_big : acd_nam_decor_base {
		model = "nst\ns_a2\misc_gcontainer_big.p3d";
		displayName = "Garbage container (large)";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_nam_t_pinusn1s : acd_nam_decor_base {
		model = "nst\ns_a2\t_pinusn1s.p3d";
		displayName = "t_pinusn1s";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_nam_t_pinusn2s : acd_nam_decor_base {
		model = "nst\ns_a2\t_pinusn2s.p3d";
		displayName = "t_pinusn2s";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_nam_t_pinuss2f : acd_nam_decor_base {
		model = "nst\ns_a2\t_pinuss2f.p3d";
		displayName = "t_pinuss2f";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_trees";
	};
	class acd_nam_lavicka_3 : acd_nam_decor_base {
		model = "nst\ns_a2\lavicka_3.p3d";
		displayName = "lavicka_3";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_nam_patnik : acd_nam_decor_base {
		model = "nst\ns_a2\patnik.p3d";
		displayName = "patnik";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_kontejner : acd_nam_decor_base {
		model = "nst\ns_a2\kontejner.p3d";
		displayName = "Garbage container";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_nam_nastenka3 : acd_nam_decor_base {
		model = "nst\ns_a2\nastenka3.p3d";
		displayName = "nastenka3";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_nam_lekarnicka : acd_nam_decor_base {
		model = "nst\ns_a2\lekarnicka.p3d";
		displayName = "lekarnicka";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_conference_table_a : acd_nam_decor_base {
		model = "nst\ns_a2\conference_table_a.p3d";
		displayName = "conference_table_a";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_nam_pc : acd_nam_decor_base {
		model = "nst\ns_a2\pc.p3d";
		displayName = "pc";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_nam_kitchen_chair_a : acd_nam_decor_base {
		model = "nst\ns_a2\kitchen_chair_a.p3d";
		displayName = "kitchen_chair_a";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_nam_library_a : acd_nam_decor_base {
		model = "nst\ns_a2\library_a.p3d";
		displayName = "library_a";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_nam_fluor_lamp : acd_nam_decor_base {
		model = "nst\ns_a2\fluor_lamp.p3d";
		displayName = "fluor_lamp";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_dhangar_brownskrin : acd_nam_decor_base {
		model = "nst\ns_a2\dhangar_brownskrin.p3d";
		displayName = "dhangar_brownskrin";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_nam_tv_a : acd_nam_decor_base {
		model = "nst\ns_a2\tv_a.p3d";
		displayName = "tv_a";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_nam_wall_board_03 : acd_nam_decor_base {
		model = "nst\ns_a2\wall_board_03.p3d";
		displayName = "wall_board_03";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_nam_case_cans_b : acd_nam_decor_base {
		model = "nst\ns_a2\case_cans_b.p3d";
		displayName = "case_cans_b";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_nam_wall_board_02 : acd_nam_decor_base {
		model = "nst\ns_a2\wall_board_02.p3d";
		displayName = "wall_board_02";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_box_c : acd_nam_decor_base {
		model = "nst\ns_a2\box_c.p3d";
		displayName = "box_c";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_nam_case_d : acd_nam_decor_base {
		model = "nst\ns_a2\case_d.p3d";
		displayName = "case_d";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_nam_metalcrate_02 : acd_nam_decor_base {
		model = "nst\ns_a2\metalcrate_02.p3d";
		displayName = "metalcrate_02";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_nam_metalcrate : acd_nam_decor_base {
		model = "nst\ns_a2\metalcrate.p3d";
		displayName = "metalcrate";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_nam_vending_machine : acd_nam_decor_base {
		model = "nst\ns_a2\vending_machine.p3d";
		displayName = "vending_machine";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_wall_board : acd_nam_decor_base {
		model = "nst\ns_a2\wall_board.p3d";
		displayName = "wall_board";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_shelf : acd_nam_decor_base {
		model = "nst\ns_a2\shelf.p3d";
		displayName = "shelf";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_nam_nastenka2 : acd_nam_decor_base {
		model = "nst\ns_a2\nastenka2.p3d";
		displayName = "nastenka2";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_nam_metalcase_02 : acd_nam_decor_base {
		model = "nst\ns_a2\metalcase_02.p3d";
		displayName = "metalcase_02";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_nam_washing_machine : acd_nam_decor_base {
		model = "nst\ns_a2\washing_machine.p3d";
		displayName = "washing_machine";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_sink : acd_nam_decor_base {
		model = "nst\ns_a2\sink.p3d";
		displayName = "sink";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_bucket : acd_nam_decor_base {
		model = "nst\ns_a2\bucket.p3d";
		displayName = "bucket";
		editorSubcategory = "acd_decorations_devicesThings";
	};
	class acd_nam_misc_woodpile : acd_nam_decor_base {
		model = "nst\ns_a2\misc_woodpile.p3d";
		displayName = "misc_woodpile";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_nam_case_a : acd_nam_decor_base {
		model = "nst\ns_a2\case_a.p3d";
		displayName = "case_a";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_nam_fridge : acd_nam_decor_base {
		model = "nst\ns_a2\fridge.p3d";
		displayName = "fridge";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_kitchenstove_elec : acd_nam_decor_base {
		model = "nst\ns_a2\kitchenstove_elec.p3d";
		displayName = "kitchenstove_elec";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_picture_a : acd_nam_decor_base {
		model = "nst\ns_a2\picture_a.p3d";
		displayName = "picture_a";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_skrin_bar : acd_nam_decor_base {
		model = "nst\ns_a2\skrin_bar.p3d";
		displayName = "skrin_bar";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_nam_light_kitchen_03 : acd_nam_decor_base {
		model = "nst\ns_a2\light_kitchen_03.p3d";
		displayName = "light_kitchen_03";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_stul_kuch1 : acd_nam_decor_base {
		model = "nst\ns_a2\stul_kuch1.p3d";
		displayName = "stul_kuch1";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_nam_lobby_table : acd_nam_decor_base {
		model = "nst\ns_a2\lobby_table.p3d";
		displayName = "lobby_table";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_nam_case_bedroom_a : acd_nam_decor_base {
		model = "nst\ns_a2\case_bedroom_a.p3d";
		displayName = "case_bedroom_a";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_nam_hrobecek_krizek2 : acd_nam_decor_base {
		model = "nst\ns_a2\hrobecek_krizek2.p3d";
		displayName = "hrobecek_krizek2";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_plot_ohrada : acd_nam_decor_base {
		model = "nst\ns_a2\plot_ohrada.p3d";
		displayName = "plot_ohrada";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_plot_ohrada_zlomena : acd_nam_decor_base {
		model = "nst\ns_a2\plot_ohrada_zlomena.p3d";
		displayName = "plot_ohrada_zlomena";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_plot_ohrada_pruchozi : acd_nam_decor_base {
		model = "nst\ns_a2\plot_ohrada_pruchozi.p3d";
		displayName = "plot_ohrada_pruchozi";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_misc_fallentree2 : acd_nam_decor_base {
		model = "nst\ns_a2\misc_fallentree2.p3d";
		displayName = "misc_fallentree2";
		editorSubcategory = "acd_decorations_branches";
	};
	class acd_nam_c_grassdrylong : acd_nam_decor_base {
		model = "nst\ns_a2\c_grassdrylong.p3d";
		displayName = "c_grassdrylong";
		editorSubcategory = "acd_decorations_grass";
	};
	class acd_nam_wall_wood1_5 : acd_nam_decor_base {
		model = "nst\ns_a2\wall_wood1_5.p3d";
		displayName = "wall_wood1_5";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_hrobecek : acd_nam_decor_base {
		model = "nst\ns_a2\hrobecek.p3d";
		displayName = "hrobecek";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_hrobecek_krizek1 : acd_nam_decor_base {
		model = "nst\ns_a2\hrobecek_krizek1.p3d";
		displayName = "hrobecek_krizek1";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_plastovy_patnik : acd_nam_decor_base {
		model = "nst\ns_structures\plastovy_patnik.p3d";
		displayName = "plastovy_patnik";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_mi8_crashed : acd_nam_decor_base {
		model = "nst\ns_structures\mi8_crashed.p3d";
		displayName = "Mi-8 Wreck";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_nam_datsun01t_spodok : acd_nam_decor_base {
		model = "nst\ns_structures\datsun01t_spodok.p3d";
		displayName = "datsun01t_spodok";
		editorSubcategory = "acd_decorations_terEffects";
	};
	class acd_nam_bozi_muka : acd_nam_decor_base {
		model = "nst\ns_structures\bozi_muka.p3d";
		displayName = "bozi_muka";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_seb_trubice_beton : acd_nam_decor_base {
		model = "nst\ns_structures\seb_trubice_beton.p3d";
		displayName = "Concrete pipes";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_nam_zelezne_truby : acd_nam_decor_base {
		model = "nst\ns_structures\zelezne_truby.p3d";
		displayName = "zelezne_truby";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_nam_panely_roz : acd_nam_decor_base {
		model = "nst\ns_structures\panely_roz.p3d";
		displayName = "panely_roz";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_nam_panely_srov : acd_nam_decor_base {
		model = "nst\ns_structures\panely_srov.p3d";
		displayName = "panely_srov";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_nam_kupa2 : acd_nam_decor_base {
		model = "nst\ns_structures\kupa2.p3d";
		displayName = "kupa2";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_nam_x_nadrz : acd_nam_decor_base {
		model = "nst\ns_structures\x_nadrz.p3d";
		displayName = "Cistern";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_nam_wall_fence_prov : acd_nam_decor_base {
		model = "nst\ns_structures\wall_fence_prov.p3d";
		displayName = "wall_fence_prov";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_kamaz_zniceny : acd_nam_decor_base {
		model = "nst\ns_structures\kamaz_zniceny.p3d";
		displayName = "kamaz_zniceny";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_nam_dulni_box : acd_nam_decor_base {
		model = "nst\ns_structures\dulni_box.p3d";
		displayName = "dulni_box";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_nam_kontejner_des : acd_nam_decor_base {
		model = "nst\ns_structures\kontejner_des.p3d";
		displayName = "kontejner_des";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_nam_seb_mine : acd_nam_decor_base {
		model = "nst\ns_structures\seb_mine.p3d";
		displayName = "seb_mine";
		editorSubcategory = "acd_decorations_signs";
	};
	class acd_nam_kriz : acd_nam_decor_base {
		model = "nst\ns_structures\kriz.p3d";
		displayName = "kriz";
		keepHorizontalPlacement = 1;
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_drevena_bedna : acd_nam_decor_base {
		model = "nst\ns_structures\drevena_bedna.p3d";
		displayName = "drevena_bedna";
		editorSubcategory = "acd_decorations_boxes";
	};
	class acd_nam_prkna : acd_nam_decor_base {
		model = "nst\ns_structures\prkna.p3d";
		displayName = "prkna";
		editorSubcategory = "acd_decorations_timbers";
	};
	class acd_nam_barel_horici_sta : acd_nam_decor_base {
		model = "nst\ns_structures\barel_horici_sta.p3d";
		displayName = "Barel fire 2";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_nam_jezekbeton : acd_nam_decor_base {
		model = "nst\ns_structures\jezekbeton.p3d";
		displayName = "jezekbeton";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_nam_mrtvola_army1 : acd_nam_decor_base {
		model = "nst\ns_structures\mrtvola_army1.p3d";
		displayName = "mrtvola_army1";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_kupa3 : acd_nam_decor_base {
		model = "nst\ns_structures\kupa3.p3d";
		displayName = "kupa3";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_nam_l_velkakupa : acd_nam_decor_base {
		model = "nst\ns_structures\l_velkakupa.p3d";
		displayName = "l_velkakupa";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_nam_kupa1 : acd_nam_decor_base {
		model = "nst\ns_structures\kupa1.p3d";
		displayName = "kupa1";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_nam_kont3 : acd_nam_decor_base {
		model = "nst\ns_structures\kont3.p3d";
		displayName = "kont3";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_nam_vojenska_palanda : acd_nam_decor_base {
		model = "nst\ns_structures\vojenska_palanda.p3d";
		displayName = "vojenska_palanda";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_kitchen_table_a : acd_nam_decor_base {
		model = "nst\ns_structures\kitchen_table_a.p3d";
		displayName = "kitchen_table_a";
		editorSubcategory = "acd_decorations_tables";
	};
	class acd_nam_in_zidle : acd_nam_decor_base {
		model = "nst\ns_structures\in_zidle.p3d";
		displayName = "in_zidle";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_nam_dkamna_uhli : acd_nam_decor_base {
		model = "nst\ns_structures\dkamna_uhli.p3d";
		displayName = "dkamna_uhli";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_zas_zniceny1 : acd_nam_decor_base {
		model = "nst\ns_structures\zas_zniceny1.p3d";
		displayName = "zas_zniceny1";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_nam_ch_mod_c : acd_nam_decor_base {
		model = "nst\ns_structures\ch_mod_c.p3d";
		displayName = "ch_mod_c";
		editorSubcategory = "acd_decorations_chairs";
	};
	class acd_nam_metalcase_01 : acd_nam_decor_base {
		model = "nst\ns_structures\metalcase_01.p3d";
		displayName = "metalcase_01";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_nam_kont1 : acd_nam_decor_base {
		model = "nst\ns_structures\kont1.p3d";
		displayName = "kont1";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_nam_skl1 : acd_nam_decor_base {
		model = "nst\ns_structures\skl1.p3d";
		displayName = "skl1";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_nam_skl2 : acd_nam_decor_base {
		model = "nst\ns_structures\skl2.p3d";
		displayName = "skl2";
		editorSubcategory = "acd_decorations_constructionSite";
	};
	class acd_nam_kont2 : acd_nam_decor_base {
		model = "nst\ns_structures\kont2.p3d";
		displayName = "kont2";
		editorSubcategory = "acd_decorations_garbage";
	};
	class acd_nam_fence23 : acd_nam_decor_base {
		model = "nst\ns_structures\fence23.p3d";
		displayName = "fence23";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_fence2 : acd_nam_decor_base {
		model = "nst\ns_structures\fence2.p3d";
		displayName = "fence2";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_fence22 : acd_nam_decor_base {
		model = "nst\ns_structures\fence22.p3d";
		displayName = "fence22";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_fence21 : acd_nam_decor_base {
		model = "nst\ns_structures\fence21.p3d";
		displayName = "fence21";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_fence11 : acd_nam_decor_base {
		model = "nst\ns_structures\fence11.p3d";
		displayName = "fence11";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_seno_b : acd_nam_decor_base {
		model = "nst\ns_structures\seno_b.p3d";
		displayName = "seno_b";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_fence12 : acd_nam_decor_base {
		model = "nst\ns_structures\fence12.p3d";
		displayName = "fence12";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_fence1 : acd_nam_decor_base {
		model = "nst\ns_structures\fence1.p3d";
		displayName = "fence1";
		editorSubcategory = "acd_decorations_barriers";
	};
	class acd_nam_hrob2 : acd_nam_decor_base {
		model = "nst\ns_structures\hrob2.p3d";
		displayName = "hrob2";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_nahrobek5 : acd_nam_decor_base {
		model = "nst\ns_structures\nahrobek5.p3d";
		displayName = "nahrobek5";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_hrob1 : acd_nam_decor_base {
		model = "nst\ns_structures\hrob1.p3d";
		displayName = "hrob1";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_nahrobek4 : acd_nam_decor_base {
		model = "nst\ns_structures\nahrobek4.p3d";
		displayName = "nahrobek4";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_nahrobek1 : acd_nam_decor_base {
		model = "nst\ns_structures\nahrobek1.p3d";
		displayName = "nahrobek1";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_hrobecek2 : acd_nam_decor_base {
		model = "nst\ns_structures\hrobecek2.p3d";
		displayName = "hrobecek2";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_nahrobek3 : acd_nam_decor_base {
		model = "nst\ns_structures\nahrobek3.p3d";
		displayName = "nahrobek3";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_nahrobek2 : acd_nam_decor_base {
		model = "nst\ns_structures\nahrobek2.p3d";
		displayName = "nahrobek2";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_zvonice : acd_nam_decor_base {
		model = "nst\ns_structures\zvonice.p3d";
		displayName = "zvonice";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_vor_piskoviste : acd_nam_decor_base {
		model = "nst\ns_structures\vor_piskoviste.p3d";
		displayName = "Sandbox";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_in_skrin2 : acd_nam_decor_base {
		model = "nst\ns_structures\in_skrin2.p3d";
		displayName = "in_skrin2";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_nam_in_skrin1 : acd_nam_decor_base {
		model = "nst\ns_structures\in_skrin1.p3d";
		displayName = "in_skrin1";
		editorSubcategory = "acd_decorations_shelves";
	};
	class acd_nam_pres : acd_nam_decor_base {
		model = "nst\ns_structures\pres.p3d";
		displayName = "pres";
		editorSubcategory = "acd_decorations_misc";
	};
	class acd_nam_in_sporak : acd_nam_decor_base {
		model = "nst\ns_structures\in_sporak.p3d";
		displayName = "in_sporak";
		editorSubcategory = "acd_decorations_housholdObjects";
	};
	class acd_nam_traktor : acd_nam_decor_base {
		model = "nst\ns_structures\traktor.p3d";
		displayName = "traktor";
		editorSubcategory = "acd_decorations_vehicleWreck";
	};
	class acd_nam_hromada_kameni : acd_nam_decor_base {
		model = "nst\ns_rocks\hromada_kameni.p3d";
		displayName = "hromada_kameni";
		editorSubcategory = "acd_decorations_rocks";
	};

	class acd_nam_container_base : acd_nam_decor_base {
		editorCategory = "acd_containers_nam";
		vehicleClass = "ACD containers Namalsk";
		maximumLoad = 3000;
		transportMaxBackpacks = 1;
		transportmaxmagazines = 1;
		transportmaxweapons = 1;
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportItems {};
		icon = "armaContainersAndDecorations\textures\container.paa";
	};	
	class acd_nam_container15k_base : acd_nam_container_base {
		editorCategory = "acd_containers15k_nam";
		vehicleClass = "ACD containers 15k Namalsk";
		maximumLoad = 15000;
		icon = "armaContainersAndDecorations\textures\container15k.paa";
	};
	class acd_nam_C_psi_bouda : acd_nam_container_base {
		model = "nst\ns_a2\psi_bouda.p3d";
		displayName = "Doghouse";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 2200;
	};
	class acd_nam_C15k_psi_bouda : acd_nam_container15k_base {
		model = "nst\ns_a2\psi_bouda.p3d";
		displayName = "Doghouse (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_kontejner : acd_nam_container_base {
		model = "nst\ns_a2\kontejner.p3d";
		displayName = "Garbage container";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 4500;
	};
	class acd_nam_C15k_kontejner : acd_nam_container15k_base {
		model = "nst\ns_a2\kontejner.p3d";
		displayName = "Garbage container (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_lekarnicka : acd_nam_container_base {
		model = "nst\ns_a2\lekarnicka.p3d";
		displayName = "lekarnicka";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 200;
	};
	class acd_nam_C15k_lekarnicka : acd_nam_container15k_base {
		model = "nst\ns_a2\lekarnicka.p3d";
		displayName = "lekarnicka (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_conference_table_a : acd_nam_container_base {
		model = "nst\ns_a2\conference_table_a.p3d";
		displayName = "conference_table_a";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1100;
	};
	class acd_nam_C15k_conference_table_a : acd_nam_container15k_base {
		model = "nst\ns_a2\conference_table_a.p3d";
		displayName = "conference_table_a (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_library_a : acd_nam_container_base {
		model = "nst\ns_a2\library_a.p3d";
		displayName = "library_a";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 2000;
	};
	class acd_nam_C15k_library_a : acd_nam_container15k_base {
		model = "nst\ns_a2\library_a.p3d";
		displayName = "library_a (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_dhangar_brownskrin : acd_nam_container_base {
		model = "nst\ns_a2\dhangar_brownskrin.p3d";
		displayName = "dhangar_brownskrin";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 3000;
	};
	class acd_nam_C15k_dhangar_brownskrin : acd_nam_container15k_base {
		model = "nst\ns_a2\dhangar_brownskrin.p3d";
		displayName = "dhangar_brownskrin (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_case_cans_b : acd_nam_container_base {
		model = "nst\ns_a2\case_cans_b.p3d";
		displayName = "case_cans_b";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 3000;
	};
	class acd_nam_C15k_case_cans_b : acd_nam_container15k_base {
		model = "nst\ns_a2\case_cans_b.p3d";
		displayName = "case_cans_b (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_box_c : acd_nam_container_base {
		model = "nst\ns_a2\box_c.p3d";
		displayName = "box_c";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1500;
	};
	class acd_nam_C15k_box_c : acd_nam_container15k_base {
		model = "nst\ns_a2\box_c.p3d";
		displayName = "box_c (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_vending_machine : acd_nam_container_base {
		model = "nst\ns_a2\vending_machine.p3d";
		displayName = "vending_machine";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 3300;
	};
	class acd_nam_C15k_vending_machine : acd_nam_container15k_base {
		model = "nst\ns_a2\vending_machine.p3d";
		displayName = "vending_machine (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_metalcase_02 : acd_nam_container_base {
		model = "nst\ns_a2\metalcase_02.p3d";
		displayName = "metalcase_02";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 800;
	};
	class acd_nam_C15k_metalcase_02 : acd_nam_container15k_base {
		model = "nst\ns_a2\metalcase_02.p3d";
		displayName = "metalcase_02 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_washing_machine : acd_nam_container_base {
		model = "nst\ns_a2\washing_machine.p3d";
		displayName = "washing_machine";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1000;
	};
	class acd_nam_C15k_washing_machine : acd_nam_container15k_base {
		model = "nst\ns_a2\washing_machine.p3d";
		displayName = "washing_machine (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_case_a : acd_nam_container_base {
		model = "nst\ns_a2\case_a.p3d";
		displayName = "case_a";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 2100;
	};
	class acd_nam_C15k_case_a : acd_nam_container15k_base {
		model = "nst\ns_a2\case_a.p3d";
		displayName = "case_a (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_fridge : acd_nam_container_base {
		model = "nst\ns_a2\fridge.p3d";
		displayName = "fridge";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 700;
	};
	class acd_nam_C15k_fridge : acd_nam_container15k_base {
		model = "nst\ns_a2\fridge.p3d";
		displayName = "fridge (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_kitchenstove_elec : acd_nam_container_base {
		model = "nst\ns_a2\kitchenstove_elec.p3d";
		displayName = "kitchenstove_elec";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 400;
	};
	class acd_nam_C15k_kitchenstove_elec : acd_nam_container15k_base {
		model = "nst\ns_a2\kitchenstove_elec.p3d";
		displayName = "kitchenstove_elec (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_skrin_bar : acd_nam_container_base {
		model = "nst\ns_a2\skrin_bar.p3d";
		displayName = "skrin_bar";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 5400;
	};
	class acd_nam_C15k_skrin_bar : acd_nam_container15k_base {
		model = "nst\ns_a2\skrin_bar.p3d";
		displayName = "skrin_bar (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_case_bedroom_a : acd_nam_container_base {
		model = "nst\ns_a2\case_bedroom_a.p3d";
		displayName = "case_bedroom_a";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 600;
	};
	class acd_nam_C15k_case_bedroom_a : acd_nam_container15k_base {
		model = "nst\ns_a2\case_bedroom_a.p3d";
		displayName = "case_bedroom_a (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_hrobecek : acd_nam_container_base {
		model = "nst\ns_a2\hrobecek.p3d";
		displayName = "hrobecek";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 6200;
	};
	class acd_nam_C15k_hrobecek : acd_nam_container15k_base {
		model = "nst\ns_a2\hrobecek.p3d";
		displayName = "hrobecek (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_drevena_bedna : acd_nam_container_base {
		model = "nst\ns_structures\drevena_bedna.p3d";
		displayName = "drevena_bedna";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 2500;
	};
	class acd_nam_C15k_drevena_bedna : acd_nam_container15k_base {
		model = "nst\ns_structures\drevena_bedna.p3d";
		displayName = "drevena_bedna (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_mrtvola_army1 : acd_nam_container_base {
		model = "nst\ns_structures\mrtvola_army1.p3d";
		displayName = "mrtvola_army1";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 800;
	};
	class acd_nam_C15k_mrtvola_army1 : acd_nam_container15k_base {
		model = "nst\ns_structures\mrtvola_army1.p3d";
		displayName = "mrtvola_army1 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_kont3 : acd_nam_container_base {
		model = "nst\ns_structures\kont3.p3d";
		displayName = "kont3";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 7500;
	};
	class acd_nam_C15k_kont3 : acd_nam_container15k_base {
		model = "nst\ns_structures\kont3.p3d";
		displayName = "kont3 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_dkamna_uhli : acd_nam_container_base {
		model = "nst\ns_structures\dkamna_uhli.p3d";
		displayName = "dkamna_uhli";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 2000;
	};
	class acd_nam_C15k_dkamna_uhli : acd_nam_container15k_base {
		model = "nst\ns_structures\dkamna_uhli.p3d";
		displayName = "dkamna_uhli (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_metalcase_01 : acd_nam_container_base {
		model = "nst\ns_structures\metalcase_01.p3d";
		displayName = "metalcase_01";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1600;
	};
	class acd_nam_C15k_metalcase_01 : acd_nam_container15k_base {
		model = "nst\ns_structures\metalcase_01.p3d";
		displayName = "metalcase_01 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_kont1 : acd_nam_container_base {
		model = "nst\ns_structures\kont1.p3d";
		displayName = "kont1";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 7500;
	};
	class acd_nam_C15k_kont1 : acd_nam_container15k_base {
		model = "nst\ns_structures\kont1.p3d";
		displayName = "kont1 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_kont2 : acd_nam_container_base {
		model = "nst\ns_structures\kont2.p3d";
		displayName = "kont2";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 7500;
	};
	class acd_nam_C15k_kont2 : acd_nam_container15k_base {
		model = "nst\ns_structures\kont2.p3d";
		displayName = "kont2 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_hrob2 : acd_nam_container_base {
		model = "nst\ns_structures\hrob2.p3d";
		displayName = "hrob2";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 2600;
	};
	class acd_nam_C15k_hrob2 : acd_nam_container15k_base {
		model = "nst\ns_structures\hrob2.p3d";
		displayName = "hrob2 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_in_skrin2 : acd_nam_container_base {
		model = "nst\ns_structures\in_skrin2.p3d";
		displayName = "in_skrin2";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 3700;
	};
	class acd_nam_C15k_in_skrin2 : acd_nam_container15k_base {
		model = "nst\ns_structures\in_skrin2.p3d";
		displayName = "in_skrin2 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_in_skrin1 : acd_nam_container_base {
		model = "nst\ns_structures\in_skrin1.p3d";
		displayName = "in_skrin1";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 4700;
	};
	class acd_nam_C15k_in_skrin1 : acd_nam_container15k_base {
		model = "nst\ns_structures\in_skrin1.p3d";
		displayName = "in_skrin1 (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
	class acd_nam_C_in_sporak : acd_nam_container_base {
		model = "nst\ns_structures\in_sporak.p3d";
		displayName = "in_sporak";
		editorSubcategory = "acd_containers_civilian";
		maximumLoad = 1100;
	};
	class acd_nam_C15k_in_sporak : acd_nam_container15k_base {
		model = "nst\ns_structures\in_sporak.p3d";
		displayName = "in_sporak (15k load)";
		editorSubcategory = "acd_containers_civilian";
	};
};

