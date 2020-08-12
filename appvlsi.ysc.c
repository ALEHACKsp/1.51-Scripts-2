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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
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
	iLocal_21 = 0;
	if (iLocal_20 == 0)
	{
		func_10();
		func_9();
		iLocal_20 = 1;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_4C1E.f_1 != 9)
		{
			switch (Global_4C1E.f_1)
			{
				case 7:
					if (iLocal_21 == 1)
					{
						if (func_8(2, Global_4BFF, 0))
						{
							unk_0x4D7F4CC43D4D0DE3(4294967295, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", true);
							Global_4C08 = 1;
							func_10();
							func_5();
							SYSTEM::SETTIMERA(0);
							SYSTEM::SETTIMERB(0);
						}
					}
					if (iLocal_21 == 2)
					{
						if (SYSTEM::TIMERB() > 499)
						{
							SYSTEM::SETTIMERB(0);
						}
						if (SYSTEM::TIMERA() > 2200)
						{
							iLocal_21 = 3;
						}
					}
					if (iLocal_21 == 3)
					{
						Global_180427 = 1;
					}
					break;
				
				case 8:
					if (func_8(2, Global_4BFE, 0))
					{
						func_4();
						Global_4C08 = 1;
						if (Global_4C1E.f_1 > 3)
						{
							Global_4C1E.f_1 = 7;
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
	unk_0x42740B44BA8D7B43("DLC_MPHEIST/HEIST_HACK_SNAKE");
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
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Menu_Back", &Global_4C13, true);
	}
}

void func_5()
{
	if (Global_4C12)
	{
		func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0674E58A79778E99(&Global_1CBC, 17);
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_7(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_7(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_7(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_7(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_7(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_7(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_8(int iParam0, int iParam1, int iParam2)
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

void func_9()
{
	if (Global_4C12)
	{
		func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x0674E58A79778E99(&Global_1CBC, 17);
}

void func_10()
{
	if (iLocal_21 == 0)
	{
		unk_0xAE317D00A5A55DF6("DLC_MPHEIST/HEIST_HACK_SNAKE", false, 4294967295);
		while (unk_0xAE317D00A5A55DF6("DLC_MPHEIST/HEIST_HACK_SNAKE", false, 4294967295) == 0)
		{
			SYSTEM::WAIT(0);
		}
		func_11(Global_4C0B, "SET_DATA_SLOT_EMPTY", 23f, 3212836864, 3212836864, 3212836864, 3212836864);
		unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(23);
		unk_0x3CAEA85DA607305E(0);
		unk_0x3CAEA85DA607305E(4294967197);
		unk_0x3CAEA85DA607305E(0);
		unk_0x3CAEA85DA607305E(100);
		unk_0x3CAEA85DA607305E(2);
		unk_0x1200CC973A2399C8(false);
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBE, 1))
		{
			unk_0x7C19E5E4784BD7CF(0f);
		}
		unk_0x7E60D21B163E9D56();
		func_11(Global_4C0B, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864);
		iLocal_21 = 1;
	}
	else if (iLocal_21 == 1)
	{
		func_11(Global_4C0B, "SET_DATA_SLOT_EMPTY", 23f, 3212836864, 3212836864, 3212836864, 3212836864);
		unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
		unk_0x3CAEA85DA607305E(23);
		unk_0x3CAEA85DA607305E(0);
		unk_0x3CAEA85DA607305E(4294967197);
		unk_0x3CAEA85DA607305E(0);
		unk_0x3CAEA85DA607305E(100);
		unk_0x3CAEA85DA607305E(3);
		unk_0x1200CC973A2399C8(false);
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBE, 1))
		{
			unk_0x7C19E5E4784BD7CF(0f);
		}
		unk_0x7E60D21B163E9D56();
		func_11(Global_4C0B, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864);
		iLocal_21 = 2;
	}
}

void func_11(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

