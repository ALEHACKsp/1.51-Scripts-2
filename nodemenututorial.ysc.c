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
	struct<114> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
#endregion

void __EntryFunction__()
{
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
	func_96();
	while (true)
	{
		if (func_84())
		{
			func_81();
			return;
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	if (!bLocal_46)
	{
		bLocal_46 = func_80(&Local_45);
		return;
	}
	func_2(&Local_45);
}

int func_2(int iParam0)
{
	if (!func_79(iParam0))
	{
		return 1;
	}
	if (func_15(iParam0))
	{
		return 1;
	}
	func_3(iParam0);
	return 0;
}

int func_3(int iParam0)
{
	bool bVar0;
	
	bVar0 = func_12(iParam0);
	if (bVar0)
	{
		if (!func_6(iParam0))
		{
			return 0;
		}
	}
	func_5(iParam0);
	if (!bVar0)
	{
		func_4(iParam0);
	}
	return 1;
}

void func_4(int iParam0)
{
	if (iParam0->f_6F == 0)
	{
		return;
	}
	Call_Loc(iParam0->f_6F);
}

void func_5(int iParam0)
{
	if (iParam0->f_70 == 0)
	{
		return;
	}
	Call_Loc(iParam0->f_70);
}

int func_6(int iParam0)
{
	if (!func_80(iParam0))
	{
		return 0;
	}
	if (!func_11(iParam0))
	{
		return 0;
	}
	func_9(iParam0, 0);
	func_7(iParam0, 1);
	return 1;
}

void func_7(int iParam0, int iParam1)
{
	func_8(iParam0, iParam1);
}

void func_8(int iParam0, int iParam1)
{
	unk_0x0674E58A79778E99(iParam0, iParam1);
}

void func_9(int iParam0, int iParam1)
{
	func_10(iParam0, iParam1);
}

void func_10(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(iParam0, iParam1);
}

int func_11(int iParam0)
{
	if (iParam0->f_6B == 0)
	{
		return 1;
	}
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_6B);
	return StackVal;
}

bool func_12(int iParam0)
{
	return (func_13(iParam0, 1) || !func_13(iParam0, 0));
}

bool func_13(int iParam0, int iParam1)
{
	return func_14(iParam0, iParam1);
}

bool func_14(var uParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, iParam1);
}

int func_15(int iParam0)
{
	func_76(iParam0);
	func_71();
	if (func_53(iParam0))
	{
		return 0;
	}
	if (!func_13(iParam0, 1))
	{
		func_47(iParam0);
	}
	func_43(iParam0);
	if (func_13(iParam0, 2))
	{
		func_16(iParam0, 0);
		return 1;
	}
	return 0;
}

void func_16(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_7(iParam0, 2);
	}
	func_39(iParam0);
	func_7(iParam0, 3);
	func_35(iParam0);
	func_18(iParam0, 0);
	func_17(iParam0);
}

void func_17(int iParam0)
{
	if (iParam0->f_71 == 0)
	{
		return;
	}
	Call_Loc(iParam0->f_71);
}

int func_18(int iParam0, int iParam1)
{
	struct<33> Var0;
	
	if (!func_30(iParam0, iParam1))
	{
		return 0;
	}
	iParam0->f_1 = iParam1;
	Var0 = { func_29(iParam0) };
	unk_0xBFC87303F2B2ED31(&(iParam0->f_48), &Var0, 33);
	if (!func_28(&(iParam0->f_6), iParam1, &(iParam0->f_48)))
	{
		return 0;
	}
	if (!func_27(&(iParam0->f_48)) && func_26(&(iParam0->f_48)))
	{
		func_25(iParam0, iParam0->f_1);
		func_24(&(iParam0->f_48));
	}
	else
	{
		func_25(iParam0, 4294967295);
	}
	func_19(iParam0, &(iParam0->f_48));
	return 1;
}

void func_19(int iParam0, var uParam1)
{
	int iVar0;
	char* sVar1;
	
	if (func_14(iParam0, 3))
	{
		func_22(iParam0, func_23(uParam1));
		return;
	}
	iVar0 = func_21(uParam1);
	if (iVar0 != 0)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam0->f_1);
		Call_Loc(iVar0);
		return;
	}
	sVar1 = func_20(uParam1);
	if (unk_0xEA6BC48857E0AC4C(sVar1))
	{
		return;
	}
	func_22(iParam0, sVar1);
}

var func_20(var uParam0)
{
	return uParam0->f_4;
}

var func_21(var uParam0)
{
	return uParam0->f_B;
}

void func_22(var uParam0, char* sParam1)
{
	if (uParam0->f_6C == 0)
	{
		return;
	}
	Stack.Push(sParam1);
	Call_Loc(uParam0->f_6C);
}

var func_23(var uParam0)
{
	return uParam0->f_5;
}

int func_24(var uParam0)
{
	if (uParam0->f_11 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_11);
	return StackVal;
}

void func_25(var uParam0, int iParam1)
{
	if (uParam0->f_6D == 0)
	{
		return;
	}
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6D);
}

int func_26(var uParam0)
{
	if (uParam0->f_F == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_F);
	return StackVal;
}

int func_27(var uParam0)
{
	if (uParam0->f_E == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_E);
	return StackVal;
}

int func_28(var uParam0, int iParam1, var uParam2)
{
	if (uParam0->f_9 == 0)
	{
		return 0;
	}
	Stack.Push(iParam1);
	Stack.Push(uParam2);
	Call_Loc(uParam0->f_9);
	switch (StackVal)
	{
		case 0:
			return 1;
		
		case 2:
			return 1;
		
		case 1:
			return 0;
		
		default:
	}
	return 0;
}

struct<33> func_29(var uParam0)
{
	struct<33> Var0;
	
	if (uParam0->f_69 != 0)
	{
		Call_Loc(uParam0->f_69);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal;
	}
	Var0.f_8 = 4294967295;
	return Var0;
}

int func_30(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_31(&(iParam0->f_6));
	if (unk_0x91E3F625EF57450D(2))
	{
		iVar0 = 4294967295;
	}
	if (iParam1 < iVar0 || iParam1 > iVar1)
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0)
{
	return func_32((func_33(uParam0) - 1), 0);
}

int func_32(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_33(var uParam0)
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	
	iVar0 = func_34(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (uParam0->f_8 == 4294967295)
	{
		uParam0->f_8 = 0;
		Var1.f_8 = 4294967295;
		iVar2 = 4294967295;
		while (iVar2 != 2)
		{
			Stack.Push(uParam0->f_8);
			Stack.Push(&Var1);
			Call_Loc(iVar0);
			iVar2 = StackVal;
			if (iVar2 != 2)
			{
				uParam0->f_8++;
			}
		}
	}
	return uParam0->f_8;
}

int func_34(var uParam0)
{
	return uParam0->f_9;
}

void func_35(int iParam0)
{
	func_36(iParam0, &(iParam0->f_27), 1, 1);
}

void func_36(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	unk_0xBFC87303F2B2ED31(&(iParam0->f_6), uParam1, 33);
	if (bParam3)
	{
		func_38(&(iParam0->f_6));
	}
	if (bParam2)
	{
		iVar0 = func_37(&(iParam0->f_6));
		func_18(iParam0, iVar0);
		func_76(iParam0);
	}
	func_9(iParam0, 1);
}

var func_37(var uParam0)
{
	return uParam0->f_6;
}

void func_38(var uParam0)
{
	if (uParam0->f_15 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_15);
}

void func_39(int iParam0)
{
	if (func_13(iParam0, 5) && func_42(&(iParam0->f_48)))
	{
		func_40(&(iParam0->f_48), 3, "");
	}
	func_7(iParam0, 5);
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_5 = 0;
}

void func_40(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = func_41(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(iParam1);
	Stack.Push(sParam2);
	Call_Loc(iVar0);
}

int func_41(var uParam0)
{
	return uParam0->f_20;
}

bool func_42(var uParam0)
{
	return func_41(uParam0) != 0;
}

void func_43(int iParam0)
{
	func_45(iParam0);
	if (func_44(&(iParam0->f_48)))
	{
		func_19(iParam0, &(iParam0->f_48));
	}
}

bool func_44(var uParam0)
{
	return uParam0->f_C;
}

void func_45(int iParam0)
{
	if (func_46(&(iParam0->f_48)))
	{
		func_9(iParam0, 1);
	}
}

int func_46(var uParam0)
{
	if (uParam0->f_16 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_16);
	return StackVal;
}

void func_47(int iParam0)
{
	if (!func_52(&(iParam0->f_48)))
	{
		if (func_50(&(iParam0->f_6), iParam0))
		{
			func_9(iParam0, 1);
		}
	}
	if (func_48(&(iParam0->f_48), iParam0))
	{
		func_9(iParam0, 1);
	}
}

int func_48(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_49(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Stack.Push(iParam1);
	Stack.Push(uParam0);
	Call_Loc(iVar0);
	return StackVal;
}

var func_49(var uParam0)
{
	return uParam0->f_1C;
}

int func_50(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_51(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Stack.Push(uParam1);
	Stack.Push(uParam0);
	Call_Loc(iVar0);
	return StackVal;
}

var func_51(var uParam0)
{
	return uParam0->f_1F;
}

bool func_52(var uParam0)
{
	return uParam0->f_1D;
}

int func_53(int iParam0)
{
	if (func_13(iParam0, 3))
	{
		func_62(iParam0);
		return 1;
	}
	if (func_13(iParam0, 5))
	{
		func_54(iParam0);
		return 1;
	}
	return 0;
}

void func_54(int iParam0)
{
	if (!func_42(&(iParam0->f_48)))
	{
		func_7(iParam0, 5);
		return;
	}
	if (!func_55(&(iParam0->f_3), &(iParam0->f_4), &(iParam0->f_5), 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 4294967295, 4294967295, 0, 0))
	{
		return;
	}
	func_40(&(iParam0->f_48), iParam0->f_3, unk_0x839DD4A099BDBEE3());
	func_39(iParam0);
	func_9(iParam0, 1);
}

int func_55(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, int iParam30, int iParam31, bool bParam32, char* sParam33)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<16> Var10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0xD0BB2359EC70FC37() || unk_0x757EF87A33649210())
	{
		return 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (bParam3)
			{
				if (iParam7 == 6)
				{
					iVar6 = 121;
				}
				else if (iParam7 == 7)
				{
					iVar6 = 63;
				}
				else if (func_61())
				{
					iVar6 = 21;
				}
				else
				{
					iVar6 = 51;
				}
				if (*uParam1 == 0)
				{
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						if (func_61())
						{
							sVar4 = "FMMC_KEY_TIS2SJ";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP2";
						}
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_KEY_TIP7";
						iVar6 = 21;
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_KEY_TIP5";
						if (unk_0x8A22C4C08282BF26(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_KEY_TIP6";
						if (unk_0x8A22C4C08282BF26(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_KEY_TIP10";
					}
					else if (iParam7 == 8)
					{
						sVar4 = "FMMC_KEY_TXT7";
					}
					else if (iParam7 == 9)
					{
						sVar4 = "FMMC_KEY_TXT8";
					}
					else if (iParam7 == 10)
					{
						sVar4 = "FMMC_KEY_VSS";
					}
				}
				else if (func_61())
				{
					sVar4 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar4 = "FMMC_KEY_TIP2F";
				}
				if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
				{
					sVar5 = sVar4;
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						sVar4 = "FMMC_SS_RL_35";
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_SS_RL_32";
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_SS_RL_33";
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_SS_RL_34";
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_SS_RL_49";
					}
					else if (iParam7 == 7)
					{
						sVar4 = "FMMC_SS_RL_57";
					}
				}
				if (unk_0x0EFF6B4415DAF4A1())
				{
					iVar7 = 6;
				}
				else if (unk_0xB3260A60545D3F11() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (bParam24)
				{
					if (bParam26)
					{
						sVar4 = "LINE_NUMBER";
					}
					else
					{
						sVar4 = "WEB_SEARCH";
					}
				}
				if (unk_0xEA6BC48857E0AC4C(sParam5))
				{
					unk_0x9D51BC08CB21B1BF(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					unk_0x9D51BC08CB21B1BF(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (unk_0x0EFF6B4415DAF4A1())
				{
					iVar8 = 6;
				}
				else if (unk_0xB3260A60545D3F11() == 0)
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (bParam4)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (unk_0xB3260A60545D3F11() == 10)
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 25;
					}
					if (func_60())
					{
						iVar9 = 64;
					}
					unk_0xC8272323B4ECB9A3(2);
					if (unk_0xEA6BC48857E0AC4C(&(Global_440000.f_2F9B5)))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, &(Global_440000.f_2F9B5), "", "", "", iVar9);
					}
				}
				else if (bParam32)
				{
					sVar4 = "CST_KEY_TEXT";
					iVar9 = 63;
					unk_0xC8272323B4ECB9A3(2);
					if (unk_0xEA6BC48857E0AC4C(&(Global_440000.f_38FF1)))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, &(Global_440000.f_38FF1), "", "", "", iVar9);
					}
				}
				else if (bParam25)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_BLIMP";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					unk_0xC8272323B4ECB9A3(2);
					if (unk_0xEA6BC48857E0AC4C(&(Global_440000.f_38FF1)))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, &(Global_440000.f_38FF1), "", "", "", iVar9);
					}
				}
				else if (iParam30 != 4294967295)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "DMC_HTM_EH";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					unk_0xC8272323B4ECB9A3(2);
					Var10 = { Global_440000.f_39011[iParam30 /*16*/] };
					if (iParam31 > 4294967295)
					{
						Var10 = { Global_440000.f_39062[iParam30 /*65*/][iParam31 /*16*/] };
					}
					if (unk_0xEA6BC48857E0AC4C(&Var10))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, &Var10, "", "", "", iVar9);
					}
				}
				else if (bParam27)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					else
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					iVar9 = 60;
					unk_0xC8272323B4ECB9A3(2);
					unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam13)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0xA3F916BCE430ED26())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam33))
					{
						sVar4 = sParam33;
					}
					iVar9 = 63;
					unk_0xC8272323B4ECB9A3(2);
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (unk_0xB3260A60545D3F11() == 0)
					{
						iVar9 = 63;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPT";
						}
						else if (*uParam1 == 4294967293)
						{
							sVar4 = "FMMC_KEY_TIPTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPTF";
						}
					}
					else
					{
						iVar9 = 63;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_ALTT";
						}
						else if (*uParam1 == 4294967293)
						{
							sVar4 = "FMMC_KEY_ALTTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_ALTTF";
						}
					}
					if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar11 = 0;
					while (iVar11 <= 7)
					{
						if (unk_0x2EBF5002C6B6A06C(&(Global_440000.f_2FA4C[iVar11 /*16*/])))
						{
							StringCopy(&(Global_440000.f_2FA4C[iVar11 /*16*/]), "", 64);
						}
						iVar11++;
					}
					unk_0x8F5E134F69E934A4(iVar8, sVar4, sVar5, &(Global_440000.f_2FA4C[0 /*16*/]), &(Global_440000.f_2FA4C[1 /*16*/]), &(Global_440000.f_2FA4C[2 /*16*/]), &(Global_440000.f_2FA4C[3 /*16*/]), &(Global_440000.f_2FA4C[4 /*16*/]), &(Global_440000.f_2FA4C[5 /*16*/]), &(Global_440000.f_2FA4C[6 /*16*/]), &(Global_440000.f_2FA4C[7 /*16*/]), iVar9);
				}
				else if (bParam6)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP4";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP4F";
					}
					if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					if (unk_0xEA6BC48857E0AC4C(&(Global_440000.f_F9DE[iParam16 /*42*/].f_6[0 /*16*/])))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", 126);
					}
					else
					{
						iVar12 = 0;
						while (iVar12 <= 1)
						{
							if (unk_0x2EBF5002C6B6A06C(&(Global_440000.f_F9DE[iParam16 /*42*/].f_6[iVar12 /*16*/])))
							{
								StringCopy(&(Global_440000.f_F9DE[iParam16 /*42*/].f_6[iVar12 /*16*/]), "", 64);
							}
							iVar12++;
						}
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, &(Global_440000.f_F9DE[iParam16 /*42*/].f_6[0 /*16*/]), &(Global_440000.f_F9DE[iParam16 /*42*/].f_6[1 /*16*/]), "", "", 126);
					}
				}
				else if (bParam8)
				{
					iVar9 = 61;
					if (bParam11)
					{
						if (func_61())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_SOD";
							}
							else if (*uParam1 == 4294967295)
							{
								sVar4 = "CELL_EMASH_SODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_SODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "CELL_EMAIL_SOD";
						}
						else if (*uParam1 == 4294967295)
						{
							sVar4 = "CELL_EMAIL_SODE";
						}
						else
						{
							sVar4 = "CELL_EMAIL_SODF";
						}
						if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
						{
							sVar5 = sVar4;
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_61())
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8S";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8FS";
						}
						if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
						iVar9 = 21;
					}
					else
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8F";
						}
						if (unk_0xA3F916BCE430ED26())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam12)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP9";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP9F";
					}
					if (unk_0xA3F916BCE430ED26())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N";
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, "", "", "", "", 16);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(iVar8, sVar4, sVar5, sParam5, "", "", "", 16);
					}
				}
				else if (bParam14)
				{
					iVar9 = 16;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (unk_0xA3F916BCE430ED26())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N";
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam28)
				{
					iVar9 = 16;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIPTN";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPTNF";
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam15)
				{
					iVar9 = 61;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (unk_0xDC30EF462887322E())
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 20;
					}
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP14S";
					}
					else if (*uParam1 == 4294967295)
					{
						sVar4 = "FMMC_KEY_TIP14ES";
					}
					else if (*uParam1 == 4294967294)
					{
						sVar4 = "FMMC_KEY_TIP14OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP14FS";
					}
					if (unk_0xA3F916BCE430ED26())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N";
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam29)
				{
					iVar9 = 15;
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP16S";
					}
					else if (*uParam1 == 4294967295)
					{
						sVar4 = "FMMC_KEY_TIP16ES";
					}
					else if (*uParam1 == 4294967294)
					{
						sVar4 = "FMMC_KEY_TIP16OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP16FS";
					}
					if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP16IS";
					}
					if (unk_0xA3F916BCE430ED26())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP16N";
					}
					unk_0xC8272323B4ECB9A3(64);
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam18 > 0)
				{
					if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (bParam20)
					{
						sVar4 = "FMMC_KEY_TIP15B";
					}
					else if (bParam21)
					{
						sVar4 = "FMMC_KEY_TIP15U";
					}
					else if (bParam19)
					{
						sVar4 = "FMMC_KEY_TIP15N";
					}
					else if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP15I";
					}
					else if (*uParam1 == 0)
					{
						if (iParam18 == 2)
						{
							sVar4 = "FMMC_MCK_TIP15";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP15";
						}
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP15F";
					}
					if (unk_0xEA6BC48857E0AC4C(sParam5))
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0x9D51BC08CB21B1BF(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (unk_0xB3260A60545D3F11() == 0)
					{
						iVar9 = 501;
						if (bParam11)
						{
							if (func_61())
							{
								if (*uParam1 == 0)
								{
									sVar4 = "CELL_EMASH_BOD";
								}
								else if (*uParam1 == 4294967295)
								{
									sVar4 = "CELL_EMASH_BODE";
								}
								else
								{
									sVar4 = "CELL_EMASH_BODF";
								}
							}
							else if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMAIL_BOD";
							}
							else if (*uParam1 == 4294967295)
							{
								sVar4 = "CELL_EMAIL_BODE";
							}
							else
							{
								sVar4 = "CELL_EMAIL_BODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP3";
						}
						else if (*uParam1 == 4294967295)
						{
							sVar4 = "FMMC_KEY_TIP3E";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP3F";
						}
					}
					else
					{
						iVar9 = 251;
						if (func_61())
						{
							iVar9 = 150;
						}
						if (bParam11)
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_BOD";
							}
							else if (*uParam1 == 4294967295)
							{
								sVar4 = "CELL_EMASH_BODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_BODF";
							}
						}
						else if (func_61())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "FMMC_KEY_TIPSS";
							}
							else if (*uParam1 == 4294967295)
							{
								sVar4 = "FMMC_KEY_TIPSSE";
							}
							else
							{
								sVar4 = "FMMC_KEY_TIPSSF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPS";
						}
						else if (*uParam1 == 4294967295)
						{
							sVar4 = "FMMC_KEY_TIPSE";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPSF";
						}
					}
					if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M20";
						if (bParam11)
						{
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					iVar13 = 0;
					while (iVar13 <= 7)
					{
						if (unk_0x2EBF5002C6B6A06C(&(Global_440000.f_2F9CB[iVar13 /*16*/])))
						{
							StringCopy(&(Global_440000.f_2F9CB[iVar13 /*16*/]), "", 64);
						}
						iVar13++;
					}
					if (!unk_0xEA6BC48857E0AC4C(sParam33))
					{
						sVar4 = sParam33;
					}
					if (bParam11)
					{
						unk_0x8F5E134F69E934A4(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						unk_0x8F5E134F69E934A4(iVar8, sVar4, sVar5, &(Global_440000.f_2F9CB[0 /*16*/]), &(Global_440000.f_2F9CB[1 /*16*/]), &(Global_440000.f_2F9CB[2 /*16*/]), &(Global_440000.f_2F9CB[3 /*16*/]), &(Global_440000.f_2F9CB[4 /*16*/]), &(Global_440000.f_2F9CB[5 /*16*/]), &(Global_440000.f_2F9CB[6 /*16*/]), &(Global_440000.f_2F9CB[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_193777, "", 64);
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0xDAC65F45B0B2D176();
			switch (*uParam0)
			{
				case 0:
					return 0;
				
				case 3:
					*uParam2 = 0;
					*uParam0 = 0;
					*uParam1 = 0;
					return 0;
				
				case 2:
					*uParam1 = 0;
					return 0;
				
				case 1:
					if ((bParam4 || bParam13) || bParam29)
					{
						if (unk_0xEA6BC48857E0AC4C(&Global_193777))
						{
							StringCopy(&Global_193777, unk_0x839DD4A099BDBEE3(), 64);
							if (unk_0xEA6BC48857E0AC4C(&Global_193777))
							{
								*uParam1 = 0;
								return 1;
							}
							iVar1 = unk_0x4880526EC51D1C27(unk_0x839DD4A099BDBEE3());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0xEA6BC48857E0AC4C(&Global_193777))
									{
										if (unk_0x7F8A39872A07D2CE(" ", unk_0xA739D71DFFCCC22C(&Global_193777, 0, 1)))
										{
											iVar2 = unk_0x4880526EC51D1C27(&Global_193777);
											StringCopy(&Global_193777, unk_0xA739D71DFFCCC22C(&Global_193777, 1, iVar2), 64);
										}
									}
									else
									{
										*uParam1 = 0;
										return 1;
									}
								}
								iVar3++;
							}
						}
					}
					if (func_60())
					{
						*uParam1 = 0;
						return 1;
					}
					if (unk_0x9F618E6F8EA8EFDE(*uParam1))
					{
						if (!unk_0x3E3CF43636981693(*uParam1))
						{
							unk_0xBBCE9616B024A2BF();
							iVar0 = unk_0xC5588D399205725D(*uParam1);
							switch (iVar0)
							{
								case 0:
									if (bParam9)
									{
										StringCopy(&Global_193777, unk_0x839DD4A099BDBEE3(), 64);
										iVar1 = unk_0x4880526EC51D1C27(&Global_193777);
										iVar3 = 0;
										while (iVar3 <= (iVar1 - 1))
										{
											if (*uParam2 != 0)
											{
												if (!unk_0xEA6BC48857E0AC4C(&Global_193777))
												{
													if (unk_0x7F8A39872A07D2CE(" ", unk_0xA739D71DFFCCC22C(&Global_193777, iVar3, iVar3 + 1)))
													{
														*uParam1 = 4294967293;
													}
												}
											}
											iVar3++;
										}
									}
									if (*uParam1 != 4294967293)
									{
										*uParam1 = 0;
										return 1;
									}
									else
									{
										*uParam2 = 0;
										*uParam0 = 0;
										return 0;
									}
									break;
								
								case 1:
									*uParam2 = 0;
									*uParam0 = 0;
									return 0;
									break;
								
								case 4294967295:
									*uParam2 = 0;
									*uParam0 = 3;
									*uParam1 = 0;
									func_59(1);
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (unk_0x8A22C4C08282BF26(joaat("appinternet")) == 0)
							{
								unk_0xBBCE9616B024A2BF();
								*uParam1 = 0;
								return 1;
							}
						}
						break;
					}
					if (bParam4)
					{
						if (bParam22)
						{
							unk_0xAA328C07568EE96C(&Global_193777, uParam1);
						}
						else
						{
							unk_0xDE39D2F0ED5FFA62(&Global_193777, uParam1);
						}
					}
					else if (unk_0xEA6BC48857E0AC4C(unk_0x839DD4A099BDBEE3()))
					{
						*uParam1 = 4294967294;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0xBBCE9616B024A2BF();
						return 0;
					}
					else if (bParam22)
					{
						unk_0xAA328C07568EE96C(unk_0x839DD4A099BDBEE3(), uParam1);
					}
					else
					{
						unk_0xDE39D2F0ED5FFA62(unk_0x839DD4A099BDBEE3(), uParam1);
					}
					if (unk_0xDC30EF462887322E())
					{
						if ((!unk_0x58424C49F8924842() || func_57() == 0) || func_56() == 1)
						{
							*uParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						unk_0xFCC7D1ED80D1900C("ERROR_CHECKYACHTNAME");
						unk_0x9A681BEC95A1B92E(1);
					}
					else if (bParam29)
					{
						unk_0xFCC7D1ED80D1900C("ERROR_CHECKVEHICLENAME");
						unk_0x9A681BEC95A1B92E(1);
					}
					else
					{
						unk_0xFCC7D1ED80D1900C("ERROR_CHECKPROFANITY");
						unk_0x9A681BEC95A1B92E(1);
					}
					if (!unk_0x9F618E6F8EA8EFDE(*uParam1))
					{
						if (!unk_0xEA6BC48857E0AC4C(&Global_193777))
						{
							*uParam1 = 4294967295;
						}
						else
						{
							*uParam1 = 4294967294;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0xBBCE9616B024A2BF();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_56()
{
	if (!func_57())
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	if (func_58())
	{
		return 0;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_58()
{
	return Global_258DFD;
}

void func_59(int iParam0)
{
	Global_258DFD = iParam0;
}

bool func_60()
{
	return unk_0xC146D5FBD23C6954(2532323046);
}

int func_61()
{
	if ((((unk_0xB3260A60545D3F11() == 7 || unk_0xB3260A60545D3F11() == 8) || unk_0xB3260A60545D3F11() == 9) || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 12)
	{
		return 1;
	}
	return 0;
}

void func_62(int iParam0)
{
	if (unk_0xB9132A06AE472728(2, 176) || (unk_0x91E3F625EF57450D(2) && unk_0xB9132A06AE472728(2, 237)))
	{
		func_63(iParam0, 1, 1);
		return;
	}
	if (unk_0xB9132A06AE472728(2, 177))
	{
		func_7(iParam0, 3);
		func_9(iParam0, 1);
	}
}

int func_63(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_69(iParam0))
	{
		return 0;
	}
	if (!func_68(&(iParam0->f_48)))
	{
		return 0;
	}
	func_18(iParam0, iParam0->f_1);
	if (!func_67(iParam0))
	{
		return 1;
	}
	if (!func_66(iParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		func_64(iParam0);
	}
	if (func_14(&(iParam0->f_48.f_7), 1))
	{
		func_9(iParam0, 2);
	}
	if (func_34(&(iParam0->f_48)) == 0)
	{
		return 0;
	}
	func_36(iParam0, &(iParam0->f_48), 1, bParam2);
	if (func_14(&(iParam0->f_48.f_7), 2))
	{
		func_63(iParam0, 1, 1);
	}
	func_9(iParam0, 1);
	return 1;
}

void func_64(int iParam0)
{
	func_65(&(iParam0->f_48));
}

void func_65(var uParam0)
{
	if (uParam0->f_13 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_13);
}

int func_66(int iParam0)
{
	if (!func_13(iParam0, 5) && func_42(&(iParam0->f_48)))
	{
		func_9(iParam0, 5);
		return 0;
	}
	func_7(iParam0, 5);
	return 1;
}

int func_67(int iParam0)
{
	if (!func_13(iParam0, 3) && !unk_0xEA6BC48857E0AC4C(func_23(&(iParam0->f_48))))
	{
		func_9(iParam0, 3);
		func_9(iParam0, 1);
		return 0;
	}
	func_7(iParam0, 3);
	return 1;
}

int func_68(var uParam0)
{
	if (uParam0->f_D == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_D);
	return StackVal;
}

bool func_69(var uParam0)
{
	return func_70(&(uParam0->f_48));
}

int func_70(var uParam0)
{
	if (uParam0->f_1A == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_1A);
	return StackVal;
}

void func_71()
{
	func_75();
	func_74();
	func_73();
	func_72();
}

void func_72()
{
	unk_0x38C3A68D7861DCFD(0, 167, 1);
	unk_0x38C3A68D7861DCFD(0, 166, 1);
	unk_0x38C3A68D7861DCFD(0, 168, 1);
	unk_0x38C3A68D7861DCFD(0, 169, 1);
	unk_0x38C3A68D7861DCFD(0, 19, 1);
}

void func_73()
{
	unk_0x38C3A68D7861DCFD(0, 74, 1);
	unk_0x38C3A68D7861DCFD(0, 85, 1);
	unk_0x38C3A68D7861DCFD(0, 0, 1);
	unk_0x38C3A68D7861DCFD(0, 80, 1);
	unk_0x38C3A68D7861DCFD(0, 137, 1);
	unk_0x38C3A68D7861DCFD(0, 136, 1);
}

void func_74()
{
	unk_0x38C3A68D7861DCFD(0, 140, 1);
	unk_0x38C3A68D7861DCFD(0, 141, 1);
	unk_0x38C3A68D7861DCFD(0, 143, 1);
	unk_0x38C3A68D7861DCFD(0, 47, 1);
	unk_0x38C3A68D7861DCFD(0, 51, 1);
	unk_0x38C3A68D7861DCFD(0, 45, 1);
	unk_0x38C3A68D7861DCFD(0, 55, 1);
	unk_0x38C3A68D7861DCFD(0, 21, 1);
	unk_0x38C3A68D7861DCFD(0, 73, 1);
	unk_0x38C3A68D7861DCFD(0, 0, 1);
}

void func_75()
{
	unk_0x38C3A68D7861DCFD(0, 37, 1);
	unk_0x38C3A68D7861DCFD(0, 157, 1);
	unk_0x38C3A68D7861DCFD(0, 158, 1);
	unk_0x38C3A68D7861DCFD(0, 159, 1);
	unk_0x38C3A68D7861DCFD(0, 160, 1);
	unk_0x38C3A68D7861DCFD(0, 161, 1);
	unk_0x38C3A68D7861DCFD(0, 162, 1);
	unk_0x38C3A68D7861DCFD(0, 163, 1);
	unk_0x38C3A68D7861DCFD(0, 164, 1);
	unk_0x38C3A68D7861DCFD(0, 165, 1);
	unk_0x38C3A68D7861DCFD(0, 14, 1);
	unk_0x38C3A68D7861DCFD(0, 15, 1);
	unk_0x38C3A68D7861DCFD(0, 53, 1);
	unk_0x38C3A68D7861DCFD(0, 54, 1);
}

void func_76(var uParam0)
{
	if (func_27(&(uParam0->f_48)) || !func_26(&(uParam0->f_48)))
	{
		func_77(uParam0, 1);
	}
}

void func_77(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<33> Var3;
	
	iVar1 = iParam0->f_1;
	iVar2 = func_33(&(iParam0->f_6));
	Var3.f_8 = 4294967295;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		Var3 = { func_29(iParam0) };
		iVar1 = (iVar1 + iParam1);
		iVar1 = func_78(iVar1, iVar2);
		if (!func_28(&(iParam0->f_6), iVar1, &Var3))
		{
			return;
		}
		if (!func_27(&Var3) && func_26(&Var3))
		{
		}
		else
		{
			iVar0++;
		}
	}
	func_18(iParam0, iVar1);
}

int func_78(int iParam0, int iParam1)
{
	return (((iParam0 % iParam1) + iParam1) % iParam1);
}

bool func_79(var uParam0)
{
	return !func_13(uParam0, 2);
}

int func_80(int iParam0)
{
	if (iParam0->f_6A == 0)
	{
		return 1;
	}
	Call_Loc(iParam0->f_6A);
	return StackVal;
}

void func_81()
{
	func_82(&Local_45);
	unk_0x10FAF14A60A0DBE1();
}

void func_82(int iParam0)
{
	func_83(iParam0);
	func_7(iParam0, 0);
	func_7(iParam0, 1);
}

void func_83(var uParam0)
{
	if (uParam0->f_6E == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_6E);
}

int func_84()
{
	var uVar0;
	
	func_92(&uVar0);
	if (Global_140856 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_91())
	{
		return 1;
	}
	if (Global_2594CA)
	{
		return 1;
	}
	if (func_90())
	{
		return 1;
	}
	if (func_89(159))
	{
		if (!func_88())
		{
			return 1;
		}
	}
	if (func_89(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_85() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_85()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_85()
{
	switch (func_87())
	{
		case 0:
			return func_86();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_86()
{
	switch (Global_259530)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_87()
{
	return Global_7830;
}

bool func_88()
{
	return Global_2564C8.f_256;
}

int func_89(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_90()
{
	return Global_258C08;
}

bool func_91()
{
	return Global_2564C8.f_251;
}

void func_92(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x218F818E64020C17(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 2441846426:
					func_93(iVar0);
					break;
				
				case 589125870:
					unk_0x218F818E64020C17(1, iVar0, &vVar3, 4);
					if (vVar3.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_93(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_95(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_94(iVar2, &bVar3))
						{
							unk_0x920D29D81E211607(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_94(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2537E2.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_96()
{
	struct<9> Var0;
	
	unk_0xB57F88F0123F4C38();
	Var0.f_8 = 4294967295;
	func_247(&Var0);
	Local_45 = { func_107(&Var0, 0) };
	iLocal_47 = 34939/*func_247*/;
	iLocal_48 = 8368/*func_97*/;
}

void func_97(var uParam0)
{
	func_106(uParam0, "TUT_ROOT_M1T", 0);
	func_105(uParam0, "TUT_ROOT_M1", 0);
	func_103(uParam0, "TUT_ROOT_M1_D", 0);
	func_98(uParam0, 0, 8446/*func_99*/, 2);
}

void func_98(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = iParam1;
	uParam0->f_9 = iParam2;
	uParam0->f_8 = iParam3;
}

int func_99(int iParam0, var uParam1)
{
	func_102(uParam1, iLocal_48);
	switch (iParam0)
	{
		case 0:
			func_101(uParam1);
			return 0;
		
		case 1:
			func_100(uParam1);
			return 0;
		
		default:
	}
	return 2;
}

void func_100(var uParam0)
{
	func_105(uParam0, "TUT_SUB_M2", 0);
	func_103(uParam0, "TUT_SUB_M2_D", 0);
}

void func_101(var uParam0)
{
	func_105(uParam0, "TUT_SUB_M2", 0);
	func_103(uParam0, "TUT_SUB_M2_D", 0);
}

void func_102(var uParam0, int iParam1)
{
	uParam0->f_A = iParam1;
}

void func_103(var uParam0, char* sParam1, bool bParam2)
{
	uParam0->f_B = 0;
	uParam0->f_C = 0;
	uParam0->f_4 = sParam1;
	func_104(uParam0, 6, bParam2);
}

void func_104(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_10(&(uParam0->f_7), iParam1);
	}
	else
	{
		func_8(&(uParam0->f_7), iParam1);
	}
}

void func_105(var uParam0, char* sParam1, bool bParam2)
{
	uParam0->f_3 = sParam1;
	func_104(uParam0, 5, bParam2);
}

void func_106(var uParam0, char* sParam1, bool bParam2)
{
	uParam0->f_1 = sParam1;
	func_104(uParam0, 3, bParam2);
}

struct<114> func_107(var uParam0, int iParam1)
{
	struct<114> Var0;
	
	Var0.f_6.f_8 = 4294967295;
	Var0.f_27.f_8 = 4294967295;
	Var0.f_48.f_8 = 4294967295;
	func_225(&Var0, 33777/*func_226*/);
	func_194(&Var0, 18887/*func_195*/);
	func_191(&Var0, 18523/*func_192*/);
	func_188(&Var0, 18392/*func_189*/);
	func_120(&Var0, 11044/*func_121*/);
	func_116(&Var0, 10607/*func_117*/);
	func_110(&Var0, 8924/*func_111*/);
	func_109(&Var0, uParam0);
	func_108(&Var0, uParam0, iParam1, 0);
	return Var0;
}

void func_108(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	func_36(iParam0, uParam1, 0, bParam3);
	func_18(iParam0, iParam2);
	if (func_34(uParam1) == 0)
	{
		return;
	}
	if (func_14(&(iParam0->f_48.f_7), 2))
	{
		func_63(iParam0, 0, 1);
	}
}

void func_109(var uParam0, var uParam1)
{
	unk_0xBFC87303F2B2ED31(&(uParam0->f_27), uParam1, 33);
}

void func_110(var uParam0, int iParam1)
{
	uParam0->f_6E = iParam1;
}

void func_111()
{
	func_115(1, 0);
	func_112(1, 4294967295);
}

void func_112(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_114(&iVar0, 0, iParam1))
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
		func_113(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0;
	}
}

void func_113(int iParam0)
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

int func_114(var uParam0, bool bParam1, int iParam2)
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

void func_115(bool bParam0, bool bParam1)
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

void func_116(var uParam0, int iParam1)
{
	uParam0->f_6A = iParam1;
}

bool func_117()
{
	return func_118(0, 4294967295, 1);
}

bool func_118(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_114(&iVar0, 1, iParam1))
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
	bVar2 = func_119(&(Global_574E.f_161C[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_119(var uParam0)
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

void func_120(var uParam0, int iParam1)
{
	uParam0->f_69 = iParam1;
}

struct<33> func_121()
{
	struct<33> Var0;
	
	Var0.f_8 = 4294967295;
	func_172(&Var0, 14409/*func_173*/);
	func_125(&Var0, 11362/*func_127*/, 0);
	func_122(&Var0, 11111/*func_123*/);
	return Var0;
}

void func_122(var uParam0, int iParam1)
{
	uParam0->f_1B = iParam1;
}

int func_123(var uParam0)
{
	func_124(202, "PIM_CEXI", 4294967295);
	if (func_68(uParam0))
	{
		func_124(201, "PIM_CSEL", 4294967295);
	}
	return 1;
}

void func_124(int iParam0, char* sParam1, int iParam2)
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
	unk_0x0674E58A79778E99(&(Global_574E.f_13BC), Global_574E.f_12A1);
	StringCopy(&(Global_574E.f_12A3[Global_574E.f_12A1 /*16*/]), sVar0, 64);
	StringCopy(&(Global_574E.f_1364[Global_574E.f_12A1 /*4*/]), sParam1, 16);
	Global_574E.f_1395[Global_574E.f_12A1] = iParam2;
	Global_574E.f_13A2[Global_574E.f_12A1] = iParam0;
	Global_574E.f_13AF[Global_574E.f_12A1] = 32;
	Global_574E.f_12A1++;
}

void func_125(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1C = iParam1;
	func_126(uParam0, iParam2);
}

void func_126(var uParam0, var uParam1)
{
	uParam0->f_1D = uParam1;
}

bool func_127(int iParam0, var uParam1)
{
	func_152(iParam0);
	return func_128(iParam0) != 0;
}

int func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = func_147(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_143(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_136(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_130(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_129(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

int func_129(int iParam0)
{
	unk_0x558EC149EB2BC0A2(2, 176);
	if (unk_0xB9132A06AE472728(2, 176) && func_68(&(iParam0->f_48)))
	{
		func_63(iParam0, 1, 1);
		return 2;
	}
	return 0;
}

int func_130(int iParam0)
{
	unk_0x558EC149EB2BC0A2(2, 174);
	unk_0x558EC149EB2BC0A2(2, 175);
	if (unk_0xBFC0798A6E3417F9(2, 174))
	{
		func_134(iParam0);
		return 9;
	}
	if (unk_0xBFC0798A6E3417F9(2, 175))
	{
		func_131(iParam0);
		return 10;
	}
	return 0;
}

void func_131(int iParam0)
{
	if (!func_69(iParam0))
	{
		return;
	}
	if (!func_68(&(iParam0->f_48)))
	{
		return;
	}
	func_133(&(iParam0->f_48));
	func_132(&(iParam0->f_48));
	func_9(iParam0, 1);
}

void func_132(var uParam0)
{
	if (uParam0->f_18 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_18);
}

void func_133(var uParam0)
{
	if (uParam0->f_17 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_17);
}

void func_134(int iParam0)
{
	if (!func_69(iParam0))
	{
		return;
	}
	if (!func_68(&(iParam0->f_48)))
	{
		return;
	}
	func_133(&(iParam0->f_48));
	func_135(&(iParam0->f_48));
	func_9(iParam0, 1);
}

void func_135(var uParam0)
{
	if (uParam0->f_19 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_19);
}

int func_136(int iParam0)
{
	unk_0x558EC149EB2BC0A2(2, 177);
	if (unk_0xB9132A06AE472728(2, 177))
	{
		func_137(iParam0, 0, 1);
		return 1;
	}
	return 0;
}

void func_137(int iParam0, bool bParam1, bool bParam2)
{
	struct<33> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (bParam2)
	{
		func_142(&(iParam0->f_48));
	}
	Var0 = { func_29(iParam0) };
	if (!func_140(iParam0, &Var0))
	{
		func_9(iParam0, 2);
		return;
	}
	iVar1 = func_139(&(iParam0->f_6));
	bVar2 = func_14(&(iParam0->f_6.f_7), 2);
	if (func_13(iParam0, 4))
	{
		iVar1 = 0;
	}
	iVar3 = func_138(&(iParam0->f_6));
	func_36(iParam0, &Var0, 0, 1);
	if (func_30(iParam0, iVar1))
	{
		if (iVar3 != 0)
		{
			Call_Loc(iVar3);
		}
		func_18(iParam0, iVar1);
	}
	else
	{
		func_18(iParam0, 0);
		func_24(&(iParam0->f_48));
	}
	if (bVar2 && !bParam1)
	{
		func_137(iParam0, 0, 1);
	}
	else if (func_14(&(iParam0->f_48.f_7), 2) && !bParam1)
	{
		func_63(iParam0, 1, 1);
		func_18(iParam0, iVar1);
	}
	func_9(iParam0, 1);
}

var func_138(var uParam0)
{
	return uParam0->f_11;
}

var func_139(var uParam0)
{
	return *uParam0;
}

bool func_140(var uParam0, var uParam1)
{
	return func_141(&(uParam0->f_6), uParam1);
}

int func_141(var uParam0, var uParam1)
{
	if (uParam0->f_A == 0)
	{
		return 0;
	}
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_A);
	return 1;
}

void func_142(var uParam0)
{
	if (uParam0->f_14 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_14);
}

int func_143(int iParam0)
{
	unk_0x558EC149EB2BC0A2(2, 172);
	unk_0x558EC149EB2BC0A2(2, 173);
	if (unk_0xBFC0798A6E3417F9(2, 172))
	{
		func_144(iParam0, 4294967295);
		return 5;
	}
	if (unk_0xBFC0798A6E3417F9(2, 173))
	{
		func_144(iParam0, 1);
		return 6;
	}
	return 0;
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_146(iParam0);
	if (iVar0 <= 1)
	{
		return 0;
	}
	if (func_145(&(iParam0->f_48)))
	{
		func_9(iParam0, 1);
	}
	func_77(iParam0, iParam1);
	if (func_24(&(iParam0->f_48)))
	{
		func_9(iParam0, 1);
	}
	return 1;
}

int func_145(var uParam0)
{
	if (uParam0->f_12 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_12);
	return StackVal;
}

int func_146(var uParam0)
{
	return func_33(&(uParam0->f_6));
}

int func_147(int iParam0)
{
	unk_0x558EC149EB2BC0A2(2, 205);
	unk_0x558EC149EB2BC0A2(2, 206);
	if (unk_0xBFC0798A6E3417F9(2, 205))
	{
		if (func_148(iParam0, 4294967295))
		{
			return 3;
		}
		return 0;
	}
	if (unk_0xBFC0798A6E3417F9(2, 206))
	{
		if (func_148(iParam0, 1))
		{
			return 4;
		}
		return 0;
	}
	return 0;
}

int func_148(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_14(&(iParam0->f_6.f_7), 2))
	{
		return 0;
	}
	bVar0 = func_14(&(iParam0->f_6.f_7), 7);
	if (bVar0)
	{
		iVar1 = func_150(iParam0);
		iVar2 = func_149(iParam0);
		if ((iParam1 < 0 && iVar1 <= 0) || (iParam1 > 0 && iVar1 >= iVar2))
		{
			return 0;
		}
	}
	func_137(iParam0, 1, 1);
	func_144(iParam0, iParam1);
	func_63(iParam0, 1, 1);
	return 1;
}

int func_149(var uParam0)
{
	struct<33> Var0;
	
	if (!func_14(&(uParam0->f_6.f_7), 2))
	{
		return 0;
	}
	Var0 = { func_29(uParam0) };
	if (!func_141(&(uParam0->f_6), &Var0))
	{
		return 0;
	}
	return func_31(&Var0);
}

int func_150(var uParam0)
{
	if (!func_14(&(uParam0->f_6.f_7), 2))
	{
		return 0;
	}
	return func_151(uParam0);
}

var func_151(var uParam0)
{
	return func_139(&(uParam0->f_6));
}

void func_152(int iParam0)
{
	if (!unk_0x91E3F625EF57450D(2))
	{
		return;
	}
	unk_0x558EC149EB2BC0A2(2, 239);
	unk_0x558EC149EB2BC0A2(2, 240);
	func_168(0, 0, 0, 1);
	func_167();
	func_164(iParam0);
	func_160(iParam0);
	func_154(iParam0);
	func_153(iParam0);
}

void func_153(int iParam0)
{
	unk_0x558EC149EB2BC0A2(2, 238);
	if (unk_0xBFC0798A6E3417F9(2, 238))
	{
		func_137(iParam0, 0, 1);
	}
}

void func_154(int iParam0)
{
	bool bVar0;
	
	unk_0x558EC149EB2BC0A2(2, 241);
	unk_0x558EC149EB2BC0A2(2, 242);
	bVar0 = func_159();
	if (func_157() || (unk_0xD245978525608929(2, 241) && bVar0))
	{
		func_144(iParam0, 4294967295);
		return;
	}
	if (func_155() || (unk_0xD245978525608929(2, 242) && bVar0))
	{
		func_144(iParam0, 1);
		return;
	}
}

bool func_155()
{
	return (unk_0xB9132A06AE472728(2, 237) && func_156());
}

bool func_156()
{
	return Global_4121D1 == 4294967293;
}

bool func_157()
{
	return (unk_0xB9132A06AE472728(2, 237) && func_158());
}

bool func_158()
{
	return Global_4121D1 == 4294967294;
}

bool func_159()
{
	return Global_4121D1 > 4294967295;
}

void func_160(int iParam0)
{
	unk_0x558EC149EB2BC0A2(2, 237);
	unk_0xEAB026E686C0D991(2, 176, 1);
	if (!unk_0xB9132A06AE472728(2, 237))
	{
		return;
	}
	if (!func_163())
	{
		func_9(iParam0, 2);
		return;
	}
	if (func_162(iParam0))
	{
		func_63(iParam0, 1, 1);
	}
	else
	{
		func_161(iParam0);
	}
}

void func_161(int iParam0)
{
	func_18(iParam0, Global_4121D1);
}

bool func_162(int iParam0)
{
	return Global_4121D1 == iParam0->f_1;
}

bool func_163()
{
	return ((func_159() || func_156()) || func_158());
}

void func_164(int iParam0)
{
	int iVar0;
	
	if (!func_159())
	{
		return;
	}
	if (!func_166())
	{
		return;
	}
	if (!func_162(iParam0))
	{
		return;
	}
	iVar0 = func_165(0.045f);
	if (iVar0 > 0)
	{
		func_131(iParam0);
	}
	else if (iVar0 < 0)
	{
		func_134(iParam0);
	}
	else if (iVar0 == 4294966297)
	{
		func_63(iParam0, 1, 1);
	}
}

int func_165(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_574D);
	fVar1 = (Global_574E.f_1662 - (IntToFloat(Global_574E.f_1664) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	unk_0xE428D1DCE17602B4(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xE428D1DCE17602B4(fVar2, fVar3, &fVar2, &fVar3);
	unk_0xD59EF13BB60323B9();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4121CB >= fVar0 && Global_4121CB < fVar5)
		{
			return 4294966297;
		}
	}
	if (Global_4121CB >= fVar0 && Global_4121CB < fVar4)
	{
		return 4294967295;
	}
	if (Global_4121CB >= fVar4 && Global_4121CB <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if (unk_0x91E3F625EF57450D(2))
	{
		return unk_0xD245978525608929(2, 237);
	}
	return 0;
}

void func_167()
{
	unk_0x5D80F91A16C40CDE();
	unk_0xC74D8A1D346B9CCB(1);
}

void func_168(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	func_171();
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
				func_170(0);
			}
			return;
		}
		if (((Global_4121CB >= fVar0 && Global_4121CB <= fVar2) && Global_4121CC >= (fVar3 + fVar6)) && Global_4121CC < (fVar3 + 0.034722f))
		{
			Global_4121D1 = 4294967293;
			if (bParam3)
			{
				func_170(0);
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
				func_169(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_574D, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
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

void func_169(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_170(bool bParam0)
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
		func_169(fVar0, fVar1, Global_574D, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4121D1 == 4294967293)
	{
		func_169(fVar0, (fVar1 + fVar2), Global_574D, fVar2, 255, 255, 255, iVar3);
	}
	unk_0xD59EF13BB60323B9();
}

void func_171()
{
	Global_4121CD = Global_4121CB;
	Global_4121CE = Global_4121CC;
	Global_4121CB = unk_0x4B7163B4D6E4A3C2(2, 239);
	Global_4121CC = unk_0x4B7163B4D6E4A3C2(2, 240);
	Global_4121CF = (Global_4121CB - Global_4121CD);
	Global_4121D0 = (Global_4121CC - Global_4121CE);
}

void func_172(var uParam0, int iParam1)
{
	uParam0->f_10 = iParam1;
}

void func_173(var uParam0, int iParam1)
{
	func_174(iParam1, func_187(uParam0), 0, 1, 0, 0);
}

void func_174(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_186(Global_574E.f_1462, 1);
	}
	else
	{
		func_186(Global_574E.f_1462, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_183(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
		if (Global_574E.f_13D3[Global_574E.f_1463])
		{
			func_176(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_175(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
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

float func_175(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0);
}

int func_176(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_182(iParam0), 64);
	StringCopy(&cVar1, func_179(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0);
			if (func_178())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_178())
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
		vVar7.x = (vVar7.x * (func_177(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_177(iParam0) / fVar4));
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

float func_177(int iParam0)
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

int func_178()
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

var func_179(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 2807284209)
		{
			Var2 = { func_181(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_180(&uVar1);
			}
		}
		else
		{
			return func_180(&(Global_574E.f_1B75[iParam0 /*16*/]));
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

var func_180(var uParam0)
{
	return uParam0;
}

struct<13> func_181(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

char* func_182(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 2807284209)
		{
			Var1 = { func_181(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_180(&uVar0);
		}
		else
		{
			return func_180(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_183(char* sParam0)
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
	func_184(0, 1, 0, 0, 0, 0, 0);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

void func_184(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_185(Global_574E.f_177B[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_185(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_186(int iParam0, bool bParam1)
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

var func_187(var uParam0)
{
	return uParam0->f_3;
}

void func_188(var uParam0, int iParam1)
{
	uParam0->f_6C = iParam1;
}

void func_189(char* sParam0)
{
	func_190(sParam0, 0, 0);
}

void func_190(char* sParam0, int iParam1, int iParam2)
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

void func_191(var uParam0, int iParam1)
{
	uParam0->f_6D = iParam1;
}

void func_192(var uParam0)
{
	func_193(uParam0, 1, 1);
}

void func_193(var uParam0, bool bParam1, int iParam2)
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

void func_194(var uParam0, int iParam1)
{
	uParam0->f_70 = iParam1;
}

void func_195()
{
	func_196(1, 4294967295, 1, 0, 1, 3212836864, 0, 0, 4294967295);
}

void func_196(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	
	if (!func_114(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == 4294967295)
	{
	}
	if (!func_222(0, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(76, 84);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_574E)
	{
		if (func_176(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_178())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_178())
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
			func_174(Global_574E.f_1462 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar63, func_182(29), 64);
					StringCopy(&cVar64, func_179(29, 1), 64);
					if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[29 /*16*/])) == 2807284209)
					{
						func_169(Global_574B, Global_574C, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
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
				func_169(Global_574B, (Global_574C + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_574C + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) != 0)
				{
					func_221();
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
					func_221();
					func_219((((Global_574B + fParam5) - 0.00390625f) - func_220("CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669);
				}
				else if (Global_574E.f_1663 > Global_574E.f_1469)
				{
					if (Global_574E.f_1666 != 0)
					{
						func_221();
						func_219((((Global_574B + fParam5) - 0.00390625f) - func_220("CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665);
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
				func_169(Global_574B, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_176(Global_574E.f_12A0, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_218(fVar40);
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
				func_169(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_218(fVar40);
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
					func_176(Global_574E.f_12A0, 1, 1, &fVar36, &fVar37, bParam7);
					func_217(Global_574E.f_12A0, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_182(Global_574E.f_12A0), func_179(Global_574E.f_12A0, 1), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_176(Global_412185.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_218(fVar40);
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
				func_169(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_218(fVar40);
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
					func_176(Global_412185.f_43, 1, 1, &fVar36, &fVar37, bParam7);
					func_217(Global_412185.f_43, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_182(Global_412185.f_43), func_179(Global_412185.f_43, 1), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_209(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_184(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, iVar74, bVar51, bVar50);
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
												if (func_176(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_176(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_176(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_182(26), func_179(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_176(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_176(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_182(27), func_179(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_184(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_208(bVar32);
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
												if (func_176(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_176(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_217(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_574E.f_13DB[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_182(Global_574E.f_1151[(iVar22 + iVar28)]), func_179(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_182(Global_574E.f_1151[(iVar22 + iVar28)]), func_179(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											if (func_60() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_184(0, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0, bVar51, bVar50);
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
												if (func_176(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_176(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_217(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_574E.f_1151[(iVar22 + iVar14)] == 30)
															{
																unk_0x539E86AE011A8B38(func_182(Global_574E.f_1151[(iVar22 + iVar14)]), func_179(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (Global_574B + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_574E.f_13DB[iVar8] == 2)
															{
																unk_0x539E86AE011A8B38(func_182(Global_574E.f_1151[(iVar22 + iVar14)]), func_179(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_182(Global_574E.f_1151[(iVar22 + iVar14)]), func_179(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_184(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0, 0, 0);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_208(bVar32);
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
										if (func_176(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_176(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_182(26), func_179(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_176(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_176(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_182(27), func_179(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_184(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0, 0, 0);
										func_207((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_F4E[iVar20], 0);
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
										func_184(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0, 0, 0);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_208(bVar32);
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
										if (func_176(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_574E.f_13DB[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_176(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_182(26), func_179(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_176(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_176(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x539E86AE011A8B38(func_182(27), func_179(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_184(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0, 0, 0);
									func_206((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_176(Global_574E.f_1151[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_176(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_574E.f_13DB[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_176(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_217(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_182(26), func_179(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_176(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_176(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_217(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x539E86AE011A8B38(func_182(27), func_179(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_176(Global_574E.f_1151[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_217(Global_574E.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_182(Global_574E.f_1151[iVar22]), func_179(Global_574E.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_205(Global_574E.f_1151[iVar22])), (fVar37 * func_205(Global_574E.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
								if (func_176(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_198(0);
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
		func_197(1);
	}
	unk_0xD59EF13BB60323B9();
}

void func_197(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_198(int iParam0)
{
	if (func_204())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 1)
	{
		if (func_203(0))
		{
			func_199(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 2);
	}
}

void func_199(int iParam0)
{
	if (func_204())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_202())
		{
			func_201(1, 1);
		}
		else
		{
			func_201(0, 0);
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
	if (!func_200())
	{
		Global_4C1E.f_1 = 3;
	}
}

int func_200()
{
	if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_201(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_203(0))
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

bool func_202()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 5);
}

int func_203(int iParam0)
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

bool func_204()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 19);
}

float func_205(int iParam0)
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

void func_206(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_207(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

void func_208(bool bParam0)
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

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_114(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_222(bParam4, bParam8))
	{
		return;
	}
	if (func_215())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_212(unk_0xD803B885F5E47A62(), 0))
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
					func_211(&(Global_574E.f_12A3[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_211(&(Global_574E.f_12A3[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_574E.f_1395[iVar1] == 4294967295)
					{
						func_210(&(Global_574E.f_1364[iVar1 /*4*/]));
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
				func_211(&Global_412185);
				if (Global_412185.f_14 == 4294967295)
				{
					func_210(&(Global_412185.f_10));
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

void func_210(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_211(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_212(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_213(4294967295, 0) == 8;
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

int func_213(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_214();
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

int func_214()
{
	return Global_1407E9;
}

int func_215()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 3)
	{
		return 1;
	}
	if (func_216())
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

int func_216()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_217(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_218(float fParam0)
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

void func_219(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

float func_220(char* sParam0, int iParam1, int iParam2)
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
	func_221();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(1);
}

void func_221()
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

int func_222(bool bParam0, bool bParam1)
{
	if (Global_2537E2.f_766.f_2BD != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_224(8, 4294967295) && func_223() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_12C52) || Global_574E.f_20E0) || unk_0xE57E602827E07C9D()) || Global_181EC.f_589)
	{
		return 0;
	}
	return 1;
}

int func_223()
{
	return Global_14082C;
}

bool func_224(int iParam0, int iParam1)
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

void func_225(var uParam0, int iParam1)
{
	uParam0->f_6B = iParam1;
}

int func_226(int iParam0)
{
	func_246(4294967295);
	func_115(1, 0);
	func_243(iParam0);
	func_239(iParam0);
	func_238(0, 0, 0, 0, 0);
	func_234(iParam0);
	func_227(iParam0);
	func_18(iParam0, iParam0->f_1);
	return 1;
}

void func_227(int iParam0)
{
	if (func_13(iParam0, 3))
	{
		func_124(202, "PIMK2_CANCEL", 4294967295);
		func_124(201, "PIMK2_ACCEPT", 4294967295);
		return;
	}
	if (func_13(iParam0, 5))
	{
		return;
	}
	if (!func_52(&(iParam0->f_48)))
	{
		func_231(iParam0);
	}
	func_228(iParam0);
}

void func_228(int iParam0)
{
	func_229(&(iParam0->f_48), &(iParam0->f_48));
}

void func_229(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_230(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(uParam1);
	Call_Loc(iVar0);
}

var func_230(var uParam0)
{
	return uParam0->f_1B;
}

void func_231(int iParam0)
{
	func_232(&(iParam0->f_6), &(iParam0->f_48));
}

void func_232(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_233(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(uParam1);
	Call_Loc(iVar0);
}

var func_233(var uParam0)
{
	return uParam0->f_1E;
}

void func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<33> Var3;
	int iVar4;
	int iVar5;
	
	func_237(iParam0, 0);
	iVar0 = func_34(&(iParam0->f_6));
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	Var3.f_8 = 4294967295;
	iVar4 = 4294967295;
	while (iVar4 != 2)
	{
		Var3 = { func_29(iParam0) };
		Stack.Push(iVar1);
		Stack.Push(&Var3);
		Call_Loc(iVar0);
		iVar4 = StackVal;
		if (iVar4 != 0)
		{
			iVar1++;
		}
		else
		{
			if (func_235(iParam0, iVar1, &Var3))
			{
				iVar2++;
			}
			iVar1++;
		}
	}
	iVar5 = func_32(0, (iVar2 - 1));
	func_237(iParam0, iVar5);
	func_25(iParam0, iParam0->f_1);
	func_24(&(iParam0->f_48));
}

int func_235(var uParam0, int iParam1, var uParam2)
{
	if (func_27(uParam2))
	{
		return 0;
	}
	func_236(uParam2, iParam1);
	Global_574E.f_64A[iParam1] = func_68(uParam2);
	return 1;
}

void func_236(var uParam0, var uParam1)
{
	if (uParam0->f_10 == 0)
	{
		return;
	}
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_10);
}

void func_237(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_238(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13D3[0] = iParam0;
	Global_574E.f_13D3[1] = iParam1;
	Global_574E.f_13D3[2] = iParam2;
	Global_574E.f_13D3[3] = iParam3;
	Global_574E.f_13D3[4] = iParam4;
}

void func_239(int iParam0)
{
	if (unk_0xEA6BC48857E0AC4C(func_241(func_242(&(iParam0->f_6)))))
	{
		func_240(func_187(&(iParam0->f_6)));
		return;
	}
	func_240(func_242(&(iParam0->f_6)));
}

void func_240(char* sParam0)
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

var func_241(var uParam0)
{
	return uParam0;
}

var func_242(var uParam0)
{
	return uParam0->f_1;
}

void func_243(int iParam0)
{
	func_245(1, 1, 0, 0, 0);
	func_244(1, 2, 1, 1, 1);
	func_4(iParam0);
}

void func_244(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13DB[0] = iParam0;
	Global_574E.f_13DB[1] = iParam1;
	Global_574E.f_13DB[2] = iParam2;
	Global_574E.f_13DB[3] = iParam3;
	Global_574E.f_13DB[4] = iParam4;
}

void func_245(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_246(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_574E.f_12A1 = 0;
	Global_574E.f_12A2 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_574E.f_1364[iVar0 /*4*/]), "", 16);
		Global_574E.f_1395[iVar0] = 4294967295;
		Global_574E.f_13A2[iVar0] = 361;
		Global_574E.f_13AF[iVar0] = 32;
		iVar0++;
	}
	Global_574E.f_13BC = 0;
	StringCopy(&(Global_412185.f_10), "", 16);
	Global_412185.f_14 = 4294967295;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (!func_114(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(false);
		unk_0x7E60D21B163E9D56();
	}
}

void func_247(var uParam0)
{
	func_106(uParam0, "TUT_ROOT_TITLE", 0);
	func_98(uParam0, 0, 34970/*func_248*/, 2);
}

int func_248(int iParam0, var uParam1)
{
	func_102(uParam1, iLocal_47);
	switch (iParam0)
	{
		case 0:
			func_97(uParam1);
			return 0;
		
		case 1:
			func_249(uParam1);
			return 0;
		
		default:
	}
	return 2;
}

void func_249(var uParam0)
{
	func_105(uParam0, "TUT_ROOT_M2", 0);
	func_103(uParam0, "TUT_ROOT_M2_D", 0);
}

