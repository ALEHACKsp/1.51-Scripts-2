#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<487> Local_66 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	char* sLocal_90 = NULL;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	struct<33> Local_96 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_97 = 1;
	int iLocal_98[3] = { 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 5;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 5;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = 4294967295;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_49 = { 500f, 500f, 500f };
	iLocal_107 = 3;
	if (unk_0x2EBF608FFE6CA406(98))
	{
		func_321();
	}
	if (func_318(0))
	{
		bLocal_86 = true;
		iLocal_83 = unk_0x02A813E6E0380440();
	}
	if (Global_3)
	{
		unk_0xA37A90C62806D848(1);
		unk_0x10FAF14A60A0DBE1();
	}
	if (func_317(14))
	{
		unk_0xA37A90C62806D848(1);
		unk_0x10FAF14A60A0DBE1();
	}
	func_316(&Local_96, 3);
	func_307(&uScriptParam_120);
	vVar0 = { 24.088f, -1345.623f, 29.5082f };
	vVar1 = { 24.94562f, -1344.954f, 29.49f };
	vVar2 = { vVar0 - vVar1 };
	vVar2 = { vVar1 - vVar0 };
	fVar4 = 147.297f;
	vVar3 = { -1228.443f, -905.3416f, 13.523f };
	vVar2 = { vVar3 - Vector(12.31f, -907.8234f, -1222.331f) };
	vVar2 = { func_306(vVar2, fVar4) };
	if ((((func_305() && !func_304()) || Global_1B3DE) || Global_7832) || Global_1B40B != 4294967295)
	{
		if (func_305() && !func_304())
		{
		}
		else if (Global_1B3DE)
		{
		}
		else if (Global_7832)
		{
		}
		else if (Global_1B40B != 4294967295)
		{
		}
		if (!func_303())
		{
			func_301(&(Local_66.f_1D6), 64);
			func_299(1);
		}
		else
		{
			func_299(0);
		}
		func_321();
	}
	else if (Global_1B416.f_4E3E[iLocal_80] > 0)
	{
		if (func_298())
		{
			func_296(iLocal_80, Local_66.f_1E6.f_9.f_2, &vVar5, &vVar6);
			unk_0x745CE398A4B0A3C6(Local_66.f_B5, 15f, 0);
			iLocal_79 = unk_0x7D6CA5F52B3748BF(vVar5, vVar6, 0, 1, 1, 1);
			if (!func_303())
			{
				func_299(1);
			}
			else
			{
				func_299(0);
				func_294(&(Local_66.f_1D6), 512);
			}
			iLocal_65 = 2;
		}
		else
		{
			func_299(0);
		}
		if (!func_293())
		{
			iLocal_62 = 10;
			iVar7 = unk_0x09AC81E49EA267F7(0, 3);
			if (iVar7 == 0)
			{
				Local_66.f_2.f_C = 1;
			}
			else
			{
				Local_66.f_2.f_C = 0;
			}
		}
	}
	else
	{
		func_299(0);
	}
	while (true)
	{
		func_290(&Local_96);
		if (func_285())
		{
			func_321();
		}
		if (!bLocal_86)
		{
			if (func_318(0))
			{
				func_284();
				bLocal_86 = true;
			}
		}
		switch (iLocal_65)
		{
			case 0:
				func_255();
				break;
			
			case 1:
				func_6();
				break;
			
			case 2:
				if (func_303())
				{
					if (!unk_0xFEBC1E4EC9E001F0())
					{
						if (!func_4("SHOP_CLOSED", func_5(iLocal_80)) && !func_3(unk_0xD803B885F5E47A62()))
						{
							unk_0x1E3A202C24F57DA6(0);
							func_2("SHOP_CLOSED", func_5(iLocal_80));
						}
					}
				}
				else
				{
					if (func_4("SHOP_CLOSED", func_5(iLocal_80)))
					{
						unk_0xA37A90C62806D848(1);
					}
					if (func_1(Local_66.f_1D6, 512))
					{
						func_299(1);
						func_301(&(Local_66.f_1D6), 512);
					}
				}
				break;
			
			case 3:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_2(char* sParam0, char* sParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, 4294967295);
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0;
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_265BE1;
	}
	else
	{
		iVar0 = unk_0x9539D44F3E4492F6(iParam0);
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			iVar1 = unk_0x134B62B726CEC8E6(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_4(char* sParam0, char* sParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	return unk_0xE3789B9938DCEAE8(0);
}

char* func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "SHR_GAS";
		
		case 5:
			return "SHR_LIQ1";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "SHR_LIQ2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "SHR_CONV";
		
		case 4294967294:
			return "SHR_ACE";
		
		default:
	}
	return "";
}

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_252();
	func_249();
	func_244();
	func_238();
	func_220();
	func_198();
	func_192();
	func_67();
	func_66();
	func_65();
	func_55();
	func_54();
	func_51();
	if (!func_50())
	{
		func_37();
		func_27();
	}
	if (unk_0xC844350D5D58C99A(Local_66))
	{
		unk_0xCAE036C45E7FC720(Local_66, &iVar0, 1);
	}
	else
	{
		return;
	}
	bLocal_88 = false;
	if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 1))
		{
			if ((iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare"))
			{
				if ((((unk_0x85651FDAB8414096(unk_0xD803B885F5E47A62()) && unk_0x7069CC4DE1EA3FAA(unk_0x16F2683693E537C9(), Local_66.f_2, 45f)) && unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), Local_66.f_2, 5f, 5f, 2f, 0, 1, 0)) || unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), Local_66.f_2)) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), Local_66.f_2))
				{
					if (!func_26() && !unk_0x18AF0C72ABD5543B())
					{
						bLocal_88 = true;
					}
				}
			}
		}
	}
	if (bLocal_88)
	{
		if (!iLocal_89 && func_1(Local_66.f_1D6, 4))
		{
			iVar2 = func_25(unk_0x16F2683693E537C9());
			iVar3 = unk_0x654E7ACE881E41FE(iVar2);
			if (iVar3 == 416676503)
			{
				sLocal_90 = "hold_up_head_additive_pistol";
				unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_90, 8f, -8f, 4294967295, 305, 0, 0, 0, 0);
			}
			else if ((((iVar3 == 1159398588 || iVar3 == 970310034) || iVar3 == 860033945) || iVar3 == 3082541095) || iVar3 == 3337201093)
			{
				sLocal_90 = "hold_up_head_additive_rifle";
				unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_90, 8f, -8f, 4294967295, 305, 0, 0, 0, 0);
			}
			else
			{
				sLocal_90 = "";
			}
			iLocal_89 = 1;
		}
	}
	else if (iLocal_89)
	{
		if (!unk_0xEA6BC48857E0AC4C(sLocal_90))
		{
			if (unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_90, 3))
			{
				unk_0xFB131B855F2FD560(unk_0x16F2683693E537C9(), "mp_am_hold_up", sLocal_90, 3238002688);
			}
		}
		iLocal_89 = 0;
	}
	switch (iLocal_62)
	{
		case 0:
			if (func_303())
			{
				if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
				{
					iLocal_62 = 12;
				}
				else
				{
					iLocal_50 = 2;
					iLocal_57 = 1;
					if (!unk_0x437347B10A200C4B(Local_66, 0))
					{
						if (!unk_0x405E212DDE472467(Local_66, 0))
						{
							if ((func_25(Local_66) == joaat("weapon_unarmed") || func_25(Local_66) == joaat("object")) || func_25(Local_66) == joaat("weapon_briefcase"))
							{
								iLocal_60 = 1;
								iLocal_62 = 1;
							}
							else if (!func_1(Local_66.f_1D6, 1))
							{
								if (iVar0 == joaat("weapon_bat"))
								{
									iLocal_60 = 2;
									iLocal_62 = 5;
								}
								else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
								{
									iLocal_60 = 3;
									iLocal_62 = 5;
								}
								else if (iVar0 == joaat("weapon_stickybomb"))
								{
									iLocal_60 = 4;
									iLocal_62 = 5;
								}
								else
								{
									iLocal_62 = 2;
								}
								func_294(&(Local_66.f_1D6), 1);
							}
						}
						else
						{
							iLocal_62 = 3;
						}
					}
				}
			}
			else if (func_24())
			{
				iLocal_50 = 2;
				iLocal_62 = 3;
			}
			else if (!func_303() && func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1))
			{
				iLocal_62 = 12;
			}
			break;
		
		case 1:
			if (!func_1(Local_66.f_1D6, 2))
			{
				iLocal_51 = 1;
				iLocal_56 = 1;
				func_294(&(Local_66.f_1D6), 2);
			}
			iLocal_62 = 5;
			break;
		
		case 2:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_62 = 5;
			break;
		
		case 3:
			iLocal_51 = 6;
			iLocal_56 = 4;
			iLocal_62 = 5;
			break;
		
		case 5:
			if (!func_303() && !func_1(Local_66.f_1D6, 1))
			{
				iLocal_62 = 0;
			}
			break;
		
		case 6:
			if (iLocal_51 >= 13)
			{
				if (Local_66.f_2.f_C)
				{
					if (!func_20())
					{
						iLocal_62 = 7;
					}
				}
				else
				{
					iLocal_62 = 8;
				}
				iLocal_52 = 1;
			}
			break;
		
		case 7:
			if (func_1(Local_66.f_1D6, 256))
			{
				func_19();
				unk_0x0674E58A79778E99(&Global_17183, 3);
				iLocal_62 = 13;
			}
			break;
		
		case 8:
			if (func_1(Local_66.f_1D6, 16))
			{
				if (func_17())
				{
					if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
					{
						if (!unk_0x869EFD0BC0868856(Local_66.f_2))
						{
							if (func_303())
							{
								if (Local_66.f_1E6 >= 0)
								{
									if (unk_0x69DF961355195C3C(Local_66.f_1E6))
									{
										unk_0xC6EB89C59F2AF6B8(Local_66.f_2, Local_66.f_1E6.f_1, "handsup_base", 4f, -8f, 4294967295, 1, 0, 0, 0, 0);
										iLocal_58 = 10;
									}
								}
							}
							else
							{
								unk_0xF3268524E9BE6D6E(Local_66.f_2, unk_0x16F2683693E537C9(), 100f, 4294967295, 0, 0);
								iLocal_58 = 10;
							}
						}
					}
					unk_0x0674E58A79778E99(&Global_17183, 3);
					iLocal_62 = 13;
				}
			}
			break;
		
		case 9:
			func_16(2, 0);
			iLocal_59 = 7;
			if (iLocal_63 == 1)
			{
				iLocal_62 = 8;
			}
			else
			{
				iLocal_62 = 13;
			}
			break;
		
		case 10:
			if (func_303())
			{
				iLocal_62 = 11;
			}
			break;
		
		case 11:
			if (!func_15(&(Local_66.f_1DD)))
			{
				if (!Local_66.f_2.f_C)
				{
					iLocal_51 = 28;
				}
				else
				{
					iLocal_51 = 29;
				}
				func_12(&(Local_66.f_1DD));
			}
			else if (func_9(&(Local_66.f_1DD)) > 5f)
			{
				func_16(1, 0);
				iLocal_62 = 13;
			}
			else if (func_9(&(Local_66.f_1DD)) > 1.5f)
			{
				if (!func_20())
				{
					if (iLocal_58 != 12)
					{
						iLocal_58 = 12;
						if (!Local_66.f_2.f_C)
						{
							func_8();
						}
						else
						{
							func_19();
						}
					}
				}
			}
			break;
		
		case 12:
			if (!func_15(&(Local_66.f_1DD)))
			{
				func_7();
				iLocal_51 = 30;
				iLocal_58 = 12;
				func_12(&(Local_66.f_1DD));
			}
			else if (func_9(&(Local_66.f_1DD)) > 3f)
			{
				iLocal_62 = 13;
			}
			break;
		
		case 13:
			break;
	}
}

void func_7()
{
	int iVar0;
	
	if (unk_0x437347B10A200C4B(Local_66.f_2, 0))
	{
		return;
	}
	unk_0xDD353D0E9C789D0E(&iVar0);
	unk_0x96167B03C5A77156(0, Local_66.f_2.f_6, 2f, 4294967295, 0.25f, 0, Local_66.f_2.f_9);
	unk_0x8BE3D040D15AEA1D(0, 4294967295);
	unk_0x75ABDC5F81978924(iVar0);
	unk_0x78ADC381772E3D54(Local_66.f_2, iVar0);
	unk_0xF82EA857DA10E0CD(&iVar0);
	func_294(&(Local_66.f_1D6), 128);
}

void func_8()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
	{
		unk_0xF82EA857DA10E0CD(&iLocal_78);
		unk_0xDD353D0E9C789D0E(&iLocal_78);
		unk_0x8BE3D040D15AEA1D(0, 5000);
		unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 100f, 4294967295, 0, 0);
		unk_0x75ABDC5F81978924(iLocal_78);
		unk_0x78ADC381772E3D54(Local_66.f_2, iLocal_78);
	}
}

float func_9(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_11(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_10(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_10(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_11(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 2);
}

void func_12(int iParam0)
{
	if (!func_15(iParam0))
	{
		func_13(iParam0);
	}
}

void func_13(int iParam0)
{
	func_14(iParam0, 0f);
}

void func_14(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_10(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_15(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 1);
}

void func_16(int iParam0, bool bParam1)
{
	if (unk_0x179932739160BA96(unk_0xA30EC016B12C03E4()) < iParam0 && (!bLocal_86 || (bLocal_86 && iParam0 < iLocal_83)))
	{
		unk_0x67F91979413C5D76(unk_0xA30EC016B12C03E4(), iParam0, 0);
		unk_0x56EA5D248F36A081(unk_0xA30EC016B12C03E4(), 0);
		Local_66.f_9E = 1;
		if (bParam1)
		{
			unk_0x34D79252800B23FF(iParam0);
		}
		else
		{
			unk_0x34D79252800B23FF(5);
		}
	}
	else if (bLocal_86 && iParam0 > iLocal_83)
	{
	}
}

int func_17()
{
	func_18();
	switch (iLocal_54)
	{
		case 0:
			Local_66.f_1E6 = unk_0xE9744DB7B8CA6965(Local_66.f_1E6.f_6, Local_66.f_1E6.f_9, 2);
			if (!unk_0x28072FDD60CE3A6E(Local_66.f_2, 1))
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_1C, 0))
				{
					if (Local_66.f_1E6 >= 0)
					{
						unk_0x20641932E5104B25(Local_66.f_1C, true, 0);
						unk_0xEF190091B5B9F5EB(Local_66.f_1C, 1);
						unk_0x915804B434753CBD(Local_66.f_2, Local_66.f_1E6, Local_66.f_1E6.f_1, Local_66.f_1E6.f_3, 8f, -1.5f, 25, 0, 1148846080, 0);
						unk_0xE14EC663EED44AD5(Local_66.f_1C, Local_66.f_1E6, Local_66.f_1E6.f_4, Local_66.f_1E6.f_1, 1000f, 8f, 137, 1148846080);
						unk_0xE14EC663EED44AD5(Local_66.f_60.f_1, Local_66.f_1E6, Local_66.f_1E6.f_5, Local_66.f_1E6.f_1, 1000f, 8f, 137, 1148846080);
					}
					else
					{
						return 1;
					}
					iLocal_55 = 1;
					iLocal_58 = 5;
					iLocal_54 = 2;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			if (Local_66.f_1E6 >= 0)
			{
				if (unk_0x69DF961355195C3C(Local_66.f_1E6))
				{
					if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) > 0.478f)
					{
						if (!unk_0x437347B10A200C4B(Local_66.f_1C, 0))
						{
							unk_0xE14EC663EED44AD5(Local_66.f_1C, Local_66.f_1E6, Local_66.f_1E6.f_4, Local_66.f_1E6.f_1, 1000f, 8f, 137, 1148846080);
							Local_66.f_1C.f_7 = { Local_66.f_1C.f_7, Local_66.f_1C.f_7.f_1, (Local_66.f_1C.f_7.f_2 + 0.2f) };
						}
						iLocal_54 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_66.f_1E6 >= 0)
			{
				if (unk_0x69DF961355195C3C(Local_66.f_1E6))
				{
					if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) > 0.447f)
					{
						if (!unk_0x437347B10A200C4B(Local_66.f_1C, 0))
						{
							if (!unk_0x4FC40AB0ECCE6E18(Local_66.f_1C))
							{
								unk_0x4A4806F9D471E491(Local_66.f_1C, true, 0);
							}
						}
					}
					if (Local_66.f_1D3)
					{
						if (unk_0x8816C701817AAC75(Local_66.f_1E6) != 1.45f)
						{
							unk_0x5E4E98C6D98C9C57(Local_66.f_1E6, 1.45f);
						}
					}
					if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) > 0.894f)
					{
						iLocal_54 = 3;
					}
				}
			}
			break;
		
		case 4:
			if (!unk_0x437347B10A200C4B(Local_66.f_1C, 0))
			{
				if (Local_66.f_1E6 >= 0)
				{
					if (unk_0x69DF961355195C3C(Local_66.f_1E6))
					{
						if (iLocal_53 >= 4)
						{
							if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.871f)
							{
								iLocal_55 = 4;
							}
							unk_0x1BF8B16C32704027(Local_66.f_1C, -16f, 1);
							unk_0xAC0C6241732E36F6(Local_66.f_1C);
						}
					}
				}
			}
			iLocal_54 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_18()
{
	if (Local_66.f_1E6 >= 0)
	{
		if (unk_0x69DF961355195C3C(Local_66.f_1E6))
		{
			if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) >= 0f)
			{
				if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.117f)
				{
					iLocal_53 = 1;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.154f)
				{
					iLocal_53 = 2;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.477f)
				{
					iLocal_53 = 3;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.487f)
				{
					iLocal_53 = 4;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.809f)
				{
					iLocal_53 = 5;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.871f)
				{
					iLocal_53 = 6;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.894f)
				{
					iLocal_53 = 7;
				}
				else if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) < 0.999f)
				{
					iLocal_53 = 8;
				}
				else if (iLocal_53 == 9)
				{
				}
			}
			else
			{
				iLocal_53 = 0;
			}
		}
		else if (iLocal_53 == 0)
		{
		}
	}
	else
	{
		iLocal_53 = 0;
	}
}

void func_19()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
	{
		unk_0x262EF6C6306BEA6C(Local_66.f_2, joaat("weapon_pumpshotgun"), 12, false, true);
		unk_0x5745EA6329A91E29(Local_66.f_2, joaat("weapon_pumpshotgun"), false);
		unk_0x6DF7BF67E86AAE86(Local_66.f_2, 2229074605);
		unk_0xDD353D0E9C789D0E(&(Local_66.f_2.f_16));
		unk_0x9BE7E7B6B488CC55(0, Local_66, 2000, 0);
		unk_0x2C4A1A0F54A166E8(0, Local_66, 4000, 3337513804);
		unk_0x7C8478BF70C1E072(0, 25f, 0);
		unk_0x75ABDC5F81978924(Local_66.f_2.f_16);
		unk_0x78ADC381772E3D54(Local_66.f_2, Local_66.f_2.f_16);
	}
}

int func_20()
{
	if (Global_5145 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	if (unk_0xD3DCEC81D13AAFB1(vVar0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xD15F544473A95FE8(vVar0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x03A10A5707B2BB1F(iParam0, 2))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
			{
				if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x405E212DDE472467(unk_0x940C1429253D3B1B(iParam1), 0))
			{
				iVar1 = unk_0x6937EA2286828455(unk_0x940C1429253D3B1B(iParam1), 0);
			}
			if (unk_0xFB275CE013F3A38C(iParam0) || func_22(iVar1))
			{
				if (unk_0x5A91F08DF773C39D(iParam1, unk_0x68F4C0EC296D3901(iParam0, true), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, true, 0))
				{
					if (unk_0x7069CC4DE1EA3FAA(unk_0x940C1429253D3B1B(iParam1), iParam0, 120f) && unk_0xF649DD3BF44195C7(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x723EE7F83DF1497D((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0xA30B8362589C124A(iParam0, 4294967295, 0) != 0)
			{
				if (unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_23(unk_0x16F2683693E537C9(), iParam0, 1) < 40f)
						{
							if (unk_0x38AF5DD0BDDE9545(unk_0xD803B885F5E47A62(), &iVar1))
							{
								if ((unk_0xE2F1E99DD161A861(iVar1) && unk_0x96A5FE5834B81CE7(iVar1) == iParam0) || (unk_0xEC560E589DF8370E(iVar1) && unk_0x940C1429253D3B1B(iVar1) == unk_0xA30B8362589C124A(iParam0, 4294967295, 0)))
								{
									if ((unk_0xE3614539F8B5C807(unk_0x16F2683693E537C9()) && unk_0x06F8112AA79C53D9(0, 24)) || (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0) && unk_0x06F8112AA79C53D9(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_23(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, bParam2);
}

int func_24()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!unk_0x437347B10A200C4B(Local_66, 0))
	{
		if (unk_0x405E212DDE472467(Local_66, 0))
		{
			iVar1 = unk_0x6937EA2286828455(Local_66, 0);
			bVar0 = true;
		}
		else if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
		{
			iVar1 = unk_0x728870EB733D12A1();
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!unk_0x437347B10A200C4B(iVar1, 0))
		{
			if (unk_0x3D1053F9EB43B7AD(iVar1, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0, true, 0))
			{
				return 1;
			}
			else if (unk_0x3D1053F9EB43B7AD(iVar1, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0, true, 0))
			{
				return 1;
			}
			else if (unk_0x3D1053F9EB43B7AD(iVar1, Local_66.f_CF, Local_66.f_D2, Local_66.f_D5, 0, true, 0))
			{
				return 1;
			}
			else if (Local_66.f_C7 != -1f)
			{
				if (unk_0x3D1053F9EB43B7AD(iVar1, Local_66.f_C1, Local_66.f_C4, Local_66.f_C7, 0, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	var uVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &uVar0, 1);
	return uVar0;
}

int func_26()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_27()
{
	switch (iLocal_50)
	{
		case 0:
			break;
		
		case 2:
			if (!func_50())
			{
				if (func_303())
				{
					if (!func_1(Global_1B416.f_4E3E.f_14, 1))
					{
						switch (func_36("SHR_HOLDUP_1"))
						{
							case 2:
								func_34("SHR_HOLDUP_1", 2, 0, 4294967295, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_294(&(Global_1B416.f_4E3E.f_14), 1);
								iLocal_50 = 1;
								break;
						}
						if (iLocal_63 > 0)
						{
							if (func_33("SHR_HOLDUP_1"))
							{
								func_29("SHR_HOLDUP_1", 1);
								iLocal_50 = 4;
							}
						}
						if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
						{
						}
					}
					else
					{
						iLocal_50 = 1;
					}
				}
				else if (func_33("SHR_HOLDUP_1"))
				{
					func_29("SHR_HOLDUP_1", 1);
				}
			}
			break;
		
		case 1:
			if (!func_50())
			{
				if (func_303())
				{
					if (!func_1(Global_1B416.f_4E3E.f_14, 2))
					{
						switch (func_36("SHR_SNK_TUT"))
						{
							case 2:
								func_34("SHR_SNK_TUT", 2, 0, 4294967295, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_294(&(Global_1B416.f_4E3E.f_14), 2);
								iLocal_50 = 4;
								break;
						}
					}
					else
					{
						iLocal_50 = 4;
					}
				}
				else if (func_33("SHR_SNK_TUT"))
				{
					func_29("SHR_SNK_TUT", 1);
				}
			}
			break;
		
		case 3:
			if (func_28("SHR_HOLDUP_1") || func_28("SHR_SNK_TUT"))
			{
				unk_0xA37A90C62806D848(1);
			}
			if (func_33("SHR_SNK_TUT") && !func_1(Global_1B416.f_4E3E.f_14, 2))
			{
				func_29("SHR_SNK_TUT", 1);
			}
			if (func_33("SHR_HOLDUP_1") && !func_1(Global_1B416.f_4E3E.f_14, 1))
			{
				func_29("SHR_HOLDUP_1", 1);
			}
			iLocal_50 = 4;
			break;
		
		case 4:
			if ((!func_303() && func_33("SHR_HOLDUP_1")) && !func_1(Global_1B416.f_4E3E.f_14, 1))
			{
				func_29("SHR_HOLDUP_1", 1);
				iLocal_50 = 2;
			}
			if ((!func_303() && func_33("SHR_SNK_TUT")) && !func_1(Global_1B416.f_4E3E.f_14, 2))
			{
				func_29("SHR_SNK_TUT", 1);
				iLocal_50 = 2;
			}
			break;
	}
}

bool func_28(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_29(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1AEC6 && iParam1)
	{
		if (func_28(sParam0) && !unk_0x79BBCD5833294FD5())
		{
			unk_0xA37A90C62806D848(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_1B416.f_4FB5[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_1B416.f_4FB5.f_91 - 2))
			{
				func_32(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_31((Global_1B416.f_4FB5.f_91 - 1));
			Global_1B416.f_4FB5.f_91 = (Global_1B416.f_4FB5.f_91 - 1);
			func_30();
			return;
		}
		iVar0++;
	}
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1B416.f_4FB5.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0])
			{
				Global_1B416.f_4FB5.f_92[0] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 1))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[1])
			{
				Global_1B416.f_4FB5.f_92[1] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 2))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[2])
			{
				Global_1B416.f_4FB5.f_92[2] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_31(int iParam0)
{
	StringCopy(&(Global_1B416.f_4FB5[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_1B416.f_4FB5[iParam0 /*16*/].f_4), "", 16);
	Global_1B416.f_4FB5[iParam0 /*16*/].f_8 = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_9 = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_B = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_A = 4294967295;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_C = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_D = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_E = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_F = 0;
}

void func_32(int iParam0, int iParam1)
{
	Global_1B416.f_4FB5[iParam0 /*16*/] = { Global_1B416.f_4FB5[iParam1 /*16*/] };
	Global_1B416.f_4FB5[iParam0 /*16*/].f_4 = { Global_1B416.f_4FB5[iParam1 /*16*/].f_4 };
	Global_1B416.f_4FB5[iParam0 /*16*/].f_8 = Global_1B416.f_4FB5[iParam1 /*16*/].f_8;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_A = Global_1B416.f_4FB5[iParam1 /*16*/].f_A;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_9 = Global_1B416.f_4FB5[iParam1 /*16*/].f_9;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_B = Global_1B416.f_4FB5[iParam1 /*16*/].f_B;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_C = Global_1B416.f_4FB5[iParam1 /*16*/].f_C;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_D = Global_1B416.f_4FB5[iParam1 /*16*/].f_D;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_E = Global_1B416.f_4FB5[iParam1 /*16*/].f_E;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_F = Global_1B416.f_4FB5[iParam1 /*16*/].f_F;
}

int func_33(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_1B416.f_4FB5[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_34(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_35(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_35(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != 4294967295)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != 4294967295)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_4FB5[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_1B416.f_4FB5.f_91 < 9)
	{
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_4), sParam1, 16);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_9 = iParam5;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_B = iParam6;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_C = uParam2;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_D = iParam7;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_E = iParam8;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 4294967295)
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = 4294967295;
		}
		Global_1B416.f_4FB5.f_91++;
		func_30();
	}
}

int func_36(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, &Global_1AEC9))
	{
		return 1;
	}
	if (func_33(sParam0))
	{
		return 0;
	}
	return 2;
}

void func_37()
{
	if (func_303())
	{
		if (!unk_0x437347B10A200C4B(Local_66, 0))
		{
		}
	}
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
	{
	}
	switch (iLocal_51)
	{
		case 1:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_GREET", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 2:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 3:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 4:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 5:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 6:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, func_46(bLocal_94, "SHOP_THREATENED", func_46(func_47(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")), 3);
			}
			iLocal_51 = 14;
			break;
		
		case 15:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_STUBBORN", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 7:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 8:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_NO_ENTRY", 3);
			}
			iLocal_51 = 14;
			break;
		
		case 36:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_THREATENED", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 9:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "BUMP", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 10:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 11:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_BRAVE", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 14:
			if (func_45() || func_44())
			{
				if (func_45())
				{
					if (!iLocal_91)
					{
						iLocal_51 = 7;
						iLocal_91 = 1;
					}
				}
				else if (func_44())
				{
					if (!iLocal_92)
					{
						iLocal_51 = 8;
						iLocal_92 = 1;
					}
				}
				if (!func_15(&(Local_66.f_1E3)))
				{
					func_12(&(Local_66.f_1E3));
				}
				else if (func_11(&(Local_66.f_1E3)))
				{
					func_43(&(Local_66.f_1E3));
				}
				else if (func_9(&(Local_66.f_1E3)) > 10f)
				{
					if (!func_1(Local_66.f_1D6, 32))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2) && func_1(Local_66.f_1D6, 4))
						{
							unk_0xC6EB89C59F2AF6B8(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_294(&(Local_66.f_1D6), 32);
					}
				}
			}
			else if (func_15(&(Local_66.f_1E3)) && !func_11(&(Local_66.f_1E3)))
			{
				func_42(&(Local_66.f_1E3));
			}
			break;
		
		case 12:
			if (!unk_0x65636D4556D82155(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					func_48(unk_0x16F2683693E537C9(), "SHOP_HOLDUP", 8);
				}
				func_13(&(Local_66.f_1D7));
				if (Local_66.f_2.f_B)
				{
					iLocal_51 = 37;
				}
				else
				{
					iLocal_51 = 13;
				}
			}
			else
			{
				unk_0x0FB22E2FED7BCC7E(unk_0x16F2683693E537C9());
			}
			break;
		
		case 13:
			if (func_41(&(Local_66.f_1D7)) > 3f)
			{
				if (Local_66.f_2.f_C)
				{
					iLocal_51 = 22;
				}
				else if (Local_66.f_1CA)
				{
					iLocal_51 = 17;
				}
				else if (Local_66.f_1CB)
				{
					iLocal_51 = 18;
				}
				else if (Local_66.f_1CC)
				{
					iLocal_51 = 19;
				}
				else if (Local_66.f_1CD)
				{
					iLocal_51 = 20;
				}
				else if (Local_66.f_1CE)
				{
					iLocal_51 = 21;
				}
				else
				{
					iLocal_51 = 16;
				}
				func_40(&(Local_66.f_1D7));
			}
			break;
		
		case 16:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 17:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 18:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 19:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 20:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 21:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_SCARED", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 22:
			if (!unk_0x65636D4556D82155(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_BRAVE", 8);
				}
				func_294(&(Local_66.f_1D6), 256);
				iLocal_51 = 37;
			}
			break;
		
		case 23:
			if (!unk_0x65636D4556D82155(unk_0x16F2683693E537C9()))
			{
				if (Local_66.f_1C.f_E)
				{
					if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
					{
						func_48(Local_66.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
					}
				}
				iLocal_51 = 37;
			}
			else
			{
				unk_0x0FB22E2FED7BCC7E(unk_0x16F2683693E537C9());
			}
			break;
		
		case 24:
			if (unk_0xDF1306B443CD3D15(Local_66.f_2E.f_4[0], 0))
			{
				unk_0xAA280AF45BCCCF21(Local_66.f_2E.f_4[0], false);
			}
			if (!unk_0x437347B10A200C4B(Local_66.f_2E[0], 0))
			{
				func_48(Local_66.f_2E[0], "SURROUNDED", 15);
			}
			iLocal_51 = 25;
			break;
		
		case 25:
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				func_48(unk_0x16F2683693E537C9(), "SPOT_POLICE", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 26:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_POUR_CAN", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 27:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SCREAM_PANIC", 3);
				}
				iLocal_51 = 37;
			}
			else
			{
				func_38();
			}
			break;
		
		case 28:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		
		case 29:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_RECOGNISE", 8);
			}
			iLocal_51 = 37;
			break;
		
		case 30:
			if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				func_48(Local_66.f_2, "SHOP_NO_COPS", 3);
			}
			iLocal_51 = 37;
			break;
		
		case 31:
			if (!func_20())
			{
				iLocal_51 = 37;
			}
			break;
		
		case 33:
			if (!unk_0x65636D4556D82155(unk_0x16F2683693E537C9()) && !unk_0x65636D4556D82155(Local_66.f_2))
			{
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					func_48(unk_0x16F2683693E537C9(), "SHOP_HURRY", 11);
				}
				func_13(&(Local_66.f_1D7));
				iLocal_51 = 32;
			}
			break;
		
		case 32:
			if (func_41(&(Local_66.f_1D7)) > 1f)
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_HURRYING", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 34:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_SELL", 3);
				}
				iLocal_51 = 37;
			}
			break;
		
		case 35:
			if (!func_20())
			{
				if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
				{
					func_48(Local_66.f_2, "SHOP_STEAL", 3);
				}
				iLocal_51 = 37;
			}
			break;
	}
}

void func_38()
{
	Global_4CD7 = 0;
	func_39();
}

void func_39()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_5145 = 6;
	}
}

void func_40(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_41(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_11(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_10(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_42(int iParam0)
{
	if (func_15(iParam0))
	{
		if (!func_11(iParam0))
		{
			iParam0->f_2 = (func_10(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
			unk_0x5D96D8530B3D0904(iParam0, 2);
		}
	}
}

void func_43(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_11(iParam0))
		{
			iParam0->f_1 = (func_10(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			unk_0x0674E58A79778E99(iParam0, 2);
		}
	}
}

int func_44()
{
	if (!unk_0x437347B10A200C4B(Local_66, 0))
	{
		if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_45()
{
	if (!unk_0x437347B10A200C4B(Local_66, 0))
	{
		if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_D6, Local_66.f_D9, Local_66.f_DC, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_46(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_47()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_48(int iParam0, char* sParam1, int iParam2)
{
	unk_0xC8B576D6F470FFC6(iParam0, sParam1, func_49(iParam2), 1);
}

int func_49(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_50()
{
	return Global_56C1;
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_303() && iLocal_64 != 3)
	{
		iVar2 = 0;
		while (iVar2 < unk_0xDFB2BAED99ED0A2E(0))
		{
			iVar0 = unk_0xB98DB26FBF676FA1(0, iVar2);
			switch (iVar0)
			{
				case 142:
					unk_0x218F818E64020C17(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (unk_0xEC560E589DF8370E(iVar1))
						{
							if (iVar1 != func_52(Local_66.f_2) && iVar1 != func_52(unk_0x16F2683693E537C9()))
							{
								func_294(&(Local_66.f_1D6), 8);
							}
						}
						if (!unk_0xEC560E589DF8370E(iVar1) && !unk_0xE2F1E99DD161A861(iVar1))
						{
							func_294(&(Local_66.f_1D6), 8);
						}
					}
					break;
				
				case 141:
					unk_0x218F818E64020C17(0, iVar2, &iVar1, 1);
					if (func_53(iVar1))
					{
						if (unk_0xEC560E589DF8370E(iVar1))
						{
							if (iVar1 != func_52(Local_66.f_2) && iVar1 != func_52(unk_0x16F2683693E537C9()))
							{
								func_294(&(Local_66.f_1D6), 8);
							}
						}
						if (!unk_0xEC560E589DF8370E(iVar1) && !unk_0xE2F1E99DD161A861(iVar1))
						{
							func_294(&(Local_66.f_1D6), 8);
						}
					}
					break;
			}
			iVar2++;
		}
	}
}

int func_52(int iParam0)
{
	return iParam0;
}

int func_53(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x4D570FEF9D230CE7(iParam0) == Local_66.f_B9)
		{
			return 1;
		}
		else if (unk_0x3D1053F9EB43B7AD(iParam0, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x3D1053F9EB43B7AD(iParam0, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x3D1053F9EB43B7AD(iParam0, Local_66.f_CF, Local_66.f_D2, Local_66.f_D5, 0, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_C7 != -1f)
		{
			if (unk_0x3D1053F9EB43B7AD(iParam0, Local_66.f_C1, Local_66.f_C4, Local_66.f_C7, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_54()
{
	int iVar0;
	var uVar1[10];
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_303())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_66.f_A2.f_12, 0))
			{
				iVar2 = 0;
				iVar3 = 0;
				iVar2 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar1, 4294967295);
				iVar0 = 0;
				while (iVar0 < Local_66.f_A2)
				{
					Local_66.f_A2[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					if (iVar0 < Local_66.f_A2)
					{
						if ((unk_0xC844350D5D58C99A(uVar1[iVar3]) && !unk_0xEB6A8945D1AC98A1(uVar1[iVar3])) && !unk_0x405E212DDE472467(uVar1[iVar3], 0))
						{
							if (unk_0xBFDE4EE64C4BF2D6(uVar1[iVar3], unk_0x5D08BBCCCC2F43A4(unk_0xD803B885F5E47A62())))
							{
								Local_66.f_A2[iVar0] = uVar1[iVar3];
								Local_66.f_A2.f_5[iVar0 /*3*/] = { unk_0x68F4C0EC296D3901(uVar1[iVar3], true) };
								iVar0++;
							}
						}
					}
					iVar3++;
				}
				unk_0x5D96D8530B3D0904(&(Local_66.f_A2.f_12), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_A2)
			{
				if ((unk_0xC844350D5D58C99A(Local_66.f_A2[iVar0]) && !unk_0xEB6A8945D1AC98A1(Local_66.f_A2[iVar0])) && !unk_0x405E212DDE472467(Local_66.f_A2[iVar0], 0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_66.f_A2.f_12, 1))
					{
						if ((unk_0x1C0640BA9A7327B3() % 1500) < 50)
						{
						}
						unk_0x4A4806F9D471E491(Local_66.f_A2[iVar0], false, 0);
						unk_0x20641932E5104B25(Local_66.f_A2[iVar0], false, 0);
						unk_0x1E9649458B15960F(Local_66.f_A2[iVar0], true);
						unk_0x08841CDB215AE18F(Local_66.f_A2[iVar0], Local_66.f_A2.f_5[iVar0 /*3*/], 1, 1, 1);
					}
					else if (!unk_0x4FC40AB0ECCE6E18(Local_66.f_A2[iVar0]))
					{
						unk_0x4A4806F9D471E491(Local_66.f_A2[iVar0], true, 0);
						unk_0x20641932E5104B25(Local_66.f_A2[iVar0], true, 0);
						unk_0x1E9649458B15960F(Local_66.f_A2[iVar0], false);
						unk_0x08841CDB215AE18F(Local_66.f_A2[iVar0], Local_66.f_A2.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_66.f_A2.f_12, 0))
			{
				unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_66.f_A2)
			{
				if ((unk_0xC844350D5D58C99A(Local_66.f_A2[iVar0]) && !unk_0xEB6A8945D1AC98A1(Local_66.f_A2[iVar0])) && !unk_0x405E212DDE472467(Local_66.f_A2[iVar0], 0))
				{
					if (!unk_0x4FC40AB0ECCE6E18(Local_66.f_A2[iVar0]))
					{
						unk_0x4A4806F9D471E491(Local_66.f_A2[iVar0], true, 0);
						unk_0x20641932E5104B25(Local_66.f_A2[iVar0], true, 0);
						unk_0x1E9649458B15960F(Local_66.f_A2[iVar0], false);
						unk_0x08841CDB215AE18F(Local_66.f_A2[iVar0], Local_66.f_A2.f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_55()
{
	switch (iLocal_99)
	{
		case 0:
			if (func_303())
			{
				unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
				unk_0x3F423BF5B8125A50("oddjobs@shop_robbery@rob_till");
				unk_0x3F423BF5B8125A50("misscommon@response");
				unk_0x0D3BE1DE0262A012(func_64(iLocal_80), false);
				unk_0x523BCC9DC80CD82F(joaat("prop_choc_ego"));
				unk_0x523BCC9DC80CD82F(joaat("prop_choc_meto"));
				unk_0x523BCC9DC80CD82F(joaat("prop_choc_pq"));
				if (!bLocal_86)
				{
					unk_0x523BCC9DC80CD82F(Local_66.f_2E.f_1A);
					unk_0x523BCC9DC80CD82F(Local_66.f_2E.f_1B);
				}
				iLocal_99 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xAE317D00A5A55DF6("SCRIPT\MARKET_CASH_REGISTER", false, 4294967295))
			{
				return;
			}
			if (!unk_0xB4AE0788C1587752("oddjobs@shop_robbery@rob_till"))
			{
				return;
			}
			if (!unk_0xB4AE0788C1587752("misscommon@response"))
			{
				return;
			}
			if (!unk_0xB87F6CF6E5628C67(joaat("prop_choc_ego")))
			{
				return;
			}
			if (!unk_0xB87F6CF6E5628C67(joaat("prop_choc_meto")))
			{
				return;
			}
			if (!unk_0xB87F6CF6E5628C67(joaat("prop_choc_pq")))
			{
				return;
			}
			if (!bLocal_86)
			{
				if (!unk_0xB87F6CF6E5628C67(Local_66.f_2E.f_1A))
				{
					return;
				}
				if (!unk_0xB87F6CF6E5628C67(Local_66.f_2E.f_1B))
				{
					return;
				}
			}
			if (!func_62("SNK_MNU", iLocal_80, 0))
			{
				return;
			}
			if (!func_1(Local_66.f_1D6, 4))
			{
				if (!func_1(Local_66.f_1D6, 1024))
				{
					iLocal_98[0] = unk_0x7707E48765093646(func_61(0), func_60(0), true, true, false);
					iLocal_98[1] = unk_0x7707E48765093646(func_61(1), func_60(1), true, true, false);
					iLocal_98[2] = unk_0x7707E48765093646(func_61(2), func_60(2), true, true, false);
					unk_0x4A4806F9D471E491(iLocal_98[0], false, 0);
					unk_0x4A4806F9D471E491(iLocal_98[1], false, 0);
					unk_0x4A4806F9D471E491(iLocal_98[2], false, 0);
					func_294(&(Local_66.f_1D6), 1024);
				}
				func_294(&(Local_66.f_1D6), 4);
				iLocal_99 = 2;
			}
			break;
		
		case 2:
			if (!func_303())
			{
				func_56();
				func_301(&(Local_66.f_1D6), 4);
				iLocal_99 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_66.f_1D6, 4))
			{
				func_56();
				func_301(&(Local_66.f_1D6), 4);
			}
			break;
	}
}

void func_56()
{
	unk_0x8D17794CE3273D70("oddjobs@shop_robbery@rob_till");
	unk_0x8D17794CE3273D70("misscommon@response");
	unk_0x42740B44BA8D7B43("SCRIPT\MARKET_CASH_REGISTER");
	unk_0xF5A41F3D3B38EFE3(func_64(iLocal_80));
	unk_0x71199B01895C6202(joaat("prop_choc_ego"));
	unk_0x71199B01895C6202(joaat("prop_choc_meto"));
	unk_0x71199B01895C6202(joaat("prop_choc_pq"));
	func_57(1, iLocal_80);
	if (!bLocal_86)
	{
		unk_0x71199B01895C6202(Local_66.f_2E.f_1A);
		unk_0x71199B01895C6202(Local_66.f_2E.f_1B);
	}
}

void func_57(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_574E.f_20E1)
	{
		unk_0xA5E3ADAAA4CD5D6C(15);
		Global_574E.f_20E1 = 0;
	}
	unk_0xD668DA5CA4A1D2C8(0f);
	if (Global_574E.f_15FC[iVar0])
	{
		unk_0x11CCD0ACA866C6C5(9, false);
		Global_574E.f_15FC[iVar0] = 0;
	}
	if (Global_574E.f_15EE[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_574E.f_15EE[iVar0] = 0;
	}
	if (Global_574E.f_15F5[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_574E.f_15F5[iVar0] = 0;
	}
	if (bParam0)
	{
		func_58(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0;
	}
}

void func_58(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_59(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 4294967295)
	{
		if (unk_0x8CD06866876216F2() && unk_0x2E9F2B9C010D34D9())
		{
			iParam2 = unk_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, unk_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x12AB0310C2281427(&cVar0);
	iVar3 = 4294967295;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_574E.f_1659[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_574E.f_1659[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != 4294967295)
		{
			Global_574E.f_1659[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

Vector3 func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_66.f_1E6.f_6 - Vector(1f, 0f, 0.1f);
		
		case 1:
			return Local_66.f_1E6.f_6 - Vector(1f, 0f, 0f);
		
		case 2:
			return Local_66.f_1E6.f_6 - Vector(1f, 0f, -0.1f);
		
		default:
	}
	return Local_66.f_1E6.f_6 - Vector(1f, 0f, -0.1f);
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		default:
	}
	return joaat("prop_choc_pq");
}

bool func_62(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_59(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_574E.f_1603[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1603[iVar0 /*4*/])))
	{
		unk_0xD7992BEF7A9D109E(&(Global_574E.f_1603[iVar0 /*4*/]), 9);
		Global_574E.f_15FC[iVar0] = 1;
		if (!unk_0x01C309A4BDFCAD82(&(Global_574E.f_1603[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x0D3BE1DE0262A012("CommonMenu", false);
	Global_574E.f_15EE[iVar0] = 1;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", false);
		Global_574E.f_15F5[iVar0] = 1;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_574E.f_161C[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_63(&(Global_574E.f_161C[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_63(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = unk_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

char* func_64(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case 4294967294:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

void func_65()
{
	switch (iLocal_100)
	{
		case 0:
			if (func_303())
			{
				unk_0x3F423BF5B8125A50(Local_66.f_1E6.f_1);
				iLocal_100 = 1;
			}
			break;
		
		case 1:
			if (!unk_0xB4AE0788C1587752(Local_66.f_1E6.f_1))
			{
				return;
			}
			if (!func_1(Local_66.f_1D6, 16))
			{
				func_294(&(Local_66.f_1D6), 16);
				iLocal_100 = 2;
			}
			break;
		
		case 2:
			if (!func_303() && iLocal_63 != 1)
			{
				unk_0x8D17794CE3273D70(Local_66.f_1E6.f_1);
				func_301(&(Local_66.f_1D6), 16);
				iLocal_100 = 0;
			}
			break;
		
		case 3:
			if (func_1(Local_66.f_1D6, 16))
			{
				unk_0x8D17794CE3273D70(Local_66.f_1E6.f_1);
				func_301(&(Local_66.f_1D6), 16);
			}
			break;
	}
}

void func_66()
{
	switch (iLocal_119)
	{
		case 0:
			if (Local_66.f_9E)
			{
				iLocal_119 = 1;
			}
			break;
		
		case 1:
			if (func_303())
			{
				if (func_15(&(Local_66.f_9E.f_1)))
				{
					func_40(&(Local_66.f_9E.f_1));
				}
				if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
				{
				}
				if (unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
				{
					unk_0x1E69CBC4A01168BD(unk_0xD803B885F5E47A62());
				}
			}
			else
			{
				func_13(&(Local_66.f_9E.f_1));
				iLocal_119 = 2;
			}
			break;
		
		case 2:
			if (func_303())
			{
				iLocal_119 = 1;
			}
			break;
		
		case 3:
			break;
	}
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	char* sVar5;
	var uVar6;
	
	func_191();
	if (((((iLocal_58 == 1 || iLocal_58 == 2) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) == 0) && !unk_0xEB6A8945D1AC98A1(Local_66)) && !func_190(3212836864)) && !unk_0xEB6A8945D1AC98A1(Local_66.f_2))
	{
		iVar1 = unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9());
		iVar2 = unk_0xC08489BCA49ECCA8(unk_0x16F2683693E537C9());
		if (((iLocal_64 != 2 && iLocal_64 != 3) && iLocal_64 != 4) && func_303())
		{
			if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			}
		}
		iVar4 = 0;
		switch (iLocal_64)
		{
			case 0:
				if (func_1(Local_66.f_1D6, 4) && func_25(Local_66) == joaat("weapon_unarmed"))
				{
					if (func_189(iLocal_80, &(Local_66.f_1E6.f_6), Local_66.f_1E6.f_9.f_2, &(Local_66.f_66.f_1A[0 /*3*/]), &(Local_66.f_66.f_1A[1 /*3*/]), &(Local_66.f_66.f_21), &(Local_66.f_66.f_24)))
					{
						vVar3 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
						if (unk_0x0EB28750412C3A5A(vVar3, Local_66.f_66.f_21, true) < 5f)
						{
							if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Local_66.f_66.f_1A[0 /*3*/], Local_66.f_66.f_1A[1 /*3*/], Local_66.f_66.f_24, 0, true, 0))
							{
								if (unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), Local_66.f_66.f_21, 135f))
								{
									if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
									{
									}
									if (((!func_28("SHR_HOLDUP_1") && !func_28("SHR_MENU")) && !func_50()) && func_188())
									{
										func_187("SHR_MENU");
									}
									Local_66.f_1D5 = 4294967295;
									func_186(&(Local_66.f_1D5), 4, "SHR_MENU", 0, 0, 0, 0);
									unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 1);
									unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 0);
									iLocal_64 = 1;
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (!unk_0xBFDF2644D7CBD7C5(unk_0x16F2683693E537C9(), Local_66.f_66.f_21, 135f) || !func_25(Local_66) == joaat("weapon_unarmed"))
				{
					if (func_28("SHR_MENU"))
					{
						unk_0xA37A90C62806D848(1);
					}
					Local_66.f_66.f_16 = 4294967295;
					func_185(&(Local_66.f_1D5));
					iLocal_64 = 0;
				}
				else if (((!func_28("SHR_MENU") && !func_28("SHR_HOLDUP_1")) && func_188()) && !func_184(Local_66.f_1D5, 0))
				{
					func_187("SHR_MENU");
				}
				if ((!unk_0x093C93CCF7F0ECDB(unk_0x16F2683693E537C9()) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !unk_0x9832A1748E6D3DBF(unk_0x16F2683693E537C9()))
				{
					if (func_182(Local_66.f_1D5, 1))
					{
						if (func_28("SHR_MENU"))
						{
							unk_0xA37A90C62806D848(1);
						}
						unk_0x5D96D8530B3D0904(&(Local_66.f_A2.f_12), 1);
						func_13(&(Local_66.f_66.f_35));
						func_185(&(Local_66.f_1D5));
						func_181(23, 1);
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(Local_66.f_2))
						{
							unk_0xF96A174EE26D7588(unk_0x16F2683693E537C9(), Local_66.f_2, 0);
						}
						iLocal_64 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0x9F4FE516EAACCFC5(iLocal_118))
				{
					iLocal_118 = unk_0xAE06CCC36C49929C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				func_180(iLocal_80, Local_66.f_1E6.f_6, Local_66.f_1E6.f_9.f_2, &(Local_66.f_66), &(Local_66.f_66.f_3), &uVar6);
				unk_0x608A456FDD8A83D8(iLocal_118, Local_66.f_66);
				unk_0x5F3CBA6EB9341C90(iLocal_118, Local_66.f_66.f_3, 2);
				unk_0x5818C8D5303DCCF8(iLocal_118, 35f);
				unk_0x91F5B0244AAE6222(iLocal_118, "HAND_SHAKE", 0.1f);
				unk_0xE3BB8E05FCEB3FBE(iLocal_118, true);
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
					func_294(&(Local_66.f_1D6), 2048);
				}
				Local_66.f_66.f_2E = func_64(iLocal_80);
				Local_66.f_66.f_17 = 0;
				Local_66.f_66.f_18 = 3;
				func_179(0, 0);
				func_178(1, 1, 0, 0, 0);
				func_177(1, 2, 1, 1, 1);
				func_176(func_5(iLocal_80));
				func_174(1, Local_66.f_66.f_2E, Local_66.f_66.f_2E);
				func_173();
				func_169(0, "SNK_ITEM1", 0, 1, 0, 0);
				func_169(0, "ITEM_COST", 1, 1, 0, 0);
				func_165(func_168(0), 0);
				func_169(1, "SNK_ITEM2", 0, 1, 0, 0);
				func_169(1, "ITEM_COST", 1, 1, 0, 0);
				func_165(func_168(1), 0);
				func_169(2, "SNK_ITEM3", 0, 1, 0, 0);
				func_169(2, "ITEM_COST", 1, 1, 0, 0);
				func_165(func_168(2), 0);
				func_164(0);
				func_163(Local_66.f_66.f_17, 1, 1);
				func_162("SNK_ITEM1_D", 0, 0);
				func_161(201, "ITEM_SELECT", 4294967295, 0);
				func_161(202, "ITEM_BACK", 4294967295, 0);
				func_161(203, "SNK_LIFT", 4294967295, 0);
				iLocal_64 = 3;
				break;
			
			case 3:
				iVar4 = 0;
				if (unk_0x0EFF6B4415DAF4A1())
				{
					if (unk_0x9E6C8D8976DA0ECD(2))
					{
						unk_0x38C3A68D7861DCFD(0, 1, 1);
						unk_0x38C3A68D7861DCFD(0, 2, 1);
						unk_0xEAB026E686C0D991(0, 237, 1);
						unk_0xEAB026E686C0D991(0, 238, 1);
						unk_0xEAB026E686C0D991(0, 241, 1);
						unk_0xEAB026E686C0D991(0, 242, 1);
						func_158(0, 0, 0, 1);
						func_157(0, 4294967295, 1);
						if (func_156())
						{
							if (Global_4121D1 != Local_66.f_66.f_17)
							{
								unk_0x4D7F4CC43D4D0DE3(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								Local_66.f_66.f_17 = Global_4121D1;
								func_163(Local_66.f_66.f_17, 1, 1);
								Local_66.f_66.f_25 = 0;
								Local_66.f_66.f_29 = 0;
								Local_66.f_66.f_2A = 0;
								sVar5 = func_155(Local_66.f_66.f_17);
								if (unk_0xEF07223F00EBE9C9(sVar5))
								{
									func_162(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				func_116(1, iLocal_80, 1, 0, 1, 3212836864, 0, 0, 4294967295);
				func_112();
				if (unk_0xD245978525608929(2, 201) || iVar4 == 1)
				{
					Local_66.f_66.f_25 = 1;
					Local_66.f_66.f_29 = 0;
					Local_66.f_66.f_2A = 0;
					if (Local_66.f_66.f_28 && Local_66.f_66.f_2B)
					{
						Local_66.f_66.f_2C = 1;
						unk_0x4D7F4CC43D4D0DE3(4294967295, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
						iLocal_108 = 1;
						iLocal_111 = Local_66.f_66.f_17;
						iLocal_64 = 4;
					}
					else
					{
						Local_66.f_66.f_2C = 0;
						unk_0x4D7F4CC43D4D0DE3(4294967295, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
					}
				}
				if (unk_0xD245978525608929(2, 203))
				{
					iLocal_64 = 6;
					unk_0x4D7F4CC43D4D0DE3(4294967295, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_111();
				}
				if (unk_0xD245978525608929(2, 202) || unk_0xB9132A06AE472728(2, 238))
				{
					iLocal_64 = 7;
					Local_66.f_66.f_2D = unk_0x1C0640BA9A7327B3();
					unk_0x4D7F4CC43D4D0DE3(4294967295, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
					func_111();
				}
				break;
			
			case 4:
				func_116(1, iLocal_80, 1, 0, 1, 3212836864, 0, 0, 4294967295);
				switch (Local_66.f_66.f_17)
				{
					case 0:
						iVar0 = func_168(Local_66.f_66.f_17);
						if (iVar1 + 10 > iVar2)
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar2, 0);
						}
						else
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						iVar0 = func_168(Local_66.f_66.f_17);
						if (iVar1 + 20 > iVar2)
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar2, 0);
						}
						else
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						iVar0 = func_168(Local_66.f_66.f_17);
						if (iVar1 + 15 > iVar2)
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar2, 0);
						}
						else
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar1 + 15, 0);
						}
						break;
				}
				func_69(func_105(), 98, iVar0);
				if (!Local_66.f_66.f_27)
				{
					iLocal_51 = 34;
					Local_66.f_66.f_27 = 1;
				}
				func_13(&(Local_66.f_66.f_35));
				iLocal_64 = 3;
				break;
			
			case 5:
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					if (!bLocal_86)
					{
					}
					iLocal_64 = 6;
				}
				break;
			
			case 6:
				switch (Local_66.f_66.f_17)
				{
					case 0:
						if (iVar1 + 10 > iVar2)
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar2, 0);
						}
						else
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar1 + 10, 0);
						}
						break;
					
					case 1:
						if (iVar1 + 20 > iVar2)
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar2, 0);
						}
						else
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar1 + 20, 0);
						}
						break;
					
					case 2:
						if (iVar1 + 15 > iVar2)
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar2, 0);
						}
						else
						{
							unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), iVar1 + 15, 0);
						}
						break;
				}
				unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
				func_181(23, 0);
				iLocal_51 = 35;
				if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2) && func_1(Local_66.f_1D6, 4))
				{
					unk_0xC6EB89C59F2AF6B8(Local_66.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
				}
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 1)
				{
					func_16(1, 0);
				}
				iLocal_64 = 8;
				break;
			
			case 7:
				if ((unk_0x1C0640BA9A7327B3() - Local_66.f_66.f_2D) > 1000)
				{
					iLocal_64 = 0;
				}
				else
				{
					unk_0x558EC149EB2BC0A2(2, 193);
					unk_0x558EC149EB2BC0A2(2, 202);
					unk_0x558EC149EB2BC0A2(2, 188);
					unk_0x558EC149EB2BC0A2(2, 187);
					unk_0x558EC149EB2BC0A2(2, 189);
					unk_0x558EC149EB2BC0A2(2, 190);
				}
				break;
			
			case 8:
				break;
		}
	}
	else
	{
		if (iLocal_64 != 8 && func_1(Local_66.f_1D6, 4))
		{
			if ((iLocal_64 == 3 || iLocal_64 == 2) || iLocal_64 == 4)
			{
				func_111();
			}
			iLocal_64 = 8;
		}
		if (func_28("SHR_SNACKS"))
		{
			unk_0xA37A90C62806D848(1);
			func_185(&(Local_66.f_1D5));
		}
		if (func_28("SHR_MENU"))
		{
			unk_0xA37A90C62806D848(1);
			func_185(&(Local_66.f_1D5));
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_66.f_A2.f_12, 1) && iLocal_101 < 2)
		{
			unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 1);
		}
		if (func_1(Local_66.f_1D6, 4))
		{
			func_68();
		}
	}
}

void func_68()
{
	if (func_1(Local_66.f_1D6, 2048))
	{
		if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			}
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			func_301(&(Local_66.f_1D6), 2048);
		}
	}
	Local_66.f_66.f_25 = 0;
	unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 1);
	if (unk_0x9F4FE516EAACCFC5(iLocal_118))
	{
		unk_0x9A8DDC7C522F5BF5(iLocal_118, 0);
	}
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if (func_104(iParam0) == 3)
	{
		return 0;
	}
	if (func_104(iParam0) == 4)
	{
		return 0;
	}
	return func_70(func_104(iParam0), 0, iParam1, iParam2, 0);
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_103();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_102(99, 1);
					func_101(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_101(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_101(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_86(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_81(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_81(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_101(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_101(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_101(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x7CF4675EC2B8ED0B())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_81(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_101(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_101(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_101(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_80(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_102(95, iParam3);
					break;
				
				case 1:
					func_102(97, iParam3);
					break;
				
				case 2:
					func_102(96, iParam3);
					break;
			}
			func_102(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_73(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_73(iVar1);
	}
	iVar5 = (Global_E53E[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_E53E[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_E53E[iVar2] = 2147483647;
				}
				else
				{
					Global_E53E[iVar2] = (Global_E53E[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_101(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_101(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_101(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_E53E[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_E53E[iVar2];
			Global_E53E[iVar2] = (Global_E53E[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/]++;
		Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1++;
		if (Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_1B416.f_504F.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_72(iParam0);
	if (Global_A1D7 == 15)
	{
		func_71(0);
	}
	return 1;
}

void func_71(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_1B416.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_E546[iVar0 /*3*/][0] = Global_1B416.f_504F[iVar0];
		Global_E546.f_1F[iVar0 /*3*/][0] = Global_1B416.f_504F.f_B[iVar0];
		Global_E546.f_3E[iVar0 /*3*/][0] = Global_1B416.f_504F.f_16[iVar0];
		Global_E546.f_5D[iVar0 /*3*/][0] = Global_1B416.f_504F.f_21[iVar0];
		Global_E546.f_7C[iVar0 /*3*/][0] = Global_1B416.f_504F.f_2C[iVar0];
		Global_E546.f_9B[iVar0 /*3*/][0] = Global_1B416.f_504F.f_37[iVar0];
		Global_E546.f_BA[iVar0 /*3*/][0] = Global_1B416.f_504F.f_42[iVar0];
		Global_E546.f_D9[iVar0 /*3*/][0] = Global_1B416.f_504F.f_4D[iVar0];
		Global_E546.f_F8[iVar0 /*3*/][0] = Global_1B416.f_504F.f_58[iVar0];
		if (!bParam0)
		{
			Global_E546[iVar0 /*3*/][1] = Global_1B416.f_504F[iVar0];
			Global_E546.f_1F[iVar0 /*3*/][1] = Global_1B416.f_504F.f_B[iVar0];
			Global_E546.f_3E[iVar0 /*3*/][1] = Global_1B416.f_504F.f_16[iVar0];
			Global_E546.f_5D[iVar0 /*3*/][1] = Global_1B416.f_504F.f_21[iVar0];
			Global_E546.f_7C[iVar0 /*3*/][1] = Global_1B416.f_504F.f_2C[iVar0];
			Global_E546.f_9B[iVar0 /*3*/][1] = Global_1B416.f_504F.f_37[iVar0];
			Global_E546.f_BA[iVar0 /*3*/][1] = Global_1B416.f_504F.f_42[iVar0];
			Global_E546.f_D9[iVar0 /*3*/][1] = Global_1B416.f_504F.f_4D[iVar0];
			Global_E546.f_F8[iVar0 /*3*/][1] = Global_1B416.f_504F.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_E53E[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0xCDC520E5E48E63D9(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0xCDC520E5E48E63D9(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0xCDC520E5E48E63D9(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_73(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_79(129, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_79(135, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_79(136, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_79(137, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_76(8269, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_76(8270, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_76(8271, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_76(8272, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_76(8273, 0, 4294967295, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_76(8274, 0, 4294967295, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x8CD06866876216F2())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0))
		{
			bVar0 = true;
			unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0) || unk_0xEAE0D21A50E6C7F4(Global_200000[func_75() /*10930*/].f_181E.f_A, iParam0))
	{
		bVar0 = true;
		unk_0x0674E58A79778E99(&(Global_1B416.f_504F.f_1D7), iParam0);
		unk_0x0674E58A79778E99(&(Global_200000[func_75() /*10930*/].f_181E.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x1E64CE678ED5F61E("COUP_RED");
		unk_0x6B012227B3921E18(func_74(iParam0));
		unk_0x1AEA174B291A9906(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_75()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_77(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_77(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_78();
		if (iVar1 > 4294967295)
		{
			Global_26E1B2 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_26E1B2 = 1;
		}
	}
	return iVar0;
}

int func_78()
{
	return Global_1407E9;
}

int func_79(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_78();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_80(int iParam0)
{
	func_102(93, iParam0);
	func_102(29, iParam0);
	func_102(30, iParam0);
}

bool func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_83(129, 4294967295, 4294967295);
	}
	if (iParam0 == 9)
	{
		return func_83(135, 4294967295, 4294967295);
	}
	if (iParam0 == 10)
	{
		return func_83(136, 4294967295, 4294967295);
	}
	if (iParam0 == 11)
	{
		return func_83(137, 4294967295, 4294967295);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0xDD0E7998AE8AD485();
		iVar1 = func_82(8269, 4294967295, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0xDD0E7998AE8AD485();
		iVar3 = func_82(8270, 4294967295, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0xDD0E7998AE8AD485();
		iVar5 = func_82(8271, 4294967295, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0xDD0E7998AE8AD485();
		iVar7 = func_82(8272, 4294967295, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0xDD0E7998AE8AD485();
		iVar9 = func_82(8273, 4294967295, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0xDD0E7998AE8AD485();
		iVar11 = func_82(8274, 4294967295, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x8CD06866876216F2())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_504F.f_1D7, iParam0);
	}
	return unk_0xEAE0D21A50E6C7F4(Global_200000[func_75() /*10930*/].f_181E.f_A, iParam0);
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_77(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 4294967295))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_83(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_78();
	}
	iVar1 = func_85(iParam0, iParam1);
	uVar2 = func_84(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_78();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_86(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x5E109EC687D2605A(27))
	{
		return 0;
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp0_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp1_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x6FB46C25CCB7E6D5(joaat("sp2_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x6FB46C25CCB7E6D5(joaat("num_cash_spent"), &iVar2, 4294967295);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0xCDC520E5E48E63D9(joaat("num_cash_spent"), iVar1, 1);
		func_100(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_87(27, 1);
	return 1;
}

int func_87(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_88(iParam0, iParam1);
}

int func_88(int iParam0, int iParam1)
{
	if (func_317(14) && !func_99(iParam0))
	{
		return 0;
	}
	if (unk_0x5E109EC687D2605A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_7929 != 0 && !Global_12B4E)
	{
		return 0;
	}
	if (func_98(&Global_4127F1))
	{
		if (func_96(&Global_4127F1, iParam0))
		{
			return 0;
		}
		if (func_89(&Global_4127F1, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x5A66449FC9BDF808(iParam0))
		{
			return 0;
		}
		if (unk_0x5E109EC687D2605A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_89(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_317(14) && !func_99(iParam1))
	{
		return 0;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0);
	}
	func_92(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_90(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_90(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x5E109EC687D2605A(iParam1))
	{
		return 0;
	}
	if (func_317(14) && !func_99(iParam1))
	{
		return 0;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0;
	}
	if (func_95(uParam0) < 0f)
	{
		func_94(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_91(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_91(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_92(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_93(uParam0, iVar0);
		iVar0++;
	}
	func_94(uParam0, (Global_4127F0 - 0.5f));
}

void func_93(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_94(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_95(var uParam0)
{
	return uParam0->f_50;
}

bool func_96(var uParam0, int iParam1)
{
	return func_97(uParam0, iParam1) != 4294967295;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool func_98(var uParam0)
{
	return uParam0->f_4F == 1;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

int func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0;
}

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x6FB46C25CCB7E6D5(iParam0, &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	unk_0xCDC520E5E48E63D9(iParam0, iVar0, 1);
}

void func_102(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x8CD06866876216F2())
	{
		return;
	}
	if (Global_DFA6[iParam0 /*7*/])
	{
		unk_0x6FB46C25CCB7E6D5(Global_DFA6[iParam0 /*7*/].f_1, &iVar0, 4294967295);
		iVar0 = (iVar0 + iParam1);
		unk_0xCDC520E5E48E63D9(Global_DFA6[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_103()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &iVar0, 4294967295);
		if (!Global_E53E[0] == iVar0)
		{
			Global_E53E[0] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &iVar0, 4294967295);
		if (!Global_E53E[1] == iVar0)
		{
			Global_E53E[1] = iVar0;
		}
		unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &iVar0, 4294967295);
		if (!Global_E53E[2] == iVar0)
		{
			Global_E53E[2] = iVar0;
		}
	}
}

int func_104(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_11;
}

int func_105()
{
	func_106();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_106()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_109(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_108(unk_0x16F2683693E537C9());
			if (func_107(iVar0) && (!func_317(14) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_107(Global_1B416.f_936.f_21B.f_10E1))
				{
					Global_1B416.f_936.f_21B.f_10E2 = Global_1B416.f_936.f_21B.f_10E1;
				}
				Global_1B416.f_936.f_21B.f_10E3 = iVar0;
				Global_1B416.f_936.f_21B.f_10E1 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_1B416.f_936.f_21B.f_10E1 != 145)
			{
				Global_1B416.f_936.f_21B.f_10E3 = Global_1B416.f_936.f_21B.f_10E1;
			}
			return;
		}
	}
	Global_1B416.f_936.f_21B.f_10E1 = 145;
}

bool func_107(int iParam0)
{
	return iParam0 < 3;
}

int func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_109(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_109(int iParam0)
{
	if (func_107(iParam0))
	{
		return func_110(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_110(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_111()
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
	}
	func_301(&(Local_66.f_1D6), 2048);
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	unk_0x2FB9A57162E54BAB(0f);
	unk_0xEF6276132B396452(0f, 1065353216);
	func_181(23, 0);
	Local_66.f_66.f_25 = 0;
	unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 1);
	if (unk_0x9F4FE516EAACCFC5(iLocal_118))
	{
		unk_0x9A8DDC7C522F5BF5(iLocal_118, 0);
	}
	unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
}

void func_112()
{
	char* sVar0;
	
	unk_0x558EC149EB2BC0A2(2, 193);
	unk_0x558EC149EB2BC0A2(2, 202);
	unk_0x558EC149EB2BC0A2(2, 188);
	unk_0x558EC149EB2BC0A2(2, 187);
	unk_0x558EC149EB2BC0A2(2, 189);
	unk_0x558EC149EB2BC0A2(2, 190);
	if (func_115())
	{
		Local_66.f_66.f_25 = 0;
		func_40(&(Local_66.f_66.f_35));
		Local_66.f_66.f_17 = (Local_66.f_66.f_17 - 1);
		if (Local_66.f_66.f_17 < 0)
		{
			Local_66.f_66.f_17 = (Local_66.f_66.f_18 - 1);
		}
		unk_0x4D7F4CC43D4D0DE3(4294967295, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_163(Local_66.f_66.f_17, 1, 1);
		sVar0 = func_155(Local_66.f_66.f_17);
		Local_66.f_66.f_29 = 0;
		Local_66.f_66.f_2A = 0;
		if (unk_0xEF07223F00EBE9C9(sVar0))
		{
			func_162(sVar0, 0, 0);
		}
	}
	if (func_114())
	{
		Local_66.f_66.f_25 = 0;
		func_40(&(Local_66.f_66.f_35));
		Local_66.f_66.f_17++;
		if (Local_66.f_66.f_17 > (Local_66.f_66.f_18 - 1))
		{
			Local_66.f_66.f_17 = 0;
		}
		unk_0x4D7F4CC43D4D0DE3(4294967295, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_163(Local_66.f_66.f_17, 1, 1);
		sVar0 = func_155(Local_66.f_66.f_17);
		Local_66.f_66.f_29 = 0;
		Local_66.f_66.f_2A = 0;
		if (unk_0xEF07223F00EBE9C9(sVar0))
		{
			func_162(sVar0, 0, 0);
		}
	}
	if (!Local_66.f_66.f_29)
	{
		Local_66.f_66.f_28 = func_113(func_108(unk_0x16F2683693E537C9())) >= func_168(Local_66.f_66.f_17);
		Local_66.f_66.f_29 = 1;
	}
	if (!Local_66.f_66.f_2A)
	{
		Local_66.f_66.f_2B = unk_0x7F6DC62EA9922664(unk_0x16F2683693E537C9()) < unk_0xC08489BCA49ECCA8(unk_0x16F2683693E537C9());
		Local_66.f_66.f_2A = 1;
	}
	if (Local_66.f_66.f_25)
	{
		if (func_41(&(Local_66.f_66.f_35)) < 3f)
		{
			if (Local_66.f_66.f_2C)
			{
				func_162("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_66.f_66.f_28)
			{
				func_162("SNK_AFFORD", 0, 0);
			}
			else if (!Local_66.f_66.f_2B)
			{
				func_162("SNK_NEEDED", 0, 0);
			}
		}
		else
		{
			Local_66.f_66.f_25 = 0;
			Local_66.f_66.f_2C = 0;
			func_40(&(Local_66.f_66.f_35));
			sVar0 = func_155(Local_66.f_66.f_17);
			if (unk_0xEF07223F00EBE9C9(sVar0))
			{
				func_162(sVar0, 0, 0);
			}
		}
	}
}

int func_113(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x6FB46C25CCB7E6D5(joaat("sp0_total_cash"), &uVar0, 4294967295);
			return uVar0;
		
		case 1:
			unk_0x6FB46C25CCB7E6D5(joaat("sp1_total_cash"), &uVar0, 4294967295);
			return uVar0;
		
		case 2:
			unk_0x6FB46C25CCB7E6D5(joaat("sp2_total_cash"), &uVar0, 4294967295);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_114()
{
	float fVar0;
	
	fVar0 = unk_0x4F3973434662D795(2, 219);
	if ((fVar0 > 0.8f || unk_0x06F8112AA79C53D9(2, 187)) || unk_0xBFC0798A6E3417F9(2, 242))
	{
		if (!func_15(&iLocal_115))
		{
			func_12(&iLocal_115);
			return 1;
		}
		else if (func_9(&iLocal_115) > 0.25f)
		{
			func_13(&iLocal_115);
			return 1;
		}
	}
	else if (func_15(&iLocal_115))
	{
		func_40(&iLocal_115);
	}
	return 0;
}

int func_115()
{
	float fVar0;
	
	fVar0 = unk_0x4F3973434662D795(2, 219);
	if ((fVar0 < -0.8f || unk_0x06F8112AA79C53D9(2, 188)) || unk_0xBFC0798A6E3417F9(2, 241))
	{
		if (!func_15(&iLocal_112))
		{
			func_12(&iLocal_112);
			return 1;
		}
		else if (func_9(&iLocal_112) > 0.25f)
		{
			func_13(&iLocal_112);
			return 1;
		}
	}
	else if (func_15(&iLocal_112))
	{
		func_40(&iLocal_112);
	}
	return 0;
}

void func_116(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == 4294967295)
	{
	}
	if (!func_152(0, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_574E)
	{
		if (func_150(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_574E = 0;
		}
	}
	if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
	{
		fVar57 = Global_574C;
	}
	else
	{
		fVar57 = (((Global_574C + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_574D;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0xE5AC5CA7914F5BAE(&iVar58, &iVar59);
		fVar61 = unk_0x33D480CCE15C991A(0);
		if (func_149())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_149())
		{
			fVar60 = 1f;
		}
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar60));
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar60));
	}
	else
	{
		unk_0x8A462DAA7D1D9008(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_574E.f_1462 <= 1)
		{
			func_169(Global_574E.f_1462 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_574E.f_177E = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_574E.f_1660)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
			{
				fVar49 = Global_574C;
			}
			else
			{
				if (Global_574E)
				{
					StringCopy(&cVar63, func_148(29), 64);
					StringCopy(&cVar64, func_145(29, 1), 64);
					if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[29 /*16*/])) == 2807284209)
					{
						func_144(Global_574B, Global_574C, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_574E.f_20C3)
				{
					iVar1 = Global_574E.f_20BF;
					iVar2 = Global_574E.f_20C0;
					iVar3 = Global_574E.f_20C1;
					iVar4 = Global_574E.f_20C2;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_144(Global_574B, (Global_574C + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_574C + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) != 0)
				{
					func_143();
					unk_0x070005E852D4C0E9(&(Global_574E.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_574E.f_44)
					{
						if (Global_574E.f_5[iVar14] == 2)
						{
							unk_0x6D99DF8263D35CE5(Global_574E.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_574E.f_5[iVar14] == 3)
						{
							unk_0x21994591120B91F0(Global_574E.f_E[iVar16], Global_574E.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_574E.f_5[iVar14] == 1)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 8)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 5)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 6)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 7)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 9)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xE0026608C37C7C41((Global_574B + 0.00390625f), ((Global_574C + fVar55) + 0.00416664f), 0);
				}
				if (Global_574E.f_1667)
				{
					func_143();
					func_141((((Global_574B + fParam5) - 0.00390625f) - func_142("CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669);
				}
				else if (Global_574E.f_1663 > Global_574E.f_1469)
				{
					if (Global_574E.f_1666 != 0)
					{
						func_143();
						func_141((((Global_574B + fParam5) - 0.00390625f) - func_142("CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665);
					}
				}
			}
			iVar6 = Global_574E.f_166A;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_574E.f_20CD)
			{
				iVar1 = Global_574E.f_20C9;
				iVar2 = Global_574E.f_20CA;
				iVar3 = Global_574E.f_20CB;
				iVar4 = Global_574E.f_20CC;
			}
			else
			{
				unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_574E.f_1469 && iVar6 <= Global_574E.f_1462)
			{
				if (iVar6 >= 0)
				{
					if (Global_574E.f_156D[iVar6])
					{
						if (Global_574E.f_14EC[iVar6] && iVar6 != Global_574E.f_166A)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar54 = Global_574E.f_1671[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, 0);
			if (Global_574E.f_1663 > Global_574E.f_1469)
			{
				if (Global_574E.f_20D2)
				{
					iVar1 = Global_574E.f_20CE;
					iVar2 = Global_574E.f_20CF;
					iVar3 = Global_574E.f_20D0;
					iVar4 = Global_574E.f_20D1;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_144(Global_574B, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar60));
				vVar38.y = (vVar38.y * (0.5f / fVar60));
				if (Global_574E.f_20DF)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xA402F6C87C08815C(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar60), ((vVar38.y / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1252)) != 0 && Global_574E.f_129E != 4294967295)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_574E.f_12A0 != 0)
				{
					func_150(Global_574E.f_12A0, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_140(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_574E.f_1252));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_144(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_140(fVar40);
				unk_0x070005E852D4C0E9(&(Global_574E.f_1252));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_574E.f_12A0 != 0)
				{
					func_150(Global_574E.f_12A0, 1, 1, &fVar36, &fVar37, bParam7);
					func_139(Global_574E.f_12A0, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_148(Global_574E.f_12A0), func_145(Global_574E.f_12A0, 1), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_574E.f_129E > 0)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_574E.f_129F) > Global_574E.f_129E)
					{
						StringCopy(&(Global_574E.f_1252), "", 24);
						Global_574E.f_129E = 4294967295;
					}
				}
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_15)) != 0 && Global_412185.f_41 != 4294967295)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_412185.f_43 != 0)
				{
					func_150(Global_412185.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_140(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_412185.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_144(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_140(fVar40);
				unk_0x070005E852D4C0E9(&(Global_412185.f_15));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 2)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 3)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 1)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 8)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 5)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 6)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 7)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 9)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_412185.f_43 != 0)
				{
					func_150(Global_412185.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					func_139(Global_412185.f_43, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_148(Global_412185.f_43), func_145(Global_412185.f_43, 1), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_412185.f_41 > 0)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_412185.f_42) > Global_412185.f_41)
					{
						StringCopy(&(Global_412185.f_15), "", 16);
						Global_412185.f_41 = 4294967295;
					}
				}
			}
			func_132(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xD02CE72B4B66DC29(76, 84);
			unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_574E.f_1660)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_574E.f_1462;
			if (Global_574E.f_1661)
			{
				iVar66 = (Global_574E.f_1664 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_574E.f_1671[iVar6] != 0f)
				{
					fVar54 = Global_574E.f_1671[iVar6];
				}
				if (Global_574E.f_1661)
				{
					iVar6 = Global_574E.f_1F66[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_574E.f_166A && iVar9 < Global_574E.f_1469)
				{
					bVar33 = true;
					if (Global_574E.f_166B == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_574E.f_14EC[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_574E.f_16F7[iVar6] = fVar35;
				fVar34 = (Global_574B + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_574E.f_166B == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_574E.f_20D9)
					{
						unk_0xA402F6C87C08815C(Global_574E.f_20D8, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xA402F6C87C08815C(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_574B + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_574E.f_16F5 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_574E.f_146A)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_574E.f_13E1[iVar6], iVar8) || Global_574E.f_13C0[iVar8] == 5)
					{
						if (Global_574E.f_1661)
						{
							iVar19 = Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar20 = Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar21 = Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar22 = Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar23 = Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)];
						}
						else
						{
							Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar19;
							Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar20;
							Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar21;
							Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar22;
							Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_574E.f_177B[0] != 4294967295)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_574E.f_177B[1] != 4294967295)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_574E.f_13C6[iVar8] != -1f)
						{
							fVar34 = ((Global_574B + 0.0046875f) + Global_574E.f_13C6[iVar8]);
						}
						if ((iVar8 < 4 && Global_574E.f_13C6[iVar8 + 1] != -1f) && fVar34 < Global_574E.f_13C6[iVar8 + 1])
						{
							fVar44 = (Global_574E.f_13C6[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_574B + Global_574D) - 0.0046875f) - fVar34);
						}
						if ((Global_574E.f_13D3[iVar8] && Global_574E.f_16F2) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_574E.f_13C0[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_130(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0xBBA442527B4BB1A6(&(Global_574E.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0)
												{
													unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x79E367314AFBB5CA(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_150(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_574E.f_1151[(iVar22 + iVar14)] == 2 || Global_574E.f_1151[(iVar22 + iVar14)] == 51) || Global_574E.f_1151[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
										Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										if (Global_574E.f_13DB[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_574E.f_13DB[iVar69] == 2)
												{
													Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] = (Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] - Global_574E.f_13CC[iVar8]);
												}
												iVar69 = (iVar69 + 4294967295);
											}
										}
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_150(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_148(26), func_145(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_150(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_150(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_148(27), func_145(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 5 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										func_130(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_129(bVar32);
										}
										unk_0x070005E852D4C0E9(&(Global_574E.f_49[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar28)] == 2 || Global_574E.f_1151[(iVar22 + iVar28)] == 51) || Global_574E.f_1151[(iVar22 + iVar28)] == 61)
											{
												if (func_150(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_150(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_139(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_574E.f_13DB[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_148(Global_574E.f_1151[(iVar22 + iVar28)]), func_145(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_148(Global_574E.f_1151[(iVar22 + iVar28)]), func_145(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_574E.f_13DB[iVar8] == 2)
										{
											unk_0xE0026608C37C7C41(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xE0026608C37C7C41((fVar34 + fVar40), fVar35, 0);
											if (func_128() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_130(0, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0xD3539A877EC25E86(0f, (0.35f * 0.7f));
													unk_0x7178F32F6742C936(255, 255, 255, 150);
													unk_0xC1032CAC14DE468A((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0);
													unk_0x070005E852D4C0E9(&cVar75);
													unk_0x6D99DF8263D35CE5((Global_574E.f_166A + iVar30));
													unk_0xE0026608C37C7C41((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar14)] != 2 && Global_574E.f_1151[(iVar22 + iVar14)] != 51) && Global_574E.f_1151[(iVar22 + iVar14)] != 61)
											{
												if (func_150(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_150(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_139(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_574E.f_1151[(iVar22 + iVar14)] == 30)
															{
																unk_0x539E86AE011A8B38(func_148(Global_574E.f_1151[(iVar22 + iVar14)]), func_145(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (Global_574B + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_574E.f_13DB[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_148(Global_574E.f_1151[(iVar22 + iVar14)]), func_145(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_148(Global_574E.f_1151[(iVar22 + iVar14)]), func_145(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_130(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0, 0, 0);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_129(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[iVar20]);
										fVar41 = unk_0x79E367314AFBB5CA(1);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_150(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_148(26), func_145(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_150(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_150(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_148(27), func_145(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_130(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0, 0, 0);
										func_127((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_F4E[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_130(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0, 0, 0);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_129(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x21994591120B91F0(Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
										fVar41 = unk_0x79E367314AFBB5CA(1);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_150(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_574E.f_13DB[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_148(26), func_145(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_150(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_150(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_148(27), func_145(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_130(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0, 0, 0);
									func_126((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_150(Global_574E.f_1151[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_574E.f_1661)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_574E.f_13DB[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_574E.f_13DB[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
											Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
											fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
										}
										if (bVar52)
										{
											if (func_150(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_574E.f_13DB[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_139(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_148(26), func_145(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_150(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_150(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_139(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_148(27), func_145(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_150(Global_574E.f_1151[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_139(Global_574E.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_148(Global_574E.f_1151[iVar22]), func_145(Global_574E.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_125(Global_574E.f_1151[iVar22])), (fVar37 * func_125(Global_574E.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_574E.f_13C0[iVar8] == 5)
						{
							if (Global_574E.f_13CC[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							if (Global_574E.f_13D3[iVar8])
							{
								if (func_150(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_574E.f_1F66[iVar9] = iVar6;
						Global_574E.f_166C = iVar6;
						iVar9++;
						if (Global_574E.f_14EC[iVar6])
						{
							iVar13++;
						}
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_574E.f_1671[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_574E.f_1660)
					{
						Global_574E.f_156D[iVar6] = 1;
						if (Global_574E.f_146B[iVar6])
						{
							if (bVar32)
							{
								Global_574E.f_1666 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_574E.f_1666 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_574E.f_1660)
			{
				Global_574E.f_1662 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_574E.f_1665 = iVar11;
				Global_574E.f_1663 = iVar10;
				Global_574E.f_1660 = 1;
			}
		}
		if (!Global_574E.f_1661)
		{
			Global_574E.f_1664 = iVar9;
			Global_574E.f_1661 = 1;
		}
		iVar5++;
	}
	Global_574E.f_16F4 = fVar49;
	Global_574E.f_16F6 = unk_0x1C0640BA9A7327B3();
	unk_0xD668DA5CA4A1D2C8(Global_574E.f_16F4);
	if (!Global_574E.f_20BE)
	{
		func_118(0);
	}
	Global_574E.f_20BE = 0;
	if (bParam2)
	{
		unk_0x3584F71E5CA29322(10);
	}
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(8);
	if (bParam0)
	{
		func_117(1);
	}
	unk_0xD59EF13BB60323B9();
}

void func_117(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_118(int iParam0)
{
	if (func_124())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 1)
	{
		if (func_123(0))
		{
			func_119(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 2);
	}
}

void func_119(int iParam0)
{
	if (func_124())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_122())
		{
			func_121(1, 1);
		}
		else
		{
			func_121(0, 0);
		}
	}
	if (Global_4C1E.f_1 == 10 || Global_4C1E.f_1 == 9)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 16);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(false);
	}
	Global_5145 = 5;
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 30);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 30);
	}
	if (!func_120())
	{
		Global_4C1E.f_1 = 3;
	}
}

int func_120()
{
	if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_121(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_123(0))
		{
			Global_4CD0 = 1;
			if (bParam1)
			{
				unk_0x1CFAC524932A967E(&Global_4BDF);
			}
			Global_4BD6 = { Global_4BE8[Global_4BE7 /*3*/] };
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
	else if (Global_4CD0 == 1)
	{
		Global_4CD0 = 0;
		Global_4BD6 = { Global_4BEF[Global_4BE7 /*3*/] };
		if (bParam1)
		{
			unk_0x39F06A2B18483C68(Global_4BDF);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
}

bool func_122()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 5);
}

int func_123(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_4C1E.f_1 > 3)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_4C1E.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_124()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 19);
}

float func_125(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_126(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_127(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_128()
{
	return unk_0xC146D5FBD23C6954(2532323046);
}

void func_129(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
}

void func_130(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_131(Global_574E.f_177B[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA402F6C87C08815C(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x7178F32F6742C936(155, 155, 155, 255);
		}
		else
		{
			unk_0x7178F32F6742C936(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x7178F32F6742C936(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x7178F32F6742C936(155, 155, 155, 255);
	}
	else
	{
		unk_0x7178F32F6742C936(155, 155, 155, 255);
	}
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0xEEF67251E263A87F(1);
	if (bParam5)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(4);
	}
	else if (bParam6)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(6);
	}
	else
	{
		unk_0x7BBAC160090910C3(0);
	}
	unk_0xF1F881BAAAFB43B1(0f, 1f);
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_131(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_59(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_152(bParam4, bParam8))
	{
		return;
	}
	if (func_137())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_135(unk_0xD803B885F5E47A62(), 0))
		{
			return;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xDAC65F45B0B2D176() == 0 || unk_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_574E.f_12A1 != 0)
	{
		if (unk_0xB8E3620B82AD47D7(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (Global_574E.f_13A2[iVar1] != 361)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xF59058FCB716F903(2, Global_574E.f_13A2[iVar1], true), 64);
				}
				else if (Global_574E.f_13AF[iVar1] != 32)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xE32F7AC5E6DF304A(2, Global_574E.f_13AF[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_574E.f_12A2 = 0;
		}
		if (!Global_574E.f_12A2)
		{
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF((1f - (Global_574E.f_13D9 / 100f)));
			unk_0x7E60D21B163E9D56();
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
			}
			iVar1 = 0;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar1 /*4*/])) != unk_0x12AB0310C2281427("PREV"))
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar1);
					func_134(&(Global_574E.f_12A3[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_134(&(Global_574E.f_12A3[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_574E.f_1395[iVar1] == 4294967295)
					{
						func_133(&(Global_574E.f_1364[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_574E.f_1395[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x164431059FF80580(iVar3, 70);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(iVar3);
						}
						unk_0x779B34565F4D71B1();
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (Global_574E.f_13A2[iVar1] != 361 && unk_0xEAE0D21A50E6C7F4(Global_574E.f_13BC, iVar1))
						{
							unk_0x1200CC973A2399C8(true);
							unk_0x3CAEA85DA607305E(Global_574E.f_13A2[iVar1]);
						}
						else
						{
							unk_0x1200CC973A2399C8(false);
							unk_0x3CAEA85DA607305E(361);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar1++;
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_10)) != unk_0x12AB0310C2281427(""))
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(Global_574E.f_12A1);
				func_134(&Global_412185);
				if (Global_412185.f_14 == 4294967295)
				{
					func_133(&(Global_412185.f_10));
				}
				else
				{
					iVar4 = Global_574E.f_1395[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
					if (bParam5)
					{
						unk_0x164431059FF80580(iVar4, 70);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iVar4);
					}
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(80);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_574E.f_13DA)
			{
				unk_0x3CAEA85DA607305E(1);
			}
			else
			{
				unk_0x3CAEA85DA607305E(0);
			}
			unk_0x7E60D21B163E9D56();
			Global_574E.f_12A2 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_574E.f_12A1)
		{
			if (Global_574E.f_1395[iVar1] != 4294967295)
			{
				if (iParam2 > 0)
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x3CAEA85DA607305E(iVar1);
					unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x164431059FF80580(iParam2, 70);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iParam2);
					}
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar1++;
		}
		if (Global_412185.f_14 != 4294967295)
		{
			if (iParam2 > 0)
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
				if (bParam5)
				{
					unk_0x164431059FF80580(iParam2, 70);
				}
				else
				{
					unk_0x6D99DF8263D35CE5(iParam2);
				}
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
			}
		}
		unk_0xD02CE72B4B66DC29(76, 66);
		unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_574E.f_20E1)
			{
				unk_0x744B56EE9DE7B57F(15, 0f, -0.0375f);
				Global_574E.f_20E1 = 1;
			}
		}
		else if (Global_574E.f_20E1)
		{
			unk_0xA5E3ADAAA4CD5D6C(15);
			Global_574E.f_20E1 = 0;
		}
		unk_0xD59EF13BB60323B9();
		if (Global_574E.f_13BF)
		{
			unk_0xD02CE72B4B66DC29(82, 66);
			unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			unk_0xEF45C43067063F18(Global_574E.f_161C[iVar0 /*10*/], Global_574E.f_13BD, Global_574E.f_13BE, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			unk_0x6567AE843FADBA94(Global_574E.f_161C[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_133(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_134(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_135(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_136(4294967295, 0) == 8;
	}
	else
	{
		bVar0 = Global_184507[iParam0 /*876*/].f_D3 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_78();
	}
	if (Global_140859[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407E3[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_137()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 3)
	{
		return 1;
	}
	if (func_138())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x1CFAC524932A967E(&vVar0);
		if (Global_4BE7 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_138()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_139(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA402F6C87C08815C(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0xA402F6C87C08815C(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_140(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x7BBAC160090910C3(0);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x4B9228CE1CF0DACA(2);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1(fParam0, ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_141(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_142(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_143();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(1);
}

void func_143()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_574E.f_20C8)
	{
		iVar0 = Global_574E.f_20C4;
		iVar1 = Global_574E.f_20C5;
		iVar2 = Global_574E.f_20C6;
		iVar3 = Global_574E.f_20C7;
	}
	unk_0x7BBAC160090910C3(0);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1((Global_574B + 0.0046875f), ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0);
	unk_0x7635737DA2E9BC79(0, 0, 0, 0, 0);
	unk_0xD1C3D76A894DB0A6(0, 0, 0, 0, 0);
}

void func_144(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_145(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 2807284209)
		{
			Var2 = { func_147(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_146(&uVar1);
			}
		}
		else
		{
			return func_146(&(Global_574E.f_1B75[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_146(var uParam0)
{
	return uParam0;
}

struct<13> func_147(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

char* func_148(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 2807284209)
		{
			Var1 = { func_147(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_146(&uVar0);
		}
		else
		{
			return func_146(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_149()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_148(iParam0), 64);
	StringCopy(&cVar1, func_145(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0);
			if (func_149())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_149())
			{
				fVar4 = 1f;
			}
			if (unk_0x8A22C4C08282BF26(joaat("director_mode")) > 0)
			{
				unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
		}
		vVar7 = { unk_0xDE43A059FBFFF38A(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_151(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_151(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && unk_0x12AB0310C2281427(&(Global_574E.f_1B75[29 /*16*/])) == 2807284209)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x0D71AFA59EF5104F() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_574D)
			{
				*fParam4 = (*fParam4 * (Global_574D / *fParam3));
				*fParam3 = Global_574D;
			}
		}
		return 1;
	}
	return 0;
}

float func_151(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_152(bool bParam0, bool bParam1)
{
	if (Global_2537E2.f_766.f_2BD != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_154(8, 4294967295) && func_153() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_12C52) || Global_574E.f_20E0) || unk_0xE57E602827E07C9D()) || Global_181EC.f_589)
	{
		return 0;
	}
	return 1;
}

int func_153()
{
	return Global_14082C;
}

bool func_154(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				return Global_150392.f_CB[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_418, iParam0);
}

char* func_155(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		default:
	}
	return "";
}

int func_156()
{
	if (unk_0x91E3F625EF57450D(2))
	{
		if (Global_4121D1 > 4294967295)
		{
			if (unk_0xBFC0798A6E3417F9(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_157(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0x91E3F625EF57450D(2))
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x5D80F91A16C40CDE();
	}
	if (Global_4121D1 == 4294967290)
	{
		unk_0xC74D8A1D346B9CCB(4);
		if (iParam0 && unk_0x06F8112AA79C53D9(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4121D1 = 4294967295;
			return 0;
		}
	}
	if (((Global_4121D1 > 4294967295 || Global_4121D1 == 4294967293) || Global_4121D1 == 4294967294) || unk_0xFA0AEC0FCBF8703B())
	{
		unk_0xC74D8A1D346B9CCB(1);
		return 0;
	}
	if (Global_4121D1 == 4294967295 && iParam0)
	{
		if (unk_0x06F8112AA79C53D9(2, 237))
		{
			unk_0xC74D8A1D346B9CCB(4);
			Global_4121D1 = 4294967290;
			return 1;
		}
		else
		{
			unk_0xC74D8A1D346B9CCB(3);
			return 0;
		}
	}
	unk_0xC74D8A1D346B9CCB(1);
	return 0;
}

void func_158(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = 4294967295;
	if (!unk_0x91E3F625EF57450D(2))
	{
		Global_4121D1 = 4294967295;
		return;
	}
	unk_0xFE29D579C98536B2(1);
	fVar0 = Global_574B;
	fVar2 = (fVar0 + Global_574D);
	fVar3 = Global_574E.f_1662;
	fVar1 = (Global_574E.f_1662 - (IntToFloat(Global_574E.f_1664) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_574E.f_1664 < 1)
	{
		fVar1 = (Global_574E.f_1662 - 0.034722f);
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xE428D1DCE17602B4(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xE428D1DCE17602B4(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xD59EF13BB60323B9();
	func_160();
	if (Global_4121D1 == 4294967290)
	{
		return;
	}
	Global_4121D1 = 4294967295;
	fVar7 = Global_4121CB;
	fVar8 = Global_4121CC;
	if (Global_574E.f_1665 > Global_574E.f_1664)
	{
		if (((Global_4121CB >= fVar0 && Global_4121CB <= fVar2) && Global_4121CC >= fVar3) && Global_4121CC < (fVar3 + fVar6))
		{
			Global_4121D1 = 4294967294;
			if (bParam3)
			{
				func_159(0);
			}
			return;
		}
		if (((Global_4121CB >= fVar0 && Global_4121CB <= fVar2) && Global_4121CC >= (fVar3 + fVar6)) && Global_4121CC < (fVar3 + 0.034722f))
		{
			Global_4121D1 = 4294967293;
			if (bParam3)
			{
				func_159(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_574E.f_1665 == 4294967295)
		{
			Global_4121D1 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_574E.f_1664);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xD02CE72B4B66DC29(76, 84);
				unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
				func_144(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_574D, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0xD59EF13BB60323B9();
			}
		}
		Global_4121D1 = Global_574E.f_1F66[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4121D1 = 4294967292;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4121D1 = 4294967291;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4121D1 = 4294967292;
		return;
	}
	Global_4121D1 = 4294967295;
}

void func_159(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_574B;
	fVar1 = Global_574E.f_1662;
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	if (Global_4121D1 == 4294967294)
	{
		func_144(fVar0, fVar1, Global_574D, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4121D1 == 4294967293)
	{
		func_144(fVar0, (fVar1 + fVar2), Global_574D, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xD59EF13BB60323B9();
}

void func_160()
{
	Global_4121CD = Global_4121CB;
	Global_4121CE = Global_4121CC;
	Global_4121CB = unk_0x4B7163B4D6E4A3C2(2, 239);
	Global_4121CC = unk_0x4B7163B4D6E4A3C2(2, 240);
	Global_4121CF = (Global_4121CB - Global_4121CD);
	Global_4121D0 = (Global_4121CC - Global_4121CE);
}

void func_161(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0xF59058FCB716F903(2, iParam0, true);
	if (Global_574E.f_12A1 >= 12)
	{
		StringCopy(&Global_412185, sVar0, 64);
		StringCopy(&(Global_412185.f_10), sParam1, 16);
		Global_412185.f_14 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0x5D96D8530B3D0904(&(Global_574E.f_13BC), Global_574E.f_12A1);
	}
	StringCopy(&(Global_574E.f_12A3[Global_574E.f_12A1 /*16*/]), sVar0, 64);
	StringCopy(&(Global_574E.f_1364[Global_574E.f_12A1 /*4*/]), sParam1, 16);
	Global_574E.f_1395[Global_574E.f_12A1] = iParam2;
	Global_574E.f_13A2[Global_574E.f_12A1] = iParam0;
	Global_574E.f_13AF[Global_574E.f_12A1] = 32;
	Global_574E.f_12A1++;
}

void func_162(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_574E.f_1252), sParam0, 24);
	Global_574E.f_129A = 0;
	Global_574E.f_129B = 0;
	Global_574E.f_129C = 0;
	Global_574E.f_129D = 0;
	Global_574E.f_129E = iParam1;
	Global_574E.f_129F = unk_0x1C0640BA9A7327B3();
	Global_574E.f_12A0 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_574E.f_1258[iVar0] = 0;
		iVar0++;
	}
}

void func_163(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_574E.f_166B = uParam0;
	Global_574E.f_16F2 = iParam2;
	if (Global_574E.f_166B < Global_574E.f_166A)
	{
		Global_574E.f_166A = Global_574E.f_166B;
	}
	else if ((Global_574E.f_1661 && Global_574E.f_166B > Global_574E.f_166C) || (!Global_574E.f_1661 && Global_574E.f_166B >= (Global_574E.f_166A + Global_574E.f_1469)))
	{
		iVar0 = Global_574E.f_166A;
		while (iVar0 <= Global_574E.f_166B)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_574E.f_13E1[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_574E.f_1469 && Global_574E.f_166A < 128)
		{
			Global_574E.f_166A++;
			iVar1 = 0;
			iVar0 = Global_574E.f_166A;
			while (iVar0 <= Global_574E.f_166B)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_574E.f_13E1[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_574E.f_1660 = 0;
	Global_574E.f_1661 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_574E.f_1252), "", 24);
		StringCopy(&(Global_412185.f_15), "", 16);
	}
}

void func_164(int iParam0)
{
	Global_574E.f_166A = iParam0;
}

void func_165(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_574E.f_1466 >= 256)
	{
		return;
	}
	if (Global_574E.f_166F >= 4)
	{
		return;
	}
	if (Global_574E.f_1670 != 1)
	{
		return;
	}
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		return;
	}
	Global_574E.f_F4E[Global_574E.f_1466] = uParam0;
	Global_574E.f_1466++;
	Global_574E.f_84C[Global_574E.f_166E /*5*/][Global_574E.f_166F] = 2;
	Global_574E.f_166F++;
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		fVar0 = func_167();
		if (Global_574E.f_13D3[Global_574E.f_1463] && Global_574E.f_166F == Global_574E.f_166D)
		{
			func_150(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_574E.f_13CC[(Global_574E.f_1463 - 1)])
		{
			Global_574E.f_13CC[(Global_574E.f_1463 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_574E.f_166F >= Global_574E.f_166D)
		{
			fVar3 = func_166();
			if (fVar3 > Global_574E.f_1671[Global_574E.f_1462])
			{
				Global_574E.f_1671[Global_574E.f_1462] = fVar3;
			}
		}
	}
}

float func_166()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_574E.f_1151[((Global_574E.f_1468 - iVar1) + iVar0)] != 0)
		{
			if (func_150(Global_574E.f_1151[((Global_574E.f_1468 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x9153358B38685E6E(0.35f, 0))
	{
		return fVar2;
	}
	return unk_0x9153358B38685E6E(0.35f, 0);
}

float func_167()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 1)
		{
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 8)
		{
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_130(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0)
	{
		unk_0xBBA442527B4BB1A6(&(Global_574E.f_49[Global_574E.f_166E /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0)
			{
				unk_0x6B012227B3921E18(&(Global_574E.f_49[(Global_574E.f_166E + iVar8) /*6*/]));
			}
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0)
			{
				unk_0x6B012227B3921E18(&(Global_574E.f_49[(Global_574E.f_166E + iVar8) /*6*/]));
			}
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 2)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0)
			{
				unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[((Global_574E.f_1466 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 3)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0)
			{
				unk_0x21994591120B91F0(Global_574E.f_104F[((Global_574E.f_1467 - iVar4) + iVar10)], Global_574E.f_10D0[((Global_574E.f_1467 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 5)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 6)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0)
			{
				unk_0x6B012227B3921E18(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 7)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 9)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0)
	{
		fVar0 = unk_0x79E367314AFBB5CA(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_574E.f_1151[((Global_574E.f_1468 - iVar5) + iVar7)] != 0)
		{
			func_150(Global_574E.f_1151[((Global_574E.f_1468 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_169(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_574E.f_1462 > iParam0)
	{
		return;
	}
	if (Global_574E.f_1462 >= 128)
	{
		return;
	}
	if (Global_574E.f_1464 >= 256)
	{
		return;
	}
	if (Global_574E.f_166F < Global_574E.f_166D)
	{
		return;
	}
	if (Global_574E.f_1462 != iParam0)
	{
		Global_574E.f_1462 = iParam0;
		Global_574E.f_1463 = 0;
	}
	iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
	if (iVar0 != 1)
	{
		while (Global_574E.f_1463 < 4 && iVar0 != 1)
		{
			Global_574E.f_1463++;
			iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]), sParam1, 24);
	if (!unk_0xEA6BC48857E0AC4C(sParam1) && !unk_0xEF07223F00EBE9C9(sParam1))
	{
	}
	Global_574E.f_64A[Global_574E.f_1464] = bParam3;
	Global_574E.f_74B[Global_574E.f_1464] = iParam4;
	Global_574E.f_1464++;
	if (!bParam3)
	{
		func_172(Global_574E.f_1462, 1);
	}
	else
	{
		func_172(Global_574E.f_1462, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_171(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
		if (Global_574E.f_13D3[Global_574E.f_1463])
		{
			func_150(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_574E.f_13CC[Global_574E.f_1463])
		{
			Global_574E.f_13CC[Global_574E.f_1463] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_170(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
			if (fVar4 > Global_574E.f_1671[iParam0])
			{
				Global_574E.f_1671[iParam0] = fVar4;
			}
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_574E.f_13E1[iParam0]), Global_574E.f_1463);
	Global_574E.f_1463++;
	Global_574E.f_1670 = 1;
	Global_574E.f_166E = (Global_574E.f_1464 - 1);
	Global_574E.f_166F = 0;
	Global_574E.f_166D = iParam2;
}

float func_170(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0);
}

float func_171(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_130(0, 1, 0, 0, 0, 0, 0);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

void func_172(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_173()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x336D6E75517F233F(0.325f, 0.3f);
	}
}

void func_174(int iParam0, char* sParam1, char* sParam2)
{
	Global_574E = iParam0;
	func_175(29, sParam1, sParam2);
}

void func_175(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_574E.f_1784[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_574E.f_1B75[iParam0 /*16*/]), sParam2, 64);
}

void func_176(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_574E.f_1), sParam0, 16);
	Global_574E.f_44 = 0;
	Global_574E.f_45 = 0;
	Global_574E.f_46 = 0;
	Global_574E.f_47 = 0;
	Global_574E.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_574E.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13DB[0] = iParam0;
	Global_574E.f_13DB[1] = iParam1;
	Global_574E.f_13DB[2] = iParam2;
	Global_574E.f_13DB[3] = iParam3;
	Global_574E.f_13DB[4] = iParam4;
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13C0[0] = iParam0;
	Global_574E.f_13C0[1] = iParam1;
	Global_574E.f_13C0[2] = iParam2;
	Global_574E.f_13C0[3] = iParam3;
	Global_574E.f_13C0[4] = iParam4;
	Global_574E.f_146A = 0;
	if (iParam0 != 0)
	{
		Global_574E.f_146A++;
	}
	if (iParam1 != 0)
	{
		Global_574E.f_146A++;
	}
	if (iParam2 != 0)
	{
		Global_574E.f_146A++;
	}
	if (iParam3 != 0)
	{
		Global_574E.f_146A++;
	}
	if (iParam4 != 0)
	{
		Global_574E.f_146A++;
	}
}

void func_179(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_574E.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_574E.f_84C[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_258E24[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_574E.f_F4E[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_574E.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_574E.f_1151[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_574E.f_13E1[iVar0] = 0;
		Global_574E.f_146B[iVar0] = 0;
		Global_574E.f_14EC[iVar0] = 0;
		Global_574E.f_16F7[iVar0] = 0f;
		Global_574E.f_156D[iVar0] = 0;
		Global_574E.f_1671[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_574E.f_13C0[iVar0] = 0;
		Global_574E.f_13CC[iVar0] = 0f;
		Global_574E.f_13C6[iVar0] = -1f;
		Global_574E.f_13D3[iVar0] = 0;
		Global_574E.f_13DB[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_574E.f_1364[iVar0 /*4*/]), "", 16);
		Global_574E.f_1395[iVar0] = 4294967295;
		Global_574E.f_13A2[iVar0] = 361;
		Global_574E.f_13AF[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_574E.f_1784[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_574E.f_1B75[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_574E.f_64A[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_412185.f_10), "", 16);
	Global_412185.f_14 = 4294967295;
	Global_574E = 0;
	Global_574E.f_1462 = 0;
	Global_574E.f_1463 = 0;
	Global_574E.f_1464 = 0;
	Global_574E.f_1466 = 0;
	Global_574E.f_1467 = 0;
	Global_574E.f_1468 = 0;
	Global_574E.f_1465 = 0;
	Global_574E.f_16F2 = 0;
	Global_574E.f_177E = 0;
	Global_574E.f_166B = 0;
	Global_574E.f_166A = 0;
	Global_574E.f_166C = 0;
	StringCopy(&(Global_574E.f_1252), "", 24);
	Global_574E.f_129A = 0;
	Global_574E.f_129B = 0;
	Global_574E.f_129C = 0;
	Global_574E.f_129D = 0;
	Global_574E.f_129E = 0;
	Global_574E.f_129F = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_574E.f_1258[iVar0] = 0;
		iVar0++;
	}
	Global_574E.f_12A0 = 0;
	StringCopy(&(Global_412185.f_15), "", 16);
	Global_412185.f_3D = 0;
	Global_412185.f_3E = 0;
	Global_412185.f_3F = 0;
	Global_412185.f_40 = 0;
	Global_412185.f_41 = 0;
	Global_412185.f_42 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_412185.f_19[iVar0] = 0;
		iVar0++;
	}
	Global_412185.f_43 = 0;
	StringCopy(&(Global_574E.f_1), "", 16);
	Global_574E.f_13D2 = 0f;
	Global_574E.f_44 = 0;
	Global_574E.f_45 = 0;
	Global_574E.f_46 = 0;
	Global_574E.f_47 = 0;
	Global_574E.f_48 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_574E.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_574E.f_1670 = 0;
	Global_574E.f_166F = 0;
	Global_574E.f_166D = 0;
	Global_574E.f_166E = 0;
	Global_574E.f_12A1 = 0;
	Global_574E.f_12A2 = 0;
	Global_574E.f_1469 = 10;
	Global_574E.f_146A = 0;
	Global_574E.f_16F4 = 0f;
	Global_574E.f_16F5 = 0f;
	Global_574E.f_1660 = 0;
	Global_574E.f_1661 = 0;
	Global_574E.f_1662 = 0f;
	Global_574E.f_1663 = 0;
	Global_574E.f_1665 = 0;
	Global_574E.f_1664 = 0;
	Global_574E.f_1666 = 0;
	Global_574E.f_1667 = 0;
	Global_574E.f_1668 = 0;
	Global_574E.f_1669 = 0;
	Global_574E.f_20DD = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_574E.f_1778[iVar0] = 4294967295;
		Global_574E.f_177B[iVar0] = 4294967295;
		iVar0++;
	}
	Global_574E.f_13D9 = 0f;
	Global_574E.f_13BC = 0;
	Global_574E.f_13DA = 0;
	iVar0 = 0;
	while (iVar0 < Global_574E.f_177F)
	{
		Global_574E.f_177F[iVar0] = 0;
		iVar0++;
	}
	Global_574E.f_20C8 = 0;
	Global_574E.f_20C3 = 0;
	Global_574E.f_20CD = 0;
	Global_574E.f_20D2 = 0;
	Global_574E.f_20D7 = 0;
	Global_574E.f_20D9 = 0;
	Global_574E.f_20DF = 0;
	Global_574B = 0.05f;
	Global_574C = 0.05f;
	Global_574D = 0.225f;
	fVar2 = unk_0x33D480CCE15C991A(0);
	if (bParam0)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_574D = 0.225f;
	}
}

int func_180(int iParam0, vector3 vParam1, float fParam2, var uParam3, var uParam4, var uParam5)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0x8A5E176FF719A014(vParam1, fParam2, 2.40015f, -7.75244f, 1.0825f) };
			*uParam4 = -4.2069f;
			uParam4->f_1 = -0.027f;
			uParam4->f_2 = (fParam2 + 22.8175f);
			*uParam5 = 32.8283f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x8A5E176FF719A014(vParam1, fParam2, 3.80296f, -5.391f, 1.213f) };
			*uParam4 = -9.3866f;
			uParam4->f_1 = -0.0011f;
			uParam4->f_2 = (fParam2 + 46.9866f);
			*uParam5 = 35f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0x8A5E176FF719A014(vParam1, fParam2, 2.97963f, -3.39452f, 0.934498f) };
			*uParam4 = -8.483f;
			uParam4->f_1 = 0.0149f;
			uParam4->f_2 = (fParam2 + 53.5519f);
			*uParam5 = 35f;
			break;
		
		case 4294967294:
			*uParam3 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam4 = { -3.6091f, 0.022f, -8.6461f };
			*uParam5 = 35f;
			break;
	}
	return 1;
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_7927, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7927, iParam0);
	}
}

int func_182(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_183(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_123(0))
	{
		return 0;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_A4A7[iVar0 /*32*/] == 1 && Global_A4A7[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_A4A7[iVar0 /*32*/].f_1D)
				{
					return 0;
				}
			}
			Global_A4A7[iVar0 /*32*/].f_5 = 1;
			Global_A4A7[iVar0 /*32*/].f_1D = 1;
			return 1;
		}
		else
		{
			if (Global_A4A7[iVar0 /*32*/] == 0)
			{
			}
			if (Global_A4A7[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_183(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_A4A7[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool func_184(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_183(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == 4294967295)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_A4A7[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	bVar1 = false;
	if (!Global_A4A7[iVar0 /*32*/].f_C)
	{
		unk_0xCECE25C7ECD44603(&(Global_A4A7[iVar0 /*32*/].f_8));
		unk_0x6B012227B3921E18(&Global_A56A);
		bVar1 = unk_0xE3789B9938DCEAE8(0);
	}
	else
	{
		unk_0xCECE25C7ECD44603(&(Global_A4A7[iVar0 /*32*/].f_8));
		unk_0x6B012227B3921E18(&Global_A56A);
		if (Global_A4A7[iVar0 /*32*/].f_1E)
		{
			unk_0xD06AC7C87A34A6AD(&(Global_A4A7[iVar0 /*32*/].f_D));
		}
		else
		{
			unk_0x6B012227B3921E18(&(Global_A4A7[iVar0 /*32*/].f_D));
		}
		bVar1 = unk_0xE3789B9938DCEAE8(0);
	}
	return bVar1;
}

void func_185(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = func_183(*uParam0);
	if (iVar0 == 4294967295)
	{
		*uParam0 = 4294967295;
		return;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/].f_7 = 1;
			*uParam0 = 4294967295;
			return;
		}
	}
	*uParam0 = 4294967295;
}

void func_186(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == 4294967295)
		{
			func_185(uParam0);
		}
		return;
	}
	if (!*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/] = 1;
			Global_A4A7[iVar0 /*32*/].f_1 = Global_A570;
			Global_A570++;
			Global_A4A7[iVar0 /*32*/].f_4 = 0;
			Global_A4A7[iVar0 /*32*/].f_1D = 0;
			Global_A4A7[iVar0 /*32*/].f_5 = 0;
			Global_A4A7[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_A4A7[iVar0 /*32*/].f_8), sParam2, 16);
			Global_A4A7[iVar0 /*32*/].f_6 = iParam3;
			Global_A4A7[iVar0 /*32*/].f_1F = unk_0x0D0A574C76D769AC();
			Global_A4A7[iVar0 /*32*/].f_7 = 0;
			Global_A4A7[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_A4A7[iVar0 /*32*/].f_C = 1;
				StringCopy(&(Global_A4A7[iVar0 /*32*/].f_D), sParam4, 64);
				Global_A4A7[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0;
				Global_A4A7[iVar0 /*32*/].f_1E = 0;
			}
			*uParam0 = Global_A4A7[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_187(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, 4294967295);
}

int func_188()
{
	if (Global_1B416.f_4FB5.f_91 > 0)
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { unk_0x8A5E176FF719A014(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 4294967294:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

int func_190(float fParam0)
{
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (fParam0 <= 0f)
		{
			return unk_0x7D563EECE9515353(unk_0x16F2683693E537C9()) > 0;
		}
		else
		{
			return unk_0xFCF127F1F950630C(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), fParam0) > 0;
		}
	}
	return 0;
}

void func_191()
{
	if (iLocal_108)
	{
		if (iLocal_107 == 3)
		{
			iLocal_107 = 0;
		}
		iLocal_108 = 0;
	}
	switch (iLocal_107)
	{
		case 0:
			unk_0x4A4806F9D471E491(iLocal_98[iLocal_111], true, 0);
			iLocal_109 = unk_0xE9744DB7B8CA6965(unk_0x8A5E176FF719A014(Local_66.f_1E6.f_6, Local_66.f_1E6.f_9.f_2, -0.07f, 0.06f, -0.02f), Local_66.f_1E6.f_9, 2);
			if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2))
			{
				unk_0x915804B434753CBD(Local_66.f_2, iLocal_109, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xE14EC663EED44AD5(iLocal_98[iLocal_111], iLocal_109, "purchase_chocbar", "mp_am_hold_up", 1000f, 8f, 1, 1148846080);
				iLocal_107 = 1;
			}
			break;
		
		case 1:
			if (unk_0x69DF961355195C3C(iLocal_109))
			{
				if (unk_0xA45992A6CE82FB43(iLocal_109) == 1f)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2))
					{
						unk_0xA3BF0AA5A2608191(Local_66.f_2);
					}
					if (unk_0xC844350D5D58C99A(iLocal_98[iLocal_111]))
					{
						unk_0xEF190091B5B9F5EB(iLocal_98[iLocal_111], 1);
					}
					iLocal_110 = unk_0x1C0640BA9A7327B3();
					iLocal_107 = 2;
				}
			}
			else
			{
				iLocal_110 = unk_0x1C0640BA9A7327B3();
				iLocal_107 = 2;
			}
			break;
		
		case 2:
			if ((unk_0x1C0640BA9A7327B3() - iLocal_110) > 1000)
			{
				if (unk_0xC844350D5D58C99A(iLocal_98[iLocal_111]))
				{
					unk_0x4A4806F9D471E491(iLocal_98[iLocal_111], false, 0);
					unk_0xA47B46945FF6DE74(iLocal_98[iLocal_111], func_60(iLocal_111), 1, false, 0, 1);
					unk_0xEF190091B5B9F5EB(iLocal_98[iLocal_111], 0);
				}
				iLocal_107 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

void func_192()
{
	if (iLocal_52 != 6)
	{
		switch (iLocal_52)
		{
			case 1:
				if (func_197())
				{
					iLocal_52 = 2;
				}
				else
				{
					iLocal_52 = 6;
				}
				break;
			
			case 2:
				if (!unk_0x437347B10A200C4B(Local_66.f_56, 0))
				{
					func_196();
					func_12(&(Local_66.f_56.f_7));
					iLocal_52 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x437347B10A200C4B(Local_66.f_56, 0))
				{
					if ((func_195(&(Local_66.f_56.f_7), 5f) || func_193(Local_66.f_2, &(Local_66.f_1C3))) || unk_0x869EFD0BC0868856(Local_66.f_56))
					{
						iLocal_52 = 4;
					}
				}
				break;
			
			case 4:
				if (!unk_0x437347B10A200C4B(Local_66.f_56, 0))
				{
					iLocal_51 = 31;
					unk_0xF3268524E9BE6D6E(Local_66.f_56, Local_66, 500f, 4294967295, 0, 0);
					iLocal_52 = 5;
				}
				func_40(&(Local_66.f_56.f_7));
				break;
			}
	}
}

int func_193(int iParam0, var uParam1)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 7))
		{
			if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, unk_0x16F2683693E537C9(), 90f))
				{
					if (func_194(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x1C0640BA9A7327B3();
						}
						else if ((unk_0x1C0640BA9A7327B3() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_194(int iParam0, bool bParam1)
{
	return func_23(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), iParam0, bParam1);
}

int func_195(var uParam0, float fParam1)
{
	if (func_15(uParam0))
	{
		if (func_9(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_196()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_56, 0))
	{
		unk_0xDD353D0E9C789D0E(&(Local_66.f_56.f_6));
		unk_0xF96A174EE26D7588(0, Local_66, 0);
		unk_0x0C8C0C840C2D1AD2(0, Local_66, 2500, 0, 2);
		unk_0xF9B5DB58254657F1(0, 2500, 0, 4294967295, 0);
		unk_0x75ABDC5F81978924(Local_66.f_56.f_6);
		unk_0x78ADC381772E3D54(Local_66.f_56, Local_66.f_56.f_6);
	}
}

int func_197()
{
	unk_0xE51E576EA6B739AC(Local_66.f_56.f_2, Local_66.f_56.f_5, 1, 0, &(Local_66.f_56), 0, 1, 4294967295);
	if (!unk_0x437347B10A200C4B(Local_66.f_56, 0))
	{
		if (unk_0x134B62B726CEC8E6(Local_66.f_56) == Local_66.f_56.f_1)
		{
			unk_0x73270B3C9CC833FD(Local_66.f_56, true, 0);
			unk_0x11AD11297DC58CC7(Local_66.f_56, true);
			return 1;
		}
	}
	return 0;
}

void func_198()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	
	if (iLocal_101 > 1 && iLocal_101 < 5)
	{
		if (func_219())
		{
			unk_0x53491B90E4FD0E56(500);
			iLocal_101 = 6;
		}
	}
	switch (iLocal_101)
	{
		case 0:
			if ((((unk_0x437347B10A200C4B(Local_66.f_2, 0) || !func_218()) || func_1(Local_66.f_1D6, 128)) && iLocal_55 < 3) && unk_0xA4F4A1E4DDB4728B(Local_66.f_2.f_1, 1.5f) == 0)
			{
				if ((func_45() && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0)) && !func_217(0))
				{
					func_216("SHR_ROBTILL", 4294967295);
					Local_66.f_1D5 = 4294967295;
					func_186(&(Local_66.f_1D5), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 1);
					unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 0);
					iLocal_101 = 1;
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2))
			{
			}
			else if (iLocal_55 == 7)
			{
			}
			else if (unk_0xA4F4A1E4DDB4728B(Local_66.f_2.f_1, 1.5f) > 0)
			{
			}
			break;
		
		case 1:
			if (func_45())
			{
				if (func_182(Local_66.f_1D5, 1))
				{
					if (!unk_0x437347B10A200C4B(Local_66, 0))
					{
						if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
						{
							iVar3 = unk_0x728870EB733D12A1();
							if (unk_0x3D1053F9EB43B7AD(iVar3, Local_66.f_D6, Local_66.f_D9, Local_66.f_DC, 0, true, 0))
							{
								unk_0xA47B46945FF6DE74(iVar3, unk_0x8A5E176FF719A014(Local_66.f_1E6.f_6, Local_66.f_1E6.f_9.f_2, -0.7961f, -1.562f, -0.4215f), 0, false, 0, 1);
							}
						}
					}
					unk_0x5D96D8530B3D0904(&(Local_66.f_A2.f_12), 1);
					if (func_28("SHR_ROBTILL"))
					{
						unk_0xA37A90C62806D848(1);
					}
					func_185(&(Local_66.f_1D5));
					bVar2 = unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iLocal_105, 1);
					if (bVar2)
					{
						unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
					}
					unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), false, 0);
					unk_0x7800CEC090C01D4D(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 15f);
					unk_0x2D23BE319D971F4C(0);
					func_119(0);
					func_210(1, 1, 1, 0, 0, 0);
					unk_0xBFE31971E49FA500(false);
					func_181(23, 1);
					unk_0x679C321F8CAA2CFA(Local_66.f_2.f_1, 3f, 0);
					iLocal_101 = 2;
				}
				else if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
				{
					if (Local_66.f_1D5 <= 0)
					{
						Local_66.f_1D5 = 4294967295;
						func_186(&(Local_66.f_1D5), 4, "SHR_ROBTILL", 0, 0, 0, 0);
					}
				}
			}
			else
			{
				if (func_28("SHR_ROBTILL"))
				{
					unk_0xA37A90C62806D848(1);
				}
				func_185(&(Local_66.f_1D5));
				iLocal_101 = 0;
			}
			break;
		
		case 2:
			if (unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				unk_0x20641932E5104B25(Local_66.f_2, false, 0);
				unk_0x1E9649458B15960F(Local_66.f_2, true);
			}
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0x8A5E176FF719A014(Local_66.f_2.f_1, Local_66.f_2.f_4, -0.75f, 0f, -1f), 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), Local_66.f_2.f_4);
				unk_0xF82EA857DA10E0CD(&iLocal_78);
				unk_0xDD353D0E9C789D0E(&iLocal_78);
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0, 0, 0, 0);
				unk_0xC6EB89C59F2AF6B8(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, 4294967295, 0, 0, 0, 0, 0);
				unk_0x75ABDC5F81978924(iLocal_78);
				unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), iLocal_78);
				if (!unk_0x9F4FE516EAACCFC5(iLocal_102))
				{
					iLocal_102 = unk_0xAE06CCC36C49929C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0xC5940439E4EB9A33(iLocal_102, unk_0x16F2683693E537C9(), -0.1878f, 3.0635f, 0.68f, 1);
				unk_0x1305278186D1C53E(iLocal_102, unk_0x16F2683693E537C9(), -0.0129f, 0.0927f, 0.3008f, 1);
				unk_0x5818C8D5303DCCF8(iLocal_102, 35f);
				unk_0x91F5B0244AAE6222(iLocal_102, "HAND_SHAKE", 0.1f);
				unk_0xE3BB8E05FCEB3FBE(iLocal_102, true);
				unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
			}
			iLocal_101 = 3;
			break;
		
		case 3:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (!unk_0x9F4FE516EAACCFC5(iLocal_103))
				{
					iLocal_103 = unk_0xAE06CCC36C49929C(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				unk_0xC5940439E4EB9A33(iLocal_103, unk_0x16F2683693E537C9(), -1.0346f, 2.9183f, 0.68f, 1);
				unk_0x1305278186D1C53E(iLocal_103, unk_0x16F2683693E537C9(), -0.0574f, 0.1074f, 0.3008f, 1);
				unk_0x5818C8D5303DCCF8(iLocal_103, 35f);
				unk_0x91F5B0244AAE6222(iLocal_103, "HAND_SHAKE", 0.3f);
				unk_0xF1E4C781086FABC1(iLocal_103, iLocal_102, 8000, 1, 1);
			}
			iLocal_106 = unk_0x1C0640BA9A7327B3();
			iLocal_101 = 4;
			break;
		
		case 4:
			if (((unk_0x1C0640BA9A7327B3() - iLocal_106) > 4800 || (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))) || unk_0xA4F4A1E4DDB4728B(Local_66.f_2.f_1, 3f) > 0)
			{
				iLocal_101 = 5;
			}
			else if ((unk_0x1C0640BA9A7327B3() - iLocal_106) > 4500)
			{
				if (func_209())
				{
					if (!iLocal_95)
					{
						unk_0x82A772610883F395("CamPushInNeutral", 0, 0);
						unk_0x4D7F4CC43D4D0DE3(4294967295, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_95 = 1;
					}
				}
			}
			else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "oddjobs@shop_robbery@rob_till", "loop", 3))
			{
				fVar0 = unk_0x8CA9406E01C7EE58(unk_0x16F2683693E537C9(), "oddjobs@shop_robbery@rob_till", "loop");
				if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
				{
					if (!iLocal_104)
					{
						iVar1 = unk_0x09AC81E49EA267F7(10, 51);
						func_208(func_105(), 1, iVar1, 0, 0);
						iLocal_81 = (iLocal_81 + iVar1);
						Local_66.f_1C.f_6 = unk_0xD68EA767274B7444();
						unk_0x4D7F4CC43D4D0DE3(4294967295, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
						iLocal_104 = 1;
					}
				}
				else if (iLocal_104)
				{
					iLocal_104 = 0;
				}
			}
			break;
		
		case 5:
			if (unk_0x437347B10A200C4B(Local_66.f_2, 0))
			{
				unk_0x20641932E5104B25(Local_66.f_2, true, 0);
				unk_0x1E9649458B15960F(Local_66.f_2, false);
			}
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 1065353216);
			if (unk_0x9F4FE516EAACCFC5(iLocal_102))
			{
				unk_0x9A8DDC7C522F5BF5(iLocal_102, 0);
			}
			if (unk_0x9F4FE516EAACCFC5(iLocal_103))
			{
				unk_0x9A8DDC7C522F5BF5(iLocal_103, 0);
			}
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			if (!unk_0x437347B10A200C4B(unk_0x728870EB733D12A1(), 0))
			{
				iVar3 = unk_0x728870EB733D12A1();
				vVar4 = { unk_0x68F4C0EC296D3901(iVar3, true) };
			}
			if (iLocal_105 != joaat("weapon_unarmed") && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iLocal_105, true);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_66.f_A2.f_12, 1))
			{
				unk_0x0674E58A79778E99(&(Local_66.f_A2.f_12), 1);
			}
			func_207(1, 1, 1);
			func_16(1, 0);
			iLocal_60 = 12;
			func_204();
			func_199(297, 0, 0);
			Local_66.f_1D4 = 1;
			iLocal_101 = 7;
			break;
		
		case 6:
			if (unk_0x757EF87A33649210())
			{
				unk_0xE3BB8E05FCEB3FBE(iLocal_103, false);
				unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
				}
				if (iLocal_81 < 15)
				{
					iVar1 = unk_0x09AC81E49EA267F7(25, 65);
					func_208(func_105(), 1, iVar1, 0, 0);
					iLocal_81 = (iLocal_81 + iVar1);
				}
				unk_0x82E51BCA72537B6C(500);
				iLocal_101 = 5;
			}
			break;
	}
}

void func_199(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_79((891 + iParam0), 1, 4294967295, 1);
	}
	bVar0 = true;
	if (Global_1B416.f_27CD[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 11 || Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_1B416.f_27CD[iParam0 /*12*/].f_5 = 1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = iParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_200();
	}
}

void func_200()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_1B30E = 0;
	Global_1B30F = 0;
	Global_1B310 = 0;
	Global_1B311 = 0;
	Global_1B312 = 0;
	Global_1B313 = 0;
	Global_1B314 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_1B416.f_27CD.f_F0D;
	Global_1B416.f_27CD.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_1B416.f_27CD[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_1B416.f_27CD[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_1B30E++;
					fVar1 = (fVar1 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_1B30F++;
					fVar2 = (fVar2 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_1B310++;
					fVar3 = (fVar3 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_1B311++;
					fVar4 = (fVar4 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_1B312++;
					fVar5 = (fVar5 + (Global_1B416.f_27CD[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_1B313++;
					fVar6 = (fVar6 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_1B314++;
					fVar7 = (fVar7 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_1B2FD > 0)
	{
		if (Global_1B30E == Global_1B2FD)
		{
			fVar1 = 55f;
		}
	}
	if (Global_1B2FE > 0)
	{
		if (Global_1B30F == Global_1B2FE)
		{
			fVar2 = 10f;
		}
	}
	if (Global_1B2FF > 0)
	{
		if (Global_1B310 == Global_1B2FF)
		{
			fVar3 = 0f;
		}
	}
	if (Global_1B300 > 0)
	{
		if (Global_1B311 == Global_1B300)
		{
			fVar4 = 10f;
		}
	}
	if (Global_1B301 > 0)
	{
		if (((Global_1B312 == Global_1B301 || (Global_1B301 * 10 / Global_1B312) < 41) || Global_1B312 > Global_1B304) || Global_1B312 == Global_1B304)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F10, 14))
			{
				if (Global_1B312 == Global_1B301)
				{
					unk_0xE7B2B6A56C007908(joaat("num_rndevents_completed"), Global_1B301, 0);
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_1B302 > 0)
	{
		if (Global_1B313 == Global_1B302)
		{
			fVar6 = 15f;
		}
	}
	if (Global_1B303 > 0)
	{
		if (Global_1B314 == Global_1B303)
		{
			fVar7 = 5f;
		}
	}
	Global_1B416.f_27CD.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_1B312 > Global_1B304 || Global_1B312 == Global_1B304)
	{
		iVar9 = Global_1B304;
	}
	else
	{
		iVar9 = Global_1B312;
	}
	unk_0xCDC520E5E48E63D9(joaat("num_missions_completed"), Global_1B30E, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_missions_available"), Global_1B2FD, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_completed"), Global_1B30F, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_available"), Global_1B2FE, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_completed"), Global_1B310, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_available"), Global_1B2FF, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_completed"), Global_1B311, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_available"), Global_1B300, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_available"), Global_1B304, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_completed"), (Global_1B314 + Global_1B313), 1);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_available"), (Global_1B303 + Global_1B302), 1);
	Global_1B315 = (Global_1B30E * 100 / Global_1B2FD);
	Global_1B317 = ((Global_1B310 + Global_1B30F) * 100 / (Global_1B2FF + Global_1B2FE));
	Global_1B316 = ((Global_1B311 + iVar9) * 100 / (Global_1B300 + Global_1B304));
	Global_1B318 = ((Global_1B313 + Global_1B314) * 100 / (Global_1B302 + Global_1B303));
	unk_0x11F69E56D7B5F3C7(joaat("total_progress_made"), Global_1B416.f_27CD.f_F0D, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_story_missions"), Global_1B315, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_ambient_missions"), Global_1B316, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_oddjobs"), Global_1B317, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D))
	{
		func_100(13, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_203() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0;
				}
				if (!Global_F048)
				{
					func_201();
				}
			}
		}
	}
}

int func_201()
{
	if (func_202(0))
	{
		return 0;
	}
	if (Global_181DF.f_8)
	{
		if (Global_181DF.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_181DF.f_A > 1)
	{
		return 0;
	}
	Global_181DF.f_A++;
	return 1;
}

bool func_202(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0);
}

int func_203()
{
	return Global_7830;
}

void func_204()
{
	if (!iLocal_87)
	{
		Global_1B416.f_4E3E[iLocal_80]++;
		Global_1B416.f_4E3E.f_3E[iLocal_80] = Local_66.f_1;
		if (func_105() == 0)
		{
			func_205(5);
		}
		iLocal_87 = 1;
	}
}

void func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_206(&Global_173EC, 1);
			break;
		
		case 1:
			func_206(&Global_173EE, 3);
			break;
		
		case 2:
			func_206(&Global_173F2, 1);
			break;
		
		case 3:
			func_206(&Global_173F4, 1);
			break;
		
		case 4:
			func_206(&Global_173F6, 1);
			break;
		
		case 5:
			func_206(&Global_173F8, 1);
			break;
		
		case 6:
			func_206(&Global_173FA, 1);
			break;
		
		case 7:
			func_206(&Global_173FC, 2);
			break;
		
		case 8:
			func_206(&Global_173FF, 1);
			break;
		
		case 9:
			func_206(&Global_17401, 1);
			break;
	}
}

void func_206(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = unk_0x1C0640BA9A7327B3();
		}
		iVar0++;
	}
}

void func_207(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
	}
	unk_0x2D23BE319D971F4C(1);
	func_210(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		unk_0xBFE31971E49FA500(true);
		unk_0x8BCB70EB440DED83(true);
	}
	func_181(23, 0);
}

void func_208(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_104(iParam0) == 3)
	{
		return;
	}
	if (func_104(iParam0) == 4)
	{
		return;
	}
	func_70(func_104(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x6FB46C25CCB7E6D5(iVar1, &iVar0, 4294967295);
		iVar0 = (iVar0 + iParam2);
		unk_0xCDC520E5E48E63D9(iVar1, iVar0, 1);
	}
}

int func_209()
{
	if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_210(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_215(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_120())
			{
				Global_4C1E.f_1 = 3;
			}
			Global_5145 = 5;
		}
		func_214(1, iParam3, iParam2, 0);
		Global_F04E = 1;
		Global_12064 = 1;
		Global_12B4C = 1;
	}
	else
	{
		func_215(0);
		unk_0x17D339215F817B98();
		Global_F04E = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_214(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_212(unk_0xD803B885F5E47A62())) && !func_135(unk_0xD803B885F5E47A62(), 0)) && !func_211()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_212(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_12B4C = 0;
	}
}

bool func_211()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 14);
}

int func_212(int iParam0)
{
	if (func_135(iParam0, 0))
	{
		return 1;
	}
	if (func_213())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 2))
	{
		return 1;
	}
	return 0;
}

bool func_213()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 3);
}

int func_214(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_215(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 13);
	}
}

void func_216(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_217(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_4C1E.f_1 > 3)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 14))
			{
				if (Global_4C1D == 1)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_4C1D == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_4C1E.f_1 > 3)
	{
		if (Global_4C1D == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_218()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
	{
		if (unk_0x4D570FEF9D230CE7(Local_66.f_2) == Local_66.f_B9)
		{
			return 1;
		}
		else if (unk_0x3D1053F9EB43B7AD(Local_66.f_2, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x3D1053F9EB43B7AD(Local_66.f_2, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x3D1053F9EB43B7AD(Local_66.f_2, Local_66.f_CF, Local_66.f_D2, Local_66.f_D5, 0, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_C7 != -1f)
		{
			if (unk_0x3D1053F9EB43B7AD(Local_66.f_2, Local_66.f_C1, Local_66.f_C4, Local_66.f_C7, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_219()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (unk_0xBFC0798A6E3417F9(0, 18) || unk_0xBFC0798A6E3417F9(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_220()
{
	int iVar0;
	
	func_237();
	func_234();
	if (unk_0xC844350D5D58C99A(Local_66))
	{
		unk_0xCAE036C45E7FC720(Local_66, &iVar0, 1);
		if ((iLocal_58 == 1 && iLocal_99 == 2) && ((unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()) || func_233()) || func_232()))
		{
			unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
			func_16(1, 0);
			iLocal_58 = 9;
		}
	}
	else
	{
		return;
	}
	func_229();
	if (!bLocal_86)
	{
		func_228();
	}
	switch (iLocal_58)
	{
		case 1:
			if (func_303())
			{
				if ((func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1) || (func_193(Local_66.f_2, &(Local_66.f_1C3)) && !unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))) && iVar0 != joaat("weapon_unarmed"))
				{
					func_227();
					unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_58 = 5;
					unk_0x5D96D8530B3D0904(&Global_17183, 3);
					func_226();
				}
				if (func_1(Local_66.f_1D6, 8))
				{
					if (!func_1(Local_66.f_1D6, 32))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2) && func_1(Local_66.f_1D6, 4))
						{
							unk_0xC6EB89C59F2AF6B8(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_225();
						func_294(&(Local_66.f_1D6), 32);
					}
				}
			}
			break;
		
		case 2:
			if (func_303())
			{
				if (func_193(Local_66.f_2, &(Local_66.f_1C3)) && iVar0 != joaat("weapon_unarmed"))
				{
					unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
					Local_66.f_2.f_B = 1;
					func_204();
					iLocal_51 = 12;
					iLocal_50 = 3;
					iLocal_60 = 11;
					iLocal_58 = 3;
					unk_0x5D96D8530B3D0904(&Global_17183, 3);
					func_226();
				}
				else if (func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1))
				{
					unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
					func_225();
					func_227();
					iLocal_51 = 12;
					iLocal_58 = 5;
					func_226();
				}
				else if (func_1(Local_66.f_1D6, 8))
				{
					if (!func_1(Local_66.f_1D6, 32))
					{
						if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2) && func_1(Local_66.f_1D6, 4))
						{
							unk_0xC6EB89C59F2AF6B8(Local_66.f_2, "misscommon@response", "numbnuts", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
						}
						iLocal_51 = 36;
						func_16(1, 0);
						func_225();
						func_294(&(Local_66.f_1D6), 32);
					}
				}
			}
			break;
		
		case 3:
			if (iLocal_51 >= 13)
			{
				if (!unk_0x65636D4556D82155(unk_0x16F2683693E537C9()) && !unk_0x65636D4556D82155(Local_66.f_2))
				{
					iLocal_51 = 15;
					iLocal_56 = 5;
					iLocal_60 = 12;
					iLocal_58 = 4;
				}
			}
			break;
		
		case 4:
			if (func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1) && func_303())
			{
				func_227();
				if (Local_66.f_2.f_C)
				{
					iLocal_51 = 22;
				}
				else
				{
					iLocal_51 = 16;
				}
				iLocal_58 = 5;
			}
			break;
		
		case 5:
			if (Local_66.f_1E6 >= 0)
			{
				if (func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1) && func_303())
				{
					if (unk_0x69DF961355195C3C(Local_66.f_1E6) && !Local_66.f_1D3)
					{
						iLocal_51 = 33;
						Local_66.f_1D3 = 1;
					}
				}
			}
			if (iLocal_53 >= 1 && iLocal_53 < 7)
			{
				unk_0xB2AF08FECE4571EC(unk_0xA30EC016B12C03E4());
				if (func_223(Local_66.f_2, 0, 1, 0, 1, 1) || !unk_0x69DF961355195C3C(Local_66.f_1E6))
				{
					iLocal_58 = 6;
				}
			}
			break;
		
		case 6:
			if (iLocal_54 != 3 && iLocal_54 != 4)
			{
				iLocal_54 = 4;
			}
			unk_0x0674E58A79778E99(&Global_17183, 3);
			if (!unk_0x869EFD0BC0868856(Local_66.f_2))
			{
				func_7();
				iLocal_58 = 0;
			}
			break;
		
		case 7:
			if (!unk_0x869EFD0BC0868856(Local_66.f_2))
			{
				func_222();
				iLocal_51 = 36;
				func_16(1, 0);
				func_294(&(Local_66.f_1D6), 32);
				iLocal_56 = 7;
				iLocal_58 = 8;
			}
			break;
		
		case 8:
			if (((func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1) || func_193(Local_66.f_2, &(Local_66.f_1C3))) && func_303()) && iVar0 != joaat("weapon_unarmed"))
			{
				if (!Local_66.f_2.f_C)
				{
					iLocal_51 = 10;
					iLocal_58 = 9;
				}
				else
				{
					func_19();
					iLocal_51 = 11;
					iLocal_58 = 0;
				}
				Local_66.f_2.f_D = 0;
			}
			break;
		
		case 9:
			func_7();
			iLocal_58 = 12;
			break;
		
		case 10:
			if ((((func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1) || func_193(Local_66.f_2, &(Local_66.f_1C3))) && func_303()) && iVar0 != joaat("weapon_unarmed")) && !func_15(&(Local_66.f_1E0)))
			{
				func_12(&(Local_66.f_1E0));
				if (unk_0x869EFD0BC0868856(Local_66.f_2))
				{
					func_7();
				}
				iLocal_51 = 23;
			}
			else if (func_41(&(Local_66.f_1E0)) > 10f)
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2))
				{
					unk_0xF3268524E9BE6D6E(Local_66.f_2, unk_0x16F2683693E537C9(), 100f, 4294967295, 0, 0);
				}
				iLocal_58 = 12;
			}
			break;
		
		case 11:
			func_221();
			iLocal_58 = 12;
			break;
	}
}

void func_221()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
	{
		unk_0x11AD11297DC58CC7(Local_66.f_2, false);
	}
}

void func_222()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
	{
		unk_0x0C8C0C840C2D1AD2(Local_66.f_2, Local_66, 4294967295, 0, 2);
	}
}

int func_223(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = unk_0x7F6DC62EA9922664(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = unk_0x7F6DC62EA9922664(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x728870EB733D12A1();
		if (!unk_0x437347B10A200C4B(iVar1, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			if (unk_0x36646919F20EAFFC(iParam0))
			{
				if (unk_0x710D117BA581D7D2(iParam0) == unk_0x16F2683693E537C9())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
		{
			if (unk_0x5A91F08DF773C39D(iParam0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 10f, 10f, 10f, false, true, 0))
			{
				if (unk_0x1A069ED4E9BDE50A(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE9B814896D415EDD(unk_0x16F2683693E537C9()))
	{
		if (unk_0xC021B60D52071374(iParam0))
		{
			return 1;
		}
	}
	if (func_224(unk_0x16F2683693E537C9(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x869EFD0BC0868856(iParam0) && func_194(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x405E212DDE472467(iParam0, 0))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), unk_0x6937EA2286828455(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iParam0))
		{
			return 1;
		}
		if (!unk_0x437347B10A200C4B(iParam1, 0))
		{
			if (unk_0xB87D13D0C064E9D1(iParam1, unk_0x16F2683693E537C9(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_224(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xCAE036C45E7FC720(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x168558745A6AC21E(iParam0))
		{
			if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(iParam0, true), unk_0x68F4C0EC296D3901(iParam1, true)) < 2.5f)
			{
				if (unk_0x7069CC4DE1EA3FAA(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_225()
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && func_303())
	{
		iVar1 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, 4294967295);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((((uVar0[iVar2] != unk_0x16F2683693E537C9() && uVar0[iVar2] != Local_66.f_2) && !unk_0xEB6A8945D1AC98A1(uVar0[iVar2])) && !unk_0xAF6690C489CC6203(uVar0[iVar2])) && !unk_0x4734A6196B611C3B(uVar0[iVar2], 0))
			{
				unk_0x73270B3C9CC833FD(uVar0[iVar2], true, 1);
				unk_0xF3268524E9BE6D6E(uVar0[iVar2], unk_0x16F2683693E537C9(), 100f, 4294967295, 0, 0);
			}
			iVar2++;
		}
	}
}

void func_226()
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && func_303())
	{
		iVar1 = unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, 4294967295);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if ((uVar0[iVar2] != unk_0x16F2683693E537C9() && uVar0[iVar2] != Local_66.f_2) && !unk_0xAF6690C489CC6203(uVar0[iVar2]))
			{
				unk_0x73270B3C9CC833FD(uVar0[iVar2], true, 1);
				unk_0xF82EA857DA10E0CD(&iLocal_78);
				unk_0xDD353D0E9C789D0E(&iLocal_78);
				unk_0x8BE3D040D15AEA1D(0, 5000);
				unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 100f, 4294967295, 0, 0);
				unk_0x75ABDC5F81978924(iLocal_78);
				unk_0x78ADC381772E3D54(uVar0[iVar2], iLocal_78);
			}
			iVar2++;
		}
	}
}

void func_227()
{
	if (func_25(Local_66) == joaat("weapon_rpg"))
	{
		Local_66.f_1CA = 1;
	}
	else if (func_25(Local_66) == joaat("weapon_knife"))
	{
		Local_66.f_1CB = 1;
	}
	else if (((func_25(Local_66) == joaat("weapon_hammer") || func_25(Local_66) == joaat("weapon_crowbar")) || func_25(Local_66) == joaat("weapon_bat")) || func_25(Local_66) == joaat("weapon_bottle"))
	{
		Local_66.f_1CC = 1;
	}
	else if ((func_25(Local_66) == joaat("weapon_grenade") || func_25(Local_66) == joaat("weapon_smokegrenade")) || func_25(Local_66) == joaat("weapon_molotov"))
	{
		Local_66.f_1CD = 1;
	}
	else if (func_25(Local_66) == joaat("weapon_stickybomb"))
	{
		Local_66.f_1CE = 1;
	}
	iLocal_60 = 12;
	func_204();
	iLocal_59 = 2;
	iLocal_63 = 1;
	iLocal_62 = 6;
	Local_66.f_2.f_D = 0;
}

void func_228()
{
	if (iLocal_53 == 0)
	{
		if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
		{
			switch (iLocal_56)
			{
				case 1:
					iLocal_56 = 0;
					break;
				
				case 2:
					unk_0xC6EB89C59F2AF6B8(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_11, 8f, -2f, 4294967295, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 3:
					unk_0xC6EB89C59F2AF6B8(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_12, 8f, -4f, 4294967295, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 4:
					unk_0xC6EB89C59F2AF6B8(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_13, 8f, -2f, 4294967295, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 5:
					unk_0xC6EB89C59F2AF6B8(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_14, 8f, -2f, 4294967295, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				
				case 6:
					iLocal_56 = 0;
					break;
				
				case 7:
					unk_0xC6EB89C59F2AF6B8(Local_66.f_2, Local_66.f_2.f_F, Local_66.f_2.f_15, 8f, -2f, 4294967295, 0, 0, 0, 0, 0);
					iLocal_56 = 0;
					break;
				}
			}
	}
}

void func_229()
{
	switch (iLocal_57)
	{
		case 1:
			func_222();
			iLocal_57 = 2;
			break;
		
		case 2:
			if (iLocal_53 == 2)
			{
				func_231();
				Local_66.f_2.f_D = 0;
				iLocal_57 = 3;
			}
			if ((func_45() || func_44()) && !Local_66.f_2.f_D)
			{
				Local_66.f_2.f_D = 1;
			}
			if (!Local_66.f_2.f_E)
			{
				if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2) && unk_0xE9FDA1035CFEA94F(Local_66.f_2))
				{
					Local_66.f_2.f_E = 1;
				}
			}
			if ((Local_66.f_2.f_D && !unk_0xEB6A8945D1AC98A1(Local_66.f_2)) && !iLocal_58 == 12)
			{
				func_230();
			}
			break;
		
		case 3:
			if (iLocal_53 >= 7)
			{
				func_222();
				iLocal_57 = 4;
			}
			break;
	}
}

void func_230()
{
	if ((unk_0x1C0640BA9A7327B3() - Local_66.f_2.f_A) > 5000)
	{
		unk_0xF82EA857DA10E0CD(&(Local_66.f_2.f_18));
		unk_0xDD353D0E9C789D0E(&(Local_66.f_2.f_18));
		unk_0xF96A174EE26D7588(0, Local_66, 0);
		unk_0x0C8C0C840C2D1AD2(0, Local_66, 4294967295, 0, 2);
		unk_0x75ABDC5F81978924(Local_66.f_2.f_18);
		unk_0x78ADC381772E3D54(Local_66.f_2, Local_66.f_2.f_18);
		Local_66.f_2.f_A = unk_0x1C0640BA9A7327B3();
	}
}

void func_231()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
	{
		unk_0xBC43ED9FE28DB191(Local_66.f_2);
	}
}

int func_232()
{
	if (unk_0x53129655DBEDC6EA(Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 1))
	{
		return 1;
	}
	return 0;
}

int func_233()
{
	if (unk_0x6AD0ABEEDDABA1F8(4294967295, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0))
	{
		return 1;
	}
	return 0;
}

void func_234()
{
	if (!Local_66.f_1D1)
	{
		if (func_235())
		{
			if (!func_15(&(Local_66.f_1DA)))
			{
				func_12(&(Local_66.f_1DA));
			}
			else if (func_195(&(Local_66.f_1DA), 1f))
			{
				Local_66.f_1D1 = 1;
				iLocal_51 = 26;
				if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2))
				{
					unk_0xF3268524E9BE6D6E(Local_66.f_2, unk_0x16F2683693E537C9(), 100f, 4294967295, 0, 0);
					func_16(1, 0);
				}
			}
		}
		else if (func_15(&(Local_66.f_1DA)))
		{
			func_40(&(Local_66.f_1DA));
		}
	}
}

int func_235()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(Local_66, 0))
	{
		if (func_236())
		{
			unk_0xCAE036C45E7FC720(Local_66, &iVar0, 1);
			if (iVar0 == joaat("weapon_petrolcan"))
			{
				if (unk_0x168558745A6AC21E(Local_66))
				{
					if (unk_0x7069CC4DE1EA3FAA(Local_66.f_2, Local_66, 180f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_236()
{
	if (!unk_0x437347B10A200C4B(Local_66, 0))
	{
		if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_237()
{
	if (iLocal_58 != 12)
	{
		if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
		{
			if (unk_0xE9FDA1035CFEA94F(Local_66.f_2))
			{
				unk_0xF3268524E9BE6D6E(Local_66.f_2, Local_66, 100f, 4294967295, 0, 0);
				iLocal_58 = 12;
				iLocal_57 = 4;
				iLocal_56 = 8;
				iLocal_60 = 15;
				if (iLocal_63 == 1)
				{
					iLocal_63 = 2;
				}
				else
				{
					iLocal_63 = 3;
				}
				iLocal_62 = 13;
				iLocal_51 = 27;
				if (!Local_66.f_2.f_E)
				{
					Local_66.f_2.f_E = 1;
				}
			}
		}
	}
}

void func_238()
{
	switch (iLocal_55)
	{
		case 1:
			if (Local_66.f_1E6 >= 0)
			{
				if (unk_0x69DF961355195C3C(Local_66.f_1E6))
				{
					if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) > 0.876f)
					{
						iLocal_55 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (Local_66.f_1E6 >= 0)
			{
				if (unk_0x69DF961355195C3C(Local_66.f_1E6))
				{
					if (unk_0xA45992A6CE82FB43(Local_66.f_1E6) > 0.894f || (unk_0xA45992A6CE82FB43(Local_66.f_1E6) > 0.871f && SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(Local_66.f_1C, true), unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true)) < 1f))
					{
						iLocal_55 = 3;
					}
				}
			}
			break;
		
		case 3:
			func_16(1, 0);
			func_239(0);
			unk_0x3192B0FF798E63C8(Local_66.f_1C, false, 0);
			iLocal_55 = 5;
			break;
		
		case 4:
			func_16(1, 0);
			func_239(1);
			unk_0x4A4806F9D471E491(Local_66.f_1C, false, 0);
			iLocal_55 = 5;
			break;
		
		case 5:
			if (unk_0x50B5F6F3C29E9380(Local_66.f_1C, unk_0x16F2683693E537C9()))
			{
				func_208(func_105(), 1, iLocal_81, 0, 0);
				unk_0x4A4806F9D471E491(Local_66.f_1C, false, 0);
				if (unk_0xE4EDC4B0E92C078B(Local_66.f_1C.f_2))
				{
					unk_0x142CC44DB769B57E(&(Local_66.f_1C.f_2));
				}
				if (iLocal_60 != 12)
				{
					iLocal_60 = 12;
				}
				func_199(297, 0, 0);
				Local_66.f_1D4 = 1;
				Local_66.f_1C.f_6 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(4294967295, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
				func_13(&(Local_66.f_1C.f_F));
				iLocal_55 = 6;
			}
			else if (!unk_0x437347B10A200C4B(Local_66.f_1C, 0) && unk_0x4FC40AB0ECCE6E18(Local_66.f_1C))
			{
			}
			break;
		
		case 6:
			if (func_9(&(Local_66.f_1C.f_F)) > 2.5f)
			{
				if (unk_0xC844350D5D58C99A(Local_66.f_1C) && unk_0x50B5F6F3C29E9380(Local_66.f_1C, unk_0x16F2683693E537C9()))
				{
					unk_0x15AFB6CBDE990FB6(unk_0x16F2683693E537C9(), 1, true);
					unk_0xF690C84DADBB3551(&(Local_66.f_1C));
				}
				iLocal_55 = 7;
			}
			break;
	}
}

void func_239(bool bParam0)
{
	Local_66.f_1C.f_3 = 0;
	unk_0x5D96D8530B3D0904(&(Local_66.f_1C.f_3), 3);
	unk_0x5D96D8530B3D0904(&(Local_66.f_1C.f_3), 4);
	if (!bParam0)
	{
		iLocal_81 = unk_0x09AC81E49EA267F7(Local_66.f_1C.f_4, Local_66.f_1C.f_5);
		if (!unk_0xE4EDC4B0E92C078B(Local_66.f_1C.f_2))
		{
			Local_66.f_1C.f_2 = func_242(Local_66.f_1C);
			unk_0x61755AC17D8F538E(Local_66.f_1C.f_2, 2);
		}
		unk_0x568AB11F0ED52091(Local_66.f_1C, -0.2f, 1);
	}
	else
	{
		iLocal_81 = unk_0x09AC81E49EA267F7(50, Local_66.f_1C.f_4);
		Local_66.f_1C.f_1 = unk_0xA6FF0828D17CF374(joaat("pickup_money_variable"), unk_0x68F4C0EC296D3901(Local_66.f_1C, true), Local_66.f_1C.f_3, iLocal_81, 1, 0);
		if (!unk_0xE4EDC4B0E92C078B(Local_66.f_1C.f_2))
		{
			Local_66.f_1C.f_2 = func_240(Local_66.f_1C.f_1);
		}
	}
	Local_66.f_1C.f_E = 1;
}

int func_240(int iParam0)
{
	int iVar0;
	
	if (!unk_0x762119754C50557A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xA0556E31F2661AF4(iParam0);
	unk_0x516E63E474722206(iVar0, func_241(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	return iVar0;
}

float func_241(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_242(int iParam0)
{
	return func_243(iParam0, 1, 0);
}

int func_243(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_241(unk_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			unk_0x61755AC17D8F538E(iVar0, 2);
		}
	}
	else if (unk_0xEC560E589DF8370E(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_241(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_241(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_244()
{
	int iVar0;
	int iVar1;
	
	if (Local_66.f_1D0)
	{
		switch (iLocal_59)
		{
			case 2:
				if (func_1(Local_66.f_1D6, 4))
				{
					func_248();
					Local_66.f_2E.f_27 = unk_0x1C0640BA9A7327B3();
					iLocal_59 = 3;
				}
				break;
			
			case 3:
				if (unk_0x1C0640BA9A7327B3() - Local_66.f_2E.f_27) > unk_0x09AC81E49EA267F7(1000, 3000)
				{
					if (unk_0xDF1306B443CD3D15(Local_66.f_2E.f_4[0], 0))
					{
						unk_0xAA280AF45BCCCF21(Local_66.f_2E.f_4[0], true);
					}
					iLocal_59 = 4;
				}
				break;
			
			case 4:
				if (func_247() && func_246())
				{
					iLocal_59 = 5;
				}
				break;
			
			case 5:
				iLocal_51 = 24;
				func_16(1, 0);
				iLocal_59 = 6;
				break;
			
			case 6:
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if ((((unk_0xEB6A8945D1AC98A1(Local_66.f_2E[iVar0]) || (!unk_0x437347B10A200C4B(Local_66.f_2E[iVar0], 0) && unk_0x54648B774DB42A3A(Local_66.f_2E[iVar0], 0, 2))) || unk_0xEB6A8945D1AC98A1(Local_66.f_2)) || (!unk_0x437347B10A200C4B(Local_66.f_2, 0) && unk_0x54648B774DB42A3A(Local_66.f_2, 0, 2))) || func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1))
					{
						func_16(2, 0);
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2E[iVar1]))
							{
								unk_0x6C3AE6E278DB3D0E(Local_66.f_2E[iVar1], unk_0x16F2683693E537C9(), 0, 16);
								unk_0x11AD11297DC58CC7(Local_66.f_2E[iVar1], false);
							}
							iVar1++;
						}
						iLocal_59 = 0;
					}
					iVar0++;
				}
				break;
			
			case 7:
				func_245();
				iLocal_59 = 0;
				break;
			}
	}
}

void func_245()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x437347B10A200C4B(Local_66.f_2E[iVar0], 0))
		{
			unk_0x11AD11297DC58CC7(Local_66.f_2E[iVar0], false);
		}
		iVar0++;
	}
}

int func_246()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x437347B10A200C4B(Local_66.f_2E[iVar0], 0))
		{
			if (!unk_0x405E212DDE472467(Local_66.f_2E[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_247()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(Local_66, 0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!unk_0x437347B10A200C4B(Local_66.f_2E[iVar0], 0))
			{
				if (!unk_0x03068588A1FCED1A(Local_66.f_2E[iVar0]))
				{
					return 1;
				}
			}
			if (!unk_0x437347B10A200C4B(Local_66.f_2E.f_4[iVar0], 0))
			{
				if (!unk_0x03068588A1FCED1A(Local_66.f_2E.f_4[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_248()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_66.f_2E[iVar0] = unk_0x36F2404464202779(6, Local_66.f_2E.f_1A, Local_66.f_2E.f_8[iVar0 /*3*/], Local_66.f_2E.f_12[iVar0], 1, true);
		unk_0x73270B3C9CC833FD(Local_66.f_2E[iVar0], true, 0);
		unk_0x11AD11297DC58CC7(Local_66.f_2E[iVar0], true);
		Local_66.f_2E.f_4[iVar0] = unk_0x122AAB0B1D6F55AD(Local_66.f_2E.f_1B, Local_66.f_2E.f_8[iVar0 /*3*/], Local_66.f_2E.f_12[iVar0], true, true, false);
		unk_0x73270B3C9CC833FD(Local_66.f_2E.f_4[iVar0], true, 0);
		if (!(unk_0x437347B10A200C4B(Local_66.f_2E[iVar0], 0) && unk_0x437347B10A200C4B(Local_66.f_2E.f_4[iVar0], 0)))
		{
			unk_0xF821F915BC24D246(Local_66.f_2E[iVar0], Local_66.f_2E.f_4[iVar0], 4294967295);
			unk_0x262EF6C6306BEA6C(Local_66.f_2E[iVar0], joaat("weapon_pistol"), 99, false, true);
		}
		unk_0xDD353D0E9C789D0E(&(Local_66.f_2E.f_23[iVar0]));
		unk_0xE9362E4D600DD12A(0, Local_66.f_2E.f_4[iVar0], Local_66.f_2E.f_16, (unk_0xD890711CFD5AF100(Local_66.f_2E.f_4[iVar0]) - 8f), 1, Local_66.f_2E.f_1B, 786981, Local_66.f_2E.f_19, -1f);
		unk_0x75CDA8644CD3B5F5(0, 0, 0);
		unk_0x9BE7E7B6B488CC55(0, Local_66, 4294967295, 0);
		unk_0x75ABDC5F81978924(Local_66.f_2E.f_23[iVar0]);
		unk_0x78ADC381772E3D54(Local_66.f_2E[iVar0], Local_66.f_2E.f_23[iVar0]);
		iVar0++;
	}
}

void func_249()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(Local_66))
	{
		unk_0xCAE036C45E7FC720(Local_66, &iVar0, 1);
	}
	else
	{
		return;
	}
	iVar1 = 0;
	switch (iLocal_60)
	{
		case 1:
			iLocal_60 = 6;
			break;
		
		case 2:
			iLocal_51 = 2;
			iLocal_60 = 5;
			break;
		
		case 3:
			iLocal_51 = 3;
			iLocal_60 = 5;
			break;
		
		case 4:
			iLocal_51 = 4;
			iLocal_60 = 5;
			break;
		
		case 5:
			if (((((func_25(Local_66) != joaat("weapon_unarmed") && iVar0 != joaat("weapon_bat")) && iVar0 != joaat("weapon_hammer")) && iVar0 != joaat("weapon_crowbar")) && iVar0 != joaat("weapon_bottle")) && func_303())
			{
				iLocal_60 = 7;
			}
			break;
		
		case 6:
			if (func_25(Local_66) != joaat("weapon_unarmed") && func_303())
			{
				if (iVar0 == joaat("weapon_bat"))
				{
					iLocal_60 = 8;
				}
				else if ((iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer")) || iVar0 == joaat("weapon_bottle"))
				{
					iLocal_60 = 9;
				}
				else if (iVar0 == joaat("weapon_stickybomb"))
				{
					iLocal_60 = 10;
				}
				else if ((iVar0 != joaat("weapon_petrolcan") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_briefcase"))
				{
					iLocal_60 = 7;
				}
			}
			break;
		
		case 7:
			iLocal_51 = 5;
			iLocal_56 = 3;
			iLocal_60 = 15;
			break;
		
		case 8:
			iLocal_51 = 2;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 9:
			iLocal_51 = 3;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 10:
			iLocal_51 = 4;
			iLocal_56 = 2;
			iLocal_60 = 5;
			break;
		
		case 11:
			if (func_21(Local_66, Local_66.f_2, &(Local_66.f_1C3), 1))
			{
				func_227();
				iLocal_58 = 5;
			}
			break;
		
		case 12:
			if (!func_303())
			{
				if (!Local_66.f_1D0)
				{
					iLocal_62 = 9;
					iLocal_60 = 15;
				}
				else
				{
					iLocal_60 = 13;
				}
			}
			break;
		
		case 13:
			if (unk_0x9C66D99E63E8E24C(Local_66) < 0.1f && !func_251())
			{
				func_250();
				iLocal_60 = 14;
			}
			else if (func_251() && !func_303())
			{
				iLocal_60 = 14;
			}
			break;
		
		case 14:
			if (func_251() && !func_303())
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!unk_0xEB6A8945D1AC98A1(Local_66.f_2E[iVar1]))
					{
						unk_0x6C3AE6E278DB3D0E(Local_66.f_2E[iVar1], unk_0x16F2683693E537C9(), 0, 16);
						unk_0x11AD11297DC58CC7(Local_66.f_2E[iVar1], false);
					}
					iVar1++;
				}
				iLocal_62 = 9;
				iLocal_60 = 15;
			}
			break;
	}
}

void func_250()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x437347B10A200C4B(Local_66.f_2E[iVar0], 0))
		{
			if (!unk_0xCB4F5A8ACBF1053B(Local_66.f_2E[iVar0]))
			{
				unk_0xA3BF0AA5A2608191(Local_66.f_2E[iVar0]);
				unk_0xF27A0DCBF07DE99D(Local_66.f_2E[iVar0], Local_66);
			}
		}
		iVar0++;
	}
}

int func_251()
{
	if (!unk_0x437347B10A200C4B(Local_66, 0))
	{
		if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_2E.f_1C, Local_66.f_2E.f_1F, Local_66.f_2E.f_22, 0, true, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_252()
{
	switch (iLocal_63)
	{
		case 0:
			if (!iLocal_93)
			{
				if (func_253())
				{
					iLocal_51 = 9;
					iLocal_58 = 7;
					iLocal_50 = 3;
					iLocal_62 = 13;
					iLocal_63 = 3;
					iLocal_93 = 1;
				}
			}
			break;
		
		case 1:
			break;
	}
}

int func_253()
{
	int iVar0;
	vector3 vVar1;
	
	if (unk_0xC844350D5D58C99A(Local_66))
	{
		unk_0xCAE036C45E7FC720(Local_66, &iVar0, 1);
	}
	else
	{
		return 0;
	}
	if (!func_1(Local_66.f_1D6, 128))
	{
		if ((unk_0x869EFD0BC0868856(Local_66.f_2) || (unk_0xB87D13D0C064E9D1(Local_66.f_2, Local_66, 1) && iVar0 == joaat("weapon_unarmed"))) || func_254(Local_66.f_2, Local_66.f_2.f_1, 1) > 1.15f)
		{
			if (unk_0x869EFD0BC0868856(Local_66.f_2))
			{
			}
			if (unk_0xB87D13D0C064E9D1(Local_66.f_2, Local_66, 1) && iVar0 == joaat("weapon_unarmed"))
			{
			}
			if (func_254(Local_66.f_2, Local_66.f_2.f_1, 1) > 1.15f)
			{
			}
			if (!unk_0x5A91F08DF773C39D(Local_66.f_2, Local_66.f_2.f_1, 0.35f, 0.35f, 1f, false, true, 0))
			{
				vVar1 = { unk_0x68F4C0EC296D3901(Local_66.f_2, true) };
				vVar1 = { Local_66.f_2.f_1 };
			}
			return 1;
		}
	}
	return 0;
}

float func_254(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam2);
}

void func_255()
{
	switch (iLocal_61)
	{
		case 0:
			if (func_283())
			{
				iLocal_61 = 1;
			}
			break;
		
		case 1:
			func_276();
			iLocal_61 = 2;
			break;
		
		case 2:
			func_272();
			iLocal_61 = 3;
			break;
		
		case 3:
			if (func_267())
			{
				iLocal_61 = 4;
			}
			break;
		
		case 4:
			func_256();
			unk_0xB2AF08FECE4571EC(unk_0xD803B885F5E47A62());
			iLocal_65 = 1;
			break;
	}
}

void func_256()
{
	func_260();
	func_259();
	func_258();
	if (unk_0x31609A585163CBAC(Local_66.f_B9))
	{
		unk_0xAA738CBC845A2BD8(Local_66.f_2, Local_66.f_B9);
		unk_0xAA738CBC845A2BD8(Local_66.f_1C, Local_66.f_B9);
		if (!bLocal_86)
		{
			unk_0xAA738CBC845A2BD8(Local_66.f_60.f_1, Local_66.f_B9);
		}
	}
	func_257();
}

void func_257()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar0 = unk_0x09AC81E49EA267F7(1, 11);
	iVar1 = unk_0x09AC81E49EA267F7(1, 5);
	iVar2 = unk_0x09AC81E49EA267F7(1, 5);
	iVar3 = unk_0x09AC81E49EA267F7(1, 3);
	iVar4 = unk_0x09AC81E49EA267F7(1, 6);
	iVar5 = unk_0x09AC81E49EA267F7(1, 4);
	iVar6 = unk_0x09AC81E49EA267F7(1, 5);
	iVar7 = unk_0x09AC81E49EA267F7(1, 4);
	iVar8 = unk_0x09AC81E49EA267F7(1, 4);
	iVar9 = unk_0x09AC81E49EA267F7(1, 5);
	iVar10 = unk_0x09AC81E49EA267F7(1, 5);
	iVar11 = unk_0x09AC81E49EA267F7(1, 5);
	iVar12 = unk_0x09AC81E49EA267F7(1, 5);
	iVar13 = unk_0x09AC81E49EA267F7(1, 9);
	iVar14 = unk_0x09AC81E49EA267F7(1, 3);
	iVar15 = unk_0x09AC81E49EA267F7(1, 5);
	iVar16 = unk_0x09AC81E49EA267F7(1, 3);
	iVar17 = unk_0x09AC81E49EA267F7(1, 6);
	iVar18 = unk_0x09AC81E49EA267F7(1, 5);
	iVar19 = unk_0x09AC81E49EA267F7(1, 4);
	iVar20 = unk_0x09AC81E49EA267F7(1, 4);
	iVar21 = unk_0x09AC81E49EA267F7(1, 4);
	iVar22 = unk_0x09AC81E49EA267F7(1, 6);
	iVar23 = unk_0x09AC81E49EA267F7(1, 6);
	iVar24 = unk_0x09AC81E49EA267F7(1, 6);
	iVar25 = unk_0x09AC81E49EA267F7(1, 6);
	iVar26 = unk_0x09AC81E49EA267F7(1, 4);
	iVar27 = unk_0x09AC81E49EA267F7(1, 3);
	iVar28 = unk_0x09AC81E49EA267F7(1, 4);
	iVar29 = unk_0x09AC81E49EA267F7(1, 4);
	if (func_105() == 0)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_1";
				break;
			
			case 2:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_2";
				break;
			
			case 3:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_3";
				break;
			
			case 4:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_4";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_DD.f_DC = "OJSR_COPS_1";
				break;
			
			case 2:
				Local_66.f_DD.f_DC = "OJSR_COPS_2";
				break;
			
			case 3:
				Local_66.f_DD.f_DC = "OJSR_COPS_3";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_1";
				break;
			
			case 2:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_2";
				break;
		}
	}
	else if (func_105() == 1)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_5";
				break;
			
			case 2:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_6";
				break;
			
			case 3:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_7";
				break;
			
			case 4:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_8";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_DD.f_DC = "OJSR_COPS_5";
				break;
			
			case 2:
				Local_66.f_DD.f_DC = "OJSR_COPS_6";
				break;
			
			case 3:
				Local_66.f_DD.f_DC = "OJSR_COPS_7";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_3";
				break;
			
			case 2:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_4";
				break;
		}
	}
	else if (func_105() == 2)
	{
		switch (iVar12)
		{
			case 1:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_9";
				break;
			
			case 2:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_10";
				break;
			
			case 3:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_11";
				break;
			
			case 4:
				Local_66.f_DD.f_D2 = "OJSR_HOLDUP_12";
				break;
		}
		switch (iVar20)
		{
			case 1:
				Local_66.f_DD.f_DC = "OJSR_COPS_9";
				break;
			
			case 2:
				Local_66.f_DD.f_DC = "OJSR_COPS_10";
				break;
			
			case 3:
				Local_66.f_DD.f_DC = "OJSR_COPS_11";
				break;
		}
		switch (iVar27)
		{
			case 1:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_5";
				break;
			
			case 2:
				Local_66.f_DD.f_E3 = "OJSR_PLRHUR_6";
				break;
			}
	}
	switch (iVar0)
	{
		case 1:
			Local_66.f_DD.f_C6 = "OJSR_GREET_1";
			break;
		
		case 2:
			Local_66.f_DD.f_C6 = "OJSR_GREET_2";
			break;
		
		case 3:
			Local_66.f_DD.f_C6 = "OJSR_GREET_3";
			break;
		
		case 4:
			Local_66.f_DD.f_C6 = "OJSR_GREET_4";
			break;
		
		case 5:
			Local_66.f_DD.f_C6 = "OJSR_GREET_5";
			break;
		
		case 6:
			Local_66.f_DD.f_C6 = "OJSR_GREET_6";
			break;
		
		case 7:
			Local_66.f_DD.f_C6 = "OJSR_GREET_7";
			break;
		
		case 8:
			Local_66.f_DD.f_C6 = "OJSR_GREET_8";
			break;
		
		case 9:
			Local_66.f_DD.f_C6 = "OJSR_GREET_9";
			break;
		
		case 10:
			Local_66.f_DD.f_C6 = "OJSR_GREET_10";
			break;
	}
	switch (iVar1)
	{
		case 1:
			Local_66.f_DD.f_C7 = "OJSR_BATEQ_1";
			break;
		
		case 2:
			Local_66.f_DD.f_C7 = "OJSR_BATEQ_2";
			break;
		
		case 3:
			Local_66.f_DD.f_C7 = "OJSR_BATEQ_3";
			break;
		
		case 4:
			Local_66.f_DD.f_C7 = "OJSR_BATEQ_4";
			break;
	}
	switch (iVar2)
	{
		case 1:
			Local_66.f_DD.f_C8 = "OJSR_TOOLEQ_1";
			break;
		
		case 2:
			Local_66.f_DD.f_C8 = "OJSR_TOOLEQ_2";
			break;
		
		case 3:
			Local_66.f_DD.f_C8 = "OJSR_TOOLEQ_3";
			break;
		
		case 4:
			Local_66.f_DD.f_C8 = "OJSR_TOOLEQ_4";
			break;
	}
	switch (iVar3)
	{
		case 1:
			Local_66.f_DD.f_C9 = "OJSR_STICKEQ_1";
			break;
		
		case 2:
			Local_66.f_DD.f_C9 = "OJSR_STICKEQ_2";
			break;
	}
	switch (iVar4)
	{
		case 1:
			Local_66.f_DD.f_CA = "OJSR_WORRY_1";
			break;
		
		case 2:
			Local_66.f_DD.f_CA = "OJSR_WORRY_2";
			break;
		
		case 3:
			Local_66.f_DD.f_CA = "OJSR_WORRY_3";
			break;
		
		case 4:
			Local_66.f_DD.f_CA = "OJSR_WORRY_4";
			break;
		
		case 5:
			Local_66.f_DD.f_CA = "OJSR_WORRY_5";
			break;
	}
	switch (iVar5)
	{
		case 1:
			Local_66.f_DD.f_CB = "OJSR_SHOCK_1";
			break;
		
		case 2:
			Local_66.f_DD.f_CB = "OJSR_SHOCK_2";
			break;
		
		case 3:
			Local_66.f_DD.f_CB = "OJSR_SHOCK_3";
			break;
	}
	switch (iVar6)
	{
		case 1:
			Local_66.f_DD.f_CC = "OJSR_STUBBRN_1";
			break;
		
		case 2:
			Local_66.f_DD.f_CC = "OJSR_STUBBRN_2";
			break;
		
		case 3:
			Local_66.f_DD.f_CC = "OJSR_STUBBRN_3";
			break;
		
		case 4:
			Local_66.f_DD.f_CC = "OJSR_STUBBRN_4";
			break;
	}
	switch (iVar7)
	{
		case 1:
			Local_66.f_DD.f_CD = "OJSR_COUNTER_1";
			break;
		
		case 2:
			Local_66.f_DD.f_CD = "OJSR_COUNTER_2";
			break;
		
		case 3:
			Local_66.f_DD.f_CD = "OJSR_COUNTER_3";
			break;
	}
	switch (iVar8)
	{
		case 1:
			Local_66.f_DD.f_CE = "OJSR_BACKRM_1";
			break;
		
		case 2:
			Local_66.f_DD.f_CE = "OJSR_BACKRM_2";
			break;
		
		case 3:
			Local_66.f_DD.f_CE = "OJSR_BACKRM_3";
			break;
	}
	switch (iVar9)
	{
		case 1:
			Local_66.f_DD.f_CF = "OJSR_BUMP_1";
			break;
		
		case 2:
			Local_66.f_DD.f_CF = "OJSR_BUMP_2";
			break;
		
		case 3:
			Local_66.f_DD.f_CF = "OJSR_BUMP_3";
			break;
		
		case 4:
			Local_66.f_DD.f_CF = "OJSR_BUMP_4";
			break;
	}
	switch (iVar10)
	{
		case 1:
			Local_66.f_DD.f_D0 = "OJSR_BPAIM_1";
			break;
		
		case 2:
			Local_66.f_DD.f_D0 = "OJSR_BPAIM_2";
			break;
		
		case 3:
			Local_66.f_DD.f_D0 = "OJSR_BPAIM_3";
			break;
		
		case 4:
			Local_66.f_DD.f_D0 = "OJSR_BPAIM_4";
			break;
	}
	switch (iVar11)
	{
		case 1:
			Local_66.f_DD.f_D1 = "OJSR_BPAIMAG_1";
			break;
		
		case 2:
			Local_66.f_DD.f_D1 = "OJSR_BPAIMAG_2";
			break;
		
		case 3:
			Local_66.f_DD.f_D1 = "OJSR_BPAIMAG_3";
			break;
		
		case 4:
			Local_66.f_DD.f_D1 = "OJSR_BPAIMAG_4";
			break;
	}
	switch (iVar13)
	{
		case 1:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_1";
			break;
		
		case 2:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_2";
			break;
		
		case 3:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_3";
			break;
		
		case 4:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_4";
			break;
		
		case 5:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_5";
			break;
		
		case 6:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_6";
			break;
		
		case 7:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_7";
			break;
		
		case 8:
			Local_66.f_DD.f_D3 = "OJSR_SCARED_8";
			break;
	}
	switch (iVar14)
	{
		case 1:
			Local_66.f_DD.f_D5 = "OJSR_SCARED_9";
			break;
		
		case 2:
			Local_66.f_DD.f_D5 = "OJSR_SCARED_10";
			break;
	}
	switch (iVar15)
	{
		case 1:
			Local_66.f_DD.f_D8 = "OJSR_GRANAIM_1";
			break;
		
		case 2:
			Local_66.f_DD.f_D8 = "OJSR_GRANAIM_2";
			break;
		
		case 3:
			Local_66.f_DD.f_D8 = "OJSR_GRANAIM_3";
			break;
		
		case 4:
			Local_66.f_DD.f_D8 = "OJSR_GRANAIM_4";
			break;
	}
	switch (iVar16)
	{
		case 1:
			Local_66.f_DD.f_D9 = "OJSR_STICAIM_1";
			break;
		
		case 2:
			Local_66.f_DD.f_D9 = "OJSR_STICAIM_2";
			break;
	}
	switch (iVar17)
	{
		case 1:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_1";
			break;
		
		case 2:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_2";
			break;
		
		case 3:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_3";
			break;
		
		case 4:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_4";
			break;
		
		case 5:
			Local_66.f_DD.f_D4 = "OJSR_BRAVE_5";
			break;
	}
	switch (iVar18)
	{
		case 1:
			Local_66.f_DD.f_DA = "OJSR_MOREAIM_1";
			break;
		
		case 2:
			Local_66.f_DD.f_DA = "OJSR_MOREAIM_2";
			break;
		
		case 3:
			Local_66.f_DD.f_DA = "OJSR_MOREAIM_3";
			break;
		
		case 4:
			Local_66.f_DD.f_DA = "OJSR_MOREAIM_4";
			break;
	}
	switch (iVar19)
	{
		case 1:
			Local_66.f_DD.f_DB = "OJSR_SURNDER_1";
			break;
		
		case 2:
			Local_66.f_DD.f_DB = "OJSR_SURNDER_2";
			break;
		
		case 3:
			Local_66.f_DD.f_DB = "OJSR_SURNDER_3";
			break;
	}
	switch (iVar21)
	{
		case 1:
			Local_66.f_DD.f_DD = "OJSR_POURCAN_1";
			break;
		
		case 2:
			Local_66.f_DD.f_DD = "OJSR_POURCAN_2";
			break;
		
		case 3:
			Local_66.f_DD.f_DD = "OJSR_POURCAN_3";
			break;
	}
	switch (iVar22)
	{
		case 1:
			Local_66.f_DD.f_DE = "OJSR_FLEE_1";
			break;
		
		case 2:
			Local_66.f_DD.f_DE = "OJSR_FLEE_2";
			break;
		
		case 3:
			Local_66.f_DD.f_DE = "OJSR_FLEE_3";
			break;
		
		case 4:
			Local_66.f_DD.f_DE = "OJSR_FLEE_4";
			break;
		
		case 5:
			Local_66.f_DD.f_DE = "OJSR_FLEE_5";
			break;
	}
	switch (iVar23)
	{
		case 1:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_1";
			break;
		
		case 2:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_2";
			break;
		
		case 3:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_3";
			break;
		
		case 4:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_4";
			break;
		
		case 5:
			Local_66.f_DD.f_DF = "OJSR_RECSCAR_5";
			break;
	}
	switch (iVar24)
	{
		case 1:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_1";
			break;
		
		case 2:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_2";
			break;
		
		case 3:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_3";
			break;
		
		case 4:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_4";
			break;
		
		case 5:
			Local_66.f_DD.f_E0 = "OJSR_RECAGGR_5";
			break;
	}
	switch (iVar25)
	{
		case 1:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_1";
			break;
		
		case 2:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_2";
			break;
		
		case 3:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_3";
			break;
		
		case 4:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_4";
			break;
		
		case 5:
			Local_66.f_DD.f_E1 = "OJSR_CSTMER_5";
			break;
	}
	switch (iVar26)
	{
		case 1:
			Local_66.f_DD.f_E2 = "OJSR_MOSC_1";
			break;
		
		case 2:
			Local_66.f_DD.f_E2 = "OJSR_MOSC_2";
			break;
		
		case 3:
			Local_66.f_DD.f_E2 = "OJSR_MOSC_3";
			break;
	}
	switch (iVar28)
	{
		case 1:
			Local_66.f_DD.f_E4 = "OJSR_BUY_1";
			break;
		
		case 2:
			Local_66.f_DD.f_E4 = "OJSR_BUY_2";
			break;
		
		case 3:
			Local_66.f_DD.f_E4 = "OJSR_BUY_3";
			break;
	}
	switch (iVar29)
	{
		case 1:
			Local_66.f_DD.f_E5 = "OJSR_STEAL_1";
			break;
		
		case 2:
			Local_66.f_DD.f_E5 = "OJSR_STEAL_2";
			break;
		
		case 3:
			Local_66.f_DD.f_E5 = "OJSR_STEAL_3";
			break;
	}
	Local_66.f_DD.f_A6 = "OJSRAUD";
	Local_66.f_DD.f_A7 = "OJSR_GREET";
	Local_66.f_DD.f_A8 = "OJSR_BATEQ";
	Local_66.f_DD.f_A9 = "OJSR_TOOLEQ";
	Local_66.f_DD.f_AA = "OJSR_STICKEQ";
	Local_66.f_DD.f_AB = "OJSR_WORRY";
	Local_66.f_DD.f_AC = "OJSR_SHOCK";
	Local_66.f_DD.f_AD = "OJSR_STUBBRN";
	Local_66.f_DD.f_AE = "OJSR_COUNTER";
	Local_66.f_DD.f_AF = "OJSR_BACKRM";
	Local_66.f_DD.f_B0 = "OJSR_BUMP";
	Local_66.f_DD.f_B1 = "OJSR_BPAIM";
	Local_66.f_DD.f_B2 = "OJSR_BPAIMAG";
	Local_66.f_DD.f_B3 = "OJSR_HOLDUP";
	Local_66.f_DD.f_B4 = "OJSR_SCARED";
	Local_66.f_DD.f_B5 = "OJSR_KNIFAIM";
	Local_66.f_DD.f_B6 = "OJSR_TOOLAIM";
	Local_66.f_DD.f_B7 = "OJSR_GRANAIM";
	Local_66.f_DD.f_B8 = "OJSR_STICAIM";
	Local_66.f_DD.f_B9 = "OJSR_BRAVE";
	Local_66.f_DD.f_BA = "OJSR_MOREAIM";
	Local_66.f_DD.f_BB = "OJSR_SURNDER";
	Local_66.f_DD.f_BC = "OJSR_COPS";
	Local_66.f_DD.f_BD = "OJSR_POURCAN";
	Local_66.f_DD.f_BE = "OJSR_FLEE";
	Local_66.f_DD.f_BF = "OJSR_RECSCAR";
	Local_66.f_DD.f_C0 = "OJSR_RECAGGR";
	Local_66.f_DD.f_C1 = "OJSR_CSTMER";
	Local_66.f_DD.f_C2 = "OJSR_MOSC";
	Local_66.f_DD.f_C3 = "OJSR_PLRHUR";
	Local_66.f_DD.f_C4 = "OJSR_BUY";
	Local_66.f_DD.f_C5 = "OJSR_STEAL";
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
}

void func_258()
{
	unk_0x3124890FDA752DE4(Local_66.f_1E6.f_6, 0.5f, 303280717, 1);
	unk_0x3124890FDA752DE4(Local_66.f_1E6.f_6, 0.5f, joaat("prop_till_02"), 1);
	unk_0x3124890FDA752DE4(Local_66.f_1E6.f_6, 0.5f, joaat("prop_till_03"), 1);
	Local_66.f_60.f_1 = unk_0x7707E48765093646(Local_66.f_60, Local_66.f_1E6.f_6, true, true, false);
	unk_0xD8F6A53F4799FAFE(Local_66.f_60.f_1, Local_66.f_60.f_5);
	unk_0x1E9649458B15960F(Local_66.f_60.f_1, true);
}

void func_259()
{
	Local_66.f_1C = unk_0xEC03378782221D46(joaat("pickup_portable_crate_unfixed"), Local_66.f_1C.f_7, false, Local_66.f_1C.f_D);
	unk_0xC023D1C4BF532815(Local_66.f_1C, Local_66.f_1C.f_A, 2, 1);
	unk_0x4A4806F9D471E491(Local_66.f_1C, false, 0);
	unk_0x3192B0FF798E63C8(Local_66.f_1C, true, 0);
	Local_66.f_1C.f_E = 0;
}

void func_260()
{
	int iVar0;
	int iVar1;
	
	Local_66.f_2 = unk_0x36F2404464202779(4, Local_66.f_2.f_5, Local_66.f_2.f_1, Local_66.f_2.f_4, 1, true);
	func_266(iLocal_80, &iVar1, &iVar0);
	unk_0x64F9F278AB9DCA2C(Local_66.f_2, 0, iVar1, iVar0, 0);
	func_265(&iVar1, &iVar0);
	unk_0x64F9F278AB9DCA2C(Local_66.f_2, 2, iVar1, iVar0, 0);
	func_264(&iVar1, &iVar0);
	unk_0x64F9F278AB9DCA2C(Local_66.f_2, 3, iVar1, iVar0, 0);
	func_263(&iVar1, &iVar0);
	unk_0x64F9F278AB9DCA2C(Local_66.f_2, 4, iVar1, iVar0, 0);
	func_262(&iVar1, &iVar0);
	unk_0x64F9F278AB9DCA2C(Local_66.f_2, 8, iVar1, iVar0, 0);
	unk_0x11AD11297DC58CC7(Local_66.f_2, true);
	if (Local_66.f_2.f_C)
	{
		func_261();
	}
}

void func_261()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
	{
	}
}

void func_262(int iParam0, int iParam1)
{
	*iParam0 = unk_0x09AC81E49EA267F7(0, 2);
	if (*iParam0 == 0)
	{
		*iParam1 = unk_0x09AC81E49EA267F7(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_263(int iParam0, int iParam1)
{
	*iParam0 = 0;
	*iParam1 = unk_0x09AC81E49EA267F7(0, 2);
}

void func_264(int iParam0, int iParam1)
{
	*iParam0 = unk_0x09AC81E49EA267F7(0, 2);
	*iParam1 = unk_0x09AC81E49EA267F7(0, 3);
}

void func_265(int iParam0, int iParam1)
{
	*iParam0 = unk_0x09AC81E49EA267F7(0, 3);
	if (*iParam0 > 0)
	{
		*iParam1 = unk_0x09AC81E49EA267F7(0, 2);
	}
	else
	{
		*iParam1 = 0;
	}
}

void func_266(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam1 = 0;
			*uParam2 = unk_0x09AC81E49EA267F7(0, 3);
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam1 = 2;
			*uParam2 = unk_0x09AC81E49EA267F7(0, 3);
			break;
	}
}

int func_267()
{
	if (!func_268(&Local_96))
	{
		return 0;
	}
	if (!bLocal_86)
	{
		if (!unk_0xB4AE0788C1587752(Local_66.f_2.f_F))
		{
			return 0;
		}
	}
	if (!unk_0xBD307E66C0669BFC(Local_66.f_B9))
	{
		return 0;
	}
	unk_0xDF8BDD00CF1D4043(0);
	return 1;
}

int func_268(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_1F)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_269(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_1F = 0;
	return 1;
}

bool func_269(var uParam0)
{
	return func_270(*uParam0, "NULL", uParam0->f_1);
}

int func_270(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 30))
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, 29))
		{
			switch (func_271(iParam0))
			{
				case 0:
					return unk_0xB87F6CF6E5628C67(iParam2);
					break;
				
				case 1:
					return unk_0xB4AE0788C1587752(sParam1);
					break;
				
				case 2:
					return unk_0x59F02DA2266A744C(sParam1);
					break;
				
				case 3:
					return unk_0x27117E2CDD4D67C3(sParam1);
					break;
				
				case 4:
					return unk_0x3DDA6C6A285628E4(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x1C2E18E9C63BEB77(sParam1);
					break;
				
				case 6:
					return unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(iParam0, 27), 4294967295);
					break;
				
				case 7:
					return unk_0x64EF15C5E09BAD76(iParam2);
					break;
				
				case 8:
					return unk_0x67C1D9E5B91B2E37(iParam2);
					break;
				
				case 9:
					return unk_0x25F7A4D42AF2AB93();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_271(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xEAE0D21A50E6C7F4(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_272()
{
	unk_0xDF8BDD00CF1D4043(1);
	if (!bLocal_86)
	{
		unk_0x3F423BF5B8125A50(Local_66.f_2.f_F);
		Local_96.f_20 = unk_0xF4CCC8CB6DE7F1AE();
	}
	func_273(&Local_96, Local_66.f_2.f_5);
	func_273(&Local_96, Local_66.f_1C.f_D);
	func_273(&Local_96, Local_66.f_60);
	Local_66.f_1D2 = 1;
}

void func_273(var uParam0, int iParam1)
{
	func_274(uParam0, 0, iParam1, 0);
}

void func_274(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_275(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], iParam1))
			{
				if (iParam2 != 4294967295)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_1F)
	{
		uParam0->f_1F = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*2*/], iParam1);
			unk_0x5D96D8530B3D0904(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 4294967295:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_276()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	func_281(iLocal_80, &(Local_66.f_2E.f_8), &(Local_66.f_2E.f_12), &(Local_66.f_2E.f_16), &(Local_66.f_2E.f_19), &(Local_66.f_2E.f_1A), &(Local_66.f_2E.f_1B), &(Local_66.f_2E.f_1C), &(Local_66.f_2E.f_1F), &(Local_66.f_2E.f_22));
	func_279(iLocal_80);
	vVar0 = { -3244.573f, 1000.658f, 12.83f };
	fVar3 = 175.074f;
	vVar1 = { -3242.008f, 1001.202f, 11.83071f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_306(vVar2, fVar3) };
	vVar1 = { -3245.088f, 1001.468f, 13.65071f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_306(vVar2, fVar3) };
	vVar1 = { -3243.37f, 1000.37f, 12.83f };
	vVar2 = { vVar1 - vVar0 };
	vVar2 = { func_306(vVar2, fVar3) };
	Local_66.f_1D5 = 4294967295;
	Local_66.f_66.f_16 = 4294967295;
	Local_66.f_60 = joaat("p_till_01_s");
	Local_66.f_60.f_2 = { Local_66.f_1E6.f_6 };
	Local_66.f_60.f_5 = (Local_66.f_1E6.f_9.f_2 + 180f);
	Local_66.f_1C3.f_3 = 0;
	Local_66.f_1CA = 0;
	Local_66.f_1CB = 0;
	Local_66.f_1CC = 0;
	Local_66.f_1CD = 0;
	Local_66.f_1CE = 0;
	Local_66.f_1D1 = 0;
	func_278(iLocal_80, &(Local_66.f_2.f_6), &(Local_66.f_2.f_9));
	func_277();
}

void func_277()
{
	Local_66.f_56.f_1 = joaat("a_m_y_soucent_04");
	Local_66.f_56.f_2 = { -1224.15f, -907.2f, 12.33f };
	Local_66.f_56.f_5 = 2f;
}

void func_278(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -709.7998f, -907.1352f, 18.2156f };
			*uParam2 = 291.6504f;
			break;
		
		case 1:
			*uParam1 = { -41.8128f, -1749.685f, 28.421f };
			*uParam2 = 214.6526f;
			break;
		
		case 2:
			*uParam1 = { 1159.682f, -314.254f, 68.2051f };
			*uParam2 = 232.6337f;
			break;
		
		case 3:
			*uParam1 = { 1707.303f, 4918.31f, 41.0636f };
			*uParam2 = 24.9178f;
			break;
		
		case 4:
			*uParam1 = { -1828.907f, 799.6096f, 137.1776f };
			*uParam2 = 247.1234f;
			break;
		
		case 5:
			*uParam1 = { 1168.971f, 2719.118f, 36.0632f };
			*uParam2 = 136.5945f;
			break;
		
		case 6:
			*uParam1 = { -2962.983f, 391.9788f, 14.0433f };
			*uParam2 = 176.1174f;
			break;
		
		case 7:
			*uParam1 = { -1218.283f, -915.7103f, 10.3264f };
			*uParam2 = 43.8031f;
			break;
		
		case 8:
			*uParam1 = { 1130.155f, -979.2816f, 45.4158f };
			*uParam2 = 269.2587f;
			break;
		
		case 9:
			*uParam1 = { -1479.163f, -375.0302f, 38.1633f };
			*uParam2 = 36.5415f;
			break;
		
		case 10:
			*uParam1 = { -3249.114f, 1006.558f, 11.8307f };
			*uParam2 = 191.594f;
			break;
		
		case 11:
			*uParam1 = { -3047.512f, 588.9807f, 6.9089f };
			*uParam2 = 178.8753f;
			break;
		
		case 12:
			*uParam1 = { 543.0796f, 2663.967f, 41.1565f };
			*uParam2 = 228.4295f;
			break;
		
		case 13:
			*uParam1 = { 2549.85f, 387.1622f, 107.623f };
			*uParam2 = 197.2994f;
			break;
		
		case 14:
			*uParam1 = { 2671.351f, 3283.136f, 54.2411f };
			*uParam2 = 296.5427f;
			break;
		
		case 15:
			*uParam1 = { 1733.967f, 6421.495f, 34.0372f };
			*uParam2 = 130.9518f;
			break;
		
		case 16:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
		
		case 17:
			*uParam1 = { 30.5721f, -1339.782f, 28.4939f };
			*uParam2 = 110.7699f;
			break;
		
		case 18:
			*uParam1 = { 376.2976f, 331.8158f, 102.5664f };
			*uParam2 = 52.0064f;
			break;
		
		case 4294967294:
			*uParam1 = { 1958.92f, 3746.267f, 31.3438f };
			*uParam2 = 73.6245f;
			break;
	}
}

void func_279(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_280(Local_66.f_BA, Local_66.f_BD) };
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_66.f_B9 = unk_0x0D1736C2E221BCEA(vVar0, "v_gasstation");
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			Local_66.f_B9 = unk_0x0D1736C2E221BCEA(vVar0, "v_gen_liquor");
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			Local_66.f_B9 = unk_0x0D1736C2E221BCEA(vVar0, "v_shop_247");
			break;
	}
}

Vector3 func_280(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	vVar0.x = ((vParam0.x + vParam1.x) / 2f);
	vVar0.y = ((vParam0.y + vParam1.y) / 2f);
	vVar0.z = ((vParam0.z + vParam1.z) / 2f);
	return vVar0;
}

void func_281(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	if (!func_282(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			*(uParam1[0 /*3*/]) = { -677.0792f, -952.9478f, 20.4712f };
			(*uParam2)[0] = 90.5427f;
			*(uParam1[1 /*3*/]) = { -668.8872f, -961.7076f, 20.6313f };
			(*uParam2)[1] = 90.5427f;
			*(uParam1[2 /*3*/]) = { -749.7003f, -901.2264f, 19.6691f };
			(*uParam2)[2] = 170.7498f;
			*uParam3 = { -715.81f, -930.27f, 18.04f };
			*uParam4 = 8.81f;
			*uParam7 = { -714.079f, -918.088f, 18.196f };
			*uParam8 = { -709.079f, -918.166f, 22.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 1:
			*(uParam1[0 /*3*/]) = { -133.86f, -1764.29f, 29.39f };
			(*uParam2)[0] = 297.87f;
			*(uParam1[1 /*3*/]) = { -63.16f, -1793.14f, 27.23f };
			(*uParam2)[1] = 50.66f;
			*(uParam1[2 /*3*/]) = { -56.5f, -1810.22f, 26.6f };
			(*uParam2)[2] = 50.67f;
			*uParam3 = { -68.92f, -1764.16f, 28.23f };
			*uParam4 = 9f;
			*uParam7 = { -55.922f, -1756.021f, 28.196f };
			*uParam8 = { -52.122f, -1759.271f, 32.196f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 2:
			*(uParam1[0 /*3*/]) = { 1103.004f, -378.3616f, 66.6258f };
			(*uParam2)[0] = 310.6741f;
			*(uParam1[1 /*3*/]) = { 1186.703f, -289.3757f, 68.5913f };
			(*uParam2)[1] = 214.1061f;
			*(uParam1[2 /*3*/]) = { 1251.639f, -371.6591f, 68.7078f };
			(*uParam2)[2] = 164.5987f;
			*uParam3 = { 1161.84f, -339.25f, 67.29f };
			*uParam4 = 9.17f;
			*uParam7 = { 1157.417f, -328.616f, 68.048f };
			*uParam8 = { 1162.351f, -327.81f, 72.048f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 3:
			*(uParam1[0 /*3*/]) = { 1667.82f, 4916.04f, 41.71f };
			(*uParam2)[0] = 346.32f;
			*(uParam1[1 /*3*/]) = { 1710.43f, 4963.03f, 43.92f };
			(*uParam2)[1] = 112.11f;
			*(uParam1[2 /*3*/]) = { 1727.59f, 4986.13f, 46.4f };
			(*uParam2)[2] = 132.27f;
			*uParam3 = { 1692.99f, 4939.56f, 41.16f };
			*uParam4 = 10f;
			*uParam7 = { 1699.338f, 4932.104f, 41.083f };
			*uParam8 = { 1696.313f, 4928.124f, 45.083f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 4:
			*(uParam1[0 /*3*/]) = { -1862.436f, 732.8416f, 130.8709f };
			(*uParam2)[0] = 301.6958f;
			*(uParam1[1 /*3*/]) = { -1870.955f, 722.3616f, 129.6428f };
			(*uParam2)[1] = 300.6013f;
			*(uParam1[2 /*3*/]) = { -1711.103f, 873.6471f, 145.9411f };
			(*uParam2)[2] = 146.5694f;
			*uParam3 = { -1814.22f, 782.55f, 136.57f };
			*uParam4 = 7.24f;
			*uParam7 = { -1823.281f, 785.687f, 137.027f };
			*uParam8 = { -1819.465f, 788.918f, 141.027f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 5:
			*(uParam1[0 /*3*/]) = { 1127.43f, 2680.61f, 38.02f };
			(*uParam2)[0] = 268.18f;
			*(uParam1[1 /*3*/]) = { 1205.02f, 2687.1f, 37.34f };
			(*uParam2)[1] = 91.37f;
			*(uParam1[2 /*3*/]) = { 1218.17f, 2677.4f, 37.27f };
			(*uParam2)[2] = 88.15f;
			*uParam3 = { 1164.39f, 2683.2f, 37.06f };
			*uParam4 = 8.49f;
			*uParam7 = { 1164.771f, 2702.528f, 38.162f };
			*uParam8 = { 1167.771f, 2702.548f, 41.162f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 6:
			*(uParam1[0 /*3*/]) = { -3021.405f, 236.3884f, 15.6982f };
			(*uParam2)[0] = 354.8025f;
			*(uParam1[1 /*3*/]) = { -3021.883f, 207.4436f, 15.7511f };
			(*uParam2)[1] = 2.3146f;
			*(uParam1[2 /*3*/]) = { -3015.012f, 640.891f, 21.0514f };
			(*uParam2)[2] = 193.5162f;
			*uParam3 = { -2990.03f, 391.19f, 13.83f };
			*uParam4 = 9.41f;
			*uParam7 = { -2974.55f, 393.338f, 14.037f };
			*uParam8 = { -2975.084f, 388.366f, 18.037f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 7:
			*(uParam1[0 /*3*/]) = { -1270.806f, -944.262f, 10.8025f };
			(*uParam2)[0] = 17.2662f;
			*(uParam1[1 /*3*/]) = { -1327.767f, -855.9691f, 16.4331f };
			(*uParam2)[1] = 216.1689f;
			*(uParam1[2 /*3*/]) = { -1155.798f, -862.4445f, 13.4857f };
			(*uParam2)[2] = 36.347f;
			*uParam3 = { -1233.36f, -891.39f, 11.35f };
			*uParam4 = 5.7f;
			*uParam7 = { -1225.2f, -899.881f, 11.275f };
			*uParam8 = { -1229.293f, -902.753f, 15.275f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 8:
			*(uParam1[0 /*3*/]) = { 1132.016f, -956.2646f, 47.2548f };
			(*uParam2)[0] = 278.2335f;
			*(uParam1[1 /*3*/]) = { 1121.218f, -959.5676f, 46.788f };
			(*uParam2)[1] = 289.4738f;
			*(uParam1[2 /*3*/]) = { 1236.959f, -1153.587f, 37.1736f };
			(*uParam2)[2] = 27.5191f;
			*uParam3 = { 1154.17f, -979.23f, 45.36f };
			*uParam4 = 6.02f;
			*uParam7 = { 1142.794f, -983.315f, 45.205f };
			*uParam8 = { 1142.519f, -978.322f, 49.205f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 9:
			*(uParam1[0 /*3*/]) = { -1525.77f, -389.17f, 41.39f };
			(*uParam2)[0] = 229.73f;
			*(uParam1[1 /*3*/]) = { -1537.28f, -378.84f, 43.02f };
			(*uParam2)[1] = 226.22f;
			*(uParam1[2 /*3*/]) = { -1475.06f, -418.35f, 35.71f };
			(*uParam2)[2] = 45.71f;
			*uParam3 = { -1502.71f, -400.39f, 38.41f };
			*uParam4 = 7.86f;
			*uParam7 = { -1493.544f, -382.617f, 38.994f };
			*uParam8 = { -1489.947f, -386.09f, 42.994f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 10:
			*(uParam1[0 /*3*/]) = { -3218.999f, 1105.409f, 9.9489f };
			(*uParam2)[0] = 175.7402f;
			*(uParam1[1 /*3*/]) = { -3210.846f, 1114.875f, 9.8453f };
			(*uParam2)[1] = 152.4543f;
			*(uParam1[2 /*3*/]) = { -3201.518f, 920.3387f, 13.8887f };
			(*uParam2)[2] = 54.6774f;
			*uParam3 = { -3230.27f, 1003.54f, 11.31f };
			*uParam4 = 5.42f;
			*uParam7 = { -3238.442f, 1001.727f, 11.161f };
			*uParam8 = { -3238.268f, 1006.724f, 15.161f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 11:
			*(uParam1[0 /*3*/]) = { -3061.218f, 658.6545f, 9.6541f };
			(*uParam2)[0] = 216.9221f;
			*(uParam1[1 /*3*/]) = { -3017.391f, 509.7967f, 6.7435f };
			(*uParam2)[1] = 348.3592f;
			*(uParam1[2 /*3*/]) = { -3029.232f, 521.1291f, 6.975f };
			(*uParam2)[2] = 337.5117f;
			*uParam3 = { -3027.51f, 594.25f, 6.87f };
			*uParam4 = 5.89f;
			*uParam7 = { -3036.615f, 587.625f, 6.818f };
			*uParam8 = { -3038.087f, 592.404f, 10.818f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 12:
			*(uParam1[0 /*3*/]) = { 523.8614f, 2658.057f, 42.068f };
			(*uParam2)[0] = 2.8999f;
			*(uParam1[1 /*3*/]) = { 471.6328f, 2657.835f, 42.9164f };
			(*uParam2)[1] = 329.1264f;
			*(uParam1[2 /*3*/]) = { 656.9346f, 2731.927f, 41.5306f };
			(*uParam2)[2] = 183.28f;
			*uParam3 = { 545.05f, 2684.96f, 41.3f };
			*uParam4 = 6.77f;
			*uParam7 = { 546.505f, 2674.393f, 41.152f };
			*uParam8 = { 541.547f, 2673.75f, 45.152f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 13:
			*(uParam1[0 /*3*/]) = { 2593.841f, 273.2788f, 104.926f };
			(*uParam2)[0] = 345.1121f;
			*(uParam1[1 /*3*/]) = { 2595.69f, 262.9971f, 104.2577f };
			(*uParam2)[1] = 350.3949f;
			*(uParam1[2 /*3*/]) = { 2591.545f, 256.5517f, 103.7544f };
			(*uParam2)[2] = 343.9362f;
			*uParam3 = { 2575.75f, 385.11f, 107.46f };
			*uParam4 = 11.61f;
			*uParam7 = { 2560.435f, 382.891f, 107.626f };
			*uParam8 = { 2560.67f, 387.886f, 111.626f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 14:
			*(uParam1[0 /*3*/]) = { 2672.64f, 3259.44f, 54.87f };
			(*uParam2)[0] = 324.3f;
			*(uParam1[1 /*3*/]) = { 2703.37f, 3294.47f, 55.31f };
			(*uParam2)[1] = 152.87f;
			*(uParam1[2 /*3*/]) = { 2699.45f, 3299.76f, 55.35f };
			(*uParam2)[2] = 152.55f;
			*uParam3 = { 2691.41f, 3275.22f, 54.24f };
			*uParam4 = 7.56f;
			*uParam7 = { 2681.77f, 3279.805f, 54.245f };
			*uParam8 = { 2684.297f, 3284.12f, 58.245f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 15:
			*(uParam1[0 /*3*/]) = { 1740.035f, 6378.202f, 35.0341f };
			(*uParam2)[0] = 81.6255f;
			*(uParam1[1 /*3*/]) = { 1755.786f, 6375.046f, 36.2501f };
			(*uParam2)[1] = 76.057f;
			*(uParam1[2 /*3*/]) = { 1752.839f, 6367.344f, 36.135f };
			(*uParam2)[2] = 75.9713f;
			*uParam3 = { 1725.56f, 6400.85f, 33.42f };
			*uParam4 = 7.09f;
			*uParam7 = { 1728.266f, 6411.254f, 34.006f };
			*uParam8 = { 1732.739f, 6409.022f, 38.006f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("sheriff");
			break;
		
		case 16:
			*(uParam1[0 /*3*/]) = { 1942.142f, 3738.897f, 31.9693f };
			(*uParam2)[0] = 210.3384f;
			*(uParam1[1 /*3*/]) = { 2024.891f, 3780.588f, 31.9156f };
			(*uParam2)[1] = 210.1552f;
			*(uParam1[2 /*3*/]) = { 1879.631f, 3673.292f, 33.1966f };
			(*uParam2)[2] = 302.2257f;
			*uParam3 = { 1968.55f, 3731.03f, 31.36f };
			*uParam4 = 6.12f;
			*uParam7 = { 1963.491f, 3738.337f, 31.324f };
			*uParam8 = { 1967.792f, 3740.886f, 35.324f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 17:
			*(uParam1[0 /*3*/]) = { 73.57f, -1359.63f, 28.96f };
			(*uParam2)[0] = 93.85f;
			*(uParam1[1 /*3*/]) = { 77.26f, -1364.69f, 28.97f };
			(*uParam2)[1] = 88.25f;
			*(uParam1[2 /*3*/]) = { -17.95f, -1366.03f, 28.97f };
			(*uParam2)[2] = 267.29f;
			*uParam3 = { 30.98f, -1362.09f, 28.33f };
			*uParam4 = 6f;
			*uParam7 = { 27.296f, -1350.255f, 28.33232f };
			*uParam8 = { 30.795f, -1350.308f, 30.82019f };
			*uParam9 = 3f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
		
		case 18:
			*(uParam1[0 /*3*/]) = { 424.9115f, 314.1133f, 102.622f };
			(*uParam2)[0] = 155.4277f;
			*(uParam1[1 /*3*/]) = { 439.6049f, 292.7892f, 102.5935f };
			(*uParam2)[1] = 74.6758f;
			*(uParam1[2 /*3*/]) = { 275.961f, 331.2577f, 105.1467f };
			(*uParam2)[2] = 250.7508f;
			*uParam3 = { 372.79f, 313f, 102.47f };
			*uParam4 = 3.94f;
			*uParam7 = { 373.907f, 322.739f, 102.439f };
			*uParam8 = { 378.778f, 321.61f, 106.439f };
			*uParam9 = 3.7f;
			*uParam5 = joaat("s_m_y_cop_01");
			*uParam6 = joaat("police");
			break;
	}
}

int func_282(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_283()
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(Local_66, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(Local_66, true) };
		if (unk_0x0EB28750412C3A5A(vVar0, Local_66.f_B5, true) < 50f)
		{
			return 1;
		}
	}
	return 0;
}

void func_284()
{
	if (Local_66.f_2E.f_1A != 0)
	{
		unk_0x71199B01895C6202(Local_66.f_2E.f_1A);
	}
	if (Local_66.f_2E.f_1B != 0)
	{
		unk_0x71199B01895C6202(Local_66.f_2E.f_1B);
	}
	if (!unk_0xEA6BC48857E0AC4C(Local_66.f_2.f_F))
	{
		unk_0x8D17794CE3273D70(Local_66.f_2.f_F);
	}
}

int func_285()
{
	if (Global_1B416.f_2378)
	{
		if (!func_289(56))
		{
			return 1;
		}
	}
	if (func_288())
	{
		return 1;
	}
	if (!unk_0x338D6FF72D84D90F())
	{
		return 1;
	}
	if (func_305() && !func_304())
	{
		return 1;
	}
	if (func_287() && func_286())
	{
		return 1;
	}
	if (Global_7832)
	{
		unk_0xA37A90C62806D848(1);
		unk_0x10FAF14A60A0DBE1();
	}
	return 0;
}

bool func_286()
{
	return Global_1B2FC > 0;
}

int func_287()
{
	if (Global_175B2 != 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_288()
{
	vector3 vVar0;
	float fVar1;
	
	if (!unk_0x437347B10A200C4B(Local_66, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(Local_66, true) };
		fVar1 = unk_0x0EB28750412C3A5A(vVar0, Local_66.f_B5, true);
		if (fVar1 > Local_66.f_B8)
		{
			return 1;
		}
	}
	return 0;
}

int func_289(int iParam0)
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_290(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1F)
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() >= (uParam0->f_20 + uParam0->f_21) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 2)) || unk_0xEAE0D21A50E6C7F4(Global_181B8.f_14, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 29))
					{
						func_291(uParam0[iVar0 /*2*/]);
						uParam0->f_20 = unk_0xF4CCC8CB6DE7F1AE();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_291(int iParam0)
{
	func_292(iParam0, "NULL", iParam0->f_1);
}

void func_292(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 30))
	{
		switch (func_271(*iParam0))
		{
			case 0:
				unk_0x523BCC9DC80CD82F(iParam2);
				break;
			
			case 1:
				unk_0x3F423BF5B8125A50(sParam1);
				break;
			
			case 2:
				unk_0x4E09E67A27F104A7(sParam1);
				break;
			
			case 3:
				unk_0x0D3BE1DE0262A012(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 28));
				break;
			
			case 4:
				unk_0x36187931D29E5BBE(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x29398344B9E5B8A7(sParam1);
				break;
			
			case 6:
				unk_0xAE317D00A5A55DF6(sParam1, unk_0xEAE0D21A50E6C7F4(*iParam0, 27), 4294967295);
				break;
			
			case 7:
				unk_0x8CFFBE74CB5C864A(iParam2);
				break;
			
			case 8:
				unk_0xD7992BEF7A9D109E(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x9E5E60D8C63FD9D1();
				break;
			
			default:
				break;
		}
		unk_0x5D96D8530B3D0904(iParam0, 29);
	}
}

int func_293()
{
	int iVar0;
	
	if (Local_66.f_1 != Global_1B416.f_4E3E.f_3E[iLocal_80])
	{
		return 1;
	}
	iVar0 = (unk_0x972A296334C9D57B() - Global_1B416.f_4E3E.f_2A[iLocal_80]);
	iLocal_85 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0x972A296334C9D57B() + 31;
		iVar0 = (iVar0 - Global_1B416.f_4E3E.f_2A[iLocal_80]);
	}
	if (iVar0 < iLocal_85)
	{
		return 0;
	}
	return 1;
}

void func_294(var uParam0, int iParam1)
{
	func_295(uParam0, iParam1);
}

void func_295(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_296(int iParam0, float fParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam2 = { unk_0x8A5E176FF719A014(func_297(iParam0), fParam1, 5.95155f, -8.251f, -0.2377f) };
			*uParam3 = { unk_0x8A5E176FF719A014(func_297(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f) };
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam2 = { unk_0x8A5E176FF719A014(func_297(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f) };
			*uParam3 = { unk_0x8A5E176FF719A014(func_297(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f) };
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam2 = { unk_0x8A5E176FF719A014(func_297(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f) };
			*uParam3 = { unk_0x8A5E176FF719A014(func_297(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f) };
			break;
	}
	return 1;
}

Vector3 func_297(int iParam0)
{
	if (!func_282(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_298()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (unk_0xD8A54335F18763BA() - Global_1B416.f_4E3E.f_15[iLocal_80]);
	iVar1 = (unk_0x972A296334C9D57B() - Global_1B416.f_4E3E.f_2A[iLocal_80]);
	iLocal_84 = 2;
	if (iVar0 < 0)
	{
		iVar0 = unk_0xD8A54335F18763BA() + 24;
		iVar0 = (iVar0 - Global_1B416.f_4E3E.f_15[iLocal_80]);
		iVar2 = 1;
	}
	if ((iVar0 < iLocal_84 && iVar1 == 0) || (iVar0 < iLocal_84 && iVar2))
	{
		return 1;
	}
	return 0;
}

void func_299(bool bParam0)
{
	int iVar0;
	var uVar1[2];
	var uVar2[2];
	vector3 vVar3[2];
	
	func_300(iLocal_80, &uVar1, &uVar2, &vVar3);
	if (!func_1(Local_66.f_1D6, 64))
	{
		if (!unk_0x76395FF5E8D5E643(uVar1[iVar0]))
		{
			unk_0x8010B3127F058F0F(uVar1[0], uVar2[0], vVar3[0 /*3*/], 0, false, 0);
			if (uVar1[1] != 4294967295)
			{
				unk_0x8010B3127F058F0F(uVar1[1], uVar2[1], vVar3[1 /*3*/], 0, false, 0);
			}
		}
		func_294(&(Local_66.f_1D6), 64);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x76395FF5E8D5E643(uVar1[iVar0]))
		{
			if (bParam0)
			{
				if (unk_0x51D3DB30DC0C68AD(uVar1[iVar0]) != 1)
				{
					unk_0x1BA7FCEAFCE8D46E(uVar1[iVar0], 1, false, false);
				}
			}
			else if (unk_0x51D3DB30DC0C68AD(uVar1[iVar0]) != 0)
			{
				unk_0x1BA7FCEAFCE8D46E(uVar1[iVar0], 0, false, false);
			}
		}
		iVar0++;
	}
}

void func_300(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_2A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -713.07f, -916.54f, 19.37f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_2B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -710.47f, -916.54f, 19.37f };
			break;
		
		case 1:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_3A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -53.96f, -1755.72f, 29.57f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_3B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -51.97f, -1757.39f, 29.57f };
			break;
		
		case 2:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_4A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1158.36f, -326.82f, 69.36f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_4B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1160.93f, -326.36f, 69.36f };
			break;
		
		case 3:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_1A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { 1699.66f, 4930.28f, 42.21f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_1B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { 1698.17f, 4928.15f, 42.21f };
			break;
		
		case 4:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_5A");
			(*uParam2)[0] = joaat("v_ilev_gasdoor");
			*(uParam3[0 /*3*/]) = { -1823.28f, 787.37f, 138.36f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_GAS_5B");
			(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
			*(uParam3[1 /*3*/]) = { -1821.37f, 789.13f, 138.31f };
			break;
		
		case 5:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_LIQUOR_1A");
			(*uParam2)[0] = 3082015943;
			*(uParam3[0 /*3*/]) = { 1167.13f, 2703.75f, 38.3f };
			(*uParam1)[1] = 4294967295;
			break;
		
		case 6:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_LIQUOR_2A");
			(*uParam2)[0] = 3082015943;
			*(uParam3[0 /*3*/]) = { -2973.53f, 390.14f, 15.19f };
			(*uParam1)[1] = 4294967295;
			break;
		
		case 7:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_LIQUOR_3A");
			(*uParam2)[0] = 3082015943;
			*(uParam3[0 /*3*/]) = { -1226.89f, -903.12f, 12.47f };
			(*uParam1)[1] = 4294967295;
			break;
		
		case 8:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_LIQUOR_4A");
			(*uParam2)[0] = 3082015943;
			*(uParam3[0 /*3*/]) = { 1141.04f, -980.32f, 46.56f };
			(*uParam1)[1] = 4294967295;
			break;
		
		case 9:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_LIQUOR_5A");
			(*uParam2)[0] = 3082015943;
			*(uParam3[0 /*3*/]) = { -1490.41f, -383.85f, 40.31f };
			(*uParam1)[1] = 4294967295;
			break;
		
		case 10:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_3A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3240.13f, 1003.16f, 12.98f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_3B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3239.9f, 1005.75f, 12.98f };
			break;
		
		case 11:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_2A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { -3038.22f, 588.29f, 8.06f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_2B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { -3039.01f, 590.76f, 8.06f };
			break;
		
		case 12:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_4A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 545.5f, 2672.75f, 42.31f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_4B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 542.93f, 2672.41f, 42.31f };
			break;
		
		case 13:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_5A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2559.2f, 384.09f, 108.77f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_5B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2559.3f, 386.69f, 108.77f };
			break;
		
		case 14:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_6A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 2681.29f, 3281.43f, 55.39f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_6B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 2682.56f, 3283.7f, 55.39f };
			break;
		
		case 15:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_7A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1730.03f, 6412.07f, 35.19f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_7B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1732.36f, 6410.92f, 35.19f };
			break;
		
		case 16:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_8A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 1963.92f, 3740.08f, 32.49f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_8B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 1966.17f, 3741.38f, 32.49f };
			break;
		
		case 17:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_9A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 27.82f, -1349.17f, 29.65f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_9B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 30.42f, -1349.17f, 29.65f };
			break;
		
		case 18:
			(*uParam1)[0] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_10A");
			(*uParam2)[0] = joaat("v_ilev_247door");
			*(uParam3[0 /*3*/]) = { 375.35f, 323.8f, 103.72f };
			(*uParam1)[1] = unk_0x12AB0310C2281427("eCRIM_HUP_SHOP247_10B");
			(*uParam2)[1] = joaat("v_ilev_247door_r");
			*(uParam3[1 /*3*/]) = { 377.88f, 323.17f, 103.72f };
			break;
	}
}

void func_301(var uParam0, int iParam1)
{
	func_302(uParam0, iParam1);
}

void func_302(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_303()
{
	if (!unk_0x437347B10A200C4B(Local_66, 0))
	{
		if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_BA, Local_66.f_BD, Local_66.f_C0, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_C8, Local_66.f_CB, Local_66.f_CE, 0, true, 0))
		{
			return 1;
		}
		else if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_CF, Local_66.f_D2, Local_66.f_D5, 0, true, 0))
		{
			return 1;
		}
		else if (Local_66.f_C7 != -1f)
		{
			if (unk_0x3D1053F9EB43B7AD(Local_66, Local_66.f_C1, Local_66.f_C4, Local_66.f_C7, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_304()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xBA19B87E031E2390() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_305()
{
	if (Global_175B2 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 20);
	}
	return 0;
}

Vector3 func_306(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

void func_307(var uParam0)
{
	iLocal_65 = 0;
	iLocal_63 = 0;
	iLocal_61 = 0;
	iLocal_62 = 0;
	iLocal_60 = 0;
	iLocal_59 = 1;
	iLocal_55 = 0;
	iLocal_58 = 1;
	iLocal_57 = 0;
	iLocal_54 = 0;
	iLocal_53 = 0;
	iLocal_51 = 0;
	iLocal_50 = 0;
	Local_66 = unk_0x16F2683693E537C9();
	func_315(&(uParam0->f_1[0 /*3*/]), &(Local_66.f_B5), &iLocal_80);
	if ((((((((iLocal_80 == 10 || iLocal_80 == 11) || iLocal_80 == 12) || iLocal_80 == 13) || iLocal_80 == 14) || iLocal_80 == 15) || iLocal_80 == 16) || iLocal_80 == 17) || iLocal_80 == 18)
	{
		bLocal_94 = true;
	}
	Local_66.f_B8 = 150f;
	Local_66.f_2.f_F = "random@shop_robbery_reactions@";
	Local_66.f_2.f_10 = "absolutely";
	Local_66.f_2.f_11 = "is_this_it";
	Local_66.f_2.f_12 = "shock";
	Local_66.f_2.f_13 = "anger_a";
	Local_66.f_2.f_14 = "screw_you";
	Local_66.f_2.f_15 = "but_why";
	Local_66.f_1E6.f_1 = "mp_am_hold_up";
	Local_66.f_1E6.f_2 = "guard_handsup_loop";
	Local_66.f_1E6.f_3 = "holdup_victim_20s";
	Local_66.f_1E6.f_4 = "holdup_victim_20s_bag";
	Local_66.f_1E6.f_5 = "holdup_victim_20s_till";
	iLocal_82 = func_314();
	if (!bLocal_86)
	{
		func_310();
	}
	iLocal_87 = 0;
	if (iLocal_80 != 7)
	{
		iLocal_52 = 6;
	}
	else
	{
		iLocal_52 = 0;
	}
	if (func_105() == 0)
	{
		Local_66.f_1 = 0;
	}
	else if (func_105() == 1)
	{
		Local_66.f_1 = 1;
	}
	else if (func_105() == 2)
	{
		Local_66.f_1 = 2;
	}
	func_309(iLocal_80, &(Local_66.f_BA), &(Local_66.f_BD), &(Local_66.f_C0), &(Local_66.f_C1), &(Local_66.f_C4), &(Local_66.f_C7), &(Local_66.f_C8), &(Local_66.f_CB), &(Local_66.f_CE), &(Local_66.f_CF), &(Local_66.f_D2), &(Local_66.f_D5), &(Local_66.f_D6), &(Local_66.f_D9), &(Local_66.f_DC), &(Local_66.f_66.f_6), &(Local_66.f_66.f_9));
	func_308(iLocal_80, &(Local_66.f_1E6.f_6), &(Local_66.f_1E6.f_9), &(Local_66.f_2.f_1), &(Local_66.f_2.f_4), &(Local_66.f_2.f_5), &(Local_66.f_1C.f_7), &(Local_66.f_1C.f_A), &(Local_66.f_1C.f_D), &(Local_66.f_1C.f_4), &(Local_66.f_1C.f_5), &(Local_66.f_66.f_15));
}

void func_308(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	switch (iParam0)
	{
		case 0:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -706.6382f, -913.6887f, 19.21f };
			*uParam2 = { 0f, 0f, -89.999f };
			break;
		
		case 1:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -47.19871f, -1757.67f, 29.42f };
			*uParam2 = { 0f, 0f, -130f };
			break;
		
		case 2:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1164.21f, -322.89f, 69.2f };
			*uParam2 = { 0f, 0f, -80f };
			break;
		
		case 3:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1698.307f, 4923.371f, 42.06f };
			*uParam2 = { 0f, 0f, 145f };
			break;
		
		case 4:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1820.465f, 793.8166f, 138.09f };
			*uParam2 = { 0f, 0f, -47.53f };
			break;
		
		case 5:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1165.958f, 2710.201f, 38.14286f };
			*uParam2 = { 0f, 0f, -1.15f };
			break;
		
		case 6:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -2967.027f, 390.9038f, 15.02f };
			*uParam2 = { 0f, 0f, -94.76f };
			break;
		
		case 7:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1222.331f, -907.8234f, 12.31f };
			*uParam2 = { 0f, 0f, -147.297f };
			break;
		
		case 8:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1134.811f, -982.3615f, 46.4f };
			*uParam2 = { 0f, 0f, 96.68562f };
			break;
		
		case 9:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -1486.673f, -378.4638f, 40.15f };
			*uParam2 = { 0f, 0f, -46.229f };
			break;
		
		case 10:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3244.573f, 1000.658f, 12.83f };
			*uParam2 = { 0f, 0f, 175.074f };
			break;
		
		case 11:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { -3041.357f, 584.2665f, 7.9f };
			*uParam2 = { 0f, 0f, -162.241f };
			break;
		
		case 12:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 548.9015f, 2668.941f, 42.15f };
			*uParam2 = { 0f, 0f, -82.5f };
			break;
		
		case 13:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2554.875f, 381.3857f, 108.62f };
			*uParam2 = { 0f, 0f, 177.716f };
			break;
		
		case 14:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 2676.212f, 3280.969f, 55.24f };
			*uParam2 = { 0f, 0f, 150.87f };
			break;
		
		case 15:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1729.329f, 6417.123f, 35.03f };
			*uParam2 = { 0f, 0f, 63.641f };
			break;
		
		case 16:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 1959.323f, 3742.29f, 32.34f };
			*uParam2 = { 0f, 0f, 120f };
			break;
		
		case 17:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 24.94562f, -1344.954f, 29.49f };
			*uParam2 = { 0f, 0f, 90f };
			break;
		
		case 18:
			*uParam5 = joaat("mp_m_shopkeep_01");
			*uParam8 = joaat("p_poly_bag_01_s");
			*uParam1 = { 373.5954f, 328.5892f, 103.56f };
			*uParam2 = { 0f, 0f, 75.885f };
			break;
	}
	*uParam9 = 220;
	*uParam10 = 787;
	*uParam3 = { unk_0x8A5E176FF719A014(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f) };
	*uParam4 = (180f + uParam2->f_2);
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam6 = { unk_0x8A5E176FF719A014(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.088f), -0.428174f) };
			*uParam11 = 3;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam6 = { unk_0x8A5E176FF719A014(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.033f), -0.398174f) };
			*uParam11 = 2;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam6 = { unk_0x8A5E176FF719A014(*uParam1, uParam2->f_2, -0.040857f, (0.366089f - 0.077f), -0.378174f) };
			*uParam11 = 3;
			break;
	}
	*uParam7 = { 5f, 0f, uParam2->f_2 };
}

Vector3 func_309(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -711.81f, -916.36f, 18.22f };
			*uParam2 = { -711.74f, -908.75f, 21.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -705.76f, -908.76f, 18.22f };
			*uParam5 = { -705.8f, -903.16f, 21.24f };
			*uParam6 = 2.32f;
			*uParam7 = { -709.02f, -907.72f, 18.22f };
			*uParam8 = { -708.96f, -903.15f, 21.25f };
			*uParam9 = 3.66f;
			*uParam10 = { -707.05f, -907.18f, 18.23f };
			*uParam11 = { -707.04f, -905.9f, 20.51f };
			*uParam12 = 0.75f;
			*uParam13 = { -704.528f, -913.948f, 18f };
			*uParam14 = { -706.528f, -913.948f, 22.221f };
			*uParam15 = 4f;
			*uParam16 = { -711.2905f, -913.7919f, 19.1156f };
			*uParam17 = 1.05f;
			break;
		
		case 1:
			*uParam1 = { -52.86f, -1756.43f, 28.42f };
			*uParam2 = { -47.94f, -1750.6f, 31.93f };
			*uParam3 = 13.92f;
			*uParam4 = { -43.36f, -1754.47f, 28.44f };
			*uParam5 = { -39.78f, -1750.15f, 31.46f };
			*uParam6 = 2.32f;
			*uParam7 = { -45.14f, -1751.51f, 28.43f };
			*uParam8 = { -42.23f, -1748.08f, 31.48f };
			*uParam9 = 3.66f;
			*uParam10 = { -43.3f, -1752.4f, 28.48f };
			*uParam11 = { -42.5f, -1751.44f, 30.71f };
			*uParam12 = 0.75f;
			*uParam13 = { -45.23195f, -1756.996f, 28.42101f };
			*uParam14 = { -47.68424f, -1759.943f, 31.92101f };
			*uParam15 = 1.8f;
			*uParam16 = { -50.83334f, -1754.827f, 29.321f };
			*uParam17 = 1.05f;
			break;
		
		case 2:
			*uParam1 = { 1159.64f, -326.47f, 68.21f };
			*uParam2 = { 1158.33f, -318.91f, 71.71f };
			*uParam3 = 13.92f;
			*uParam4 = { 1164.22f, -317.89f, 68.21f };
			*uParam5 = { 1163.26f, -312.51f, 71.2f };
			*uParam6 = 2.32f;
			*uParam7 = { 1160.91f, -317.34f, 68.21f };
			*uParam8 = { 1160.11f, -313.19f, 71.13f };
			*uParam9 = 3.66f;
			*uParam10 = { 1162.68f, -316.51f, 68.23f };
			*uParam11 = { 1162.46f, -315.28f, 70.49f };
			*uParam12 = 0.75f;
			*uParam13 = { 1164.222f, -323.349f, 68.21f };
			*uParam14 = { 1166.191f, -323.001f, 72.21f };
			*uParam15 = 4f;
			*uParam16 = { 1159.639f, -323.7686f, 69.1051f };
			*uParam17 = 1.05f;
			break;
		
		case 3:
			*uParam1 = { 1699.09f, 4929.01f, 41.06f };
			*uParam2 = { 1705.3f, 4924.67f, 44.58f };
			*uParam3 = 13.92f;
			*uParam4 = { 1701.85f, 4919.78f, 41.06f };
			*uParam5 = { 1706.43f, 4916.54f, 44.1f };
			*uParam6 = 2.32f;
			*uParam7 = { 1704.57f, 4921.8f, 41.06f };
			*uParam8 = { 1708.29f, 4919.18f, 44.1f };
			*uParam9 = 3.66f;
			*uParam10 = { 1703.9f, 4919.88f, 41.09f };
			*uParam11 = { 1704.92f, 4919.15f, 43.36f };
			*uParam12 = 0.75f;
			*uParam13 = { 1698.032f, 4923.538f, 41.069f };
			*uParam14 = { 1696.99f, 4921.831f, 45.069f };
			*uParam15 = 4f;
			*uParam16 = { 1700.856f, 4927.15f, 41.96366f };
			*uParam17 = 1.05f;
			break;
		
		case 4:
			*uParam1 = { -1822.46f, 788.35f, 137.19f };
			*uParam2 = { -1827.54f, 794.02f, 140.72f };
			*uParam3 = 13.92f;
			*uParam4 = { -1823.17f, 798.02f, 137.1f };
			*uParam5 = { -1826.81f, 802.05f, 140.12f };
			*uParam6 = 2.32f;
			*uParam7 = { -1826.25f, 796.63f, 137.16f };
			*uParam8 = { -1829.17f, 799.88f, 140.16f };
			*uParam9 = 3.66f;
			*uParam10 = { -1825.16f, 798.33f, 137.13f };
			*uParam11 = { -1826f, 799.31f, 139.43f };
			*uParam12 = 0.75f;
			*uParam13 = { -1820.332f, 793.679f, 137.084f };
			*uParam14 = { -1818.891f, 795.067f, 141.084f };
			*uParam15 = 4f;
			*uParam16 = { -1823.841f, 790.7311f, 138.0864f };
			*uParam17 = 1.05f;
			break;
		
		case 5:
			*uParam1 = { 1170.182f, 2708.049f, 37.6f };
			*uParam2 = { 1162.385f, 2708.255f, 40.6f };
			*uParam3 = 8.8f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1170.399f, 2716.422f, 37f };
			*uParam8 = { 1162.601f, 2716.628f, 41.19f };
			*uParam9 = 9f;
			*uParam10 = { 1170.7f, 2712.368f, 37.7f };
			*uParam11 = { 1168.3f, 2712.431f, 40.73f };
			*uParam12 = 1.5f;
			*uParam13 = { 1165.149f, 2712.433f, 37.138f };
			*uParam14 = { 1165.132f, 2710.033f, 41.138f };
			*uParam15 = 5f;
			*uParam16 = { 1165.946f, 2709.136f, 37.96316f };
			*uParam17 = 1f;
			break;
		
		case 6:
			*uParam1 = { -2973.31f, 390.75f, 14.04f };
			*uParam2 = { -2964.67f, 390.23f, 17.65f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -2956.98f, 389.73f, 13.21f };
			*uParam8 = { -2964.11f, 390.19f, 17.65f };
			*uParam9 = 7.5f;
			*uParam10 = { -2964.86f, 388.43f, 14.05f };
			*uParam11 = { -2964.98f, 386.49f, 17.63f };
			*uParam12 = 1.72f;
			*uParam13 = { -2964.645f, 391.391f, 14.048f };
			*uParam14 = { -2966.636f, 391.577f, 18.048f };
			*uParam15 = 4.5f;
			*uParam16 = { -2967.906f, 391.0424f, 14.94331f };
			*uParam17 = 1f;
			break;
		
		case 7:
			*uParam1 = { -1226.29f, -902.84f, 11.33f };
			*uParam2 = { -1221.4f, -910.16f, 14.93f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1217.01f, -916.41f, 10.47f };
			*uParam8 = { -1221.13f, -910.58f, 14.89f };
			*uParam9 = 7.5f;
			*uParam10 = { -1222.99f, -911.03f, 11.33f };
			*uParam11 = { -1224.59f, -912.13f, 14.93f };
			*uParam12 = 1.72f;
			*uParam13 = { -1220.512f, -909.343f, 11.331f };
			*uParam14 = { -1221.766f, -907.785f, 15.331f };
			*uParam15 = 4.5f;
			*uParam16 = { -1222.687f, -907.0001f, 12.22635f };
			*uParam17 = 1.15f;
			break;
		
		case 8:
			*uParam1 = { 1141f, -980.98f, 45.42f };
			*uParam2 = { 1132.3f, -982.16f, 48.99f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1124.73f, -983.22f, 44.57f };
			*uParam8 = { 1131.81f, -982.24f, 48.99f };
			*uParam9 = 7.5f;
			*uParam10 = { 1132.21f, -980.35f, 45.42f };
			*uParam11 = { 1131.91f, -978.44f, 49.02f };
			*uParam12 = 1.72f;
			*uParam13 = { 1132.764f, -983.742f, 45.42f };
			*uParam14 = { 1134.692f, -983.21f, 49.42f };
			*uParam15 = 4.5f;
			*uParam16 = { 1135.651f, -982.4113f, 46.31583f };
			*uParam17 = 1.05f;
			break;
		
		case 9:
			*uParam1 = { -1490.78f, -383.33f, 39.16f };
			*uParam2 = { -1484.56f, -377.1f, 42.74f };
			*uParam3 = 7.5f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -1479.17f, -371.69f, 38.33f };
			*uParam8 = { -1484.2f, -376.75f, 42.73f };
			*uParam9 = 7.5f;
			*uParam10 = { -1483.39f, -378.48f, 39.17f };
			*uParam11 = { -1482.01f, -379.86f, 42.77f };
			*uParam12 = 1.72f;
			*uParam13 = { -1485.5f, -376.545f, 39.167f };
			*uParam14 = { -1486.889f, -377.985f, 43.167f };
			*uParam15 = 4.5f;
			*uParam16 = { -1487.306f, -378.922f, 39.81341f };
			*uParam17 = 1.05f;
			break;
		
		case 10:
			*uParam1 = { -3240.12f, 1004.46f, 11.84f };
			*uParam2 = { -3247.19f, 1005.06f, 15.36f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3249.75f, 999.74f, 11.83f };
			*uParam8 = { -3249.05f, 1007.41f, 15.2f };
			*uParam9 = 3.66f;
			*uParam10 = { -3247.71f, 1000.33f, 11.83f };
			*uParam11 = { -3247.59f, 1001.62f, 14.13f };
			*uParam12 = 0.75f;
			*uParam13 = { -3242.573f, 999.168f, 11.835f };
			*uParam14 = { -3242.482f, 1000.365f, 15.835f };
			*uParam15 = 4.2f;
			*uParam16 = { -3241.872f, 1006.54f, 12.73071f };
			*uParam17 = 1f;
			break;
		
		case 11:
			*uParam1 = { -3038.7f, 589.51f, 6.92f };
			*uParam2 = { -3045.47f, 587.31f, 10.45f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { -3045.77f, 581.47f, 6.91f };
			*uParam8 = { -3048.23f, 589.1f, 10.43f };
			*uParam9 = 3.66f;
			*uParam10 = { -3044.12f, 582.75f, 6.9f };
			*uParam11 = { -3044.51f, 583.99f, 9.21f };
			*uParam12 = 0.75f;
			*uParam13 = { -3039.04f, 583.639f, 6.914f };
			*uParam14 = { -3039.453f, 584.766f, 10.914f };
			*uParam15 = 4.2f;
			*uParam16 = { -3041.18f, 590.7718f, 7.808933f };
			*uParam17 = 1f;
			break;
		
		case 12:
			*uParam1 = { 544.21f, 2672.5f, 41.16f };
			*uParam2 = { 545.16f, 2665.44f, 44.68f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 550.96f, 2664.13f, 41.16f };
			*uParam8 = { 542.86f, 2663.05f, 44.69f };
			*uParam9 = 3.66f;
			*uParam10 = { 549.89f, 2665.96f, 41.17f };
			*uParam11 = { 548.61f, 2665.78f, 43.46f };
			*uParam12 = 0.75f;
			*uParam13 = { 549.913f, 2671.202f, 41.161f };
			*uParam14 = { 548.726f, 2671.024f, 45.161f };
			*uParam15 = 4.2f;
			*uParam16 = { 542.5831f, 2670.376f, 42.05651f };
			*uParam17 = 1f;
			break;
		
		case 13:
			*uParam1 = { 2559.12f, 385.39f, 107.62f };
			*uParam2 = { 2552.06f, 385.68f, 111.17f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam10 = { 2551.76f, 380.95f, 107.65f };
			*uParam11 = { 2551.82f, 382.21f, 109.92f };
			*uParam12 = 0.75f;
			*uParam13 = { 2556.854f, 379.973f, 107.627f };
			*uParam14 = { 2556.845f, 381.173f, 111.627f };
			*uParam15 = 4.2f;
			*uParam16 = { 2557.248f, 387.3177f, 108.523f };
			*uParam17 = 1f;
			break;
		
		case 14:
			*uParam1 = { 2681.84f, 3282.62f, 54.24f };
			*uParam2 = { 2675.63f, 3286.07f, 57.79f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 2671.06f, 3282.22f, 54.48f };
			*uParam8 = { 2675.1f, 3289.37f, 57.77f };
			*uParam9 = 3.66f;
			*uParam10 = { 2673.23f, 3281.96f, 54.25f };
			*uParam11 = { 2673.85f, 3283.09f, 56.53f };
			*uParam12 = 0.75f;
			*uParam13 = { 2677.411f, 3278.796f, 54.246f };
			*uParam14 = { 2677.978f, 3279.854f, 58.246f };
			*uParam15 = 4.2f;
			*uParam16 = { 2680.964f, 3285.271f, 55.14115f };
			*uParam17 = 1f;
			break;
		
		case 15:
			*uParam1 = { 1731.25f, 6411.58f, 34.04f };
			*uParam2 = { 1734.35f, 6417.97f, 37.58f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1730.29f, 6422.24f, 34.23f };
			*uParam8 = { 1737.68f, 6418.66f, 37.59f };
			*uParam9 = 3.66f;
			*uParam10 = { 1730.17f, 6420.17f, 34.04f };
			*uParam11 = { 1731.33f, 6419.58f, 36.34f };
			*uParam12 = 0.75f;
			*uParam13 = { 1727.219f, 6415.816f, 34.042f };
			*uParam14 = { 1728.296f, 6415.289f, 38.042f };
			*uParam15 = 4.2f;
			*uParam16 = { 1733.865f, 6412.566f, 34.93724f };
			*uParam17 = 1f;
			break;
		
		case 16:
			*uParam1 = { 1964.96f, 3740.86f, 31.38f };
			*uParam2 = { 1961.43f, 3746.95f, 34.89f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 1955.68f, 3746.02f, 31.4f };
			*uParam8 = { 1962.38f, 3749.91f, 34.72f };
			*uParam9 = 3.66f;
			*uParam10 = { 1957.3f, 3744.68f, 31.35f };
			*uParam11 = { 1958.38f, 3745.33f, 33.63f };
			*uParam12 = 0.75f;
			*uParam13 = { 1959.255f, 3739.774f, 31.349f };
			*uParam14 = { 1960.274f, 3740.408f, 35.349f };
			*uParam15 = 4.2f;
			*uParam16 = { 1965.634f, 3743.55f, 32.24376f };
			*uParam17 = 1f;
			break;
		
		case 17:
			*uParam1 = { 34.84f, -1345.6f, 27f };
			*uParam2 = { 23.34f, -1345.56f, 32f };
			*uParam3 = 7.2f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 27.44f, -1341.815f, 27.01f };
			*uParam8 = { 27.46f, -1337.815f, 32.01f };
			*uParam9 = 9f;
			*uParam10 = { 24.05f, -1341.89f, 27f };
			*uParam11 = { 26.05f, -1341.87f, 32f };
			*uParam12 = 1f;
			*uParam13 = { 23.566f, -1346.956f, 27f };
			*uParam14 = { 25.065f, -1346.901f, 32f };
			*uParam15 = 4f;
			*uParam16 = { 30.97348f, -1347.115f, 29.39393f };
			*uParam17 = 1f;
			break;
		
		case 18:
			*uParam1 = { 376.65f, 323.6f, 102.57f };
			*uParam2 = { 378.35f, 330.47f, 106.12f };
			*uParam3 = 11.21f;
			*uParam4 = { -1f, -1f, -1f };
			*uParam5 = { -1f, -1f, -1f };
			*uParam6 = -1f;
			*uParam7 = { 373.45f, 333.81f, 102.58f };
			*uParam8 = { 381.42f, 331.81f, 106.11f };
			*uParam9 = 3.66f;
			*uParam10 = { 373.79f, 331.72f, 102.58f };
			*uParam11 = { 375.03f, 331.41f, 104.86f };
			*uParam12 = 0.75f;
			*uParam13 = { 371.789f, 326.823f, 102.571f };
			*uParam14 = { 372.957f, 326.548f, 106.571f };
			*uParam15 = 4.2f;
			*uParam16 = { 378.9936f, 325.0343f, 103.4664f };
			*uParam17 = 1f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_310()
{
	func_313();
	func_312();
	func_311();
}

void func_311()
{
	int iVar0;
	
	if (iLocal_82 >= 9)
	{
		if (Global_1B416.f_4E3E.f_29 > 3)
		{
			if (iLocal_82 == 9)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = unk_0x09AC81E49EA267F7(0, 5);
			}
			if (iVar0 < 1)
			{
				Local_66.f_1D0 = 1;
				Global_1B416.f_4E3E.f_29 = 0;
			}
			else
			{
				Local_66.f_1D0 = 0;
				Global_1B416.f_4E3E.f_29++;
			}
		}
		else
		{
			Global_1B416.f_4E3E.f_29++;
		}
	}
	else
	{
		Global_1B416.f_4E3E.f_29++;
	}
}

void func_312()
{
	int iVar0;
	
	if (iLocal_82 >= 3)
	{
		if (iLocal_82 == 3)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0x09AC81E49EA267F7(0, 10);
		}
		if (iVar0 < 1)
		{
			Local_66.f_2.f_C = 1;
		}
		else
		{
			Local_66.f_2.f_C = 0;
		}
	}
}

void func_313()
{
	int iVar0;
	
	if (iLocal_82 >= 6)
	{
		if (iLocal_82 == 6)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = unk_0x09AC81E49EA267F7(0, 7);
		}
		if (iVar0 < 1)
		{
			iLocal_58 = 2;
		}
		else
		{
			iLocal_58 = 1;
		}
	}
}

int func_314()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = (iVar0 + Global_1B416.f_4E3E[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_315(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	*iParam2 = 0;
	fVar0 = SYSTEM::VDIST2(func_297(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= (19 - 1))
	{
		fVar2 = SYSTEM::VDIST2(*uParam0, func_297(iVar1));
		if (fVar2 < fVar0)
		{
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = { func_297(*iParam2) };
}

void func_316(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_21 = iParam1;
	}
}

bool func_317(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_318(int iParam0)
{
	if (Global_A1D7 == 15)
	{
		return 0;
	}
	if (func_319(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_319(int iParam0)
{
	return func_320(iParam0, Global_A1D7);
}

int func_320(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_321()
{
	if (((iLocal_63 == 1 || iLocal_63 == 2) || iLocal_101 == 7) || (unk_0x437347B10A200C4B(Local_66.f_2, 0) && iLocal_65 == 1))
	{
		if (iLocal_63 == 1)
		{
		}
		if (iLocal_63 == 2)
		{
		}
		if (iLocal_101 == 7)
		{
		}
		if (unk_0x437347B10A200C4B(Local_66.f_2, 0) && iLocal_65 == 1)
		{
		}
		Global_1B416.f_4E3E.f_15[iLocal_80] = unk_0xD8A54335F18763BA();
		Global_1B416.f_4E3E.f_2A[iLocal_80] = unk_0x972A296334C9D57B();
	}
	if ((unk_0x58424C49F8924842() && func_332()) && Local_66.f_1D4)
	{
		func_328(&iLocal_80, &iLocal_87, &iLocal_81);
	}
	func_327();
	iLocal_87 = 0;
	iLocal_91 = 0;
	iLocal_92 = 0;
	iLocal_93 = 0;
	if (!bLocal_86)
	{
		unk_0x34D79252800B23FF(5);
	}
	unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
	unk_0x2952D66A502EA873(iLocal_79, 0);
	func_29("SHR_HOLDUP_1", 1);
	func_29("SHR_SNK_TUT", 1);
	if ((func_28("SHR_MENU") || func_28("SHR_HOLDUP_1")) || func_28("SHR_SNK_TUT"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_1(Local_66.f_1D6, 1024))
	{
		if ((unk_0xC844350D5D58C99A(iLocal_98[0]) && unk_0xC844350D5D58C99A(iLocal_98[1])) && unk_0xC844350D5D58C99A(iLocal_98[2]))
		{
			unk_0xF690C84DADBB3551(&(iLocal_98[0]));
			unk_0xF690C84DADBB3551(&(iLocal_98[1]));
			unk_0xF690C84DADBB3551(&(iLocal_98[2]));
		}
	}
	if (iLocal_100 == 2)
	{
		unk_0x8D17794CE3273D70(Local_66.f_1E6.f_1);
	}
	func_322(&Local_96, 0);
	unk_0x10FAF14A60A0DBE1();
}

void func_322(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_324(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_323(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_1F = 0;
	uParam0->f_20 = 4294967295;
	uParam0->f_21 = 1;
}

void func_323(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 4294967295;
}

void func_324(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0 /*2*/], 30))
		{
			func_325(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_1F = 1;
}

void func_325(var uParam0)
{
	func_326(*uParam0, "NULL", uParam0->f_1);
}

void func_326(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xEAE0D21A50E6C7F4(iParam0, 30))
	{
		switch (func_271(iParam0))
		{
			case 0:
				unk_0x71199B01895C6202(iParam2);
				break;
			
			case 1:
				unk_0x8D17794CE3273D70(sParam1);
				break;
			
			case 2:
				unk_0x413168EF79E35C7B(sParam1);
				break;
			
			case 3:
				unk_0xF5A41F3D3B38EFE3(sParam1);
				break;
			
			case 4:
				unk_0xDB8844D4B7C60440(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x2F3540C2227116A3(sParam1);
				break;
			
			case 6:
				unk_0x8C26F31DFF77D124();
				break;
			
			case 7:
				unk_0xB60B60856BF98DCE(iParam2);
				break;
			
			case 8:
				unk_0x11CCD0ACA866C6C5(iParam2, unk_0xEAE0D21A50E6C7F4(iParam0, 26));
				break;
			
			case 9:
				unk_0x29D7581AEF4440C2();
				break;
			
			default:
				break;
		}
	}
}

void func_327()
{
	if (!unk_0x437347B10A200C4B(Local_66.f_2, 0))
	{
		unk_0xA3BF0AA5A2608191(Local_66.f_2);
	}
	if (unk_0xC844350D5D58C99A(Local_66.f_2))
	{
		func_221();
		unk_0x6DAD7906B73F064D(&(Local_66.f_2));
	}
	if (unk_0xC844350D5D58C99A(Local_66.f_56))
	{
		unk_0x6DAD7906B73F064D(&(Local_66.f_56));
	}
	if (!unk_0x437347B10A200C4B(Local_66.f_1C, 0))
	{
		if (iLocal_53 >= 4)
		{
			unk_0x1BF8B16C32704027(Local_66.f_1C, -8f, 1);
			unk_0xDFC6BA855748EB10(Local_66.f_1C, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
		}
	}
	if (unk_0xC844350D5D58C99A(Local_66.f_1C))
	{
		unk_0xEEEE2E5FA6F78DF0(&(Local_66.f_1C));
	}
	if (unk_0xC844350D5D58C99A(Local_66.f_60.f_1))
	{
		unk_0xF690C84DADBB3551(&(Local_66.f_60.f_1));
		unk_0x77ADAEFF81EAE1E4(Local_66.f_1E6.f_6, 0.5f, 303280717, false);
		unk_0x77ADAEFF81EAE1E4(Local_66.f_1E6.f_6, 0.5f, joaat("prop_till_02"), false);
		unk_0x77ADAEFF81EAE1E4(Local_66.f_1E6.f_6, 0.5f, joaat("prop_till_03"), false);
	}
	if (unk_0x762119754C50557A(Local_66.f_1C.f_1))
	{
		unk_0x40B7230FD4C59AA2(Local_66.f_1C.f_1);
	}
	if (func_15(&(Local_66.f_1DD)))
	{
		func_40(&(Local_66.f_1DD));
	}
	if (Local_66.f_1D2)
	{
		if (!bLocal_86)
		{
			unk_0x8D17794CE3273D70(Local_66.f_2.f_F);
		}
		Local_66.f_1D2 = 0;
	}
}

void func_328(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<6> Var1[3];
	struct<8> Var2[2];
	
	iVar0 = func_331(*uParam1, 1, 0);
	StringCopy(&(Var2[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var2[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	MemCopy(&(Var1[1 /*6*/]), {func_330(iParam0)}, 6);
	if (func_329(276, &Var1, &Var2, 2, 4294967295, 0, 0))
	{
		unk_0x6106B2DBBCB1AA39(131, *uParam2, SYSTEM::TO_FLOAT(*uParam2));
		unk_0x6106B2DBBCB1AA39(114, iVar0, SYSTEM::TO_FLOAT(iVar0));
	}
}

int func_329(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x58424C49F8924842())
	{
	}
	if ((!unk_0x28B41A2A2556BCF3() && (unk_0x8BB6DE13A9F3105E() || !unk_0x9AE561F9BC3F06D8())) && unk_0x393EAEC306A49C71())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == 4294967295)
		{
			if (unk_0x080E9D045AEE5605())
			{
				Var2 = { func_147(unk_0xD803B885F5E47A62()) };
				if (unk_0xF2EC2A39FF9E838D(&Var2))
				{
					if (unk_0xD9DA83C40D038174(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x8CD06866876216F2() && Global_258538.f_3)
			{
				unk_0x14388B84A94BC0BD(&Var0, &(Global_195CCB.f_A));
			}
			else
			{
				unk_0x31FF86F0FD3CE715(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x28B41A2A2556BCF3())
	{
	}
	if (!unk_0x8BB6DE13A9F3105E())
	{
	}
	if (unk_0x9AE561F9BC3F06D8())
	{
	}
	if (!unk_0x393EAEC306A49C71())
	{
	}
	return 0;
}

struct<8> func_330(var uParam0)
{
	struct<8> Var0;
	
	switch (*uParam0)
	{
		case 4294967294:
		case 4294967295:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			StringCopy(&Var0, "SHR_GAS", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "SHR_LIQ1", 32);
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			StringCopy(&Var0, "SHR_LIQ2", 32);
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			StringCopy(&Var0, "SHR_CONV", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

int func_331(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_332()
{
	if (func_334() && func_333(0))
	{
		return 1;
	}
	return 0;
}

var func_333(int iParam0)
{
	return Global_140676[iParam0];
}

var func_334()
{
	return func_333(func_78() + 1);
}

