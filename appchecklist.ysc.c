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
	int iLocal_20[94] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26[5] = { 0, 0, 0, 0, 0 };
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = 0;
	struct<6> Local_32[5];
	int iLocal_33[5] = { 0, 0, 0, 0, 0 };
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
	unk_0xB57F88F0123F4C38();
	func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_31();
	func_30();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_4C1E.f_1 != 9)
		{
			switch (Global_4C1E.f_1)
			{
				case 7:
					func_25();
					if (iLocal_25 == 0)
					{
						func_15();
					}
					break;
				
				case 8:
					if (iLocal_25 == 2)
					{
						func_25();
						if (bLocal_31)
						{
							func_10();
						}
					}
					if (iLocal_25 == 1)
					{
						func_25();
					}
					if (func_9(2, Global_4BFE, 0))
					{
						func_8();
						Global_4C08 = 1;
						if (iLocal_25 == 2 || iLocal_25 == 1)
						{
							func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
							func_30();
							if (Global_4C1E.f_1 > 3)
							{
								Global_4C1E.f_1 = 7;
							}
						}
						if (iLocal_25 == 3)
						{
							func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
							func_4();
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_4C20 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 3) || Global_4C1E.f_1 == 0) || Global_4BE6 == 1)
	{
		Global_4C11 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	unk_0x10FAF14A60A0DBE1();
}

int func_3()
{
	if (Global_1F1A == 1 || Global_4C1E.f_1 < 7)
	{
		Global_4C11 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	bLocal_31 = false;
	func_31();
	iLocal_21 = 0;
	func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
	iVar0 = 0;
	if (Global_4C1A == 0)
	{
		while (iVar0 < 5)
		{
			func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iLocal_21), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_32[iVar0 /*6*/]), 0, 0, 0, 0);
			iLocal_26[iLocal_21] = iVar0;
			iLocal_21++;
			iVar0++;
		}
	}
	if (Global_4C1A == 1)
	{
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 5)
		{
			iLocal_33[iVar2] = 0;
			iVar2++;
		}
		iVar1 = (5 - 1);
		while (iVar0 < 5)
		{
			if (Local_32[iVar1 /*6*/].f_5 > 0)
			{
				if (iLocal_33[iVar1] == 0)
				{
					func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iLocal_21), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_32[iVar1 /*6*/]), 0, 0, 0, 0);
					iLocal_26[iLocal_21] = iVar1;
					iLocal_21++;
					iLocal_33[iVar1] = 1;
				}
			}
			if (iVar1 > 0)
			{
				iVar1 = (iVar1 - 1);
			}
			iVar0++;
		}
	}
	if (iLocal_21 == 0)
	{
		func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3092", 0, 0, 0, 0);
	}
	else
	{
		bLocal_31 = true;
	}
	func_33(Global_4C0B, "DISPLAY_VIEW", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_5(Global_4C0B, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_4C12)
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
		unk_0x5D96D8530B3D0904(&Global_1CBC, 17);
	}
	else
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x5D96D8530B3D0904(&Global_1CBC, 17);
	}
	iLocal_25 = 2;
}

void func_5(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_6(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_6(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_6(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_6(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_6(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_6(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam7))
	{
		func_6(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_6(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_6(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_6(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_6(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_8()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Menu_Back", &Global_4C13, true);
	}
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xBFC0798A6E3417F9(iParam0, iParam1) || (iParam2 == 1 && unk_0xD245978525608929(iParam0, iParam1)))
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0xDAC65F45B0B2D176() == 0 || (unk_0x4FD68D5821EE3E19() && unk_0x91E3F625EF57450D(2)))
			{
				return 0;
			}
		}
		if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_10()
{
	int iVar0;
	
	if (Global_4C08 == 0)
	{
		if (func_9(2, Global_4BFF, 0))
		{
			func_12();
			Global_4C08 = 1;
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
			iLocal_30 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(iLocal_30))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = unk_0xA52833FE33F41C53(iLocal_30);
			iLocal_23 = iLocal_26[iVar0];
			if (Global_4C1E.f_1 > 3)
			{
				Global_4C1E.f_1 = 8;
			}
			func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
			if (iLocal_23 == 1)
			{
			}
			func_11();
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(18);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(0);
			unk_0x7ACC3006A87F8B39("CELL_3206");
			unk_0x6D99DF8263D35CE5(iLocal_27);
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(18);
			unk_0x3CAEA85DA607305E(1);
			unk_0x3CAEA85DA607305E(0);
			unk_0x7ACC3006A87F8B39("CELL_3101");
			unk_0x6D99DF8263D35CE5(iLocal_28);
			unk_0x779B34565F4D71B1();
			unk_0x7E60D21B163E9D56();
			func_33(Global_4C0B, "DISPLAY_VIEW", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_5(Global_4C0B, "SET_HEADER", &(Local_32[iLocal_23 /*6*/]), 0, 0, 0, 0);
			func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_1CBC, 17);
			if (Global_4C12)
			{
				func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			iLocal_25 = 3;
		}
	}
}

void func_11()
{
	switch (iLocal_23)
	{
		case 0:
			iLocal_27 = Global_1B2FD;
			iLocal_28 = Global_1B30E;
			break;
		
		case 1:
			iLocal_27 = (Global_1B2FE + Global_1B2FF);
			iLocal_28 = (Global_1B30F + Global_1B310);
			break;
		
		case 2:
			iLocal_27 = Global_1B300;
			iLocal_28 = Global_1B311;
			break;
		
		case 3:
			iLocal_27 = Global_1B301;
			iLocal_28 = Global_1B312;
			break;
		
		case 4:
			iLocal_27 = (Global_1B302 + Global_1B303);
			iLocal_28 = (Global_1B313 + Global_1B314);
			break;
		
		default:
			iLocal_27 = 0;
			iLocal_28 = 0;
			break;
	}
}

void func_12()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Menu_Accept", &Global_4C13, true);
		func_13();
	}
}

void func_13()
{
	if (func_14())
	{
		unk_0x5A963FB0365294C8(5);
	}
}

int func_14()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4127DB || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_15()
{
	if (Global_4C08 == 0)
	{
		if (func_9(2, Global_4BFF, 0))
		{
			func_12();
			Global_4C08 = 1;
			unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
			iLocal_30 = unk_0x7A8BB56B212464AC();
			while (!unk_0xC95D7AEEDEF4946B(iLocal_30))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_29 = unk_0xA52833FE33F41C53(iLocal_30);
			if (Global_4C1E.f_1 > 3)
			{
				Global_4C1E.f_1 = 8;
				if (iLocal_29 == 0)
				{
					iLocal_25 = 1;
					func_16();
				}
				else
				{
					iLocal_25 = 2;
					func_4();
				}
			}
		}
	}
}

void func_16()
{
	int iVar0;
	
	iLocal_21 = 0;
	func_20();
	iVar0 = 0;
	func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
	if (func_17(0))
	{
		func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_229", 0, 0, 0, 0);
	}
	else
	{
		while (iVar0 < Global_16E31)
		{
			func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Global_16D60[iVar0 /*4*/]), 0, 0, 0, 0);
			iLocal_21++;
			iLocal_20[iVar0] = iVar0;
			iVar0++;
		}
	}
	if (iLocal_20[1] == 99)
	{
	}
	func_33(Global_4C0B, "DISPLAY_VIEW", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_5(Global_4C0B, "SET_HEADER", "CELL_3301", 0, 0, 0, 0);
	if (func_17(0) || Global_16E31 == 0)
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0674E58A79778E99(&Global_1CBC, 17);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0674E58A79778E99(&Global_1CBC, 17);
		if (Global_4C12)
		{
			func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
	else if (Global_4C12)
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_25 = 1;
}

int func_17(int iParam0)
{
	if (Global_A1D7 == 15)
	{
		return 0;
	}
	if (func_18(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_18(int iParam0)
{
	return func_19(iParam0, Global_A1D7);
}

int func_19(int iParam0, int iParam1)
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

void func_20()
{
	int iVar0;
	int iVar1;
	
	Global_16E31 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_15D98[iVar0 /*5*/] != 4294967295)
		{
			if (Global_16E31 < 52)
			{
				iVar1 = Global_12C5B.f_6D[Global_15D98[iVar0 /*5*/] /*4*/];
				MemCopy(&(Global_16D60[Global_16E31 /*4*/]), {func_24(iVar1)}, 4);
				Global_16E31++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar0 /*6*/], 0) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar0 /*6*/], 1)) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4889[iVar0 /*6*/], 3))
		{
			if (Global_16E31 < 52)
			{
				MemCopy(&(Global_16D60[Global_16E31 /*4*/]), {func_22(iVar0)}, 4);
				Global_16E31++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[0], iVar0))
		{
			if (Global_16E31 < 52)
			{
				StringCopy(&(Global_16D60[Global_16E31 /*4*/]), func_21(iVar0), 16);
				Global_16E31++;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

char* func_21(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_22(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_23(iParam0) };
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_23(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<2> func_24(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_15DBC[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_1B416.f_2378.f_63.f_CD[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

void func_25()
{
	if (iLocal_24)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_24 = 0;
		}
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		if (func_9(2, 181, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
			}
			func_28();
		}
		if (func_9(2, 180, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_21)
			{
				iLocal_22 = 0;
			}
			func_26();
		}
	}
	if (iLocal_24 == 0)
	{
		if (func_9(2, Global_4C06, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
			}
			func_28();
			iLocal_24 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_9(2, Global_4C07, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_21)
			{
				iLocal_22 = 0;
			}
			func_26();
			iLocal_24 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_26()
{
	func_33(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x4D7F4CC43D4D0DE3(4294967295, "Menu_Navigate", &Global_4C13, true);
	func_27();
}

void func_27()
{
	if (func_14())
	{
		if (Global_4CD5 == 0)
		{
			unk_0x5A963FB0365294C8(2);
		}
		else
		{
			unk_0x5A963FB0365294C8(1);
		}
	}
}

void func_28()
{
	func_33(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x4D7F4CC43D4D0DE3(4294967295, "Menu_Navigate", &Global_4C13, true);
	func_29();
}

void func_29()
{
	if (func_14())
	{
		if (Global_4CD5 == 0)
		{
			unk_0x5A963FB0365294C8(1);
		}
		else
		{
			unk_0x5A963FB0365294C8(2);
		}
	}
}

void func_30()
{
	func_33(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3301", 0, 0, 0, 0);
	func_7(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3302", 0, 0, 0, 0);
	iLocal_21 = 2;
	func_33(Global_4C0B, "DISPLAY_VIEW", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_5(Global_4C0B, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_4C12)
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_25 = 0;
}

void func_31()
{
	func_32(0, "CELL_3001", 1, Global_1B30E);
	func_32(1, "CELL_3008", 3, Global_1B30E);
	func_32(2, "CELL_3004", 7, Global_1B311);
	func_32(3, "CELL_3005", 9, Global_1B312);
	func_32(4, "CELL_3007", 11, Global_1B313);
}

void func_32(int iParam0, char* sParam1, int iParam2, var uParam3)
{
	StringCopy(&(Local_32[iParam0 /*6*/]), sParam1, 16);
	Local_32[iParam0 /*6*/].f_4 = iParam2;
	Local_32[iParam0 /*6*/].f_5 = uParam3;
	if (Local_32[0 /*6*/].f_4 == 1)
	{
	}
}

void func_33(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x3CAEA85DA607305E(SYSTEM::ROUND(fParam6));
	}
	unk_0x7E60D21B163E9D56();
}

