#include <script_component.hpp>

class CfgPatches
{
    class ADDON
    {
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		author = ECSTRING(Common,AuxTeam);
		authors[] = { "227th Krayt Company" };
		url = ECSTRING(main,URL);
        requiredAddons[]=
        {
			"A3_data_F",
			"A3_anims_F",
			"A3_weapons_F",
			"A3_characters_F",
			"3AS_Main",
			"3AS_Characters",
			"3AS_Characters_Commando",
			"JLTS_core",
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"JLTS_characters_CloneLegions",
			"ls_armor_bluefor"
        };
        weapons[]=
        {
            CLASS(H_P2_CT),
            CLASS(H_P2_SCT),
            CLASS(H_P2_VCT),
            CLASS(H_P2_CSP),
            CLASS(H_P2_CLC),
            CLASS(H_P2_CP),
            CLASS(H_P2_CS),
            CLASS(H_P2_CSS),
            CLASS(H_P2_CFS),
            CLASS(H_P2_CSM),
            CLASS(H_P2_Jet),
            CLASS(H_P2_Canada),
            CLASS(H_P2_Catcher),
            CLASS(H_P2_FiveO),
            CLASS(H_P2_Kitsune),
            CLASS(H_P2_Luci),
            CLASS(H_P2_Rex),
            CLASS(H_P2_Riven),
            CLASS(H_P2_Sage),
            CLASS(H_P2_Sparky),
            CLASS(H_P2_Sparrow),
            CLASS(H_P2_Speed),
            CLASS(H_P2_Valyrian),
            CLASS(H_P2_Wicked),
            CLASS(H_ARC_CT),
            CLASS(H_ARC_Cookie),
            CLASS(H_ARC_Devil),
            CLASS(H_ARC_Jinx),
            CLASS(H_ARC_Knight),
            CLASS(H_ARF_CT),
            CLASS(H_ARF_Spartacus),
            CLASS(H_Engineer_CT),
            CLASS(H_Engineer_CSP),
            CLASS(H_Engineer_NCO),
            CLASS(H_SpecOp_CT),
            CLASS(H_SpecOp_Geonosis),
            CLASS(H_SpecOp_Geonosis_NCO),
            CLASS(H_SpecOp_CSP),
            CLASS(H_SpecOp_NCO),
            CLASS(H_Insulated_CT),
            CLASS(H_Insulated_Geonosis),
            CLASS(H_P1_CT),
            CLASS(H_P1_SCT),
            CLASS(H_P1_VCT),
            CLASS(H_P1_CSP),
            CLASS(H_P1_CLC),
            CLASS(H_P1_CP),
            CLASS(H_P1_CS),
            CLASS(H_P1_CSS),
            CLASS(H_P1_CFS),
            CLASS(H_P1_CSM),
            CLASS(H_P1_Pilot_CX),
            CLASS(H_P1_Pilot_CXG1),
            CLASS(H_P1_Pilot_CXG2),
            CLASS(H_P2_Pilot_CX),
            CLASS(H_P2_Pilot_Carrot),
            CLASS(H_P2_Pilot_Texan),
            CLASS(NV_Internal),
            CLASS(NV_Internal_TI),
            CLASS(NV_Internal_hybrid),
            CLASS(NV_Range_Brown),
            CLASS(NV_Range_Gray),
            CLASS(NV_Range_Jinx),
            CLASS(NV_Range_Yellow),
            CLASS(NV_Macro_Brown),
            CLASS(NV_Macro_Brown_spec),
            CLASS(NV_Macro_Gray),
            CLASS(NV_Macro_Gray_spec),
            CLASS(NV_Macro_White),
            CLASS(NV_Macro_White_spec),
            CLASS(NV_Macro_Yellow),
            CLASS(NV_Macro_Yellow_spec),
            CLASS(NV_Visor_Brown),
            CLASS(NV_Visor_Gray),
            CLASS(NV_Visor_Valyrian),
            CLASS(NV_Visor_Yellow),
            CLASS(V_Invisible_CT),
            CLASS(V_Holster_CT),
            CLASS(V_Suspenders_CT),
            CLASS(V_AB_CT),
            CLASS(V_AB_Medic),
            CLASS(V_AB_AT),
            CLASS(V_AB_RTO),
            CLASS(V_AB_Support),
            CLASS(V_AB_EOD),
            CLASS(V_AB_Marksman),
            CLASS(V_AB_Geonosis),
            CLASS(V_AB_Jet),
            CLASS(V_ARC_CT),
            CLASS(V_ARC_Cookie),
            CLASS(V_ARC_Jinx),
            CLASS(V_ARC_Medic),
            CLASS(V_ARC_Valyrian),
            CLASS(V_ARC_Veteran),
            CLASS(V_ARC_Cadet),
            CLASS(V_Kama_CP),
            CLASS(V_Kama_CS),
            CLASS(V_Kama_Medic),
            CLASS(V_Kama_Spartacus),
            CLASS(V_Kama_Officer),
            CLASS(V_Kama_Officer_Geonosis),
            CLASS(V_Kama_Valyrian),
            CLASS(U_B_Trooper_Base),
            CLASS(U_B_Insulated_Base),
            CLASS(U_B_CR),
            CLASS(U_B_CT),
            CLASS(U_B_SCT),
            CLASS(U_B_VCT),
            CLASS(U_B_CSP),
            CLASS(U_B_CLC),
            CLASS(U_B_CP),
            CLASS(U_B_CS),
            CLASS(U_B_CSS),
            CLASS(U_B_CSM),
            CLASS(U_B_Cookie),
            CLASS(U_B_Jinx),
            CLASS(U_B_Knight),
            CLASS(U_B_Speed),
            CLASS(U_B_Valyrian),
            CLASS(U_B_Jet_CT),
            CLASS(U_B_Jet_NCO),
            CLASS(U_B_Insulated_CT),
            CLASS(U_B_Insulated_Geonosis_CT)
        };
        units[]=
        {
            CLASS(B_Pack_ARC),
            CLASS(B_Pack_ARC_Medic),
            CLASS(B_Pack_RTO),
            CLASS(B_Pack_RTO_straps),
            CLASS(B_Pack_RTO_mini),
            CLASS(B_Pack_RTO_module),
            CLASS(B_Pack_AT),
            CLASS(B_Pack_AT_straps),
            CLASS(B_Pack_Medic),
            CLASS(B_Pack_Medic_straps),
            CLASS(B_Pack_EOD),
            CLASS(B_Pack_EOD_straps),
            CLASS(B_Pack_Belt_CT),
            CLASS(B_Pack_CT),
            CLASS(B_Pack_CT_invisible),
            CLASS(B_Pack_CT_straps),
            CLASS(B_Pack_Jet),
            CLASS(B_Pack_Jet_straps),
            CLASS(B_Pack_Snow_CT),
            CLASS(B_Pack_Snow_CT_straps),
            CLASS(B_Pack_JP_Chicken),
            CLASS(B_Pack_JP_JT12),
            CLASS(B_Pack_JP_JT12_medic),
            CLASS(B_Pack_JP_JT12_mercy),
            CLASS(B_Pack_JP_MC),
            CLASS(B_Pack_JP_MC_medic),
            CLASS(B_Pack_JP_MC_pilot),
            CLASS(B_Pack_JP_MC_krayt),
            CLASS(B_Pack_JP_MC_valyrian),
            CLASS(B_Trooper_Base),
            CLASS(B_Insulated_Base),
            CLASS(B_CR_Base),
            CLASS(B_CT_Base),
            CLASS(B_SCT_Base),
            CLASS(B_VCT_Base),
            CLASS(B_CSP_Base),
            CLASS(B_CLC_Base),
            CLASS(B_CP_Base),
            CLASS(B_CS_Base),
            CLASS(B_CSS_Base),
            CLASS(B_CSM_Base),
            CLASS(B_Cookie_Base),
            CLASS(B_Jinx_Base),
            CLASS(B_Knight_Base),
            CLASS(B_Luci_Base),
            CLASS(B_Speed_Base),
            CLASS(B_Valyrian_Base),
            CLASS(B_Jet_CT_Base),
            CLASS(B_Jet_NCO_Base),
            CLASS(B_Insulated_CT_Base),
            CLASS(B_Insulated_Geonosis_CT_Base),
            CLASS(Headgear_H_P2_CT),
            CLASS(Headgear_H_P2_SCT),
            CLASS(Headgear_H_P2_VCT),
            CLASS(Headgear_H_P2_CSP),
            CLASS(Headgear_H_P2_CLC),
            CLASS(Headgear_H_P2_CP),
            CLASS(Headgear_H_P2_CS),
            CLASS(Headgear_H_P2_CSS),
            CLASS(Headgear_H_P2_CFS),
            CLASS(Headgear_H_P2_CSM),
            CLASS(Headgear_H_P2_Jet),
            CLASS(Headgear_H_P2_Canada),
            CLASS(Headgear_H_P2_Catcher),
            CLASS(Headgear_H_P2_FiveO),
            CLASS(Headgear_H_P2_Kitsune),
            CLASS(Headgear_H_P2_Luci),
            CLASS(Headgear_H_P2_Rex),
            CLASS(Headgear_H_P2_Riven),
            CLASS(Headgear_H_P2_Sage),
            CLASS(Headgear_H_P2_Sparky),
            CLASS(Headgear_H_P2_Sparrow),
            CLASS(Headgear_H_P2_Speed),
            CLASS(Headgear_H_P2_Valyrian),
            CLASS(Headgear_H_P2_Wicked),
            CLASS(Headgear_H_ARC_CT),
            CLASS(Headgear_H_ARC_Cookie),
            CLASS(Headgear_H_ARC_Devil),
            CLASS(Headgear_H_ARC_Jinx),
            CLASS(Headgear_H_ARC_Knight),
            CLASS(Headgear_H_ARF_CT),
            CLASS(Headgear_H_ARF_Spartacus),
            CLASS(Headgear_H_Engineer_CT),
            CLASS(Headgear_H_Engineer_CSP),
            CLASS(Headgear_H_Engineer_NCO),
            CLASS(Headgear_H_SpecOp_CT),
            CLASS(Headgear_H_SpecOp_Geonosis),
            CLASS(Headgear_H_SpecOp_Geonosis_NCO),
            CLASS(Headgear_H_SpecOp_CSP),
            CLASS(Headgear_H_SpecOp_NCO),
            CLASS(Headgear_H_Insulated_CT),
            CLASS(Headgear_H_Insulated_Geonosis),
            CLASS(Headgear_H_P1_CT),
            CLASS(Headgear_H_P1_SCT),
            CLASS(Headgear_H_P1_VCT),
            CLASS(Headgear_H_P1_CSP),
            CLASS(Headgear_H_P1_CS),
            CLASS(Headgear_H_P1_CSS),
            CLASS(Headgear_H_P1_CSM),
            CLASS(Headgear_H_P1_Jinx),
            CLASS(Headgear_H_P1_Pilot_CX),
            CLASS(Headgear_H_P1_Pilot_CXG1),
            CLASS(Headgear_H_P1_Pilot_CXG2),
            CLASS(Headgear_H_P2_Pilot_CX),
            CLASS(Headgear_H_P2_Pilot_Carrot),
            CLASS(Headgear_H_P2_Pilot_Texan)
        };
        magazines[] = {};
        ammo[] = {};
    };
};

#include <macros_protection.hpp>
#include <macros_equipment.hpp>
#include <CfgWeapons.hpp>
#include <CfgVehicles.hpp>
#include <CfgUnitInsignia.hpp>
#include <XtdGearModels.hpp>
#include <XtdGearInfos.hpp>
