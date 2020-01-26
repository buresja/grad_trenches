class CfgWorldsTextures {
    class Default {
        surfaceTextureBasePath = "a3\map_data\";
        surfaceMaterialBasePath = "a3\plants_f\clutter\data\";
        prefix = "c_";
        suffix = "co.paa";
    };

    //Altis
    class Altis: Default {
      camouflageObjects[] = {"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"};
    };

    //Anizay
    class tem_anizay {
        surfaceTextureBasePath = "tem\tem_anizay\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Baranow
    class Baranow {
        surfaceTextureBasePath = "WW2\TerrainsIF_t\Worlds\IF_Surfaces_t\staszow\";
        suffix = "co.paa";
        camouflageObjects[] = {};
        class Surfaces {
            class lib_sf_france_raps {
                texturePath = "WW2\TerrainsIF_t\Worlds\IF_Surfaces_t\France\lib_sf_france_raps_co.paa";
            };
        };
    };
    //Baranow Winter
    class BaranowWinter {
        surfaceTextureBasePath = "WW2\TerrainsIF_t\Worlds\IF_SurfacesWinter_t\Baranow\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Bray-Dunes
    class SWU_Dunkirk_Bray_Dunes_1940: Baranow {
        surfaceTextureBasePath = "WW2\TerrainsWW2_swurvin\Surfaces_t\";
        suffix = "_co.paa";
        camouflageObjects[] = {};
        class Surfaces {
            class Default {
                texturePath = "a3\map_data\gdt_beach_co.paa";
            };
        };
    };

    //Bukovina
    class Bootcamp_ACR {
        surfaceTextureBasePath = "ca\Bootcamp_ACR\data\";
        suffix = "detail_co.paa";
        camouflageObjects[] = {"ca\plants2\clutter\c_GrassBunch.p3d"};
    };

    //Bystrica
    class Woodland_ACR {
        surfaceTextureBasePath = "ca\Bohemia\data\";
        suffix = "detail_co.paa";
        camouflageObjects[] = {"ca\plants2\clutter\c_weed3.p3d"};
    };

	//Cham
	class tem_cham {
		surfaceTextureBasePath = "tem\tem_cham\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Chernarus
    class Chernarus {
        surfaceTextureBasePath = "ca\CHERNARUS\data\";
        suffix = "co.paa";
        camouflageObjects[] = {"ca\plants2\clutter\c_weed3.p3d"};
    };

    //Chernarus 2020
    class cup_chernarus_A3 {
        surfaceTextureBasePath = "cup\terrains_a3\cup_chernarus_s\data\";
        suffix = "detail_co.paa";
        camouflageObjects[] = {"ca\plants2\clutter\c_weed3.p3d"};
    };

    //Celle
    class mbg_celle2: Chernarus {
        camouflageObjects[] = {};
    };

    //Chernarus Summer
    class Chernarus_Summer {
        surfaceTextureBasePath = "ca\chernarus_summer\data\";
        suffix = "detail_co.paa";
        camouflageObjects[] = {"ca\plants2\clutter\c_weed3.p3d"};
    };

    //Chernarus Winter
    class Chernarus_Winter {
        surfaceTextureBasePath = "CUP\Terrains\cup_terrains_maps_chernarus_winter\data\";
        suffix = "detail_co.paa";
        camouflageObjects[] = {};
    };

    //Colleville
    class Colleville: Baranow {
        surfaceTextureBasePath = "WW2\TerrainsIF_t\Worlds\IF_Surfaces_t\France\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };
    //Colleville Winter
    class CollevilleWinter {
        surfaceTextureBasePath = "WW2\TerrainsIF_t\Worlds\IF_SurfacesWinter_t\France\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Desert
    class Desert_E {
        surfaceTextureBasePath = "ca\Desert_E\data\";
        suffix = "co.paa";
        camouflageObjects[] = {"ca\plants_E\Clutter\c_Brush_Hard_EP1.p3d"};
    };

    //Livonia
    class Enoch {
        surfaceTextureBasePath = "A3\Map_Enoch\Data\";
        suffix = "_co.paa";
        camouflageObjects[] = {};
    };

    //G.O.S Al Rayak
    class pja310 {
        surfaceTextureBasePath = "mak\projetA3-10\Data\";
        suffix = "co.paa";
        camouflageObjects[] = {"A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d"};
    };

    //G.O.S Leskovets
    class pja314 {
        surfaceTextureBasePath = "MAK\projetA3014\data\";
        suffix = "co.paa";
        camouflageObjects[] = {"A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d"};
    };

    //Hellanmaa
    class hellanmaa {
        surfaceTextureBasePath = "hellanmaa\hellanmaa\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Hellanmaa Winter
    class hellanmaaw {
        surfaceTextureBasePath = "hellanmaaw\hellanmaaw\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Ivachev
    class Ivachev {
        surfaceTextureBasePath = "WW2\TerrainsIF_t\Worlds\IF_Surfaces_t\staszow\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Ivachev Winter
    class IvachevWinter {
        surfaceTextureBasePath = "WW2\TerrainsIF_t\Worlds\IF_SurfacesWinter_t\Ivachev\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Panovo Winter
    class PanovoWinter {
        surfaceTextureBasePath = "WW2\TerrainsIF_t\Worlds\IF_SurfacesWinter_t\Panovo\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Staszow Winter
    class StaszowWinter {
        surfaceTextureBasePath = "WW2\TerrainsIF_t\Worlds\IF_SurfacesWinter_t\Staszow\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    // Kerama
    class kerama {
        surfaceTextureBasePath = "Kerama\data\";
        suffix = "co.paa";
        camouflageObjects[] = {"A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d"};
    };

    //Lythium
    class lythium: Default {
        surfaceTextureBasePath = "GBR\lythium\data\";
        suffix = "co.paa";
        camouflageObjects[] = {"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"};
    };

    //Kujari
    class tem_kujari {
        surfaceTextureBasePath = "tem\tem_kujari\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Malden
    class Malden: Altis {
        camouflageObjects[] = {"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"};
        class Surfaces {
            class GdtForestMalden {
                texturePath = "a3\map_malden\data\gdt_forest_malden_co.paa";
            };
        };
    };
    //Namalsk
    class namalsk {
        surfaceTextureBasePath = "nst\namalsk\data\";
        suffix = "detail_co.paa";
        camouflageObjects[] = {};
    };
    //Napf
    class Napf {
        surfaceTextureBasePath = "momo\Napf\data\";
        suffix = "co.paa";
        camouflageObjects[] = {"A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d"};
    };

    //Montherme
    class SWU_Ardennes_1940: Baranow {
        surfaceTextureBasePath = "WW2\TerrainsWW2_swurvin\Surfaces_t\";
        suffix = "_co.paa";
        camouflageObjects[] = {};
    };

    //Montherme Winter
    class SWU_Ardennes_1944_Winter {
        surfaceTextureBasePath = "WW2\TerrainsWW2_swurvin\Surfaces_t\";
        suffix = "_co.paa";
        camouflageObjects[] = {};
    };

    //Pella Region Greece
    class SWU_Greece_Pella_Region {
        surfaceTextureBasePath = "WW2\TerrainsWW2_swurvin\Surfaces_t\";
        suffix = "_co.paa";
        camouflageObjects[] = {};
    };

    //Volkhov Forest
    class SWU_Russia_Volkhov_Forest {
        surfaceTextureBasePath = "WW2\TerrainsWW2_swurvin\Surfaces_t\";
        suffix = "_co.paa";
        camouflageObjects[] = {};
    };

    //Rahmadi
    class Intro {
        surfaceTextureBasePath = "ca\desert\data\";
        suffix = "_detail_co.paa";
        camouflageObjects[] = {"ca\plants\clutter_grass_flowers.p3d"};
    };

    //Ruha
    class ruha {
        surfaceTextureBasePath = "ruha\ruha\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Panovo
    class Panovo {
        surfaceTextureBasePath = "WW2\TerrainsIF_t\Worlds\IF_Surfaces_t\staszow\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Porto
    class Porto {
        surfaceTextureBasePath = "ca\desert2\data\";
        suffix = "detail_co.paa";
        camouflageObjects[] = {};
    };

    //Prei Khmaoch Luong
    class prei_khmaoch_luong {
        surfaceTextureBasePath = "\blud_prei_art\data\ground\";
        suffix = "co.paa";
        camouflageObjects[] = {"a3\vegetation_f_exp\clutter\grass\c_Grass_Tropic.p3d"};
    };

    //Proving Grounds
    class ProvingGrounds_PMC {
        surfaceTextureBasePath = "ca\provinggrounds_pmc\Data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Pulau
    class pulau {
        surfaceTextureBasePath = "pulau\pulau\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Sahrani
    class Sara {
        surfaceTextureBasePath = "ca\sara\Data\";
        suffix = "_detail_co.paa";
        camouflageObjects[] = {"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"};
        class Surfaces {
            class mesto {
                texturePath = "ca\sara\Data\mesto_co.paa";
            };
        };
    };

    //Sark
    class Hyde_Sark: Baranow {
        surfaceTextureBasePath = "WW2\TerrainsWW2_Hyde\Surfaces_t\";
        suffix = "co.paa";
        camouflageObjects[] = {};
        class Surfaces {
            class default {
                texturePath = "WW2\TerrainsWW2_Hyde\Surfaces_t\Hyde_SA_beach_co.paa";
            };
        };
    };

  //Shapur
    class Shapur_Baf {
        surfaceTextureBasePath = "ca\shapur_baf\Data\";
        suffix = "co.paa";
        camouflageObjects[] = {"ca\plants_E\Clutter\c_Brush_Hard_EP1.p3d"};
    };

    //Southern Sahrani
    class SaraLite {
        surfaceTextureBasePath = "ca\saralite\Data\";
        suffix = "_detail_co.paa";
        camouflageObjects[] = {"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"};
    };

    //Staszow
    class Staszow: Baranow {
        surfaceTextureBasePath = "WW2\TerrainsIF_t\Worlds\IF_Surfaces_t\staszow\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Stratis
    class Stratis: Altis {
        camouflageObjects[] = {"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"};
    };

    //Suursaari
    class tem_suursaariv {
        surfaceTextureBasePath = "tem\tem_suursaariv\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };
  
    //Summa
    class tem_summa {
        surfaceTextureBasePath = "tem\tem_summa\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Summa Winter CUP
    class tem_summawcup {
        surfaceTextureBasePath = "tem\tem_summawcup\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Takistan
    class Takistan {
        surfaceTextureBasePath = "ca\takistan\Data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Takistan Mountains
    class Mountains_ACR {
        surfaceTextureBasePath = "ca\afghan\Data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Tanoa
    class Tanoa : Altis{
        surfaceTextureBasePath = "A3\Map_Data_Exp\";
        camouflageObjects[] = {"A3\Vegetation_F_Exp\Clutter\Grass\c_GrassBunch_HI.p3d"};
    };

    //United Sahrani
    class Sara_dbe1 {
        surfaceTextureBasePath = "dbe1\sara_dbe1\data\";
        suffix = "_detail_co.paa";
        camouflageObjects[] = {"A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d"};
        class Surfaces {
            class mesto {
                texturePath = "ca\sara\Data\mesto_co.paa";
            };
        };
    };

    //Utes
    class utes {
        surfaceTextureBasePath = "ca\utes\Data\";
        suffix = "detail_co.paa";
        camouflageObjects[] = {"CUP\Terrains\cup_terrains_worlds\Clutter\c_GrassCrookedForest.p3d"};
        class Surfaces {
            class Default {
                texturePath = "a3\map_data\gdt_beach_co.paa";
            };
        };
    };

    //Zargabad
    class Zargabad {
        surfaceTextureBasePath = "ca\zargabad\Data\";
        suffix = "co.paa";
        camouflageObjects[] = {"ca\plants_E\Clutter\c_Brush_Soft_EP1.p3d"};
    };

    //Ihantala
    class tem_ihantala {
        surfaceTextureBasePath = "tem\tem_ihantala\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Ihantala Winter
    class tem_ihantalaw {
        surfaceTextureBasePath = "tem\tem_ihantalaw\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Rosche
    class WL_Rosche {
        surfaceTextureBasePath = "WL\WL_Rosche\data\";
        suffix = "_co.paa";
        camouflageObjects[] = {};
    };

    //Abramia
    class abramia {
        surfaceTextureBasePath = "ibr\abramia\data\";
        suffix = "detail_co.paa";
        camouflageObjects[] = {};
    };

    //Isla Duala
    class isladuala3 {
        surfaceTextureBasePath = "ibr\isladuala3\data\";
        suffix = "_co.paa";
        camouflageObjects[] = {};
    };

    //Tembelan
    class tembelan {
        surfaceTextureBasePath = "ZI\Tembelan\data\";
        suffix = "_co.paa";
        camouflageObjects[] = {};
    };

    //Napf Winter
    class NapfWinter {
      surfaceTextureBasePath = "momo\NapfWinter\data\";
      suffix = "co.paa";
      camouflageObjects[] = {};
    };

    //Chernarus Redux
    class chernarusredux {
        surfaceTextureBasePath = "CHR\chernarusredux_data\data\";
        suffix = "_co.paa";
        camouflageObjects[] = {};
    };

    //Weferlingen Summer
    class gm_weferlingen_summer {
        surfaceTextureBasePath = "gm\gm_worlds\gm_weferlingen_summer\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Weferlingen Winter
    class gm_weferlingen_winter {
        surfaceTextureBasePath = "gm\gm_worlds\gm_weferlingen_winter\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

	//Weferlingen Winter
    class vinjesvigen {
        surfaceTextureBasePath = "gm\gm_worlds\gm_weferlingen_winter\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Vinjesvingenc
    class tem_vinjesvingenc {
        surfaceTextureBasePath = "tem\tem_vinjesvingenc\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    class vt7 {
        surfaceTextureBasePath = "vt7\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };

    //Rosö
    class sfp_roso {
        surfaceTextureBasePath = "sfp_roso_t_detail\data\";
        suffix = "_co.paa";
        camouflageObjects[] = {};
    };

    //Sturkö
    class sfp_sturko {
        surfaceTextureBasePath = "sfp_sturko\data\";
        suffix = "_detail_co.paa";
        camouflageObjects[] = {};
    };

    //Wamako
    class sfp_wamako {
        surfaceTextureBasePath = "sfp_wamako_t\data\";
        suffix = "co.paa";
        camouflageObjects[] = {};
    };
};
