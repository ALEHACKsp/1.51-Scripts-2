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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	if (unk_0x2EBF608FFE6CA406(98))
	{
		func_15();
	}
	func_14();
	iVar0 = 0;
	while (true)
	{
		SYSTEM::WAIT(500);
		iVar1 = 0;
		vVar2 = { 0f, 0f, 0f };
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		}
		while (iVar1 != 2)
		{
			if (func_13(&(Global_7983[iVar0 /*7*/])))
			{
				if (func_12(iVar0, vVar2))
				{
					func_11(&(Global_7983[iVar0 /*7*/]), 2);
					if (Global_7983[iVar0 /*7*/].f_5 != 0)
					{
						if (unk_0x1727A44C562FBED2(Global_7983[iVar0 /*7*/].f_5))
						{
							unk_0x4000D538E4D54254(Global_7983[iVar0 /*7*/].f_5, 1);
						}
						Global_7983[iVar0 /*7*/].f_5 = 0;
					}
				}
			}
			else if (!func_10(Global_7983[iVar0 /*7*/], 4))
			{
				if (func_5(&(Global_7983[iVar0 /*7*/]), vVar2))
				{
					func_1(iVar0);
				}
			}
			iVar1++;
			iVar0++;
			if (iVar0 == 5)
			{
				iVar0 = 0;
			}
		}
	}
}

void func_1(int iParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = 1424;
	bVar3 = true;
	switch (iParam0)
	{
		case 0:
			sVar0 = "re_ArmyBase";
			iVar1 = joaat("re_armybase");
			break;
		
		case 1:
			iVar2 = 4500;
			sVar0 = "golf_ai_foursome";
			iVar1 = joaat("golf_ai_foursome");
			bVar3 = false;
			break;
		
		case 3:
			sVar0 = "re_Prison";
			iVar1 = joaat("re_prison");
			break;
		
		case 2:
			iVar2 = 4500;
			sVar0 = "golf_ai_foursome_putting";
			iVar1 = joaat("golf_ai_foursome_putting");
			bVar3 = false;
			break;
		
		case 4:
			iVar2 = 2050;
			sVar0 = "stripclub";
			iVar1 = joaat("stripclub");
			bVar3 = false;
			break;
	}
	if (!bVar3 && func_3())
	{
		return;
	}
	if (unk_0x4880526EC51D1C27(sVar0) != 0)
	{
		if (unk_0x8A22C4C08282BF26(iVar1) == 0)
		{
			unk_0x92DCE5C81176D2B4(sVar0);
			while (!unk_0x1FBF08B001C4788A(sVar0))
			{
				SYSTEM::WAIT(0);
			}
			Global_7983[iParam0 /*7*/].f_5 = SYSTEM::START_NEW_SCRIPT(sVar0, iVar2);
			unk_0x5E8C29AE121DF1C7(sVar0);
			if (Global_7983[iParam0 /*7*/].f_5 != 0)
			{
				func_2(&(Global_7983[iParam0 /*7*/]), 2);
			}
		}
	}
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_3()
{
	if (func_4() == 0)
	{
		return 1;
	}
	return 0;
}

int func_4()
{
	return Global_7830;
}

int func_5(var uParam0, vector3 vParam1)
{
	if (!func_10(*uParam0, 1))
	{
		if (func_9() && !func_6(6))
		{
			return 0;
		}
	}
	if (SYSTEM::VDIST2(vParam1, uParam0->f_2) > uParam0->f_1)
	{
		return 0;
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2080.115f, 3292.193f, -11.667f, -2112.049f, 3224.331f, 11.667f, 115f, 1, false, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_6(int iParam0)
{
	if (Global_A1D7 == 15)
	{
		return 0;
	}
	if (func_7(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_7(int iParam0)
{
	return func_8(iParam0, Global_A1D7);
}

int func_8(int iParam0, int iParam1)
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

int func_9()
{
	if (Global_A1D7 == 15)
	{
		return 0;
	}
	return 1;
}

bool func_10(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_11(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_12(int iParam0, vector3 vParam1)
{
	vParam1.z = 0f;
	if (!unk_0x1727A44C562FBED2(Global_7983[iParam0 /*7*/].f_5))
	{
		return 1;
	}
	if (func_10(Global_7983[iParam0 /*7*/], 4))
	{
		return 1;
	}
	if (func_9() && !func_6(6))
	{
		if (!func_10(Global_7983[iParam0 /*7*/], 1))
		{
			if (iParam0 == 1 || iParam0 == 2)
			{
				if (unk_0x8A22C4C08282BF26(joaat("golf")) == 0)
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	if (SYSTEM::VDIST2(Global_7983[iParam0 /*7*/].f_2, vParam1) > (Global_7983[iParam0 /*7*/].f_1 + 400f))
	{
		return 1;
	}
	return 0;
}

bool func_13(var uParam0)
{
	return func_10(*uParam0, 2);
}

void func_14()
{
	int iVar0;
	
	Global_7983[0 /*7*/].f_2 = { -2189.545f, 3129.613f, 0f };
	Global_7983[0 /*7*/].f_1 = (1000f * 1000f);
	Global_7983[0 /*7*/] = 0;
	Global_7983[0 /*7*/].f_5 = 0;
	Global_7983[1 /*7*/].f_2 = { -1172.822f, 66.5235f, 0f };
	Global_7983[1 /*7*/].f_1 = (300f * 300f);
	Global_7983[1 /*7*/] = 0;
	Global_7983[1 /*7*/].f_5 = 0;
	Global_7983[3 /*7*/].f_2 = { 1692.147f, 2562.313f, 0f };
	Global_7983[3 /*7*/].f_1 = (300f * 300f);
	Global_7983[3 /*7*/] = 0;
	Global_7983[3 /*7*/].f_5 = 0;
	Global_7983[2 /*7*/].f_2 = { -1329.68f, 60.3478f, 0f };
	Global_7983[2 /*7*/].f_1 = (250f * 250f);
	Global_7983[2 /*7*/] = 0;
	Global_7983[2 /*7*/].f_5 = 0;
	Global_7983[4 /*7*/].f_2 = { 114.64f, -1290.34f, 0f };
	Global_7983[4 /*7*/].f_1 = (100f * 100f);
	Global_7983[4 /*7*/] = 1;
	Global_7983[4 /*7*/].f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		Global_7983[iVar0 /*7*/].f_2.f_2 = 0f;
		iVar0++;
	}
}

void func_15()
{
	unk_0x10FAF14A60A0DBE1();
}

