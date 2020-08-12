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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
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
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	struct<11> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_83[32];
	struct<21> Local_84 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x8CD06866876216F2())
	{
		if (!func_693(ScriptParam_84))
		{
			func_636();
		}
	}
	while (true)
	{
		func_635();
		if (func_627())
		{
			func_636();
		}
		switch (func_626(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_625() == 1)
				{
					if (func_624())
					{
						func_623(unk_0x57270EE11514DC67(), 1);
					}
				}
				break;
			
			case 1:
				if (func_625() == 1)
				{
					if (!func_621())
					{
						func_96();
					}
					if (func_53(1))
					{
						func_623(unk_0x57270EE11514DC67(), 3);
					}
				}
				else if (func_625() == 3)
				{
					func_623(unk_0x57270EE11514DC67(), 3);
				}
				break;
			
			case 3:
				func_636();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			if (func_52())
			{
				func_51(3);
			}
			switch (func_625())
			{
				case 0:
					if (func_43())
					{
						func_51(1);
					}
					break;
				
				case 1:
					if (func_42() == 3)
					{
						func_51(3);
					}
					else
					{
						func_1();
					}
					break;
				
				case 3:
					func_636();
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_82.f_8)
	{
		case 0:
			if (func_41())
			{
				func_40(1);
			}
			func_38();
			break;
		
		case 1:
			func_38();
			func_2();
			break;
		
		case 2:
			if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 5))
			{
				func_40(3);
			}
			func_38();
			break;
		
		case 3:
			break;
	}
}

void func_2()
{
	if (!func_13(func_37()))
	{
		func_12(1);
		func_40(2);
		unk_0x5D96D8530B3D0904(&(Local_82.f_1), 2);
	}
	if (func_11() == func_10() || !func_9(func_11(), 0, 1))
	{
		func_12(3);
		func_40(2);
		unk_0x5D96D8530B3D0904(&(Local_82.f_1), 3);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0))
	{
		if (func_3(&(Local_82.f_4), func_5(), 0))
		{
			unk_0x5D96D8530B3D0904(&(Local_82.f_1), 4);
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 4))
	{
		func_12(2);
		func_40(2);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 1) || unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 7))
	{
		func_12(0);
		func_40(2);
	}
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

int func_5()
{
	if (func_6(unk_0xD803B885F5E47A62(), 1))
	{
		return 120000;
	}
	return 300000;
}

bool func_6(int iParam0, bool bParam1)
{
	return func_7(iParam0, bParam1, 1);
}

int func_7(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_8(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_10() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0, int iParam1)
{
	if (iParam0 != func_10())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_10())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
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

int func_10()
{
	return 4294967295;
}

int func_11()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

void func_12(int iParam0)
{
	Local_82.f_9 = iParam0;
}

int func_13(int iParam0)
{
	if (func_34(iParam0) && ((func_32(iParam0) == 142 || func_32(iParam0) == 164) || func_32(iParam0) == 148))
	{
		return 0;
	}
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_31(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_30(iParam0))
	{
		return 0;
	}
	if (func_28(iParam0, 1) && func_27(iParam0) == func_11())
	{
		return 0;
	}
	if (func_23(iParam0))
	{
		return 0;
	}
	if (func_22(iParam0, 7))
	{
		return 0;
	}
	if (func_17(iParam0))
	{
		return 0;
	}
	if (func_14(iParam0, 6))
	{
		return 0;
	}
	return 1;
}

int func_14(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_16() != 0)
	{
		return 0;
	}
	if (!func_15(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_184507[iVar0 /*876*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_1, iParam0);
	}
	return 1;
}

int func_16()
{
	return Global_7830;
}

int func_17(int iParam0)
{
	if (func_19(iParam0, 0))
	{
		return 1;
	}
	if (func_18())
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

bool func_18()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 3);
}

bool func_19(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_20(4294967295, 0) == 8;
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

int func_20(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_21();
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

int func_21()
{
	return Global_1407E9;
}

bool func_22(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

bool func_23(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return func_26();
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_F1.f_88[func_25(10) /*33*/][iParam0], func_24(10));
}

int func_24(int iParam0)
{
	return (iParam0 % 32);
}

int func_25(int iParam0)
{
	return (iParam0 / 32);
}

bool func_26()
{
	return Global_1406A2;
}

int func_27(int iParam0)
{
	if (iParam0 != func_10())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_10();
}

bool func_28(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_29(iParam0))
		{
			return 0;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_10();
}

int func_29(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_10())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0;
}

bool func_30(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4 != 0;
}

int func_31(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 4294967295;
}

int func_33(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (func_29(iParam0))
	{
		if (func_35(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_36(iParam0, 9);
	}
	return 0;
}

bool func_36(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_37()
{
	return Local_82.f_2;
}

void func_38()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x54EABC0DD106045B();
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_42() < 2)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar2 /*4*/].f_1, 1))
			{
				func_39(unk_0x117658E336116132(iVar2));
				unk_0x5D96D8530B3D0904(&(Local_82.f_1), 1);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar2 /*4*/].f_1, 4))
			{
				func_39(func_11());
				unk_0x5D96D8530B3D0904(&(Local_82.f_1), 7);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar2 /*4*/].f_1, 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_82.f_1), 0);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar2 /*4*/].f_1, 2))
			{
				unk_0x5D96D8530B3D0904(&(Local_82.f_1), 4);
			}
		}
		else if (func_42() == 2)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_83[iVar2 /*4*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	if (func_42() == 2)
	{
		if (iVar0 == unk_0x0DC0B2DBBD52B0C0())
		{
			unk_0x5D96D8530B3D0904(&(Local_82.f_1), 5);
		}
		else if (func_3(&(Local_82.f_6), 10000, 0))
		{
			unk_0x5D96D8530B3D0904(&(Local_82.f_1), 5);
		}
	}
}

void func_39(int iParam0)
{
	Local_82.f_3 = iParam0;
}

void func_40(int iParam0)
{
	Local_82.f_8 = iParam0;
}

int func_41()
{
	return 1;
}

int func_42()
{
	return Local_82.f_8;
}

int func_43()
{
	if (func_44())
	{
		return 1;
	}
	return 0;
}

int func_44()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 6))
	{
		return 1;
	}
	func_50(func_10());
	if (Global_26B66F.f_1404.f_4 != func_10())
	{
	}
	else
	{
		func_51(3);
	}
	if (func_9(Global_26B66F.f_1404.f_4, 0, 1))
	{
		if (!func_48(Global_26B66F.f_1404.f_4, unk_0xD803B885F5E47A62(), 1))
		{
			func_50(Global_26B66F.f_1404.f_4);
		}
	}
	if (func_37() != func_10())
	{
		if (func_6(unk_0xD803B885F5E47A62(), 1))
		{
			if (func_47(func_37(), 13))
			{
				Local_82.f_A = 1;
			}
		}
		func_45(func_46(func_37()), 1);
		Global_26B66F.f_1404.f_4 = func_10();
		unk_0x5D96D8530B3D0904(&(Local_82.f_1), 6);
		return 1;
	}
	else if (func_37() == func_10())
	{
	}
	return 0;
}

void func_45(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 1421531240;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &vVar0, 3, iParam0);
	}
}

int func_46(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 4294967295)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

bool func_47(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_5, iParam1);
}

int func_48(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_10())
	{
		if (!bParam2)
		{
			if (func_49(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_10())
		{
			return iParam1 == Global_18D84D[iParam0 /*615*/].f_B;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	if (iParam1 != func_10())
	{
		if (iParam0 != func_10())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_10())
			{
				if (Global_18D84D[iParam0 /*615*/].f_B == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_50(int iParam0)
{
	Local_82.f_2 = iParam0;
	if (iParam0 == func_10())
	{
	}
}

void func_51(int iParam0)
{
	Local_82 = iParam0;
}

int func_52()
{
	if (Global_26B66F.f_1404.f_28)
	{
		Global_26B66F.f_1404.f_28 = 0;
		return 1;
	}
	return 0;
}

int func_53(bool bParam0)
{
	if (func_61(1))
	{
		return 1;
	}
	if (Global_26B66F.f_1404.f_29)
	{
		Global_26B66F.f_1404.f_29 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_60() == func_10() || !func_9(func_60(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_58(unk_0xD803B885F5E47A62()))
	{
		if (func_57(unk_0xD803B885F5E47A62()) && func_54())
		{
			return 1;
		}
	}
	return 0;
}

int func_54()
{
	switch (func_55(func_56(unk_0xD803B885F5E47A62())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
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
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return 4294967295;
}

int func_56(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return Global_25033E[iParam0 /*421*/].f_136.f_E;
	}
	return 4294967295;
}

int func_57(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 4);
	}
	return 0;
}

int func_58(int iParam0)
{
	if (func_59(iParam0) != func_10())
	{
		return func_59(iParam0) == func_27(iParam0);
	}
	return 0;
}

int func_59(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_23;
}

int func_60()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23;
}

int func_61(bool bParam0)
{
	bool bVar0;
	
	if (!func_95(1))
	{
		bVar0 = false;
		if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 != func_10())
		{
			if (func_9(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39, 0, 1))
			{
				if ((Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 4 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 8) || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_94(func_32(unk_0xD803B885F5E47A62())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_93(31);
				if (func_92(func_32(unk_0xD803B885F5E47A62())))
				{
					func_93(81);
				}
				if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 != func_10() && unk_0x40B8C182D63932FC(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39))
				{
					Global_18D265 = func_63(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39, 4294967294, 0, 0, 0);
					if (!func_62(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39))
					{
						func_93(88);
					}
				}
				else
				{
					Global_18D265 = 1;
				}
				Global_18D255 = { Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_68 };
			}
			return 1;
		}
	}
	return 0;
}

bool func_62(int iParam0)
{
	return func_8(iParam0, 1);
}

int func_63(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_17(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == 4294967294)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
		if (iVar0 > 4294967295 && iVar0 < 4)
		{
			if (Global_440000.f_2E673[iVar0] != 4294967295)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_17(unk_0xD803B885F5E47A62()) || (func_91() && func_90())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 31)) && !bParam4)
	{
		iVar1 = func_89();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 4294967295)
				{
					if (func_9(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_440000.f_2E673[iParam1] != 4294967295)
							{
								return func_87(iParam1, iParam0, 0);
							}
							else
							{
								return func_76(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_76(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_440000.f_2E673[iParam1] != 4294967295)
				{
					return func_87(iParam1, iParam0, 0);
				}
				else
				{
					return func_64(0, 4294967295, 0);
				}
			}
			else
			{
				return func_64(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_440000.f_2E673[iParam1] != 4294967295)
		{
			return func_87(iParam1, iParam0, 0);
		}
		else
		{
			return func_76(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_76(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_64(bool bParam0, int iParam1, bool bParam2)
{
	return func_65(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_65(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_75() || (func_74() && func_72())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_71(iParam2, iVar0);
		}
		else
		{
			return func_71(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_70(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_69(1);
				}
				else
				{
					return func_69(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 20))
			{
				return func_66(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_66(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_69(1);
	}
	return func_69(0);
}

int func_66(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_68(iParam0, iParam1, iParam3);
	if (func_67(Global_440000.f_2F9AE, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_67(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_38DB3 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_40001.f_233B[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_70(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_69(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > 4294967295 && iParam1 > 4294967295) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 0);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 1);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 2);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 4);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 5);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 6);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 8);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 9);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 10);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 12);
				
				case 1:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 13);
				
				case 2:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 14);
				
				case 3:
					return unk_0xEAE0D21A50E6C7F4(Global_440000.f_DC, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_68(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_72()
{
	if (func_73())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 4);
}

bool func_73()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 12);
}

bool func_74()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0);
}

int func_75()
{
	if (func_73() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 4294967294)
	{
		iVar0 = unk_0x08067D4957B73C02(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > 4294967295)
	{
		if (Global_184507[iVar2 /*876*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != 4294967295)
		{
			if (func_82())
			{
				iVar3 = func_81(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_79(iVar3);
				}
			}
			if ((func_78(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18)) || ((func_70(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18)))
			{
				return func_69(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 26))
			{
				return func_77(1);
			}
			else
			{
				return func_65(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_18060A == 1 && Global_180614 == 0))
			{
				return func_69(1);
			}
			else
			{
				return func_65(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_81(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_79(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_77(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 4294967294)
	{
		if (iParam3 == 0)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 4294967295 && unk_0x08067D4957B73C02(iParam1) == 4294967295)
			{
				return 0;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x08067D4957B73C02(iParam0) == 4294967295 && iParam2 == 4294967295)
			{
				return 0;
			}
		}
		return unk_0x08067D4957B73C02(iParam0) == iParam2;
	}
	return unk_0x08067D4957B73C02(iParam0) == iParam2;
}

int func_79(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_80(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_80(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_81(int iParam0)
{
	if (!iParam0 == func_10())
	{
		if (func_28(iParam0, 1))
		{
			return Global_24E4E9.f_332.f_B[func_27(iParam0)];
		}
	}
	return 4294967295;
}

int func_82()
{
	if (((func_86() || func_85()) || func_84()) || func_83())
	{
		return 1;
	}
	return 0;
}

var func_83()
{
	return Global_2564C8.f_13;
}

bool func_84()
{
	return Global_2564C8.f_11;
}

var func_85()
{
	return Global_2564C8.f_10;
}

var func_86()
{
	return Global_2564C8.f_F;
}

int func_87(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_82())
	{
		iVar2 = func_81(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_79(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_10())
	{
		if (Global_440000.f_2E673[iParam0] != 4294967295 && Global_440000.f_2E673[iParam0] <= 4)
		{
			if (Global_440000.f_2E673[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_440000.f_2E673[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_440000.f_2E673[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_440000.f_2E673[iParam0] == 4)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_440000.f_2E673[iParam0];
			}
		}
		else
		{
			iVar0 = func_65(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 13))
		{
			iVar0 = func_88(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 26) && !func_70(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_77(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_88(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_440000.f_38E2F;
			break;
		
		case 1:
			iVar0 = Global_440000.f_38E30;
			break;
		
		case 2:
			iVar0 = Global_440000.f_38E31;
			break;
		
		case 3:
			iVar0 = Global_440000.f_38E32;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_89()
{
	return Global_240006.f_2;
}

bool func_90()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 4);
}

bool func_91()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 14);
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 148 && func_8(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return 4294967295;
}

bool func_95(bool bParam0)
{
	return func_28(unk_0xD803B885F5E47A62(), bParam0);
}

void func_96()
{
	switch (func_620())
	{
		case 0:
			func_605(151, 1, 4294967295, 0);
			func_604(1);
			if (func_42() > 0)
			{
				func_603(1);
			}
			break;
		
		case 1:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_80, 2))
			{
				func_600();
			}
			if (Global_19AA04 == func_10())
			{
				if (unk_0x40B8C182D63932FC(func_37()))
				{
					Global_19AA04 = func_37();
				}
			}
			func_594();
			func_584();
			func_565();
			func_563();
			func_519();
			func_396(&(Global_14DB79.f_216), &Global_14DB79, 28, &(Global_14DB79.f_1), &(Global_14DB79.f_75), 4294967295, 0, 0);
			if (func_42() > 1)
			{
				func_603(2);
			}
			break;
		
		case 2:
			if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1, 3))
			{
				func_394(0, func_10());
				func_302();
				func_97();
			}
			if (func_42() > 2)
			{
				func_603(3);
			}
			break;
		
		case 3:
			break;
	}
}

void func_97()
{
	struct<20> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	if (!unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1, 3))
	{
		if ((unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 2) || unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 4)) || unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 4))
		{
			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 3);
			return;
		}
		if (func_301())
		{
			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 3);
			return;
		}
		if (func_295())
		{
			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 3);
			return;
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 7))
		{
			func_98(151, 1, &Var0, 0);
		}
		else
		{
			func_98(151, unk_0xEAE0D21A50E6C7F4(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1, 1), &Var0, 0);
		}
		unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 3);
	}
}

void func_98(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_293(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_292(iParam0, uParam2->f_D, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_A / uParam2->f_B) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_15 == 1) && !uParam2->f_16)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_291(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_12 > 4294967295)
	{
		iVar0 = (iVar0 + uParam2->f_12);
	}
	if (uParam2->f_13 > 4294967295)
	{
		iVar1 = (iVar1 + uParam2->f_13);
	}
	if (func_289(iParam0))
	{
		if (bParam1)
		{
			if (func_288(unk_0xD803B885F5E47A62()) > 0)
			{
				func_287();
			}
			else
			{
				func_286();
			}
		}
		else
		{
			func_285();
		}
	}
	func_269(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_267(iParam0, uParam2, &iVar0, &iVar5);
	func_241(iParam0, uParam2, &iVar0, &iVar5);
	func_238(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_221(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_26B66F.f_1404.f_17E = iVar4;
	}
	else
	{
		Global_26B66F.f_1404.f_17E = iVar5;
	}
	iVar8 = func_60();
	if (iVar8 != func_10() && iParam0 != 148)
	{
		if (func_28(unk_0xD803B885F5E47A62(), 0))
		{
			if (!func_48(unk_0xD803B885F5E47A62(), iVar8, 1))
			{
				func_207(&iVar0, 1);
			}
		}
	}
	func_201(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_198C74.f_A = iVar1;
		func_200();
		func_153(0, unk_0x16F2683693E537C9(), "", 3419251281, 1626430110, iVar1, 1, 4294967295, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_198C74.f_9 = iVar0;
		func_130(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_129(iParam0, iVar0);
		if (func_128(iParam0))
		{
			if (func_127(iParam0) > 4294967295)
			{
				func_126(func_127(iParam0), iVar0);
			}
		}
		Global_2594A0 = iVar0;
		func_125(&Global_258DD8, 0, 0);
	}
	if (func_35(unk_0xD803B885F5E47A62()) || func_124(unk_0xD803B885F5E47A62()))
	{
		func_111(iParam0);
	}
	if (func_92(iParam0))
	{
		Global_198C86.f_D = iVar0;
		Global_198C86.f_E = iVar1;
	}
	if (func_110(iParam0))
	{
		Global_198CBC.f_D = iVar0;
		Global_198CBC.f_E = iVar1;
	}
	if (func_109(iParam0))
	{
		Global_198CFB.f_C = iVar0;
		Global_198CFB.f_D = iVar1;
	}
	if (func_108(iParam0))
	{
		Global_198D27.f_C = iVar0;
		Global_198D27.f_D = iVar1;
	}
	if (func_107(iParam0))
	{
		Global_198D5D.f_C = iVar0;
		Global_198D5D.f_D = iVar1;
	}
	if (func_106(iParam0))
	{
		if (func_105(iParam0))
		{
			Global_198DAF.f_C = iVar0;
			Global_198DAF.f_D = iVar1;
		}
		else if (func_101(iParam0))
		{
			Global_198DE5.f_C = iVar0;
			Global_198DE5.f_D = iVar1;
		}
	}
	if (func_100(iParam0))
	{
		Global_198E39.f_C = iVar0;
		Global_198E39.f_D = iVar1;
	}
	if (func_99(iParam0))
	{
		Global_198E84.f_10 = iVar0;
		Global_198E84.f_11 = iVar1;
	}
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_101(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_102(func_103(unk_0xD803B885F5E47A62()))))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_103(int iParam0)
{
	if (func_32(iParam0) == 237 || func_32(iParam0) == 250)
	{
		return func_104(iParam0);
	}
	return 4294967295;
}

int func_104(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 4294967295;
}

int func_105(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

void func_111(int iParam0)
{
	if (func_123(unk_0xD803B885F5E47A62()) && func_122())
	{
		if (func_121(iParam0))
		{
			func_115(10146, 4294967295);
		}
		else if (func_114(iParam0))
		{
			func_115(10148, 4294967295);
		}
		else if (func_113(iParam0, 1))
		{
			func_115(10149, 4294967295);
		}
		else if (func_112(iParam0))
		{
			func_115(10150, 4294967295);
		}
	}
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_115(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_119(iParam0, func_120(iParam1), 0);
	iVar0++;
	if (!func_118(iParam0))
	{
		func_117(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_116(iParam0, iVar0, iParam1, 1);
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_120(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_152DD4[func_120(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_152DDA[func_120(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_152DE0[func_120(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_152DE6[func_120(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_152DEC[func_120(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_152DB6[func_120(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_152DBC[func_120(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_152DC2[func_120(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_152DC8[func_120(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_152DCE[func_120(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_152D98[func_120(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_152D9E[func_120(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_152DA4[func_120(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_152DAA[func_120(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_152DB0[func_120(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_152DF2[func_120(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_152DF8[func_120(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_152DFE[func_120(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_152E04[func_120(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_152E0A[func_120(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_152E10[func_120(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_152E16[func_120(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_152E1C[func_120(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_152E22[func_120(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2775D1[0 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2775D1[1 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2775D1[2 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2775D1[3 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_277666[func_120(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_152E28[func_120(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_152E2E[func_120(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_152E34[func_120(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_152E3A[func_120(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_152E40[func_120(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_27761A[0 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_27761A[1 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_27761A[2 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_27761A[3 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_27761A[4 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_277669[0 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_277669[1 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_277669[2 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_277669[3 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_277669[4 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_277679[0 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_277679[1 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_277679[2 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_277679[3 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_277679[4 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_27761A[5 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2775D1[4 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_277689[func_120(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_277692[func_120(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27768C[func_120(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_277695[func_120(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27768F[func_120(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_277698[func_120(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27769B[func_120(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_27761A[6 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2775D1[5 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_27761A[7 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2775D1[6 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_27761A[8 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2775D1[7 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_27761A[9 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2775D1[8 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_27761A[10 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2775D1[9 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_27761A[11 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2775D1[10 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_27761A[12 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2775D1[11 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_27761A[13 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2775D1[12 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_27761A[14 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2775D1[13 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_27761A[15 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2775D1[14 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_27761A[16 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2775D1[15 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_27761A[17 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2775D1[16 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2775D1[17 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2775D1[18 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2775D1[19 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2775D1[20 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_27769E[func_120(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2776A1[func_120(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2776A4[func_120(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2776A7[func_120(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2776AA[func_120(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2776AD[func_120(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2776B0[func_120(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2776B3[func_120(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2776B6[func_120(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2776B9[func_120(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2776BC[func_120(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2776BF[func_120(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2776C2[func_120(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2776C5[func_120(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2775D1[21 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_27761A[23 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2775D1[22 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_27761A[24 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2775D1[23 /*3*/][func_120(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_120(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_118(int iParam0)
{
	if (Global_152D85)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

int func_119(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_120(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 4294967295))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_21();
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

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_122()
{
	return func_62(unk_0xD803B885F5E47A62());
}

bool func_123(int iParam0)
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_7B, 14);
}

bool func_124(int iParam0)
{
	return func_36(iParam0, 20);
}

void func_125(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = unk_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 1;
}

void func_126(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_40001.f_5BC1 == 0 || Global_40001.f_5BC1 == 1)
		{
			if (!unk_0x0EFF6B4415DAF4A1() || Global_40001.f_5BC1 == 1)
			{
				Global_26B66F.f_11B = iParam0;
				if (iParam1 > Global_40001.f_19B8)
				{
					iParam1 = Global_40001.f_19B8;
				}
				Global_26B66F.f_11C = iParam1;
				Global_26B66F.f_11D = 0;
			}
		}
	}
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_129(int iParam0, int iParam1)
{
	if (func_123(unk_0xD803B885F5E47A62()) && func_122())
	{
		if (func_121(iParam0) && iParam1 > 0)
		{
			func_117(10147, (func_119(10147, 4294967295, 0) + iParam1), 4294967295, 1, 0);
		}
	}
}

void func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_11();
	if (iVar5 != func_10())
	{
		func_152(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_95(1);
	Var7.f_1 = 4294967295;
	switch (iParam0)
	{
		case 168:
			if (!func_151())
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_122())
			{
				if (!func_151())
				{
					Var7 = { func_150() };
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_149(Var7)), func_148(Var7), iParam4);
				}
			}
			else if (func_151())
			{
				func_137(3438960429, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_136())
			{
				if (!func_151())
				{
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_149(func_135(unk_0xD803B885F5E47A62()))), 5, iParam4);
				}
			}
			else if (func_151())
			{
				func_137(3438960429, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_136())
			{
				if (!func_151())
				{
					iVar2 = func_131(uParam5->f_10, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0x13A30CD1AD15553C(iVar3, iParam4, iParam2, iVar2, uParam5->f_10);
				}
			}
			else if (func_151())
			{
				func_137(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x3CF6953686BFBF61(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_151())
			{
				func_137(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x53D560AAF6BF3D4E(iParam1);
			}
			break;
		
		case 237:
			if (func_136())
			{
				if (!func_151())
				{
					unk_0x5D421B9474B610E6(iParam1, uParam5->f_14, iParam4);
				}
			}
			else if (func_151())
			{
				func_137(3438960429, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_151())
			{
				func_137(3333932415, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xA106C1682C790290(iParam1);
			}
			break;
		
		case 249:
			if (func_151())
			{
				func_137(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x546613D1293DBF87(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_151())
			{
				func_137(3660240660, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x163F1C05711ACF77(iParam1);
			}
			break;
		
		case 243:
			if (func_151())
			{
				func_137(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0xA8C1B24657FB32B3(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_16)
			{
				if (func_151())
				{
					func_137(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0xB0E03FD240577D6C(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_151())
			{
				func_137(2262437735, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0xB0E03FD240577D6C(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_151())
			{
				func_137(3438960429, iParam1, &iVar4, 0, 1, 0);
				Global_411012[iVar4 /*85*/].f_6 = uVar0;
				Global_411012[iVar4 /*85*/].f_7 = uVar1;
				Global_411012[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				unk_0x0C06D61FE6218C43(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_131(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_134(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_132(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_132(int iParam0, int iParam1)
{
	return (func_133(iParam0) * iParam1);
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_40001.f_5722;
		
		case 0:
			return Global_40001.f_5723;
		
		case 1:
			return Global_40001.f_5724;
		
		case 2:
			return Global_40001.f_5725;
		
		case 3:
			return Global_40001.f_5726;
		
		case 4:
			return Global_40001.f_5727;
		
		case 5:
			return Global_40001.f_5728;
		
		case 6:
			return Global_40001.f_5729;
		
		case 7:
			return Global_40001.f_572A;
		
		default:
	}
	return 0;
}

float func_134(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572C);
	switch (iParam0)
	{
		case 4294967295:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_40001.f_572E;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572B);
			break;
		
		case 3:
			fVar0 = Global_40001.f_572E;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572B);
			break;
		
		case 0:
			fVar0 = Global_40001.f_572F;
			break;
		
		case 1:
			fVar0 = Global_40001.f_572F;
			break;
		
		case 4:
			fVar0 = Global_40001.f_572F;
			break;
		
		case 6:
			fVar0 = Global_40001.f_5730;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572D);
			break;
		
		case 2:
			fVar0 = Global_40001.f_5730;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572D);
			break;
		
		case 5:
			fVar0 = Global_40001.f_5730;
			fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_572D);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_135(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	return Global_184507[iParam0 /*876*/].f_112.f_B7[5 /*12*/];
}

bool func_136()
{
	return func_29(unk_0xD803B885F5E47A62());
}

void func_137(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_151())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case 2649738075:
		case 3709248901:
		case 2935592169:
		case 454359403:
		case 3312573245:
		case 1643659499:
		case 2222677642:
		case 650665123:
		case 1654961868:
		case 3418119454:
		case 68030260:
		case 2172668013:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case 3778748250:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case 2905739390:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case 3395164992:
		case 3631022961:
		case 1208553146:
		case 3681746286:
		case 3623904420:
		case 3887766060:
		case 3540943093:
		case 2409522409:
		case 1931729587:
		case 1064954035:
		case 4114826223:
		case 2131324797:
		case 1612072658:
		case 3777519894:
		case 1948102096:
		case 1108628223:
		case 2460920732:
		case 3055958484:
		case 4072603454:
		case 3018288428:
		case 1564537328:
		case 4198373795:
		case 742499889:
		case 2050093329:
		case 2542479227:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case 2964212290:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case 3958163446:
		case 2882274531:
		case 618167454:
		case 980623936:
		case 437291904:
		case 4159154248:
		case 3364862819:
		case 2874057976:
		case 2561569253:
		case 2402207034:
		case 2749230248:
		case 2039302543:
		case 402505853:
		case 3151457114:
		case 1678112166:
		case 837955913:
		case 2762500152:
		case 1815541181:
			if (iParam1 > 0 || Global_40001.f_6BC0)
			{
				func_138(iParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 4263810419:
		case 3267748665:
		case 2896648878:
		case 1652884147:
		case 4237099040:
		case 3078478004:
		case 4248344981:
		case 3942610365:
		case 3304681061:
		case 563463121:
		case 1734805203:
		case 941287179:
		case 3108887451:
		case 2309817038:
		case 3167945912:
		case 4185766010:
		case 312105838:
		case 1982688246:
		case 3633936878:
		case 1301046174:
		case 2708796979:
		case 393059668:
		case 23796958:
		case 3217811126:
		case 1780666425:
		case 2251272238:
		case 2372412947:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case 4140234963:
		case 2932306805:
		case 645708827:
		case 767907967:
		case 2324815990:
		case 718859568:
		case 2339402525:
		case 892388724:
		case 2868046458:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case 4235299214:
		case 1736933716:
		case 2826443171:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case 3360501964:
		case 3100714174:
		case 4082360211:
		case 3479420741:
		case 1048226110:
		case 569170531:
		case 3438960429:
		case 848090538:
		case 4247420391:
		case 4001907056:
		case 463142405:
		case 1550217370:
		case 4193659516:
		case 3630369731:
		case 599804707:
		case 3967048882:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case 2164767625:
		case 3067312758:
		case 1864522104:
		case 215608230:
		case 3418954532:
		case 3572072971:
		case 1407278493:
		case 2715572802:
		case 4267523385:
		case 1179783540:
		case 923419301:
		case 3986141121:
		case 603298940:
		case 4282347442:
		case 3983854621:
		case 870439158:
		case 3320678556:
		case 4290828642:
		case 3114013174:
		case 2376916280:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case 3122066507:
		case 2279567963:
		case 2720171655:
		case 3333932415:
		case 1135468152:
		case 1265272476:
		case 3660240660:
		case 696556762:
		case 403506509:
		case 3411090882:
		case 3230816581:
		case 2907714241:
		case 3578004144:
		case 1138089938:
		case 3733955243:
			func_138(iParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 2601396541:
		case 1868043300:
		case 3597718413:
		case 2999421501:
		case 914079366:
		case 395122350:
		case 3962986220:
		case 1671535231:
			if (iParam1 > 0 || Global_40001.f_6BC0)
			{
				func_138(iParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
		case 3800402237:
		case 827308208:
		case 2437282104:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case 2718886530:
		case 1508411869:
		case 1428501742:
		case 2376000145:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case 2267308920:
		case 2277042259:
		case 1668610896:
		case 2262437735:
		case 3070487849:
		case 3975660607:
		case 3828440032:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case 3452904320:
			func_138(iParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_138(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_151())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_21()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 1;
			return 0;
		}
		if (Global_25908F)
		{
			if (iParam3 == 1067618600 || iParam3 == 2991135598)
			{
				Global_411259 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_411012[iVar2 /*85*/].f_42.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x98212517C34835B2(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar4))
		{
			*uParam0 = func_145(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != 4294967295)
				{
					Global_411012[*uParam0 /*85*/].f_42.f_8 = 1;
					Global_411012[*uParam0 /*85*/].f_42.f_C = 1;
				}
			}
			Global_411249 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_411257 = 1;
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 1;
			Global_41125B = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_41125A = iParam4;
			Global_41125C = iParam3;
			Global_41125D = 1;
			Global_41125B = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_144(1, iParam4);
			Global_411257 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_139(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_140(iParam0);
	}
}

void func_140(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_151())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_143(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_411012[iParam0 /*85*/].f_42);
		}
		func_141(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_141(var uParam0)
{
	uParam0->f_42 = 0;
	uParam0->f_42 = 2147483647;
	uParam0->f_42.f_1 = 0;
	uParam0->f_42.f_2 = 0;
	uParam0->f_42.f_3 = 2701847856;
	uParam0->f_42.f_4 = 2209654107;
	uParam0->f_42.f_5 = 0;
	uParam0->f_42.f_6 = 1227573907;
	uParam0->f_42.f_7 = 3133133477;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_D = 0;
	uParam0->f_2 = 0;
	func_142(&(uParam0->f_E));
	func_142(&(uParam0->f_E.f_D));
	StringCopy(&(uParam0->f_E.f_1A), "", 32);
	StringCopy(&(uParam0->f_E.f_22), "", 24);
	StringCopy(&(uParam0->f_E.f_28), "", 16);
	StringCopy(&(uParam0->f_E.f_2C), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_42.f_8 = 0;
	uParam0->f_42.f_9 = 0;
	uParam0->f_42.f_A = 0;
	uParam0->f_42.f_B = 0;
	uParam0->f_42.f_D = 0;
	uParam0->f_42.f_C = 0;
	uParam0->f_42.f_E = 0;
	uParam0->f_42.f_F = 0;
	uParam0->f_42.f_10 = 0;
	uParam0->f_42.f_12 = 0;
}

void func_142(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

int func_143(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 1;
	}
	return 0;
}

void func_144(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0)
		{
			if (!func_151())
			{
				iParam0 = iVar0 + 900;
			}
			Global_411012[iVar0 /*85*/].f_42.f_2 = 1;
			Global_411012[iVar0 /*85*/].f_42.f_1 = iParam5;
			Global_411012[iVar0 /*85*/].f_42.f_3 = iParam1;
			Global_411012[iVar0 /*85*/].f_42.f_4 = iParam2;
			Global_411012[iVar0 /*85*/].f_42.f_7 = iParam3;
			Global_411012[iVar0 /*85*/].f_42.f_5 = 0;
			Global_411012[iVar0 /*85*/].f_42 = iParam0;
			Global_411012[iVar0 /*85*/].f_42.f_6 = iParam4;
			Global_411012[iVar0 /*85*/].f_42.f_B = uParam8;
			Global_411012[iVar0 /*85*/].f_42.f_A = iParam7;
			Global_411012[iVar0 /*85*/].f_42.f_D = iParam9;
			Global_411012[iVar0 /*85*/].f_42.f_C = 0;
			Global_411012[iVar0 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			Global_411012[iVar0 /*85*/].f_42.f_12 = 0;
			Global_411249 = 0;
			if (bParam6)
			{
				Global_411012[iVar0 /*85*/].f_42.f_5 = 1;
			}
			if (iParam1 == 3159588365 && iParam10)
			{
				func_146(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_146(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 285918879;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_42 };
	vVar0.f_2.f_21 = iParam19;
	iVar1 = func_46(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_147();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_147()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return 4294967295;
}

char* func_149(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_150()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_C1;
}

int func_151()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

void func_152(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_18D84D[iParam0 /*615*/].f_B.f_8[0];
	*uParam2 = Global_18D84D[iParam0 /*615*/].f_B.f_8[1];
}

int func_153(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_154(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_154(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_164(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 3702944691 || iParam4 == 2379775567)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_160(unk_0x64430C979F516F7A(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_155(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_155(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_158(iParam0, 1) };
	if (iParam0 == func_157(unk_0x16F2683693E537C9()))
	{
		func_156(1);
	}
	func_160(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_156(int iParam0)
{
	Global_2537E2.f_763 = iParam0;
}

int func_157(int iParam0)
{
	return iParam0;
}

Vector3 func_158(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (unk_0x19C7D1907D1DDDAB())
	{
		vVar1 = { unk_0x3B276DB863622D2E(2) };
	}
	if (iParam0 == func_159(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
	{
		vVar0 = { unk_0x68E4ADDDDCD7BDDE(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	fVar2 = 0f;
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		fVar2 = unk_0xD9522BA9E27E1349(iParam0);
		if (unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { unk_0x8A5E176FF719A014(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_159(int iParam0)
{
	return iParam0;
}

void func_160(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = 4294967295;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 0 || Global_2537E2.f_50A[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != 4294967295)
		{
			Global_2537E2.f_50A[iVar1 /*30*/] = { vParam0 };
			Global_2537E2.f_50A[iVar1 /*30*/].f_6 = 1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_4 = func_163(Global_2537E2.f_50A[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_2537E2.f_50A[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_50A[iVar1 /*30*/].f_3 = iParam1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_8 = iParam2;
			Global_2537E2.f_50A[iVar1 /*30*/].f_9 = func_162();
			Global_2537E2.f_50A[iVar1 /*30*/].f_A = func_161();
			StringCopy(&(Global_2537E2.f_50A[iVar1 /*30*/].f_16), sParam3, 16);
			Global_2537E2.f_50A[iVar1 /*30*/].f_1A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam4);
		}
	}
}

int func_161()
{
	if (Global_2537E2.f_763)
	{
		Global_2537E2.f_763 = 0;
		return 1;
	}
	Global_2537E2.f_763 = 0;
	return 0;
}

var func_162()
{
	var uVar0;
	
	uVar0 = Global_2537E2.f_765;
	Global_2537E2.f_765 = 1;
	return uVar0;
}

float func_163(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0EB28750412C3A5A(unk_0x07DAF5424BC6779A(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_164(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_165(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_165(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_199(unk_0xD803B885F5E47A62()) || func_198(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_25A3 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_25A3;
		}
	}
	else if (func_196() || func_195(unk_0xD803B885F5E47A62()))
	{
		if (Global_40001.f_58F6 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_58F6;
		}
	}
	else if (Global_40001.f_19EB > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_40001.f_19EB;
	}
	if (func_194(sParam2))
	{
	}
	if (func_193())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_191(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_190(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_187(0, &iVar1);
					break;
				
				case 3:
					func_187(1, &iVar1);
					break;
				
				case 1:
					func_184(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_19BCBA)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_183(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_176((func_182(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 4294967295)
				{
					func_183(1165, iVar1, 4294967295);
				}
				func_170(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 4294967295)
			{
				func_166((func_168(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_166((func_168(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_166(int iParam0)
{
	if (func_193())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_167(joaat("mpply_globalxp"), iParam0);
	}
}

void func_167(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_168(int iParam0)
{
	if (iParam0 > 4294967295)
	{
		if (func_9(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_169(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_169(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_169(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_170(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_175(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_173(func_174(&Var0));
			if (iVar1 == 0)
			{
				func_172(&Global_152D8B, iParam0);
				func_171(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 1)
			{
				func_172(&Global_152D8C, iParam0);
				func_171(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 2)
			{
				func_172(&Global_152D8D, iParam0);
				func_171(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 3)
			{
				func_172(&Global_152D8E, iParam0);
				func_171(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 4)
			{
				func_172(&Global_152D8F, iParam0);
				func_171(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_171(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_152D86 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_152D88 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_152D89 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_152D8A = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_152D8B = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_152D8C = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_152D8D = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_152D8E = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_152D8F = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_152D90 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_152D91 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_152D92 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_152D93 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_152D94 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_152D95 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_152D96 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_172(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_173(int iParam0)
{
	if (iParam0 == Global_152D86)
	{
		return 0;
	}
	else if (iParam0 == Global_152D87)
	{
		return 1;
	}
	else if (iParam0 == Global_152D88)
	{
		return 2;
	}
	else if (iParam0 == Global_152D89)
	{
		return 3;
	}
	else if (iParam0 == Global_152D8A)
	{
		return 4;
	}
	else
	{
		return 4294967295;
	}
	return 4294967295;
}

int func_174(var uParam0)
{
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return Global_258BBD;
		}
	}
	return Global_258BBD;
}

struct<13> func_175(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	if (func_193())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2583 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_152E1C[func_120(4294967295)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_120(4294967295)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 3136273443, 2949543449);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_40001.f_2582 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x189A6F4108CDFDD6(iParam0, 2708045899, iParam1);
				return;
			}
		}
		if (func_15(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_180(iParam0, 1);
		}
		func_116(639, iParam0, 4294967295, 1);
		func_117(640, func_180(iParam0, 1), 4294967295, 1, 0);
		Global_152E1C[func_120(4294967295)] = iParam0;
		func_177(3185322862, 7, 0);
	}
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_179(iParam1, iParam2))
	{
		iVar0 = func_178();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_178()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_258B8D[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_179(int iParam0, var uParam1)
{
	if (Global_140861)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_14086D) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_180(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_181(iParam0, 0);
}

int func_181(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_4713D[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4713D[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_182(int iParam0)
{
	if (Global_1406D3.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_120(4294967295)];
			}
			else if (func_15(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_120(4294967295)];
	}
	return 0;
}

void func_183(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_119(iParam0, func_120(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_118(iParam0))
	{
		func_117(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_116(iParam0, iVar0, iParam2, 1);
	}
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		iVar4 = unk_0xF4FB3A22FC4991C8(iVar0);
		if (unk_0x81A93C8315C28F58(iVar4))
		{
			iVar5 = unk_0x4B2BFE4A3BC248ED(iVar4);
			if (unk_0x08067D4957B73C02(iVar5) != 4294967295)
			{
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_70(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_186(unk_0xD803B885F5E47A62(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_185(*iParam0, 100) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_185(*iParam0, 100) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_185(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_186(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_175(iParam0) };
		Global_26594F = { func_175(iParam1) };
		if (unk_0xF2EC2A39FF9E838D(&Global_265942))
		{
			if (unk_0xF2EC2A39FF9E838D(&Global_26594F))
			{
				unk_0xD9DA83C40D038174(&Global_2658FC, 35, &Global_265942);
				unk_0xD9DA83C40D038174(&Global_26591F, 35, &Global_26594F);
				if (Global_2658FC == Global_26591F)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_187(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			iVar3 = iVar0;
			if (unk_0x81A93C8315C28F58(iVar3))
			{
				iVar4 = unk_0x4B2BFE4A3BC248ED(iVar3);
				if (func_9(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_186(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_9(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_188(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_186(unk_0xD803B885F5E47A62(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_185(*iParam1, 100) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_185(*iParam1, 100) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_188(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_189(iParam0), func_189(iParam1));
	return 0f;
}

Vector3 func_189(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_190(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_185(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_191(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_182(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_182(unk_0xD803B885F5E47A62());
		}
	}
	if (func_192(8000, 0, 0) > 0)
	{
		if (func_192(8000, 0, 0) < (iParam0 + func_182(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_192(8000, 0, 0) - func_182(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_192(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_4713D[iParam0];
}

int func_193()
{
	return 1;
}

int func_194(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0)
{
	return func_107(func_32(iParam0));
}

bool func_196()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_84();
	}
	return func_197(Global_440000.f_2F9AE);
}

int func_197(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_40001.f_1390[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_198(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 2;
}

bool func_199(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 7;
}

void func_200()
{
	Global_25920D = 1;
}

void func_201(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_206(7))
	{
		return;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_203(iParam0);
	iVar2 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_26B66F.f_1404.f_109, unk_0x2B6E0A53779D29EA()));
	if (func_202(iParam0) != 4294967295)
	{
		if (iVar2 > func_202(iParam0))
		{
			iVar2 = func_202(iParam0);
		}
	}
	else if (iVar2 > Global_40001.f_306B)
	{
		iVar2 = Global_40001.f_306B;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_202(int iParam0)
{
	if (func_113(iParam0, 0) || func_114(iParam0))
	{
		return Global_40001.f_4837;
	}
	if (func_121(iParam0))
	{
		return Global_40001.f_4836;
	}
	switch (iParam0)
	{
		case 192:
			return Global_40001.f_4833;
		
		case 191:
			return Global_40001.f_4835;
		
		case 190:
			return Global_40001.f_4834;
		
		case 227:
			return Global_40001.f_5233;
		
		case 226:
			return Global_40001.f_5227;
		
		case 225:
			return Global_40001.f_523B;
		
		case 230:
			return Global_40001.f_571F;
		
		case 229:
			return Global_40001.f_56BF;
		
		case 233:
			return Global_40001.f_58FB;
		
		case 237:
			return Global_40001.f_5D86;
		
		case 238:
			return Global_40001.f_5DF5;
		
		case 249:
			return Global_40001.f_5E05;
		
		case 243:
			return Global_40001.f_66BD;
		
		default:
	}
	return 4294967295;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_30C6;
		
		case 152:
			return Global_40001.f_30E9;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_30DD;
		
		case 157:
			return Global_40001.f_30BC;
		
		case 159:
			return Global_40001.f_30AB;
		
		case 164:
			return Global_40001.f_30D3;
		
		case 160:
			return Global_40001.f_3105;
		
		case 162:
			return Global_40001.f_3119;
		
		case 163:
			return Global_40001.f_30F6;
		
		case 154:
			return Global_40001.f_313C;
		
		case 155:
			return Global_40001.f_3132;
		
		case 153:
			return Global_40001.f_310E;
		
		case 170:
			return Global_40001.f_3A93;
		
		case 171:
			return Global_40001.f_3ACE;
		
		case 172:
			return Global_40001.f_3AE0;
		
		case 173:
			return Global_40001.f_3AA5;
		
		case 166:
			return Global_40001.f_3AB4;
		
		case 167:
			return Global_40001.f_3B0F;
		
		case 169:
			return Global_40001.f_3AF3;
		
		case 168:
			return Global_40001.f_3AEC;
		
		case 179:
			return Global_40001.f_47BE;
		
		case 180:
			return Global_40001.f_46E0;
		
		case 182:
			return Global_40001.f_46E0;
		
		case 183:
			return Global_40001.f_46E0;
		
		case 185:
			return Global_40001.f_46E0;
		
		case 186:
			return Global_40001.f_46E0;
		
		case 189:
			return Global_40001.f_47BE;
		
		case 190:
			return Global_40001.f_4664;
		
		case 191:
			return Global_40001.f_46BF;
		
		case 192:
			return Global_40001.f_45F1;
		
		case 193:
			return Global_40001.f_47BE;
		
		case 194:
			return Global_40001.f_47BE;
		
		case 195:
			return Global_40001.f_46E0;
		
		case 197:
			return Global_40001.f_46E0;
		
		case 198:
			return Global_40001.f_46E0;
		
		case 199:
			return Global_40001.f_47BE;
		
		case 200:
			return Global_40001.f_47BE;
		
		case 201:
			return Global_40001.f_47BE;
		
		case 205:
			return Global_40001.f_47BE;
		
		case 207:
			return Global_40001.f_46E0;
		
		case 208:
			return Global_40001.f_46E0;
		
		case 209:
			return Global_40001.f_46E0;
		
		case 210:
			return Global_40001.f_47BE;
		
		case 211:
			return Global_40001.f_47BE;
		
		case 214:
			return Global_40001.f_4B10;
		
		case 215:
			return Global_40001.f_4B12;
		
		case 216:
			return Global_40001.f_4B14;
		
		case 217:
			return Global_40001.f_4B16;
		
		case 218:
			return Global_40001.f_4B18;
		
		case 219:
			return Global_40001.f_4B1A;
		
		case 220:
			return Global_40001.f_4B1C;
		
		case 221:
			return Global_40001.f_4B1E;
		
		case 225:
			if (!func_136())
			{
				return Global_40001.f_523D;
			}
			break;
		
		case 226:
			if (!func_136())
			{
				return Global_40001.f_5229;
			}
			break;
		
		case 227:
			if (!func_136())
			{
				return Global_40001.f_5235;
			}
			break;
		
		case 229:
			if (!func_136())
			{
				return Global_40001.f_56C1;
			}
			break;
		
		case 230:
			if (!func_136())
			{
				return Global_40001.f_5721;
			}
			break;
		
		case 233:
			if (!func_136())
			{
				return Global_40001.f_58FA;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_136())
			{
				return Global_40001.f_5D88;
			}
			break;
		
		case 238:
			if (!func_136())
			{
				return Global_40001.f_5DF7;
			}
			break;
		
		case 249:
			if (!func_136())
			{
				return Global_40001.f_5E07;
			}
			break;
		
		case 243:
			if (!func_136())
			{
				return Global_40001.f_66C0;
			}
			break;
		
		case 158:
			if (!func_136())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_40001.f_30C5;
		
		case 152:
			return Global_40001.f_30E8;
		
		case 151:
			return 0;
		
		case 142:
			return Global_40001.f_30DC;
		
		case 157:
			return Global_40001.f_30BB;
		
		case 159:
			return Global_40001.f_30AA;
		
		case 164:
			return Global_40001.f_30D2;
		
		case 160:
			return Global_40001.f_3104;
		
		case 162:
			return Global_40001.f_3118;
		
		case 163:
			return Global_40001.f_30F5;
		
		case 154:
			return Global_40001.f_313B;
		
		case 155:
			return Global_40001.f_3131;
		
		case 153:
			return Global_40001.f_310D;
		
		case 170:
			return Global_40001.f_3A92;
		
		case 171:
			return Global_40001.f_3ACD;
		
		case 172:
			return Global_40001.f_3ADF;
		
		case 173:
			return Global_40001.f_3AA4;
		
		case 166:
			return Global_40001.f_3AB3;
		
		case 179:
			return Global_40001.f_47BD;
		
		case 180:
			return Global_40001.f_46DF;
		
		case 182:
			return Global_40001.f_46DF;
		
		case 183:
			return Global_40001.f_46DF;
		
		case 185:
			return Global_40001.f_46DF;
		
		case 186:
			return Global_40001.f_46DF;
		
		case 189:
			return Global_40001.f_47BD;
		
		case 193:
			return Global_40001.f_47BD;
		
		case 194:
			return Global_40001.f_47BD;
		
		case 195:
			return Global_40001.f_46DF;
		
		case 197:
			return Global_40001.f_46DF;
		
		case 198:
			return Global_40001.f_46DF;
		
		case 199:
			return Global_40001.f_47BD;
		
		case 200:
			return Global_40001.f_47BD;
		
		case 201:
			return Global_40001.f_47BD;
		
		case 205:
			return Global_40001.f_47BD;
		
		case 207:
			return Global_40001.f_46DF;
		
		case 208:
			return Global_40001.f_46DF;
		
		case 209:
			return Global_40001.f_46DF;
		
		case 210:
			return Global_40001.f_47BD;
		
		case 211:
			return Global_40001.f_47BD;
		
		case 190:
			if (func_205(0))
			{
				return Global_40001.f_4663;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_205(0))
			{
				return Global_40001.f_46BE;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_205(0))
			{
				return Global_40001.f_45F0;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_40001.f_4B0F;
		
		case 215:
			return Global_40001.f_4B11;
		
		case 216:
			return Global_40001.f_4B13;
		
		case 217:
			return Global_40001.f_4B15;
		
		case 218:
			return Global_40001.f_4B17;
		
		case 219:
			return Global_40001.f_4B19;
		
		case 220:
			return Global_40001.f_4B1B;
		
		case 221:
			return Global_40001.f_4B1D;
		
		case 225:
			if (func_205(0))
			{
				return Global_40001.f_523C;
			}
			break;
		
		case 226:
			if (func_205(0))
			{
				return Global_40001.f_5228;
			}
			break;
		
		case 227:
			if (func_205(0))
			{
				return Global_40001.f_5234;
			}
			break;
		
		case 229:
			if (func_205(0))
			{
				return Global_40001.f_56C0;
			}
			break;
		
		case 230:
			if (func_205(0))
			{
				return Global_40001.f_5720;
			}
			break;
		
		case 233:
			if (func_205(0))
			{
				return Global_40001.f_58FC;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_205(0))
			{
				return Global_40001.f_5D87;
			}
			break;
		
		case 238:
			if (func_205(0))
			{
				return Global_40001.f_5DF6;
			}
			break;
		
		case 249:
			if (func_205(0))
			{
				return Global_40001.f_5E06;
			}
			break;
		
		case 243:
			return Global_40001.f_66BC;
		
		case 158:
			if (func_205(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_205(bool bParam0)
{
	return func_6(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_206(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_2D, iParam0);
}

void func_207(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_136())
		{
			if (func_95(0))
			{
				if (!func_205(0))
				{
					if (unk_0x40B8C182D63932FC(func_11()))
					{
						if (func_220() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_220());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_218(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_211("GB_BCUT_TICK1", func_11(), iVar0, 0, 0, 1);
						}
						func_93(20);
						func_208(func_11(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_208(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_9(iParam0, 0, 1))
	{
		Var0 = 3000381556;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_210(iParam0);
		func_209(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(1, &Var0, 8, func_46(iParam0));
	}
}

void func_209(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_210(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

int func_211(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 4294967295;
	if (unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x6E524813889AECF8(iParam1), 64);
		}
		if (unk_0xEA6BC48857E0AC4C(&Var1))
		{
		}
		unk_0x1E64CE678ED5F61E(sParam0);
		unk_0x3A820E495A7BA3E5(func_63(iParam1, 4294967294, 1, 0, 0));
		unk_0xD06AC7C87A34A6AD(func_216(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		func_212(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_212(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_215() || !unk_0xA14BB9332558B949()) || !func_19(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_213(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = iParam0;
		Global_197EBE.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_197EBE.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_197EBE.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_197EBE.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_197EBE.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_197EBE.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
	}
}

int func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_197EBE - 1))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_214(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_197EBE++;
	if (Global_197EBE > 5)
	{
		Global_197EBE = 5;
		return Global_197EBE;
	}
	return (Global_197EBE - 1);
}

void func_214(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_215()
{
	return unk_0xC146D5FBD23C6954(2532323046);
}

var func_216(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_217(&cVar0);
}

var func_217(char[4] cParam0)
{
	return cParam0;
}

void func_218(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_219(1);
	}
	else
	{
		iVar1 = func_219(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_219(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_220()
{
	return Global_40001.f_3065;
}

void func_221(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_205(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_136())
		{
			iVar17 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar17 = func_11();
		}
		iVar11 = iVar17;
		if (iVar11 != 4294967295)
		{
			iVar0 = Global_184507[iVar11 /*876*/].f_356.f_1;
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_184507[iVar11 /*876*/].f_356.f_2;
			}
			else
			{
				iVar2 = func_237(Global_184507[iVar11 /*876*/].f_356, *uParam3);
			}
			if (uParam1->f_11)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_236(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0xD803B885F5E47A62())
				{
					func_235("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_198DAF.f_31 = *uParam3;
			if (iVar17 == unk_0xD803B885F5E47A62())
			{
				if (iVar2 > 0)
				{
					func_234(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_232(*uParam3);
				}
				iVar6 = func_231(&uVar5);
				iVar7 = Global_40001.f_5DA5;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_5DA4));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_93(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0x54EABC0DD106045B())
						{
							iVar22 = iVar21;
							if (unk_0x81A93C8315C28F58(iVar22))
							{
								iVar23 = unk_0x4B2BFE4A3BC248ED(iVar22);
								if (func_230(iVar23))
								{
									func_222(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_40001.f_5D89;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_5D8A;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19BCC3 = *iParam2;
					func_93(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_222(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_224(iParam0);
	func_223(iParam0, uVar0, iParam1, iParam2);
}

void func_223(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 3693313620;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_210(iParam0);
	func_209(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_10())
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			unk_0xFB061A86A7AC749F(1, &Var0, 8, func_46(iParam0));
		}
	}
}

int func_224(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_229();
	iVar0 = func_227(iParam0, iVar0);
	iVar1 = Global_18D84D[func_11() /*615*/].f_B.f_1C1;
	iVar0 = (iVar0 + (iVar1 * Global_40001.f_3A6B));
	if (iVar0 < func_226())
	{
		iVar0 = func_226();
	}
	if (iVar0 > func_225())
	{
		iVar0 = func_225();
	}
	return iVar0;
}

int func_225()
{
	return Global_40001.f_3A6C;
}

int func_226()
{
	return Global_40001.f_3F03;
}

int func_227(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_288(iParam0) * func_228());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_228()
{
	return Global_40001.f_3F02;
}

var func_229()
{
	return Global_40001.f_305D;
}

int func_230(int iParam0)
{
	if (unk_0x40B8C182D63932FC(iParam0))
	{
		if (iParam0 != unk_0xD803B885F5E47A62())
		{
			if (func_48(iParam0, unk_0xD803B885F5E47A62(), 0))
			{
				if (!func_36(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x40B8C182D63932FC(unk_0x117658E336116132(iVar0)))
		{
			iVar2 = unk_0x117658E336116132(iVar0);
			if (!func_19(iVar2, 0) && !func_48(iVar2, unk_0xD803B885F5E47A62(), 1))
			{
				iVar1++;
			}
			else if (func_19(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_232(int iParam0)
{
	func_233(iParam0, 7236);
}

void func_233(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_119(iParam1, 4294967295, 0);
	func_117(iParam1, (iVar0 + iParam0), 4294967295, 1, 0);
}

void func_234(int iParam0)
{
	func_233(iParam0, 7231);
}

int func_235(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 4294967295;
	unk_0x1E64CE678ED5F61E(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	func_212(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_236(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_5DA6);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_237(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_238(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_205(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_136())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != 4294967295)
		{
			iVar0 = (uParam1->f_F + uParam1->f_8);
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_132(uParam1->f_10, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_131(uParam1->f_10, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_240(*iParam2) > 0)
			{
				if (iVar15 == unk_0xD803B885F5E47A62())
				{
					func_235("SMTICK_RONCUT", func_240(*iParam2));
				}
				*iParam2 = (*iParam2 - func_240(*iParam2));
			}
			if (iVar15 == unk_0xD803B885F5E47A62())
			{
				func_239(iVar2, iVar9);
				iVar6 = func_231(&uVar5);
				iVar7 = Global_40001.f_5732;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_5731));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_93(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x54EABC0DD106045B())
						{
							iVar19 = iVar18;
							if (unk_0x81A93C8315C28F58(iVar19))
							{
								iVar20 = unk_0x4B2BFE4A3BC248ED(iVar19);
								if (func_230(iVar20))
								{
									func_222(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_40001.f_56EF;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_56F0;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19BCC3 = *iParam2;
					func_93(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_239(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_233(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_233(iParam1, 6117);
	}
}

int func_240(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_40001.f_5711);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_40001.f_5712))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_40001.f_5712);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_241(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_205(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_136())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != 4294967295)
		{
			iVar16 = func_135(iVar15);
			iVar0 = (func_266(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_A == uParam1->f_B)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_A);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_B);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_262(iVar15, iVar16, iVar1);
			if (uParam1->f_E == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_522B));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_40001.f_522A));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0xD803B885F5E47A62())
			{
				func_256(iVar16, iVar2);
				if (func_252(iVar16) >= Global_40001.f_5067 || iVar2 >= Global_40001.f_5067)
				{
					func_242(5);
				}
				iVar6 = func_231(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_40001.f_522D);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_40001.f_522C));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_93(108);
					}
					else
					{
						func_93(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0x54EABC0DD106045B())
						{
							iVar19 = iVar18;
							if (unk_0x81A93C8315C28F58(iVar19))
							{
								iVar20 = unk_0x4B2BFE4A3BC248ED(iVar19);
								if (func_230(iVar20))
								{
									func_222(iVar20, 1, 2389839094);
								}
							}
							iVar18++;
						}
					}
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_40001.f_522E;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_40001.f_522F;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_19BCC3 = *iParam2;
					func_93(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_40001.f_505B)
			{
				if (func_244(Global_40001.f_505C))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_40001.f_505D)
			{
				if (func_244(Global_40001.f_505E))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_40001.f_505F)
			{
				if (func_244(Global_40001.f_5060))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_40001.f_5061)
			{
				if (func_244(Global_40001.f_5062))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_40001.f_5063)
			{
				if (func_244(Global_40001.f_5064))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_40001.f_5065)
			{
				if (func_244(Global_40001.f_5066))
				{
					func_235("CLOTHAWDSTRAP3", Global_40001.f_5067);
				}
			}
			break;
		
		case 6:
			if (Global_40001.f_5068)
			{
				if (func_244(Global_40001.f_5069))
				{
					func_235("CLOTHAWDSTRAP5", Global_40001.f_50ED);
				}
			}
			break;
		
		case 7:
			if (Global_40001.f_506B)
			{
				if (func_244(Global_40001.f_506C))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_40001.f_506D)
			{
				if (func_244(Global_40001.f_506E))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_40001.f_506F)
			{
				if (func_244(Global_40001.f_5070))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_40001.f_5071)
			{
				if (func_244(Global_40001.f_5072))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_40001.f_5073)
			{
				if (func_244(Global_40001.f_5074))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_40001.f_5075)
			{
				if (func_244(Global_40001.f_5076))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_40001.f_5077)
			{
				if (func_244(Global_40001.f_5078))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_40001.f_5079)
			{
				if (func_244(Global_40001.f_507A))
				{
					func_243("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_243(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	unk_0x1E64CE678ED5F61E(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam3);
	}
	unk_0x6B012227B3921E18(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	}
	else
	{
		Global_265942 = { func_175(unk_0xD803B885F5E47A62()) };
		if (unk_0xD9DA83C40D038174(&Global_2658FC, 35, &Global_265942))
		{
			iVar1 = 0;
			if (unk_0x7F8A39872A07D2CE(&(Global_2658FC.f_16), "Leader") && Global_2658FC.f_1E == 0)
			{
				iVar1 = 1;
			}
			if (Global_2658FC.f_15 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x0D020422A92A2236(iVar2, unk_0x95A6C443DD6B08B2(&Global_2658FC, 35), &(Global_2658FC.f_11), Global_2658FC.f_1E, iVar1, 0, Global_2658FC, unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()), Global_140CF2, Global_140CF3, Global_140CF4);
		}
		else
		{
			iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		}
	}
	func_212(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case 3103481304:
		case 2559625089:
			if (!func_249(15417, 4294967295, 4294967295))
			{
				func_248(15417, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case 4174055868:
		case 2887664642:
		case 2255168310:
			if (!func_249(15418, 4294967295, 4294967295))
			{
				func_248(15418, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case 2935769924:
		case 4153970748:
		case 2444324359:
			if (!func_249(15425, 4294967295, 4294967295))
			{
				func_248(15425, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 3599602535:
		case 1263491585:
		case 2987652061:
		case 258618816:
			if (!func_249(15405, 4294967295, 4294967295))
			{
				func_248(15405, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case 3723642317:
		case 1374601256:
			if (!func_249(15393, 4294967295, 4294967295))
			{
				func_248(15393, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case 3634679186:
			if (!func_249(15409, 4294967295, 4294967295))
			{
				func_248(15409, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case 2492427392:
		case 3289780757:
		case 3868944767:
			if (!func_249(15396, 4294967295, 4294967295))
			{
				func_248(15396, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2196597796:
		case 3097998512:
		case 2980310317:
		case 3162445127:
			if (!func_249(15412, 4294967295, 4294967295))
			{
				func_248(15412, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3122223739:
		case 2792755277:
		case 1110085176:
		case 3405296186:
			if (!func_247(209, 4294967295))
			{
				func_245(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2411791819:
		case 3710352815:
		case 2557983445:
		case 4112352903:
			if (!func_249(15403, 4294967295, 4294967295))
			{
				func_248(15403, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case 3404257586:
		case 2797983601:
		case 48701978:
			if (!func_247(209, 4294967295))
			{
				func_245(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3424976530:
		case 3713826333:
		case 1827333048:
		case 3648114472:
			if (!func_249(15389, 4294967295, 4294967295))
			{
				func_248(15389, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3752338848:
		case 3424508832:
		case 420690954:
		case 3886574485:
			if (!func_247(209, 4294967295))
			{
				func_245(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_249(15398, 4294967295, 4294967295))
			{
				func_248(15398, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 2933869803:
		case 4221319652:
		case 3258386893:
		case 2529150874:
		case 2303587303:
		case 2563356175:
			if (!func_249(15400, 4294967295, 4294967295))
			{
				func_248(15400, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3127501824:
		case 3981548879:
		case 4091931946:
		case 2761646929:
		case 2065127290:
		case 3904886266:
			if (!func_247(209, 4294967295))
			{
				func_245(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2189358123:
		case 3596480360:
		case 917598912:
		case 939297301:
		case 4238563984:
		case 2926043467:
			if (!func_249(15408, 4294967295, 4294967295))
			{
				func_248(15408, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2430046428:
		case 3222061766:
		case 682284723:
		case 1186965403:
		case 4002266725:
		case 2226228703:
			if (!func_247(209, 4294967295))
			{
				func_245(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case 3646067695:
		case 3682843522:
			if (!func_249(15411, 4294967295, 4294967295))
			{
				func_248(15411, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case 3405772618:
		case 801334272:
			if (!func_249(15397, 4294967295, 4294967295))
			{
				func_248(15397, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case 4148261629:
			if (!func_249(15413, 4294967295, 4294967295))
			{
				func_248(15413, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case 2297277414:
		case 627387411:
		case 3447136105:
			if (!func_249(15391, 4294967295, 4294967295))
			{
				func_248(15391, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case 2731313194:
		case 1932815241:
		case 2677758273:
		case 308545041:
		case 1682427144:
			if (!func_249(15388, 4294967295, 4294967295))
			{
				func_248(15388, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case 3574885561:
		case 1626031863:
		case 2903012379:
		case 35480964:
		case 2029975158:
			if (!func_247(209, 4294967295))
			{
				func_245(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3170262904:
		case 3444874261:
		case 926585800:
		case 2461997424:
		case 1539395388:
		case 1377465778:
			if (!func_249(15401, 4294967295, 4294967295))
			{
				func_248(15401, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case 3972875916:
		case 2690230073:
		case 3458584499:
			if (!func_249(15394, 4294967295, 4294967295))
			{
				func_248(15394, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3760111810:
		case 3126392231:
		case 2927838092:
		case 3288939386:
			if (!func_247(209, 4294967295))
			{
				func_245(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3778634034:
		case 756873456:
		case 87453937:
		case 2856191972:
			if (!func_249(15406, 4294967295, 4294967295))
			{
				func_248(15406, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case 3564929588:
		case 2608307573:
		case 3200692489:
			if (!func_249(15395, 4294967295, 4294967295))
			{
				func_248(15395, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case 3324508810:
		case 1992217604:
		case 2946241204:
			if (!func_247(209, 4294967295))
			{
				func_245(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2804308795:
		case 975601953:
		case 2360410088:
		case 1786218600:
			if (!func_249(15410, 4294967295, 4294967295))
			{
				func_248(15410, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2559332058:
		case 1614208560:
		case 3260934977:
		case 2436945402:
			if (!func_249(15407, 4294967295, 4294967295))
			{
				func_248(15407, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case 3568934735:
		case 1747334867:
		case 1237632771:
			if (!func_247(209, 4294967295))
			{
				func_245(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2363349808:
		case 2469980134:
		case 236389050:
		case 1987485798:
			if (!func_247(209, 4294967295))
			{
				func_245(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2568634995:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_249(15414, 4294967295, 4294967295))
			{
				func_248(15414, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2912044766:
		case 734151492:
		case 3937330446:
		case 3272973588:
			if (!func_249(15415, 4294967295, 4294967295))
			{
				func_248(15415, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case 2528104976:
		case 479676642:
		case 2640138660:
			if (!func_249(15399, 4294967295, 4294967295))
			{
				func_248(15399, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2518176946:
		case 579562906:
		case 242920617:
		case 2929259547:
			if (!func_249(15404, 4294967295, 4294967295))
			{
				func_248(15404, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2306910001:
		case 3675212365:
		case 3075243594:
		case 3906758817:
			if (!func_247(209, 4294967295))
			{
				func_245(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case 2717995956:
		case 2087194554:
			if (!func_249(15392, 4294967295, 4294967295))
			{
				func_248(15392, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case 2889930927:
		case 3672065391:
		case 981732339:
			if (!func_249(15390, 4294967295, 4294967295))
			{
				func_248(15390, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case 3313834683:
		case 1271443068:
			if (!func_249(15402, 4294967295, 4294967295))
			{
				func_248(15402, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 4002044941:
		case 4260428506:
		case 2385980452:
		case 2509849112:
			if (!func_249(15416, 4294967295, 4294967295))
			{
				func_248(15416, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2799534611:
		case 1898518287:
		case 2029126042:
		case 2773934483:
			if (!func_247(209, 4294967295))
			{
				func_245(209, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 2171481858:
		case 1457900554:
		case 4280650683:
		case 619771057:
			if (!func_249(15426, 4294967295, 4294967295))
			{
				func_248(15426, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3479260505:
		case 3228839791:
		case 1281631799:
		case 2775938488:
			if (!func_249(15422, 4294967295, 4294967295))
			{
				func_248(15422, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2976164949:
		case 2928217253:
		case 447234752:
		case 1996626130:
			if (!func_249(15423, 4294967295, 4294967295))
			{
				func_248(15423, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case 2313207439:
			if (!func_249(15421, 4294967295, 4294967295))
			{
				func_248(15421, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case 2655677837:
		case 3732359775:
		case 3415687675:
			if (!func_249(15427, 4294967295, 4294967295))
			{
				func_248(15427, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3375652548:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_249(15419, 4294967295, 4294967295))
			{
				func_248(15419, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case 3410686596:
		case 4208984884:
		case 1573086793:
			if (!func_249(15420, 4294967295, 4294967295))
			{
				func_248(15420, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_245(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_246())
	{
		iVar0 = Global_276C68[iParam0 /*3*/][func_120(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

int func_246()
{
	return 1;
	return 0;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_276C68[iParam0 /*3*/][func_120(iParam1)];
	if (unk_0x89484FAA0691E684(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_248(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_21();
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

int func_249(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_21();
	}
	iVar1 = func_251(iParam0, iParam1);
	uVar2 = func_250(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_250(int iParam0)
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

int func_251(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_21();
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

int func_252(int iParam0)
{
	int iVar0;
	
	iVar0 = func_254(iParam0);
	return func_119(func_253(iVar0), 4294967295, 0);
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (func_255(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_255(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_256(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_254(iParam0);
	iVar1 = func_253(iVar0);
	iVar2 = (func_119(iVar1, 4294967295, 0) + iParam1);
	func_117(iVar1, iVar2, 4294967295, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_259(9357, 4294967295, 4294967295) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iVar0 /*12*/] != 0)
			{
				iVar1 = func_253(iVar0);
				iVar3 = (iVar3 + func_119(iVar1, 4294967295, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_258(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_257(9357, iVar5, 4294967295, 1);
	}
}

var func_257(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_21();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xB8E1F940D68B4FA6(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_259(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_21();
	}
	iVar0 = 0;
	iVar1 = func_261(iParam0, iParam1);
	iVar2 = func_260(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_260(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x6D63D77257071BC5((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x6D63D77257071BC5((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x6D63D77257071BC5((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x6D63D77257071BC5((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x6D63D77257071BC5((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x6D63D77257071BC5((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x6D63D77257071BC5((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x6D63D77257071BC5((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x6D63D77257071BC5((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x6D63D77257071BC5((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x6D63D77257071BC5((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x6D63D77257071BC5((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x6D63D77257071BC5((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x6D63D77257071BC5((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x6D63D77257071BC5((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x6D63D77257071BC5((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x6D63D77257071BC5((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x6D63D77257071BC5((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x6D63D77257071BC5((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x6D63D77257071BC5((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x6D63D77257071BC5((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0x6D63D77257071BC5((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0x6D63D77257071BC5((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_261(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_21();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xB4FA9864F9CE66E4((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xF92652620E6134B6((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0xE1DF46BF5E90E528((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_262(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_148(iParam1);
	if (func_255(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_40001.f_4240;
				if (func_263(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4245);
				}
				if (func_263(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_424A);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_40001.f_423F;
				if (func_263(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4244);
				}
				if (func_263(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4249);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_40001.f_423E;
				if (func_263(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4243);
				}
				if (func_263(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4248);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_40001.f_423C;
				if (func_263(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4241);
				}
				if (func_263(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4246);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_40001.f_423D;
				if (func_263(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4242);
				}
				if (func_263(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4247);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_40001.f_5244;
				if (func_263(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_5246);
				}
				if (func_263(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_5245);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_263(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_265(iParam0, iParam1))
	{
		iVar0 = func_264(iParam0, iParam1);
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_264(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_255(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_265(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_255(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_266(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_255(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_267(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_A > 0)
		{
			if (func_122())
			{
				Var0 = { func_150() };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar1 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_F + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = SYSTEM::CEIL(fVar5);
				}
				iVar6 = func_262(unk_0xD803B885F5E47A62(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_48A3);
					iVar6 = SYSTEM::ROUND(fVar7);
				}
				else
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar6) * Global_40001.f_48A2);
					iVar6 = SYSTEM::ROUND(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_231(&uVar9);
				iVar11 = SYSTEM::ROUND(Global_40001.f_4899);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = SYSTEM::CEIL((IntToFloat(iVar10) * Global_40001.f_4898));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_C == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_93(86);
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (func_205(0))
			{
				Var14 = { func_268(func_11()) };
				if (uParam1->f_A == uParam1->f_B)
				{
					*uParam3 = (uParam1->f_F + uParam1->f_8);
				}
				else
				{
					fVar15 = SYSTEM::TO_FLOAT(uParam1->f_A);
					fVar16 = SYSTEM::TO_FLOAT(uParam1->f_B);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_F + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = SYSTEM::CEIL(fVar19);
				}
				iVar20 = func_262(func_11(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_48A3));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = SYSTEM::CEIL((IntToFloat(iVar20) * Global_40001.f_48A2));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_40001.f_48CA;
				iVar22 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_40001.f_48CB;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_C == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_268(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_C1;
}

void func_269(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_29(unk_0xD803B885F5E47A62()))
		{
			if (bParam1)
			{
				func_284();
			}
			func_283();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_29(unk_0xD803B885F5E47A62()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_275(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B6));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_274(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_231(&uVar2);
					iVar4 = Global_40001.f_3F0D;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_40001.f_3BF6));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_93(44);
					}
				}
				func_272(*iParam3);
				func_271();
				Global_26B66F.f_1404.f_17D = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x54EABC0DD106045B())
				{
					iVar8 = iVar7;
					if (unk_0x81A93C8315C28F58(iVar8))
					{
						iVar9 = unk_0x4B2BFE4A3BC248ED(iVar8);
						if (func_230(iVar9))
						{
							func_222(iVar9, 1, 3002513507);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_29(unk_0xD803B885F5E47A62()))
		{
			func_270();
		}
	}
}

void func_270()
{
	int iVar0;
	
	iVar0 = Global_27768F[func_21()];
	iVar0++;
	func_116(3667, iVar0, 4294967295, 1);
}

void func_271()
{
	int iVar0;
	
	iVar0 = Global_277695[func_21()];
	iVar0++;
	func_116(3666, iVar0, 4294967295, 1);
}

void func_272(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_277698[func_21()];
	iVar0 = (iVar0 + iParam0);
	func_116(3668, iVar0, 4294967295, 1);
	if (func_259(7666, 4294967295, 4294967295) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_273(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_257(7666, iVar2, 4294967295, 1);
	}
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_3F92;
			break;
		
		case 2:
			return Global_40001.f_3F93;
			break;
		
		case 3:
			return Global_40001.f_3F94;
			break;
		
		case 4:
			return Global_40001.f_3F95;
			break;
		
		case 5:
			return Global_40001.f_3F96;
			break;
		
		case 6:
			return Global_40001.f_3F97;
			break;
		
		case 7:
			return Global_40001.f_3F98;
			break;
		
		case 8:
			return Global_40001.f_3F99;
			break;
		
		case 9:
			return Global_40001.f_3F9A;
			break;
		
		case 10:
			return Global_40001.f_3F9B;
			break;
		
		case 11:
			return Global_40001.f_3F9C;
			break;
		
		case 12:
			return Global_40001.f_3F9D;
			break;
		
		case 13:
			return Global_40001.f_3F9E;
			break;
		
		case 14:
			return Global_40001.f_3F9F;
			break;
		
		case 15:
			return Global_40001.f_3FA0;
			break;
		
		case 16:
			return Global_40001.f_3FA1;
			break;
		
		case 17:
			return Global_40001.f_3FA2;
			break;
		
		case 18:
			return Global_40001.f_3FA3;
			break;
		
		case 19:
			return Global_40001.f_3FA4;
			break;
		
		case 20:
			return Global_40001.f_3FA5;
			break;
		
		case 21:
			return Global_40001.f_3FA6;
			break;
		
		case 22:
			return Global_40001.f_3FA7;
			break;
		
		case 23:
			return Global_40001.f_3FA8;
			break;
		
		case 24:
			return Global_40001.f_3FA9;
			break;
	}
	return 0;
}

var func_274(int iParam0)
{
	if (iParam0 >= Global_40001.f_3BE0)
	{
		return Global_40001.f_3BF5;
	}
	else if (iParam0 >= Global_40001.f_3BDF)
	{
		return Global_40001.f_3BF4;
	}
	else if (iParam0 >= Global_40001.f_3BDE)
	{
		return Global_40001.f_3BF3;
	}
	else if (iParam0 >= Global_40001.f_3BDD)
	{
		return Global_40001.f_3BF2;
	}
	else if (iParam0 >= Global_40001.f_3BDC)
	{
		return Global_40001.f_3BF1;
	}
	else if (iParam0 >= Global_40001.f_3BDB)
	{
		return Global_40001.f_3BF0;
	}
	else if (iParam0 >= Global_40001.f_3BDA)
	{
		return Global_40001.f_3BEF;
	}
	else if (iParam0 >= Global_40001.f_3BD9)
	{
		return Global_40001.f_3BEE;
	}
	else if (iParam0 >= Global_40001.f_3BD8)
	{
		return Global_40001.f_3BED;
	}
	else if (iParam0 >= Global_40001.f_3BD7)
	{
		return Global_40001.f_3BEC;
	}
	else if (iParam0 >= Global_40001.f_3BD6)
	{
		return Global_40001.f_3BEB;
	}
	else if (iParam0 >= Global_40001.f_3BD5)
	{
		return Global_40001.f_3BEA;
	}
	else if (iParam0 >= Global_40001.f_3BD4)
	{
		return Global_40001.f_3BE9;
	}
	else if (iParam0 >= Global_40001.f_3BD3)
	{
		return Global_40001.f_3BE8;
	}
	else if (iParam0 >= Global_40001.f_3BD2)
	{
		return Global_40001.f_3BE7;
	}
	else if (iParam0 >= Global_40001.f_3BD1)
	{
		return Global_40001.f_3BE6;
	}
	else if (iParam0 >= Global_40001.f_3BD0)
	{
		return Global_40001.f_3BE5;
	}
	else if (iParam0 >= Global_40001.f_3BCF)
	{
		return Global_40001.f_3BE4;
	}
	else if (iParam0 >= Global_40001.f_3BCE)
	{
		return Global_40001.f_3BE3;
	}
	else if (iParam0 >= Global_40001.f_3BCD)
	{
		return Global_40001.f_3BE2;
	}
	return Global_40001.f_3BE1;
}

int func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_282(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_281(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_280(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_276(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_276(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_280(unk_0x09AC81E49EA267F7(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_276(int iParam0)
{
	int iVar0;
	
	if (func_279(iParam0))
	{
		iVar0 = func_277(func_278(iParam0));
		return func_119(iVar0, 4294967295, 0);
	}
	return 0;
}

int func_277(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_278(int iParam0)
{
	int iVar0;
	
	if (func_279(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_6A[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_279(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_280(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_40001.f_3CA8;
	}
	else if (iParam0 == 2)
	{
		return Global_40001.f_3CA6;
	}
	else if (iParam0 == 3)
	{
		return Global_40001.f_3CAA;
	}
	else if (iParam0 == 4)
	{
		return Global_40001.f_3CA4;
	}
	else if (iParam0 == 5)
	{
		return Global_40001.f_3CA2;
	}
	else if (iParam0 == 6)
	{
		return Global_40001.f_3CAC;
	}
	return 0;
}

int func_281(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_279(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_199337[iVar0] == iParam1 && Global_19933E[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_282(int iParam0)
{
	int iVar0;
	
	if (func_279(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_6A[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_283()
{
	int iVar0;
	
	iVar0 = Global_27768C[func_21()];
	iVar0++;
	Global_27768C[func_21()] = iVar0;
	func_116(3665, iVar0, 4294967295, 1);
}

void func_284()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_277689[func_21()];
	iVar1 = Global_277692[func_21()];
	iVar0++;
	iVar1++;
	Global_277689[func_21()] = iVar0;
	Global_277692[func_21()] = iVar1;
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_80 = iVar1;
	func_116(3663, iVar0, 4294967295, 1);
	func_116(3664, iVar1, 4294967295, 1);
}

void func_285()
{
	if (func_136())
	{
		Global_2567E2.f_C02.f_86 = 0;
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
	}
}

void func_286()
{
	if (func_136())
	{
		if (Global_2567E2.f_C02.f_86 < 10)
		{
			Global_2567E2.f_C02.f_86++;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
		}
	}
}

void func_287()
{
	if (func_136())
	{
		if (Global_2567E2.f_C02.f_86 > 0)
		{
			Global_2567E2.f_C02.f_86 = (Global_2567E2.f_C02.f_86 - 1);
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
		}
	}
}

int func_288(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_1C;
}

int func_289(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_95(1) && !func_205(1))
			{
				if (func_290(func_11()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_290(int iParam0)
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 26);
}

int func_291(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_40001.f_4769;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30DA) * Global_40001.f_30DF));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30A8) * Global_40001.f_30AD));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30C3) * Global_40001.f_30C7));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30D0) * Global_40001.f_30D4));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30E6) * Global_40001.f_30EB));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3188) * Global_40001.f_3189));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_318E) * Global_40001.f_318F));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_318C) * Global_40001.f_318D));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3186) * Global_40001.f_3187));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_318A) * Global_40001.f_318B));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3184) * Global_40001.f_3185));
		
		case 170:
			return 0;
		
		case 171:
			return Global_40001.f_3ACB;
		
		case 172:
			return Global_40001.f_3ADB;
		
		case 173:
			return Global_40001.f_3AA2;
		
		case 166:
			return 0;
		
		case 179:
			return Global_40001.f_4771;
		
		case 180:
			return Global_40001.f_46F4;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_46FC;
		
		case 185:
			return Global_40001.f_4705;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_47C9;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_47DA;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_4741;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_47F9;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_477F;
		
		case 205:
			return Global_40001.f_47EC;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_475E;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_47E7;
		
		case 211:
			return Global_40001.f_47C3;
		
		case 214:
			return Global_40001.f_4A15;
		
		case 215:
			return Global_40001.f_4A1F;
		
		case 216:
			return Global_40001.f_4A29;
		
		case 217:
			return Global_40001.f_4A32;
		
		case 218:
			return Global_40001.f_4A3B;
		
		case 219:
			return Global_40001.f_4A4B;
		
		case 241:
			return Global_40001.f_5E1A;
		
		case 242:
			return Global_40001.f_5E16;
		
		case 248:
			return Global_40001.f_5E19;
		
		case 244:
			return Global_40001.f_5E17;
		
		case 239:
			return Global_40001.f_5E1B;
		
		case 240:
			return Global_40001.f_5E1C;
		
		case 243:
			return Global_40001.f_66BB;
		
		default:
	}
	return 0;
}

int func_292(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_40001.f_476A;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30DB) * Global_40001.f_30E0));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30A9) * Global_40001.f_30AE));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30C4) * Global_40001.f_30C8));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30D1) * Global_40001.f_30D5));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30E7) * Global_40001.f_30EC));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_310C) * Global_40001.f_310F));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_313A) * Global_40001.f_313D));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3130) * Global_40001.f_3133));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3103) * Global_40001.f_3106));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_3117) * Global_40001.f_311C));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_40001.f_30F4) * Global_40001.f_30F7));
		
		case 170:
			return Global_40001.f_3A91;
		
		case 171:
			return Global_40001.f_3ACC;
		
		case 172:
			return Global_40001.f_3ADC;
		
		case 173:
			return Global_40001.f_3AA3;
		
		case 166:
			return 0;
		
		case 167:
			return Global_40001.f_42C2;
		
		case 168:
			return Global_40001.f_42C1;
		
		case 179:
			return Global_40001.f_4772;
		
		case 180:
			return Global_40001.f_46F5;
		
		case 182:
			return 0;
		
		case 183:
			return Global_40001.f_46FD;
		
		case 185:
			return Global_40001.f_4706;
		
		case 186:
			return 0;
		
		case 189:
			return Global_40001.f_47CA;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_40001.f_47DB;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_40001.f_4742;
		
		case 198:
			return 0;
		
		case 199:
			return Global_40001.f_47FA;
		
		case 200:
			return 0;
		
		case 201:
			return Global_40001.f_4780;
		
		case 205:
			return Global_40001.f_47ED;
		
		case 207:
			return 0;
		
		case 208:
			return Global_40001.f_475F;
		
		case 209:
			return 0;
		
		case 210:
			return Global_40001.f_47E8;
		
		case 211:
			return Global_40001.f_47C4;
		
		case 214:
			return Global_40001.f_4A16;
		
		case 215:
			return Global_40001.f_4A20;
		
		case 216:
			return Global_40001.f_4A2A;
		
		case 217:
			return Global_40001.f_4A33;
		
		case 218:
			return Global_40001.f_4A3C;
		
		case 219:
			return Global_40001.f_4A4C;
		
		case 178:
			if (func_136())
			{
				return Global_40001.f_499B;
			}
			else if (bParam1)
			{
				return Global_40001.f_499C;
			}
			break;
		
		case 188:
			if (func_136())
			{
				return Global_40001.f_49EF;
			}
			else if (bParam1)
			{
				return Global_40001.f_49F0;
			}
			break;
		
		case 225:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5238;
				}
				else
				{
					return Global_40001.f_5239;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_523A;
			}
			break;
		
		case 226:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5224;
				}
				else
				{
					return Global_40001.f_5225;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_5226;
			}
			break;
		
		case 227:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5230;
				}
				else
				{
					return Global_40001.f_5231;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_5232;
			}
			break;
		
		case 229:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_56BC;
				}
				else
				{
					return Global_40001.f_56BD;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_56BE;
			}
			break;
		
		case 230:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_571C;
				}
				else
				{
					return Global_40001.f_571D;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_571E;
			}
			break;
		
		case 233:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_58F8;
				}
				else
				{
					return Global_40001.f_58F9;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_58F7;
			}
			break;
		
		case 241:
			return Global_40001.f_5E21;
		
		case 242:
			return Global_40001.f_5E1D;
		
		case 244:
			return Global_40001.f_5E1E;
		
		case 248:
			return Global_40001.f_5E20;
		
		case 239:
			return Global_40001.f_5E22;
		
		case 240:
			return Global_40001.f_5E23;
		
		case 237:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5D83;
				}
				else
				{
					return Global_40001.f_5D84;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_5D85;
			}
			break;
		
		case 238:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5DF2;
				}
				else
				{
					return Global_40001.f_5DF3;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_5DF4;
			}
			break;
		
		case 249:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5E02;
				}
				else
				{
					return Global_40001.f_5E03;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_5E04;
			}
			break;
		
		case 243:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_66BE;
				}
				else
				{
					return Global_40001.f_66BF;
				}
			}
			else if (func_122())
			{
				return Global_40001.f_66BE;
			}
			break;
		
		case 158:
			if (func_136() && !func_122())
			{
				if (func_290(unk_0xD803B885F5E47A62()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_122())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_293(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_294(iParam0))
	{
		if (!func_136())
		{
			*uParam1 = 1f;
			*uParam2 = Global_40001.f_3070;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_28(unk_0xD803B885F5E47A62(), 1))
	{
		if (func_92(iParam0))
		{
			*uParam1 = (Global_40001.f_46DD / 100f);
			*uParam2 = (Global_40001.f_46DD / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_40001.f_5E24;
			*uParam2 = Global_40001.f_5E24;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_40001.f_5E25;
			*uParam2 = Global_40001.f_5E25;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_40001.f_5E27;
			*uParam2 = Global_40001.f_5E27;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_40001.f_5E28;
			*uParam2 = Global_40001.f_5E28;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_40001.f_5E29;
			*uParam2 = Global_40001.f_5E29;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_40001.f_5E2A;
			*uParam2 = Global_40001.f_5E2A;
		}
		else
		{
			*uParam1 = Global_40001.f_306D;
			*uParam2 = Global_40001.f_306C;
		}
	}
	else if (func_92(iParam0))
	{
		*uParam1 = (Global_40001.f_46DE / 100f);
		*uParam2 = (Global_40001.f_46DE / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_40001.f_5E2B;
		*uParam2 = Global_40001.f_5E2B;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_40001.f_5E2C;
		*uParam2 = Global_40001.f_5E2C;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_40001.f_5E2E;
		*uParam2 = Global_40001.f_5E2E;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_40001.f_5E2F;
		*uParam2 = Global_40001.f_5E2F;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_40001.f_5E30;
		*uParam2 = Global_40001.f_5E30;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_40001.f_5E31;
		*uParam2 = Global_40001.f_5E31;
	}
	else
	{
		*uParam1 = Global_40001.f_306F;
		*uParam2 = Global_40001.f_306E;
	}
	iVar0 = func_60();
	if (iVar0 != func_10())
	{
		if (func_48(unk_0xD803B885F5E47A62(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

int func_295()
{
	if ((func_36(unk_0xD803B885F5E47A62(), 21) || func_36(unk_0xD803B885F5E47A62(), 22)) || func_300())
	{
		return 1;
	}
	if (func_297())
	{
		func_296(22);
		return 1;
	}
	return 0;
}

void func_296(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

int func_297()
{
	if (func_33(unk_0xD803B885F5E47A62(), 0))
	{
		if (((func_26() && !func_299()) || func_22(unk_0xD803B885F5E47A62(), 21)) || func_22(unk_0xD803B885F5E47A62(), 25))
		{
			return 1;
		}
		else
		{
			func_298(27);
		}
	}
	return 0;
}

void func_298(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

bool func_299()
{
	return Global_1406A2.f_1;
}

bool func_300()
{
	return func_247(358, 4294967295);
}

int func_301()
{
	return 0;
}

void func_302()
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	
	if (func_344())
	{
		return;
	}
	if (func_343())
	{
		func_336();
	}
	if (func_335())
	{
		func_334();
	}
	sVar0 = "GB_WORK_OVER";
	sVar1 = "GB_WORK_OVER";
	if (func_6(unk_0xD803B885F5E47A62(), 1))
	{
		sVar0 = "BK_RUN_OVER";
	}
	if ((!unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 2) && !unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 4)) && !unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 3))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 7))
		{
			sVar1 = "GBTER_B_SSH";
			if (Local_82.f_A)
			{
				sVar1 = "GBTER_B_SSH_A";
			}
			if (Local_82.f_A)
			{
				func_326(101, sVar0, sVar1, func_328(), func_327(unk_0xD803B885F5E47A62()), func_37(), func_10(), func_10(), 0, 4294967295, 4294967295, 4294967295, 2, 4294967295, 2);
			}
			else
			{
				func_325(87, func_37(), 4294967295, sVar1, sVar0, 1, 4294967295, 2, 0);
			}
		}
		else if (func_324() != unk_0xD803B885F5E47A62())
		{
			sVar1 = "GBTER_BIG_COMS";
			if (func_6(unk_0xD803B885F5E47A62(), 1))
			{
				sVar1 = "GBTER_B_SSO";
				if (Local_82.f_A)
				{
					sVar1 = "GBTER_B_SSO_A";
				}
			}
			if (Local_82.f_A)
			{
				func_326(101, sVar0, sVar1, func_328(), func_327(unk_0xD803B885F5E47A62()), func_324(), func_37(), func_10(), 0, 4294967295, 4294967295, 4294967295, 2, 4294967295, 2);
			}
			else
			{
				func_323(91, func_324(), func_37(), 4294967295, sVar1, sVar0, 1, 4294967295, 2, 0, 0, 0);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG_WINS";
			if (func_6(unk_0xD803B885F5E47A62(), 1))
			{
				sVar1 = "GBTER_B_SSW";
				if (Local_82.f_A)
				{
					sVar1 = "GBTER_B_SSW_A";
				}
			}
			if (Local_82.f_A)
			{
				func_326(101, "GB_WINNER", sVar1, func_328(), func_327(unk_0xD803B885F5E47A62()), func_37(), func_10(), func_10(), 0, 4294967295, 4294967295, 4294967295, 2, 4294967295, 2);
			}
			else
			{
				func_325(87, func_37(), 4294967295, sVar1, "GB_WINNER", 1, 4294967295, 2, 0);
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 3))
	{
	}
	else
	{
		sVar1 = "GBTER_BIG_FLEE";
		if (func_6(unk_0xD803B885F5E47A62(), 1))
		{
			sVar1 = "GBTER_B_BFLEE";
		}
		func_304(88, sVar0, sVar1, 1, 4294967295, 2, 1, 0);
		if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 4) || func_31(func_37(), 1, 0))
		{
			if (unk_0xD803B885F5E47A62() == func_60())
			{
				Var2.f_A = func_60();
				Var2.f_2 = 3819606016;
				func_303(Var2, func_46(func_37()));
			}
		}
	}
}

void func_303(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 1975453628;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Param0, 14, iParam13);
	}
}

int func_304(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_322(iParam0, &Var0, 4294967295, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	if (iParam7 != 0)
	{
		func_320(&(Var0.f_45), iParam7);
	}
	return func_305(&Var0);
}

int func_305(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2537E2.f_BE5)
		{
			return 0;
		}
	}
	func_319(uParam0, uParam0->f_11);
	func_316(uParam0);
	if (func_84())
	{
		func_316(uParam0);
	}
	if (func_315(uParam0->f_1))
	{
		func_308();
		if (Global_2537E2.f_AA3[0 /*80*/].f_2 == 0)
		{
			Global_2537E2.f_AA3[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2537E2.f_AA3[0 /*80*/].f_1 == 13 || Global_2537E2.f_AA3[0 /*80*/].f_1 == 53) || Global_2537E2.f_AA3[0 /*80*/].f_1 == 54) || Global_2537E2.f_AA3[0 /*80*/].f_1 == 58)
		{
			Global_2537E2.f_AA3[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2537E2.f_AA3[iVar0 + 1 /*80*/] = { Global_2537E2.f_AA3[iVar0 /*80*/] };
			iVar0 = (iVar0 + 4294967295);
		}
		Global_2537E2.f_AA3[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 == 0)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_308();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_320(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 2);
				Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_307(uParam0->f_45, 128))
			{
				if (func_306(Global_2537E2.f_AA3[iVar0 /*80*/].f_1))
				{
					Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
					func_320(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_306(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_307(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_308()
{
	bool bVar0;
	
	if (Global_2537E2.f_BE6)
	{
		return;
	}
	if (!Global_12C5A)
	{
		Global_12C5A = 1;
		bVar0 = true;
	}
	func_309();
	if (bVar0)
	{
		Global_12C5A = 0;
	}
}

void func_309()
{
	Global_2537E2.f_BE7 = 0;
	Global_2537E2.f_BE7.f_242 = 0;
	func_313(&(Global_2537E2.f_BE7.f_1));
	Global_2537E2.f_BE7.f_1.f_1 = 0;
	func_310(&(Global_2537E2.f_BE7.f_1));
}

void func_310(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0)
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x1200CC973A2399C8(false);
			unk_0x7E60D21B163E9D56();
		}
		unk_0xE17FDF9E3068281B(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_234)
	{
		unk_0x31A33F7BCB08CB80(false);
		uParam0->f_234 = 0;
	}
	if (!Global_12C5A)
	{
		if (!unk_0x131F22FE6F47A65D(unk_0xA30EC016B12C03E4()))
		{
			if (!Global_12C5B)
			{
				if (unk_0x757EF87A33649210() && !func_312(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_311(0);
}

void func_311(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_312(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0);
}

void func_313(var uParam0)
{
	func_314(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_314(var uParam0)
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0;
	uParam0->f_233 = 0;
	uParam0->f_23C = 0;
	uParam0->f_234 = 0;
	uParam0->f_235 = 0;
	uParam0->f_236 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_23E = 0;
	uParam0->f_23F = 0;
	uParam0->f_23D = 1f;
}

int func_315(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_316(var uParam0)
{
	if (func_318(uParam0->f_1))
	{
		uParam0->f_48 = func_317();
	}
}

int func_317()
{
	return 21;
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_319(var uParam0, int iParam1)
{
	if (func_318(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_10() || !func_9(iParam1, 0, 1))
	{
		return;
	}
	if (func_306(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_63(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

void func_320(var uParam0, int iParam1)
{
	func_321(uParam0, iParam1);
}

void func_321(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_322(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_11 = func_10();
	uParam1->f_12 = func_10();
	uParam1->f_13 = func_10();
	uParam1->f_14 = func_10();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_47 = 1;
	uParam1->f_4A = 1;
	uParam1->f_4B = 1;
	uParam1->f_4C = 0;
	uParam1->f_4D = 0;
	uParam1->f_49 = 0;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

int func_323(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_322(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_11 = iParam1;
	Var0.f_12 = iParam2;
	Var0.f_47 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_48 = iParam8;
	StringCopy(&(Var0.f_19), sParam9, 64);
	StringCopy(&(Var0.f_29), sParam10, 64);
	StringCopy(&(Var0.f_39), sParam11, 16);
	return func_305(&Var0);
}

int func_324()
{
	return Local_82.f_3;
}

int func_325(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_322(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_11 = iParam1;
	Var0.f_47 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_48 = iParam7;
	if (iParam8 != 0)
	{
		func_320(&(Var0.f_45), iParam8);
	}
	return func_305(&Var0);
}

int func_326(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 3212836864;
	Var0.f_10 = 1;
	Var0.f_47 = 1;
	Var0.f_48 = 2;
	Var0.f_4F = 4294967295;
	func_322(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = uParam4;
	Var0.f_47 = uParam4;
	Var0.f_6 = iParam13;
	Var0.f_48 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_47 = iParam14;
	}
	func_320(&(Var0.f_45), 4);
	return func_305(&Var0);
}

int func_327(int iParam0)
{
	int iVar0;
	
	iVar0 = func_81(iParam0);
	if (iVar0 != 4294967295)
	{
		return func_79(iVar0);
	}
	return 1;
}

char* func_328()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_27(unk_0xD803B885F5E47A62());
	if (iVar0 != func_10())
	{
		if (iVar0 != unk_0xD803B885F5E47A62())
		{
			if (((func_36(iVar0, 28) || func_36(unk_0xD803B885F5E47A62(), 28)) || func_333(iVar0)) && !func_332(iVar0))
			{
				return func_330(iVar0, 0);
			}
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0, 4294967295, 1))
			{
				return func_330(iVar0, 0);
			}
		}
		sVar1 = func_329(&(Global_18D84D[iVar0 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar1))
		{
			return func_330(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_329(var uParam0)
{
	return uParam0;
}

char* func_330(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_6(iParam0, 1))
		{
			return func_331();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_331()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

int func_332(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_175(iParam0) };
	if (unk_0xDC30EF462887322E())
	{
		if (unk_0x4DEB7B48DD0AABA4(0))
		{
			if (unk_0x5B9BB2932920F9CD(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_333(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_10())
	{
		Var0 = { func_175(iParam0) };
		if (unk_0x33A494591F2C1975() || unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0x4DEB7B48DD0AABA4(0))
			{
				return 0;
			}
		}
		else if (unk_0xDC30EF462887322E())
		{
			if (unk_0x4DEB7B48DD0AABA4(0))
			{
				if (unk_0x5B9BB2932920F9CD(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_334()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 != 0)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
			func_320(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 1);
		}
		iVar0++;
	}
}

bool func_335()
{
	return Global_2537E2.f_AA3[0 /*80*/].f_1 != 0;
}

void func_336()
{
	if (!func_342())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_337();
}

void func_337()
{
	func_339();
	func_338(0);
}

void func_338(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x8CD06866876216F2();
	Global_140749 = 20;
	StringCopy(&(Global_140749.f_1), "", 32);
	Global_140749.f_9 = 0;
	if (bVar0)
	{
		Global_140749.f_A = unk_0x2B6E0A53779D29EA();
		Global_140749.f_B = unk_0x2B6E0A53779D29EA();
	}
	StringCopy(&(Global_140749.f_C), "", 16);
	StringCopy(&(Global_140749.f_10), "", 64);
	StringCopy(&(Global_140749.f_20), "", 64);
	Global_140749.f_34 = 0;
	Global_140749.f_35 = 0;
	Global_140749.f_36 = 0;
	Global_140749.f_37 = 4294967295;
	Global_140749.f_38 = 0;
	Global_140749.f_3B = 0;
	if (bParam0)
	{
		return;
	}
}

void func_339()
{
	if (!func_341())
	{
	}
	if (func_342())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_340();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_340()
{
	switch (Global_140749)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			return;
		
		case 2:
			unk_0x6D99DF8263D35CE5(Global_140749.f_34);
			unk_0x6D99DF8263D35CE5(Global_140749.f_35);
			return;
		
		case 3:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 4:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 5:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 6:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 7:
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 8:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 9:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 10:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		case 12:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 13:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 11:
			unk_0x0D45A7AB73600CFA(&(Global_140749.f_10));
			return;
		
		case 14:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 15:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_39);
			unk_0x6B012227B3921E18(&(Global_140749.f_20));
			return;
		
		case 17:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			return;
		
		case 16:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			return;
		
		case 19:
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_10));
			return;
		
		case 18:
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_10));
			unk_0x3A820E495A7BA3E5(Global_140749.f_38);
			unk_0x6B012227B3921E18(&(Global_140749.f_30));
			unk_0xD06AC7C87A34A6AD(&(Global_140749.f_20));
			return;
		
		default:
	}
}

int func_341()
{
	if (!func_342())
	{
		return 0;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_340();
	return unk_0xB165082A56EE6E7F();
}

int func_342()
{
	if (Global_140749 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_343()
{
	return func_342();
}

int func_344()
{
	if (!func_345(1, 1, 1, 0) || func_621())
	{
		return 1;
	}
	return 0;
}

int func_345(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_47(unk_0xD803B885F5E47A62(), 29))
	{
		return 0;
	}
	if (func_22(unk_0xD803B885F5E47A62(), 21))
	{
		return 0;
	}
	if (func_22(unk_0xD803B885F5E47A62(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0x09BE1E6DF7B80B43())
		{
			return 0;
		}
	}
	if (!func_393(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xF929B1A0A409FF93())
		{
			return 0;
		}
	}
	if (func_391(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_390())
	{
		return 0;
	}
	if (func_389())
	{
		return 0;
	}
	if (func_388())
	{
		return 0;
	}
	if (func_387())
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	if (func_385(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_383())
	{
		return 0;
	}
	if (func_22(unk_0xD803B885F5E47A62(), 0) || func_22(unk_0xD803B885F5E47A62(), 3))
	{
		return 0;
	}
	if ((func_22(unk_0xD803B885F5E47A62(), 12) || func_22(unk_0xD803B885F5E47A62(), 14)) || func_22(unk_0xD803B885F5E47A62(), 13))
	{
		return 0;
	}
	if (func_376(unk_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_355())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_354())
		{
			return 0;
		}
	}
	if (Global_195C36)
	{
		return 0;
	}
	if (func_353(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_352())
	{
		return 0;
	}
	if (func_351(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((func_350(unk_0xD803B885F5E47A62()) && func_56(unk_0xD803B885F5E47A62()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_349())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 4))
	{
		return 0;
	}
	if (func_348(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_347(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_124(unk_0xD803B885F5E47A62()))
	{
		if (func_346(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_346(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_19FCF7[iVar0 /*13*/].f_C != 0;
	}
	return 0;
}

int func_347(int iParam0)
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

int func_348(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_105.f_4 != 0 || Global_25033E[iParam0 /*421*/].f_105.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_349()
{
	return Global_199459.f_10CF != 4294967295;
}

int func_350(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 3);
	}
	return 0;
}

int func_351(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 14))
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 11))
	{
		return 1;
	}
	return 0;
}

int func_352()
{
	if (Global_40EB30.f_3AF > 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_353(int iParam0)
{
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

bool func_354()
{
	return Global_181EC.f_15A > 0;
}

int func_355()
{
	int iVar0;
	
	iVar0 = func_32(unk_0xD803B885F5E47A62());
	if (((func_375(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1C) || func_374(unk_0xD803B885F5E47A62())) || func_373(unk_0xD803B885F5E47A62())) || func_368(unk_0xD803B885F5E47A62()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_366(unk_0xD803B885F5E47A62()))
	{
		if (func_121(iVar0) || func_365(iVar0))
		{
			return 1;
		}
	}
	if (func_364(unk_0xD803B885F5E47A62()))
	{
		if (func_365(iVar0))
		{
			return 1;
		}
	}
	if (func_363(unk_0xD803B885F5E47A62()))
	{
		if (func_109(iVar0))
		{
			return 1;
		}
	}
	if (func_362(unk_0xD803B885F5E47A62()))
	{
		if (func_108(iVar0))
		{
			return 1;
		}
	}
	if (func_361(unk_0xD803B885F5E47A62()))
	{
		if (func_107(iVar0))
		{
			return 1;
		}
	}
	if (func_360(unk_0xD803B885F5E47A62()))
	{
		if (func_359(iVar0))
		{
			return 1;
		}
	}
	if (func_358(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_357(iVar0))
		{
			if (func_58(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
		}
	}
	if (func_356(unk_0xD803B885F5E47A62()))
	{
		if (func_99(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_356(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_358(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0x134B62B726CEC8E6(iVar0) == 2306538597)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295 && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_10())
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_360(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_361(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_362(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_363(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_364(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_366(int iParam0)
{
	if (func_367(Global_184507[iParam0 /*876*/].f_112.f_1C, 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_367(int iParam0, int iParam1)
{
	if (iParam1 == 4294967295)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_368(int iParam0)
{
	if (func_369(Global_184507[iParam0 /*876*/].f_112.f_1C, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_369(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_370(unk_0xD803B885F5E47A62(), 0);
	}
	if (bParam1)
	{
		if (func_370(unk_0xD803B885F5E47A62(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_370(int iParam0, bool bParam1)
{
	if (Global_184465 != func_10())
	{
		if (!func_372(Global_184465))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xD803B885F5E47A62() != Global_184465)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_184465 /*421*/].f_C3, 24) || func_371(Global_184465))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 24);
}

int func_371(int iParam0)
{
	if (iParam0 != func_10())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 9);
	}
	return 0;
}

int func_372(int iParam0)
{
	if (iParam0 != func_10())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 2);
	}
	return 0;
}

int func_373(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_374(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_376(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_184507[iParam0 /*876*/].f_112.f_1C > 0)
	{
		if (bParam1)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_374(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_364(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_373(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_363(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_362(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_361(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_382(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_360(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_381(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_358(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_380(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_356(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_379(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_378(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_377(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_378(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_379(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_380(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_381(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_382(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295 && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_10())
			{
				return func_55(Global_25033E[iParam0 /*421*/].f_136.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_383()
{
	if (func_384() == 0)
	{
		return 1;
	}
	return 0;
}

int func_384()
{
	return Global_1406D3.f_12;
}

bool func_385(int iParam0)
{
	return func_386(iParam0);
}

bool func_386(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0);
}

bool func_387()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0;
}

bool func_388()
{
	return Global_14086D;
}

bool func_389()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 5;
}

bool func_390()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0);
}

int func_391(int iParam0)
{
	if (func_392(iParam0, 1, 0))
	{
		if (Global_184507[iParam0 /*876*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_392(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_385(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_184507[iParam0 /*876*/] == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool func_393(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 22);
}

void func_394(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_10())
	{
		if (unk_0x40B8C182D63932FC(iParam1))
		{
			if (iParam1 == unk_0xD803B885F5E47A62())
			{
				iVar0 = 1;
			}
			else if (func_395(iParam1, unk_0xD803B885F5E47A62()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_9(unk_0xD803B885F5E47A62(), 1, 1))
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			Global_26B66F.f_1404.f_17F = unk_0xDD0E7998AE8AD485();
		}
	}
}

int func_395(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_10() && iParam1 != func_10())
	{
		iVar0 = func_27(iParam0);
		if (iVar0 != func_10())
		{
			return iVar0 == func_27(iParam1);
		}
	}
	return 0;
}

void func_396(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_515(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_513() || iParam2 == 28)
	{
		if (func_468(iParam1, iParam2, uParam3, Global_180529, 0, func_511(), sParam7))
		{
			func_467(1);
			if ((!func_466() && !func_465()) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 1))
			{
				if (func_464())
				{
					func_463();
				}
				else
				{
					unk_0xD02CE72B4B66DC29(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_462(1);
						Global_180529 = 0;
						iVar19 = 4294967295;
						if (Global_180606 != 1)
						{
							func_461(iParam1, 0, 0);
							if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 7))
							{
								unk_0x0674E58A79778E99(&(uParam3->f_21), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = 4294967295;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_9(unk_0x117658E336116132(iVar17), 0, 1))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
									if (!func_19(iVar3, 0))
									{
										if ((func_460(iVar3) || Global_25033E[iVar3 /*421*/].f_EC != 4294967295) || func_30(iVar3))
										{
											iVar9 = iVar3;
											if (func_29(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_459(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_457(unk_0xD803B885F5E47A62(), 0) && func_32(unk_0xD803B885F5E47A62()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_456())
							{
								if (func_9(unk_0x117658E336116132(iVar17), 0, 1))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
								}
								else
								{
									iVar3 = func_10();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_455(iVar3) && func_451(iVar3, iParam2)) && func_9(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
								Var6 = { func_446(iVar3) };
								if (iVar3 == unk_0xD803B885F5E47A62())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x6E524813889AECF8(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_175(iVar3) };
								iVar5 = func_440(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0x5283D58F79627134(iVar5);
								}
								Global_180529++;
								if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_16;
								}
								if ((uParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
								}
								if ((uParam0[iVar17 /*42*/])->f_29 != 4294967295)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_29;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != 4294967295 || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != 4294967295)
								{
									if (!func_456())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != 4294967295)
								{
									func_435(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_434(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = 4294967294;
									}
								}
								iVar16 = func_433(iVar3, 0);
								if (bVar2)
								{
									if (func_28(iVar3, 1) && iVar1[iVar9] != 4294967295)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_27 != 4294967295)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
								}
								if (func_432(iParam5))
								{
									func_431(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_431(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								unk_0x5D96D8530B3D0904(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0x117658E336116132(iVar17);
							if (func_9(iVar3, 0, 1) && !unk_0xEAE0D21A50E6C7F4(iVar14, iVar3))
							{
								iVar3 = unk_0x117658E336116132(iVar17);
							}
							else
							{
								iVar3 = func_10();
							}
							if (func_455(iVar3))
							{
								if (func_9(unk_0x117658E336116132(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
									Var6 = { func_446(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_175(iVar3) };
									iVar5 = func_440(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x5283D58F79627134(iVar5);
									}
									Global_180529++;
									iVar16 = func_433(iVar3, 1);
									if (bVar2)
									{
										if (func_28(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
									func_411(iVar3, unk_0x6E524813889AECF8(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 11))
						{
							func_408(uParam3, iParam1, iParam2);
						}
						func_407(&(uParam3->f_15));
						func_406();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 7))
						{
							func_405(uParam3, iParam1);
							func_404(iParam1, 0, 1);
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 7);
						}
						func_405(uParam3, iParam1);
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 11))
						{
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 11);
						}
						if (func_400(uParam3))
						{
							Global_180606 = 1;
						}
						func_397(uParam3);
						if (Global_180606 == 1)
						{
							uParam3->f_1B = 0;
						}
						if (Global_180606 == 2)
						{
							uParam3->f_1B = 0;
						}
					}
					if (unk_0x83D8570832F172A7(*iParam1))
					{
						unk_0xD9ACBBA59FD5A09E(7);
						unk_0xEF45C43067063F18(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xD9ACBBA59FD5A09E(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_1B = 0;
			func_406();
			func_462(0);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 7))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_21), 7);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 10))
			{
				unk_0x0674E58A79778E99(&(uParam3->f_21), 10);
			}
		}
	}
	unk_0xD59EF13BB60323B9();
}

void func_397(var uParam0)
{
	if (!func_399(&(uParam0->f_15)))
	{
		func_4(&(uParam0->f_15), 0, 0);
	}
	else if (func_3(&(uParam0->f_15), 250, 0))
	{
		func_407(&(uParam0->f_15));
		func_398(0);
	}
}

void func_398(bool bParam0)
{
	if (bParam0)
	{
		if (Global_180606 != 2)
		{
			Global_180606 = 2;
		}
	}
	else
	{
		switch (Global_180606)
		{
			case 0:
				Global_180606 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

bool func_399(var uParam0)
{
	return uParam0->f_1;
}

int func_400(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x117658E336116132(uParam0->f_25);
	if (iVar3 != func_10() && func_9(iVar3, 0, 1))
	{
		Var2 = { func_175(iVar3) };
		iVar1 = func_403(uParam0, uParam0->f_25);
		if (func_402(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 1;
							func_401(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 1;
						func_401(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 1;
							func_401(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_401(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x74684D5E87B13DBD(&Var2))
						{
							iVar4 = 1;
							func_401(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 1;
						func_401(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_25++;
	if (uParam0->f_25 >= 32)
	{
		uParam0->f_25 = 0;
	}
	return iVar4;
}

void func_401(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_402(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

var func_403(var uParam0, int iParam1)
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_404(int iParam0, bool bParam1, int iParam2)
{
	if (unk_0x7E60C62A7CE58FC8(*iParam0, "COLLAPSE"))
	{
		unk_0x1200CC973A2399C8(bParam1);
		unk_0x7E60D21B163E9D56();
	}
	if (iParam2 == 1)
	{
		if (unk_0x7E60C62A7CE58FC8(*iParam0, "DISPLAY_VIEW"))
		{
			unk_0x7E60D21B163E9D56();
		}
	}
}

void func_405(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 10))
	{
		unk_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(uParam0->f_23);
		unk_0x7E60D21B163E9D56();
		unk_0x5D96D8530B3D0904(&(uParam0->f_21), 10);
	}
}

void func_406()
{
	if (Global_180606 != 0)
	{
		Global_180606 = 0;
	}
}

void func_407(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_408(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (iVar2 != func_10())
		{
			if (func_9(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 4294967295)
				{
					iVar1 = func_410(uParam0->f_26[iVar0 /*2*/], 0, iParam2);
					func_409(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_184507[iVar0 /*876*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_409(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*uParam0))
	{
		if (unk_0x7E60C62A7CE58FC8(*uParam0, "SET_ICON"))
		{
			unk_0x3CAEA85DA607305E(iParam1);
			unk_0x3CAEA85DA607305E(iParam2);
			if (iParam2 == 65)
			{
				unk_0x3CAEA85DA607305E(iParam3);
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

int func_410(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_411(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_430() && iParam4 < func_429())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_18052B)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_180606 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x7E60C62A7CE58FC8(*iParam2, sVar1))
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 8) || uParam3->f_6C == 6)
			{
				func_428("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(iParam10);
			}
			func_428(sParam1);
			unk_0x3CAEA85DA607305E(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_428("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(65);
			}
			unk_0x3CAEA85DA607305E(4294967295);
			func_428("");
			if (uParam3->f_6C == 6)
			{
				func_428("");
			}
			else
			{
				func_428(&sParam5);
			}
			func_416(uParam3, iParam0);
			unk_0x024BC5F58A72410C(sParam9);
			unk_0x024BC5F58A72410C(sParam9);
			if (func_415(uParam3))
			{
				func_414("DPAD_FRIEND");
			}
			else if (func_413(uParam3))
			{
				func_414("DPAD_FRIEND");
			}
			else if (func_412(uParam3))
			{
				func_414("DPAD_CREW");
			}
			else
			{
				func_414("");
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

bool func_412(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 6);
}

bool func_413(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 5);
}

void func_414(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_415(var uParam0)
{
	if (func_413(uParam0) && func_412(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_416(var uParam0, int iParam1)
{
	if (func_427(iParam1))
	{
		unk_0x3CAEA85DA607305E(121);
	}
	else if (func_420(iParam1))
	{
		unk_0x3CAEA85DA607305E(122);
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_440000.f_1B, 15) && iParam1 > 4294967295) && iParam1 < 32) && unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam1 /*421*/].f_19D, 0))
	{
		unk_0x3CAEA85DA607305E(123);
	}
	else
	{
		if (func_417())
		{
			uParam0->f_24 = 0;
		}
		unk_0x1200CC973A2399C8(uParam0->f_24);
	}
}

int func_417()
{
	if (unk_0xA14BB9332558B949())
	{
		if (func_418() || func_86())
		{
			return 1;
		}
	}
	return 0;
}

int func_418()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_86();
	}
	return func_419(Global_440000.f_2F9AE);
}

int func_419(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_40001.f_137E[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_420(int iParam0)
{
	if ((func_9(iParam0, 0, 1) && func_421()) && func_6(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_421()
{
	if (func_426(unk_0xD803B885F5E47A62()) || func_425())
	{
		if (!func_422(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_422(int iParam0)
{
	if (func_424(iParam0) == 236 || func_424(iParam0) == 150)
	{
		return func_423(iParam0);
	}
	return 0;
}

int func_423(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

int func_424(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 4294967295;
}

int func_425()
{
	switch (func_32(unk_0xD803B885F5E47A62()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_426(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18D84D[iVar0 /*615*/] != 4294967295;
	}
	return 0;
}

int func_427(int iParam0)
{
	if (func_417())
	{
		if (func_9(iParam0, 0, 1))
		{
			return func_29(iParam0);
		}
	}
	if ((func_9(iParam0, 0, 1) && func_421()) && func_8(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_428(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_429()
{
	int iVar0;
	
	if (Global_18052B)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_430()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_18052B)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_431(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_430() && iParam3 < func_429())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_18052B)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == 4294967294)
			{
				iParam10 = 4294967295;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_180606 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x83D8570832F172A7(*iParam1))
		{
			if (unk_0x7E60C62A7CE58FC8(*iParam1, sVar1))
			{
				unk_0x3CAEA85DA607305E(iParam3);
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 8) || uParam2->f_6C == 6)
				{
					func_428("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(iParam9);
				}
				if (uParam2->f_6C == 6 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					func_414(sParam16);
				}
				else
				{
					func_428(&(uParam2->f_1));
				}
				unk_0x3CAEA85DA607305E(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_428("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(65);
				}
				if (iParam12 == 1)
				{
					unk_0x3CAEA85DA607305E(iVar0);
				}
				else
				{
					unk_0x3CAEA85DA607305E(4294967295);
				}
				if (func_456())
				{
					func_428("");
				}
				else if (uParam2->f_6C == 6 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 5 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_ONE_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 7 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_TWO_INT");
					unk_0x6B012227B3921E18(sParam16);
					unk_0x6D99DF8263D35CE5(iParam17);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 8 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_68)))
				{
					unk_0x7ACC3006A87F8B39("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x21994591120B91F0(fParam13, 1);
					}
					if (iParam10 != 4294967295)
					{
						unk_0x6D99DF8263D35CE5(iParam10);
					}
					unk_0x6B012227B3921E18(&(uParam2->f_68));
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 9)
				{
					unk_0x7ACC3006A87F8B39("FM_AE_CASH");
					unk_0xCBD015EC7E4226BC(iParam10, 1);
					unk_0x779B34565F4D71B1();
				}
				else if (uParam2->f_6C == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x7ACC3006A87F8B39("FM_AE_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 1);
						unk_0x779B34565F4D71B1();
					}
					else
					{
						unk_0x7ACC3006A87F8B39("FM_NG_CASH");
						unk_0xCBD015EC7E4226BC(iParam10, 1);
						unk_0x779B34565F4D71B1();
					}
				}
				else if (iParam15 > 4294967295)
				{
					if (iParam15 == 0 && !unk_0xEA6BC48857E0AC4C(&(uParam2->f_68)))
					{
						func_414(&(uParam2->f_68));
					}
					else
					{
						func_428("");
					}
				}
				else if (iParam14 != 4294967295)
				{
					unk_0x7ACC3006A87F8B39("STRING");
					unk_0x164431059FF80580(iParam14, 6);
					unk_0x779B34565F4D71B1();
				}
				else if (fParam13 != -1f)
				{
					unk_0x7ACC3006A87F8B39("NUMBER");
					unk_0x21994591120B91F0(fParam13, 1);
					unk_0x779B34565F4D71B1();
				}
				else if (iParam10 != 4294967295)
				{
					unk_0x3CAEA85DA607305E(iParam10);
				}
				else
				{
					func_428("");
				}
				if (uParam2->f_6C == 6)
				{
					func_428("");
				}
				else
				{
					func_428(&sParam4);
				}
				func_416(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xEA6BC48857E0AC4C(sParam8))
				{
					func_428("");
					func_428("");
				}
				else
				{
					unk_0x024BC5F58A72410C(sParam8);
					unk_0x024BC5F58A72410C(sParam8);
				}
				if (func_415(uParam2))
				{
					func_414("DPAD_FRIEND");
				}
				else if (func_413(uParam2))
				{
					func_414("DPAD_FRIEND");
				}
				else if (func_412(uParam2))
				{
					func_414("DPAD_CREW");
				}
				else
				{
					func_414("");
				}
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_432(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_433(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_426(iParam0)) && !func_124(iParam0))
	{
		iVar0 = func_317();
	}
	iVar1 = func_81(iParam0);
	if (!iVar1 == 4294967295)
	{
		return func_79(iVar1);
	}
	return iVar0;
}

char* func_434(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_435(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_439(iParam3))
	{
		*fParam1 = (func_436(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_432(iParam3))
	{
		*fParam1 = (func_436(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_436(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_438(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_437(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_437(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_438(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_440(int iParam0)
{
	int iVar0;
	
	iVar0 = func_443(iParam0);
	if (iVar0 == 4294967295)
	{
		func_441(iParam0, 1);
		return 0;
	}
	Global_153216[iVar0 /*5*/].f_4 = 1;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_441(int iParam0, bool bParam1)
{
	if (!func_9(iParam0, 0, 1))
	{
		return;
	}
	if (func_443(iParam0) != 4294967295)
	{
		return;
	}
	if (Global_1532B9)
	{
		if (iParam0 == Global_1532B9.f_1)
		{
			return;
		}
	}
	if (func_442(iParam0))
	{
		return;
	}
	if (Global_1532DF >= 32)
	{
		return;
	}
	Global_1532BE[Global_1532DF] = iParam0;
	Global_1532DF++;
	if (bParam1)
	{
	}
}

int func_442(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1532DF)
	{
		if (Global_1532BE[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_443(int iParam0)
{
	int iVar0;
	
	if (!func_9(iParam0, 0, 1))
	{
		return 4294967295;
	}
	if (Global_1532B7 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1532B7)
	{
		if (Global_153216[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x0E66AEE1894BB411(Global_153216[iVar0 /*5*/].f_2) && unk_0x0A53A8B5FA0B3F4D(Global_153216[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_444(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_444(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1532B7)
	{
		return;
	}
	if (unk_0x0E66AEE1894BB411(Global_153216[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_153216[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x5283D58F79627134(Global_153216[iParam0 /*5*/].f_2), 64);
			unk_0x0DA3CF6693AF3C9C(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0xC48867F0C23C5A64(Global_153216[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1532B7)
	{
		Global_153216[iVar2 /*5*/] = { Global_153216[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_445(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 1);
}

void func_445(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_10();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

struct<4> func_446(int iParam0)
{
	char cVar0[32];
	
	if (func_9(iParam0, 0, 1))
	{
		Global_265942 = { func_175(iParam0) };
		if (unk_0xDC30EF462887322E())
		{
			if (func_402(Global_265942))
			{
				if (!unk_0x5B9BB2932920F9CD(&Global_265942))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0x4DEB7B48DD0AABA4(0))
		{
			return cVar0;
		}
		if (func_450(&Global_265942))
		{
			Global_2658FC = { func_448(iParam0) };
			func_447(&Global_2658FC, &cVar0);
		}
	}
	return cVar0;
}

void func_447(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

struct<35> func_448(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_449(iParam0))
	{
		return Global_14088D[unk_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_175(iParam0) };
	unk_0xD9DA83C40D038174(&Var1, 35, &Var0);
	return Var1;
}

int func_449(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 1;
	}
	return 0;
}

int func_450(var uParam0)
{
	if (unk_0x1963B11DE70153E0())
	{
		if (unk_0x080E9D045AEE5605() && unk_0xF2EC2A39FF9E838D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_451(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_454(iParam0) || func_453(iParam0)) || func_452(iParam0))
		{
			return 0;
		}
	}
	if (!func_393(iParam0))
	{
		return 0;
	}
	if ((!func_460(iParam0) && Global_25033E[iParam0 /*421*/].f_EC == 4294967295) && !func_30(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_452(int iParam0)
{
	if (func_454(iParam0))
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 8);
}

int func_453(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 10) || unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 9));
	}
	return 0;
}

bool func_454(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 2);
}

int func_455(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_19(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_184507[iVar0 /*876*/].f_8E, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_456()
{
	switch (func_32(unk_0xD803B885F5E47A62()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_424(unk_0xD803B885F5E47A62()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_124(unk_0xD803B885F5E47A62()))
	{
		switch (func_32(unk_0xD803B885F5E47A62()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_422(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_457(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295 && func_458(Global_18D84D[iParam0 /*615*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295)
	{
		if (func_458(Global_18D84D[iParam0 /*615*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

int func_458(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_113(iParam0, 0);
	return 0;
}

void func_459(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_9(unk_0x117658E336116132(iVar0), 0, 1))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (!func_19(iVar1, 0))
			{
				if ((func_460(iVar1) || Global_25033E[iVar1 /*421*/].f_EC != 4294967295) || func_30(iVar1))
				{
					if (func_48(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_460(int iParam0)
{
	if (func_9(iParam0, 0, 1))
	{
		if (func_9(unk_0xD803B885F5E47A62(), 0, 1))
		{
			if (unk_0xF816C4B5324CB295(iParam0, unk_0xD803B885F5E47A62()) || func_32(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_461(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
	}
}

void func_462(bool bParam0)
{
	if (bParam0)
	{
		if (Global_15038F.f_2 == 0)
		{
			Global_15038F.f_2 = 1;
		}
	}
	else if (Global_15038F.f_2 == 1)
	{
		Global_15038F.f_2 = 0;
	}
}

void func_463()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 1))
	{
		if (func_335())
		{
			func_334();
		}
	}
}

int func_464()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0) && func_335())
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 1) && func_335())
	{
		return 1;
	}
	return 0;
}

int func_465()
{
	if (func_335())
	{
		if (func_306(Global_2537E2.f_AA3[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_466()
{
	if (func_335())
	{
		if (func_318(Global_2537E2.f_AA3[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_467(int iParam0)
{
	if (Global_15038F.f_1 != Global_15038F)
	{
		Global_15038F.f_1 = Global_15038F;
	}
	if (Global_15038F != iParam0)
	{
		Global_15038F = iParam0;
	}
}

int func_468(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_510(iParam1);
	fVar4 = func_509();
	iVar5 = 4294967295;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_508())
		{
			if (func_507() > 0 && Global_18052B)
			{
				unk_0xB8E3919889462ACD();
				unk_0xD668DA5CA4A1D2C8(fVar4);
				unk_0x3584F71E5CA29322(18);
				if (unk_0xFEBC1E4EC9E001F0())
				{
					unk_0xE19C2AAC820D8ED5();
				}
				unk_0x3584F71E5CA29322(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_497())
		{
			func_496(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 26))
	{
		func_496(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_399(&(uParam2->f_13)))
	{
		if (func_507() == 1)
		{
			func_495(bVar3, iParam0, 0);
			func_4(&(uParam2->f_13), 0, 0);
			func_496(iParam0, uParam2, 0);
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 5);
		}
	}
	if (func_399(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xE19C2AAC820D8ED5();
		}
		unk_0x3584F71E5CA29322(10);
		if (func_3(&(uParam2->f_13), 10000, 0) || (func_507() == 0 && !bParam5))
		{
			func_496(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_494();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xB8E3919889462ACD();
				}
				unk_0x3584F71E5CA29322(18);
			}
			if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0))
			{
				if (bVar2 == 0)
				{
					func_494();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xB8E3919889462ACD();
					}
					unk_0x3584F71E5CA29322(18);
				}
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (func_495(bVar3, iParam0, 0))
				{
					func_461(iParam0, 0, 0);
					sVar1 = func_492(iParam1, &(Global_440000.f_2F9B5), bParam4);
					Var0 = { func_490(iParam1) };
					if (bParam4)
					{
						func_487(iParam0, sVar1, "", 0, 4294967295, 4294967295, 1);
					}
					else if (iParam1 == 27)
					{
						func_480(iParam0, func_484(uParam2), func_481(uParam2), 4294967295);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_476(uParam2);
						if (!unk_0xEA6BC48857E0AC4C(sParam6))
						{
							sVar6 = sParam6;
						}
						func_474(iParam0, sVar6, func_475(), 4294967295);
					}
					else if (func_417())
					{
						uParam2->f_22 = Global_18052A;
						func_487(iParam0, sVar1, &Var0, 1, 4294967295, Global_18052A, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_469(iParam1);
						uParam2->f_22 = Global_18052A;
						func_487(iParam0, sVar1, "", 0, iVar5, Global_18052A, 1);
					}
					else
					{
						iVar5 = func_469(iParam1);
						func_487(iParam0, sVar1, &Var0, 1, iVar5, 4294967295, 1);
					}
					unk_0x5D96D8530B3D0904(&(uParam2->f_21), 0);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam2->f_21, 0))
			{
				Global_180529 = uParam3;
				Global_180528 = 1;
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (bVar2)
				{
					if (uParam2->f_22 != Global_18052A)
					{
						unk_0x0674E58A79778E99(&(uParam2->f_21), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_469(int iParam0)
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (func_473())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_472(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 20;
			}
			if (func_471(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_470(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 2;
	}
	if (func_196())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_470(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 4;
}

bool func_471(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 7;
}

bool func_472(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 2;
}

bool func_473()
{
	return Global_440000.f_1 == 0;
}

void func_474(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_414(sParam1);
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_414("");
		if (iParam3 != 4294967295)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_475()
{
	switch (func_32(unk_0xD803B885F5E47A62()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_476(var uParam0)
{
	switch (uParam0->f_70)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_6E)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_32(unk_0xD803B885F5E47A62()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_478())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_205(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_205(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_477(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B5))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_477(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_478()
{
	return (func_479() && func_62(func_60()));
}

bool func_479()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 148;
}

void func_480(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_414(sParam1);
		}
		else if (func_424(unk_0xD803B885F5E47A62()) == 133)
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT_C");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_414("");
		if (iParam3 != 4294967295)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_481(var uParam0)
{
	int iVar0;
	
	iVar0 = func_424(unk_0xD803B885F5E47A62());
	if (func_483())
	{
		if (uParam0->f_67 != 4294967295)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_482())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_482()
{
	if (func_424(unk_0xD803B885F5E47A62()) == 133)
	{
		return Global_26B66F.f_13B5;
	}
	return 4294967295;
}

bool func_483()
{
	return Global_184488;
}

char* func_484(var uParam0)
{
	int iVar0;
	
	iVar0 = func_424(unk_0xD803B885F5E47A62());
	if (func_483())
	{
		if (uParam0->f_67 != 4294967295)
		{
			iVar0 = uParam0->f_67;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_486() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_486() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_482())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_485() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_485()
{
	return Global_26B66F.f_13B8;
}

int func_486()
{
	if (func_424(unk_0xD803B885F5E47A62()) == 132)
	{
		return Global_26B66F.f_13B3;
	}
	return 4294967295;
}

void func_487(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_428(sParam1);
		}
		else if (iParam5 != 4294967295)
		{
			unk_0x7ACC3006A87F8B39(sParam1);
			unk_0x6D99DF8263D35CE5(iParam5);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_414(sParam1);
		}
		if (func_508() && iParam6)
		{
			if (func_489())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7ACC3006A87F8B39("LBD_DPD_CNT");
			unk_0x6D99DF8263D35CE5(iVar0);
			unk_0x6D99DF8263D35CE5(iVar1);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_414(sParam2);
		}
		if (iParam4 != 4294967295)
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (func_488(unk_0xD803B885F5E47A62()))
			{
				unk_0x3CAEA85DA607305E(166);
			}
			else if (func_84())
			{
				unk_0x3CAEA85DA607305E(220);
			}
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_488(int iParam0)
{
	if (func_472(iParam0) || func_471(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_489()
{
	return Global_18052B;
}

struct<4> func_490(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_491(unk_0xD803B885F5E47A62()) || func_470(unk_0xD803B885F5E47A62()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_440000.f_CC, 16);
			break;
	}
	if (func_417() && unk_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_CC, 16);
	}
	return Var0;
}

bool func_491(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 5;
}

char* func_492(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_417() || unk_0xEA6BC48857E0AC4C(sParam1)))
	{
		uVar0 = func_493();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_180619 == 0)
		{
			Global_180619 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		if (Global_180619 == 1)
		{
			Global_180619 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_180619 == 0)
		{
			Global_180619 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_493()
{
	if (unk_0xB9110623D4211889())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x4CE7C0420678C221())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xB56AF77A4FB2CF82())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xBADE9A39B01F3DEC())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_494()
{
	Global_A56F = 1;
}

bool func_495(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0xB01F55A0FD1CFD49("mp_matchmaking_card");
	}
	return unk_0x83D8570832F172A7(*iParam1);
}

void func_496(int iParam0, var uParam1, bool bParam2)
{
	unk_0x0674E58A79778E99(&(uParam1->f_21), 7);
	Global_180529 = 0;
	func_406();
	Global_180528 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_399(&(uParam1->f_13)))
		{
			func_407(&(uParam1->f_13));
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11F0), 5);
		}
	}
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0xE17FDF9E3068281B(iParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam1->f_21, 0))
	{
		unk_0x0674E58A79778E99(&(uParam1->f_21), 0);
	}
	unk_0xD668DA5CA4A1D2C8(0f);
}

int func_497()
{
	if (func_506())
	{
		return 0;
	}
	if (func_389())
	{
		return 0;
	}
	if (!func_504())
	{
		return 0;
	}
	if (!func_383())
	{
		return 0;
	}
	if (func_503(8, 4294967295))
	{
		return 0;
	}
	if (func_507() == 2)
	{
		return 0;
	}
	if (Global_26B66F.f_11BF)
	{
		return 0;
	}
	if (func_387())
	{
		return 0;
	}
	else if (!func_392(unk_0xD803B885F5E47A62(), 1, 0) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_502(1) || func_500(1)) || Global_56C3.f_7C) || Global_56C3)
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (func_499() && Global_19DEEC == 2)
	{
		return 0;
	}
	if (func_17(unk_0xD803B885F5E47A62()) && !func_499())
	{
		return 0;
	}
	if (Global_195C36)
	{
		return 0;
	}
	if (Global_195C3B)
	{
		return 0;
	}
	if (func_206(0))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 4))
	{
		return 0;
	}
	if (Global_14E876)
	{
		return 0;
	}
	if ((Global_19C478.f_2CE.f_5 || Global_19CF82.f_2CE.f_5) || Global_19C0AC.f_2CE.f_5)
	{
		return 0;
	}
	if ((Global_19E2B1.f_2D4.f_5 || Global_19E2B1.f_2E8.f_2D4.f_5) || Global_19E2B1.f_5D9.f_2D4.f_5)
	{
		return 0;
	}
	if (func_498(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((Global_14E899 || Global_14E89A) || Global_14E89B)
	{
		return 0;
	}
	return 1;
}

bool func_498(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_4, 6);
}

bool func_499()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 12) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0));
}

int func_500(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_501(unk_0x16F2683693E537C9()))
			{
				if (unk_0x06F8112AA79C53D9(0, 25) || unk_0x06F8112AA79C53D9(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_56C3.f_82)
	{
		return 0;
	}
	if (unk_0x06F8112AA79C53D9(0, 19) || (!bParam0 && unk_0x7FEE810EE9E768EB(0, 19)))
	{
		return 1;
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (((unk_0x06F8112AA79C53D9(0, 166) || unk_0x06F8112AA79C53D9(0, 167)) || unk_0x06F8112AA79C53D9(0, 168)) || unk_0x06F8112AA79C53D9(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x7FEE810EE9E768EB(0, 166) || unk_0x7FEE810EE9E768EB(0, 167)) || unk_0x7FEE810EE9E768EB(0, 168)) || unk_0x7FEE810EE9E768EB(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_501(int iParam0)
{
	int iVar0;
	
	if (unk_0x18AF0C72ABD5543B())
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			unk_0xCAE036C45E7FC720(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_502(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 4);
	}
	return Global_56C3.f_4;
}

bool func_503(int iParam0, int iParam1)
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

int func_504()
{
	if (func_505())
	{
		return 1;
	}
	if (unk_0x757EF87A33649210())
	{
		return 0;
	}
	if (unk_0xD0BB2359EC70FC37() || unk_0x7BCE0E6DD4A1F749())
	{
		return 0;
	}
	if (unk_0x06980BB66EBA4D95())
	{
		return 0;
	}
	return 1;
}

bool func_505()
{
	return Global_1406B8;
}

bool func_506()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_507()
{
	return Global_150392.f_44;
}

int func_508()
{
	if (Global_18052A > 16)
	{
		return 1;
	}
	return 0;
}

float func_509()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_510(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_511()
{
	if (func_512(unk_0xD803B885F5E47A62()))
	{
		return Global_1420BD;
	}
	return 0;
}

int func_512(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_19(iParam0, 0))
		{
			return unk_0xB9BE6EF14AC6F8DE(iParam0);
		}
	}
	return 0;
}

int func_513()
{
	if (func_511())
	{
		return 1;
	}
	if (func_452(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_483())
	{
		return 1;
	}
	if (func_426(unk_0xD803B885F5E47A62()))
	{
		switch (func_424(unk_0xD803B885F5E47A62()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_514(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_514(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_514(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_514(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 4);
}

int func_515(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_426(unk_0xD803B885F5E47A62()) && !func_124(unk_0xD803B885F5E47A62())) && !func_422(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_33(unk_0xD803B885F5E47A62(), 0) && func_124(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
		if (func_516(unk_0xD803B885F5E47A62()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_516(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_426(iParam0) && !func_454(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 8));
	bVar2 = func_124(iParam0);
	uVar3 = func_26();
	bVar4 = func_295();
	if ((bVar1 && (func_423(iParam0) || func_518(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_35(iParam0)) && !func_517(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_26B66F.f_1404.f_D8 != iVar0)
	{
		Global_26B66F.f_1404.f_D8 = iVar0;
	}
	return iVar0;
}

bool func_517(int iParam0)
{
	return func_36(iParam0, 19);
}

int func_518(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

void func_519()
{
	if (func_9(func_37(), 1, 1) && !unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(func_37()), 0))
	{
		func_520(151, unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(func_37()), true), &uLocal_81, 1140457472, 1144750080, 0);
	}
}

void func_520(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_426(unk_0xD803B885F5E47A62()) && !func_454(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 8)) && (func_423(unk_0xD803B885F5E47A62()) || func_518(unk_0xD803B885F5E47A62()))) || func_562(vParam1))
	{
		return;
	}
	Global_198C6B = { vParam1 };
	fVar0 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vParam1);
	func_558(iParam0, fVar0);
	if (unk_0x798A3F1296751F46() && unk_0x8BB17FEBE0394018() == 15)
	{
		if (func_35(unk_0xD803B885F5E47A62()) || func_34(unk_0xD803B885F5E47A62()))
		{
			if (!unk_0x70305AA977EFE679(1344549371))
			{
				unk_0x8134AB7E30C9809E(1344549371);
			}
		}
		else if (unk_0x70305AA977EFE679(1344549371))
		{
			unk_0x64366F76B4845277(1344549371);
		}
	}
	if (fVar0 < fParam3)
	{
		if (!(func_22(unk_0xD803B885F5E47A62(), 21) || func_22(unk_0xD803B885F5E47A62(), 25)))
		{
			func_557(vParam1, 1, 0);
		}
		if (!*uParam2 && func_9(unk_0xD803B885F5E47A62(), 1, 1))
		{
			*uParam2 = 1;
			if (func_556(iParam0))
			{
				unk_0x51B096AAC60548C1(func_555(iParam0));
				if (func_554(iParam0, 4294967295))
				{
					unk_0x34D79252800B23FF(0);
					if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
					{
						unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 1);
						unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 1);
					}
					unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0);
				}
			}
			if (func_553(iParam0))
			{
				fVar1 = func_552(iParam0);
				if (fVar1 != 1f)
				{
					func_549(fVar1);
					unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 1);
				}
			}
			if (!Global_247C05)
			{
				if (func_548(iParam0) && func_35(unk_0xD803B885F5E47A62()))
				{
					func_546(1);
					func_545(2);
				}
			}
			func_296(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_36(unk_0xD803B885F5E47A62(), 19))
			{
				func_298(19);
			}
		}
		if (*uParam2 && func_9(unk_0xD803B885F5E47A62(), 1, 1))
		{
			*uParam2 = 0;
			if (func_556(iParam0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0))
				{
					unk_0x51B096AAC60548C1(1f);
					unk_0x34D79252800B23FF(5);
					unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0);
				}
			}
			if (func_553(iParam0))
			{
				func_544();
				unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 1);
			}
			if (iParam5 && !func_426(unk_0xD803B885F5E47A62()))
			{
				if (func_32(unk_0xD803B885F5E47A62()) != 152)
				{
					func_522();
				}
			}
			if (func_206(2))
			{
				func_546(0);
				func_521(2);
			}
		}
	}
}

void func_521(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_2D), iParam0);
}

void func_522()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_18), &Global_24C36F, 2);
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_1A), &Global_24C371, 19);
	func_542();
	func_525(1, 1, 0);
	func_523();
}

void func_523()
{
	func_524(0, 0);
}

void func_524(int iParam0, int iParam1)
{
	Global_24B2D0.f_16 = iParam0;
	Global_24B2D0.f_17 = iParam1;
}

void func_525(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2D), &Global_24C384, 320);
	}
	else
	{
		Global_24B2D0.f_2D = { Global_24C384 };
		Global_24B2D0.f_2D.f_31 = { Global_24C384.f_31 };
		Global_24B2D0.f_2D.f_34 = Global_24C384.f_34;
		Global_24B2D0.f_2D.f_35 = Global_24C384.f_35;
	}
	if (bParam0)
	{
		func_541();
	}
	if (!bParam2)
	{
		func_528(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_527(0);
	func_526();
}

void func_526()
{
	struct<6> Var0;
	
	if (Global_24B2D0.f_1E7.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_24B2D0.f_1E7 = { Var0 };
	}
}

void func_527(bool bParam0)
{
	if (bParam0)
	{
		Global_24B2D0.f_2C1 = 0;
	}
	else
	{
		Global_24B2D0.f_2C1 = 1;
	}
}

void func_528(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_540())
		{
			func_539();
		}
		Global_24B2D0.f_2C2.f_206 = unk_0x0D0A574C76D769AC();
		Global_24B2D0.f_2C2.f_1F8 = iParam1;
		Global_24B2D0.f_2C2.f_1F9 = iParam2;
		Global_24B2D0.f_2C2.f_1FA = iParam10;
		func_537();
		func_532(8, 0, 0, 0, 0);
		Global_24B2D0.f_2C2.f_1FB = iParam11;
		Global_24B2D0.f_2C2.f_200 = iParam3;
		Global_24B2D0.f_2C2.f_201 = iParam4;
		Global_24B2D0.f_2C2.f_1FE = iParam5;
		Global_24B2D0.f_2C2.f_1FF = iParam6;
		Global_24B2D0.f_2C2.f_202 = iParam7;
		Global_24B2D0.f_2C2.f_203 = iParam8;
		Global_24B2D0.f_2C2.f_204 = iParam9;
		Global_24B2D0.f_2C2.f_205 = iParam14;
		Global_24B2D0.f_2C2.f_1FC = iParam12;
		Global_24B2D0.f_2C2.f_1FD = iParam13;
		Global_24B2D0.f_6D1 = 1;
	}
	else
	{
		func_529();
	}
}

void func_529()
{
	if (func_540() && !func_531())
	{
		func_539();
	}
	if (func_531())
	{
		func_530();
	}
	else
	{
		func_537();
		func_532(0, 0, 0, 0, 0);
		Global_24B2D0.f_6D1 = 0;
		Global_24B2D0.f_6D0 = 0;
	}
}

void func_530()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2C2), &(Global_24B2D0.f_4C9), 519);
	Global_24B2D0.f_1E7 = { Global_24B2D0.f_1ED };
	if (unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		Global_24B2D0.f_6D0 = 0;
	}
}

int func_531()
{
	if ((Global_24B2D0.f_6D0 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_4C9.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_4C9.f_206))
	{
		return 1;
	}
	return 0;
}

void func_532(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2537E2.f_766.f_2BF.f_10 != func_10())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_2537E2.f_766.f_2BF.f_10 /*421*/].f_194, 0) && func_533())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_24D062 = 0;
	}
	Global_24B2D0.f_1E7 = iParam0;
	Global_24B2D0.f_1E7.f_1 = unk_0x0D0A574C76D769AC();
	Global_24B2D0.f_1E7.f_2 = iParam1;
	Global_24B2D0.f_1E7.f_3 = iParam2;
	Global_24B2D0.f_1E7.f_4 = iParam3;
	Global_24B2D0.f_1E7.f_5 = iParam4;
}

int func_533()
{
	if ((((((func_32(unk_0xD803B885F5E47A62()) == 229 || func_32(unk_0xD803B885F5E47A62()) == 191) || func_536()) || func_535()) || func_347(unk_0xD803B885F5E47A62())) || Global_265BE2.f_E2 == 1) || (Global_24B2D0.f_6D1 && func_534(unk_0xD803B885F5E47A62())))
	{
		return 0;
	}
	return 1;
}

int func_534(int iParam0)
{
	if (func_423(iParam0))
	{
		return 1;
	}
	if (func_124(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_535()
{
	return Global_180605;
}

int func_536()
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_537()
{
	if (func_540() && !func_531())
	{
		func_539();
	}
	func_538();
	Global_24B2D0.f_2C2 = 0;
}

void func_538()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_24B2D0.f_2C2.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_539()
{
	if (func_531())
	{
		if (Global_24B2D0.f_2C2.f_206 == Global_24B2D0.f_4C9.f_206)
		{
			return;
		}
	}
	if (!unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_4C9), &(Global_24B2D0.f_2C2), 519);
		Global_24B2D0.f_1ED = { Global_24B2D0.f_1E7 };
		Global_24B2D0.f_6D0 = 1;
	}
}

int func_540()
{
	if ((Global_24B2D0.f_6D1 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_2C2.f_206))
	{
		return 1;
	}
	return 0;
}

void func_541()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_16D), &Global_24C4C4, 121);
}

void func_542()
{
	func_543();
	Global_24B2D0.f_8CE = 0;
}

void func_543()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_24B2D0.f_8CF[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_544()
{
	if (unk_0x1727A44C562FBED2(Global_26B66F.f_1400))
	{
		if (!Global_26B66F.f_1400 == unk_0x0D0A574C76D769AC() && Global_26B66F.f_13FF < 1f)
		{
			return;
		}
	}
	Global_26B66F.f_1400 = 4294967295;
	Global_26B66F.f_13FF = 1f;
}

void func_545(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_2D), iParam0);
}

void func_546(int iParam0)
{
	if (func_547() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_247C05)
	{
		return;
	}
	Global_247C05 = iParam0;
	Global_247C07 = 0;
	Global_247C08 = 0;
}

int func_547()
{
	if ((((Global_EC6CD != 4294967295 && Global_EC6CD != 33) && Global_EC6CD != 35) && Global_EC6CD != 37) && Global_EC6CD != 21)
	{
		return 1;
	}
	return 0;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_549(float fParam0)
{
	float fVar0;
	
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_550())
	{
		return;
	}
	fVar0 = (Global_26B66F.f_13FF - fParam0);
	if (unk_0x1727A44C562FBED2(Global_26B66F.f_1400))
	{
		if (!Global_26B66F.f_1400 == unk_0x0D0A574C76D769AC() && unk_0x755FF954DAE327E1(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_26B66F.f_13FF = fParam0;
	Global_26B66F.f_1400 = unk_0x0D0A574C76D769AC();
}

int func_550()
{
	switch (func_16())
	{
		case 0:
			return func_551();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_551()
{
	switch (Global_259530)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

float func_552(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_553(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_554(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_555(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_557(vector3 vParam0, int iParam1, int iParam2)
{
	Global_24B2D0.f_2D.f_31 = { vParam0 };
	Global_24B2D0.f_2D.f_34 = iParam1;
	Global_24B2D0.f_2D.f_35 = iParam2;
}

void func_558(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_561(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_559();
	}
}

void func_559()
{
	if (!func_560(unk_0xD803B885F5E47A62()))
	{
		func_296(25);
	}
}

bool func_560(int iParam0)
{
	return func_36(iParam0, 25);
}

int func_561(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_40001.f_30EA;
		
		case 142:
			return Global_40001.f_30DE;
		
		case 157:
			return Global_40001.f_30BD;
		
		case 159:
			return Global_40001.f_30AC;
		
		case 162:
			return Global_40001.f_311B;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return 4294967295;
}

int func_562(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_563()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_564(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_564(int iParam0)
{
	struct<6> Var0;
	
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 13))
	{
		if ((unk_0xC844350D5D58C99A(Var0) && unk_0xEC560E589DF8370E(Var0)) && unk_0x940C1429253D3B1B(Var0) == unk_0x9539D44F3E4492F6(func_37()))
		{
			if (Var0.f_5)
			{
				if (unk_0xC844350D5D58C99A(Var0.f_1) && unk_0xEC560E589DF8370E(Var0.f_1))
				{
					if (unk_0x940C1429253D3B1B(Var0.f_1) == unk_0x16F2683693E537C9())
					{
						unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 1);
					}
				}
			}
		}
	}
}

void func_565()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_80, 3))
	{
		if (func_9(func_37(), 1, 1) && unk_0x40B8C182D63932FC(func_37()))
		{
			func_582(func_37(), func_583(6), 1, 0);
			func_580(func_37(), 432, 1, 0);
			func_578(func_37(), 1, 1, 0);
			func_577(func_37(), Global_40001.f_3043, 1, 0);
			func_574(func_37(), 1, 0);
			if (func_42() <= 1)
			{
				func_566(func_37(), 1, 7000);
			}
			unk_0x5D96D8530B3D0904(&iLocal_80, 3);
		}
	}
}

void func_566(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_2537E2)
		{
		}
		else if (unk_0xE4EDC4B0E92C078B(Global_24DDCF[iVar0]))
		{
			unk_0x5D96D8530B3D0904(&(Global_24DDCF.f_172), iVar0);
			unk_0x0674E58A79778E99(&(Global_24DDCF.f_177), iVar0);
			unk_0xF412DD40DE84CE72(Global_24DDCF[iVar0], true);
			unk_0xF91C863A82DF022A(Global_24DDCF[iVar0], 250);
			func_567(iParam0);
			if (iParam2 < 0)
			{
				unk_0x5D96D8530B3D0904(&(Global_24DDCF.f_177), iVar0);
			}
			else
			{
				Global_24DDCF.f_C9[iVar0] = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam2);
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(Global_24DDCF.f_172), iVar0);
			unk_0x0674E58A79778E99(&(Global_24DDCF.f_177), iVar0);
			if (iParam2 < 0)
			{
				unk_0x5D96D8530B3D0904(&(Global_24DDCF.f_177), iVar0);
			}
			else
			{
				Global_24DDCF.f_C9[iVar0] = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0x0674E58A79778E99(&(Global_24DDCF.f_172), iVar0);
		unk_0x0674E58A79778E99(&(Global_24DDCF.f_177), iVar0);
		if (unk_0xE4EDC4B0E92C078B(Global_24DDCF[iVar0]))
		{
			func_567(iParam0);
			unk_0xF412DD40DE84CE72(Global_24DDCF[iVar0], false);
		}
	}
}

void func_567(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_24DDCF[iVar0]))
		{
			Global_24DDCF.f_5DD[iVar0] = func_568(iParam0);
			unk_0x2A065371C9D96655(Global_24DDCF[iVar0], Global_24DDCF.f_5DD[iVar0]);
		}
	}
}

int func_568(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (unk_0xE4EDC4B0E92C078B(Global_24DDCF[iVar0]))
		{
			iVar1 = unk_0x301901B13DC3365B(Global_24DDCF[iVar0]);
			if (unk_0xEAE0D21A50E6C7F4(Global_24DDCF.f_182, iVar0) || unk_0xEAE0D21A50E6C7F4(Global_24DDCF.f_181, iVar0))
			{
				return 1;
			}
			else if ((unk_0xEAE0D21A50E6C7F4(Global_24DDCF.f_173, iVar0) || unk_0xEAE0D21A50E6C7F4(Global_24DDCF.f_172, iVar0)) || unk_0xEAE0D21A50E6C7F4(Global_24DDCF.f_184, iVar0))
			{
				return func_571(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_571(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_571(11);
						break;
					
					case 254:
						if (unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(Global_2537E2))
						{
							return func_571(6);
						}
						else
						{
							return func_571(5);
						}
						break;
					
					case 271:
						if (unk_0x08067D4957B73C02(iParam0) == unk_0x08067D4957B73C02(Global_2537E2))
						{
							return func_571(6);
						}
						else
						{
							return func_571(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_78(Global_2537E2, iParam0, 4294967294, 0))
						{
							return func_571(6);
						}
						else
						{
							return func_571(5);
						}
						break;
					
					case 303:
					case 418:
						return func_571(10);
						break;
					
					case 364:
						if (func_569(Global_2537E2, iParam0, 1))
						{
							return func_571(10);
						}
						else
						{
							return func_571(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_571(10);
						break;
					
					case 417:
						if ((func_356(iParam0) || func_379(iParam0)) || func_378(iParam0))
						{
							if (func_569(Global_2537E2, iParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_569(Global_2537E2, iParam0, 1))
						{
							return func_571(6);
						}
						else
						{
							return func_571(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_569(Global_2537E2, iParam0, 1))
						{
							return func_571(6);
						}
						else
						{
							return func_571(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_569(int iParam0, int iParam1, bool bParam2)
{
	if (func_63(iParam0, 4294967294, 0, 0, 0) == func_63(iParam1, 4294967294, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_570(func_63(iParam0, 4294967294, 0, 0, 0)) && func_570(func_63(iParam1, 4294967294, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_570(int iParam0)
{
	if (iParam0 == func_69(1) || iParam0 == func_69(0))
	{
		return 1;
	}
	return 0;
}

int func_571(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_573())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_572(iParam0);
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_573()
{
	int iVar0;
	
	iVar0 = unk_0x08067D4957B73C02(Global_2537E2);
	if (iVar0 > 4294967295 && iVar0 < 4)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iVar0 /*15700*/].f_2560, 4);
	}
	return 0;
}

void func_574(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (func_576(iParam0))
	{
		return;
	}
	func_575(&(Global_24DDCF.f_2D0[iParam0]), &(Global_24DDCF.f_43B[iParam0]), &(Global_24DDCF.f_189), bParam1, iParam0, bParam2, &uVar0);
}

int func_575(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x1727A44C562FBED2(*uParam1) || *uParam1 == unk_0x0D0A574C76D769AC())
		{
			*uParam1 = unk_0x0D0A574C76D769AC();
			*uParam0 = unk_0x0D0A574C76D769AC();
		}
	}
	if (!unk_0x1727A44C562FBED2(*uParam0) || *uParam0 == unk_0x0D0A574C76D769AC())
	{
		if (bParam3)
		{
			if (!unk_0xEAE0D21A50E6C7F4(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x5D96D8530B3D0904(iParam2, iParam4);
			}
			*uParam0 = unk_0x0D0A574C76D769AC();
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x0674E58A79778E99(iParam2, iParam4);
			}
			if (*uParam1 == unk_0x0D0A574C76D769AC())
			{
				*uParam1 = 4294967295;
			}
			*uParam0 = 4294967295;
		}
		return 1;
	}
	else if (unk_0x1727A44C562FBED2(*uParam1) && !*uParam1 == unk_0x0D0A574C76D769AC())
	{
	}
	return 0;
}

int func_576(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 1;
	}
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_550())
	{
		return 1;
	}
	return 0;
}

void func_577(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_576(iParam0))
	{
		return;
	}
	if (func_575(&(Global_24DDCF.f_2F1[iParam0]), &(Global_24DDCF.f_45C[iParam0]), &(Global_24DDCF.f_188), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_22B[iParam0] = fParam1;
		}
	}
}

void func_578(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_576(iParam0))
	{
		return;
	}
	if (func_575(&(Global_24DDCF.f_333[iParam0]), &(Global_24DDCF.f_49E[iParam0]), &(Global_24DDCF.f_16F), bParam1, iParam0, bParam3, &uVar0))
	{
		func_579(iParam0, bParam2);
	}
}

void func_579(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_24DDCF.f_170), iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_24DDCF.f_170), iParam0);
	}
	if (unk_0xE4EDC4B0E92C078B(Global_24DDCF[iParam0]))
	{
		if (bParam1)
		{
			unk_0x6ABCCE651368DB93(Global_24DDCF[iParam0], false);
		}
		else
		{
			unk_0x6ABCCE651368DB93(Global_24DDCF[iParam0], true);
		}
	}
}

void func_580(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_576(iParam0))
	{
		return;
	}
	if (func_575(&(Global_24DDCF.f_24C[iParam0]), &(Global_24DDCF.f_3B7[iParam0]), &(Global_24DDCF.f_184), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1A7[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_581();
		}
	}
}

void func_581()
{
	Global_24DDCF.f_64E = 1;
}

void func_582(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_576(iParam0))
	{
		return;
	}
	if (func_575(&(Global_24DDCF.f_26D[iParam0]), &(Global_24DDCF.f_3D8[iParam0]), &(Global_24DDCF.f_185), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1C8[iParam0] = uParam1;
		}
	}
}

int func_583(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xA402F6C87C08815C(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_584()
{
	char* sVar0;
	
	if (func_344())
	{
		if (func_343())
		{
			func_336();
		}
		return;
	}
	sVar0 = "GBTER_KILL";
	if (func_6(unk_0xD803B885F5E47A62(), 1))
	{
		sVar0 = "GBTER_B_KILL";
		if (Local_82.f_A)
		{
			sVar0 = "GBTER_AB_KILL";
		}
	}
	if (!func_591(sVar0))
	{
		func_585(sVar0, func_37(), 1, 0);
	}
}

void func_585(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_586(sParam0, unk_0x6E524813889AECF8(iParam1), bParam3, 1);
}

int func_586(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (unk_0x7724E025FD444F45(sParam1) > 63)
	{
		return 0;
	}
	if (func_590(sParam0, sParam1) && Global_140749.f_38 == Global_140749.f_3A)
	{
		return 0;
	}
	uVar0 = Global_140749.f_36;
	func_337();
	Global_140749 = 9;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	StringCopy(&(Global_140749.f_10), sParam1, 64);
	Global_140749.f_3A = iParam3;
	Global_140749.f_38 = iParam3;
	Global_140749.f_36 = uVar0;
	func_589();
	func_588(bParam2);
	func_587();
	return 1;
}

void func_587()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 1);
}

void func_588(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0);
}

void func_589()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 86400000);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

bool func_590(char* sParam0, char* sParam1)
{
	if (!func_342())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return 0;
	}
	if (!unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C)))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam1) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

int func_591(char* sParam0)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (!func_342())
	{
		return 0;
	}
	if (Global_140749 == 11)
	{
		if (unk_0x7724E025FD444F45(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return 0;
	}
	return func_592(sParam0);
}

bool func_592(char* sParam0)
{
	if (!func_342())
	{
		return 0;
	}
	if (Global_140749 == 11)
	{
		return func_593(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_593(char* sParam0)
{
	if (!func_342())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

void func_594()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (func_344())
	{
		return;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_82.f_1, 0))
	{
		if (func_399(&(Local_82.f_4)))
		{
			iVar1 = (func_5() - func_599(&(Local_82.f_4), 0, 0));
			if (iVar1 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iVar1 = func_598(iVar1, 0);
			sVar2 = "GB_WORK_END";
			if (func_6(unk_0xD803B885F5E47A62(), 1))
			{
				sVar2 = "BK_TIME";
			}
			if (iVar1 > 0)
			{
				func_595(iVar1, sVar2, 0, 0, 4294967295, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
			}
			else
			{
				func_595(0, sVar2, 0, 0, 4294967295, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
			}
		}
	}
}

void func_595(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_597(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_150976.f_1 = 1;
		func_596(7, iVar0);
		Global_150976.f_11D2[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_11D2.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_11D2.f_AC[iVar0] = iParam2;
		Global_150976.f_11D2.f_D8[iVar0] = iParam3;
		Global_150976.f_11D2.f_B7[iVar0] = iParam4;
		Global_150976.f_11D2.f_C2[iVar0] = iParam5;
		Global_150976.f_11D2.f_F9[iVar0] = iParam6;
		Global_150976.f_11D2.f_104[iVar0] = iParam7;
		Global_150976.f_11D2.f_CD[iVar0] = iParam8;
		Global_150976.f_11D2.f_13A[iVar0] = iParam9;
		Global_150976.f_11D2.f_145[iVar0] = iParam10;
		Global_150976.f_11D2.f_165[iVar0] = iParam11;
		Global_150976.f_11D2.f_EE[iVar0] = iParam12;
		Global_150976.f_11D2.f_10F[iVar0] = iParam13;
		Global_150976.f_11D2.f_170[iVar0] = iParam14;
		Global_150976.f_11D2.f_17B[iVar0] = iParam15;
		Global_150976.f_11D2.f_186[iVar0] = iParam16;
		Global_150976.f_11D2.f_E3[iVar0] = iParam17;
	}
}

void func_596(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_597(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

int func_598(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_599(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0);
}

void func_600()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	
	if (func_344())
	{
		return;
	}
	if (unk_0xD803B885F5E47A62() != func_60())
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_80, 0))
		{
			if (!func_335())
			{
				sVar0 = "GBTER_START";
				if (func_6(unk_0xD803B885F5E47A62(), 1))
				{
					sVar0 = "GBTER_BSTART";
					if (Local_82.f_A)
					{
						sVar0 = "GBTER_AB_START";
					}
				}
				func_602(sVar0, unk_0x6E524813889AECF8(func_37()), 0, 4294967295);
				func_601(1);
				unk_0x5D96D8530B3D0904(&iLocal_80, 2);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG";
			sVar2 = "GBTER_BIG_GS";
			if (func_6(unk_0xD803B885F5E47A62(), 1))
			{
				sVar1 = "GBTER_B_BIG";
				sVar2 = "GBTER_B_SS";
				if (Local_82.f_A)
				{
					sVar1 = "GBTER_B_BIG";
					sVar2 = "GBTER_AB_SS";
				}
			}
			func_334();
			func_325(86, func_37(), 4294967295, sVar2, sVar1, 1, 4294967295, 2, 0);
			unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(iLocal_80, 0))
	{
		if (!func_335())
		{
			sVar3 = "GBTER_BOSS";
			if (func_6(unk_0xD803B885F5E47A62(), 1))
			{
				sVar3 = "GBTER_BBOSS";
				if (Local_82.f_A)
				{
					sVar3 = "GBTER_AB_BOSS";
				}
			}
			func_602(sVar3, unk_0x6E524813889AECF8(func_37()), 0, 4294967295);
			unk_0x5D96D8530B3D0904(&iLocal_80, 2);
			func_601(1);
		}
	}
	else
	{
		sVar4 = "GBTER_BIG";
		sVar5 = "GBTER_BIG_GS";
		if (func_6(unk_0xD803B885F5E47A62(), 1))
		{
			sVar4 = "GBTER_B_BIG";
			sVar5 = "GBTER_B_BSS";
			if (Local_82.f_A)
			{
				sVar4 = "GBTER_B_BIG";
				sVar5 = "GBTER_AB_SS";
			}
		}
		func_334();
		func_325(86, func_37(), 4294967295, sVar5, sVar4, 1, 4294967295, 2, 0);
		unk_0x5D96D8530B3D0904(&(Local_83[unk_0x57270EE11514DC67() /*4*/].f_1), 0);
	}
	unk_0x5D96D8530B3D0904(&iLocal_80, 0);
}

void func_601(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_205(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_335())
	{
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Boss_Message_Orange", sVar0, false);
	}
}

void func_602(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam3);
}

void func_603(int iParam0)
{
	Local_83[unk_0x57270EE11514DC67() /*4*/].f_2 = iParam0;
}

void func_604(bool bParam0)
{
	if (bParam0)
	{
		if (!func_36(unk_0xD803B885F5E47A62(), 9))
		{
			if (func_516(unk_0xD803B885F5E47A62()) != 0)
			{
				func_296(9);
			}
		}
	}
	else if (func_36(unk_0xD803B885F5E47A62(), 9))
	{
		func_298(9);
	}
}

void func_605(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 != iParam0)
	{
		func_619(4294967295);
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 = iParam0;
		if (func_618() != 4294967295)
		{
			func_617(4294967295);
		}
		if (func_616() != 4294967295)
		{
			func_615(4294967295);
		}
		func_614(iParam2);
		func_612(iParam0);
		if (!func_553(iParam0))
		{
			fVar0 = func_552(iParam0);
			if (fVar0 != 1f)
			{
				func_549(fVar0);
				unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 1);
			}
		}
		if (!func_556(iParam0) || iParam3)
		{
			if (func_554(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x34D79252800B23FF(0);
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
					unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
				}
				unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 0);
			}
			else if (unk_0x02A813E6E0380440() < 5)
			{
				unk_0x51B096AAC60548C1(1f);
				unk_0x34D79252800B23FF(5);
			}
		}
		if (func_26())
		{
			func_296(27);
		}
		if (bParam1)
		{
			if (!func_295())
			{
				func_546(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 1) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 4)) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0))
			{
				func_93(6);
			}
			func_611();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0x15EA7F4313456B1D(3, false);
			unk_0x15EA7F4313456B1D(5, false);
		}
		if (func_426(unk_0xD803B885F5E47A62()) && func_35(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 8);
		}
		func_607();
		if (func_606(iParam0))
		{
			unk_0x15EA7F4313456B1D(3, false);
			unk_0x15EA7F4313456B1D(5, false);
			unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 6);
		}
		Global_26B66F.f_19B3 = 0;
	}
}

int func_606(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_607()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_610();
	iVar2 = func_27(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (func_48(iVar1, iVar2, 1) || func_608(iVar1, unk_0xD803B885F5E47A62()))
			{
				unk_0xD463D0CE3DC66332(unk_0xD803B885F5E47A62(), iVar1, bVar3);
				unk_0xD463D0CE3DC66332(iVar1, unk_0xD803B885F5E47A62(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_608(int iParam0, int iParam1)
{
	if (func_28(iParam0, 1) && func_28(iParam1, 1))
	{
		return (func_609(iParam0) == func_27(iParam1) || func_609(iParam1) == func_27(iParam0));
	}
	return 0;
}

int func_609(int iParam0)
{
	if (func_28(iParam0, 1))
	{
		return Global_18D84D[func_27(iParam0) /*615*/].f_B.f_1E4;
	}
	return func_10();
}

int func_610()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11();
	if (iVar0 != func_10())
	{
		if (func_9(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != 4294967295)
			{
				return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar1 /*615*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_611()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 1))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 4))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 4);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 6))
	{
		unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 6);
	}
	unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 0);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_11CB), 2);
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_2EF = 0;
	if (Global_26B66F.f_11CD > 0)
	{
		unk_0x34D79252800B23FF(Global_26B66F.f_11CD);
	}
	Global_26B66F.f_11CC = 0;
}

void func_612(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_119(3791, 4294967295, 0);
	iVar1 = func_613(iParam0);
	if (iVar1 != 4294967295)
	{
		unk_0x5D96D8530B3D0904(&iVar0, iVar1);
		func_117(3791, iVar0, 4294967295, 1, 0);
	}
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return 4294967295;
}

void func_614(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (Global_18D84D[iVar0 /*615*/].f_B.f_B5 != iParam0)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_B5 = iParam0;
	}
}

void func_615(int iParam0)
{
	if (Global_26B66F.f_1404.f_154 != iParam0)
	{
		Global_26B66F.f_1404.f_154 = iParam0;
	}
}

int func_616()
{
	return Global_26B66F.f_1404.f_154;
}

void func_617(int iParam0)
{
	if (Global_26B66F.f_1404.f_153 != iParam0)
	{
		Global_26B66F.f_1404.f_153 = iParam0;
	}
}

int func_618()
{
	return Global_26B66F.f_1404.f_153;
}

void func_619(int iParam0)
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_20 = iParam0;
}

int func_620()
{
	return Local_83[unk_0x57270EE11514DC67() /*4*/].f_2;
}

int func_621()
{
	if (func_622(151) || func_295())
	{
		return 1;
	}
	return 0;
}

int func_622(int iParam0)
{
	if (!func_136() && !func_28(unk_0xD803B885F5E47A62(), 1))
	{
		if (!func_35(unk_0xD803B885F5E47A62()))
		{
			if (func_295())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

void func_623(int iParam0, int iParam1)
{
	Local_83[iParam0 /*4*/] = iParam1;
}

int func_624()
{
	return 1;
}

int func_625()
{
	return Local_82;
}

int func_626(int iParam0)
{
	return Local_83[iParam0 /*4*/];
}

int func_627()
{
	var uVar0;
	
	func_632(&uVar0);
	if (Global_140856 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_631())
	{
		return 1;
	}
	if (Global_2594CA)
	{
		return 1;
	}
	if (func_630())
	{
		return 1;
	}
	if (func_629(159))
	{
		if (!func_628())
		{
			return 1;
		}
	}
	if (func_629(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_550() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_550()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_628()
{
	return Global_2564C8.f_256;
}

int func_629(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_630()
{
	return Global_258C08;
}

bool func_631()
{
	return Global_2564C8.f_251;
}

void func_632(var uParam0)
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
					func_633(iVar0);
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

void func_633(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_9(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_634(iVar2, &bVar3))
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

int func_634(int iParam0, var uParam1)
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

void func_635()
{
	SYSTEM::WAIT(0);
}

void func_636()
{
	func_336();
	if (func_9(func_37(), 0, 1))
	{
		func_577(func_37(), 1f, 1, 0);
		func_45(func_46(func_37()), 0);
	}
	Global_19AA04 = func_10();
	func_637(1, 0);
	unk_0x10FAF14A60A0DBE1();
}

void func_637(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_14DB79.f_1.f_6C != 0)
	{
		Global_14DB79.f_1.f_6C = 0;
	}
	Global_14DB79.f_1.f_6D = 4294967295;
	Global_14DB79.f_1.f_6E = 4294967295;
	if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 167 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 168)
	{
		func_691();
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 4);
	}
	if ((func_122() && iParam1 != 0) && Global_40001.f_4255)
	{
		if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 190 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 192)
		{
			func_671(unk_0xD803B885F5E47A62(), iParam1, 1, 0);
		}
	}
	if (((Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 164 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 208) || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 250) || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 237)
	{
		unk_0x15EA7F4313456B1D(3, true);
		unk_0x15EA7F4313456B1D(5, true);
	}
	if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 != 4294967295)
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 = 4294967295;
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 14) && !func_426(unk_0xD803B885F5E47A62()))
		{
			func_546(0);
		}
	}
	else if (func_669(unk_0xD803B885F5E47A62()) != 4294967295)
	{
		func_619(4294967295);
	}
	func_668(func_10());
	if (func_206(16))
	{
		func_521(16);
	}
	func_665(0);
	func_614(4294967295);
	func_664();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_663(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_660(iVar1);
		iVar1++;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0))
	{
		unk_0x51B096AAC60548C1(1f);
		unk_0x34D79252800B23FF(5);
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 5))
	{
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 5);
	}
	iVar2 = func_659();
	if ((func_458(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_658(4294967295);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_121(iVar2))
	{
		func_655(4294967295, 1);
	}
	else if (((((func_654(iVar2) || func_653(iVar2)) || func_652(iVar2)) || func_109(iVar2)) || func_108(iVar2)) || func_107(iVar2))
	{
	}
	else
	{
		func_655(4294967295, 1);
	}
	func_298(19);
	func_298(20);
	func_298(21);
	func_298(22);
	func_298(27);
	func_521(3);
	func_521(4);
	func_521(7);
	func_651();
	if (func_35(unk_0xD803B885F5E47A62()))
	{
		func_604(0);
	}
	func_298(29);
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 = func_10();
	if (Global_26B66F.f_1404.f_29 != 0)
	{
		Global_26B66F.f_1404.f_29 = 0;
	}
	if (bParam0)
	{
		func_522();
	}
	if (!func_426(unk_0xD803B885F5E47A62()))
	{
		func_544();
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 6))
	{
		unk_0x15EA7F4313456B1D(3, true);
		unk_0x15EA7F4313456B1D(5, true);
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 6);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 7))
	{
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 7);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 8))
	{
		func_650("IMPEXP_SELFDES", 0);
		func_640("IMPEXP_SELFDES");
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 8);
	}
	func_638(iVar2, 0);
}

void func_638(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 9))
		{
			unk_0x8BC9595FD2792B5D(func_639(iParam0));
			unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 9);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 9))
	{
		unk_0x8910D3D58E0132B8(func_639(iParam0));
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 9);
	}
}

char* func_639(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_640(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_1B416.f_3738[iVar0 /*104*/])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar0 /*104*/]), sParam0))
			{
				if (Global_1B416.f_3738[iVar0 /*104*/].f_18 == 2)
				{
				}
				else
				{
					func_642();
					Global_1B416.f_3738[iVar0 /*104*/].f_63[Global_4C1E] = 0;
					if (func_641(iVar0))
					{
					}
					else
					{
						Global_1B416.f_3738[iVar0 /*104*/].f_18 = 0;
						Global_1B416.f_3738[iVar0 /*104*/].f_1C = 0;
						Global_1B416.f_3738[iVar0 /*104*/].f_1D = 0;
					}
					unk_0xD59AE843FA2C6B40(Global_1B416.f_3738[iVar0 /*104*/].f_10);
				}
			}
		}
		iVar0++;
	}
}

int func_641(int iParam0)
{
	if ((Global_1B416.f_3738[iParam0 /*104*/].f_63[0] == 1 || Global_1B416.f_3738[iParam0 /*104*/].f_63[1] == 1) || Global_1B416.f_3738[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_642()
{
	if (func_649(14))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[0 /*29*/])
			{
				Global_4C1E = 0;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[1 /*29*/])
			{
				Global_4C1E = 1;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_1B416.f_6D8D[2 /*29*/])
			{
				Global_4C1E = 2;
			}
			else
			{
				Global_4C1E = 0;
			}
		}
	}
	else
	{
		Global_4C1E = func_643();
		if (Global_4C1E == 145)
		{
			Global_4C1E = 3;
		}
		if (Global_12B4E)
		{
			Global_4C1E = 3;
		}
		if (Global_4C1E > 3)
		{
			Global_4C1E = 3;
		}
	}
}

var func_643()
{
	func_644();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_644()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_647(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_646(unk_0x16F2683693E537C9());
			if (func_645(iVar0) && (!func_649(14) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_645(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_645(int iParam0)
{
	return iParam0 < 3;
}

int func_646(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_647(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_647(int iParam0)
{
	if (func_645(iParam0))
	{
		return func_648(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_648(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_649(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_650(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x2EBF5002C6B6A06C(&(Global_1B416.f_3738[iVar0 /*104*/])))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_3738[iVar0 /*104*/]), sParam0))
			{
				if (Global_1B416.f_3738[iVar0 /*104*/].f_18 == 0)
				{
				}
				Global_1B416.f_3738[iVar0 /*104*/].f_18 = 1;
				if (Global_1B416.f_3738[iVar0 /*104*/].f_19 == 1)
				{
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[0] == 1)
					{
						Global_1B416.f_36DE[0 /*20*/].f_11 = 0;
					}
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[1] == 1)
					{
						Global_1B416.f_36DE[1 /*20*/].f_11 = 0;
					}
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[2] == 1)
					{
						Global_1B416.f_36DE[2 /*20*/].f_11 = 0;
					}
					if (Global_1B416.f_3738[iVar0 /*104*/].f_63[3] == 1)
					{
						Global_1B416.f_36DE[3 /*20*/].f_11 = 0;
					}
					Global_1B416.f_3738[iVar0 /*104*/].f_19 = 0;
					if (iParam1 == 1)
					{
						Global_1B416.f_3738[iVar0 /*104*/].f_1B = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_651()
{
	if (func_560(unk_0xD803B885F5E47A62()))
	{
		func_298(25);
	}
}

int func_652(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_653(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_654(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

void func_655(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_659();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			if (func_59(unk_0xD803B885F5E47A62()) == unk_0xD803B885F5E47A62())
			{
				Global_265EAE.f_5D[func_657(iParam0)] = 1;
			}
		}
		iVar0 = func_657(159);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(157);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(148);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(164);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(142);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(152);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(166);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(170);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(173);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(179);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(200);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(201);
		if (func_656(iVar0, Global_40001.f_313E, bParam1))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(182);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(183);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(185);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(186);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(180);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(195);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(197);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(198);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(207);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(208);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(209);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(214);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(215);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(216);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(217);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(218);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(219);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(220);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(221);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_656(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_36(unk_0xD803B885F5E47A62(), 19) && !func_36(unk_0xD803B885F5E47A62(), 20)) && !func_36(unk_0xD803B885F5E47A62(), 9))
		{
			return 0;
		}
	}
	if (Global_265EAE.f_5D[iParam0] == 1 && func_399(&(Global_265EAE[iParam0 /*2*/])))
	{
		if (func_599(&(Global_265EAE[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_265EAE.f_5D[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_657(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return 4294967295;
}

void func_658(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_659();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			Global_265EAE.f_5D[func_657(iParam0)] = 1;
		}
		iVar0 = func_657(155);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(163);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(160);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(153);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(162);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(154);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(171);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(172);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(199);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(194);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(193);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(210);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(205);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(189);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_657(211);
		if (func_656(iVar0, Global_40001.f_313F, 0))
		{
			func_407(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_659()
{
	char* sVar0;
	
	sVar0 = unk_0xBB0808A181D4745C();
	if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_660(int iParam0)
{
	if (!func_661(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_151[iParam0 /*3*/], func_662(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_151[iParam0 /*3*/] = { func_662() };
	}
	if (!func_661(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_144[iParam0 /*3*/], func_662(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_144[iParam0 /*3*/] = { func_662() };
	}
}

bool func_661(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_662()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_663(int iParam0)
{
	if (!func_661(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_96[iParam0 /*3*/], func_662(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_96[iParam0 /*3*/] = { func_662() };
	}
	if (!func_661(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_7D[iParam0 /*3*/], func_662(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_7D[iParam0 /*3*/] = { func_662() };
	}
}

void func_664()
{
	struct<20> Var0;
	
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Global_18040E = { Var0 };
	Global_18040E.f_D = func_10();
	if (unk_0xEAE0D21A50E6C7F4(Global_1801E0, 3))
	{
		unk_0x0674E58A79778E99(&Global_1801E0, 3);
	}
}

void func_665(bool bParam0)
{
	if (bParam0)
	{
		if (!func_47(unk_0xD803B885F5E47A62(), 14))
		{
			func_667(14);
		}
	}
	else if (func_47(unk_0xD803B885F5E47A62(), 14))
	{
		func_666(14);
	}
}

void func_666(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_5), iParam0);
}

void func_667(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_5), iParam0);
}

void func_668(int iParam0)
{
	if (func_29(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xD803B885F5E47A62() != iParam0)
		{
			if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1E4 != iParam0)
			{
				Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1E4 = iParam0;
				if (iParam0 != func_10())
				{
				}
			}
		}
	}
}

int func_669(int iParam0)
{
	if (func_670(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_20;
	}
	return 4294967295;
}

int func_670(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295 || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295))
	{
		return 1;
	}
	return 0;
}

void func_671(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_265(iParam0, iParam1) && func_690(iParam0, iParam1))
	{
		iVar0 = func_264(iParam0, iParam1);
		func_675(iVar0, bParam2, bParam3);
		func_672(iVar0, 1);
	}
}

void func_672(int iParam0, bool bParam1)
{
	if (!func_674(iParam0))
	{
		return;
	}
	func_248(func_673(iParam0), bParam1, 4294967295, 1);
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_6 = bParam1;
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_674(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_675(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_689(unk_0xD803B885F5E47A62(), iParam0);
	if (!bParam1)
	{
		func_688(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_265A43[iParam0];
		iVar0 = func_687(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1993C9 = 4294967295;
		}
		func_686(iParam0, 0, bParam2);
	}
	else if (func_684(iParam0, bParam2))
	{
		iVar0 = func_683(iVar2, 0);
		iVar3 = func_682(unk_0xD803B885F5E47A62(), iVar2);
		iVar4 = func_681(iVar2, bParam2);
		iVar5 = func_683(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_680(iVar2) && func_679(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_688(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_678(unk_0xD803B885F5E47A62(), iVar2) > 0)
		{
			func_677(iParam0, (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2 - (func_681(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_683(iVar2, bParam2) / func_678(unk_0xD803B885F5E47A62(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_680(iVar2) && func_679(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_676(unk_0xD803B885F5E47A62(), iVar2, iVar0, bParam2);
}

void func_676(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (func_255(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_184507[iParam0 /*876*/].f_112.f_101 = iParam2;
				}
				else
				{
					Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_677(int iParam0, int iParam1)
{
	if (iParam0 != 4294967295 && iParam1 != Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2)
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_678(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_255(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_679(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_255(iParam1) && func_680(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_B;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_680(int iParam0)
{
	return func_148(iParam0) == 5;
}

int func_681(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_148(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_40001.f_4236;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_423B;
			}
			break;
		
		case 3:
			uVar0 = Global_40001.f_4235;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_423A;
			}
			break;
		
		case 4:
			uVar0 = Global_40001.f_4234;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_4239;
			}
			break;
		
		case 0:
			uVar0 = Global_40001.f_4232;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_4237;
			}
			break;
		
		case 2:
			uVar0 = Global_40001.f_4233;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_4238;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_40001.f_5252;
				if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_40001.f_5253;
				}
			}
			else
			{
				uVar0 = Global_40001.f_5242;
				if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_40001.f_5243;
				}
			}
			break;
	}
	return uVar0;
}

int func_682(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_255(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] == iParam1)
			{
				return Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_683(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_148(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_40001.f_4223;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_422C);
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_4231);
			}
			break;
		
		case 3:
			iVar0 = Global_40001.f_4224;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_422B);
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_4230);
			}
			break;
		
		case 4:
			iVar0 = Global_40001.f_4225;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_422A);
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_422F);
			}
			break;
		
		case 0:
			iVar0 = Global_40001.f_4226;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_4228);
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_422D);
			}
			break;
		
		case 2:
			iVar0 = Global_40001.f_4227;
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_4229);
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_422E);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_40001.f_524F;
			}
			else
			{
				iVar0 = Global_40001.f_523F;
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_5250);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_5240);
				}
			}
			if (func_263(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_40001.f_5251);
				}
				else
				{
					iVar0 = (iVar0 - Global_40001.f_5241);
				}
			}
			if (func_679(unk_0xD803B885F5E47A62(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_684(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_249(15384, 4294967295, 4294967295);
	}
	return func_249(func_685(iParam0), 4294967295, 4294967295);
}

int func_685(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_686(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_248(15384, bParam1, 4294967295, 1);
		return;
	}
	func_248(func_685(iParam0), bParam1, 4294967295, 1);
}

int func_687(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_265A43[iParam0];
	iVar1 = func_689(unk_0xD803B885F5E47A62(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_265A4A;
	}
	if (func_680(iVar1))
	{
		if (func_679(unk_0xD803B885F5E47A62(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_688(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_265A4A = iParam1;
		return;
	}
	Global_265A43[iParam0] = iParam1;
}

int func_689(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_255(Global_184507[iParam0 /*876*/].f_112.f_B7[iParam1 /*12*/]))
	{
		uVar0 = Global_184507[iParam0 /*876*/].f_112.f_B7[iParam1 /*12*/];
	}
	return uVar0;
}

int func_690(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_265(iParam0, iParam1))
	{
		iVar0 = func_264(iParam0, iParam1);
		if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_4 > 0 && Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_691()
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 28);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 29);
	func_692(24);
}

void func_692(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_693(struct<21> Param0)
{
	func_742(func_743(Param0), Param0);
	unk_0x3A4967AE7C71F999(0);
	func_739(0, 4294967295, 0);
	unk_0x9752E7BAEABA939E(&Local_82, 11);
	unk_0x35B62793EAE9ADDF(&Local_83, 129);
	unk_0x256D93AFAE851A7A(0);
	func_694(0, 0, 0);
	return 1;
}

void func_694(int iParam0, int iParam1, bool bParam2)
{
	func_738();
	if (func_58(unk_0xD803B885F5E47A62()))
	{
		func_700(1);
	}
	if ((iParam0 != 0 && unk_0x40B8C182D63932FC(iParam1)) && func_699(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x5D96D8530B3D0904(&Global_198C66, 0);
				break;
			}
	}
	if (!func_136() && !func_28(unk_0xD803B885F5E47A62(), 1))
	{
		if (func_300())
		{
			func_545(3);
		}
	}
	func_545(4);
	if (func_95(0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 = func_11();
	}
	if (func_92(iParam0))
	{
		func_698();
		Global_198C86.f_12 = func_697(func_60());
	}
	else if (func_110(func_669(unk_0xD803B885F5E47A62())))
	{
		func_696();
		Global_198CBC.f_12 = func_697(func_60());
	}
	if (bParam2)
	{
		if (!func_295())
		{
			func_546(1);
		}
	}
	func_695();
}

void func_695()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_14DB79.f_216[iVar0 /*42*/].f_1 = func_10();
		Global_14DB79.f_216[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_696()
{
	struct<63> Var0;
	
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Var0.f_35 = 4294967295;
	Var0.f_36 = 4294967295;
	Var0.f_37 = 4294967295;
	Var0.f_38 = 4294967295;
	Var0.f_39 = 4294967295;
	Var0.f_3A = 4294967295;
	Var0.f_3B = 4294967295;
	Var0.f_3C = 4294967295;
	Var0.f_3D = 4294967295;
	Var0.f_3E = 4294967295;
	Global_198CBC = { Var0 };
	Global_198CBC.f_18 = 0;
	Global_198CBC.f_19 = 0;
	Global_198CBC.f_11 = 0;
}

int func_697(int iParam0)
{
	if (func_28(iParam0, 1))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1C3;
	}
	return 4294967295;
}

void func_698()
{
	struct<54> Var0;
	
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_F = 4294967295;
	Var0.f_10 = 4294967295;
	Var0.f_11 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	Var0.f_14 = 4294967295;
	Var0.f_15 = 4294967295;
	Var0.f_16 = 4294967295;
	Var0.f_17 = 4294967295;
	Var0.f_18 = 4294967295;
	Var0.f_19 = 4294967295;
	Var0.f_1A = 4294967295;
	Var0.f_1B = 4294967295;
	Var0.f_1C = 4294967295;
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Var0.f_27 = 4294967295;
	Var0.f_28 = 4294967295;
	Var0.f_29 = 4294967295;
	Var0.f_2A = 4294967295;
	Var0.f_2B = 4294967295;
	Var0.f_2C = 4294967295;
	Var0.f_2D = 4294967295;
	Var0.f_2E = 4294967295;
	Var0.f_2F = 4294967295;
	Var0.f_30 = 4294967295;
	Var0.f_31 = 4294967295;
	Var0.f_32 = 4294967295;
	Var0.f_33 = 4294967295;
	Var0.f_34 = 4294967295;
	Var0.f_35 = 4294967295;
	Global_198C86 = { Var0 };
	Global_198C86.f_1D = 0;
	Global_198C86.f_1E = 0;
	Global_198C86.f_11 = 0;
}

int func_699(int iParam0, bool bParam1)
{
	return func_48(unk_0xD803B885F5E47A62(), iParam0, bParam1);
}

void func_700(bool bParam0)
{
	int iVar0;
	
	func_692(33);
	func_692(34);
	func_692(35);
	func_692(36);
	func_692(37);
	func_692(38);
	func_692(39);
	func_692(40);
	func_692(43);
	func_692(41);
	func_692(54);
	func_692(42);
	func_692(47);
	func_737(23);
	func_737(24);
	func_692(92);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 2);
	func_736();
	func_731();
	func_726();
	func_721();
	func_710();
	func_706();
	func_702();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_26B66F.f_1404.f_E[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_701(3))
	{
		func_737(3);
	}
	else if (func_701(4))
	{
		func_737(4);
	}
	else if (func_701(5))
	{
		func_737(5);
	}
	else if (func_701(6))
	{
		func_737(6);
	}
	else if (func_701(7))
	{
		func_737(7);
	}
	else if (((((((((((((((((func_701(0) || func_701(1)) || func_701(2)) || func_701(8)) || func_701(9)) || func_701(10)) || func_701(11)) || func_701(12)) || func_701(13)) || func_701(14)) || func_701(15)) || func_701(16)) || func_701(17)) || func_701(18)) || func_701(19)) || func_701(20)) || func_701(21)) || func_701(22))
	{
		func_737(8);
		func_737(0);
		func_737(1);
		func_737(2);
		func_737(9);
		func_737(10);
		func_737(11);
		func_737(12);
		func_737(13);
		func_737(14);
		func_737(15);
		func_737(16);
		func_737(17);
		func_737(18);
		func_737(19);
		func_737(20);
		func_737(21);
		func_737(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_26B66F.f_1404.f_E[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_701(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_E[iVar0], iVar1);
}

void func_702()
{
	if (func_704())
	{
		func_703(0);
		func_703(1);
		func_703(2);
		func_703(3);
	}
}

void func_703(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_21[iVar0]), iVar1);
}

int func_704()
{
	if (((func_705(0) || func_705(1)) || func_705(2)) || func_705(3))
	{
		return 1;
	}
	return 0;
}

bool func_705(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_21[iVar0], iVar1);
}

void func_706()
{
	if (func_708())
	{
		func_707(4);
		func_707(5);
		func_707(6);
		func_707(7);
	}
}

void func_707(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_1F[iVar0]), iVar1);
}

int func_708()
{
	if (((func_709(4) || func_709(5)) || func_709(6)) || func_709(7))
	{
		return 1;
	}
	return 0;
}

bool func_709(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_1F[iVar0], iVar1);
}

void func_710()
{
	int iVar0;
	
	if (func_720())
	{
		func_719(8);
		func_719(9);
		func_719(10);
		func_719(12);
		func_719(13);
		func_719(14);
		func_719(19);
		func_719(20);
		func_719(21);
		func_719(22);
		func_719(23);
		func_719(24);
		func_719(25);
		func_719(26);
		func_719(15);
		func_719(16);
		func_719(17);
		func_719(18);
		func_719(35);
		func_719(45);
		func_719(46);
		if (func_718(11))
		{
			func_719(11);
			iVar0 = func_119(7226, 4294967295, 0);
			unk_0x5D96D8530B3D0904(&iVar0, 2);
			func_117(7226, iVar0, 4294967295, 1, 0);
		}
	}
	if (func_718(48))
	{
		if (func_716(151, 3))
		{
			func_714(151, 3);
		}
		func_719(48);
	}
	if (func_718(49))
	{
		if (func_716(152, 3))
		{
			func_714(152, 3);
		}
		func_719(49);
	}
	if (func_718(50))
	{
		if (func_716(153, 3))
		{
			func_714(153, 3);
		}
		func_719(50);
	}
	if (func_718(51))
	{
		if (func_716(func_711(), 3))
		{
			func_714(func_711(), 3);
		}
		func_719(51);
	}
}

int func_711()
{
	if (func_713())
	{
		func_712(154, Global_4C1E, 1);
	}
	return 154;
}

void func_712(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_18[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_18[iParam1] = iParam2;
	}
}

int func_713()
{
	int iVar0;
	
	iVar0 = func_27(unk_0xD803B885F5E47A62());
	if (((iVar0 != unk_0xD803B885F5E47A62() && iVar0 != func_10()) && unk_0x40B8C182D63932FC(iVar0)) && iVar0 != 4294967295)
	{
		return 1;
	}
	return 0;
}

void func_714(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_75[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_715(iParam0, iVar0, 0);
			func_712(iParam0, iVar0, 0);
		}
	}
}

void func_715(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_706[iParam0 /*29*/].f_C[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_1B416.f_6D8D[iParam0 /*29*/].f_C[iParam1] = iParam2;
	}
}

int func_716(int iParam0, int iParam1)
{
	if (func_717(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_717(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_706[iParam0 /*29*/].f_C[iParam1];
}

bool func_718(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_1A[iVar0], iVar1);
}

void func_719(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_1A[iVar0]), iVar1);
}

int func_720()
{
	if (((((((((((((((((((((func_718(8) || func_718(9)) || func_718(10)) || func_718(12)) || func_718(11)) || func_718(13)) || func_718(14)) || func_718(19)) || func_718(20)) || func_718(21)) || func_718(22)) || func_718(23)) || func_718(24)) || func_718(25)) || func_718(26)) || func_718(15)) || func_718(16)) || func_718(17)) || func_718(18)) || func_718(35)) || func_718(45)) || func_718(46))
	{
		return 1;
	}
	return 0;
}

void func_721()
{
	if (func_725())
	{
		func_724(0);
		func_724(1);
		func_724(2);
		func_724(3);
		func_724(4);
		func_724(5);
		if (func_723(32))
		{
			if (func_716(func_722(), 3))
			{
				func_714(func_722(), 3);
			}
			func_724(32);
		}
	}
}

int func_722()
{
	if (func_713())
	{
		func_712(12, Global_4C1E, 1);
	}
	return 12;
}

bool func_723(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_17[iVar0], iVar1);
}

void func_724(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_17[iVar0]), iVar1);
}

int func_725()
{
	if ((((func_723(1) || func_723(0)) || func_723(2)) || func_723(4)) || func_723(5))
	{
		return 1;
	}
	return 0;
}

void func_726()
{
	if (func_730())
	{
		func_729(0);
		func_729(1);
		func_729(2);
		func_729(3);
		func_729(4);
		func_729(5);
		func_729(6);
		func_729(7);
		if (func_728(8))
		{
			func_729(8);
		}
		if (func_728(15))
		{
			if (func_716(func_727(), 3))
			{
				func_714(func_727(), 3);
			}
			func_729(15);
		}
	}
}

int func_727()
{
	if (func_713())
	{
		func_712(20, Global_4C1E, 1);
	}
	return 20;
}

bool func_728(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_15[iVar0], iVar1);
}

void func_729(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_15[iVar0]), iVar1);
}

int func_730()
{
	if ((((((((func_728(0) || func_728(1)) || func_728(2)) || func_728(3)) || func_728(4)) || func_728(5)) || func_728(6)) || func_728(7)) || func_728(8))
	{
		return 1;
	}
	return 0;
}

void func_731()
{
	if (func_735())
	{
		func_734(0);
		func_734(1);
		func_734(2);
		func_734(3);
		func_734(4);
		func_734(5);
		func_734(6);
		func_734(7);
		func_734(8);
		func_734(9);
		func_734(10);
		func_734(11);
		func_734(12);
		if (func_733(13))
		{
			if (func_716(func_732(), 3))
			{
				func_714(func_732(), 3);
			}
			func_734(13);
		}
	}
}

int func_732()
{
	if (func_713())
	{
		func_712(76, Global_4C1E, 1);
	}
	return 76;
}

bool func_733(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_13[iVar0], iVar1);
}

void func_734(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_13[iVar0]), iVar1);
}

int func_735()
{
	if ((((((((((((func_733(0) || func_733(1)) || func_733(2)) || func_733(3)) || func_733(4)) || func_733(5)) || func_733(6)) || func_733(7)) || func_733(8)) || func_733(9)) || func_733(10)) || func_733(11)) || func_733(12))
	{
		return 1;
	}
	return 0;
}

void func_736()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_26B66F.f_1404.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_737(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_E[iVar0]), iVar1);
}

void func_738()
{
	struct<14> Var0;
	
	Global_198C74 = { Var0 };
	Global_198C74.f_E = 0;
	Global_198C74.f_F = 0;
}

int func_739(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_741();
			}
			else
			{
				return 0;
			}
		}
		if (!func_740())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_741();
					}
					else
					{
						return 0;
					}
				}
				if (func_631())
				{
					if (!bParam2)
					{
						func_741();
					}
					else
					{
						return 0;
					}
				}
				if (func_629(157))
				{
					if (!bParam2)
					{
						func_741();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_741();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > 4294967295)
	{
		Global_1406F5 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_741();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_741();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_740()
{
	return Global_140856;
}

void func_741()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_742(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_741();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_10);
}

int func_743(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

