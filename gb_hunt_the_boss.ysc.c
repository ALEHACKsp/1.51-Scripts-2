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
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94[4] = { 0, 0, 0, 0 };
	var uLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	vector3 vLocal_98 = { 0f, 0f, 0f };
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<22> Local_107 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_108[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<21> Local_109 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
		if (!func_907(ScriptParam_109))
		{
			func_859();
		}
	}
	while (true)
	{
		func_858();
		if (func_851())
		{
			func_859();
		}
		if (func_847(1))
		{
			func_859();
		}
		switch (func_846(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_845() == 1)
				{
					func_844(1);
					func_828();
				}
				break;
			
			case 1:
				if (func_845() == 1)
				{
					func_32();
				}
				else if (func_845() == 3)
				{
					func_844(3);
				}
				break;
			
			case 3:
				func_859();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			if (func_845() != 3 && func_31())
			{
				func_30(3);
			}
			switch (func_845())
			{
				case 0:
					if (func_23())
					{
						func_30(1);
					}
					break;
				
				case 1:
					if (func_1())
					{
						func_30(3);
					}
					break;
				
				case 3:
					func_859();
					break;
				}
		}
	}
}

int func_1()
{
	var uVar0;
	bool bVar1;
	
	func_22();
	switch (Local_107.f_1)
	{
		case 0:
			if (!func_21(&(Local_107.f_A)))
			{
				func_20(&(Local_107.f_A), 0, 0);
			}
			else if (func_19(&(Local_107.f_A), Global_40001.f_30C9, 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_107.f_2), 4);
				func_18(2);
			}
			if (!func_17(Local_107.f_7))
			{
				if (func_13((Global_40001.f_30CE - 1), &uVar0, 1123024896, 0))
				{
					func_18(1);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 1))
			{
				func_18(2);
			}
			if (func_12(Local_107.f_5) || func_10(Local_107.f_5, 1, 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_107.f_2), 2);
				func_18(2);
			}
			break;
		
		case 1:
			if (!func_21(&(Local_107.f_C)))
			{
				func_20(&(Local_107.f_C), 0, 0);
			}
			else
			{
				if (!func_21(&(Local_107.f_10)))
				{
					if (!func_13(Global_40001.f_30CE, &uVar0, 1123024896, 0))
					{
						func_9(&(Local_107.f_10), 0, 0);
						unk_0x5D96D8530B3D0904(&(Local_107.f_2), 6);
					}
				}
				else if (!func_13(Global_40001.f_30CE, &uVar0, 1123024896, 0))
				{
					if (func_19(&(Local_107.f_10), 20000, 0))
					{
						unk_0x5D96D8530B3D0904(&(Local_107.f_2), 2);
					}
				}
				else
				{
					func_8(&(Local_107.f_10));
					func_9(&(Local_107.f_12), 0, 0);
					unk_0x0674E58A79778E99(&(Local_107.f_2), 6);
				}
				if (func_21(&(Local_107.f_12)))
				{
					if (func_19(&(Local_107.f_12), 5000, 0))
					{
						func_8(&(Local_107.f_12));
					}
				}
				bVar1 = func_7();
				if (func_19(&(Local_107.f_C), Global_40001.f_30CA, 0) || bVar1)
				{
					func_18(2);
					if (!bVar1)
					{
						unk_0x5D96D8530B3D0904(&(Local_107.f_2), 0);
					}
					else
					{
						func_2();
					}
				}
			}
			if (func_12(Local_107.f_5) || func_10(Local_107.f_5, 1, 0))
			{
				unk_0x5D96D8530B3D0904(&(Local_107.f_2), 2);
				func_18(2);
			}
			break;
		
		case 2:
			if (!func_21(&(Local_107.f_E)))
			{
				func_20(&(Local_107.f_E), 0, 0);
			}
			else if (func_19(&(Local_107.f_E), 15000, 0))
			{
				func_18(3);
			}
			break;
		
		case 3:
			return 1;
	}
	return 0;
}

void func_2()
{
	struct<14> Var0;
	struct<14> Var1;
	struct<14> Var2;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 5))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 3))
		{
			Var0 = 1975453628;
			Var0.f_1 = unk_0xD803B885F5E47A62();
			Var0.f_2 = 772451189;
			Var0.f_A = func_6();
			func_3(Var0, func_4());
			unk_0x5D96D8530B3D0904(&(Local_107.f_2), 5);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0))
		{
			Var1 = 1975453628;
			Var1.f_1 = unk_0xD803B885F5E47A62();
			Var1.f_2 = 2272341434;
			func_3(Var1, func_4());
			unk_0x5D96D8530B3D0904(&(Local_107.f_2), 5);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 2) || unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 1))
		{
			Var2 = 1975453628;
			Var2.f_1 = unk_0xD803B885F5E47A62();
			Var2.f_2 = 2642171004;
			func_3(Var2, func_4());
			unk_0x5D96D8530B3D0904(&(Local_107.f_2), 5);
		}
	}
}

void func_3(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 1975453628;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Param0, 14, iParam13);
	}
}

int func_4()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_5(iVar2, 0, 0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[iVar1 /*3*/].f_2, 0))
			{
				unk_0x5D96D8530B3D0904(&uVar0, iVar2);
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_5(int iParam0, bool bParam1, bool bParam2)
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

int func_6()
{
	return Local_107.f_6;
}

int func_7()
{
	if ((((unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0) || unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 1)) || unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 2)) || unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 3)) || unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 4))
	{
		return 1;
	}
	return 0;
}

void func_8(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_9(var uParam0, bool bParam1, bool bParam2)
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

int func_10(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_11())
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

int func_11()
{
	return 4294967295;
}

bool func_12(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4 != 0;
}

int func_13(int iParam0, var uParam1, float fParam2, bool bParam3)
{
	int iVar0;
	float fVar1;
	
	iVar0 = unk_0x9539D44F3E4492F6(func_16());
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		return 0;
	}
	*uParam1 = func_15(iVar0, Local_107.f_7, 0);
	if (*uParam1 > IntToFloat(iParam0))
	{
		return 0;
	}
	fVar1 = unk_0xEE9925602B29903C(iVar0);
	*uParam1 = func_14(*uParam1, fVar1);
	if (fVar1 > fParam2 && !bParam3)
	{
		return 0;
	}
	return 1;
}

float func_14(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_15(int iParam0, vector3 vParam1, bool bParam2)
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

int func_16()
{
	return Local_107.f_5;
}

int func_17(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)
{
	Local_107.f_1 = iParam0;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
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

void func_20(var uParam0, bool bParam1, bool bParam2)
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

bool func_21(var uParam0)
{
	return uParam0->f_1;
}

void func_22()
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 1))
	{
		if (!unk_0x40B8C182D63932FC(func_16()))
		{
			unk_0x5D96D8530B3D0904(&(Local_107.f_2), 1);
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 1) && !unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 2))
	{
		iVar0 = unk_0x7B9C1F53FE442D06(func_16());
		if (iVar0 >= 0 && iVar0 < 32)
		{
			if (unk_0xEAE0D21A50E6C7F4(vLocal_108[iVar0 /*3*/].f_2, 11))
			{
				unk_0x5D96D8530B3D0904(&(Local_107.f_2), 2);
				if (Local_107.f_1 == 0)
				{
					func_18(3);
				}
			}
		}
	}
}

int func_23()
{
	vector3 vVar0[4];
	var uVar1[4];
	float fVar2;
	int iVar3;
	int iVar4;
	
	Local_107.f_5 = func_29();
	Local_107.f_6 = func_11();
	unk_0xCB466C2A425A9168(&(Local_107.f_14), &(Local_107.f_15));
	vVar0[0 /*3*/] = { -1976.481f, -638.13f, 4.6219f };
	vVar0[1 /*3*/] = { 2306.744f, -400.686f, 86.3213f };
	vVar0[2 /*3*/] = { 3505.623f, 3787.041f, 28.9708f };
	vVar0[3 /*3*/] = { -1976.225f, 4546.3f, 56.0401f };
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		uVar1[iVar3] = func_15(unk_0x16F2683693E537C9(), vVar0[iVar3 /*3*/], 1);
		iVar3++;
	}
	fVar2 = uVar1[0];
	iVar4 = 1;
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		if (uVar1[iVar3] < fVar2)
		{
			fVar2 = uVar1[iVar3];
			iVar4 = iVar3 + 1;
		}
		iVar3++;
	}
	Local_107.f_3 = iVar4;
	Local_107.f_7 = { func_24(Local_107.f_3) };
	return 1;
}

Vector3 func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0xDD0E7998AE8AD485();
	switch (iParam0)
	{
		case 1:
			iVar1 = 6;
			iVar4 = 0;
			iVar5 = 7;
			break;
		
		case 2:
			iVar1 = 6;
			iVar4 = 8;
			iVar5 = 7;
			break;
		
		case 3:
			iVar1 = 5;
			iVar4 = 16;
			iVar5 = 6;
			break;
		
		case 4:
			iVar1 = 4;
			iVar4 = 24;
			iVar5 = 5;
			break;
	}
	unk_0x3E6F97B7F1FE6EA8(iVar0);
	iVar2 = unk_0x702241284A8D71E0(0, iVar1);
	iVar3 = func_28(2951, 4294967295, 0);
	if (iVar5 > 1)
	{
		if (unk_0xEAE0D21A50E6C7F4(iVar3, iVar4))
		{
			iVar6 = iVar4 + 1;
			while (iVar6 <= (iVar4 + 1 + (iVar5 - 1)))
			{
				if (unk_0xEAE0D21A50E6C7F4(iVar3, iVar6))
				{
					if (iVar6 - iVar4 + 1) >= (iVar5 - 1)
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = (iVar6 - iVar4 + 1) + 1;
					}
					iVar6 = (iVar4 + 1 + (iVar5 - 1));
				}
				iVar6++;
			}
		}
	}
	iVar3 = 0;
	unk_0x5D96D8530B3D0904(&iVar3, (iVar4 + 1 + iVar2));
	unk_0x5D96D8530B3D0904(&iVar3, iVar4);
	func_25(2951, iVar3, 4294967295, 1, 0);
	Local_107.f_4 = iVar3;
	switch (iParam0)
	{
		case 1:
			switch (iVar2)
			{
				case 0:
					return -472.415f, -1689.474f, 17.9477f;
				
				case 1:
					return -1654.092f, 213.143f, 59.6413f;
				
				case 2:
					return -1008.389f, -1020.496f, 1.1503f;
				
				case 3:
					return -604.266f, -142.684f, 38.0086f;
				
				case 4:
					return -1700.562f, -322.726f, 49.0851f;
				
				case 5:
					return -1158.28f, -383.876f, 50.7161f;
				
				case 6:
					return -1191.066f, -1491.259f, 3.3797f;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar2)
			{
				case 0:
					return 160.142f, -1761.704f, 28.0984f;
				
				case 1:
					return 1097.841f, -554.319f, 54.7365f;
				
				case 2:
					return 191.932f, 124.653f, 96.9401f;
				
				case 3:
					return 323.693f, -867.527f, 28.1726f;
				
				case 4:
					return 1386.79f, -1689.002f, 61.0964f;
				
				case 5:
					return 968.623f, -3067.462f, 4.9008f;
				
				case 6:
					return 928.85f, -2270.156f, 29.5096f;
				
				default:
			}
			break;
		
		case 3:
			switch (iVar2)
			{
				case 0:
					return 1667.876f, 3710.527f, 33.0008f;
				
				case 1:
					return 2459.918f, 4827.391f, 34.4214f;
				
				case 2:
					return 1506.714f, 6513.564f, 19.8804f;
				
				case 3:
					return 2501.049f, 2639.483f, 42.5508f;
				
				case 4:
					return 2658.239f, 1542.729f, 23.4847f;
				
				case 5:
					return 1415.427f, 1819.726f, 102.3258f;
				
				default:
			}
			break;
		
		case 4:
			switch (iVar2)
			{
				case 0:
					return -194.476f, 6316.824f, 30.5625f;
				
				case 1:
					return -660.505f, 5677.562f, 30.7898f;
				
				case 2:
					return -1557.125f, 4561.964f, 18.5454f;
				
				case 3:
					return -159.803f, 2713.044f, 54.3232f;
				
				case 4:
					return -3240.385f, 1106.345f, 1.5823f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1407E9;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_26(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 4294967295))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_29()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23;
}

void func_30(int iParam0)
{
	Local_107 = iParam0;
}

int func_31()
{
	if (Global_26B66F.f_1404.f_28)
	{
		Global_26B66F.f_1404.f_28 = 0;
		return 1;
	}
	return 0;
}

void func_32()
{
	bLocal_96 = func_5(func_16(), 0, 1);
	func_824();
	func_760();
	func_759();
	func_752();
	func_732();
	func_727();
	func_706();
	func_684();
	func_674();
	switch (vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 0:
			if (func_673())
			{
				func_666(0);
			}
			else if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0))
			{
				func_666(6);
			}
			break;
		
		case 1:
			if (func_673())
			{
				func_666(5);
				func_633(2);
				if (bLocal_96)
				{
					if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 8))
					{
						func_631();
						unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 8);
					}
				}
				if (!func_630(unk_0xD803B885F5E47A62(), 0))
				{
					func_629(unk_0xD803B885F5E47A62(), 0);
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 6))
				{
					func_666(4);
				}
			}
			else if (bLocal_96)
			{
				if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0))
				{
					func_666(3);
					func_633(1);
				}
				else
				{
					func_633(0);
					if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0))
					{
						func_666(8);
					}
					else
					{
						func_666(1);
					}
					if (func_628(unk_0x57270EE11514DC67()))
					{
						func_625();
						func_585();
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 7))
			{
				func_562(4294967295, 0, 0, 4294967295, 0, 0);
				unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 7);
			}
			func_437(&(Global_14DB79.f_216), &Global_14DB79, 28, &(Global_14DB79.f_1), &(Global_14DB79.f_75), 4294967295, 0, 0);
			break;
		
		case 2:
			if (!func_664(unk_0xD803B885F5E47A62(), func_16(), 1))
			{
				if (!func_436(unk_0xD803B885F5E47A62(), 19))
				{
					func_315();
					return;
				}
			}
			if (func_673())
			{
				if (func_630(unk_0xD803B885F5E47A62(), 0))
				{
					func_314(unk_0xD803B885F5E47A62(), 0);
				}
				if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 11))
				{
					func_859();
					return;
				}
			}
			func_86();
			func_315();
			if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0))
			{
				if (func_673())
				{
					func_633(10);
				}
				else if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0))
				{
					func_633(11);
				}
				else
				{
					func_633(6);
				}
				func_82(Local_107.f_5);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 1))
			{
				if (func_628(unk_0x57270EE11514DC67()))
				{
					if (!func_664(unk_0xD803B885F5E47A62(), Local_107.f_5, 1))
					{
						func_633(7);
					}
				}
				func_82(0);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 2))
			{
				if (func_673())
				{
					func_633(12);
				}
				else if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0))
				{
					func_633(13);
				}
				else if (func_628(unk_0x57270EE11514DC67()))
				{
					func_633(14);
				}
				func_82(0);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 3))
			{
				if (func_673())
				{
					if (func_81())
					{
						func_633(9);
					}
					else
					{
						func_633(8);
					}
				}
				else if (Local_107.f_6 == unk_0xD803B885F5E47A62())
				{
					if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0))
					{
						func_633(15);
					}
					else
					{
						func_633(3);
					}
				}
				else if (func_628(unk_0x57270EE11514DC67()))
				{
					if (func_81())
					{
						func_633(17);
					}
					else
					{
						func_633(4);
					}
				}
				func_82(Local_107.f_6);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 4))
			{
				if (func_673())
				{
					func_633(16);
				}
				func_82(0);
			}
			if (func_33(&uLocal_82, 1, 0))
			{
				func_844(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_33(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_80(29);
	if ((*uParam0 > 0 && !func_79()) && func_63(unk_0xD803B885F5E47A62()) != 0)
	{
		if (!func_60())
		{
			func_59();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_21(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0, 0);
			}
			else if (func_19(&(uParam0->f_3), 1000, 0))
			{
				unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 2);
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 0);
					func_20(&(uParam0->f_5), 0, 0);
				}
				func_20(&(uParam0->f_1), 0, 0);
				func_58(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_21(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_48(iParam2);
				func_58(uParam0, 2);
			}
			break;
		
		case 2:
			func_48(0);
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_34(func_35(0)))
				{
					unk_0xA37A90C62806D848(1);
				}
				func_58(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 1);
				unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 2);
				func_58(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 1);
			unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_34(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

char* func_35(int iParam0)
{
	if (((func_46(unk_0xD803B885F5E47A62()) || func_43(unk_0xD803B885F5E47A62())) || func_39()) || iParam0)
	{
		if (func_43(unk_0xD803B885F5E47A62()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_36(func_38()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_36(int iParam0)
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
	return func_37(iParam0, 0);
	return 0;
}

int func_37(int iParam0, int iParam1)
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

int func_38()
{
	return Global_192FD0;
}

bool func_39()
{
	return (func_42() && func_40(func_29()));
}

bool func_40(int iParam0)
{
	return func_41(iParam0, 1);
}

int func_41(int iParam0, int iParam1)
{
	if (iParam0 != func_11())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_11())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_42()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 148;
}

bool func_43(int iParam0)
{
	return func_37(func_44(iParam0), 0);
}

int func_44(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 4294967295;
}

int func_45(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

bool func_46(int iParam0)
{
	return func_47(func_44(iParam0));
}

int func_47(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 148 && func_41(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23, 1))
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

void func_48(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0))
	{
		if (((((((((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 2)) && func_5(unk_0xD803B885F5E47A62(), 1, 1)) && !Global_12061) && !Global_E545) && !unk_0x757EF87A33649210()) && !func_436(unk_0xD803B885F5E47A62(), 22)) && func_63(unk_0xD803B885F5E47A62()) != 0) && !func_56(func_57())) && !func_46(unk_0xD803B885F5E47A62())) && !func_55(func_44(unk_0xD803B885F5E47A62()))) && !func_54(func_44(unk_0xD803B885F5E47A62())))
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 1);
			func_53(func_35(iParam0), 4294967295);
			func_49(1);
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0);
		}
	}
}

void func_49(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_50(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_79())
	{
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_50(bool bParam0)
{
	return func_51(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_51(int iParam0, bool bParam1)
{
	return func_52(iParam0, bParam1, 1);
}

int func_52(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_41(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_11() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_53(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam1);
}

int func_54(int iParam0)
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

int func_55(int iParam0)
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

int func_56(int iParam0)
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

int func_57()
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

void func_58(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_59()
{
	Global_25920E = 1;
}

int func_60()
{
	if (((((((func_44(unk_0xD803B885F5E47A62()) == 170 || func_44(unk_0xD803B885F5E47A62()) == 219) || func_44(unk_0xD803B885F5E47A62()) == 221) || func_44(unk_0xD803B885F5E47A62()) == 220) || func_44(unk_0xD803B885F5E47A62()) == 216) || func_44(unk_0xD803B885F5E47A62()) == 215) || func_44(unk_0xD803B885F5E47A62()) == 214) || func_44(unk_0xD803B885F5E47A62()) == 218)
	{
		return 1;
	}
	if (func_61(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_62(int iParam0)
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

int func_63(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_78(iParam0) && !func_77(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 8));
	bVar2 = func_76(iParam0);
	uVar3 = func_75();
	bVar4 = func_68();
	if ((bVar1 && (func_67(iParam0) || func_66(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_65(iParam0)) && !func_64(iParam0)))
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

bool func_64(int iParam0)
{
	return func_436(iParam0, 19);
}

int func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_436(iParam0, 9);
	}
	return 0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

int func_68()
{
	if ((func_436(unk_0xD803B885F5E47A62(), 21) || func_436(unk_0xD803B885F5E47A62(), 22)) || func_73())
	{
		return 1;
	}
	if (func_69())
	{
		func_80(22);
		return 1;
	}
	return 0;
}

int func_69()
{
	if (func_45(unk_0xD803B885F5E47A62(), 0))
	{
		if (((func_75() && !func_72()) || func_71(unk_0xD803B885F5E47A62(), 21)) || func_71(unk_0xD803B885F5E47A62(), 25))
		{
			return 1;
		}
		else
		{
			func_70(27);
		}
	}
	return 0;
}

void func_70(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

bool func_71(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

bool func_72()
{
	return Global_1406A2.f_1;
}

bool func_73()
{
	return func_74(358, 4294967295);
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_276C68[iParam0 /*3*/][func_26(iParam1)];
	if (unk_0x89484FAA0691E684(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

bool func_75()
{
	return Global_1406A2;
}

bool func_76(int iParam0)
{
	return func_436(iParam0, 20);
}

bool func_77(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 2);
}

int func_78(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18D84D[iVar0 /*615*/] != 4294967295;
	}
	return 0;
}

bool func_79()
{
	return Global_2537E2.f_AA3[0 /*80*/].f_1 != 0;
}

void func_80(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

int func_81()
{
	if (Local_107.f_6 == func_11() || Local_107.f_5 == func_11())
	{
		return 0;
	}
	if (!func_664(Local_107.f_6, Local_107.f_5, 0))
	{
		return 0;
	}
	return 1;
}

void func_82(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 6))
	{
		if (iParam0 != func_11())
		{
			func_83(0, iParam0);
		}
		else
		{
			func_83(0, func_11());
		}
		unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 6);
	}
}

void func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_11())
	{
		if (unk_0x40B8C182D63932FC(iParam1))
		{
			if (iParam1 == unk_0xD803B885F5E47A62())
			{
				iVar0 = 1;
			}
			else if (func_84(iParam1, unk_0xD803B885F5E47A62()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_5(unk_0xD803B885F5E47A62(), 1, 1))
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			Global_26B66F.f_1404.f_17F = unk_0xDD0E7998AE8AD485();
		}
	}
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_11() && iParam1 != func_11())
	{
		iVar0 = func_85(iParam0);
		if (iVar0 != func_11())
		{
			return iVar0 == func_85(iParam1);
		}
	}
	return 0;
}

int func_85(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_11();
}

void func_86()
{
	struct<20> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = 4294967295;
	Var0.f_12 = 4294967295;
	Var0.f_13 = 4294967295;
	if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 5))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 3))
		{
			if (unk_0xD803B885F5E47A62() == func_6())
			{
				if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0))
				{
					func_87(164, 0, &Var0, 0);
				}
				else
				{
					func_87(164, 1, &Var0, 0);
				}
			}
			else
			{
				func_87(164, 0, &Var0, 0);
			}
			unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 5);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0))
		{
			if (func_664(unk_0xD803B885F5E47A62(), func_16(), 1))
			{
				func_87(164, 1, &Var0, 0);
			}
			else
			{
				func_87(164, 0, &Var0, 0);
			}
			unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 5);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 2) || unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 1))
		{
			func_87(164, 0, &Var0, 0);
			unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 5);
		}
	}
}

void func_87(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	
	func_312(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_311(iParam0, uParam2->f_D, bParam3));
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
		iVar0 = (iVar0 + func_310(iParam0, bParam3));
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
	if (func_308(iParam0))
	{
		if (bParam1)
		{
			if (func_307(unk_0xD803B885F5E47A62()) > 0)
			{
				func_306();
			}
			else
			{
				func_305();
			}
		}
		else
		{
			func_304();
		}
	}
	func_288(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_286(iParam0, uParam2, &iVar0, &iVar5);
	func_261(iParam0, uParam2, &iVar0, &iVar5);
	func_258(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_241(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_26B66F.f_1404.f_17E = iVar4;
	}
	else
	{
		Global_26B66F.f_1404.f_17E = iVar5;
	}
	iVar8 = func_29();
	if (iVar8 != func_11() && iParam0 != 148)
	{
		if (func_240(unk_0xD803B885F5E47A62(), 0))
		{
			if (!func_664(unk_0xD803B885F5E47A62(), iVar8, 1))
			{
				func_194(&iVar0, 1);
			}
		}
	}
	func_189(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_198C74.f_A = iVar1;
		func_188();
		func_138(0, unk_0x16F2683693E537C9(), "", 3419251281, 1626430110, iVar1, 1, 4294967295, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_198C74.f_9 = iVar0;
		func_111(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_110(iParam0, iVar0);
		if (func_109(iParam0))
		{
			if (func_108(iParam0) > 4294967295)
			{
				func_107(func_108(iParam0), iVar0);
			}
		}
		Global_2594A0 = iVar0;
		func_9(&Global_258DD8, 0, 0);
	}
	if (func_65(unk_0xD803B885F5E47A62()) || func_76(unk_0xD803B885F5E47A62()))
	{
		func_98(iParam0);
	}
	if (func_47(iParam0))
	{
		Global_198C86.f_D = iVar0;
		Global_198C86.f_E = iVar1;
	}
	if (func_55(iParam0))
	{
		Global_198CBC.f_D = iVar0;
		Global_198CBC.f_E = iVar1;
	}
	if (func_97(iParam0))
	{
		Global_198CFB.f_C = iVar0;
		Global_198CFB.f_D = iVar1;
	}
	if (func_96(iParam0))
	{
		Global_198D27.f_C = iVar0;
		Global_198D27.f_D = iVar1;
	}
	if (func_95(iParam0))
	{
		Global_198D5D.f_C = iVar0;
		Global_198D5D.f_D = iVar1;
	}
	if (func_54(iParam0))
	{
		if (func_94(iParam0))
		{
			Global_198DAF.f_C = iVar0;
			Global_198DAF.f_D = iVar1;
		}
		else if (func_90(iParam0))
		{
			Global_198DE5.f_C = iVar0;
			Global_198DE5.f_D = iVar1;
		}
	}
	if (func_89(iParam0))
	{
		Global_198E39.f_C = iVar0;
		Global_198E39.f_D = iVar1;
	}
	if (func_88(iParam0))
	{
		Global_198E84.f_10 = iVar0;
		Global_198E84.f_11 = iVar1;
	}
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_89(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_90(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_91(func_92(unk_0xD803B885F5E47A62()))))
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0)
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

int func_92(int iParam0)
{
	if (func_44(iParam0) == 237 || func_44(iParam0) == 250)
	{
		return func_93(iParam0);
	}
	return 4294967295;
}

int func_93(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 4294967295;
}

int func_94(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_96(int iParam0)
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

int func_97(int iParam0)
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

void func_98(int iParam0)
{
	if (func_106(unk_0xD803B885F5E47A62()) && func_105())
	{
		if (func_104(iParam0))
		{
			func_101(10146, 4294967295);
		}
		else if (func_100(iParam0))
		{
			func_101(10148, 4294967295);
		}
		else if (func_37(iParam0, 1))
		{
			func_101(10149, 4294967295);
		}
		else if (func_99(iParam0))
		{
			func_101(10150, 4294967295);
		}
	}
}

int func_99(int iParam0)
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

int func_100(int iParam0)
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

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_28(iParam0, func_26(iParam1), 0);
	iVar0++;
	if (!func_103(iParam0))
	{
		func_25(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_102(iParam0, iVar0, iParam1, 1);
	}
}

void func_102(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_26(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_152DD4[func_26(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_152DDA[func_26(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_152DE0[func_26(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_152DE6[func_26(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_152DEC[func_26(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_152DB6[func_26(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_152DBC[func_26(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_152DC2[func_26(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_152DC8[func_26(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_152DCE[func_26(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_152D98[func_26(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_152D9E[func_26(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_152DA4[func_26(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_152DAA[func_26(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_152DB0[func_26(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_152DF2[func_26(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_152DF8[func_26(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_152DFE[func_26(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_152E04[func_26(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_152E0A[func_26(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_152E10[func_26(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_152E16[func_26(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_152E1C[func_26(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_152E22[func_26(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2775D1[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2775D1[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2775D1[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2775D1[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_277666[func_26(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_152E28[func_26(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_152E2E[func_26(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_152E34[func_26(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_152E3A[func_26(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_152E40[func_26(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_27761A[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_27761A[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_27761A[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_27761A[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_27761A[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_277669[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_277669[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_277669[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_277669[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_277669[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_277679[0 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_277679[1 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_277679[2 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_277679[3 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_277679[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_27761A[5 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2775D1[4 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_277689[func_26(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_277692[func_26(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27768C[func_26(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_277695[func_26(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27768F[func_26(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_277698[func_26(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27769B[func_26(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_27761A[6 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2775D1[5 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_27761A[7 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2775D1[6 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_27761A[8 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2775D1[7 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_27761A[9 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2775D1[8 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_27761A[10 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2775D1[9 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_27761A[11 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2775D1[10 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_27761A[12 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2775D1[11 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_27761A[13 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2775D1[12 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_27761A[14 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2775D1[13 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_27761A[15 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2775D1[14 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_27761A[16 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2775D1[15 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_27761A[17 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2775D1[16 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2775D1[17 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2775D1[18 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2775D1[19 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2775D1[20 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_27769E[func_26(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2776A1[func_26(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2776A4[func_26(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2776A7[func_26(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2776AA[func_26(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2776AD[func_26(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2776B0[func_26(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2776B3[func_26(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2776B6[func_26(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2776B9[func_26(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2776BC[func_26(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2776BF[func_26(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2776C2[func_26(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2776C5[func_26(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2775D1[21 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_27761A[23 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2775D1[22 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_27761A[24 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2775D1[23 /*3*/][func_26(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_103(int iParam0)
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

int func_104(int iParam0)
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

bool func_105()
{
	return func_40(unk_0xD803B885F5E47A62());
}

bool func_106(int iParam0)
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_7B, 14);
}

void func_107(int iParam0, int iParam1)
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

int func_108(int iParam0)
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

int func_109(int iParam0)
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

void func_110(int iParam0, int iParam1)
{
	if (func_106(unk_0xD803B885F5E47A62()) && func_105())
	{
		if (func_104(iParam0) && iParam1 > 0)
		{
			func_25(10147, (func_28(10147, 4294967295, 0) + iParam1), 4294967295, 1, 0);
		}
	}
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_137();
	if (iVar5 != func_11())
	{
		func_136(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_135(1);
	Var7.f_1 = 4294967295;
	switch (iParam0)
	{
		case 168:
			if (!func_134())
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_105())
			{
				if (!func_134())
				{
					Var7 = { func_133() };
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_132(Var7)), func_131(Var7), iParam4);
				}
			}
			else if (func_134())
			{
				func_119(3438960429, iParam1, &iVar4, 0, 1, 0);
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
			if (func_117())
			{
				if (!func_134())
				{
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_132(func_116(unk_0xD803B885F5E47A62()))), 5, iParam4);
				}
			}
			else if (func_134())
			{
				func_119(3438960429, iParam1, &iVar4, 0, 1, 0);
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
			if (func_117())
			{
				if (!func_134())
				{
					iVar2 = func_112(uParam5->f_10, iParam4);
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
			else if (func_134())
			{
				func_119(463142405, iParam1, &iVar4, 0, 1, 0);
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
			if (func_134())
			{
				func_119(1407278493, iParam1, &iVar4, 0, 1, 0);
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
			if (func_117())
			{
				if (!func_134())
				{
					unk_0x5D421B9474B610E6(iParam1, uParam5->f_14, iParam4);
				}
			}
			else if (func_134())
			{
				func_119(3438960429, iParam1, &iVar4, 0, 1, 0);
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
			if (func_134())
			{
				func_119(3333932415, iParam1, &iVar4, 0, 1, 0);
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
			if (func_134())
			{
				func_119(1135468152, iParam1, &iVar4, 0, 1, 0);
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
			if (func_134())
			{
				func_119(3660240660, iParam1, &iVar4, 0, 1, 0);
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
			if (func_134())
			{
				func_119(1698417709, iParam1, &iVar4, 0, 1, 0);
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
				if (func_134())
				{
					func_119(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0xB0E03FD240577D6C(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_134())
			{
				func_119(2262437735, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0xB0E03FD240577D6C(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_134())
			{
				func_119(3438960429, iParam1, &iVar4, 0, 1, 0);
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

int func_112(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_115(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_113(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_113(int iParam0, int iParam1)
{
	return (func_114(iParam0) * iParam1);
}

int func_114(int iParam0)
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

float func_115(int iParam0, int iParam1)
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

int func_116(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return Global_184507[iParam0 /*876*/].f_112.f_B7[5 /*12*/];
}

bool func_117()
{
	return func_118(unk_0xD803B885F5E47A62());
}

int func_118(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_11())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0;
}

void func_119(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_134())
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
				func_120(iParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_120(iParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_120(iParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_120(iParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_120(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_134())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_27()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_127(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_126(1, iParam4);
			Global_411257 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_121(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_122(iParam0);
	}
}

void func_122(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_134())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_125(iParam0))
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
		func_123(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_123(var uParam0)
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
	func_124(&(uParam0->f_E));
	func_124(&(uParam0->f_E.f_D));
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

void func_124(var uParam0)
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

int func_125(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 1;
	}
	return 0;
}

void func_126(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0)
		{
			if (!func_134())
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
				func_128(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_128(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_130(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_129();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_129()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_130(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 4294967295)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_131(int iParam0)
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

char* func_132(int iParam0)
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

struct<2> func_133()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_C1;
}

int func_134()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

bool func_135(bool bParam0)
{
	return func_240(unk_0xD803B885F5E47A62(), bParam0);
}

void func_136(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_18D84D[iParam0 /*615*/].f_B.f_8[0];
	*uParam2 = Global_18D84D[iParam0 /*615*/].f_B.f_8[1];
}

int func_137()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

int func_138(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_139(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_139(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_149(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 3702944691 || iParam4 == 2379775567)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_145(unk_0x64430C979F516F7A(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_140(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_140(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_143(iParam0, 1) };
	if (iParam0 == func_142(unk_0x16F2683693E537C9()))
	{
		func_141(1);
	}
	func_145(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_141(int iParam0)
{
	Global_2537E2.f_763 = iParam0;
}

int func_142(int iParam0)
{
	return iParam0;
}

Vector3 func_143(int iParam0, bool bParam1)
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
	if (iParam0 == func_144(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
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

int func_144(int iParam0)
{
	return iParam0;
}

void func_145(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2537E2.f_50A[iVar1 /*30*/].f_4 = func_148(Global_2537E2.f_50A[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_2537E2.f_50A[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_50A[iVar1 /*30*/].f_3 = iParam1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_8 = iParam2;
			Global_2537E2.f_50A[iVar1 /*30*/].f_9 = func_147();
			Global_2537E2.f_50A[iVar1 /*30*/].f_A = func_146();
			StringCopy(&(Global_2537E2.f_50A[iVar1 /*30*/].f_16), sParam3, 16);
			Global_2537E2.f_50A[iVar1 /*30*/].f_1A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam4);
		}
	}
}

int func_146()
{
	if (Global_2537E2.f_763)
	{
		Global_2537E2.f_763 = 0;
		return 1;
	}
	Global_2537E2.f_763 = 0;
	return 0;
}

var func_147()
{
	var uVar0;
	
	uVar0 = Global_2537E2.f_765;
	Global_2537E2.f_765 = 1;
	return uVar0;
}

float func_148(vector3 vParam0, var uParam1, var uParam2)
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

var func_149(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_150(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_150(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_187(unk_0xD803B885F5E47A62()) || func_186(unk_0xD803B885F5E47A62()))
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
	else if (func_183() || func_182(unk_0xD803B885F5E47A62()))
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
	if (func_181(sParam2))
	{
	}
	if (func_180())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_178(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_177(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_174(0, &iVar1);
					break;
				
				case 3:
					func_174(1, &iVar1);
					break;
				
				case 1:
					func_170(&iVar1);
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
			func_169(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_161((func_168(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 4294967295)
				{
					func_169(1165, iVar1, 4294967295);
				}
				func_155(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 4294967295)
			{
				func_151((func_153(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_151((func_153(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_151(int iParam0)
{
	if (func_180())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_152(joaat("mpply_globalxp"), iParam0);
	}
}

void func_152(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_153(int iParam0)
{
	if (iParam0 > 4294967295)
	{
		if (func_5(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_154(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_154(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_154(int iParam0)
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

void func_155(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_160(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_158(func_159(&Var0));
			if (iVar1 == 0)
			{
				func_157(&Global_152D8B, iParam0);
				func_156(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 1)
			{
				func_157(&Global_152D8C, iParam0);
				func_156(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 2)
			{
				func_157(&Global_152D8D, iParam0);
				func_156(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 3)
			{
				func_157(&Global_152D8E, iParam0);
				func_156(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 4)
			{
				func_157(&Global_152D8F, iParam0);
				func_156(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_156(int iParam0, int iParam1)
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

void func_157(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_158(int iParam0)
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

int func_159(var uParam0)
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

struct<13> func_160(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_161(int iParam0, int iParam1, int iParam2)
{
	if (func_180())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2583 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_152E1C[func_26(4294967295)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_26(4294967295)])
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
		if (func_167(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_165(iParam0, 1);
		}
		func_102(639, iParam0, 4294967295, 1);
		func_25(640, func_165(iParam0, 1), 4294967295, 1, 0);
		Global_152E1C[func_26(4294967295)] = iParam0;
		func_162(3185322862, 7, 0);
	}
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_164(iParam1, iParam2))
	{
		iVar0 = func_163();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_163()
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

int func_164(int iParam0, var uParam1)
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

int func_165(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_166(iParam0, 0);
}

int func_166(int iParam0, int iParam1)
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

int func_167(int iParam0)
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

int func_168(int iParam0)
{
	if (Global_1406D3.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_26(4294967295)];
			}
			else if (func_167(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_26(4294967295)];
	}
	return 0;
}

void func_169(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_28(iParam0, func_26(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_103(iParam0))
	{
		func_25(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_102(iParam0, iVar0, iParam2, 1);
	}
}

void func_170(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_173(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_172(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_171(*iParam0, 100) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_171(*iParam0, 100) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_171(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_172(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_160(iParam0) };
		Global_26594F = { func_160(iParam1) };
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

int func_173(int iParam0, int iParam1, int iParam2)
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

void func_174(bool bParam0, int iParam1)
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
				if (func_5(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_172(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_5(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_175(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_172(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_171(*iParam1, 100) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_171(*iParam1, 100) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_175(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_176(iParam0), func_176(iParam1));
	return 0f;
}

Vector3 func_176(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_177(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_171(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_178(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_168(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_168(unk_0xD803B885F5E47A62());
		}
	}
	if (func_179(8000, 0, 0) > 0)
	{
		if (func_179(8000, 0, 0) < (iParam0 + func_168(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_179(8000, 0, 0) - func_168(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_179(int iParam0, bool bParam1, int iParam2)
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

int func_180()
{
	return 1;
}

int func_181(char* sParam0)
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

int func_182(int iParam0)
{
	return func_95(func_44(iParam0));
}

bool func_183()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_185();
	}
	return func_184(Global_440000.f_2F9AE);
}

int func_184(int iParam0)
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

bool func_185()
{
	return Global_2564C8.f_11;
}

bool func_186(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 2;
}

bool func_187(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 7;
}

void func_188()
{
	Global_25920D = 1;
}

void func_189(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_193(7))
	{
		return;
	}
	iVar0 = func_192(iParam0);
	iVar1 = func_191(iParam0);
	iVar2 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_26B66F.f_1404.f_109, unk_0x2B6E0A53779D29EA()));
	if (func_190(iParam0) != 4294967295)
	{
		if (iVar2 > func_190(iParam0))
		{
			iVar2 = func_190(iParam0);
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

int func_190(int iParam0)
{
	if (func_37(iParam0, 0) || func_100(iParam0))
	{
		return Global_40001.f_4837;
	}
	if (func_104(iParam0))
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

int func_191(int iParam0)
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
			if (!func_117())
			{
				return Global_40001.f_523D;
			}
			break;
		
		case 226:
			if (!func_117())
			{
				return Global_40001.f_5229;
			}
			break;
		
		case 227:
			if (!func_117())
			{
				return Global_40001.f_5235;
			}
			break;
		
		case 229:
			if (!func_117())
			{
				return Global_40001.f_56C1;
			}
			break;
		
		case 230:
			if (!func_117())
			{
				return Global_40001.f_5721;
			}
			break;
		
		case 233:
			if (!func_117())
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
			if (!func_117())
			{
				return Global_40001.f_5D88;
			}
			break;
		
		case 238:
			if (!func_117())
			{
				return Global_40001.f_5DF7;
			}
			break;
		
		case 249:
			if (!func_117())
			{
				return Global_40001.f_5E07;
			}
			break;
		
		case 243:
			if (!func_117())
			{
				return Global_40001.f_66C0;
			}
			break;
		
		case 158:
			if (!func_117())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_192(int iParam0)
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
			if (func_50(0))
			{
				return Global_40001.f_4663;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_50(0))
			{
				return Global_40001.f_46BE;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_50(0))
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
			if (func_50(0))
			{
				return Global_40001.f_523C;
			}
			break;
		
		case 226:
			if (func_50(0))
			{
				return Global_40001.f_5228;
			}
			break;
		
		case 227:
			if (func_50(0))
			{
				return Global_40001.f_5234;
			}
			break;
		
		case 229:
			if (func_50(0))
			{
				return Global_40001.f_56C0;
			}
			break;
		
		case 230:
			if (func_50(0))
			{
				return Global_40001.f_5720;
			}
			break;
		
		case 233:
			if (func_50(0))
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
			if (func_50(0))
			{
				return Global_40001.f_5D87;
			}
			break;
		
		case 238:
			if (func_50(0))
			{
				return Global_40001.f_5DF6;
			}
			break;
		
		case 249:
			if (func_50(0))
			{
				return Global_40001.f_5E06;
			}
			break;
		
		case 243:
			return Global_40001.f_66BC;
		
		case 158:
			if (func_50(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_193(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_2D, iParam0);
}

void func_194(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_117())
		{
			if (func_135(0))
			{
				if (!func_50(0))
				{
					if (unk_0x40B8C182D63932FC(func_137()))
					{
						if (func_239() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_239());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_237(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_199("GB_BCUT_TICK1", func_137(), iVar0, 0, 0, 1);
						}
						func_198(20);
						func_195(func_137(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_195(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_5(iParam0, 0, 1))
	{
		Var0 = 3000381556;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_197(iParam0);
		func_196(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(1, &Var0, 8, func_130(iParam0));
	}
}

void func_196(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_197(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

void func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_199(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0x3A820E495A7BA3E5(func_208(iParam1, 4294967294, 1, 0, 0));
		unk_0xD06AC7C87A34A6AD(func_206(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		func_200(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_200(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_205() || !unk_0xA14BB9332558B949()) || !func_203(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_201(iParam2);
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

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_197EBE - 1))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_202(iVar0);
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

void func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_203(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_204(4294967295, 0) == 8;
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

int func_204(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_27();
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

bool func_205()
{
	return unk_0xC146D5FBD23C6954(2532323046);
}

var func_206(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_207(&cVar0);
}

var func_207(char[4] cParam0)
{
	return cParam0;
}

int func_208(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_235(iParam0) && !bParam4)
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
	if (((func_235(unk_0xD803B885F5E47A62()) || (func_234() && func_233())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 31)) && !bParam4)
	{
		iVar1 = func_232();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 4294967295)
				{
					if (func_5(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_440000.f_2E673[iParam1] != 4294967295)
							{
								return func_230(iParam1, iParam0, 0);
							}
							else
							{
								return func_220(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_220(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_440000.f_2E673[iParam1] != 4294967295)
				{
					return func_230(iParam1, iParam0, 0);
				}
				else
				{
					return func_209(0, 4294967295, 0);
				}
			}
			else
			{
				return func_209(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_440000.f_2E673[iParam1] != 4294967295)
		{
			return func_230(iParam1, iParam0, 0);
		}
		else
		{
			return func_220(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_220(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_209(bool bParam0, int iParam1, bool bParam2)
{
	return func_210(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_210(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_219() || (func_218() && func_216())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_215(iParam2, iVar0);
		}
		else
		{
			return func_215(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_173(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_214(1);
				}
				else
				{
					return func_214(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 20))
			{
				return func_211(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_211(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_214(1);
	}
	return func_214(0);
}

int func_211(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_213(iParam0, iParam1, iParam3);
	if (func_212(Global_440000.f_2F9AE, 1))
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

int func_212(int iParam0, bool bParam1)
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

int func_213(int iParam0, int iParam1, int iParam2)
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
			if (!func_173(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_214(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_215(int iParam0, int iParam1)
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_213(iParam1, iParam0, 4);
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

bool func_216()
{
	if (func_217())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 4);
}

bool func_217()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 12);
}

bool func_218()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0);
}

int func_219()
{
	if (func_217() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_226())
			{
				iVar3 = func_225(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_223(iVar3);
				}
			}
			if ((func_222(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18)) || ((func_173(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18)))
			{
				return func_214(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 26))
			{
				return func_221(1);
			}
			else
			{
				return func_210(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_18060A == 1 && Global_180614 == 0))
			{
				return func_214(1);
			}
			else
			{
				return func_210(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_225(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_223(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_221(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_222(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_223(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_224(iParam0);
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

var func_224(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_225(int iParam0)
{
	if (!iParam0 == func_11())
	{
		if (func_240(iParam0, 1))
		{
			return Global_24E4E9.f_332.f_B[func_85(iParam0)];
		}
	}
	return 4294967295;
}

int func_226()
{
	if (((func_229() || func_228()) || func_185()) || func_227())
	{
		return 1;
	}
	return 0;
}

var func_227()
{
	return Global_2564C8.f_13;
}

var func_228()
{
	return Global_2564C8.f_10;
}

var func_229()
{
	return Global_2564C8.f_F;
}

int func_230(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_226())
	{
		iVar2 = func_225(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_223(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_11())
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
			iVar0 = func_210(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 13))
		{
			iVar0 = func_231(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 26) && !func_173(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_221(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_231(int iParam0)
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

var func_232()
{
	return Global_240006.f_2;
}

bool func_233()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 4);
}

bool func_234()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 14);
}

int func_235(int iParam0)
{
	if (func_203(iParam0, 0))
	{
		return 1;
	}
	if (func_236())
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

bool func_236()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 3);
}

void func_237(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_238(1);
	}
	else
	{
		iVar1 = func_238(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_238(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_239()
{
	return Global_40001.f_3065;
}

bool func_240(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_118(iParam0))
		{
			return 0;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_11();
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
	
	bVar18 = func_50(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_117())
		{
			iVar17 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar17 = func_137();
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
				iVar2 = func_257(Global_184507[iVar11 /*876*/].f_356, *uParam3);
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
			iVar10 = func_256(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0xD803B885F5E47A62())
				{
					func_255("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_198DAF.f_31 = *uParam3;
			if (iVar17 == unk_0xD803B885F5E47A62())
			{
				if (iVar2 > 0)
				{
					func_254(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_252(*uParam3);
				}
				iVar6 = func_251(&uVar5);
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
						func_198(140);
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
								if (func_250(iVar23))
								{
									func_242(iVar23, 1, 198210293);
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
					func_198(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_244(iParam0);
	func_243(iParam0, uVar0, iParam1, iParam2);
}

void func_243(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 3693313620;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_197(iParam0);
	func_196(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_11())
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			unk_0xFB061A86A7AC749F(1, &Var0, 8, func_130(iParam0));
		}
	}
}

int func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_249();
	iVar0 = func_247(iParam0, iVar0);
	iVar1 = Global_18D84D[func_137() /*615*/].f_B.f_1C1;
	iVar0 = (iVar0 + (iVar1 * Global_40001.f_3A6B));
	if (iVar0 < func_246())
	{
		iVar0 = func_246();
	}
	if (iVar0 > func_245())
	{
		iVar0 = func_245();
	}
	return iVar0;
}

int func_245()
{
	return Global_40001.f_3A6C;
}

int func_246()
{
	return Global_40001.f_3F03;
}

int func_247(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_307(iParam0) * func_248());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_248()
{
	return Global_40001.f_3F02;
}

var func_249()
{
	return Global_40001.f_305D;
}

int func_250(int iParam0)
{
	if (unk_0x40B8C182D63932FC(iParam0))
	{
		if (iParam0 != unk_0xD803B885F5E47A62())
		{
			if (func_664(iParam0, unk_0xD803B885F5E47A62(), 0))
			{
				if (!func_436(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_251(var uParam0)
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
			if (!func_203(iVar2, 0) && !func_664(iVar2, unk_0xD803B885F5E47A62(), 1))
			{
				iVar1++;
			}
			else if (func_203(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_252(int iParam0)
{
	func_253(iParam0, 7236);
}

void func_253(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_28(iParam1, 4294967295, 0);
	func_25(iParam1, (iVar0 + iParam0), 4294967295, 1, 0);
}

void func_254(int iParam0)
{
	func_253(iParam0, 7231);
}

int func_255(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 4294967295;
	unk_0x1E64CE678ED5F61E(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	func_200(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_256(int iParam0)
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

int func_257(struct<5> Param0, int iParam1)
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

void func_258(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_50(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_117())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_137();
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
			iVar2 = func_113(uParam1->f_10, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_112(uParam1->f_10, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_260(*iParam2) > 0)
			{
				if (iVar15 == unk_0xD803B885F5E47A62())
				{
					func_255("SMTICK_RONCUT", func_260(*iParam2));
				}
				*iParam2 = (*iParam2 - func_260(*iParam2));
			}
			if (iVar15 == unk_0xD803B885F5E47A62())
			{
				func_259(iVar2, iVar9);
				iVar6 = func_251(&uVar5);
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
						func_198(44);
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
								if (func_250(iVar20))
								{
									func_242(iVar20, 1, 1160415507);
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
					func_198(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_259(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_253(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_253(iParam1, 6117);
	}
}

int func_260(int iParam0)
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

void func_261(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_50(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_117())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_137();
		}
		if (iVar15 != 4294967295)
		{
			iVar16 = func_116(iVar15);
			iVar0 = (func_285(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_281(iVar15, iVar16, iVar1);
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
				func_275(iVar16, iVar2);
				if (func_271(iVar16) >= Global_40001.f_5067 || iVar2 >= Global_40001.f_5067)
				{
					func_262(5);
				}
				iVar6 = func_251(&uVar5);
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
						func_198(108);
					}
					else
					{
						func_198(110);
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
								if (func_250(iVar20))
								{
									func_242(iVar20, 1, 2389839094);
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
					func_198(112);
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

void func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_40001.f_505B)
			{
				if (func_264(Global_40001.f_505C))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_40001.f_505D)
			{
				if (func_264(Global_40001.f_505E))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_40001.f_505F)
			{
				if (func_264(Global_40001.f_5060))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_40001.f_5061)
			{
				if (func_264(Global_40001.f_5062))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_40001.f_5063)
			{
				if (func_264(Global_40001.f_5064))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_40001.f_5065)
			{
				if (func_264(Global_40001.f_5066))
				{
					func_255("CLOTHAWDSTRAP3", Global_40001.f_5067);
				}
			}
			break;
		
		case 6:
			if (Global_40001.f_5068)
			{
				if (func_264(Global_40001.f_5069))
				{
					func_255("CLOTHAWDSTRAP5", Global_40001.f_50ED);
				}
			}
			break;
		
		case 7:
			if (Global_40001.f_506B)
			{
				if (func_264(Global_40001.f_506C))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_40001.f_506D)
			{
				if (func_264(Global_40001.f_506E))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_40001.f_506F)
			{
				if (func_264(Global_40001.f_5070))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_40001.f_5071)
			{
				if (func_264(Global_40001.f_5072))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_40001.f_5073)
			{
				if (func_264(Global_40001.f_5074))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_40001.f_5075)
			{
				if (func_264(Global_40001.f_5076))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_40001.f_5077)
			{
				if (func_264(Global_40001.f_5078))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_40001.f_5079)
			{
				if (func_264(Global_40001.f_507A))
				{
					func_263("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_263(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
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
		Global_265942 = { func_160(unk_0xD803B885F5E47A62()) };
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
	func_200(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case 3103481304:
		case 2559625089:
			if (!func_268(15417, 4294967295, 4294967295))
			{
				func_267(15417, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case 4174055868:
		case 2887664642:
		case 2255168310:
			if (!func_268(15418, 4294967295, 4294967295))
			{
				func_267(15418, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case 2935769924:
		case 4153970748:
		case 2444324359:
			if (!func_268(15425, 4294967295, 4294967295))
			{
				func_267(15425, 1, 4294967295, 1);
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
			if (!func_268(15405, 4294967295, 4294967295))
			{
				func_267(15405, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case 3723642317:
		case 1374601256:
			if (!func_268(15393, 4294967295, 4294967295))
			{
				func_267(15393, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case 3634679186:
			if (!func_268(15409, 4294967295, 4294967295))
			{
				func_267(15409, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case 2492427392:
		case 3289780757:
		case 3868944767:
			if (!func_268(15396, 4294967295, 4294967295))
			{
				func_267(15396, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2196597796:
		case 3097998512:
		case 2980310317:
		case 3162445127:
			if (!func_268(15412, 4294967295, 4294967295))
			{
				func_267(15412, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3122223739:
		case 2792755277:
		case 1110085176:
		case 3405296186:
			if (!func_74(209, 4294967295))
			{
				func_265(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2411791819:
		case 3710352815:
		case 2557983445:
		case 4112352903:
			if (!func_268(15403, 4294967295, 4294967295))
			{
				func_267(15403, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case 3404257586:
		case 2797983601:
		case 48701978:
			if (!func_74(209, 4294967295))
			{
				func_265(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3424976530:
		case 3713826333:
		case 1827333048:
		case 3648114472:
			if (!func_268(15389, 4294967295, 4294967295))
			{
				func_267(15389, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3752338848:
		case 3424508832:
		case 420690954:
		case 3886574485:
			if (!func_74(209, 4294967295))
			{
				func_265(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_268(15398, 4294967295, 4294967295))
			{
				func_267(15398, 1, 4294967295, 1);
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
			if (!func_268(15400, 4294967295, 4294967295))
			{
				func_267(15400, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3127501824:
		case 3981548879:
		case 4091931946:
		case 2761646929:
		case 2065127290:
		case 3904886266:
			if (!func_74(209, 4294967295))
			{
				func_265(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2189358123:
		case 3596480360:
		case 917598912:
		case 939297301:
		case 4238563984:
		case 2926043467:
			if (!func_268(15408, 4294967295, 4294967295))
			{
				func_267(15408, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2430046428:
		case 3222061766:
		case 682284723:
		case 1186965403:
		case 4002266725:
		case 2226228703:
			if (!func_74(209, 4294967295))
			{
				func_265(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case 3646067695:
		case 3682843522:
			if (!func_268(15411, 4294967295, 4294967295))
			{
				func_267(15411, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case 3405772618:
		case 801334272:
			if (!func_268(15397, 4294967295, 4294967295))
			{
				func_267(15397, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case 4148261629:
			if (!func_268(15413, 4294967295, 4294967295))
			{
				func_267(15413, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case 2297277414:
		case 627387411:
		case 3447136105:
			if (!func_268(15391, 4294967295, 4294967295))
			{
				func_267(15391, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case 2731313194:
		case 1932815241:
		case 2677758273:
		case 308545041:
		case 1682427144:
			if (!func_268(15388, 4294967295, 4294967295))
			{
				func_267(15388, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case 3574885561:
		case 1626031863:
		case 2903012379:
		case 35480964:
		case 2029975158:
			if (!func_74(209, 4294967295))
			{
				func_265(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3170262904:
		case 3444874261:
		case 926585800:
		case 2461997424:
		case 1539395388:
		case 1377465778:
			if (!func_268(15401, 4294967295, 4294967295))
			{
				func_267(15401, 1, 4294967295, 1);
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
			if (!func_268(15394, 4294967295, 4294967295))
			{
				func_267(15394, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3760111810:
		case 3126392231:
		case 2927838092:
		case 3288939386:
			if (!func_74(209, 4294967295))
			{
				func_265(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3778634034:
		case 756873456:
		case 87453937:
		case 2856191972:
			if (!func_268(15406, 4294967295, 4294967295))
			{
				func_267(15406, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case 3564929588:
		case 2608307573:
		case 3200692489:
			if (!func_268(15395, 4294967295, 4294967295))
			{
				func_267(15395, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case 3324508810:
		case 1992217604:
		case 2946241204:
			if (!func_74(209, 4294967295))
			{
				func_265(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2804308795:
		case 975601953:
		case 2360410088:
		case 1786218600:
			if (!func_268(15410, 4294967295, 4294967295))
			{
				func_267(15410, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2559332058:
		case 1614208560:
		case 3260934977:
		case 2436945402:
			if (!func_268(15407, 4294967295, 4294967295))
			{
				func_267(15407, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case 3568934735:
		case 1747334867:
		case 1237632771:
			if (!func_74(209, 4294967295))
			{
				func_265(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2363349808:
		case 2469980134:
		case 236389050:
		case 1987485798:
			if (!func_74(209, 4294967295))
			{
				func_265(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2568634995:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_268(15414, 4294967295, 4294967295))
			{
				func_267(15414, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2912044766:
		case 734151492:
		case 3937330446:
		case 3272973588:
			if (!func_268(15415, 4294967295, 4294967295))
			{
				func_267(15415, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case 2528104976:
		case 479676642:
		case 2640138660:
			if (!func_268(15399, 4294967295, 4294967295))
			{
				func_267(15399, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2518176946:
		case 579562906:
		case 242920617:
		case 2929259547:
			if (!func_268(15404, 4294967295, 4294967295))
			{
				func_267(15404, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2306910001:
		case 3675212365:
		case 3075243594:
		case 3906758817:
			if (!func_74(209, 4294967295))
			{
				func_265(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case 2717995956:
		case 2087194554:
			if (!func_268(15392, 4294967295, 4294967295))
			{
				func_267(15392, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case 2889930927:
		case 3672065391:
		case 981732339:
			if (!func_268(15390, 4294967295, 4294967295))
			{
				func_267(15390, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case 3313834683:
		case 1271443068:
			if (!func_268(15402, 4294967295, 4294967295))
			{
				func_267(15402, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 4002044941:
		case 4260428506:
		case 2385980452:
		case 2509849112:
			if (!func_268(15416, 4294967295, 4294967295))
			{
				func_267(15416, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2799534611:
		case 1898518287:
		case 2029126042:
		case 2773934483:
			if (!func_74(209, 4294967295))
			{
				func_265(209, 1, 4294967295, 1);
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
			if (!func_268(15426, 4294967295, 4294967295))
			{
				func_267(15426, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3479260505:
		case 3228839791:
		case 1281631799:
		case 2775938488:
			if (!func_268(15422, 4294967295, 4294967295))
			{
				func_267(15422, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2976164949:
		case 2928217253:
		case 447234752:
		case 1996626130:
			if (!func_268(15423, 4294967295, 4294967295))
			{
				func_267(15423, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case 2313207439:
			if (!func_268(15421, 4294967295, 4294967295))
			{
				func_267(15421, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case 2655677837:
		case 3732359775:
		case 3415687675:
			if (!func_268(15427, 4294967295, 4294967295))
			{
				func_267(15427, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3375652548:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_268(15419, 4294967295, 4294967295))
			{
				func_267(15419, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case 3410686596:
		case 4208984884:
		case 1573086793:
			if (!func_268(15420, 4294967295, 4294967295))
			{
				func_267(15420, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_265(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_266())
	{
		iVar0 = Global_276C68[iParam0 /*3*/][func_26(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

int func_266()
{
	return 1;
	return 0;
}

int func_267(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_27();
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

int func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_27();
	}
	iVar1 = func_270(iParam0, iParam1);
	uVar2 = func_269(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_269(int iParam0)
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

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_27();
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

int func_271(int iParam0)
{
	int iVar0;
	
	iVar0 = func_273(iParam0);
	return func_28(func_272(iVar0), 4294967295, 0);
}

int func_272(int iParam0)
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

int func_273(int iParam0)
{
	int iVar0;
	
	if (func_274(iParam0))
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

int func_274(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_275(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_273(iParam0);
	iVar1 = func_272(iVar0);
	iVar2 = (func_28(iVar1, 4294967295, 0) + iParam1);
	func_25(iVar1, iVar2, 4294967295, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_278(9357, 4294967295, 4294967295) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iVar0 /*12*/] != 0)
			{
				iVar1 = func_272(iVar0);
				iVar3 = (iVar3 + func_28(iVar1, 4294967295, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_277(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_276(9357, iVar5, 4294967295, 1);
	}
}

var func_276(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_27();
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

int func_277(int iParam0)
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

int func_278(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	iVar1 = func_280(iParam0, iParam1);
	iVar2 = func_279(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_279(int iParam0)
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

int func_280(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_27();
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

int func_281(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_131(iParam1);
	if (func_274(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_40001.f_4240;
				if (func_282(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4245);
				}
				if (func_282(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_424A);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_40001.f_423F;
				if (func_282(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4244);
				}
				if (func_282(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4249);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_40001.f_423E;
				if (func_282(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4243);
				}
				if (func_282(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4248);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_40001.f_423C;
				if (func_282(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4241);
				}
				if (func_282(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4246);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_40001.f_423D;
				if (func_282(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4242);
				}
				if (func_282(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4247);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_40001.f_5244;
				if (func_282(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_5246);
				}
				if (func_282(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_5245);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_282(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_284(iParam0, iParam1))
	{
		iVar0 = func_283(iParam0, iParam1);
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_283(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_274(iParam1) && iParam0 != func_11())
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

int func_284(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_274(iParam1) && iParam0 != func_11())
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

int func_285(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_274(iParam1))
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

void func_286(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_105())
			{
				Var0 = { func_133() };
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
				iVar6 = func_281(unk_0xD803B885F5E47A62(), Var0, *uParam3);
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
				iVar10 = func_251(&uVar9);
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
					func_198(86);
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (func_50(0))
			{
				Var14 = { func_287(func_137()) };
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
				iVar20 = func_281(func_137(), Var14, *uParam3);
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

struct<2> func_287(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_C1;
}

void func_288(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_118(unk_0xD803B885F5E47A62()))
		{
			if (bParam1)
			{
				func_303();
			}
			func_302();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_118(unk_0xD803B885F5E47A62()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_294(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B6));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_293(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_251(&uVar2);
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
						func_198(44);
					}
				}
				func_291(*iParam3);
				func_290();
				Global_26B66F.f_1404.f_17D = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x54EABC0DD106045B())
				{
					iVar8 = iVar7;
					if (unk_0x81A93C8315C28F58(iVar8))
					{
						iVar9 = unk_0x4B2BFE4A3BC248ED(iVar8);
						if (func_250(iVar9))
						{
							func_242(iVar9, 1, 3002513507);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_118(unk_0xD803B885F5E47A62()))
		{
			func_289();
		}
	}
}

void func_289()
{
	int iVar0;
	
	iVar0 = Global_27768F[func_27()];
	iVar0++;
	func_102(3667, iVar0, 4294967295, 1);
}

void func_290()
{
	int iVar0;
	
	iVar0 = Global_277695[func_27()];
	iVar0++;
	func_102(3666, iVar0, 4294967295, 1);
}

void func_291(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_277698[func_27()];
	iVar0 = (iVar0 + iParam0);
	func_102(3668, iVar0, 4294967295, 1);
	if (func_278(7666, 4294967295, 4294967295) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_292(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_276(7666, iVar2, 4294967295, 1);
	}
}

int func_292(int iParam0)
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

var func_293(int iParam0)
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

int func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_301(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_300(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_299(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_295(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_295(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_299(unk_0x09AC81E49EA267F7(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_295(int iParam0)
{
	int iVar0;
	
	if (func_298(iParam0))
	{
		iVar0 = func_296(func_297(iParam0));
		return func_28(iVar0, 4294967295, 0);
	}
	return 0;
}

int func_296(int iParam0)
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

int func_297(int iParam0)
{
	int iVar0;
	
	if (func_298(iParam0))
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

int func_298(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_299(int iParam0)
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

int func_300(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_298(iParam0))
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

int func_301(int iParam0)
{
	int iVar0;
	
	if (func_298(iParam0))
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

void func_302()
{
	int iVar0;
	
	iVar0 = Global_27768C[func_27()];
	iVar0++;
	Global_27768C[func_27()] = iVar0;
	func_102(3665, iVar0, 4294967295, 1);
}

void func_303()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_277689[func_27()];
	iVar1 = Global_277692[func_27()];
	iVar0++;
	iVar1++;
	Global_277689[func_27()] = iVar0;
	Global_277692[func_27()] = iVar1;
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_80 = iVar1;
	func_102(3663, iVar0, 4294967295, 1);
	func_102(3664, iVar1, 4294967295, 1);
}

void func_304()
{
	if (func_117())
	{
		Global_2567E2.f_C02.f_86 = 0;
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
	}
}

void func_305()
{
	if (func_117())
	{
		if (Global_2567E2.f_C02.f_86 < 10)
		{
			Global_2567E2.f_C02.f_86++;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
		}
	}
}

void func_306()
{
	if (func_117())
	{
		if (Global_2567E2.f_C02.f_86 > 0)
		{
			Global_2567E2.f_C02.f_86 = (Global_2567E2.f_C02.f_86 - 1);
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
		}
	}
}

int func_307(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_1C;
}

int func_308(int iParam0)
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
			if (func_135(1) && !func_50(1))
			{
				if (func_309(func_137()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_309(int iParam0)
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 26);
}

int func_310(int iParam0, bool bParam1)
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

int func_311(int iParam0, bool bParam1, bool bParam2)
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
			if (func_117())
			{
				return Global_40001.f_499B;
			}
			else if (bParam1)
			{
				return Global_40001.f_499C;
			}
			break;
		
		case 188:
			if (func_117())
			{
				return Global_40001.f_49EF;
			}
			else if (bParam1)
			{
				return Global_40001.f_49F0;
			}
			break;
		
		case 225:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5238;
				}
				else
				{
					return Global_40001.f_5239;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_523A;
			}
			break;
		
		case 226:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5224;
				}
				else
				{
					return Global_40001.f_5225;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_5226;
			}
			break;
		
		case 227:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5230;
				}
				else
				{
					return Global_40001.f_5231;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_5232;
			}
			break;
		
		case 229:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_56BC;
				}
				else
				{
					return Global_40001.f_56BD;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_56BE;
			}
			break;
		
		case 230:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_571C;
				}
				else
				{
					return Global_40001.f_571D;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_571E;
			}
			break;
		
		case 233:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_58F8;
				}
				else
				{
					return Global_40001.f_58F9;
				}
			}
			else if (func_105())
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
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5D83;
				}
				else
				{
					return Global_40001.f_5D84;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_5D85;
			}
			break;
		
		case 238:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5DF2;
				}
				else
				{
					return Global_40001.f_5DF3;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_5DF4;
			}
			break;
		
		case 249:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5E02;
				}
				else
				{
					return Global_40001.f_5E03;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_5E04;
			}
			break;
		
		case 243:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_66BE;
				}
				else
				{
					return Global_40001.f_66BF;
				}
			}
			else if (func_105())
			{
				return Global_40001.f_66BE;
			}
			break;
		
		case 158:
			if (func_117() && !func_105())
			{
				if (func_309(unk_0xD803B885F5E47A62()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_105())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_312(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_313(iParam0))
	{
		if (!func_117())
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
	if (func_240(unk_0xD803B885F5E47A62(), 1))
	{
		if (func_47(iParam0))
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
	else if (func_47(iParam0))
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
	iVar0 = func_29();
	if (iVar0 != func_11())
	{
		if (func_664(unk_0xD803B885F5E47A62(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_313(int iParam0)
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

void func_314(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset");
	}
	unk_0x0674E58A79778E99(&iVar0, iParam1);
	unk_0xB7E567188872123E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset", iVar0);
}

void func_315()
{
	if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 7))
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 0))
		{
			if (func_664(unk_0xD803B885F5E47A62(), func_16(), 1))
			{
				func_316(1, 7, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
			}
			else
			{
				func_316(0, 7, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 1))
		{
			func_316(0, 8, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 2))
		{
			func_316(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 3))
		{
			if (!func_673())
			{
				if (unk_0xD803B885F5E47A62() == func_6())
				{
					if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0))
					{
						func_316(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
					}
					else
					{
						func_316(1, 1, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
					}
				}
				else
				{
					func_316(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
				}
			}
			else
			{
				func_316(0, 2, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_107.f_2, 4))
		{
			func_316(0, 7, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
		}
		else
		{
			func_316(0, 0, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
		}
		unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 7);
	}
}

void func_316(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x8CD06866876216F2())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_435(unk_0xD803B885F5E47A62());
		Global_198D8B.f_4 = func_434();
		Global_198D8B.f_5 = func_433();
		if (func_66(unk_0xD803B885F5E47A62()) || func_67(unk_0xD803B885F5E47A62()))
		{
			Global_198D8B.f_6 = 1;
		}
		else
		{
			Global_198D8B.f_6 = 0;
		}
		Global_198D8B.f_1 = func_427(bParam9);
		Global_198D8B.f_8 = unk_0xDD0E7998AE8AD485();
		Global_198D8B.f_9 = func_426(bParam0);
		Global_198D8B.f_A = iParam1;
		Global_198D8B.f_11 = Global_198D8B.f_2;
		Global_198D8B.f_12 = Global_198D8B.f_2;
		Global_198D8B.f_13 = func_425();
		Global_198D8B.f_15 = (Global_198D8B.f_8 - Global_198D8B.f_7);
		if (func_240(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198D8B.f_17 = func_426(func_50(1));
		}
		Global_198D8B.f_18 = func_424(unk_0xD803B885F5E47A62());
		Global_198D8B.f_1C = func_423(unk_0xD803B885F5E47A62());
		if (Global_198D8B.f_18 > 2)
		{
			Global_198D8B.f_18 = 2;
		}
		func_421(iVar0);
	}
	else
	{
		iVar0 = func_44(unk_0xD803B885F5E47A62());
	}
	if (func_47(iVar0))
	{
		Global_198C86.f_2 = func_434();
		Global_198C86.f_3 = func_433();
		Global_198C86.f_32 = iParam4;
		Global_198C86.f_33 = iParam5;
		Global_198C86.f_A = unk_0xDD0E7998AE8AD485();
		Global_198C86.f_14 = (Global_198C86.f_A - Global_198C86.f_9);
		Global_198C86.f_C = iParam1;
		Global_198C86.f_13 = func_416(iVar0, bParam0, func_420(bParam3));
		if (bParam0)
		{
			Global_198C86.f_B = 1;
		}
		else
		{
			Global_198C86.f_B = 0;
		}
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198C86.f_8 = 1;
		}
		else
		{
			Global_198C86.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_198C86.f_2B = 0;
			Global_198C86.f_2D = func_415(func_137(), iParam2);
			Global_198C86.f_2F = iParam7;
			Global_198C86.f_2E = iParam6;
			Global_198C86.f_34 = func_414(func_137(), iParam2);
		}
		func_412(iVar0);
	}
	else if (func_55(iVar0))
	{
		Global_198CBC.f_2 = func_434();
		Global_198CBC.f_3 = func_433();
		Global_198CBC.f_A = unk_0xDD0E7998AE8AD485();
		Global_198CBC.f_13 = (Global_198CBC.f_A - Global_198CBC.f_9);
		Global_198CBC.f_C = iParam1;
		if (bParam0)
		{
			Global_198CBC.f_B = 1;
		}
		else
		{
			Global_198CBC.f_B = 0;
		}
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198CBC.f_8 = 1;
		}
		else
		{
			Global_198CBC.f_8 = 0;
		}
		func_410(iVar0);
	}
	else if (func_97(iVar0))
	{
		Global_198CFB.f_2 = func_434();
		Global_198CFB.f_3 = func_433();
		Global_198CFB.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198CFB.f_12 = (Global_198CFB.f_9 - Global_198CFB.f_8);
		Global_198CFB.f_B = iParam1;
		Global_198CFB.f_7 = func_425();
		Global_198CFB.f_2A = func_408(func_27(), 5);
		iVar1 = unk_0xD803B885F5E47A62();
		iVar2 = func_116(iVar1);
		Global_198CFB.f_1C = iVar2;
		Global_198CFB.f_1D = func_426((func_407(iVar1) || func_406(iVar1)));
		Global_198CFB.f_1E = func_426(func_405(iVar1));
		Global_198CFB.f_20 = func_426(func_404(iVar1));
		Global_198CFB.f_21 = func_426(func_403(iVar1));
		Global_198CFB.f_22 = func_426(func_402(iVar1));
		Global_198CFB.f_23 = func_426(func_401(0, iVar1) == 1);
		Global_198CFB.f_24 = func_426(func_400(iVar1));
		Global_198CFB.f_25 = func_426(func_399(iVar1));
		Global_198CFB.f_26 = func_426(func_398(iVar1));
		Global_198CFB.f_27 = func_426(func_282(iVar1, iVar2, 0));
		Global_198CFB.f_28 = func_426(func_282(iVar1, iVar2, 2));
		Global_198CFB.f_29 = func_426(func_282(iVar1, iVar2, 1));
		if (func_397(iVar1))
		{
			Global_198CFB.f_1F = 2;
		}
		else if (func_396(iVar1))
		{
			Global_198CFB.f_1F = 1;
		}
		if (bParam0)
		{
			Global_198CFB.f_A = 1;
		}
		else
		{
			Global_198CFB.f_A = 0;
		}
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_6 = 1;
		}
		else
		{
			Global_198CFB.f_6 = 0;
		}
		Global_198CFB.f_15 = 4294967294;
		Global_198CFB.f_16 = 4294967294;
		func_394(iVar0);
	}
	else if (func_96(iVar0))
	{
		Global_198D27.f_2 = func_434();
		Global_198D27.f_3 = func_433();
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198D27.f_6 = 1;
		}
		else
		{
			Global_198D27.f_6 = 0;
		}
		Global_198D27.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198D27.f_A = func_426(bParam0);
		Global_198D27.f_B = iParam1;
		Global_198D27.f_11 = func_393(func_29());
		Global_198D27.f_12 = (Global_198D27.f_9 - Global_198D27.f_8);
		Global_198D27.f_14 = iParam8;
		Global_198D27.f_15 = 4294967294;
		Global_198D27.f_16 = 4294967294;
		Global_198D27.f_1B = func_392();
		Global_198D27.f_1D = func_28(6107, 4294967295, 0);
		Global_198D27.f_1E = func_28(6103, 4294967295, 0);
		Global_198D27.f_1F = func_28(6104, 4294967295, 0);
		Global_198D27.f_20 = func_28(6106, 4294967295, 0);
		Global_198D27.f_21 = func_28(6105, 4294967295, 0);
		Global_198D27.f_22 = func_28(6108, 4294967295, 0);
		Global_198D27.f_24 = func_426(func_50(1));
		Global_198D27.f_25 = func_390();
		func_370();
		func_368(iVar0);
	}
	else if (func_95(iVar0))
	{
		Global_198D5D.f_2 = func_434();
		Global_198D5D.f_3 = func_433();
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198D5D.f_6 = 1;
		}
		else
		{
			Global_198D5D.f_6 = 0;
		}
		Global_198D5D.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198D5D.f_A = func_426(bParam0);
		Global_198D5D.f_B = iParam1;
		Global_198D5D.f_12 = (Global_198D5D.f_9 - Global_198D5D.f_8);
		Global_198D5D.f_14 = iParam8;
		Global_198D5D.f_17 = Global_C0073;
		Global_198D5D.f_24 = Global_C0073.f_1;
		Global_198D5D.f_18 = func_28(6157, 4294967295, 0);
		Global_198D5D.f_19 = func_28(6162, 4294967295, 0);
		Global_198D5D.f_1A = func_28(6163, 4294967295, 0);
		Global_198D5D.f_1B = func_426((((func_367() || func_366()) || func_365()) || func_364(unk_0xD803B885F5E47A62())));
		Global_198D5D.f_1C = func_28(6164, 4294967295, 0);
		Global_198D5D.f_1D = func_426(func_363());
		Global_198D5D.f_23 = 4294967295;
		Global_198D5D.f_26 = 4294967295;
		Global_198D5D.f_27 = Global_198D5D.f_4;
		Global_198D5D.f_28 = Global_198D5D.f_5;
		Global_198D5D.f_29 = func_434();
		Global_198D5D.f_2A = func_426(func_50(1));
		Global_198D5D.f_2C = Global_198D5D.f_12;
		func_361(iVar0);
	}
	else if (func_90(iVar0))
	{
		if (Global_198DE5.f_2 == 4294967295)
		{
			Global_198DE5.f_2 = func_434();
		}
		if (Global_198DE5.f_3 == 4294967295)
		{
			Global_198DE5.f_3 = func_433();
		}
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198DE5.f_6 = 1;
		}
		else
		{
			Global_198DE5.f_6 = 0;
		}
		Global_198DE5.f_1 = func_427(0);
		Global_198DE5.f_7 = func_425();
		Global_198DE5.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198DE5.f_A = func_426(bParam0);
		Global_198DE5.f_B = iParam1;
		if (func_137() != 4294967295)
		{
			Global_198DE5.f_11 = func_360(func_137());
		}
		Global_198DE5.f_12 = (Global_198DE5.f_9 - Global_198DE5.f_8);
		Global_198DE5.f_13 = Global_26B66F.f_19B3;
		Global_198DE5.f_1C = func_423(unk_0xD803B885F5E47A62());
		Global_198DE5.f_1D = func_426(func_359(unk_0xD803B885F5E47A62()));
		Global_198DE5.f_1E = func_426(func_358(unk_0xD803B885F5E47A62()));
		Global_198DE5.f_1F = func_357(unk_0xD803B885F5E47A62());
		if (func_240(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198DE5.f_21 = func_426(func_50(1));
		}
		if (Global_198DE5.f_22 > 2)
		{
			Global_198DE5.f_22 = 2;
		}
		func_355(iVar0);
	}
	else if (func_94(iVar0))
	{
		Global_198DAF.f_2 = func_434();
		Global_198DAF.f_3 = func_433();
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198DAF.f_6 = 1;
		}
		else
		{
			Global_198DAF.f_6 = 0;
		}
		Global_198DAF.f_1 = func_427(0);
		Global_198DAF.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198DAF.f_A = func_426(bParam0);
		Global_198DAF.f_B = iParam1;
		Global_198DAF.f_12 = (Global_198DAF.f_9 - Global_198DAF.f_8);
		Global_198DAF.f_1C = func_423(unk_0xD803B885F5E47A62());
		if (Global_198DAF.f_1C)
		{
			Global_198DAF.f_1D = func_354(unk_0xD803B885F5E47A62());
		}
		else
		{
			Global_198DAF.f_1D = 0;
		}
		Global_198DAF.f_1E = func_338(unk_0xD803B885F5E47A62(), 4, 4294967295);
		Global_198DAF.f_1F = func_357(unk_0xD803B885F5E47A62());
		Global_198DAF.f_20 = func_426(func_337(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_21 = func_426(func_336(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_22 = func_426(func_335(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_23 = func_426(func_334(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_24 = func_333(unk_0xD803B885F5E47A62());
		Global_198DAF.f_25 = func_332(unk_0xD803B885F5E47A62());
		Global_198DAF.f_27 = func_331(unk_0xD803B885F5E47A62());
		if (func_240(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198DAF.f_29 = func_426(func_50(1));
		}
		if (Global_198DAF.f_2A > 2)
		{
			Global_198DAF.f_2A = 2;
		}
		func_329(iVar0);
	}
	else if (func_89(iVar0))
	{
		Global_198E39.f_2 = func_434();
		Global_198E39.f_3 = func_433();
		Global_198E39.f_4 = func_328(func_137());
		Global_198E39.f_5 = func_327(func_137());
		if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
		{
			Global_198E39.f_6 = 1;
		}
		else
		{
			Global_198E39.f_6 = 0;
		}
		Global_198E39.f_7 = func_425();
		Global_198E39.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198E39.f_A = func_426(bParam0);
		Global_198E39.f_B = iParam1;
		if (func_29() != 4294967295)
		{
			Global_198E39.f_11 = func_360(func_29());
		}
		Global_198E39.f_12 = (Global_198E39.f_9 - Global_198E39.f_8);
		Global_198E39.f_15 = 1;
		Global_198E39.f_16 = 1;
		Global_198E39.f_19 = func_326(unk_0xD803B885F5E47A62());
		Global_198E39.f_1B = func_426(func_325(unk_0xD803B885F5E47A62()));
		Global_198E39.f_1C = func_322(21, 4294967295);
		Global_198E39.f_1D = func_426(func_321(unk_0xD803B885F5E47A62()));
		func_319(iVar0);
	}
	else if (func_88(iVar0))
	{
		Global_198E84.f_6 = func_328(func_137());
		Global_198E84.f_7 = func_327(func_137());
		if (func_240(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198E84.f_8 = func_426(func_50(1));
		}
		Global_198E84.f_A = func_425();
		Global_198E84.f_B = 1;
		Global_198E84.f_D = (unk_0xDD0E7998AE8AD485() - Global_19FC3D);
		Global_198E84.f_E = iParam1;
		Global_198E84.f_13 = 1;
		Global_198E84.f_14 = 1;
		func_317(iVar0);
	}
	else
	{
		Global_198C74.f_6 = unk_0xDD0E7998AE8AD485();
		if (bParam0)
		{
			Global_198C74.f_7 = 1;
		}
		else
		{
			Global_198C74.f_7 = 0;
		}
		Global_198C74.f_8 = iParam1;
		if (Global_198C74.f_4 == 0)
		{
			if ((func_65(unk_0xD803B885F5E47A62()) || func_64(unk_0xD803B885F5E47A62())) || func_76(unk_0xD803B885F5E47A62()))
			{
				Global_198C74.f_4 = 1;
			}
		}
	}
}

void func_317(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x9CA4259CC8E87599(&Global_198E84);
	func_318();
}

void func_318()
{
	struct<36> Var0;
	
	Global_198E84 = { Var0 };
	Global_198E84.f_17 = 0;
	Global_198E84.f_16 = 0;
	Global_198E84.f_15 = 0;
}

void func_319(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x62CC3DEF90BBBB82(&Global_198E39);
	func_320();
}

void func_320()
{
	struct<31> Var0;
	
	Global_198E39 = { Var0 };
}

int func_321(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_171.f_2, 6);
	}
	return 0;
}

int func_322(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == 4294967295)
	{
		iVar0 = func_27();
	}
	if (iParam0 == 7 && !Global_40001.f_4258)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_324(iParam0);
		if (iVar1 == 0 && func_28(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_323(4294967295) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_423(unk_0xD803B885F5E47A62()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_152E22[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_277666[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2775D1[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_323(int iParam0)
{
	if (!Global_40001.f_5C6F)
	{
		return 0;
	}
	return func_28(7207, iParam0, 0) != 0;
}

int func_324(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return 4294967295;
}

int func_325(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_171 != 0;
	}
	return 0;
}

int func_326(int iParam0)
{
	if (func_44(iParam0) == 243)
	{
		return func_93(iParam0);
	}
	return 4294967295;
}

int func_327(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 4294967295;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_8[1];
}

int func_328(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 4294967295;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_8[0];
}

void func_329(int iParam0)
{
	unk_0x26ABE31DF89E0806(&Global_198DAF);
	func_330();
}

void func_330()
{
	struct<54> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
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
	Var0.f_1D = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
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
	Global_198DAF = { Var0 };
}

int func_331(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 12);
	}
	return 0;
}

int func_332(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 10);
	}
	return 0;
}

int func_333(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 11);
	}
	return 0;
}

bool func_334(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 4);
}

bool func_335(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 3);
}

bool func_336(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 2);
}

bool func_337(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 1);
}

int func_338(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_11() || !func_353(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_348(iParam0, iParam2);
		
		case 1:
			return func_346(iParam0, iParam2);
		
		case 3:
			return func_345(iParam0);
		
		case 2:
			return func_340(iParam0, iParam2);
		
		case 4:
			return func_339(iParam0);
		
		default:
	}
	return 0;
}

bool func_339(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 6);
}

int func_340(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_344(iParam0);
		
		case 11:
			return func_343(iParam0);
		
		case 12:
			return func_342(iParam0);
		
		case 13:
			return func_341(iParam0);
		
		default:
	}
	return 0;
}

bool func_341(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 15);
}

bool func_342(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 14);
}

bool func_343(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 13);
}

bool func_344(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 12);
}

bool func_345(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 5);
}

int func_346(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_347(iParam0);
		
		case 6:
			return func_337(iParam0);
		
		case 7:
			return func_336(iParam0);
		
		case 8:
			return func_335(iParam0);
		
		case 9:
			return func_334(iParam0);
		
		default:
	}
	return 0;
}

bool func_347(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0);
}

int func_348(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_352(iParam0);
		
		case 1:
			return func_351(iParam0);
		
		case 2:
			return func_350(iParam0);
		
		case 3:
			return func_349(iParam0);
		
		case 4:
			return func_357(iParam0);
		
		default:
	}
	return 0;
}

bool func_349(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 10);
}

bool func_350(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 9);
}

bool func_351(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 8);
}

bool func_352(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 7);
}

bool func_353(int iParam0)
{
	return (iParam0 != 4294967295 && iParam0 != 6);
}

int func_354(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_338(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_338(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_338(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_338(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_355(int iParam0)
{
	unk_0xEB3BD00621D19C22(&Global_198DE5);
	func_356();
}

void func_356()
{
	struct<39> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
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
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Var0.f_23 = 4294967295;
	Var0.f_24 = 4294967295;
	Var0.f_25 = 4294967295;
	Var0.f_26 = 4294967295;
	Global_198DE5 = { Var0 };
}

bool func_357(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 31);
}

bool func_358(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 0);
}

bool func_359(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 19);
}

var func_360(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_D3.f_6;
}

void func_361(int iParam0)
{
	unk_0xD620402A9DD91217(&Global_198D5D);
	func_362();
}

void func_362()
{
	struct<46> Var0;
	
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
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
	Global_198D5D = { Var0 };
	Global_198D5D.f_10 = 0;
}

bool func_363()
{
	return func_28(6156, 4294967295, 0) != 0;
}

int func_364(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_10F != 0;
	}
	return 0;
}

bool func_365()
{
	return func_28(6164, 4294967295, 0) == 3;
}

bool func_366()
{
	return func_28(6164, 4294967295, 0) == 2;
}

bool func_367()
{
	return func_28(6164, 4294967295, 0) == 1;
}

void func_368(int iParam0)
{
	unk_0x51EB431C1612B9CA(&Global_198D27);
	func_369();
}

void func_369()
{
	struct<54> Var0;
	
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
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
	Global_198D27 = { Var0 };
	Global_198D27.f_17 = 0;
	Global_198D27.f_18 = 0;
	Global_198D27.f_10 = 0;
}

void func_370()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = 4294967295;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_381(12));
		func_380(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_14325F[iVar1 /*141*/].f_42 != 0 && func_372(Global_14325F[iVar1 /*141*/].f_42, 1))
			{
				if (Global_26B66F.f_380 != iVar1)
				{
					if (func_371(Global_14325F[iVar1 /*141*/].f_42))
					{
						if (Global_14325F[iVar1 /*141*/].f_42 != 0)
						{
							iVar3 = Global_14325F[iVar1 /*141*/].f_42;
						}
						switch (iVar0)
						{
							case 0:
								Global_198D27.f_26 = iVar3;
								break;
							
							case 1:
								Global_198D27.f_27 = iVar3;
								break;
							
							case 2:
								Global_198D27.f_28 = iVar3;
								break;
							
							case 3:
								Global_198D27.f_29 = iVar3;
								break;
							
							case 4:
								Global_198D27.f_2A = iVar3;
								break;
							
							case 5:
								Global_198D27.f_2B = iVar3;
								break;
							
							case 6:
								Global_198D27.f_2C = iVar3;
								break;
							
							case 7:
								Global_198D27.f_2D = iVar3;
								break;
							
							case 8:
								Global_198D27.f_2E = iVar3;
								break;
							
							case 9:
								Global_198D27.f_2F = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case 2310691317:
		case 4252008158:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case 3545667823:
		case 3319621991:
		case 2594093022:
		case 3902291871:
		case 2531412055:
		case 1043222410:
		case joaat("lazer"):
		case 2908775872:
		case 1565978651:
		case 1036591958:
		case 3287439187:
		case 4262088844:
		case 2771347558:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case 3568198617:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_372(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x4DAC2AD66FE0E696(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x8CD06866876216F2()) || (iParam0 == joaat("buffalo3") && !unk_0x8CD06866876216F2())) || (iParam0 == joaat("gauntlet2") && !unk_0x8CD06866876216F2())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x8CD06866876216F2()))
	{
		if (!func_379())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x6C7B93D0F54679BE())
		{
			if (unk_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x232048AB4B0E0259(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_378() && !func_377()) && !func_376()) && !func_375()) && !func_379())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_376())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_374(iParam0))
		{
			return 0;
		}
	}
	if (!func_373(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_373(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_134())
	{
		return 1;
	}
	unk_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x437ABF4F514F6471(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_374(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_26596A)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xDD0E7998AE8AD485();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_40001.f_19C7 && !Global_40001.f_327A) && iVar1 < Global_40001.f_327B)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_40001.f_378E && iVar1 < Global_40001.f_379A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_40001.f_378A && iVar1 < Global_40001.f_3796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_40001.f_378B && iVar1 < Global_40001.f_3797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_40001.f_378C && iVar1 < Global_40001.f_3798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_40001.f_378D && iVar1 < Global_40001.f_3799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_40001.f_378F && iVar1 < Global_40001.f_379B)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_40001.f_3790 && iVar1 < Global_40001.f_3793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_40001.f_3791 && iVar1 < Global_40001.f_3794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_40001.f_3792 && iVar1 < Global_40001.f_3795)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_40001.f_41D5 && iVar1 < Global_40001.f_41B2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_40001.f_41D0 && iVar1 < Global_40001.f_41AD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_40001.f_41D4 && iVar1 < Global_40001.f_41B1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_40001.f_41D3 && iVar1 < Global_40001.f_41B0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_40001.f_41CD && iVar1 < Global_40001.f_41AA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_40001.f_41CE && iVar1 < Global_40001.f_41AB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_40001.f_41D1 && iVar1 < Global_40001.f_41AE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_40001.f_41D2 && iVar1 < Global_40001.f_41AF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_40001.f_41CF && iVar1 < Global_40001.f_41AC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_40001.f_41D7 && iVar1 < Global_40001.f_41B4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_40001.f_41D8 && iVar1 < Global_40001.f_41B5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_40001.f_41CC && iVar1 < Global_40001.f_41A9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_40001.f_41CB && iVar1 < Global_40001.f_41A8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_40001.f_41CA && iVar1 < Global_40001.f_41A7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_40001.f_41D6 && iVar1 < Global_40001.f_41B3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_40001.f_41D9 && iVar1 < Global_40001.f_41B6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_40001.f_41DA && iVar1 < Global_40001.f_41B7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_40001.f_41DB && iVar1 < Global_40001.f_41B8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_40001.f_41DC && iVar1 < Global_40001.f_41B9)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_40001.f_426F && iVar1 < Global_40001.f_4285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_40001.f_4270 && iVar1 < Global_40001.f_4286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_40001.f_4271 && iVar1 < Global_40001.f_4287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_40001.f_4272 && iVar1 < Global_40001.f_4288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_40001.f_4273 && iVar1 < Global_40001.f_4289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_40001.f_4274 && iVar1 < Global_40001.f_428A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_40001.f_4276 && iVar1 < Global_40001.f_428B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_40001.f_4277 && iVar1 < Global_40001.f_428C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_40001.f_4278 && iVar1 < Global_40001.f_428D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_40001.f_4279 && iVar1 < Global_40001.f_428E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_40001.f_427A && iVar1 < Global_40001.f_428F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_40001.f_427B && iVar1 < Global_40001.f_4290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_40001.f_427C && iVar1 < Global_40001.f_4291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_40001.f_4282 && iVar1 < Global_40001.f_4298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_40001.f_427F && iVar1 < Global_40001.f_4294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_40001.f_4280 && iVar1 < Global_40001.f_4295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_40001.f_4281 && iVar1 < Global_40001.f_4296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_40001.f_4275 && iVar1 < Global_40001.f_4297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_40001.f_4283 && iVar1 < Global_40001.f_4299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_40001.f_427D && iVar1 < Global_40001.f_4292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_40001.f_427E && iVar1 < Global_40001.f_4293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_40001.f_4284 && iVar1 < Global_40001.f_429A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_40001.f_48E3 && iVar1 < Global_40001.f_4944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_40001.f_48E4 && iVar1 < Global_40001.f_4945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_40001.f_48E5 && iVar1 < Global_40001.f_4946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_40001.f_48E6 && iVar1 < Global_40001.f_4947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_40001.f_48E7 && iVar1 < Global_40001.f_4948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_40001.f_48E8 && iVar1 < Global_40001.f_4949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_40001.f_48E9 && iVar1 < Global_40001.f_494A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_40001.f_48EA && iVar1 < Global_40001.f_494B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_40001.f_48EB && iVar1 < Global_40001.f_494C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_40001.f_48EC && iVar1 < Global_40001.f_494D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_40001.f_48ED && iVar1 < Global_40001.f_494E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_40001.f_48EE && iVar1 < Global_40001.f_494F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_40001.f_48EF && iVar1 < Global_40001.f_4950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_40001.f_48F0 && iVar1 < Global_40001.f_4951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_40001.f_48F1 && iVar1 < Global_40001.f_4952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_40001.f_48F2 && iVar1 < Global_40001.f_4953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_40001.f_48F3 && iVar1 < Global_40001.f_4954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_40001.f_48F4 && iVar1 < Global_40001.f_4955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_40001.f_48F5 && iVar1 < Global_40001.f_4956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_40001.f_48F6 && iVar1 < Global_40001.f_4957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_40001.f_48F7 && iVar1 < Global_40001.f_4958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_40001.f_48F8 && iVar1 < Global_40001.f_4959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_40001.f_48F9 && iVar1 < Global_40001.f_495A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_40001.f_48FA && iVar1 < Global_40001.f_495B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_40001.f_48FB && iVar1 < Global_40001.f_495C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_40001.f_4D1C && iVar1 < Global_40001.f_4D18)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2889029532)
	{
		if (!Global_40001.f_4D1D && iVar1 < Global_40001.f_4D19)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_40001.f_4D1E && iVar1 < Global_40001.f_4D1A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3312836369)
	{
		if (!Global_40001.f_4D1F && iVar1 < Global_40001.f_4D1B)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_40001.f_508B && iVar1 < Global_40001.f_5093)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_40001.f_508C && iVar1 < Global_40001.f_5094)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_40001.f_508D && iVar1 < Global_40001.f_5095)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_40001.f_508E && iVar1 < Global_40001.f_5096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_40001.f_508F && iVar1 < Global_40001.f_5097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_40001.f_5090 && iVar1 < Global_40001.f_5098)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 2531412055)
	{
		if (!Global_40001.f_5394 && iVar1 < Global_40001.f_53A8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3545667823)
	{
		if (!Global_40001.f_53A0 && iVar1 < Global_40001.f_53B4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3319621991)
	{
		if (!Global_40001.f_5397 && iVar1 < Global_40001.f_53AB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2594093022)
	{
		if (!Global_40001.f_53A1 && iVar1 < Global_40001.f_53B5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3902291871)
	{
		if (!Global_40001.f_5395 && iVar1 < Global_40001.f_53A9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_40001.f_53A5 && iVar1 < Global_40001.f_53B9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2908775872)
	{
		if (!Global_40001.f_53A3 && iVar1 < Global_40001.f_53B7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_40001.f_53A4 && iVar1 < Global_40001.f_53B8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_40001.f_539F && iVar1 < Global_40001.f_53B3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4262088844)
	{
		if (!Global_40001.f_53A6 && iVar1 < Global_40001.f_53BA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4252008158)
	{
		if (!Global_40001.f_53A2 && iVar1 < Global_40001.f_53B6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2310691317)
	{
		if (!Global_40001.f_539E && iVar1 < Global_40001.f_53B2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3287439187)
	{
		if (!Global_40001.f_5396 && iVar1 < Global_40001.f_53AA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2771347558)
	{
		if (!Global_40001.f_5398 && iVar1 < Global_40001.f_53AC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_40001.f_5399 && iVar1 < Global_40001.f_53AD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3296789504)
	{
		if (!Global_40001.f_539A && iVar1 < Global_40001.f_53AE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3052358707)
	{
		if (!Global_40001.f_539B && iVar1 < Global_40001.f_53AF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_40001.f_539C && iVar1 < Global_40001.f_53B0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_40001.f_539D && iVar1 < Global_40001.f_53B1)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_40001.f_5755 && iVar1 < Global_40001.f_5771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_40001.f_5756 && iVar1 < Global_40001.f_5772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2601952180)
	{
		if (!Global_40001.f_5757 && iVar1 < Global_40001.f_5773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3602674979)
	{
		if (!Global_40001.f_5758 && iVar1 < Global_40001.f_5774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2859440138)
	{
		if (!Global_40001.f_5759 && iVar1 < Global_40001.f_5775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_40001.f_575A && iVar1 < Global_40001.f_5776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_40001.f_575B && iVar1 < Global_40001.f_5777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4081974053)
	{
		if (!Global_40001.f_575C && iVar1 < Global_40001.f_5778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_40001.f_575D && iVar1 < Global_40001.f_5779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_40001.f_575E && iVar1 < Global_40001.f_577A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2445973230)
	{
		if (!Global_40001.f_575F && iVar1 < Global_40001.f_577B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_40001.f_5760 && iVar1 < Global_40001.f_577C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_40001.f_5761 && iVar1 < Global_40001.f_577D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_40001.f_5762 && iVar1 < Global_40001.f_577E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_40001.f_5763 && iVar1 < Global_40001.f_577F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3981782132)
	{
		if (!Global_40001.f_5764 && iVar1 < Global_40001.f_5780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2215179066)
	{
		if (!Global_40001.f_5765 && iVar1 < Global_40001.f_5781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_40001.f_5766 && iVar1 < Global_40001.f_5782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3884762073)
	{
		if (!Global_40001.f_5767 && iVar1 < Global_40001.f_5783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_40001.f_5768 && iVar1 < Global_40001.f_5784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2765724541)
	{
		if (!Global_40001.f_5769 && iVar1 < Global_40001.f_5785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_40001.f_576A && iVar1 < Global_40001.f_5786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2762269779)
	{
		if (!Global_40001.f_576B && iVar1 < Global_40001.f_5787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_40001.f_576C && iVar1 < Global_40001.f_5788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_40001.f_576D && iVar1 < Global_40001.f_5789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_40001.f_576E && iVar1 < Global_40001.f_578A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3903371924)
	{
		if (!Global_40001.f_576F && iVar1 < Global_40001.f_578B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4173521127)
	{
		if (!Global_40001.f_5770 && iVar1 < Global_40001.f_578C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_40001.f_5C15 && iVar1 < Global_40001.f_5C25)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_40001.f_5C16 && iVar1 < Global_40001.f_5C26)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3027423925)
	{
		if (!Global_40001.f_5C1A && iVar1 < Global_40001.f_5C2A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_40001.f_5C1D && iVar1 < Global_40001.f_5C2D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_40001.f_5C22 && iVar1 < Global_40001.f_5C32)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3035832600)
	{
		if (!Global_40001.f_5C1C && iVar1 < Global_40001.f_5C2C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_40001.f_5C14 && iVar1 < Global_40001.f_5C24)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_40001.f_5C1B && iVar1 < Global_40001.f_5C2B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3918533058)
	{
		if (!Global_40001.f_5C21 && iVar1 < Global_40001.f_5C31)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3308022675)
	{
		if (!Global_40001.f_5C20 && iVar1 < Global_40001.f_5C30)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3160260734)
	{
		if (!Global_40001.f_5C17 && iVar1 < Global_40001.f_5C27)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2174267100)
	{
		if (!Global_40001.f_5C19 && iVar1 < Global_40001.f_5C29)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4080061290)
	{
		if (!Global_40001.f_5C23 && iVar1 < Global_40001.f_5C33)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3306466016)
	{
		if (!Global_40001.f_5C1F && iVar1 < Global_40001.f_5C2F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_40001.f_5C18 && iVar1 < Global_40001.f_5C28)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3568198617)
	{
		if (!Global_40001.f_5C1E && iVar1 < Global_40001.f_5C2E)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 2306538597)
	{
		if (!Global_40001.f_5C6F && iVar1 < Global_40001.f_5C62)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_40001.f_5C70 && iVar1 < Global_40001.f_5C63)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_40001.f_5C75 && iVar1 < Global_40001.f_5C68)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_40001.f_5C74 && iVar1 < Global_40001.f_5C67)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_40001.f_5C72 && iVar1 < Global_40001.f_5C65)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_40001.f_5C78 && iVar1 < Global_40001.f_5C6B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3656405053)
	{
		if (!Global_40001.f_5C7A && iVar1 < Global_40001.f_5C6D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_40001.f_5C7B && iVar1 < Global_40001.f_5C6E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_40001.f_5C79 && iVar1 < Global_40001.f_5C6C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3874056184)
	{
		if (!Global_40001.f_5C71 && iVar1 < Global_40001.f_5C64)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_40001.f_5C73 && iVar1 < Global_40001.f_5C66)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4240635011)
	{
		if (!Global_40001.f_5C77 && iVar1 < Global_40001.f_5C6A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3987008919)
	{
		if (!Global_40001.f_5C76 && iVar1 < Global_40001.f_5C69)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == 3493417227)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == 2403970600)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == 3147997943)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == 3715219435)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == 3539435063)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == 3188846534)
	{
	}
	else if (iParam0 == 2816263004)
	{
	}
	else if (iParam0 == 2198276962)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_40001.f_657A && iVar1 < Global_40001.f_657C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3126015148)
	{
		if (!Global_40001.f_619F && iVar1 < Global_40001.f_6198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2728360112)
	{
		if (!Global_40001.f_61A0 && iVar1 < Global_40001.f_6199)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3963499524)
	{
		if (!Global_40001.f_61A1 && iVar1 < Global_40001.f_619A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_40001.f_61A2 && iVar1 < Global_40001.f_619B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4245851645)
	{
		if (!Global_40001.f_657B && iVar1 < Global_40001.f_657D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_40001.f_61A3 && iVar1 < Global_40001.f_619C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3787471536)
	{
		if (!Global_40001.f_61A4 && iVar1 < Global_40001.f_619D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4008920556)
	{
		if (!Global_40001.f_61A5 && iVar1 < Global_40001.f_619E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_40001.f_61AA && iVar1 < Global_40001.f_61BF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_40001.f_61AB && iVar1 < Global_40001.f_61C0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3353694737)
	{
		if (!Global_40001.f_61AC && iVar1 < Global_40001.f_61C1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2465530446)
	{
		if (!Global_40001.f_61AD && iVar1 < Global_40001.f_61C2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3612858749)
	{
		if (!Global_40001.f_61AE && iVar1 < Global_40001.f_61C3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_40001.f_61AF && iVar1 < Global_40001.f_61C4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_40001.f_61B0 && iVar1 < Global_40001.f_61C5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_40001.f_61B1 && iVar1 < Global_40001.f_61C6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3412338231)
	{
		if (!Global_40001.f_61B2 && iVar1 < Global_40001.f_61C7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3932816511)
	{
		if (!Global_40001.f_61B3 && iVar1 < Global_40001.f_61C8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_40001.f_61B4 && iVar1 < Global_40001.f_61C9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_40001.f_61B5 && iVar1 < Global_40001.f_61CA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2490551588)
	{
		if (!Global_40001.f_61B6 && iVar1 < Global_40001.f_61CB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_40001.f_61B7 && iVar1 < Global_40001.f_61CC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2945871676)
	{
		if (!Global_40001.f_61B8 && iVar1 < Global_40001.f_61CD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 4086055493)
	{
		if (!Global_40001.f_61B9 && iVar1 < Global_40001.f_61CE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3970348707)
	{
		if (!Global_40001.f_61BA && iVar1 < Global_40001.f_61CF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3630826055)
	{
		if (!Global_40001.f_61BB && iVar1 < Global_40001.f_61D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_40001.f_61BC && iVar1 < Global_40001.f_61D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2674840994)
	{
		if (!Global_40001.f_61BD && iVar1 < Global_40001.f_61D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3847255899)
	{
		if (!Global_40001.f_61BE && iVar1 < Global_40001.f_61D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_40001.f_6CAD && iVar1 < Global_40001.f_6CC2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_40001.f_6CAE && iVar1 < Global_40001.f_6CC3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2538945576)
	{
		if (!Global_40001.f_6CAF && iVar1 < Global_40001.f_6CC4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_40001.f_6CB0 && iVar1 < Global_40001.f_6CC5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_40001.f_6CB1 && iVar1 < Global_40001.f_6CC6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_40001.f_6CB2 && iVar1 < Global_40001.f_6CC7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_40001.f_6CB3 && iVar1 < Global_40001.f_6CC8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_40001.f_6CB4 && iVar1 < Global_40001.f_6CC9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_40001.f_6CB5 && iVar1 < Global_40001.f_6CCA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3460613305)
	{
		if (!Global_40001.f_6CB6 && iVar1 < Global_40001.f_6CCB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_40001.f_6CB7 && iVar1 < Global_40001.f_6CCC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_40001.f_6CB8 && iVar1 < Global_40001.f_6CCD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_40001.f_6CB9 && iVar1 < Global_40001.f_6CCE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_40001.f_6CBA && iVar1 < Global_40001.f_6CCF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_40001.f_6CBB && iVar1 < Global_40001.f_6CD0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_40001.f_6CBC && iVar1 < Global_40001.f_6CD1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_40001.f_6CBD && iVar1 < Global_40001.f_6CD2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_40001.f_6CBE && iVar1 < Global_40001.f_6CD3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3040635986)
	{
		if (!Global_40001.f_6CBF && iVar1 < Global_40001.f_6CD4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_40001.f_6CC0 && iVar1 < Global_40001.f_6CD5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_40001.f_6CC1 && iVar1 < Global_40001.f_6CD6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_40001.f_6CD8 && iVar1 < Global_40001.f_6CD9) && !Global_40001.f_6CAB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2334210311)
	{
		if ((!Global_40001.f_6CDB && iVar1 < Global_40001.f_6CDC) && !Global_40001.f_6CAC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3162245632)
	{
		if (!Global_40001.f_6CE0 && iVar1 < Global_40001.f_6CE3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_40001.f_6CE1 && iVar1 < Global_40001.f_6CE4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_40001.f_6CE2 && iVar1 < Global_40001.f_6CE5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2172320429)
	{
		if (!Global_40001.f_70CA && iVar1 < Global_40001.f_6F7B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2196012677)
	{
		if (!Global_40001.f_6F6D && iVar1 < Global_40001.f_6F82)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_40001.f_6F6E && iVar1 < Global_40001.f_6F74)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_40001.f_70C8 && iVar1 < Global_40001.f_6F7C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_40001.f_70C9 && iVar1 < Global_40001.f_6F7D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3381377750)
	{
		if (!Global_40001.f_6F67 && iVar1 < Global_40001.f_6F7A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3663644634)
	{
		if (!Global_40001.f_6F68 && iVar1 < Global_40001.f_6F83)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 3456868130)
	{
		if (!Global_40001.f_6F69 && iVar1 < Global_40001.f_6F79)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2484160806)
	{
		if (!Global_40001.f_6F6A && iVar1 < Global_40001.f_6F77)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2936769864)
	{
		if (!Global_40001.f_70C4 && iVar1 < Global_40001.f_6F7E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_40001.f_70C5 && iVar1 < Global_40001.f_6F7F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_40001.f_70C6 && iVar1 < Global_40001.f_6F80)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2566281822)
	{
		if (!Global_40001.f_70C7 && iVar1 < Global_40001.f_6F81)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_40001.f_6F6B && iVar1 < Global_40001.f_6F76)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_40001.f_6F6C && iVar1 < Global_40001.f_6F78)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_375()
{
	return 0;
}

int func_376()
{
	return 1;
}

int func_377()
{
	return 1;
}

int func_378()
{
	if (unk_0xC146D5FBD23C6954(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_379()
{
	int iVar0;
	
	if (unk_0x61D9362D70D2DD56())
	{
		if (unk_0x999A3BFD3E9B5D2C())
		{
			if (unk_0x5CD8D2FE4603C900())
			{
				unk_0x6FB46C25CCB7E6D5(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295);
				unk_0x5D96D8530B3D0904(&iVar0, 2);
				unk_0x5D96D8530B3D0904(&iVar0, 4);
				unk_0x5D96D8530B3D0904(&iVar0, 6);
				unk_0x5D96D8530B3D0904(&Global_19, 2);
				unk_0x5D96D8530B3D0904(&Global_19, 4);
				unk_0x5D96D8530B3D0904(&Global_19, 6);
				unk_0xCDC520E5E48E63D9(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0xE0DC536BD2AC0301())
				{
					iVar0 = unk_0x0A4C9A3D51EAE31F(866);
					unk_0x5D96D8530B3D0904(&iVar0, 0);
					unk_0x9F2BE984EBF8A0F4(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_24BC8 == 2)
	{
		return 1;
	}
	else if (Global_24BC8 == 3)
	{
		return 0;
	}
	if (unk_0xE0DC536BD2AC0301())
	{
		if (unk_0xEAE0D21A50E6C7F4(unk_0x0A4C9A3D51EAE31F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_380(int iParam0, int iParam1, bool bParam2)
{
	if (Global_40001.f_27B3)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_19801F[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0xF4CCC8CB6DE7F1AE() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = 4294967295;
	}
}

int func_381(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return 4294967295;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_324(iParam0);
		return func_389(iVar0);
	}
	return (func_382(iParam0, 4294967295) * iParam0);
}

int func_382(int iParam0, int iParam1)
{
	if (iParam0 == 4294967295)
	{
		if (iParam1 >= 1)
		{
			if (func_385(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_384(iParam1))
			{
				return 0;
			}
			else if (func_383(iParam1, 4294967295))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_100542[iParam1 /*1951*/].f_21 == 2)
				{
					return 3;
				}
				else if (Global_100542[iParam1 /*1951*/].f_21 == 6)
				{
					return 8;
				}
				else if (Global_100542[iParam1 /*1951*/].f_21 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_383(int iParam0, int iParam1)
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

int func_384(int iParam0)
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

int func_385(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_386(unk_0xD803B885F5E47A62(), 0);
	}
	if (bParam1)
	{
		if (func_386(unk_0xD803B885F5E47A62(), 0))
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

bool func_386(int iParam0, bool bParam1)
{
	if (Global_184465 != func_11())
	{
		if (!func_388(Global_184465))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xD803B885F5E47A62() != Global_184465)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_184465 /*421*/].f_C3, 24) || func_387(Global_184465))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 24);
}

int func_387(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 9);
	}
	return 0;
}

int func_388(int iParam0)
{
	if (iParam0 != func_11())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 2);
	}
	return 0;
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return 4294967295;
}

var func_390()
{
	var uVar0;
	
	uVar0 = func_391();
	if (!func_117())
	{
		if (func_137() != func_11())
		{
			uVar0 = func_424(func_137()) + 1;
		}
	}
	return uVar0;
}

int func_391()
{
	return func_424(unk_0xD803B885F5E47A62()) + 1;
}

int func_392()
{
	return func_28(6113, 4294967295, 0);
}

int func_393(int iParam0)
{
	if (func_240(iParam0, 1))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1C3;
	}
	return 4294967295;
}

void func_394(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x09B65A782EA88A3D(&Global_198CFB);
	func_395();
}

void func_395()
{
	struct<44> Var0;
	
	Global_198CFB = { Var0 };
	Global_198CFB.f_17 = 0;
	Global_198CFB.f_18 = 0;
	Global_198CFB.f_10 = 0;
}

bool func_396(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 12);
}

bool func_397(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 13);
}

int func_398(int iParam0)
{
	if (iParam0 != func_11())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 12) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 13)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_399(int iParam0)
{
	if (iParam0 != func_11())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 1)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_400(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (((((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 3) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 4)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 5)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 1)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_401(int iParam0, int iParam1)
{
	if (iParam1 == func_11())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 0))
			{
				return 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 3))
			{
				return 2;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 6))
			{
				return 4;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 9))
			{
				return 1;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 12))
			{
				return 7;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 15))
			{
				return 5;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 18))
			{
				return 6;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 21))
			{
				return 0;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 1))
			{
				return 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 4))
			{
				return 2;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 7))
			{
				return 4;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 10))
			{
				return 1;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 13))
			{
				return 7;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 16))
			{
				return 5;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 19))
			{
				return 6;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 22))
			{
				return 0;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 2))
			{
				return 3;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 5))
			{
				return 2;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 8))
			{
				return 4;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 11))
			{
				return 1;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 14))
			{
				return 7;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 17))
			{
				return 5;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 20))
			{
				return 6;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 23))
			{
				return 0;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_184507[iParam1 /*876*/].f_112.f_103, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_402(int iParam0)
{
	if (iParam0 != func_11())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 6) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 7)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_403(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 8);
}

bool func_404(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 7);
}

bool func_405(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 9);
}

bool func_406(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 11);
}

bool func_407(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 10);
}

int func_408(int iParam0, int iParam1)
{
	return func_28(func_409(iParam1), iParam0, 0);
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_410(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x3315867670EACADD(&Global_198CBC);
	func_411();
}

void func_411()
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

void func_412(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x9D44809E7CAF1A79(&Global_198C86);
	func_413();
}

void func_413()
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

int func_414(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_282(iParam0, iParam1, 2);
	bVar1 = func_282(iParam0, iParam1, 1);
	bVar2 = func_282(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_415(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_274(iParam1))
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

int func_416(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_104(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_4523;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_4522;
		}
		else
		{
			iVar0 = Global_40001.f_4510;
		}
		iVar1 = 19;
	}
	else if (func_419(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_37(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_40001.f_450F;
			iVar1 = 20;
		}
	}
	else if (func_47(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_40001.f_4523;
		}
		else if (!bParam2)
		{
			iVar0 = Global_40001.f_4522;
		}
		else
		{
			iVar0 = Global_40001.f_4510;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xF9647457141B11A7(func_328(func_137()), func_327(func_137()), func_434(), func_433(), iVar1, iVar0);
	}
	func_418(iVar0);
	func_417(iVar0);
	return iVar0;
}

void func_417(int iParam0)
{
	int iVar0;
	
	iVar0 = func_28(3968, 4294967295, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1EA = iVar0;
	func_25(3968, iVar0, 4294967295, 1, 0);
}

void func_418(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 + iParam0);
	if (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 < 4294957297)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = 9999;
	}
	else if (Global_18D84D[iVar0 /*615*/].f_B.f_1E9 > 9999)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_1E9 = 9999;
	}
}

int func_419(int iParam0)
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

int func_420(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_65(unk_0xD803B885F5E47A62()) || func_76(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

void func_421(var uParam0)
{
	unk_0xC56A8C7E94A60EE3(&Global_198D8B);
	func_422();
}

void func_422()
{
	struct<36> Var0;
	
	Var0 = 4294967295;
	Var0.f_1 = 4294967295;
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_A = 4294967295;
	Var0.f_B = 4294967295;
	Var0.f_C = 4294967295;
	Var0.f_D = 4294967295;
	Var0.f_E = 4294967295;
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
	Var0.f_1D = 4294967295;
	Var0.f_1E = 4294967295;
	Var0.f_1F = 4294967295;
	Var0.f_20 = 4294967295;
	Var0.f_21 = 4294967295;
	Var0.f_22 = 4294967295;
	Global_198D8B = { Var0 };
}

int func_423(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_142 != 0;
	}
	return 0;
}

int func_424(int iParam0)
{
	if (func_85(iParam0) == func_11())
	{
		return 0;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_13;
}

int func_425()
{
	int iVar0;
	
	if (func_105())
	{
		return 4;
	}
	else if (func_117())
	{
		if (func_309(unk_0xD803B885F5E47A62()))
		{
			return 8;
		}
		return 6;
	}
	if (func_50(1))
	{
		iVar0 = func_393(unk_0xD803B885F5E47A62());
		if (iVar0 == 4294967295)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_135(1))
	{
		if (func_309(func_137()))
		{
			return 9;
		}
		return 7;
	}
	return 4294967294;
}

int func_426(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_427(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	if (bParam0)
	{
		iVar0 = func_435(unk_0xD803B885F5E47A62());
	}
	else
	{
		iVar0 = func_44(unk_0xD803B885F5E47A62());
	}
	if (iVar0 != 4294967295)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_432(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_430(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_429(unk_0xD803B885F5E47A62());
			if (func_91(func_92(unk_0xD803B885F5E47A62())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_429(unk_0xD803B885F5E47A62());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_428(unk_0xD803B885F5E47A62());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_428(unk_0xD803B885F5E47A62());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_428(int iParam0)
{
	if (func_44(unk_0xD803B885F5E47A62()) == 238 || func_44(unk_0xD803B885F5E47A62()) == 249)
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1F3;
	}
	return 4294967295;
}

int func_429(int iParam0)
{
	if (func_44(unk_0xD803B885F5E47A62()) == 237 || func_44(unk_0xD803B885F5E47A62()) == 250)
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1F2;
	}
	return 4294967295;
}

int func_430(int iParam0)
{
	return func_431(iParam0, 150);
}

int func_431(int iParam0, int iParam1)
{
	if (func_435(iParam0) == iParam1)
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1F0;
	}
	return 4294967295;
}

int func_432(int iParam0)
{
	return func_431(iParam0, 236);
}

int func_433()
{
	if (Global_198C74.f_3 != 0)
	{
		return Global_198C74.f_3;
	}
	return 4294967295;
}

int func_434()
{
	if (Global_198C74.f_2 != 0)
	{
		return Global_198C74.f_2;
	}
	return 4294967295;
}

int func_435(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 4294967295;
}

bool func_436(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

void func_437(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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
	
	if (func_561(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_559() || iParam2 == 28)
	{
		if (func_509(iParam1, iParam2, uParam3, Global_180529, 0, func_557(), sParam7))
		{
			func_508(1);
			if ((!func_506() && !func_504()) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 1))
			{
				if (func_503())
				{
					func_499();
				}
				else
				{
					unk_0xD02CE72B4B66DC29(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_498(1);
						Global_180529 = 0;
						iVar19 = 4294967295;
						if (Global_180606 != 1)
						{
							func_497(iParam1, 0, 0);
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
								if (func_5(unk_0x117658E336116132(iVar17), 0, 1))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
									if (!func_203(iVar3, 0))
									{
										if ((func_496(iVar3) || Global_25033E[iVar3 /*421*/].f_EC != 4294967295) || func_12(iVar3))
										{
											iVar9 = iVar3;
											if (func_118(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_495(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_494(unk_0xD803B885F5E47A62(), 0) && func_44(unk_0xD803B885F5E47A62()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_493())
							{
								if (func_5(unk_0x117658E336116132(iVar17), 0, 1))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
								}
								else
								{
									iVar3 = func_11();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_492(iVar3) && func_488(iVar3, iParam2)) && func_5(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
								Var6 = { func_483(iVar3) };
								if (iVar3 == unk_0xD803B885F5E47A62())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x6E524813889AECF8(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_160(iVar3) };
								iVar5 = func_477(iVar3);
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
									if (!func_493())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != 4294967295)
								{
									func_472(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_471(iParam5, 1, 0, 0), 16);
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
								iVar16 = func_469(iVar3, 0);
								if (bVar2)
								{
									if (func_240(iVar3, 1) && iVar1[iVar9] != 4294967295)
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
								if (func_468(iParam5))
								{
									func_467(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_467(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
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
							if (func_5(iVar3, 0, 1) && !unk_0xEAE0D21A50E6C7F4(iVar14, iVar3))
							{
								iVar3 = unk_0x117658E336116132(iVar17);
							}
							else
							{
								iVar3 = func_11();
							}
							if (func_492(iVar3))
							{
								if (func_5(unk_0x117658E336116132(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
									Var6 = { func_483(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_160(iVar3) };
									iVar5 = func_477(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x5283D58F79627134(iVar5);
									}
									Global_180529++;
									iVar16 = func_469(iVar3, 1);
									if (bVar2)
									{
										if (func_240(iVar3, 1))
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
									func_450(iVar3, unk_0x6E524813889AECF8(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 11))
						{
							func_447(uParam3, iParam1, iParam2);
						}
						func_8(&(uParam3->f_15));
						func_446();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 7))
						{
							func_445(uParam3, iParam1);
							func_444(iParam1, 0, 1);
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 7);
						}
						func_445(uParam3, iParam1);
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 11))
						{
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 11);
						}
						if (func_440(uParam3))
						{
							Global_180606 = 1;
						}
						func_438(uParam3);
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
			func_446();
			func_498(0);
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

void func_438(var uParam0)
{
	if (!func_21(&(uParam0->f_15)))
	{
		func_20(&(uParam0->f_15), 0, 0);
	}
	else if (func_19(&(uParam0->f_15), 250, 0))
	{
		func_8(&(uParam0->f_15));
		func_439(0);
	}
}

void func_439(bool bParam0)
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

int func_440(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x117658E336116132(uParam0->f_25);
	if (iVar3 != func_11() && func_5(iVar3, 0, 1))
	{
		Var2 = { func_160(iVar3) };
		iVar1 = func_443(uParam0, uParam0->f_25);
		if (func_442(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 1;
							func_441(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 1;
						func_441(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 1;
							func_441(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_441(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x74684D5E87B13DBD(&Var2))
						{
							iVar4 = 1;
							func_441(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 1;
						func_441(uParam0, iVar0, 0);
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

void func_441(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_442(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

var func_443(var uParam0, int iParam1)
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_444(int iParam0, bool bParam1, int iParam2)
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

void func_445(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 10))
	{
		unk_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(uParam0->f_23);
		unk_0x7E60D21B163E9D56();
		unk_0x5D96D8530B3D0904(&(uParam0->f_21), 10);
	}
}

void func_446()
{
	if (Global_180606 != 0)
	{
		Global_180606 = 0;
	}
}

void func_447(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (iVar2 != func_11())
		{
			if (func_5(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 4294967295)
				{
					iVar1 = func_449(uParam0->f_26[iVar0 /*2*/], 0, iParam2);
					func_448(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_184507[iVar0 /*876*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_448(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_449(int iParam0, bool bParam1, int iParam2)
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

void func_450(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_466() && iParam4 < func_465())
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
				func_464("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(iParam10);
			}
			func_464(sParam1);
			unk_0x3CAEA85DA607305E(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_464("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(65);
			}
			unk_0x3CAEA85DA607305E(4294967295);
			func_464("");
			if (uParam3->f_6C == 6)
			{
				func_464("");
			}
			else
			{
				func_464(&sParam5);
			}
			func_455(uParam3, iParam0);
			unk_0x024BC5F58A72410C(sParam9);
			unk_0x024BC5F58A72410C(sParam9);
			if (func_454(uParam3))
			{
				func_453("DPAD_FRIEND");
			}
			else if (func_452(uParam3))
			{
				func_453("DPAD_FRIEND");
			}
			else if (func_451(uParam3))
			{
				func_453("DPAD_CREW");
			}
			else
			{
				func_453("");
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

bool func_451(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 6);
}

bool func_452(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 5);
}

void func_453(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_454(var uParam0)
{
	if (func_452(uParam0) && func_451(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_455(var uParam0, int iParam1)
{
	if (func_463(iParam1))
	{
		unk_0x3CAEA85DA607305E(121);
	}
	else if (func_459(iParam1))
	{
		unk_0x3CAEA85DA607305E(122);
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_440000.f_1B, 15) && iParam1 > 4294967295) && iParam1 < 32) && unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam1 /*421*/].f_19D, 0))
	{
		unk_0x3CAEA85DA607305E(123);
	}
	else
	{
		if (func_456())
		{
			uParam0->f_24 = 0;
		}
		unk_0x1200CC973A2399C8(uParam0->f_24);
	}
}

int func_456()
{
	if (unk_0xA14BB9332558B949())
	{
		if (func_457() || func_229())
		{
			return 1;
		}
	}
	return 0;
}

int func_457()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_229();
	}
	return func_458(Global_440000.f_2F9AE);
}

int func_458(int iParam0)
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

int func_459(int iParam0)
{
	if ((func_5(iParam0, 0, 1) && func_460()) && func_51(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_460()
{
	if (func_78(unk_0xD803B885F5E47A62()) || func_462())
	{
		if (!func_461(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_461(int iParam0)
{
	if (func_435(iParam0) == 236 || func_435(iParam0) == 150)
	{
		return func_67(iParam0);
	}
	return 0;
}

int func_462()
{
	switch (func_44(unk_0xD803B885F5E47A62()))
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

int func_463(int iParam0)
{
	if (func_456())
	{
		if (func_5(iParam0, 0, 1))
		{
			return func_118(iParam0);
		}
	}
	if ((func_5(iParam0, 0, 1) && func_460()) && func_41(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_464(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_465()
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

int func_466()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_18052B)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_467(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_466() && iParam3 < func_465())
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
					func_464("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(iParam9);
				}
				if (uParam2->f_6C == 6 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					func_453(sParam16);
				}
				else
				{
					func_464(&(uParam2->f_1));
				}
				unk_0x3CAEA85DA607305E(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_464("");
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
				if (func_493())
				{
					func_464("");
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
						func_453(&(uParam2->f_68));
					}
					else
					{
						func_464("");
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
					func_464("");
				}
				if (uParam2->f_6C == 6)
				{
					func_464("");
				}
				else
				{
					func_464(&sParam4);
				}
				func_455(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xEA6BC48857E0AC4C(sParam8))
				{
					func_464("");
					func_464("");
				}
				else
				{
					unk_0x024BC5F58A72410C(sParam8);
					unk_0x024BC5F58A72410C(sParam8);
				}
				if (func_454(uParam2))
				{
					func_453("DPAD_FRIEND");
				}
				else if (func_452(uParam2))
				{
					func_453("DPAD_FRIEND");
				}
				else if (func_451(uParam2))
				{
					func_453("DPAD_CREW");
				}
				else
				{
					func_453("");
				}
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_468(int iParam0)
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

int func_469(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_78(iParam0)) && !func_76(iParam0))
	{
		iVar0 = func_470();
	}
	iVar1 = func_225(iParam0);
	if (!iVar1 == 4294967295)
	{
		return func_223(iVar1);
	}
	return iVar0;
}

int func_470()
{
	return 21;
}

char* func_471(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_472(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_476(iParam3))
	{
		*fParam1 = (func_473(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_468(iParam3))
	{
		*fParam1 = (func_473(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_473(int iParam0, int iParam1)
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
				return func_475(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_474(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_474(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_475(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_476(int iParam0)
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

int func_477(int iParam0)
{
	int iVar0;
	
	iVar0 = func_480(iParam0);
	if (iVar0 == 4294967295)
	{
		func_478(iParam0, 1);
		return 0;
	}
	Global_153216[iVar0 /*5*/].f_4 = 1;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_478(int iParam0, bool bParam1)
{
	if (!func_5(iParam0, 0, 1))
	{
		return;
	}
	if (func_480(iParam0) != 4294967295)
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
	if (func_479(iParam0))
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

int func_479(int iParam0)
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

int func_480(int iParam0)
{
	int iVar0;
	
	if (!func_5(iParam0, 0, 1))
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
			func_481(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_481(int iParam0)
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
	func_482(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 1);
}

void func_482(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_11();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

struct<4> func_483(int iParam0)
{
	char cVar0[32];
	
	if (func_5(iParam0, 0, 1))
	{
		Global_265942 = { func_160(iParam0) };
		if (unk_0xDC30EF462887322E())
		{
			if (func_442(Global_265942))
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
		if (func_487(&Global_265942))
		{
			Global_2658FC = { func_485(iParam0) };
			func_484(&Global_2658FC, &cVar0);
		}
	}
	return cVar0;
}

void func_484(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

struct<35> func_485(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_486(iParam0))
	{
		return Global_14088D[unk_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_160(iParam0) };
	unk_0xD9DA83C40D038174(&Var1, 35, &Var0);
	return Var1;
}

int func_486(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 1;
	}
	return 0;
}

int func_487(var uParam0)
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

int func_488(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_77(iParam0) || func_491(iParam0)) || func_490(iParam0))
		{
			return 0;
		}
	}
	if (!func_489(iParam0))
	{
		return 0;
	}
	if ((!func_496(iParam0) && Global_25033E[iParam0 /*421*/].f_EC == 4294967295) && !func_12(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_489(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 22);
}

bool func_490(int iParam0)
{
	if (func_77(iParam0))
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 8);
}

int func_491(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 10) || unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 9));
	}
	return 0;
}

int func_492(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_203(iParam0, 0))
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

int func_493()
{
	switch (func_44(unk_0xD803B885F5E47A62()))
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
	switch (func_435(unk_0xD803B885F5E47A62()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_76(unk_0xD803B885F5E47A62()))
	{
		switch (func_44(unk_0xD803B885F5E47A62()))
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
	if (func_461(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_494(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295 && func_36(Global_18D84D[iParam0 /*615*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295)
	{
		if (func_36(Global_18D84D[iParam0 /*615*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

void func_495(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_5(unk_0x117658E336116132(iVar0), 0, 1))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (!func_203(iVar1, 0))
			{
				if ((func_496(iVar1) || Global_25033E[iVar1 /*421*/].f_EC != 4294967295) || func_12(iVar1))
				{
					if (func_664(iVar1, iParam1, 0))
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

int func_496(int iParam0)
{
	if (func_5(iParam0, 0, 1))
	{
		if (func_5(unk_0xD803B885F5E47A62(), 0, 1))
		{
			if (unk_0xF816C4B5324CB295(iParam0, unk_0xD803B885F5E47A62()) || func_44(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_497(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
	}
}

void func_498(bool bParam0)
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

void func_499()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 1))
	{
		if (func_79())
		{
			func_500();
		}
	}
}

void func_500()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 != 0)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
			func_501(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 1);
		}
		iVar0++;
	}
}

void func_501(var uParam0, int iParam1)
{
	func_502(uParam0, iParam1);
}

void func_502(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_503()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0) && func_79())
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 1) && func_79())
	{
		return 1;
	}
	return 0;
}

int func_504()
{
	if (func_79())
	{
		if (func_505(Global_2537E2.f_AA3[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_505(int iParam0)
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

int func_506()
{
	if (func_79())
	{
		if (func_507(Global_2537E2.f_AA3[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_507(int iParam0)
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

void func_508(int iParam0)
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

int func_509(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
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
	bVar3 = func_556(iParam1);
	fVar4 = func_555();
	iVar5 = 4294967295;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_554())
		{
			if (func_553() > 0 && Global_18052B)
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
		if (!func_536())
		{
			func_535(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 26))
	{
		func_535(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_21(&(uParam2->f_13)))
	{
		if (func_553() == 1)
		{
			func_534(bVar3, iParam0, 0);
			func_20(&(uParam2->f_13), 0, 0);
			func_535(iParam0, uParam2, 0);
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 5);
		}
	}
	if (func_21(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xE19C2AAC820D8ED5();
		}
		unk_0x3584F71E5CA29322(10);
		if (func_19(&(uParam2->f_13), 10000, 0) || (func_553() == 0 && !bParam5))
		{
			func_535(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_533();
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
					func_533();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xB8E3919889462ACD();
					}
					unk_0x3584F71E5CA29322(18);
				}
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (func_534(bVar3, iParam0, 0))
				{
					func_497(iParam0, 0, 0);
					sVar1 = func_531(iParam1, &(Global_440000.f_2F9B5), bParam4);
					Var0 = { func_529(iParam1) };
					if (bParam4)
					{
						func_526(iParam0, sVar1, "", 0, 4294967295, 4294967295, 1);
					}
					else if (iParam1 == 27)
					{
						func_519(iParam0, func_523(uParam2), func_520(uParam2), 4294967295);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_517(uParam2);
						if (!unk_0xEA6BC48857E0AC4C(sParam6))
						{
							sVar6 = sParam6;
						}
						func_515(iParam0, sVar6, func_516(), 4294967295);
					}
					else if (func_456())
					{
						uParam2->f_22 = Global_18052A;
						func_526(iParam0, sVar1, &Var0, 1, 4294967295, Global_18052A, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_510(iParam1);
						uParam2->f_22 = Global_18052A;
						func_526(iParam0, sVar1, "", 0, iVar5, Global_18052A, 1);
					}
					else
					{
						iVar5 = func_510(iParam1);
						func_526(iParam0, sVar1, &Var0, 1, iVar5, 4294967295, 1);
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

int func_510(int iParam0)
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (func_514())
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
			if (func_513(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 20;
			}
			if (func_512(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_511(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 2;
	}
	if (func_183())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_511(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 4;
}

bool func_512(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 7;
}

bool func_513(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 2;
}

bool func_514()
{
	return Global_440000.f_1 == 0;
}

void func_515(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_453(sParam1);
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_453("");
		if (iParam3 != 4294967295)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_516()
{
	switch (func_44(unk_0xD803B885F5E47A62()))
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

char* func_517(var uParam0)
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
	switch (func_44(unk_0xD803B885F5E47A62()))
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
			if (func_39())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_50(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_50(1))
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
			if (func_518(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B5))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_518(int iParam0)
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

void func_519(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_453(sParam1);
		}
		else if (func_435(unk_0xD803B885F5E47A62()) == 133)
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
		func_453("");
		if (iParam3 != 4294967295)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_520(var uParam0)
{
	int iVar0;
	
	iVar0 = func_435(unk_0xD803B885F5E47A62());
	if (func_522())
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
			switch (func_521())
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

int func_521()
{
	if (func_435(unk_0xD803B885F5E47A62()) == 133)
	{
		return Global_26B66F.f_13B5;
	}
	return 4294967295;
}

bool func_522()
{
	return Global_184488;
}

char* func_523(var uParam0)
{
	int iVar0;
	
	iVar0 = func_435(unk_0xD803B885F5E47A62());
	if (func_522())
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
			if (func_525() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_525() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_521())
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
			if (func_524() == 1)
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

int func_524()
{
	return Global_26B66F.f_13B8;
}

int func_525()
{
	if (func_435(unk_0xD803B885F5E47A62()) == 132)
	{
		return Global_26B66F.f_13B3;
	}
	return 4294967295;
}

void func_526(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_464(sParam1);
		}
		else if (iParam5 != 4294967295)
		{
			unk_0x7ACC3006A87F8B39(sParam1);
			unk_0x6D99DF8263D35CE5(iParam5);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_453(sParam1);
		}
		if (func_554() && iParam6)
		{
			if (func_528())
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
			func_453(sParam2);
		}
		if (iParam4 != 4294967295)
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (func_527(unk_0xD803B885F5E47A62()))
			{
				unk_0x3CAEA85DA607305E(166);
			}
			else if (func_185())
			{
				unk_0x3CAEA85DA607305E(220);
			}
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_527(int iParam0)
{
	if (func_513(iParam0) || func_512(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_528()
{
	return Global_18052B;
}

struct<4> func_529(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_530(unk_0xD803B885F5E47A62()) || func_511(unk_0xD803B885F5E47A62()))
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
	if (func_456() && unk_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_CC, 16);
	}
	return Var0;
}

bool func_530(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 5;
}

char* func_531(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_456() || unk_0xEA6BC48857E0AC4C(sParam1)))
	{
		uVar0 = func_532();
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

char* func_532()
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

void func_533()
{
	Global_A56F = 1;
}

bool func_534(bool bParam0, int iParam1, bool bParam2)
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

void func_535(int iParam0, var uParam1, bool bParam2)
{
	unk_0x0674E58A79778E99(&(uParam1->f_21), 7);
	Global_180529 = 0;
	func_446();
	Global_180528 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_21(&(uParam1->f_13)))
		{
			func_8(&(uParam1->f_13));
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

int func_536()
{
	if (func_552())
	{
		return 0;
	}
	if (func_551())
	{
		return 0;
	}
	if (!func_549())
	{
		return 0;
	}
	if (!func_547())
	{
		return 0;
	}
	if (func_546(8, 4294967295))
	{
		return 0;
	}
	if (func_553() == 2)
	{
		return 0;
	}
	if (Global_26B66F.f_11BF)
	{
		return 0;
	}
	if (func_545())
	{
		return 0;
	}
	else if (!func_542(unk_0xD803B885F5E47A62(), 1, 0) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_541(1) || func_539(1)) || Global_56C3.f_7C) || Global_56C3)
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (func_538() && Global_19DEEC == 2)
	{
		return 0;
	}
	if (func_235(unk_0xD803B885F5E47A62()) && !func_538())
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
	if (func_193(0))
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
	if (func_537(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((Global_14E899 || Global_14E89A) || Global_14E89B)
	{
		return 0;
	}
	return 1;
}

bool func_537(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_4, 6);
}

bool func_538()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 12) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0));
}

int func_539(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_540(unk_0x16F2683693E537C9()))
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

int func_540(int iParam0)
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

bool func_541(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 4);
	}
	return Global_56C3.f_4;
}

int func_542(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_543(iParam0))
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

bool func_543(int iParam0)
{
	return func_544(iParam0);
}

bool func_544(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0);
}

bool func_545()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0;
}

bool func_546(int iParam0, int iParam1)
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

int func_547()
{
	if (func_548() == 0)
	{
		return 1;
	}
	return 0;
}

int func_548()
{
	return Global_1406D3.f_12;
}

int func_549()
{
	if (func_550())
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

bool func_550()
{
	return Global_1406B8;
}

bool func_551()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 5;
}

bool func_552()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_553()
{
	return Global_150392.f_44;
}

int func_554()
{
	if (Global_18052A > 16)
	{
		return 1;
	}
	return 0;
}

float func_555()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_556(int iParam0)
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

int func_557()
{
	if (func_558(unk_0xD803B885F5E47A62()))
	{
		return Global_1420BD;
	}
	return 0;
}

int func_558(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_203(iParam0, 0))
		{
			return unk_0xB9BE6EF14AC6F8DE(iParam0);
		}
	}
	return 0;
}

int func_559()
{
	if (func_557())
	{
		return 1;
	}
	if (func_490(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_522())
	{
		return 1;
	}
	if (func_78(unk_0xD803B885F5E47A62()))
	{
		switch (func_435(unk_0xD803B885F5E47A62()))
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
				if (!func_560(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_560(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_560(unk_0xD803B885F5E47A62()))
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

bool func_560(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 4);
}

int func_561(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_78(unk_0xD803B885F5E47A62()) && !func_76(unk_0xD803B885F5E47A62())) && !func_461(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_45(unk_0xD803B885F5E47A62(), 0) && func_76(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
		if (func_63(unk_0xD803B885F5E47A62()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_562(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_435(unk_0xD803B885F5E47A62());
		Global_198D8B = iVar0;
		Global_198D8B.f_1 = iParam0;
		if (func_137() != func_11())
		{
			Global_198D8B.f_2 = func_328(func_137());
			Global_198D8B.f_3 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198D8B.f_2), &(Global_198D8B.f_3));
		}
		Global_198D8B.f_7 = unk_0xDD0E7998AE8AD485();
		Global_198D8B.f_1C = func_423(unk_0xD803B885F5E47A62());
		Global_198D8B.f_D = 0;
		Global_198D8B.f_E = 0;
		if (func_240(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198D8B.f_17 = func_426(func_50(1));
		}
	}
	else
	{
		iVar0 = func_44(unk_0xD803B885F5E47A62());
	}
	if (iParam2 || func_47(iVar0))
	{
		if (iParam3 != 4294967295 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_198C86 = iVar0;
		if (func_104(iVar0))
		{
			Global_198C86.f_1 = 4;
		}
		else if (func_419(iVar0))
		{
			Global_198C86.f_1 = 5;
		}
		else if (func_37(iVar0, 0))
		{
			Global_198C86.f_1 = 2;
			if (func_99(iVar0))
			{
				Global_198C86.f_1 = 3;
			}
		}
		else
		{
			Global_198C86.f_1 = 1;
		}
		if (func_137() != func_11())
		{
			Global_198C86.f_4 = func_328(func_137());
			Global_198C86.f_5 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198C86.f_6), &(Global_198C86.f_7));
		}
		Global_198C86.f_9 = unk_0xDD0E7998AE8AD485();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_198C86.f_1B = 1;
			Global_198C86.f_1C = 1;
		}
		if (iParam0 != 4294967295)
		{
			Global_198C86.f_1A = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_198C86.f_28 = func_131(iParam1);
			Global_198C86.f_29 = func_584();
			Global_198C86.f_2A = func_285(unk_0xD803B885F5E47A62(), iParam1);
			Global_198C86.f_2C = func_415(unk_0xD803B885F5E47A62(), iParam1);
		}
		if (!func_117() || iVar0 != 192)
		{
			Global_198C86.f_35 = 0;
		}
	}
	else if (func_97(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_198CFB = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_198CFB = iParam0 + 1;
		}
		else
		{
			Global_198CFB = func_583(unk_0xD803B885F5E47A62());
		}
		switch (iVar0)
		{
			case 225:
				if (func_93(unk_0xD803B885F5E47A62()) == 0)
				{
					Global_198CFB.f_1 = 0;
				}
				else
				{
					Global_198CFB.f_1 = 1;
				}
				break;
			
			case 226:
				Global_198CFB.f_1 = 2;
				break;
			
			case 227:
				Global_198CFB.f_1 = 3;
				break;
		}
		Global_198CFB.f_15 = 1;
		Global_198CFB.f_16 = 1;
		if (func_137() != func_11())
		{
			Global_198CFB.f_4 = func_328(func_137());
			Global_198CFB.f_5 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198CFB.f_4), &(Global_198CFB.f_5));
		}
		Global_198CFB.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 4294967295)
		{
			Global_198CFB.f_14 = iParam0;
		}
	}
	else if (func_55(iVar0))
	{
		if (iParam3 != 4294967295 && iParam2)
		{
		}
		Global_198CBC = iVar0;
		Global_198C86.f_1 = 1;
		if (func_137() != func_11())
		{
			Global_198CBC.f_4 = func_328(func_137());
			Global_198CBC.f_5 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198CBC.f_6), &(Global_198CBC.f_7));
		}
		Global_198CBC.f_9 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 4294967295)
		{
			Global_198CBC.f_15 = iParam0;
		}
	}
	else if (func_96(iVar0))
	{
		Global_198D27 = iVar0;
		Global_198D27.f_1 = iParam0;
		Global_198D27.f_15 = 1;
		Global_198D27.f_16 = 1;
		if (func_137() != func_11())
		{
			Global_198D27.f_4 = func_328(func_137());
			Global_198D27.f_5 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198D27.f_4), &(Global_198D27.f_5));
		}
		Global_198D27.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 4294967295)
		{
			Global_198D27.f_14 = iParam0;
		}
		Global_198D27.f_1B = func_408(func_27(), 5);
		Global_198D27.f_1C = func_426(func_582(unk_0xD803B885F5E47A62()));
		Global_198D27.f_1D = func_28(6107, 4294967295, 0);
		Global_198D27.f_1E = func_28(6103, 4294967295, 0);
		Global_198D27.f_1F = func_28(6104, 4294967295, 0);
		Global_198D27.f_20 = func_28(6106, 4294967295, 0);
		Global_198D27.f_21 = func_28(6105, 4294967295, 0);
		Global_198D27.f_22 = func_28(6108, 4294967295, 0);
		Global_198D27.f_7 = func_425();
		Global_198D27.f_33 = func_426(bParam4);
	}
	else if (func_95(iVar0))
	{
		Global_198D5D = iVar0;
		Global_198D5D.f_1 = iParam0;
		Global_198D5D.f_15 = 1;
		Global_198D5D.f_16 = 1;
		if (func_137() != func_11())
		{
			Global_198D5D.f_4 = func_328(func_137());
			Global_198D5D.f_5 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198D5D.f_4), &(Global_198D5D.f_5));
		}
		Global_198D5D.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 4294967295)
		{
			Global_198D5D.f_14 = iParam0;
		}
		Global_198D5D.f_18 = func_28(6157, 4294967295, 0);
		Global_198D5D.f_19 = func_28(6162, 4294967295, 0);
		Global_198D5D.f_1A = func_28(6163, 4294967295, 0);
		Global_198D5D.f_1B = func_426((((func_367() || func_366()) || func_365()) || func_364(unk_0xD803B885F5E47A62())));
		Global_198D5D.f_1C = func_28(6164, 4294967295, 0);
		Global_198D5D.f_1D = func_426(func_363());
		Global_198D5D.f_1F = 0;
		Global_198D5D.f_1E = 0;
		Global_198D5D.f_20 = 0;
		Global_198D5D.f_21 = 0;
		Global_198D5D.f_22 = 0;
		Global_198D5D.f_10 = 0;
		Global_198D5D.f_7 = func_425();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_91(func_92(unk_0xD803B885F5E47A62()))))
	{
		Global_198DE5 = iVar0;
		Global_198DE5.f_1 = iParam0;
		Global_198DE5.f_15 = 1;
		Global_198DE5.f_16 = 1;
		Global_198DE5.f_7 = func_425();
		if (func_137() != func_11())
		{
			Global_198DE5.f_4 = func_328(func_137());
			Global_198DE5.f_5 = func_327(func_137());
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198DE5.f_4), &(Global_198DE5.f_5));
		}
		if (func_137() != 4294967295)
		{
			Global_198DE5.f_11 = func_360(func_137());
		}
		Global_198DE5.f_8 = unk_0xDD0E7998AE8AD485();
		Global_198DE5.f_1C = func_423(unk_0xD803B885F5E47A62());
		Global_198DE5.f_10 = 0;
		Global_198DE5.f_18 = 0;
		Global_198DE5.f_17 = 0;
		if (func_240(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198DE5.f_21 = func_426(func_50(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_198DAF = iVar0;
		Global_198DAF.f_1 = iParam0;
		Global_198DAF.f_15 = 1;
		Global_198DAF.f_16 = 1;
		Global_198DAF.f_7 = func_425();
		Global_198DAF.f_18 = 0;
		Global_198DAF.f_17 = 0;
		Global_198DAF.f_10 = 0;
		if (func_137() != func_11())
		{
			Global_198DAF.f_4 = func_328(func_137());
			Global_198DAF.f_5 = func_327(func_137());
		}
		Global_198DAF.f_1C = func_423(unk_0xD803B885F5E47A62());
		if (Global_198DAF.f_1C)
		{
			Global_198DAF.f_1D = func_354(unk_0xD803B885F5E47A62());
		}
		else
		{
			Global_198DAF.f_1D = 0;
		}
		Global_198DAF.f_1E = func_338(unk_0xD803B885F5E47A62(), 4, 4294967295);
		Global_198DAF.f_1F = func_357(unk_0xD803B885F5E47A62());
		Global_198DAF.f_20 = func_426(func_337(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_21 = func_426(func_336(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_22 = func_426(func_335(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_23 = func_426(func_334(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_24 = func_333(unk_0xD803B885F5E47A62());
		Global_198DAF.f_25 = func_332(unk_0xD803B885F5E47A62());
		Global_198DAF.f_27 = func_331(unk_0xD803B885F5E47A62());
		if (func_240(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198DAF.f_29 = func_426(func_50(1));
		}
		if (func_29() != func_11())
		{
			func_136(func_29(), &(Global_198DAF.f_4), &(Global_198DAF.f_5));
		}
		Global_198DAF.f_8 = unk_0xDD0E7998AE8AD485();
		Global_198DAF.f_1C = func_423(unk_0xD803B885F5E47A62());
	}
	else if (func_89(iVar0))
	{
		Global_198E39 = iVar0;
		Global_198E39.f_1 = func_93(unk_0xD803B885F5E47A62());
		Global_198E39.f_2 = func_434();
		Global_198E39.f_3 = func_433();
		Global_198E39.f_4 = func_328(func_137());
		Global_198E39.f_5 = func_327(func_137());
		Global_198E39.f_7 = func_425();
		Global_198E39.f_8 = unk_0xDD0E7998AE8AD485();
		if (func_137() != 4294967295)
		{
			Global_198E39.f_11 = func_360(func_137());
		}
		Global_198E39.f_15 = 1;
		Global_198E39.f_16 = 1;
		Global_198E39.f_19 = iParam0;
		Global_198E39.f_1B = func_426(func_325(unk_0xD803B885F5E47A62()));
		Global_198E39.f_1C = func_322(21, 4294967295);
	}
	else if (func_88(iVar0))
	{
		Global_198E84 = Global_C0073.f_1;
		Global_198E84.f_2 = Global_C0073;
		Global_198E84.f_6 = func_328(func_137());
		Global_198E84.f_7 = func_327(func_137());
		if (func_240(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198E84.f_8 = func_426(func_50(1));
		}
		if (func_137() != 4294967295)
		{
			Global_198E84.f_9 = func_360(func_137());
		}
		Global_198E84.f_A = func_425();
		Global_198E84.f_13 = 1;
		Global_198E84.f_14 = 1;
		Global_198E84.f_15 = 0;
		Global_198E84.f_16 = 0;
		Global_198E84.f_17 = 0;
		Global_19FC3D = unk_0xDD0E7998AE8AD485();
	}
	else
	{
		if (func_137() != func_11())
		{
			Global_198C74 = func_328(func_137());
			Global_198C74.f_1 = func_327(func_137());
		}
		Global_198C74.f_5 = unk_0xDD0E7998AE8AD485();
		Global_198C74.f_D = func_581();
		Global_198C74.f_F = 0;
		if (func_135(1))
		{
			if (func_29() == func_137())
			{
				Global_198C74.f_F = 1;
			}
		}
		if (func_580())
		{
			Global_198CFB.f_1C = 1;
		}
		if (((((func_579() || func_578()) || func_577()) || func_576()) || func_575()) || func_574(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_1E = 1;
		}
		if (func_572(func_573(2413121211)))
		{
			Global_198CFB.f_20 = 1;
		}
		if (func_566(func_571(joaat("caddy"))))
		{
			Global_198CFB.f_1F = 1;
		}
		if (func_407(unk_0xD803B885F5E47A62()) || func_406(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_1D = 1;
		}
		if (func_403(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_21 = 1;
			Global_198CFB.f_22 = 1;
		}
		if (func_404(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_24 = 1;
		}
		if (func_401(0, unk_0xD803B885F5E47A62()) == 1)
		{
			Global_198CFB.f_23 = 1;
		}
		if (func_565(unk_0xD803B885F5E47A62(), 3, &uVar1))
		{
			Global_198CFB.f_25 = 1;
		}
		if (func_565(unk_0xD803B885F5E47A62(), 7, &uVar1))
		{
			Global_198CFB.f_26 = 1;
		}
		if (func_564(unk_0xD803B885F5E47A62()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_563(unk_0xD803B885F5E47A62(), iVar2);
				if (func_282(unk_0xD803B885F5E47A62(), iVar3, 0))
				{
					Global_198CFB.f_27 = 1;
				}
				if (func_282(unk_0xD803B885F5E47A62(), iVar3, 2))
				{
					Global_198CFB.f_28 = 1;
				}
				if (func_282(unk_0xD803B885F5E47A62(), iVar3, 1))
				{
					Global_198CFB.f_29 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_563(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_274(Global_184507[iParam0 /*876*/].f_112.f_B7[iParam1 /*12*/]))
	{
		uVar0 = Global_184507[iParam0 /*876*/].f_112.f_B7[iParam1 /*12*/];
	}
	return uVar0;
}

int func_564(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_565(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_11())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_401(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_566(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_322(11, 4294967295) == 0)
	{
		return 0;
	}
	if (iParam0 != 4294967295)
	{
		iVar0 = 4294967295;
		iVar1 = (iParam0 + func_381(11));
		func_380(iVar1, &iVar0, 1);
		iVar2 = func_322(func_568(iVar1), 4294967295);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_28(func_567(4, iVar0), 4294967295, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_567(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				case 281:
					return 8981;
				
				case 282:
					return 8988;
				
				case 283:
					return 8995;
				
				case 284:
					return 9002;
				
				case 285:
					return 9009;
				
				case 286:
					return 9016;
				
				case 287:
					return 9023;
				
				case 288:
					return 9030;
				
				case 289:
					return 9037;
				
				case 290:
					return 9044;
				
				case 291:
					return 9051;
				
				case 292:
					return 9057;
				
				case 293:
					return 9063;
				
				case 294:
					return 9069;
				
				case 295:
					return 9076;
				
				case 296:
					return 9083;
				
				case 297:
					return 9090;
				
				case 298:
					return 9097;
				
				case 299:
					return 9104;
				
				case 300:
					return 9111;
				
				case 301:
					return 9118;
				
				case 302:
					return 9125;
				
				case 303:
					return 9132;
				
				case 304:
					return 9139;
				
				case 305:
					return 9145;
				
				case 306:
					return 9151;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				case 281:
					return 8982;
				
				case 282:
					return 8989;
				
				case 283:
					return 8996;
				
				case 284:
					return 9003;
				
				case 285:
					return 9010;
				
				case 286:
					return 9017;
				
				case 287:
					return 9024;
				
				case 288:
					return 9031;
				
				case 289:
					return 9038;
				
				case 290:
					return 9045;
				
				case 291:
					return 9052;
				
				case 292:
					return 9058;
				
				case 293:
					return 9064;
				
				case 294:
					return 9070;
				
				case 295:
					return 9077;
				
				case 296:
					return 9084;
				
				case 297:
					return 9091;
				
				case 298:
					return 9098;
				
				case 299:
					return 9105;
				
				case 300:
					return 9112;
				
				case 301:
					return 9119;
				
				case 302:
					return 9126;
				
				case 303:
					return 9133;
				
				case 304:
					return 9140;
				
				case 305:
					return 9146;
				
				case 306:
					return 9152;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8983;
				
				case 282:
					return 8990;
				
				case 283:
					return 8997;
				
				case 284:
					return 9004;
				
				case 285:
					return 9011;
				
				case 286:
					return 9018;
				
				case 287:
					return 9025;
				
				case 288:
					return 9032;
				
				case 289:
					return 9039;
				
				case 290:
					return 9046;
				
				case 291:
					return 9053;
				
				case 292:
					return 9059;
				
				case 293:
					return 9065;
				
				case 294:
					return 9071;
				
				case 295:
					return 9078;
				
				case 296:
					return 9085;
				
				case 297:
					return 9092;
				
				case 298:
					return 9099;
				
				case 299:
					return 9106;
				
				case 300:
					return 9113;
				
				case 301:
					return 9120;
				
				case 302:
					return 9127;
				
				case 303:
					return 9134;
				
				case 304:
					return 9141;
				
				case 305:
					return 9147;
				
				case 306:
					return 9153;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8984;
				
				case 282:
					return 8991;
				
				case 283:
					return 8998;
				
				case 284:
					return 9005;
				
				case 285:
					return 9012;
				
				case 286:
					return 9019;
				
				case 287:
					return 9026;
				
				case 288:
					return 9033;
				
				case 289:
					return 9040;
				
				case 290:
					return 9047;
				
				case 291:
					return 9054;
				
				case 292:
					return 9060;
				
				case 293:
					return 9066;
				
				case 294:
					return 9072;
				
				case 295:
					return 9079;
				
				case 296:
					return 9086;
				
				case 297:
					return 9093;
				
				case 298:
					return 9100;
				
				case 299:
					return 9107;
				
				case 300:
					return 9114;
				
				case 301:
					return 9121;
				
				case 302:
					return 9128;
				
				case 303:
					return 9135;
				
				case 304:
					return 9142;
				
				case 305:
					return 9148;
				
				case 306:
					return 9154;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_568(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_381(iVar0) && iParam0 < func_569(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_569(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return 4294967295;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_324(iParam0);
		return func_570(iVar0);
	}
	return (func_382(iParam0, 4294967295) * iParam0 + 1);
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return 4294967295;
}

int func_571(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return 4294967295;
}

int func_572(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != 4294967295)
	{
		iVar0 = 4294967295;
		iVar1 = iParam0 + 157;
		func_380(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_28(func_567(4, iVar0), 4294967295, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_573(int iParam0)
{
	switch (iParam0)
	{
		case 2413121211:
			return 0;
			break;
	}
	return 4294967295;
}

int func_574(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (Global_184507[iParam0 /*876*/].f_112.f_153 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_575()
{
	return func_28(6542, 4294967295, 0) != 0;
}

bool func_576()
{
	return func_28(6163, 4294967295, 0) != 0;
}

bool func_577()
{
	return func_28(5380, 4294967295, 0) != 0;
}

bool func_578()
{
	return func_28(3828, 4294967295, 0) != 0;
}

bool func_579()
{
	return func_28(3223, 4294967295, 0) != 0;
}

bool func_580()
{
	return func_28(5379, 4294967295, 0) != 0;
}

int func_581()
{
	int iVar0;
	
	iVar0 = func_137();
	if (iVar0 != func_11())
	{
		return Global_18D84D[iVar0 /*615*/].f_B.f_62;
	}
	return 0;
}

int func_582(int iParam0)
{
	if (iParam0 != func_11())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_108 != 0;
	}
	return 0;
}

int func_583(int iParam0)
{
	if (func_44(iParam0) == 225 || func_44(iParam0) == 226)
	{
		return func_93(iParam0);
	}
	return 4294967295;
}

var func_584()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_284(unk_0xD803B885F5E47A62(), iVar0))
		{
			unk_0x5D96D8530B3D0904(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_585()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_586())
	{
		return;
	}
	if (func_664(unk_0xD803B885F5E47A62(), func_16(), 1))
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(func_16())))
	{
		return;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(func_16()), false) };
	vVar1 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), false) };
	fVar2 = SYSTEM::VDIST(vVar0, vVar1);
	if (fVar2 < 25f)
	{
		unk_0x922D0EFFF8F2403B(2, vVar0 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uLocal_94[0], uLocal_94[1], uLocal_94[2], 100, 1, 1, 2, 0, 0, 0, false);
	}
}

int func_586()
{
	if (((func_624(164) || func_68()) || !func_587(1, 1, 1, 0)) || iLocal_80 == 0)
	{
		return 1;
	}
	return 0;
}

int func_587(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_623(unk_0xD803B885F5E47A62(), 29))
	{
		return 0;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 21))
	{
		return 0;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 25))
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
	if (!func_489(unk_0xD803B885F5E47A62()))
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
	if (func_622(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_621())
	{
		return 0;
	}
	if (func_551())
	{
		return 0;
	}
	if (func_620())
	{
		return 0;
	}
	if (func_545())
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	if (func_543(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_547())
	{
		return 0;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 0) || func_71(unk_0xD803B885F5E47A62(), 3))
	{
		return 0;
	}
	if ((func_71(unk_0xD803B885F5E47A62(), 12) || func_71(unk_0xD803B885F5E47A62(), 14)) || func_71(unk_0xD803B885F5E47A62(), 13))
	{
		return 0;
	}
	if (func_613(unk_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_598())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_597())
		{
			return 0;
		}
	}
	if (Global_195C36)
	{
		return 0;
	}
	if (func_596(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_595())
	{
		return 0;
	}
	if (func_594(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((func_593(unk_0xD803B885F5E47A62()) && func_592(unk_0xD803B885F5E47A62()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_591())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 4))
	{
		return 0;
	}
	if (func_590(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_589(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_76(unk_0xD803B885F5E47A62()))
	{
		if (func_588(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_588(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_19FCF7[iVar0 /*13*/].f_C != 0;
	}
	return 0;
}

int func_589(int iParam0)
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

int func_590(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_105.f_4 != 0 || Global_25033E[iParam0 /*421*/].f_105.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_591()
{
	return Global_199459.f_10CF != 4294967295;
}

int func_592(int iParam0)
{
	if (iParam0 != func_11() && func_5(iParam0, 1, 1))
	{
		return Global_25033E[iParam0 /*421*/].f_136.f_E;
	}
	return 4294967295;
}

int func_593(int iParam0)
{
	if (iParam0 != func_11() && func_5(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 3);
	}
	return 0;
}

int func_594(int iParam0)
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

int func_595()
{
	if (Global_40EB30.f_3AF > 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_596(int iParam0)
{
	if (!func_5(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

bool func_597()
{
	return Global_181EC.f_15A > 0;
}

int func_598()
{
	int iVar0;
	
	iVar0 = func_44(unk_0xD803B885F5E47A62());
	if (((func_384(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1C) || func_612(unk_0xD803B885F5E47A62())) || func_611(unk_0xD803B885F5E47A62())) || func_610(unk_0xD803B885F5E47A62()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_609(unk_0xD803B885F5E47A62()))
	{
		if (func_104(iVar0) || func_419(iVar0))
		{
			return 1;
		}
	}
	if (func_61(unk_0xD803B885F5E47A62()))
	{
		if (func_419(iVar0))
		{
			return 1;
		}
	}
	if (func_608(unk_0xD803B885F5E47A62()))
	{
		if (func_97(iVar0))
		{
			return 1;
		}
	}
	if (func_607(unk_0xD803B885F5E47A62()))
	{
		if (func_96(iVar0))
		{
			return 1;
		}
	}
	if (func_606(unk_0xD803B885F5E47A62()))
	{
		if (func_95(iVar0))
		{
			return 1;
		}
	}
	if (func_605(unk_0xD803B885F5E47A62()))
	{
		if (func_604(iVar0))
		{
			return 1;
		}
	}
	if (func_603(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_602(iVar0))
		{
			if (func_600(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
		}
	}
	if (func_599(unk_0xD803B885F5E47A62()))
	{
		if (func_88(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_599(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_600(int iParam0)
{
	if (func_601(iParam0) != func_11())
	{
		return func_601(iParam0) == func_85(iParam0);
	}
	return 0;
}

int func_601(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_23;
}

int func_602(int iParam0)
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

int func_603(int iParam0, bool bParam1)
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
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295 && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_11())
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_604(int iParam0)
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

int func_605(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_606(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_607(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_608(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_609(int iParam0)
{
	if (func_383(Global_184507[iParam0 /*876*/].f_112.f_1C, 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_610(int iParam0)
{
	if (func_385(Global_184507[iParam0 /*876*/].f_112.f_1C, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_611(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_612(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_613(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_612(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_61(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_611(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_608(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_607(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_606(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_619(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_605(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_618(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_603(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_617(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_599(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_616(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_615(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_614(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_614(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_615(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_616(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_617(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_618(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_619(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_5(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295 && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_11())
			{
				return func_62(Global_25033E[iParam0 /*421*/].f_136.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_620()
{
	return Global_14086D;
}

bool func_621()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0);
}

int func_622(int iParam0)
{
	if (func_542(iParam0, 1, 0))
	{
		if (Global_184507[iParam0 /*876*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_623(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_5, iParam1);
}

int func_624(int iParam0)
{
	if (!func_117() && !func_240(unk_0xD803B885F5E47A62(), 1))
	{
		if (!func_65(unk_0xD803B885F5E47A62()))
		{
			if (func_68())
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

void func_625()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0))
	{
		return;
	}
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(func_16()), false) };
	vVar1 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0xD803B885F5E47A62()), false) };
	fVar2 = SYSTEM::VDIST(vVar0, vVar1);
	if (fVar2 < 25f)
	{
		if (fVar2 < 5f)
		{
			fVar4 = 175f;
		}
		else
		{
			fVar3 = (1f - (func_627(fVar2, 5f, 25f) / 25f));
			fVar4 = func_626(26f, 175f, fVar3);
		}
		unk_0x5E858A00EAFA5B24(0, 1000, SYSTEM::ROUND(fVar4));
	}
}

float func_626(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_627(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_628(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 31)
	{
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[iParam0 /*3*/].f_2, 0))
	{
		return 0;
	}
	return 1;
}

void func_629(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset"))
	{
		iVar0 = unk_0x1E2DFB0EF4BB4566(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset");
	}
	unk_0x5D96D8530B3D0904(&iVar0, iParam1);
	unk_0xB7E567188872123E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset", iVar0);
}

int func_630(int iParam0, int iParam1)
{
	if (unk_0xF1D385D359D58F72("MPBitset", 3))
	{
		if (unk_0x30F813723591D02E(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset"))
		{
			if (unk_0xEAE0D21A50E6C7F4(unk_0x1E2DFB0EF4BB4566(unk_0x65DC8BF3D20FC442(iParam0), "MPBitset"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_631()
{
	if (!func_632(unk_0xD803B885F5E47A62()))
	{
		func_80(25);
	}
}

bool func_632(int iParam0)
{
	return func_436(iParam0, 25);
}

void func_633(int iParam0)
{
	if (iLocal_80 != 2 && iLocal_80 != 3)
	{
		func_500();
		return;
	}
	if (func_586())
	{
		func_500();
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_656(86, "GB_HTB_BMT0", "GB_HTB_BMS0", func_657(func_16()), iLocal_81, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(86, "GB_HTB_BMT0", "GB_HTB_BMS1", 1, 4294967295, 2, 1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 2:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(86, "GB_HTB_BMT0", "GB_HTB_BMS2", 1, 4294967295, 2, 1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 3:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_654(87, Local_107.f_5, 4294967295, "GB_HTB_BMS3", "GB_WINNER", 1, 4294967295, 2, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 4:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_654(88, func_6(), 4294967295, "GB_HTB_BMS4", "GB_WORK_OVER", 1, 4294967295, 2, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 5:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(87, "GB_WINNER", "GB_HTB_BMS5", 1, 4294967295, 2, 1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 6:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(88, "GB_WORK_OVER", "GB_HTB_BMS5", 1, 4294967295, 2, 1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 7:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(88, "GB_WORK_OVER", "GB_HTB_BMS6", 1, 4294967295, 2, 1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 8:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_654(88, func_6(), 4294967295, "GB_HTB_BMS7", "GB_WORK_OVER", 1, 4294967295, 2, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 9:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_634(88, "GB_WORK_OVER", "GB_HTB_BMS8", func_648(), iLocal_81, func_6(), 0, 0, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295, 2);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 10:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(87, "GB_WINNER", "GB_HTB_BMS9", 1, 4294967295, 2, 1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 11:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(87, "GB_WINNER", "GB_HTB_BMS10", 1, 4294967295, 2, 1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 12:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(88, "GB_WORK_OVER", "GB_HTB_BMS11", 1, 4294967295, 2, 1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 13:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(88, "GB_WORK_OVER", "GB_HTB_BMS12", 1, 4294967295, 2, 1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 14:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(88, "GB_WORK_OVER", "GB_HTB_BMS13", 1, 4294967295, 2, 1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 15:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(88, "GB_WORK_OVER", "GB_HTB_BMS14", 1, 4294967295, 2, 1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 16:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_655(88, "GB_WORK_OVER", "GB_HTB_BMS15", 1, 4294967295, 2, 1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
		
		case 17:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_91, iParam0))
			{
				if (func_663())
				{
					func_658();
					func_654(88, func_6(), 4294967295, "GB_HTB_BMS16", "GB_WORK_OVER", 1, 4294967295, 2, 0);
					unk_0x5D96D8530B3D0904(&iLocal_91, iParam0);
				}
			}
			break;
	}
}

int func_634(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
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
	func_647(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = iParam4;
	Var0.f_47 = iParam4;
	Var0.f_6 = iParam13;
	Var0.f_48 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_47 = iParam14;
	}
	func_501(&(Var0.f_45), 4);
	return func_635(&Var0);
}

int func_635(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2537E2.f_BE5)
		{
			return 0;
		}
	}
	func_646(uParam0, uParam0->f_11);
	func_645(uParam0);
	if (func_185())
	{
		func_645(uParam0);
	}
	if (func_644(uParam0->f_1))
	{
		func_637();
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
				func_637();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_501(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 2);
				Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_636(uParam0->f_45, 128))
			{
				if (func_505(Global_2537E2.f_AA3[iVar0 /*80*/].f_1))
				{
					Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
					func_501(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_636(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_637()
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
	func_638();
	if (bVar0)
	{
		Global_12C5A = 0;
	}
}

void func_638()
{
	Global_2537E2.f_BE7 = 0;
	Global_2537E2.f_BE7.f_242 = 0;
	func_642(&(Global_2537E2.f_BE7.f_1));
	Global_2537E2.f_BE7.f_1.f_1 = 0;
	func_639(&(Global_2537E2.f_BE7.f_1));
}

void func_639(var uParam0)
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
				if (unk_0x757EF87A33649210() && !func_641(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_640(0);
}

void func_640(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_641(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0);
}

void func_642(var uParam0)
{
	func_643(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_643(var uParam0)
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

int func_644(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_645(var uParam0)
{
	if (func_507(uParam0->f_1))
	{
		uParam0->f_48 = func_470();
	}
}

void func_646(var uParam0, int iParam1)
{
	if (func_507(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_11() || !func_5(iParam1, 0, 1))
	{
		return;
	}
	if (func_505(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_208(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

void func_647(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_11 = func_11();
	uParam1->f_12 = func_11();
	uParam1->f_13 = func_11();
	uParam1->f_14 = func_11();
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

char* func_648()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_85(unk_0xD803B885F5E47A62());
	if (iVar0 != func_11())
	{
		if (iVar0 != unk_0xD803B885F5E47A62())
		{
			if (((func_436(iVar0, 28) || func_436(unk_0xD803B885F5E47A62(), 28)) || func_653(iVar0)) && !func_652(iVar0))
			{
				return func_650(iVar0, 0);
			}
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0, 4294967295, 1))
			{
				return func_650(iVar0, 0);
			}
		}
		sVar1 = func_649(&(Global_18D84D[iVar0 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar1))
		{
			return func_650(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_649(var uParam0)
{
	return uParam0;
}

char* func_650(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_51(iParam0, 1))
		{
			return func_651();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_651()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

int func_652(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_160(iParam0) };
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

int func_653(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_11())
	{
		Var0 = { func_160(iParam0) };
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

int func_654(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_647(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_11 = iParam1;
	Var0.f_47 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_48 = iParam7;
	if (iParam8 != 0)
	{
		func_501(&(Var0.f_45), iParam8);
	}
	return func_635(&Var0);
}

int func_655(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_647(iParam0, &Var0, 4294967295, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	if (iParam7 != 0)
	{
		func_501(&(Var0.f_45), iParam7);
	}
	return func_635(&Var0);
}

int func_656(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_11();
	iVar1 = func_11();
	iVar2 = func_11();
	return func_634(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

char* func_657(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		sVar0 = func_649(&(Global_18D84D[iParam0 /*615*/].f_B.f_68));
		return sVar0;
	}
	if (Global_18D84D[iParam0 /*615*/].f_B.f_78 != Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_78)
	{
		sVar0 = func_650(iParam0, 0);
		return sVar0;
	}
	if (((func_436(iParam0, 28) || func_436(unk_0xD803B885F5E47A62(), 28)) || func_653(iParam0)) && !func_652(iParam0))
	{
		return func_650(iParam0, 0);
	}
	iVar1 = func_85(iParam0);
	if (iVar1 != func_11())
	{
		if (iVar1 != unk_0xD803B885F5E47A62())
		{
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0, 4294967295, 1))
			{
				return func_650(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_11())
	{
		sVar0 = func_649(&(Global_18D84D[iVar1 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar0))
		{
			return func_650(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

void func_658()
{
	if (((((((func_661("GB_HTB_HR1", func_657(func_16()), func_662(func_16())) || func_660("GB_HTB_HR0", func_657(func_16()), func_662(func_16()), "GB_HTB_BLP", func_662(func_16()))) || func_659("GB_HTB_HG0", "GB_HTB_BLP", func_662(func_16()))) || func_34("GB_HTB_HELP2")) || func_34("GB_HTB_HELP3")) || func_34("GB_HTB_HELP4")) || func_34("GB_HTB_HELP5")) || func_34("GB_HTB_HELP7"))
	{
		unk_0xA37A90C62806D848(1);
	}
}

bool func_659(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0x6B012227B3921E18(sParam1);
	return unk_0xE3789B9938DCEAE8(0);
}

bool func_660(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	unk_0xCECE25C7ECD44603(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam4);
	}
	unk_0x6B012227B3921E18(sParam3);
	return unk_0xE3789B9938DCEAE8(0);
}

bool func_661(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	return unk_0xE3789B9938DCEAE8(0);
}

int func_662(int iParam0)
{
	int iVar0;
	
	iVar0 = func_225(iParam0);
	if (iVar0 != 4294967295)
	{
		return func_223(iVar0);
	}
	return 1;
}

int func_663()
{
	if ((func_5(unk_0xD803B885F5E47A62(), 1, 1) && !unk_0x798A3F1296751F46()) && !func_552())
	{
		return 1;
	}
	return 0;
}

int func_664(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_11())
	{
		if (!bParam2)
		{
			if (func_665(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_11())
		{
			return iParam1 == Global_18D84D[iParam0 /*615*/].f_B;
		}
	}
	return 0;
}

int func_665(int iParam0, int iParam1)
{
	if (iParam1 != func_11())
	{
		if (iParam0 != func_11())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_11())
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

void func_666(int iParam0)
{
	if (func_586())
	{
		func_658();
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0))
				{
					func_671("GB_HTB_HB0", "GB_HTB_BLP", func_662(func_16()), 4294967295);
					func_49(1);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0))
				{
					func_670("GB_HTB_HR0", func_657(func_16()), func_662(func_16()), "GB_HTB_BLP", func_662(func_16()), 4294967295);
					func_49(1);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
				}
			}
			break;
		
		case 2:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0))
				{
					func_53("GB_HTB_HELP2", 4294967295);
					func_49(1);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
				}
			}
			break;
		
		case 3:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0))
				{
					func_53("GB_HTB_HELP3", 4294967295);
					func_49(1);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
				}
			}
			break;
		
		case 4:
			if (func_672(0))
			{
				func_53("GB_HTB_HELP4", 4294967295);
				func_49(0);
			}
			break;
		
		case 5:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0))
				{
					func_53("GB_HTB_HELP5", 4294967295);
					func_49(1);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
				}
			}
			break;
		
		case 6:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0))
				{
					func_671("GB_HTB_HG0", "GB_HTB_BLP", func_662(func_16()), 4294967295);
					func_49(1);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
				}
			}
			break;
		
		case 7:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0))
				{
					func_53("GB_HTB_HELP7", 4294967295);
					func_49(1);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
					func_668(2599207954, func_669(0));
				}
			}
			break;
		
		case 8:
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_92, iParam0))
			{
				if (func_672(0))
				{
					func_667("GB_HTB_HR1", func_657(func_16()), func_662(func_16()), 4294967295);
					func_49(1);
					unk_0x5D96D8530B3D0904(&iLocal_92, iParam0);
					func_668(2599207954, func_669(0));
				}
			}
			break;
	}
}

void func_667(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam3);
}

void func_668(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0 = 589125870;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam0;
	Var0.f_3 = unk_0x09AC81E49EA267F7(0, 9999);
	if (!iParam1 == 0)
	{
		if (unk_0x8CD06866876216F2())
		{
			unk_0xFB061A86A7AC749F(1, &Var0, 4, iParam1);
		}
	}
}

int func_669(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_5(iVar2, 0, 0))
		{
			if (bParam0)
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_108[iVar1 /*3*/].f_2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
			else if (iVar2 != Local_107.f_5)
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_108[iVar1 /*3*/].f_2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_670(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0xD06AC7C87A34A6AD(sParam1);
	if (!iParam4 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam4);
	}
	unk_0x6B012227B3921E18(sParam3);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam5);
}

void func_671(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0x6B012227B3921E18(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam3);
}

int func_672(bool bParam0)
{
	if ((((!func_552() && !unk_0x798A3F1296751F46()) && !unk_0x0178C60FEA5C5A75()) && func_5(unk_0xD803B885F5E47A62(), 1, 1)) && !func_79())
	{
		if (bParam0)
		{
			if (!unk_0xFEBC1E4EC9E001F0())
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_673()
{
	if (unk_0xD803B885F5E47A62() == func_16())
	{
		return 1;
	}
	return 0;
}

void func_674()
{
	int iVar0;
	var uVar1;
	char* sVar2;
	
	iVar0 = 1;
	iLocal_106 = iLocal_106;
	if (func_21(&(Local_107.f_C)))
	{
		if (func_683(Local_107.f_C, (Global_40001.f_30CA - 35000), 0))
		{
			func_682(&iLocal_105, 3, 1);
		}
		if (func_683(Local_107.f_C, (Global_40001.f_30CA - 30000), 0))
		{
			func_682(&iLocal_105, 4, 1);
		}
		if (func_683(Local_107.f_C, (Global_40001.f_30CA - 27000), 0))
		{
			func_682(&iLocal_105, 5, 1);
		}
		if (func_683(Local_107.f_C, Global_40001.f_30CA, 0))
		{
			func_682(&iLocal_105, 2, 1);
		}
	}
	if (func_680(unk_0xD803B885F5E47A62(), Global_40001.f_30CE, &uVar1, func_682(&iLocal_105, 13, 4294967295), 1123024896, 0))
	{
		func_682(&iLocal_105, 13, 1);
	}
	else
	{
		func_682(&iLocal_105, 13, 0);
	}
	if (bLocal_97 || (!func_678() && !func_682(&iLocal_105, 13, 4294967295)))
	{
		iVar0 = 0;
	}
	switch (func_677(unk_0x57270EE11514DC67()))
	{
		case 0:
			break;
		
		case 1:
			if (!func_682(&iLocal_105, 12, 1))
			{
				iLocal_106 = unk_0x2B6E0A53779D29EA();
			}
			if (iVar0 && !func_682(&iLocal_105, 3, 4294967295))
			{
				if (!func_682(&iLocal_105, 1, 4294967295))
				{
					sVar2 = func_676(func_678(), "BG_HUNT_BOSS_DEFEND_START", "BG_HUNT_BOSS_ATTACK_START");
					if (unk_0x13896FDECC859926(sVar2) && func_682(&iLocal_105, 11, 4294967295))
					{
						unk_0xC92DB9682A650680(sVar2);
						func_682(&iLocal_105, 1, 1);
					}
					if (!func_682(&iLocal_105, 11, 4294967295))
					{
						func_675(1);
					}
				}
			}
			else if (func_682(&iLocal_105, 1, 4294967295) && !func_682(&iLocal_105, 3, 4294967295))
			{
				if (unk_0x13896FDECC859926("BG_HUNT_STOP"))
				{
					unk_0xC92DB9682A650680("BG_HUNT_STOP");
					func_675(0);
					func_682(&iLocal_105, 1, 0);
				}
			}
			if (func_682(&iLocal_105, 3, 4294967295))
			{
				if (func_682(&iLocal_105, 1, 4294967295))
				{
					if (unk_0x13896FDECC859926("APT_PRE_COUNTDOWN_STOP"))
					{
						unk_0xC92DB9682A650680("APT_PRE_COUNTDOWN_STOP");
						func_682(&iLocal_105, 1, 0);
					}
				}
			}
			if (func_682(&iLocal_105, 4, 4294967295))
			{
				if ((!func_682(&iLocal_105, 7, 4294967295) && !func_682(&iLocal_105, 5, 4294967295)) && !(func_586() || iLocal_80 != 3))
				{
					if (unk_0x13896FDECC859926("APT_COUNTDOWN_30S"))
					{
						unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 1);
						unk_0xC92DB9682A650680("APT_COUNTDOWN_30S");
						func_682(&iLocal_105, 7, 1);
					}
				}
				if ((!func_682(&iLocal_105, 6, 4294967295) && !func_682(&iLocal_105, 5, 4294967295)) && func_682(&iLocal_105, 7, 4294967295))
				{
					unk_0xBEF52C1D400C0A44(0);
					func_682(&iLocal_105, 6, 1);
				}
			}
			break;
		
		case 2:
			if (!func_682(&iLocal_105, 8, 4294967295) && func_682(&iLocal_105, 7, 4294967295))
			{
				if (unk_0x13896FDECC859926("APT_FADE_IN_RADIO"))
				{
					unk_0xC92DB9682A650680("APT_FADE_IN_RADIO");
					func_682(&iLocal_105, 8, 1);
				}
			}
			if (func_682(&iLocal_105, 1, 4294967295))
			{
				if (unk_0x13896FDECC859926("BG_HUNT_STOP"))
				{
					unk_0x38DC636F3D2D2FA8("APT_COUNTDOWN_30S_KILL");
					unk_0xC92DB9682A650680("BG_HUNT_STOP");
					func_682(&iLocal_105, 1, 0);
				}
			}
			if (func_682(&iLocal_105, 7, 4294967295) && !func_682(&iLocal_105, 2, 4294967295))
			{
				if (unk_0x13896FDECC859926("APT_COUNTDOWN_30S_KILL"))
				{
					func_682(&iLocal_105, 7, 0);
					unk_0xC92DB9682A650680("APT_COUNTDOWN_30S_KILL");
				}
			}
			if (func_682(&iLocal_105, 11, 4294967295))
			{
				func_675(0);
			}
			break;
	}
	if (func_682(&iLocal_105, 6, 4294967295) && (func_682(&iLocal_105, 5, 4294967295) || func_677(unk_0x57270EE11514DC67()) == 2))
	{
		unk_0xBEF52C1D400C0A44(1);
		unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
		func_682(&iLocal_105, 6, 0);
	}
	if (func_21(&(Local_107.f_10)) && func_683(Local_107.f_10, 10000, 0))
	{
		if (!func_682(&iLocal_105, 10, 4294967295))
		{
			iLocal_104 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(iLocal_104, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
			func_682(&iLocal_105, 10, 1);
		}
	}
	else if (func_682(&iLocal_105, 10, 4294967295))
	{
		unk_0x55D0A2DB35045A35(iLocal_104);
		iLocal_104 = 4294967295;
		func_682(&iLocal_105, 10, 0);
	}
}

void func_675(bool bParam0)
{
	if (bParam0)
	{
		unk_0x7352ACF3368DF65F("DisableFlightMusic", 1);
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 1);
		func_682(&iLocal_105, 11, 1);
	}
	else
	{
		unk_0x7352ACF3368DF65F("DisableFlightMusic", 0);
		unk_0x7352ACF3368DF65F("WantedMusicDisabled", 0);
		func_682(&iLocal_105, 11, 0);
	}
}

char* func_676(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_677(int iParam0)
{
	return vLocal_108[iParam0 /*3*/].f_1;
}

bool func_678()
{
	return func_679(func_16(), 1);
}

int func_679(int iParam0, bool bParam1)
{
	return func_664(unk_0xD803B885F5E47A62(), iParam0, bParam1);
}

int func_680(int iParam0, int iParam1, var uParam2, bool bParam3, float fParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	iVar0 = unk_0x9539D44F3E4492F6(iParam0);
	fVar1 = func_681(bParam3, 30f, 0f);
	fVar2 = 4f;
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		return 0;
	}
	*uParam2 = func_15(iVar0, Local_107.f_7, 0);
	if (*uParam2 > (IntToFloat(iParam1) + (fVar1 * fVar2)))
	{
		return 0;
	}
	fVar3 = unk_0xEE9925602B29903C(iVar0);
	*uParam2 = func_14(*uParam2, fVar3);
	if (fVar3 > (fParam4 + fVar1) && !bParam5)
	{
		return 0;
	}
	return 1;
}

float func_681(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_682(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = unk_0xEAE0D21A50E6C7F4(*iParam0, iParam1);
	if (iParam2 == 0)
	{
		unk_0x0674E58A79778E99(iParam0, iParam1);
	}
	else if (iParam2 == 1)
	{
		unk_0x5D96D8530B3D0904(iParam0, iParam1);
	}
	return bVar0;
}

int func_683(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 4294967295)
	{
		return 1;
	}
	if (unk_0x8CD06866876216F2() && !bParam3)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_684()
{
	switch (vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 1:
			if (func_673())
			{
				if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 3))
				{
					if (func_685(82, "GB_INTTXT_HBB", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 3);
					}
				}
			}
			else if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 3))
				{
					if (func_685(82, "GB_INTTXT_HBG", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 3);
					}
				}
			}
			break;
	}
}

int func_685(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0674E58A79778E99(&Global_1CBC, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = 4294967197;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_687(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_1F7F = iParam6;
			Global_1F1E[3 /*6*/] = { func_686(iParam0) };
			Global_1F6B = iParam0;
			unk_0x5D96D8530B3D0904(&Global_1CBC, 1);
			unk_0x5D96D8530B3D0904(&Global_1CBC, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_686(int iParam0)
{
	return Global_706[iParam0 /*29*/].f_3;
}

int func_687(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x7F8A39872A07D2CE(sParam14, sParam15))
	{
	}
	func_699();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_4C1E == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_4C1E == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_4C1E == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
			{
				return 0;
			}
		}
		if (Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 == 1)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8A22C4C08282BF26(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_698() == 0)
	{
		func_696();
		return 0;
	}
	func_695(Global_5570);
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/]), sParam1, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_11 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_1B416.f_3738[Global_5570 /*104*/].f_18 = iParam2;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_19 = iParam7;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1A = uParam8;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1D = uParam9;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1E = uParam12;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1F = uParam11;
	Global_1B416.f_3738[Global_5570 /*104*/].f_1C = 0;
	Global_1B416.f_3738[Global_5570 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_21), sParam4, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_32), sParam5, 64);
	Global_1B416.f_3738[Global_5570 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_1B416.f_3738[Global_5570 /*104*/].f_53), sParam15, 64);
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 10))
	{
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[0] = 1;
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[1] = 1;
		Global_1B416.f_3738[Global_5570 /*104*/].f_63[2] = 1;
		Global_1F7E = 4;
		func_694(0);
		func_694(2);
		func_694(1);
	}
	else
	{
		func_699();
		switch (iParam16)
		{
			case 3:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[Global_4C1E] = 1;
				break;
			
			case 0:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[0] = 1;
				break;
			
			case 2:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[2] = 1;
				break;
			
			case 1:
				Global_1B416.f_3738[Global_5570 /*104*/].f_63[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_4C1E)
			{
				case 0:
					func_694(0);
					Global_1F7E = 0;
					break;
				
				case 1:
					func_694(1);
					Global_1F7E = 1;
					break;
				
				case 2:
					func_694(2);
					Global_1F7E = 2;
					break;
				
				case 3:
					func_694(3);
					Global_1F7E = 3;
					break;
				
				default:
					Global_1F7E = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 10))
		{
			Global_1B416.f_36DE[0 /*20*/].f_11 = 1;
			Global_1B416.f_36DE[1 /*20*/].f_11 = 1;
			Global_1B416.f_36DE[2 /*20*/].f_11 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_1B416.f_36DE[Global_4C1E /*20*/].f_11 = 1;
					break;
				
				case 0:
					Global_1B416.f_36DE[0 /*20*/].f_11 = 1;
					break;
				
				case 2:
					Global_1B416.f_36DE[2 /*20*/].f_11 = 1;
					break;
				
				case 1:
					Global_1B416.f_36DE[1 /*20*/].f_11 = 1;
					break;
				}
			}
	}
	Global_5572[Global_5570] = 0;
	if (bParam10)
	{
		func_699();
		if (Global_4BE5)
		{
			StringCopy(&Global_4C13, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_4C1E)
			{
				case 0:
					StringCopy(&Global_4C13, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_4C13, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_4C13, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_4C13, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_1FE1[Global_4C1E /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_620())
			{
				unk_0x4D7F4CC43D4D0DE3(4294967295, "Text_Arrive_Tone", &Global_4C13, true);
			}
		}
	}
	if (!Global_4CD1)
	{
		if (Global_4C1E.f_1 == 6)
		{
			func_693(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_690(1);
			func_693(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C0A), 3212836864, 3212836864, 3212836864);
		}
	}
	func_688(iParam0, sParam1);
	return 1;
}

void func_688(int iParam0, char* sParam1)
{
	if (!func_689())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(iParam0, 1654525105, unk_0x12AB0310C2281427(sParam1), 0);
}

int func_689()
{
	if (!Global_40001.f_6DB6)
	{
		return 0;
	}
	if (!Global_12B4E)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_11())
	{
		return 0;
	}
	if (func_76(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	return 1;
}

void func_690(int iParam0)
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
	
	Global_5571 = 0;
	Global_1F19 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_1EF5[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_692(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_1CC3[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_1CC3[iVar1 /*15*/].f_4)
					{
						if (Global_1EF5[iVar0] == 0)
						{
							Global_1ED1[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 3))
								{
									iVar2 = 42;
									Global_4CD4 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_4CD4 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0);
								func_453(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 14)
								{
									func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_1EF5[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_1CC3[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_1CC3[iVar1 /*15*/].f_4)
					{
						if (Global_1EF5[iVar0] == 0)
						{
							Global_1ED1[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_1B416.f_3738[iVar3 /*104*/].f_18 != 0)
									{
										if (Global_1B416.f_3738[iVar3 /*104*/].f_1C == 0)
										{
											if (Global_1B416.f_3738[iVar3 /*104*/].f_63[Global_4C1E] == 1)
											{
												Global_5571++;
											}
										}
									}
									iVar3++;
								}
								func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_12B4E)
								{
									iVar4 = 0;
									iVar4 = Global_4121D3;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4121D4[iVar5 /*104*/].f_18 != 0)
										{
											if (Global_4121D4[iVar5 /*104*/].f_1C == 0)
											{
												if (Global_4121D4[iVar5 /*104*/].f_63[Global_4C1E] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_4C1E)
									{
										case 0:
											iVar6 = Global_A66F;
											break;
										
										case 1:
											iVar6 = Global_A670;
											break;
										
										case 2:
											iVar6 = Global_A671;
											break;
										
										default:
											break;
									}
									func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0);
								func_453(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(Global_1CC2);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0);
								func_453(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar7);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 3))
								{
									iVar8 = 42;
									Global_4CD4 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_4CD4 = 0;
								}
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0);
								func_453(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar8);
								unk_0x7E60D21B163E9D56();
							}
							else if (iVar1 == 8)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0);
								func_453(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if ((iVar1 == 23 && unk_0x7F8A39872A07D2CE(&(Global_1CC3[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xEAE0D21A50E6C7F4(Global_1CBD, 6))
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0);
								func_453(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18D301.f_1;
								func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_691(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_1EF5[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_691(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_453(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_453(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_453(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_453(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_453(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

bool func_692(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_693(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_694(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1B416.f_36DE[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_695(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x4460E481B9E33ADA();
	iVar1 = unk_0x8D199E381D262EEF();
	iVar2 = unk_0xD8A54335F18763BA();
	iVar3 = unk_0x972A296334C9D57B();
	uVar4 = unk_0x118229AD063C3C1D() + 1;
	iVar5 = unk_0x1A61A218F5C5EB02();
	Global_1B416.f_3738[iParam0 /*104*/].f_12 = iVar0;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_1B416.f_3738[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_696()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_5570 = 34;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12 = 4294967295;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_1 = 0;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_2 = 0;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_3 = 0;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_697(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
		{
			Global_5570 = iVar2;
		}
		iVar2++;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_18 = 1;
}

int func_697(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_698()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0)
		{
			Global_5570 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_5570 = 34;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12 = 4294967295;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_1 = 0;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_2 = 0;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_3 = 0;
	Global_1B416.f_3738[Global_5570 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 0 || Global_1B416.f_3738[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_697(Global_1B416.f_3738[iVar2 /*104*/].f_12, Global_1B416.f_3738[Global_5570 /*104*/].f_12))
			{
				Global_5570 = iVar2;
			}
		}
		if (Global_1B416.f_3738[iVar2 /*104*/].f_18 == 2)
		{
		}
		iVar2++;
	}
	if (Global_5570 == 34)
	{
		return 0;
	}
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[0] = 0;
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[1] = 0;
	Global_1B416.f_3738[Global_5570 /*104*/].f_63[2] = 0;
	return 1;
}

void func_699()
{
	if (func_692(14))
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
		Global_4C1E = func_700();
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

var func_700()
{
	func_701();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_701()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_704(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_703(unk_0x16F2683693E537C9());
			if (func_702(iVar0) && (!func_692(14) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_702(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_702(int iParam0)
{
	return iParam0 < 3;
}

int func_703(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_704(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_704(int iParam0)
{
	if (func_702(iParam0))
	{
		return func_705(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_705(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_706()
{
	if (func_586())
	{
		if (func_726())
		{
			func_725();
		}
		return;
	}
	if (iLocal_80 != 3)
	{
		if (func_726())
		{
			func_725();
		}
		return;
	}
	switch (func_677(unk_0x57270EE11514DC67()))
	{
		case 0:
			break;
		
		case 1:
			if (func_673())
			{
				if (func_21(&(Local_107.f_10)))
				{
					if (!func_723("GB_HTB_OT4"))
					{
						func_722("GB_HTB_OT4", 0);
					}
				}
				else if (!func_723("GB_HTB_OT1"))
				{
					func_722("GB_HTB_OT1", 0);
				}
			}
			else if (func_664(unk_0xD803B885F5E47A62(), func_16(), 0))
			{
				if (iLocal_80 == 3)
				{
					if (!func_723("GB_HTB_OT2"))
					{
						func_719("GB_HTB_OT2", "GB_BOSS_LC", iLocal_81, 0);
					}
				}
			}
			else if (func_628(unk_0x57270EE11514DC67()))
			{
				if (!func_723("GB_HTB_OT3"))
				{
					if (func_5(Local_107.f_5, 0, 1))
					{
						func_707("GB_HTB_OT3", Local_107.f_5, "GB_BOSS_LC", iLocal_81, 0);
					}
				}
			}
			break;
		
		case 2:
			if (func_726())
			{
				func_725();
			}
			break;
		
		case 3:
			if (func_726())
			{
				func_725();
			}
			break;
	}
}

void func_707(char* sParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if (func_708(sParam0, unk_0x6E524813889AECF8(iParam1), sParam2, bParam4, iParam3))
	{
		Global_140749 = 14;
		Global_140749.f_38 = iParam3;
		Global_140749.f_36 = iParam1;
	}
}

int func_708(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
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
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0;
	}
	if (unk_0x7724E025FD444F45(sParam2) > 63)
	{
		return 0;
	}
	if (func_718(sParam0, sParam1, sParam2) && Global_140749.f_38 == Global_140749.f_3A)
	{
		return 0;
	}
	func_712();
	Global_140749 = 10;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	StringCopy(&(Global_140749.f_10), sParam1, 64);
	StringCopy(&(Global_140749.f_20), sParam2, 64);
	Global_140749.f_3A = uParam4;
	Global_140749.f_38 = uParam4;
	func_711();
	func_710(bParam3);
	func_709();
	return 1;
}

void func_709()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 1);
}

void func_710(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0);
}

void func_711()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 86400000);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

void func_712()
{
	func_714();
	func_713(0);
}

void func_713(bool bParam0)
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

void func_714()
{
	if (!func_717())
	{
	}
	if (func_716())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_715();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_715()
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

int func_716()
{
	if (Global_140749 == 20)
	{
		return 0;
	}
	return 1;
}

int func_717()
{
	if (!func_716())
	{
		return 0;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_715();
	return unk_0xB165082A56EE6E7F();
}

bool func_718(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_716())
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
	if (unk_0xEA6BC48857E0AC4C(sParam2))
	{
		return 0;
	}
	if (!unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C)))
	{
		return 0;
	}
	if (!unk_0x12AB0310C2281427(sParam1) == unk_0x12AB0310C2281427(&(Global_140749.f_10)))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam2) == unk_0x12AB0310C2281427(&(Global_140749.f_20));
}

void func_719(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_720(sParam0, sParam1, bParam3, iParam2))
	{
		Global_140749 = 19;
		Global_140749.f_38 = iParam2;
	}
}

int func_720(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
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
	if (func_721(sParam0, sParam1) && Global_140749.f_38 == Global_140749.f_3A)
	{
		return 0;
	}
	func_712();
	Global_140749 = 3;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	StringCopy(&(Global_140749.f_10), sParam1, 64);
	Global_140749.f_3A = uParam3;
	Global_140749.f_38 = uParam3;
	func_711();
	func_710(bParam2);
	func_709();
	return 1;
}

bool func_721(char* sParam0, char* sParam1)
{
	if (!func_716())
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

void func_722(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_723(sParam0))
	{
		return;
	}
	func_712();
	Global_140749 = 0;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	func_711();
	func_710(bParam1);
	func_709();
}

bool func_723(char* sParam0)
{
	if (!func_716())
	{
		return 0;
	}
	if (Global_140749 == 11)
	{
		return func_724(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_724(char* sParam0)
{
	if (!func_716())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

void func_725()
{
	if (!func_716())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_712();
}

int func_726()
{
	if (!func_716())
	{
		return 0;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return 0;
	}
	return 1;
}

void func_727()
{
	int iVar0;
	
	if (func_586())
	{
		return;
	}
	if (iLocal_80 != 3)
	{
		return;
	}
	switch (func_677(unk_0x57270EE11514DC67()))
	{
		case 0:
			break;
		
		case 1:
			if (func_673())
			{
				if (func_21(&(Local_107.f_10)))
				{
					iVar0 = (20000 - func_731(&(Local_107.f_10), 0, 0));
					if (iVar0 > 0)
					{
						func_728(iVar0, "GB_HTB_TM2", 0, 0, 20000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
					}
					else
					{
						func_728(0, "GB_HTB_TM2", 0, 0, 0, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
					}
					return;
				}
			}
			if (func_21(&(Local_107.f_C)))
			{
				iVar0 = (Global_40001.f_30CA - func_731(&(Local_107.f_C), 0, 0));
				if (iVar0 > 0)
				{
					func_728(iVar0, "GB_WORK_END", 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
				}
				else
				{
					func_728(0, "GB_WORK_END", 0, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
				}
			}
			break;
		
		case 2:
			if (iLocal_80 == 2 || iLocal_80 == 3)
			{
				if (func_21(&(Local_107.f_E)))
				{
					func_728(0, "GB_WORK_END", 0, 0, 4294967295, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
				}
			}
			break;
	}
}

void func_728(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_730(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_150976.f_1 = 1;
		func_729(7, iVar0);
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

void func_729(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_730(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

int func_731(var uParam0, bool bParam1, bool bParam2)
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

void func_732()
{
	var uVar0;
	int iVar1;
	
	if (func_586())
	{
		func_751();
		return;
	}
	switch (vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 0:
			if (!func_17(Local_107.f_7))
			{
				if (func_664(unk_0xD803B885F5E47A62(), func_16(), 1))
				{
					if (func_750(unk_0xD803B885F5E47A62(), Global_40001.f_30CE, &uVar0, 1123024896, 0))
					{
						if (unk_0xE4EDC4B0E92C078B(iLocal_90))
						{
							unk_0x142CC44DB769B57E(&iLocal_90);
						}
					}
					else if (!unk_0xE4EDC4B0E92C078B(iLocal_90))
					{
						iLocal_90 = unk_0x6CC513A908911CF0(Local_107.f_7);
						unk_0xF2D30B8ACAF12A39(iLocal_90, true);
						unk_0xDC5B2F9D0CCE3A10(iLocal_90, "GB_HTB_BLIP1");
						unk_0xF412DD40DE84CE72(iLocal_90, true);
						unk_0x0EC848EFF66DF45A(iLocal_90, 7000);
						unk_0xBC8E0A7390523199(iLocal_90, 458);
						unk_0x2A065371C9D96655(iLocal_90, 12);
						unk_0x516E63E474722206(iLocal_90, Global_40001.f_3043);
						func_749(&iLocal_90, iLocal_81);
					}
					if (!unk_0xE4EDC4B0E92C078B(iLocal_89))
					{
						iLocal_89 = unk_0x3F3860E60C44719E(Local_107.f_7, SYSTEM::TO_FLOAT((Global_40001.f_30CE - 1)));
						func_749(&iLocal_89, iLocal_81);
						unk_0xF2D30B8ACAF12A39(iLocal_89, true);
						unk_0xA6B0C9C2D8FC9744(iLocal_89, 1);
						unk_0xDC5B2F9D0CCE3A10(iLocal_89, "GB_HTB_BLIP0");
					}
					if (func_748(Local_107.f_5) != iLocal_93)
					{
						iLocal_93 = func_748(Local_107.f_5);
						unk_0x7F010F50CE03A8AF(iLocal_89, iLocal_93);
					}
				}
			}
			break;
		
		case 1:
			if (func_673())
			{
				func_746();
				if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 4))
				{
					if (!func_21(&(Local_107.f_10)) && !func_21(&(Local_107.f_12)))
					{
						if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 2))
						{
							func_745(1, 0);
							unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 2);
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 2))
					{
						func_745(0, 0);
						unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 2);
					}
				}
			}
			else
			{
				func_744();
				if (!func_664(unk_0xD803B885F5E47A62(), func_16(), 0))
				{
					if (bLocal_96)
					{
						if (vLocal_108[unk_0x7B9C1F53FE442D06(Local_107.f_5) /*3*/].f_1 == 1 && !unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x7B9C1F53FE442D06(Local_107.f_5) /*3*/].f_2, 2))
						{
							if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 10))
							{
								func_742(Local_107.f_5, 432, 1, 0);
								func_740(Local_107.f_5, func_741(iLocal_81), 1, 0);
								if (func_5(func_16(), 1, 1))
								{
									func_733(Local_107.f_5, 1, 0, 0);
								}
								unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 10);
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 10))
						{
							func_742(Local_107.f_5, 432, 0, 0);
							func_740(Local_107.f_5, func_741(iLocal_81), 0, 0);
							if (func_5(func_16(), 1, 1))
							{
								func_733(Local_107.f_5, 0, 0, 0);
							}
							unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 10);
						}
					}
				}
			}
			if (!func_17(Local_107.f_7))
			{
				if (func_750(unk_0xD803B885F5E47A62(), Global_40001.f_30CE, &uVar0, 1123024896, 0))
				{
					if (unk_0xE4EDC4B0E92C078B(iLocal_90))
					{
						unk_0x142CC44DB769B57E(&iLocal_90);
					}
				}
				else if (!unk_0xE4EDC4B0E92C078B(iLocal_90))
				{
					iLocal_90 = unk_0x6CC513A908911CF0(Local_107.f_7);
					unk_0xF2D30B8ACAF12A39(iLocal_90, true);
					unk_0xDC5B2F9D0CCE3A10(iLocal_90, "GB_HTB_BLIP1");
					unk_0xF412DD40DE84CE72(iLocal_90, true);
					unk_0x0EC848EFF66DF45A(iLocal_90, 7000);
					unk_0xBC8E0A7390523199(iLocal_90, 458);
					unk_0x2A065371C9D96655(iLocal_90, 12);
					unk_0x516E63E474722206(iLocal_90, Global_40001.f_3043);
					func_749(&iLocal_90, iLocal_81);
				}
				if (!unk_0xE4EDC4B0E92C078B(iLocal_89))
				{
					iLocal_89 = unk_0x3F3860E60C44719E(Local_107.f_7, SYSTEM::TO_FLOAT((Global_40001.f_30CE - 1)));
					func_749(&iLocal_89, iLocal_81);
					unk_0xF2D30B8ACAF12A39(iLocal_89, true);
					unk_0xA6B0C9C2D8FC9744(iLocal_89, 1);
					unk_0xDC5B2F9D0CCE3A10(iLocal_89, "GB_HTB_BLIP0");
					unk_0x7F010F50CE03A8AF(iLocal_89, Global_40001.f_2FCF);
				}
				if (func_664(unk_0xD803B885F5E47A62(), func_16(), 1) || func_240(unk_0xD803B885F5E47A62(), 1))
				{
					if (func_240(unk_0xD803B885F5E47A62(), 1))
					{
						iVar1 = func_85(unk_0xD803B885F5E47A62());
					}
					else
					{
						iVar1 = Local_107.f_5;
					}
					if (func_748(iVar1) != iLocal_93)
					{
						iLocal_93 = func_748(iVar1);
						unk_0x7F010F50CE03A8AF(iLocal_89, iLocal_93);
					}
				}
			}
			break;
		
		case 2:
		case 3:
			func_751();
			break;
	}
}

void func_733(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_736(iParam0))
	{
		return;
	}
	if (func_735(&(Global_24DDCF.f_333[iParam0]), &(Global_24DDCF.f_49E[iParam0]), &(Global_24DDCF.f_16F), bParam1, iParam0, bParam3, &uVar0))
	{
		func_734(iParam0, bParam2);
	}
}

void func_734(int iParam0, bool bParam1)
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

int func_735(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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

int func_736(int iParam0)
{
	if (iParam0 == func_11())
	{
		return 1;
	}
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_737())
	{
		return 1;
	}
	return 0;
}

int func_737()
{
	switch (func_739())
	{
		case 0:
			return func_738();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_738()
{
	switch (Global_259530)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_739()
{
	return Global_7830;
}

void func_740(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_736(iParam0))
	{
		return;
	}
	if (func_735(&(Global_24DDCF.f_26D[iParam0]), &(Global_24DDCF.f_3D8[iParam0]), &(Global_24DDCF.f_185), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1C8[iParam0] = uParam1;
		}
	}
}

int func_741(int iParam0)
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

void func_742(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_736(iParam0))
	{
		return;
	}
	if (func_735(&(Global_24DDCF.f_24C[iParam0]), &(Global_24DDCF.f_3B7[iParam0]), &(Global_24DDCF.f_184), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1A7[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_743();
		}
	}
}

void func_743()
{
	Global_24DDCF.f_64E = 1;
}

void func_744()
{
	if (unk_0xEAE0D21A50E6C7F4(vLocal_108[func_16() /*3*/].f_2, 4))
	{
		if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 9))
		{
			if (func_16() != func_137())
			{
				unk_0x4D7F4CC43D4D0DE3(4294967295, "Boss_Blipped", "GTAO_Magnate_Hunt_Boss_SoundSet", false);
				unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 9);
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 9))
	{
		unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 9);
	}
}

void func_745(bool bParam0, bool bParam1)
{
	if ((!unk_0x1727A44C562FBED2(Global_24DDCF.f_63B) || Global_24DDCF.f_63B == unk_0x0D0A574C76D769AC()) || bParam1)
	{
		if (bParam0)
		{
			Global_24DDCF.f_63B = unk_0x0D0A574C76D769AC();
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_2), 23);
		}
		else
		{
			Global_24DDCF.f_63B = 4294967295;
			unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_2), 23);
		}
	}
	else if (!bParam1)
	{
	}
}

void func_746()
{
	if (!func_673())
	{
		return;
	}
	if (func_21(&(Local_107.f_10)) && func_21(&(Local_107.f_12)))
	{
		if (func_21(&uLocal_102))
		{
			func_8(&uLocal_102);
		}
		return;
	}
	if (!func_21(&uLocal_100) && !func_21(&uLocal_102))
	{
		vLocal_98 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		func_20(&uLocal_100, 0, 0);
		iLocal_99 = 0;
	}
	else if (func_21(&uLocal_102))
	{
		if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 2))
		{
			func_745(0, 0);
			unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 2);
		}
		if (func_19(&uLocal_102, SYSTEM::ROUND(Global_40001.f_30CD), 0))
		{
			func_8(&uLocal_102);
			unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 4);
			func_747(0, 4294967295, 500, 500, 0);
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 2))
			{
				func_745(1, 0);
				unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 2);
			}
		}
	}
	else if (func_731(&uLocal_100, 0, 0) > (500 * iLocal_99))
	{
		if (SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_98) > IntToFloat(Global_40001.f_30CB))
		{
			func_8(&uLocal_100);
			if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 4))
			{
				func_20(&uLocal_102, 0, 0);
			}
		}
		else if (IntToFloat(func_731(&uLocal_100, 0, 0)) > Global_40001.f_30CC)
		{
			if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 2))
			{
				func_745(0, 0);
				unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 2);
				func_666(7);
				func_747(1, 4294967295, 2147483647, 0, 0);
			}
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 4))
			{
				unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 4);
			}
		}
		iLocal_99++;
	}
}

void func_747(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if ((!unk_0x1727A44C562FBED2(Global_24DDCF.f_625) || Global_24DDCF.f_625 == unk_0x0D0A574C76D769AC()) || bParam4)
	{
		if (bParam0)
		{
			Global_24DDCF.f_625 = unk_0x0D0A574C76D769AC();
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_2), 19);
			Global_24DDCF.f_626 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			Global_24DDCF.f_625 = 4294967295;
			unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_2), 19);
		}
		Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_4 = iParam2;
		Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_44.f_5 = iParam3;
		Global_24DDCF.f_628 = iParam1;
	}
	else if (!bParam4)
	{
	}
}

int func_748(int iParam0)
{
	var uVar0;
	
	if (iParam0 != func_11())
	{
		if (!func_17(Local_107.f_7))
		{
			if (func_750(iParam0, Global_40001.f_30CE, &uVar0, 1123024896, 0))
			{
				return 70;
			}
		}
	}
	return Global_40001.f_2FCF;
}

void func_749(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		iVar0 = func_741(iParam1);
		unk_0x61755AC17D8F538E(*iParam0, iVar0);
	}
}

int func_750(int iParam0, int iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	
	iVar0 = unk_0x9539D44F3E4492F6(iParam0);
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		return 0;
	}
	*uParam2 = func_15(iVar0, Local_107.f_7, 0);
	if (*uParam2 > IntToFloat(iParam1))
	{
		return 0;
	}
	fVar1 = unk_0xEE9925602B29903C(iVar0);
	*uParam2 = func_14(*uParam2, fVar1);
	if (fVar1 > fParam3 && !bParam4)
	{
		return 0;
	}
	return 1;
}

void func_751()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_89))
	{
		unk_0x142CC44DB769B57E(&iLocal_89);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_90))
	{
		unk_0x142CC44DB769B57E(&iLocal_90);
	}
	if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 10))
	{
		func_742(Local_107.f_5, 432, 0, 0);
		func_740(Local_107.f_5, func_741(iLocal_81), 0, 0);
		func_733(Local_107.f_5, 0, 0, 0);
		unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 10);
	}
}

void func_752()
{
	int iVar0;
	int iVar1;
	
	switch (func_677(unk_0x57270EE11514DC67()))
	{
		case 1:
			iVar0 = 0;
			while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
			{
				iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
				if (iVar1 == 185)
				{
					func_753(iVar0);
				}
				iVar0++;
			}
			break;
	}
}

void func_753(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<6> Var4;
	int iVar5;
	
	iVar2 = func_11();
	iVar3 = func_11();
	unk_0x218F818E64020C17(1, iParam0, &Var4, 13);
	if (unk_0xC844350D5D58C99A(Var4))
	{
		if (unk_0xEC560E589DF8370E(Var4))
		{
			iVar0 = unk_0x940C1429253D3B1B(Var4);
			if (unk_0x34BFC6F0CB887BC2(iVar0))
			{
				iVar2 = unk_0x83FACCC48B68F9D1(iVar0);
				if (unk_0xFB75B0F82CA525F6(iVar2))
				{
					if (iVar2 != func_11())
					{
						if (func_5(iVar2, 0, 0))
						{
						}
					}
				}
			}
		}
	}
	if (iVar2 == func_16())
	{
		if (unk_0xC844350D5D58C99A(Var4.f_1))
		{
			if (unk_0xEC560E589DF8370E(Var4.f_1))
			{
				iVar1 = unk_0x940C1429253D3B1B(Var4.f_1);
				if (unk_0x34BFC6F0CB887BC2(iVar1))
				{
					iVar3 = unk_0x83FACCC48B68F9D1(iVar1);
					if (unk_0xFB75B0F82CA525F6(iVar3))
					{
						if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x7B9C1F53FE442D06(iVar3) /*3*/].f_2, 0))
						{
							if (iVar3 != func_11())
							{
								if (func_5(iVar3, 0, 0))
								{
								}
							}
						}
						else
						{
							return;
						}
					}
					else
					{
						return;
					}
				}
			}
		}
		if (iVar3 == unk_0xD803B885F5E47A62())
		{
			if (!func_664(unk_0xD803B885F5E47A62(), func_16(), 1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 8))
				{
					func_631();
					unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 8);
				}
			}
		}
		if (!Var4.f_5)
		{
			if (unk_0xD803B885F5E47A62() == iVar3)
			{
				if (!func_436(unk_0xD803B885F5E47A62(), 20))
				{
					func_754(0);
				}
			}
		}
		else
		{
			if (!unk_0xBFF81ED3B99522C7())
			{
				return;
			}
			if (iVar3 == iVar2)
			{
				return;
			}
			if (iVar3 != func_11())
			{
				Local_107.f_6 = iVar3;
				unk_0x5D96D8530B3D0904(&(Local_107.f_2), 3);
				func_18(2);
			}
		}
	}
	else if (iVar2 != func_11() && func_240(iVar2, 0))
	{
		iVar5 = func_85(iVar2);
		if (iVar5 == Local_107.f_5)
		{
			if (unk_0xC844350D5D58C99A(Var4.f_1))
			{
				if (unk_0xEC560E589DF8370E(Var4.f_1))
				{
					iVar1 = unk_0x940C1429253D3B1B(Var4.f_1);
					if (unk_0x34BFC6F0CB887BC2(iVar1))
					{
						iVar3 = unk_0x83FACCC48B68F9D1(iVar1);
						if (unk_0xFB75B0F82CA525F6(iVar3))
						{
							if (iVar3 != func_11())
							{
								if (func_5(iVar3, 0, 0))
								{
								}
							}
						}
					}
				}
			}
			if (iVar3 == unk_0xD803B885F5E47A62())
			{
				if (!func_664(unk_0xD803B885F5E47A62(), func_16(), 1))
				{
					if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 8))
					{
						func_631();
						unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 8);
					}
				}
			}
		}
	}
}

void func_754(int iParam0)
{
	if (!func_76(unk_0xD803B885F5E47A62()))
	{
		if (iParam0 || func_63(unk_0xD803B885F5E47A62()) != 0)
		{
			func_80(20);
			func_755(func_757());
			if (func_78(unk_0xD803B885F5E47A62()))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 8))
				{
					unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 8);
				}
			}
		}
	}
}

void func_755(int iParam0)
{
	int iVar0;
	
	if (Global_40001.f_217B)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_200000[func_756() /*10930*/].f_181E.f_100F[iVar0 /*3*/] == iParam0)
		{
			if (Global_14073A.f_1[iVar0] == 4294967295)
			{
				Global_14073A.f_1[iVar0] = iParam0;
				Global_14073A = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_756()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_757()
{
	int iVar0;
	
	iVar0 = func_44(unk_0xD803B885F5E47A62());
	if (func_758(iVar0) == 0)
	{
		return 4294967295;
	}
	if (func_100(iVar0))
	{
		return 65;
	}
	if (func_104(iVar0))
	{
		return 66;
	}
	if (func_602(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_758(int iParam0)
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

void func_759()
{
	var uVar0;
	
	switch (vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_1)
	{
		case 1:
			if (func_750(unk_0xD803B885F5E47A62(), (Global_40001.f_30CE - 1), &uVar0, 1123024896, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 8))
				{
					func_631();
					unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 8);
				}
			}
			break;
	}
}

void func_760()
{
	var uVar0;
	
	if (!func_17(Local_107.f_7))
	{
		if (Local_107.f_1 >= 1 || func_137() == Local_107.f_5)
		{
			func_785(164, Local_107.f_7, &uLocal_95, 1140457472, 1144750080, 0);
		}
		if (iLocal_80 != func_63(unk_0xD803B885F5E47A62()))
		{
			iLocal_80 = func_63(unk_0xD803B885F5E47A62());
		}
	}
	if (func_673())
	{
		if (func_775())
		{
			if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 11))
			{
				unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 11);
			}
		}
	}
	switch (func_677(unk_0x57270EE11514DC67()))
	{
		case 1:
			bLocal_97 = (func_68() || func_770(func_673()));
			if (bLocal_97)
			{
				if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0))
				{
					unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0);
					if (func_673())
					{
						func_764(0, 0);
						func_763(2);
					}
				}
			}
			else if (func_750(unk_0xD803B885F5E47A62(), 500, &uVar0, 1123024896, 0))
			{
				if (!unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0))
				{
					unk_0x5D96D8530B3D0904(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0);
					if (func_673())
					{
						func_764(1, 0);
						func_763(2);
					}
				}
			}
			else if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 0))
			{
				unk_0x0674E58A79778E99(&(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2), 0);
				if (func_673())
				{
					func_764(0, 0);
					func_762(2);
				}
			}
			if (!func_761())
			{
				if (func_750(unk_0xD803B885F5E47A62(), Global_40001.f_30CE, &uVar0, 1123024896, 0))
				{
					if (!func_436(unk_0xD803B885F5E47A62(), 20))
					{
						func_754(0);
					}
				}
			}
			break;
	}
}

int func_761()
{
	if (func_664(unk_0xD803B885F5E47A62(), func_16(), 1))
	{
		return 1;
	}
	return 0;
}

void func_762(int iParam0)
{
	unk_0x0674E58A79778E99(&Global_1801E0, iParam0);
}

void func_763(int iParam0)
{
	unk_0x5D96D8530B3D0904(&Global_1801E0, iParam0);
}

void func_764(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_765(iVar0, bParam0, bParam1);
		iVar0++;
	}
}

void func_765(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_769(iParam0, 8, 1))
		{
			func_768(iParam0, 8, 1);
		}
		if (bParam2)
		{
			if (!func_769(iParam0, 30, 1))
			{
				func_768(iParam0, 30, 1);
			}
		}
		else if (func_769(iParam0, 30, 1))
		{
			func_766(iParam0, 30, 1);
		}
	}
	else
	{
		if (func_769(iParam0, 8, 1))
		{
			func_766(iParam0, 8, 1);
		}
		if (func_769(iParam0, 30, 1))
		{
			func_766(iParam0, 30, 1);
		}
	}
}

void func_766(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x0674E58A79778E99(&(Global_181EC.f_54D[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_739() == 0)
		{
			iVar0 = func_28(func_767(iParam0), 4294967295, 0);
			unk_0x0674E58A79778E99(&iVar0, iParam1);
			func_25(func_767(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_767(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

void func_768(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_181EC.f_54D[iParam0]), iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_739() == 0)
		{
			iVar0 = func_28(func_767(iParam0), 4294967295, 0);
			unk_0x5D96D8530B3D0904(&iVar0, iParam1);
			func_25(func_767(iParam0), iVar0, 4294967295, 1, 0);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_29C[iParam0]), iParam1);
	}
}

int func_769(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_181EC.f_54D[iParam0], iParam1);
	}
	else if (unk_0x8CD06866876216F2())
	{
		if (func_739() == 0)
		{
			return unk_0xEAE0D21A50E6C7F4(func_28(func_767(iParam0), 4294967295, 0), iParam1);
		}
	}
	else
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_770(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_613(unk_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		return 1;
	}
	if (func_771(4))
	{
		return 1;
	}
	if (func_545())
	{
		return 1;
	}
	if (func_71(unk_0xD803B885F5E47A62(), 0))
	{
		return 1;
	}
	if (func_597())
	{
		return 1;
	}
	if (unk_0xF929B1A0A409FF93())
	{
		return 1;
	}
	return 0;
}

int func_771(int iParam0)
{
	int iVar0;
	
	if (func_774())
	{
		iVar0 = 0;
		while (iVar0 < 53)
		{
			if (func_773(iVar0) == iParam0)
			{
				if (func_772(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_772(int iParam0)
{
	return func_769(iParam0, 5, 1);
}

int func_773(int iParam0)
{
	switch (iParam0)
	{
		case 4294967295:
			return 6;
			break;
		
		case 0:
			return 0;
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
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

bool func_774()
{
	return Global_181EC.f_159 > 0;
}

int func_775()
{
	if (((((((((func_784() || func_783()) || func_782()) || func_545()) || (func_781() && !unk_0xA14BB9332558B949())) || (func_778() && !func_777())) || Global_248A6D) || Global_248A6D.f_1 != 0) || Global_248AB7 != 0) || (func_776() == 2 && !unk_0xA14BB9332558B949()))
	{
		return 1;
	}
	return 0;
}

int func_776()
{
	return Global_EC6CD;
}

bool func_777()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 27);
}

int func_778()
{
	if (func_780() || func_779())
	{
		return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 == 8;
	}
	return 0;
}

var func_779()
{
	return Global_2564C8.f_27B;
}

bool func_780()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 11);
}

bool func_781()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 5);
}

bool func_782()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 2);
}

bool func_783()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8, 20);
}

bool func_784()
{
	return Global_2564C8.f_256;
}

void func_785(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_78(unk_0xD803B885F5E47A62()) && !func_77(unk_0xD803B885F5E47A62())) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1, 8)) && (func_67(unk_0xD803B885F5E47A62()) || func_66(unk_0xD803B885F5E47A62()))) || func_17(vParam1))
	{
		return;
	}
	Global_198C6B = { vParam1 };
	fVar0 = SYSTEM::VDIST(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), vParam1);
	func_822(iParam0, fVar0);
	if (unk_0x798A3F1296751F46() && unk_0x8BB17FEBE0394018() == 15)
	{
		if (func_65(unk_0xD803B885F5E47A62()) || func_821(unk_0xD803B885F5E47A62()))
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
		if (!(func_71(unk_0xD803B885F5E47A62(), 21) || func_71(unk_0xD803B885F5E47A62(), 25)))
		{
			func_820(vParam1, 1, 0);
		}
		if (!*uParam2 && func_5(unk_0xD803B885F5E47A62(), 1, 1))
		{
			*uParam2 = 1;
			if (func_819(iParam0))
			{
				unk_0x51B096AAC60548C1(func_818(iParam0));
				if (func_817(iParam0, 4294967295))
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
			if (func_816(iParam0))
			{
				fVar1 = func_815(iParam0);
				if (fVar1 != 1f)
				{
					func_814(fVar1);
					unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 1);
				}
			}
			if (!Global_247C05)
			{
				if (func_813(iParam0) && func_65(unk_0xD803B885F5E47A62()))
				{
					func_811(1);
					func_810(2);
				}
			}
			func_80(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_436(unk_0xD803B885F5E47A62(), 19))
			{
				func_70(19);
			}
		}
		if (*uParam2 && func_5(unk_0xD803B885F5E47A62(), 1, 1))
		{
			*uParam2 = 0;
			if (func_819(iParam0))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 0))
				{
					unk_0x51B096AAC60548C1(1f);
					unk_0x34D79252800B23FF(5);
					unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 0);
				}
			}
			if (func_816(iParam0))
			{
				func_809();
				unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 1);
			}
			if (iParam5 && !func_78(unk_0xD803B885F5E47A62()))
			{
				if (func_44(unk_0xD803B885F5E47A62()) != 152)
				{
					func_787();
				}
			}
			if (func_193(2))
			{
				func_811(0);
				func_786(2);
			}
		}
	}
}

void func_786(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_2D), iParam0);
}

void func_787()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_18), &Global_24C36F, 2);
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_1A), &Global_24C371, 19);
	func_807();
	func_790(1, 1, 0);
	func_788();
}

void func_788()
{
	func_789(0, 0);
}

void func_789(int iParam0, int iParam1)
{
	Global_24B2D0.f_16 = iParam0;
	Global_24B2D0.f_17 = iParam1;
}

void func_790(bool bParam0, bool bParam1, bool bParam2)
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
		func_806();
	}
	if (!bParam2)
	{
		func_793(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_792(0);
	func_791();
}

void func_791()
{
	struct<6> Var0;
	
	if (Global_24B2D0.f_1E7.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_24B2D0.f_1E7 = { Var0 };
	}
}

void func_792(bool bParam0)
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

void func_793(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_805())
		{
			func_804();
		}
		Global_24B2D0.f_2C2.f_206 = unk_0x0D0A574C76D769AC();
		Global_24B2D0.f_2C2.f_1F8 = iParam1;
		Global_24B2D0.f_2C2.f_1F9 = iParam2;
		Global_24B2D0.f_2C2.f_1FA = iParam10;
		func_802();
		func_797(8, 0, 0, 0, 0);
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
		func_794();
	}
}

void func_794()
{
	if (func_805() && !func_796())
	{
		func_804();
	}
	if (func_796())
	{
		func_795();
	}
	else
	{
		func_802();
		func_797(0, 0, 0, 0, 0);
		Global_24B2D0.f_6D1 = 0;
		Global_24B2D0.f_6D0 = 0;
	}
}

void func_795()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2C2), &(Global_24B2D0.f_4C9), 519);
	Global_24B2D0.f_1E7 = { Global_24B2D0.f_1ED };
	if (unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		Global_24B2D0.f_6D0 = 0;
	}
}

int func_796()
{
	if ((Global_24B2D0.f_6D0 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_4C9.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_4C9.f_206))
	{
		return 1;
	}
	return 0;
}

void func_797(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2537E2.f_766.f_2BF.f_10 != func_11())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_2537E2.f_766.f_2BF.f_10 /*421*/].f_194, 0) && func_798())
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

int func_798()
{
	if ((((((func_44(unk_0xD803B885F5E47A62()) == 229 || func_44(unk_0xD803B885F5E47A62()) == 191) || func_801()) || func_800()) || func_589(unk_0xD803B885F5E47A62())) || Global_265BE2.f_E2 == 1) || (Global_24B2D0.f_6D1 && func_799(unk_0xD803B885F5E47A62())))
	{
		return 0;
	}
	return 1;
}

int func_799(int iParam0)
{
	if (func_67(iParam0))
	{
		return 1;
	}
	if (func_76(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_800()
{
	return Global_180605;
}

int func_801()
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_802()
{
	if (func_805() && !func_796())
	{
		func_804();
	}
	func_803();
	Global_24B2D0.f_2C2 = 0;
}

void func_803()
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

void func_804()
{
	if (func_796())
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

int func_805()
{
	if ((Global_24B2D0.f_6D1 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_2C2.f_206))
	{
		return 1;
	}
	return 0;
}

void func_806()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_16D), &Global_24C4C4, 121);
}

void func_807()
{
	func_808();
	Global_24B2D0.f_8CE = 0;
}

void func_808()
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

void func_809()
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

void func_810(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_2D), iParam0);
}

void func_811(int iParam0)
{
	if (func_812() && iParam0)
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

int func_812()
{
	if ((((Global_EC6CD != 4294967295 && Global_EC6CD != 33) && Global_EC6CD != 35) && Global_EC6CD != 37) && Global_EC6CD != 21)
	{
		return 1;
	}
	return 0;
}

int func_813(int iParam0)
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

void func_814(float fParam0)
{
	float fVar0;
	
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_737())
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

float func_815(int iParam0)
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

int func_816(int iParam0)
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

int func_817(int iParam0, int iParam1)
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

float func_818(int iParam0)
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

int func_819(int iParam0)
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

void func_820(vector3 vParam0, int iParam1, int iParam2)
{
	Global_24B2D0.f_2D.f_31 = { vParam0 };
	Global_24B2D0.f_2D.f_34 = iParam1;
	Global_24B2D0.f_2D.f_35 = iParam2;
}

int func_821(int iParam0)
{
	if (func_118(iParam0))
	{
		if (func_65(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_822(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_823(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_631();
	}
}

int func_823(int iParam0)
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

void func_824()
{
	switch (func_827())
	{
		case 1:
			if (func_677(unk_0x57270EE11514DC67()) != 1)
			{
				func_826(func_761());
				func_825(1);
			}
			break;
		
		case 2:
			if (func_677(unk_0x57270EE11514DC67()) != 2)
			{
				func_826(func_761());
				func_825(2);
			}
			break;
		
		case 3:
			if (func_677(unk_0x57270EE11514DC67()) != 3)
			{
				func_826(func_761());
				func_825(3);
			}
			break;
	}
}

void func_825(int iParam0)
{
	vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_1 = iParam0;
}

void func_826(bool bParam0)
{
	if (bParam0)
	{
		if (!func_436(unk_0xD803B885F5E47A62(), 9))
		{
			if (func_63(unk_0xD803B885F5E47A62()) != 0)
			{
				func_80(9);
			}
		}
	}
	else if (func_436(unk_0xD803B885F5E47A62(), 9))
	{
		func_70(9);
	}
}

int func_827()
{
	return Local_107.f_1;
}

void func_828()
{
	iLocal_80 = func_63(unk_0xD803B885F5E47A62());
	func_829(164, 1, 4294967295, 0);
	iLocal_81 = func_208(Local_107.f_5, 4294967294, 0, 0, 0);
	unk_0xA402F6C87C08815C(iLocal_81, &(uLocal_94[0]), &(uLocal_94[1]), &(uLocal_94[2]), &(uLocal_94[3]));
}

void func_829(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 != iParam0)
	{
		func_843(4294967295);
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 = iParam0;
		if (func_842() != 4294967295)
		{
			func_841(4294967295);
		}
		if (func_840() != 4294967295)
		{
			func_839(4294967295);
		}
		func_838(iParam2);
		func_836(iParam0);
		if (!func_816(iParam0))
		{
			fVar0 = func_815(iParam0);
			if (fVar0 != 1f)
			{
				func_814(fVar0);
				unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 1);
			}
		}
		if (!func_819(iParam0) || iParam3)
		{
			if (func_817(iParam0, iParam2) && iParam3 == 1)
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
		if (func_75())
		{
			func_80(27);
		}
		if (bParam1)
		{
			if (!func_68())
			{
				func_811(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 1) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 4)) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0))
			{
				func_198(6);
			}
			func_835();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0x15EA7F4313456B1D(3, false);
			unk_0x15EA7F4313456B1D(5, false);
		}
		if (func_78(unk_0xD803B885F5E47A62()) && func_65(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 8);
		}
		func_831();
		if (func_830(iParam0))
		{
			unk_0x15EA7F4313456B1D(3, false);
			unk_0x15EA7F4313456B1D(5, false);
			unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 6);
		}
		Global_26B66F.f_19B3 = 0;
	}
}

int func_830(int iParam0)
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

void func_831()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_834();
	iVar2 = func_85(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (func_664(iVar1, iVar2, 1) || func_832(iVar1, unk_0xD803B885F5E47A62()))
			{
				unk_0xD463D0CE3DC66332(unk_0xD803B885F5E47A62(), iVar1, bVar3);
				unk_0xD463D0CE3DC66332(iVar1, unk_0xD803B885F5E47A62(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_832(int iParam0, int iParam1)
{
	if (func_240(iParam0, 1) && func_240(iParam1, 1))
	{
		return (func_833(iParam0) == func_85(iParam1) || func_833(iParam1) == func_85(iParam0));
	}
	return 0;
}

int func_833(int iParam0)
{
	if (func_240(iParam0, 1))
	{
		return Global_18D84D[func_85(iParam0) /*615*/].f_B.f_1E4;
	}
	return func_11();
}

int func_834()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_137();
	if (iVar0 != func_11())
	{
		if (func_5(iVar0, 0, 1))
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

void func_835()
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

void func_836(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_28(3791, 4294967295, 0);
	iVar1 = func_837(iParam0);
	if (iVar1 != 4294967295)
	{
		unk_0x5D96D8530B3D0904(&iVar0, iVar1);
		func_25(3791, iVar0, 4294967295, 1, 0);
	}
}

int func_837(int iParam0)
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

void func_838(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (Global_18D84D[iVar0 /*615*/].f_B.f_B5 != iParam0)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_B5 = iParam0;
	}
}

void func_839(int iParam0)
{
	if (Global_26B66F.f_1404.f_154 != iParam0)
	{
		Global_26B66F.f_1404.f_154 = iParam0;
	}
}

int func_840()
{
	return Global_26B66F.f_1404.f_154;
}

void func_841(int iParam0)
{
	if (Global_26B66F.f_1404.f_153 != iParam0)
	{
		Global_26B66F.f_1404.f_153 = iParam0;
	}
}

int func_842()
{
	return Global_26B66F.f_1404.f_153;
}

void func_843(int iParam0)
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_20 = iParam0;
}

void func_844(int iParam0)
{
	vLocal_108[unk_0x57270EE11514DC67() /*3*/] = iParam0;
}

int func_845()
{
	return Local_107;
}

int func_846(int iParam0)
{
	return vLocal_108[iParam0 /*3*/];
}

int func_847(bool bParam0)
{
	if (func_850(1))
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
		if (func_29() == func_11() || !func_5(func_29(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_600(unk_0xD803B885F5E47A62()))
	{
		if (func_849(unk_0xD803B885F5E47A62()) && func_848())
		{
			return 1;
		}
	}
	return 0;
}

int func_848()
{
	switch (func_62(func_592(unk_0xD803B885F5E47A62())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_849(int iParam0)
{
	if (iParam0 != func_11() && func_5(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 4);
	}
	return 0;
}

int func_850(bool bParam0)
{
	bool bVar0;
	
	if (!func_135(1))
	{
		bVar0 = false;
		if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 != func_11())
		{
			if (func_5(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39, 0, 1))
			{
				if ((Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 4 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 8) || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_758(func_44(unk_0xD803B885F5E47A62())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_198(31);
				if (func_47(func_44(unk_0xD803B885F5E47A62())))
				{
					func_198(81);
				}
				if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 != func_11() && unk_0x40B8C182D63932FC(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39))
				{
					Global_18D265 = func_208(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39, 4294967294, 0, 0, 0);
					if (!func_40(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39))
					{
						func_198(88);
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

int func_851()
{
	var uVar0;
	
	func_855(&uVar0);
	if (Global_140856 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_854())
	{
		return 1;
	}
	if (Global_2594CA)
	{
		return 1;
	}
	if (func_853())
	{
		return 1;
	}
	if (func_852(159))
	{
		if (!func_784())
		{
			return 1;
		}
	}
	if (func_852(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_737() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_737()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_852(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_853()
{
	return Global_258C08;
}

bool func_854()
{
	return Global_2564C8.f_251;
}

void func_855(var uParam0)
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
					func_856(iVar0);
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

void func_856(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_5(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_857(iVar2, &bVar3))
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

int func_857(int iParam0, var uParam1)
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

void func_858()
{
	SYSTEM::WAIT(0);
}

void func_859()
{
	if (func_673())
	{
		if (func_630(unk_0xD803B885F5E47A62(), 0))
		{
			func_314(unk_0xD803B885F5E47A62(), 0);
		}
	}
	if (unk_0x57270EE11514DC67() != 4294967295)
	{
		if (unk_0xEAE0D21A50E6C7F4(vLocal_108[unk_0x57270EE11514DC67() /*3*/].f_2, 7))
		{
			func_316(0, 4, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
		}
	}
	if (func_906(2))
	{
		func_762(2);
	}
	if (func_682(&iLocal_105, 10, 4294967295))
	{
		unk_0x55D0A2DB35045A35(iLocal_104);
		iLocal_104 = 4294967295;
		func_682(&iLocal_105, 10, 0);
	}
	if (func_682(&iLocal_105, 11, 4294967295))
	{
		func_675(0);
	}
	Global_198C74.f_2 = Local_107.f_14;
	Global_198C74.f_3 = Local_107.f_15;
	func_904(Local_107.f_4, 4294967295, 4294967295, 3212836864);
	func_764(0, 0);
	func_860(0, 0);
	unk_0x10FAF14A60A0DBE1();
}

void func_860(bool bParam0, int iParam1)
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
		func_902();
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 4);
	}
	if ((func_105() && iParam1 != 0) && Global_40001.f_4255)
	{
		if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 190 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 192)
		{
			func_884(unk_0xD803B885F5E47A62(), iParam1, 1, 0);
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
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 14) && !func_78(unk_0xD803B885F5E47A62()))
		{
			func_811(0);
		}
	}
	else if (func_882(unk_0xD803B885F5E47A62()) != 4294967295)
	{
		func_843(4294967295);
	}
	func_881(func_11());
	if (func_193(16))
	{
		func_786(16);
	}
	func_878(0);
	func_838(4294967295);
	func_877();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_876(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_873(iVar1);
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
	iVar2 = func_57();
	if ((func_36(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_872(4294967295);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_104(iVar2))
	{
		func_869(4294967295, 1);
	}
	else if (((((func_56(iVar2) || func_868(iVar2)) || func_867(iVar2)) || func_97(iVar2)) || func_96(iVar2)) || func_95(iVar2))
	{
	}
	else
	{
		func_869(4294967295, 1);
	}
	func_70(19);
	func_70(20);
	func_70(21);
	func_70(22);
	func_70(27);
	func_786(3);
	func_786(4);
	func_786(7);
	func_866();
	if (func_65(unk_0xD803B885F5E47A62()))
	{
		func_826(0);
	}
	func_70(29);
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 = func_11();
	if (Global_26B66F.f_1404.f_29 != 0)
	{
		Global_26B66F.f_1404.f_29 = 0;
	}
	if (bParam0)
	{
		func_787();
	}
	if (!func_78(unk_0xD803B885F5E47A62()))
	{
		func_809();
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
		func_865("IMPEXP_SELFDES", 0);
		func_863("IMPEXP_SELFDES");
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 8);
	}
	func_861(iVar2, 0);
}

void func_861(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 9))
		{
			unk_0x8BC9595FD2792B5D(func_862(iParam0));
			unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 9);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 9))
	{
		unk_0x8910D3D58E0132B8(func_862(iParam0));
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 9);
	}
}

char* func_862(int iParam0)
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

void func_863(char* sParam0)
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
					func_699();
					Global_1B416.f_3738[iVar0 /*104*/].f_63[Global_4C1E] = 0;
					if (func_864(iVar0))
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

int func_864(int iParam0)
{
	if ((Global_1B416.f_3738[iParam0 /*104*/].f_63[0] == 1 || Global_1B416.f_3738[iParam0 /*104*/].f_63[1] == 1) || Global_1B416.f_3738[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_865(char* sParam0, int iParam1)
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

void func_866()
{
	if (func_632(unk_0xD803B885F5E47A62()))
	{
		func_70(25);
	}
}

int func_867(int iParam0)
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

int func_868(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_869(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_57();
	}
	if (iParam0 > 0)
	{
		if (func_137() != func_11())
		{
			if (func_601(unk_0xD803B885F5E47A62()) == unk_0xD803B885F5E47A62())
			{
				Global_265EAE.f_5D[func_871(iParam0)] = 1;
			}
		}
		iVar0 = func_871(159);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(157);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(148);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(164);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(142);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(152);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(166);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(170);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(173);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(179);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(200);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(201);
		if (func_870(iVar0, Global_40001.f_313E, bParam1))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(182);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(183);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(185);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(186);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(180);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(195);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(197);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(198);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(207);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(208);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(209);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(214);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(215);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(216);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(217);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(218);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(219);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(220);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(221);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_870(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_436(unk_0xD803B885F5E47A62(), 19) && !func_436(unk_0xD803B885F5E47A62(), 20)) && !func_436(unk_0xD803B885F5E47A62(), 9))
		{
			return 0;
		}
	}
	if (Global_265EAE.f_5D[iParam0] == 1 && func_21(&(Global_265EAE[iParam0 /*2*/])))
	{
		if (func_731(&(Global_265EAE[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_265EAE.f_5D[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_871(int iParam0)
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

void func_872(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_57();
	}
	if (iParam0 > 0)
	{
		if (func_137() != func_11())
		{
			Global_265EAE.f_5D[func_871(iParam0)] = 1;
		}
		iVar0 = func_871(155);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(163);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(160);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(153);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(162);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(154);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(171);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(172);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(199);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(194);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(193);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(210);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(205);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(189);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_871(211);
		if (func_870(iVar0, Global_40001.f_313F, 0))
		{
			func_8(&(Global_265EAE[iVar0 /*2*/]));
			func_20(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_873(int iParam0)
{
	if (!func_874(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_151[iParam0 /*3*/], func_875(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_151[iParam0 /*3*/] = { func_875() };
	}
	if (!func_874(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_144[iParam0 /*3*/], func_875(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_144[iParam0 /*3*/] = { func_875() };
	}
}

bool func_874(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_875()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_876(int iParam0)
{
	if (!func_874(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_96[iParam0 /*3*/], func_875(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_96[iParam0 /*3*/] = { func_875() };
	}
	if (!func_874(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_7D[iParam0 /*3*/], func_875(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_7D[iParam0 /*3*/] = { func_875() };
	}
}

void func_877()
{
	struct<20> Var0;
	
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Global_18040E = { Var0 };
	Global_18040E.f_D = func_11();
	if (unk_0xEAE0D21A50E6C7F4(Global_1801E0, 3))
	{
		unk_0x0674E58A79778E99(&Global_1801E0, 3);
	}
}

void func_878(bool bParam0)
{
	if (bParam0)
	{
		if (!func_623(unk_0xD803B885F5E47A62(), 14))
		{
			func_880(14);
		}
	}
	else if (func_623(unk_0xD803B885F5E47A62(), 14))
	{
		func_879(14);
	}
}

void func_879(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_5), iParam0);
}

void func_880(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_5), iParam0);
}

void func_881(int iParam0)
{
	if (func_118(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xD803B885F5E47A62() != iParam0)
		{
			if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1E4 != iParam0)
			{
				Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1E4 = iParam0;
				if (iParam0 != func_11())
				{
				}
			}
		}
	}
}

int func_882(int iParam0)
{
	if (func_883(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_20;
	}
	return 4294967295;
}

int func_883(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295 || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295))
	{
		return 1;
	}
	return 0;
}

void func_884(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_284(iParam0, iParam1) && func_901(iParam0, iParam1))
	{
		iVar0 = func_283(iParam0, iParam1);
		func_888(iVar0, bParam2, bParam3);
		func_885(iVar0, 1);
	}
}

void func_885(int iParam0, bool bParam1)
{
	if (!func_887(iParam0))
	{
		return;
	}
	func_267(func_886(iParam0), bParam1, 4294967295, 1);
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_6 = bParam1;
}

int func_886(int iParam0)
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

bool func_887(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_888(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_563(unk_0xD803B885F5E47A62(), iParam0);
	if (!bParam1)
	{
		func_900(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_265A43[iParam0];
		iVar0 = func_899(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1993C9 = 4294967295;
		}
		func_898(iParam0, 0, bParam2);
	}
	else if (func_896(iParam0, bParam2))
	{
		iVar0 = func_895(iVar2, 0);
		iVar3 = func_415(unk_0xD803B885F5E47A62(), iVar2);
		iVar4 = func_894(iVar2, bParam2);
		iVar5 = func_895(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_893(iVar2) && func_892(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_900(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_891(unk_0xD803B885F5E47A62(), iVar2) > 0)
		{
			func_890(iParam0, (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2 - (func_894(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_895(iVar2, bParam2) / func_891(unk_0xD803B885F5E47A62(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_893(iVar2) && func_892(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_889(unk_0xD803B885F5E47A62(), iVar2, iVar0, bParam2);
}

void func_889(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return;
	}
	if (func_274(iParam1))
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

void func_890(int iParam0, int iParam1)
{
	if (iParam0 != 4294967295 && iParam1 != Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2)
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_891(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_274(iParam1))
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

int func_892(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_11())
	{
		return 0;
	}
	if (func_274(iParam1) && func_893(iParam1))
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

bool func_893(int iParam0)
{
	return func_131(iParam0) == 5;
}

int func_894(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_131(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_40001.f_4236;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_423B;
			}
			break;
		
		case 3:
			uVar0 = Global_40001.f_4235;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_423A;
			}
			break;
		
		case 4:
			uVar0 = Global_40001.f_4234;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_4239;
			}
			break;
		
		case 0:
			uVar0 = Global_40001.f_4232;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_4237;
			}
			break;
		
		case 2:
			uVar0 = Global_40001.f_4233;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_4238;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_40001.f_5252;
				if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_40001.f_5253;
				}
			}
			else
			{
				uVar0 = Global_40001.f_5242;
				if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_40001.f_5243;
				}
			}
			break;
	}
	return uVar0;
}

int func_895(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_131(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_40001.f_4223;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_422C);
			}
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_4231);
			}
			break;
		
		case 3:
			iVar0 = Global_40001.f_4224;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_422B);
			}
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_4230);
			}
			break;
		
		case 4:
			iVar0 = Global_40001.f_4225;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_422A);
			}
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_422F);
			}
			break;
		
		case 0:
			iVar0 = Global_40001.f_4226;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_4228);
			}
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_422D);
			}
			break;
		
		case 2:
			iVar0 = Global_40001.f_4227;
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_4229);
			}
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 1))
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
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 0))
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
			if (func_282(unk_0xD803B885F5E47A62(), iParam0, 1))
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
			if (func_892(unk_0xD803B885F5E47A62(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_896(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_268(15384, 4294967295, 4294967295);
	}
	return func_268(func_897(iParam0), 4294967295, 4294967295);
}

int func_897(int iParam0)
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

void func_898(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_267(15384, bParam1, 4294967295, 1);
		return;
	}
	func_267(func_897(iParam0), bParam1, 4294967295, 1);
}

int func_899(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_265A43[iParam0];
	iVar1 = func_563(unk_0xD803B885F5E47A62(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_265A4A;
	}
	if (func_893(iVar1))
	{
		if (func_892(unk_0xD803B885F5E47A62(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_900(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_265A4A = iParam1;
		return;
	}
	Global_265A43[iParam0] = iParam1;
}

int func_901(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_284(iParam0, iParam1))
	{
		iVar0 = func_283(iParam0, iParam1);
		if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_4 > 0 && Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_902()
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 28);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 29);
	func_903(24);
}

void func_903(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

void func_904(var uParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	struct<14> Var1;
	struct<17> Var2;
	struct<17> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<16> Var6;
	struct<18> Var7;
	struct<18> Var8;
	struct<19> Var9;
	struct<18> Var10;
	
	sVar0 = unk_0xBB0808A181D4745C();
	Var1 = Global_198C74;
	Var1.f_1 = Global_198C74.f_1;
	Var1.f_2 = Global_198C74.f_2;
	Var1.f_3 = Global_198C74.f_3;
	Var1.f_4 = Global_198C74.f_4;
	Var1.f_5 = Global_198C74.f_5;
	Var1.f_6 = Global_198C74.f_6;
	Var1.f_7 = Global_198C74.f_7;
	Var1.f_8 = Global_198C74.f_8;
	Var1.f_9 = Global_198C74.f_9;
	Var1.f_A = Global_198C74.f_A;
	Var1.f_B = Global_198C74.f_B;
	Var1.f_C = Global_198C74.f_C;
	Var1.f_D = Global_198C74.f_E;
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0x7F8A39872A07D2CE(sVar0, "GB_DEATHMATCH"))
		{
			Var2 = { Var1 };
			Var2.f_E = Global_198C74.f_F;
			Var2.f_F = Global_198C74.f_10;
			Var2.f_10 = Global_198C74.f_11;
			unk_0x28C4917D9A295449(&Var2);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_YACHT_ROB"))
		{
			Var3 = { Var1 };
			Var3.f_E = Global_198C74.f_F;
			Var3.f_F = uParam0;
			Var3.f_10 = iParam1;
			unk_0x9E59224EB51EDA45(&Var3);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var4 = { Var1 };
			Var4.f_E = Global_198C74.f_F;
			Var4.f_F = uParam0;
			unk_0xB1DA4601C652C7C5(&Var4);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SIGHTSEER"))
		{
			Var5 = { Var1 };
			Var5.f_E = Global_198C74.f_F;
			Var5.f_F = uParam0;
			Var5.f_10 = iParam1;
			unk_0xBC121608DEC826ED(&Var5);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ASSAULT"))
		{
			Var6 = { Var1 };
			Var6.f_E = Global_198C74.f_F;
			Var6.f_F = uParam0;
			unk_0x8CE98B2741F42F3A(&Var6);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_BELLYBEAST"))
		{
			Var7 = { Var1 };
			Var7.f_E = Global_198C74.f_F;
			Var7.f_F = uParam0;
			Var7.f_10 = iParam1;
			Var7.f_11 = iParam2;
			unk_0xD97D13FD5AE7CC65(&Var7);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_HEADHUNTER"))
		{
			Var8 = { Var1 };
			Var8.f_E = uParam0;
			Var8.f_F = iParam1;
			Var8.f_10 = iParam2;
			Var8.f_11 = Global_198C74.f_F;
			unk_0x7E3D8B81F0B41A06(&Var8);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var9 = { Var1 };
			Var9.f_F = uParam0;
			Var9.f_10 = iParam1;
			Var9.f_11 = iParam2;
			Var9.f_E = iParam3;
			Var9.f_12 = Global_198C74.f_F;
			unk_0xAB72C270A0CBFA80(&Var9);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_AIRFREIGHT"))
		{
			Var10 = { Var1 };
			Var10.f_E = uParam0;
			Var10.f_F = iParam1;
			Var10.f_10 = iParam2;
			Var10.f_11 = Global_198C74.f_F;
			unk_0x4C3BFB72890DD032(&Var10);
		}
	}
	func_905();
}

void func_905()
{
	struct<18> Var0;
	
	Global_198C74 = { Var0 };
}

bool func_906(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1801E0, iParam0);
}

int func_907(struct<21> Param0)
{
	func_952(func_953(Param0), Param0);
	func_911(164, 0, 0);
	unk_0x3A4967AE7C71F999(0);
	func_908(0, 4294967295, 0);
	unk_0x9752E7BAEABA939E(&Local_107, 22);
	unk_0x35B62793EAE9ADDF(&vLocal_108, 97);
	unk_0x256D93AFAE851A7A(0);
	return 1;
}

int func_908(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_910();
			}
			else
			{
				return 0;
			}
		}
		if (!func_909())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_910();
					}
					else
					{
						return 0;
					}
				}
				if (func_854())
				{
					if (!bParam2)
					{
						func_910();
					}
					else
					{
						return 0;
					}
				}
				if (func_852(157))
				{
					if (!bParam2)
					{
						func_910();
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
					func_910();
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
				func_910();
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
			func_910();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_909()
{
	return Global_140856;
}

void func_910()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_911(int iParam0, int iParam1, bool bParam2)
{
	func_951();
	if (func_600(unk_0xD803B885F5E47A62()))
	{
		func_913(1);
	}
	if ((iParam0 != 0 && unk_0x40B8C182D63932FC(iParam1)) && func_679(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x5D96D8530B3D0904(&Global_198C66, 0);
				break;
			}
	}
	if (!func_117() && !func_240(unk_0xD803B885F5E47A62(), 1))
	{
		if (func_73())
		{
			func_810(3);
		}
	}
	func_810(4);
	if (func_135(0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 = func_137();
	}
	if (func_47(iParam0))
	{
		func_413();
		Global_198C86.f_12 = func_393(func_29());
	}
	else if (func_55(func_882(unk_0xD803B885F5E47A62())))
	{
		func_411();
		Global_198CBC.f_12 = func_393(func_29());
	}
	if (bParam2)
	{
		if (!func_68())
		{
			func_811(1);
		}
	}
	func_912();
}

void func_912()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_14DB79.f_216[iVar0 /*42*/].f_1 = func_11();
		Global_14DB79.f_216[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_913(bool bParam0)
{
	int iVar0;
	
	func_903(33);
	func_903(34);
	func_903(35);
	func_903(36);
	func_903(37);
	func_903(38);
	func_903(39);
	func_903(40);
	func_903(43);
	func_903(41);
	func_903(54);
	func_903(42);
	func_903(47);
	func_950(23);
	func_950(24);
	func_903(92);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 2);
	func_949();
	func_944();
	func_939();
	func_934();
	func_923();
	func_919();
	func_915();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_26B66F.f_1404.f_E[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_914(3))
	{
		func_950(3);
	}
	else if (func_914(4))
	{
		func_950(4);
	}
	else if (func_914(5))
	{
		func_950(5);
	}
	else if (func_914(6))
	{
		func_950(6);
	}
	else if (func_914(7))
	{
		func_950(7);
	}
	else if (((((((((((((((((func_914(0) || func_914(1)) || func_914(2)) || func_914(8)) || func_914(9)) || func_914(10)) || func_914(11)) || func_914(12)) || func_914(13)) || func_914(14)) || func_914(15)) || func_914(16)) || func_914(17)) || func_914(18)) || func_914(19)) || func_914(20)) || func_914(21)) || func_914(22))
	{
		func_950(8);
		func_950(0);
		func_950(1);
		func_950(2);
		func_950(9);
		func_950(10);
		func_950(11);
		func_950(12);
		func_950(13);
		func_950(14);
		func_950(15);
		func_950(16);
		func_950(17);
		func_950(18);
		func_950(19);
		func_950(20);
		func_950(21);
		func_950(22);
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

bool func_914(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_E[iVar0], iVar1);
}

void func_915()
{
	if (func_917())
	{
		func_916(0);
		func_916(1);
		func_916(2);
		func_916(3);
	}
}

void func_916(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_21[iVar0]), iVar1);
}

int func_917()
{
	if (((func_918(0) || func_918(1)) || func_918(2)) || func_918(3))
	{
		return 1;
	}
	return 0;
}

bool func_918(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_21[iVar0], iVar1);
}

void func_919()
{
	if (func_921())
	{
		func_920(4);
		func_920(5);
		func_920(6);
		func_920(7);
	}
}

void func_920(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_1F[iVar0]), iVar1);
}

int func_921()
{
	if (((func_922(4) || func_922(5)) || func_922(6)) || func_922(7))
	{
		return 1;
	}
	return 0;
}

bool func_922(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_1F[iVar0], iVar1);
}

void func_923()
{
	int iVar0;
	
	if (func_933())
	{
		func_932(8);
		func_932(9);
		func_932(10);
		func_932(12);
		func_932(13);
		func_932(14);
		func_932(19);
		func_932(20);
		func_932(21);
		func_932(22);
		func_932(23);
		func_932(24);
		func_932(25);
		func_932(26);
		func_932(15);
		func_932(16);
		func_932(17);
		func_932(18);
		func_932(35);
		func_932(45);
		func_932(46);
		if (func_931(11))
		{
			func_932(11);
			iVar0 = func_28(7226, 4294967295, 0);
			unk_0x5D96D8530B3D0904(&iVar0, 2);
			func_25(7226, iVar0, 4294967295, 1, 0);
		}
	}
	if (func_931(48))
	{
		if (func_929(151, 3))
		{
			func_927(151, 3);
		}
		func_932(48);
	}
	if (func_931(49))
	{
		if (func_929(152, 3))
		{
			func_927(152, 3);
		}
		func_932(49);
	}
	if (func_931(50))
	{
		if (func_929(153, 3))
		{
			func_927(153, 3);
		}
		func_932(50);
	}
	if (func_931(51))
	{
		if (func_929(func_924(), 3))
		{
			func_927(func_924(), 3);
		}
		func_932(51);
	}
}

int func_924()
{
	if (func_926())
	{
		func_925(154, Global_4C1E, 1);
	}
	return 154;
}

void func_925(int iParam0, int iParam1, int iParam2)
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

int func_926()
{
	int iVar0;
	
	iVar0 = func_85(unk_0xD803B885F5E47A62());
	if (((iVar0 != unk_0xD803B885F5E47A62() && iVar0 != func_11()) && unk_0x40B8C182D63932FC(iVar0)) && iVar0 != 4294967295)
	{
		return 1;
	}
	return 0;
}

void func_927(int iParam0, int iParam1)
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
			func_928(iParam0, iVar0, 0);
			func_925(iParam0, iVar0, 0);
		}
	}
}

void func_928(int iParam0, int iParam1, int iParam2)
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

int func_929(int iParam0, int iParam1)
{
	if (func_930(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_930(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_706[iParam0 /*29*/].f_C[iParam1];
}

bool func_931(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_1A[iVar0], iVar1);
}

void func_932(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_1A[iVar0]), iVar1);
}

int func_933()
{
	if (((((((((((((((((((((func_931(8) || func_931(9)) || func_931(10)) || func_931(12)) || func_931(11)) || func_931(13)) || func_931(14)) || func_931(19)) || func_931(20)) || func_931(21)) || func_931(22)) || func_931(23)) || func_931(24)) || func_931(25)) || func_931(26)) || func_931(15)) || func_931(16)) || func_931(17)) || func_931(18)) || func_931(35)) || func_931(45)) || func_931(46))
	{
		return 1;
	}
	return 0;
}

void func_934()
{
	if (func_938())
	{
		func_937(0);
		func_937(1);
		func_937(2);
		func_937(3);
		func_937(4);
		func_937(5);
		if (func_936(32))
		{
			if (func_929(func_935(), 3))
			{
				func_927(func_935(), 3);
			}
			func_937(32);
		}
	}
}

int func_935()
{
	if (func_926())
	{
		func_925(12, Global_4C1E, 1);
	}
	return 12;
}

bool func_936(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_17[iVar0], iVar1);
}

void func_937(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_17[iVar0]), iVar1);
}

int func_938()
{
	if ((((func_936(1) || func_936(0)) || func_936(2)) || func_936(4)) || func_936(5))
	{
		return 1;
	}
	return 0;
}

void func_939()
{
	if (func_943())
	{
		func_942(0);
		func_942(1);
		func_942(2);
		func_942(3);
		func_942(4);
		func_942(5);
		func_942(6);
		func_942(7);
		if (func_941(8))
		{
			func_942(8);
		}
		if (func_941(15))
		{
			if (func_929(func_940(), 3))
			{
				func_927(func_940(), 3);
			}
			func_942(15);
		}
	}
}

int func_940()
{
	if (func_926())
	{
		func_925(20, Global_4C1E, 1);
	}
	return 20;
}

bool func_941(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_15[iVar0], iVar1);
}

void func_942(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_15[iVar0]), iVar1);
}

int func_943()
{
	if ((((((((func_941(0) || func_941(1)) || func_941(2)) || func_941(3)) || func_941(4)) || func_941(5)) || func_941(6)) || func_941(7)) || func_941(8))
	{
		return 1;
	}
	return 0;
}

void func_944()
{
	if (func_948())
	{
		func_947(0);
		func_947(1);
		func_947(2);
		func_947(3);
		func_947(4);
		func_947(5);
		func_947(6);
		func_947(7);
		func_947(8);
		func_947(9);
		func_947(10);
		func_947(11);
		func_947(12);
		if (func_946(13))
		{
			if (func_929(func_945(), 3))
			{
				func_927(func_945(), 3);
			}
			func_947(13);
		}
	}
}

int func_945()
{
	if (func_926())
	{
		func_925(76, Global_4C1E, 1);
	}
	return 76;
}

bool func_946(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_13[iVar0], iVar1);
}

void func_947(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_13[iVar0]), iVar1);
}

int func_948()
{
	if ((((((((((((func_946(0) || func_946(1)) || func_946(2)) || func_946(3)) || func_946(4)) || func_946(5)) || func_946(6)) || func_946(7)) || func_946(8)) || func_946(9)) || func_946(10)) || func_946(11)) || func_946(12))
	{
		return 1;
	}
	return 0;
}

void func_949()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_26B66F.f_1404.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_950(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_E[iVar0]), iVar1);
}

void func_951()
{
	struct<14> Var0;
	
	Global_198C74 = { Var0 };
	Global_198C74.f_E = 0;
	Global_198C74.f_F = 0;
}

void func_952(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_910();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_10);
}

int func_953(int iParam0)
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

