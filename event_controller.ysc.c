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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	float fLocal_47 = 0f;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x2EBF608FFE6CA406(34))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_140();
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (unk_0x1963B11DE70153E0())
	{
		iVar2 = 0;
		while (iVar2 < unk_0xDFB2BAED99ED0A2E(1))
		{
			iVar7 = unk_0xB98DB26FBF676FA1(1, iVar2);
			switch (iVar7)
			{
				case 192:
					func_137();
					break;
				
				case 193:
					func_136();
					break;
				
				case 194:
					func_130(iVar2);
					break;
				
				case 195:
					func_129(iVar2);
					break;
				
				case 196:
					func_118(iVar2);
					break;
				
				case 214:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0xDFB2BAED99ED0A2E(0))
	{
		iVar0 = unk_0xB98DB26FBF676FA1(0, iVar2);
		iLocal_64 = 1;
		switch (iVar0)
		{
			case 141:
				unk_0x218F818E64020C17(0, iVar2, &iVar1, 1);
				if (unk_0xC844350D5D58C99A(iVar1))
				{
					if (unk_0xE2F1E99DD161A861(iVar1))
					{
						if (func_2(iVar3))
						{
							Global_D203.f_1[iVar3] = iVar1;
							iVar3++;
						}
					}
					else if (unk_0xEC560E589DF8370E(iVar1))
					{
						if (func_2(iVar5))
						{
							Global_D203.f_19[iVar5] = iVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 142:
				unk_0x218F818E64020C17(0, iVar2, &iVar1, 1);
				if (unk_0xC844350D5D58C99A(iVar1))
				{
					if (unk_0xE2F1E99DD161A861(iVar1))
					{
						if (func_2(iVar4))
						{
							Global_D203.f_D[iVar4] = iVar1;
							iVar4++;
						}
					}
					else if (unk_0xEC560E589DF8370E(iVar1))
					{
						if (func_2(iVar6))
						{
							Global_D203.f_25[iVar6] = iVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_D203 = iVar3;
	Global_D203.f_C = iVar4;
	Global_D203.f_18 = iVar5;
	Global_D203.f_24 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar1;
	
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 39))
	{
		iVar1 = unk_0x21E2782E236757E1(Var0.f_26);
		if (iVar1 >= 0 && iVar1 < unk_0xE2D8B9E8FB021AA3())
		{
			if (unk_0xC0C52E67C988FD4A(iVar1) || unk_0x757E6194CAEC1CE9(iVar1))
			{
				if (unk_0x757E6194CAEC1CE9(iVar1))
				{
					func_55(iVar1);
				}
				else
				{
					unk_0x5CE76FAABB30536B(iVar1);
				}
				func_54(Var0.f_25, 4294967295);
			}
			else if (func_47())
			{
				func_4(Var0.f_1D, Var0, Var0.f_26, Var0.f_10, Var0.f_23, Var0.f_24);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param1, int iParam2, struct<13> Param3, var uParam4, int iParam5)
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<16> Var12;
	struct<16> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	bVar0 = false;
	if (iParam5 >= 1000000)
	{
		iParam5 = (iParam5 - 1000000);
		bVar0 = true;
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_46())
		{
			func_45(iParam2);
			return 0;
		}
		if (func_44())
		{
			func_45(iParam2);
			return 0;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		if (bVar0)
		{
		}
		else if (!unk_0x04A104F429E6CBB0(&Param3))
		{
			func_45(iParam2);
			return 0;
		}
		if (Global_4BE5)
		{
			func_45(iParam2);
			return 0;
		}
		bVar1 = true;
		if (!func_43())
		{
			if (!func_42(0))
			{
				if (bVar1)
				{
					func_45(iParam2);
					return 0;
				}
			}
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		if (!func_41(unk_0xD803B885F5E47A62()))
		{
			func_45(iParam2);
			return 0;
		}
	}
	if (unk_0xEA6BC48857E0AC4C(&Param1))
	{
		func_45(iParam2);
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(&Param0))
	{
		func_45(iParam2);
		return 0;
	}
	Var2 = { Param1 };
	iVar3 = func_40(Var2);
	if (iVar3 != 4294967295)
	{
		func_37(iVar3);
	}
	uVar4 = unk_0x21E2782E236757E1(iParam2);
	iVar5 = unk_0x30CEEF88C36F20EF(uVar4);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 11)
	{
		if (iVar5 == Global_248C9C[iVar6 /*4*/].f_3 && unk_0x1C0640BA9A7327B3() < Global_248C9C[iVar6 /*4*/].f_2)
		{
			Global_248C9C[iVar6 /*4*/].f_2 = unk_0x1C0640BA9A7327B3() + 30000;
			iVar6 = 12;
			func_45(iParam2);
			return 0;
		}
		iVar6++;
	}
	Var7.f_1 = 4294967295;
	Var7.f_2 = 4294967295;
	Var7.f_9 = 4294967295;
	func_36(&Var7);
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 63;
	iVar11 = 0;
	StringCopy(&Var12, "", 64);
	StringCopy(&Var13, "", 64);
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	iVar17 = 1;
	iVar18 = 0;
	iVar19 = 0;
	if (func_35(&Param0, &iVar8, &iVar11))
	{
		iVar10 = 40;
		iVar15 = 0;
		iVar11 = iVar11;
	}
	else if (func_33(&Param0, &Var7, 0))
	{
		iVar10 = Var7.f_2;
		iVar8 = func_32(iVar10, Var7.f_1);
		iVar9 = func_31(&Var7);
		Var12 = { func_30(&Var7, 0) };
		Var13 = { func_29(&Var7) };
		iVar15 = 1;
		iVar14 = func_28(&Var7, 0);
		iVar19 = func_27(&Var7);
		uVar20 = func_25(&Var7);
		uVar21 = func_24(&Var7);
		bVar22 = func_19(&Var7);
		if (!bVar22)
		{
			iVar18 = 1;
		}
	}
	else
	{
		bVar23 = false;
		if (func_17(unk_0xD803B885F5E47A62(), Param3))
		{
			if (!unk_0x8CD06866876216F2())
			{
				bVar23 = true;
			}
			else
			{
				func_45(iParam2);
				func_15(0);
				return 0;
			}
		}
		if (!unk_0xDC30EF462887322E())
		{
			if (!bVar23)
			{
				if (func_13(unk_0xD803B885F5E47A62(), Param3))
				{
					func_45(iParam2);
					func_15(0);
					return 0;
				}
			}
		}
		if (!func_12())
		{
			func_45(iParam2);
			bVar24 = true;
			func_15(bVar24);
			return 0;
		}
		bVar25 = false;
		if (!bVar23)
		{
			if (func_7(Param3, &bVar25, 1))
			{
				func_45(iParam2);
				func_15(bVar25);
				return 0;
			}
		}
		iVar16 = 1;
		iVar17 = 0;
		iVar15 = 1;
	}
	iVar26 = Global_152CDB;
	if (iVar26 >= 12)
	{
		iVar26 = (iVar26 - 1);
	}
	iVar27 = (iVar26 - 1);
	while (iVar27 >= 0)
	{
		Global_24839F[iVar26 /*99*/] = { Global_24839F[iVar27 /*99*/] };
		iVar26 = (iVar26 - 1);
		iVar27 = (iVar27 - 1);
	}
	Global_152CDB++;
	if (Global_152CDB > 12)
	{
		Global_152CDB = 12;
	}
	iVar28 = 0;
	Global_24839F[iVar28 /*99*/] = 0;
	Global_24839F[iVar28 /*99*/].f_1 = 0;
	Global_24839F[iVar28 /*99*/].f_5 = 0;
	Global_24839F[iVar28 /*99*/].f_2 = iVar16;
	Global_24839F[iVar28 /*99*/].f_3 = 0;
	Global_24839F[iVar28 /*99*/].f_4 = iVar17;
	Global_24839F[iVar28 /*99*/].f_6 = { Param0 };
	Global_24839F[iVar28 /*99*/].f_C = uVar20;
	Global_24839F[iVar28 /*99*/].f_D = uVar21;
	Global_24839F[iVar28 /*99*/].f_F = { Param1 };
	StringCopy(&(Global_24839F[iVar28 /*99*/].f_1F), "", 64);
	Global_24839F[iVar28 /*99*/].f_31 = iVar10;
	Global_24839F[iVar28 /*99*/].f_32 = iVar8;
	Global_24839F[iVar28 /*99*/].f_33 = iVar9;
	Global_24839F[iVar28 /*99*/].f_5B = iParam2;
	Global_24839F[iVar28 /*99*/].f_39 = { Var12 };
	Global_24839F[iVar28 /*99*/].f_49 = { Var13 };
	Global_24839F[iVar28 /*99*/].f_34 = iVar14;
	Global_24839F[iVar28 /*99*/].f_35 = 0;
	Global_24839F[iVar28 /*99*/].f_35.f_1 = 0;
	Global_24839F[iVar28 /*99*/].f_35.f_2 = 0;
	Global_24839F[iVar28 /*99*/].f_38 = iVar15;
	Global_24839F[iVar28 /*99*/].f_5A = uParam4;
	Global_24839F[iVar28 /*99*/].f_5C = 4294967295;
	Global_24839F[iVar28 /*99*/].f_5D = iVar18;
	Global_24839F[iVar28 /*99*/].f_5E = Global_248CD0;
	Global_24839F[iVar28 /*99*/].f_5F = iVar19;
	Global_24839F[iVar28 /*99*/].f_62 = unk_0x04A104F429E6CBB0(&Param3);
	if (Global_24839F[iVar28 /*99*/].f_32 == 0)
	{
		if (Global_24839F[iVar28 /*99*/].f_33 == 1)
		{
			Global_24839F[iVar28 /*99*/].f_38 = 0;
		}
	}
	Global_24839F[iVar28 /*99*/].f_60 = func_6(Param3, iVar28);
	Global_24839F[iVar28 /*99*/].f_61 = 0;
	Global_24839F[iVar28 /*99*/].f_59 = iParam5;
	Global_248CD0++;
	Global_24839F[iVar28 /*99*/].f_2F = func_5(Param3);
	if (Global_24839F[iVar28 /*99*/].f_2F != 4294967295)
	{
		Global_24839F[iVar28 /*99*/].f_30 = unk_0x1C0640BA9A7327B3() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)
{
	struct<13> Var0[1];
	int iVar1;
	
	if (!unk_0xDC30EF462887322E())
	{
		return 4294967295;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar1 = unk_0x3F4BBF0887AB451C(&Var0, 1);
	if (iVar1 < 0)
	{
		return 4294967295;
	}
	return iVar1;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!unk_0x04A104F429E6CBB0(&uParam0))
	{
		return 0;
	}
	if (Global_24839F[iParam13 /*99*/].f_5A > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_11(0))
	{
		return 0;
	}
	if (unk_0xDC30EF462887322E())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(unk_0xD803B885F5E47A62()) };
	if (!bParam14 && !unk_0x4F18738E5BDE9AC9(&Var0, &uParam0))
	{
		if (!unk_0x04A104F429E6CBB0(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)
{
	if (unk_0xBA301E03A078FA59() || (unk_0x33A494591F2C1975() && iParam0 == 0))
	{
		if (unk_0x4DEB7B48DD0AABA4(1) == 0 || unk_0xB5E18209CA3E7DE6(1, 4294967295) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x4DEB7B48DD0AABA4(1) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0xBA301E03A078FA59() && unk_0x8BB6DE13A9F3105E())
	{
		return 1;
	}
	if (unk_0xA3F916BCE430ED26() && unk_0x8BB6DE13A9F3105E())
	{
		return 1;
	}
	if ((unk_0x33A494591F2C1975() && unk_0x9AE561F9BC3F06D8() == 0) && unk_0x8BB6DE13A9F3105E())
	{
		return 1;
	}
	if (unk_0xDC30EF462887322E() && unk_0x8BB6DE13A9F3105E())
	{
		return 1;
	}
	if (unk_0x0EFF6B4415DAF4A1() && unk_0x8BB6DE13A9F3105E())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (unk_0xBA301E03A078FA59() || (unk_0x33A494591F2C1975() && iParam0 == 0))
	{
		if (unk_0x4DEB7B48DD0AABA4(0) == 0 || unk_0xB5E18209CA3E7DE6(0, 4294967295) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x4DEB7B48DD0AABA4(0) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_12()
{
	if (!unk_0xA3F916BCE430ED26())
	{
		return 1;
	}
	return unk_0x8BB6DE13A9F3105E();
}

int func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0xDC30EF462887322E())
		{
			if (unk_0x5B9BB2932920F9CD(&uParam1))
			{
				return 0;
			}
		}
		if (!unk_0x4DEB7B48DD0AABA4(0))
		{
			if (!unk_0x4DEB7B48DD0AABA4(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_15(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0xA3F916BCE430ED26())
		{
			return;
		}
	}
	if (unk_0xDC30EF462887322E())
	{
		return;
	}
	iVar0 = unk_0x1C0640BA9A7327B3();
	if (iVar0 < Global_248CCD)
	{
		return;
	}
	if (unk_0xFEBC1E4EC9E001F0())
	{
		return;
	}
	if (bParam0)
	{
		func_16("INV_NO_XBOXLIVE", 4294967295);
	}
	else
	{
		func_16("INV_RESTRICT", 4294967295);
	}
	Global_248CCD = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_17(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0xDC30EF462887322E())
		{
			if (unk_0x5B9BB2932920F9CD(&uParam1))
			{
				return 0;
			}
		}
		if (!func_18())
		{
			return 1;
		}
	}
	return 0;
}

int func_18()
{
	if (unk_0xEB6436A75F06F09F() == 0)
	{
		return 0;
	}
	if (unk_0xBA301E03A078FA59())
	{
		if (unk_0xB5E18209CA3E7DE6(1, 4294967295))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	if (unk_0x33A494591F2C1975())
	{
		if (unk_0x4DEB7B48DD0AABA4(1))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		if (unk_0x05449BDA851F5199(0, 4294967293, 1))
		{
			return 1;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xB5E18209CA3E7DE6(0, 4294967295))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_3F, 14);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xEAE0D21A50E6C7F4(Global_249797.f_1.f_3F, 14);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[iVar1 /*88*/].f_4C, 14);
		
		case 62:
			return unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[iVar1 /*88*/].f_4C, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_20(var uParam0)
{
	int iVar0;
	
	if (unk_0xEA6BC48857E0AC4C(&(uParam0->f_3)))
	{
		return 4294967295;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return 9999;
		}
		return 4294967295;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_C2055.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (Global_14010B.f_5)
				{
					return 4294967295;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[iVar0 /*88*/].f_4C, 13))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_C2055.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 4294967295;
		
		case 62:
			if (unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_E012E.f_25C[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[uParam0->f_1 /*88*/].f_4C, 13))
			{
				if (Global_14010B.f_5)
				{
					return 4294967295;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[iVar0 /*88*/].f_4C, 13))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_E012E.f_25C[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return 4294967295;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 13))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_E55BC.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[uParam0->f_1 /*88*/].f_4C, 13))
		{
			if (Global_14010B.f_5)
			{
				return 4294967295;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[iVar0 /*88*/].f_4C, 13))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_E55BC.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return 4294967295;
	}
	else if (uParam0->f_2 < 32)
	{
		return 4294967295;
	}
	return 4294967295;
}

int func_21(var uParam0)
{
	if (Global_249797)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_249797.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0)
{
	return iParam0 == 9999;
}

int func_23(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (!Global_248CD2.f_164[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0x7F8A39872A07D2CE(&(Global_248CD2.f_164[iVar0 /*75*/].f_A), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_248CD2.f_164[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_50;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_25(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_C = 4294967295;
	iVar1 = 0;
	iVar2 = func_20(uParam0);
	if (iVar2 == 4294967295)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_26(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_26(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_C = 4294967295;
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_1A2B5[iVar1 /*13*/];
		
		case 62:
			return Global_E012E.f_24BD[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_3F, 17);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xEAE0D21A50E6C7F4(Global_249797.f_1.f_3F, 17);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[iVar1 /*88*/].f_4C, 17);
		
		case 62:
			return unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[iVar1 /*88*/].f_4C, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_28(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_14041C.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_24981D.f_201[uParam0->f_9];
			}
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_36;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_36;
		
		case 62:
			return Global_E012E.f_25C[iVar1 /*88*/].f_36;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_E55BC.f_5[iVar1 /*88*/].f_36;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_29(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_23(uParam0))
	{
		return Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_1C;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_1C;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_26;
		
		case 62:
			return Global_E012E.f_25C[iVar1 /*88*/].f_26;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_E55BC.f_5[iVar1 /*88*/].f_26;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_30(var uParam0, bool bParam1)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_23(uParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_14041C.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_24981D[uParam0->f_9 /*16*/];
			}
			return Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_C;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_C;
		}
		return Var0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_16;
		
		case 62:
			return Global_E012E.f_25C[iVar1 /*88*/].f_16;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_E55BC.f_5[iVar1 /*88*/].f_16;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	if (func_23(uParam0))
	{
		return Global_248CD2.f_164[uParam0->f_9 /*75*/].f_A.f_37;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_249797.f_1.f_37;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == 4294967295)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_C2055.f_4[iVar1 /*88*/].f_44;
		
		case 62:
			return Global_E012E.f_25C[iVar1 /*88*/].f_44;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xD803B885F5E47A62())
	{
		return Global_E55BC.f_5[iVar1 /*88*/].f_44;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)
{
	if (func_22(iParam1))
	{
		if (Global_249797)
		{
			return Global_249797.f_1.f_35;
		}
		return 256;
	}
	switch (iParam0)
	{
		case 63:
			return Global_C2055.f_4[iParam1 /*88*/].f_41;
		
		case 62:
			return Global_E012E.f_25C[iParam1 /*88*/].f_41;
		
		default:
	}
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return Global_E55BC.f_5[iParam1 /*88*/].f_41;
	}
	else if (iParam0 < 32)
	{
		return 256;
	}
	return 256;
}

int func_33(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x8CD06866876216F2())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 4294967295;
	iVar2 = 1218;
	if (!bParam2)
	{
		iVar2 = 1200;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_C2055.f_4[iVar0 /*88*/].f_4C, 13))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_C2055.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_C2055.f_4[iVar0 /*88*/].f_41;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_C2055.f_4[iVar0 /*88*/] };
				uParam1->f_9 = 4294967295;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_E012E.f_25C[iVar0 /*88*/].f_4C, 13))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_E012E.f_25C[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_E012E.f_25C[iVar0 /*88*/].f_41;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = 4294967295;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_E55BC.f_5[iVar0 /*88*/].f_4C, 13))
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_E55BC.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_E55BC.f_5[iVar0 /*88*/].f_41;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0xD803B885F5E47A62();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = 4294967295;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 148;
		
		case 14:
			return 149;
		
		case 122:
			return 153;
		
		case 11:
			return 150;
		
		case 13:
			return 151;
		
		case 12:
			return 152;
		
		case 8:
			return 155;
		
		case 1:
			return 156;
		
		case 5:
			return 154;
		
		case 6:
			return 157;
		
		case 3:
			return 160;
		
		case 0:
			return 158;
		
		case 2:
			return 159;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 87;
		
		case 183:
			return 88;
		
		case 185:
			return 89;
		
		case 186:
			return 90;
		
		case 190:
			return 91;
		
		case 191:
			return 92;
		
		case 192:
			return 93;
		
		case 193:
			return 94;
		
		case 205:
			return 102;
		
		case 194:
			return 95;
		
		case 197:
			return 96;
		
		case 198:
			return 97;
		
		case 195:
			return 98;
		
		case 199:
			return 99;
		
		case 200:
			return 100;
		
		case 201:
			return 101;
		
		case 207:
			return 103;
		
		case 208:
			return 104;
		
		case 209:
			return 105;
		
		case 210:
			return 106;
		
		case 225:
			return 107;
		
		case 226:
			return 108;
		
		case 227:
			return 109;
		
		case 229:
			return 110;
		
		case 230:
			return 111;
		
		case 233:
			return 113;
		
		case 237:
			return 115;
		
		case 238:
			return 116;
		
		case 249:
			return 123;
		
		case 239:
			return 117;
		
		case 240:
			return 118;
		
		case 241:
			return 119;
		
		case 242:
			return 120;
		
		case 244:
			return 121;
		
		case 248:
			return 122;
		
		case 250:
			return 124;
		
		case 243:
			return 125;
		
		case 158:
			return 126;
		
		case 181:
			return 86;
		
		case 24:
			return 128;
		
		case 26:
			return 129;
		
		default:
	}
	return 0;
}

int func_35(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	char cVar2[16];
	char[] cVar3[8];
	
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	iVar0 = unk_0x7724E025FD444F45(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0xCFB8A25F37A74B68(sParam0, 0, 5), 8);
	if (!unk_0x7F8A39872A07D2CE(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar2, unk_0xCFB8A25F37A74B68(sParam0, 5, 12), 16);
	if (unk_0x7F8A39872A07D2CE(&cVar2, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0x7F8A39872A07D2CE(&cVar2, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0x7F8A39872A07D2CE(&cVar2, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0x7F8A39872A07D2CE(&cVar2, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0x7F8A39872A07D2CE(&cVar2, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0x7F8A39872A07D2CE(&cVar2, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0xCFB8A25F37A74B68(sParam0, 12, iVar0), 8);
	if (!unk_0x64CD7116CDEEDF6B(&cVar3, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_36(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 4294967295;
	uParam0->f_2 = 4294967295;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = 4294967295;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_152CDB)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0x1C0640BA9A7327B3() > Global_248C9C[iVar0 /*4*/].f_2 || Global_248C9C[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0xE2D8B9E8FB021AA3() > 0 && Global_24839F[iParam0 /*99*/].f_5B < unk_0xE2D8B9E8FB021AA3())
			{
				Global_248C9C[iVar0 /*4*/].f_3 = unk_0x30CEEF88C36F20EF(Global_24839F[iParam0 /*99*/].f_5B);
				Global_248C9C[iVar0 /*4*/].f_2 = unk_0x1C0640BA9A7327B3() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_24839F[iParam0 /*99*/].f_5C != 4294967295)
	{
		unk_0xD59AE843FA2C6B40(Global_24839F[iParam0 /*99*/].f_5C);
	}
	if (!Global_24839F[iParam0 /*99*/].f_38)
	{
		if (Global_24839F[iParam0 /*99*/].f_34 != 0)
		{
			unk_0x295B8300CE227536(Global_24839F[iParam0 /*99*/].f_34);
		}
	}
	func_45(Global_24839F[iParam0 /*99*/].f_5B);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_152CDB)
	{
		Global_24839F[iVar1 /*99*/] = { Global_24839F[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_39(iVar1);
	Global_152CDB = (Global_152CDB - 1);
	if (Global_152CC0)
	{
		if (Global_152CBE > 0)
		{
			func_38();
		}
	}
}

void func_38()
{
	Global_152CC0 = 0;
}

void func_39(int iParam0)
{
	Global_24839F[iParam0 /*99*/] = 0;
	Global_24839F[iParam0 /*99*/].f_1 = 0;
	Global_24839F[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_F), "", 64);
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_1F), "", 64);
	Global_24839F[iParam0 /*99*/].f_2F = 4294967295;
	Global_24839F[iParam0 /*99*/].f_30 = unk_0x1C0640BA9A7327B3();
	Global_24839F[iParam0 /*99*/].f_31 = 4294967295;
	Global_24839F[iParam0 /*99*/].f_32 = 4294967295;
	Global_24839F[iParam0 /*99*/].f_33 = 4294967295;
	Global_24839F[iParam0 /*99*/].f_34 = 0;
	Global_24839F[iParam0 /*99*/].f_35 = 0;
	Global_24839F[iParam0 /*99*/].f_35.f_1 = 0;
	Global_24839F[iParam0 /*99*/].f_35.f_2 = 0;
	Global_24839F[iParam0 /*99*/].f_38 = 0;
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_39), "", 64);
	StringCopy(&(Global_24839F[iParam0 /*99*/].f_49), "", 64);
	Global_24839F[iParam0 /*99*/].f_59 = 0;
	Global_24839F[iParam0 /*99*/].f_5A = 0;
	Global_24839F[iParam0 /*99*/].f_5B = 4294967295;
	Global_24839F[iParam0 /*99*/].f_5C = 4294967295;
	Global_24839F[iParam0 /*99*/].f_5D = 0;
	Global_24839F[iParam0 /*99*/].f_5E = 4294967295;
	Global_24839F[iParam0 /*99*/].f_5F = 0;
	Global_24839F[iParam0 /*99*/].f_60 = 0;
	Global_24839F[iParam0 /*99*/].f_61 = 0;
	Global_24839F[iParam0 /*99*/].f_62 = 0;
}

int func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_152CDB)
	{
		if (unk_0x7F8A39872A07D2CE(&uParam0, &(Global_24839F[iVar0 /*99*/].f_F)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool func_41(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 22);
}

bool func_42(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0);
}

int func_43()
{
	if (Global_1B416.f_2378.f_14A[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_8E, 2);
}

void func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x21E2782E236757E1(iParam0);
	if (iVar0 < 0 || iVar0 >= unk_0xE2D8B9E8FB021AA3())
	{
		return;
	}
	if (unk_0x52F89C03AFE2263B(iVar0))
	{
		return;
	}
}

bool func_46()
{
	return Global_140845 == 10;
}

int func_47()
{
	if (!Global_12B4E)
	{
		return 1;
	}
	else if (func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	if (Global_1406C0)
	{
		return 1;
	}
	if (func_53())
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	return func_49(120, 4294967295);
}

int func_49(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_276C68[iParam0 /*3*/][func_50(iParam1)];
	if (unk_0x89484FAA0691E684(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_51();
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

int func_51()
{
	return Global_1407E9;
}

bool func_52()
{
	return Global_140861;
}

bool func_53()
{
	return Global_140863;
}

void func_54(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == 4294967295)
	{
		iVar0 = func_51();
	}
	Global_140859[iVar0] = uParam0;
}

void func_55(int iParam0)
{
	func_111();
	if (func_110(1))
	{
		if (!func_99())
		{
			if (!func_88(1))
			{
				if (unk_0xA14BB9332558B949())
				{
					func_87();
				}
				func_58(1, 0);
				unk_0x5CE76FAABB30536B(iParam0);
				func_57();
				func_56();
			}
		}
	}
}

void func_56()
{
	Global_195CCB.f_7 = 1;
}

void func_57()
{
	Global_195CCB.f_6 = 1;
}

void func_58(int iParam0, bool bParam1)
{
	if (func_110(iParam0))
	{
		Global_195CCB.f_10[iParam0 /*44*/].f_5 = 1;
		func_60(iParam0, 0);
		func_59();
		if (bParam1)
		{
			Global_195CCB = 1;
		}
	}
}

void func_59()
{
	Global_195CCB.f_2 = 1;
}

void func_60(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (!unk_0xA14BB9332558B949())
	{
		if (bParam1)
		{
			func_86();
			func_72(unk_0xD803B885F5E47A62(), 0, 81920, 0);
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_62 = 8;
			func_71();
			func_70();
		}
		func_69(iParam0);
		func_68(iParam0);
		func_66();
		func_65();
		func_59();
	}
	Var0 = { func_64(iParam0) };
	func_63(iParam0);
	func_61(&Var0);
}

void func_61(char* sParam0)
{
	StringCopy(&(Global_2564C8.f_2F7), sParam0, 24);
	if (func_62())
	{
		StringCopy(&(Global_EA450.f_2A), sParam0, 24);
	}
}

bool func_62()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2567E2.f_1.f_AF9, 5);
}

void func_63(int iParam0)
{
	Global_195CCB.f_10[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_64(int iParam0)
{
	return Global_195CCB.f_10[iParam0 /*44*/].f_6;
}

void func_65()
{
	Global_2564C8.f_7 = 100;
}

void func_66()
{
	unk_0x5D96D8530B3D0904(&Global_2564C8, 5);
	func_67();
}

void func_67()
{
	unk_0x5D96D8530B3D0904(&Global_2564C8, 8);
}

void func_68(var uParam0)
{
	Global_195CCB.f_8 = uParam0;
}

void func_69(var uParam0)
{
	Global_195CCB.f_9 = uParam0;
}

void func_70()
{
	Global_258538.f_1 = 0;
}

void func_71()
{
	char* sVar0;
	
	StringCopy(&(Global_2564C8.f_2F7), sVar0, 24);
}

void func_72(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(false);
		}
	}
	if (func_85())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xA14BB9332558B949())
		{
			bVar1 = false;
		}
		if (!func_83())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(1);
				}
				else if (bVar14 || (!func_81(unk_0xD803B885F5E47A62(), 0) && !func_80()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0);
					}
					Global_25033E[iParam0 /*421*/].f_F4 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_77(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_76(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, true, 0);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, false);
					}
					unk_0x120A395B0ECB8EA5(iVar27, true);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, false);
				}
				unk_0x25C5402CC10F76CD(iVar27, true);
				unk_0x62DE699599F0417E(iParam0, 0);
				unk_0x7569764C11F70C0A(iParam0, 0);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 1);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0)
				{
					func_75();
					func_74();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_25033E[iParam0 /*421*/].f_F5 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_24B2D0.f_A70)
				{
					Global_24B2D0.f_A70 = 0;
				}
			}
			else
			{
				if (!func_76(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, true);
						}
					}
					if (func_73(Global_440000.f_38DB3))
					{
						unk_0x1E9649458B15960F(iVar27, true);
					}
				}
				if (Global_140856)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 1);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_73(int iParam0)
{
	return iParam0 == 17;
}

void func_74()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0;
	Global_2537E2.f_4D2 = 0;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 4294967295;
	Global_2537E2.f_4D9 = 0;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_75()
{
	Global_24B2D0.f_2B6 = 0;
	Global_24B2D0.f_AA6 = 0;
	Global_24B2D0.f_200 = 0;
	Global_24B2D0.f_258 = 0;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0;
	Global_24B2D0.f_A79 = 0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, 2500551826);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_77(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0))
	{
	}
	if (bParam0 == 1)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_79();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_240006.f_3A[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 1);
			}
		}
		if (func_81(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_78(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_78(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_79()
{
	int iVar0;
	
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_240006.f_3A[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 2);
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0);
		}
	}
}

bool func_80()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 3);
}

bool func_81(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_82(4294967295, 0) == 8;
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

int func_82(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_51();
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

int func_83()
{
	if (func_84() == 0)
	{
		return 1;
	}
	return 0;
}

int func_84()
{
	return Global_1406D3.f_12;
}

int func_85()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 4294967295)
	{
		return 1;
	}
	return 0;
}

void func_86()
{
	unk_0x5D96D8530B3D0904(&Global_2564C8, 7);
}

void func_87()
{
	unk_0x5D96D8530B3D0904(&(Global_2564C8.f_2), 15);
}

int func_88(int iParam0)
{
	if (iParam0 || func_98())
	{
		if (!func_90(1))
		{
			return 1;
		}
		if (!func_89())
		{
			return 1;
		}
		if (unk_0x28B41A2A2556BCF3())
		{
			return 1;
		}
	}
	return 0;
}

bool func_89()
{
	return Global_195CCB.f_4;
}

int func_90(bool bParam0)
{
	if (!func_95())
	{
		return 0;
	}
	if ((func_93(func_94(4294967295), 0) >= 1 || func_49(123, 4294967295)) && func_49(133, 4294967295))
	{
		func_92();
		return 1;
	}
	else if (bParam0)
	{
		func_91();
	}
	return 0;
}

void func_91()
{
	Global_195CCB.f_5 = 1;
}

void func_92()
{
	Global_195CCB.f_4 = 1;
}

int func_93(int iParam0, int iParam1)
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

int func_94(int iParam0)
{
	return Global_152E1C[func_50(iParam0)];
}

int func_95()
{
	if (func_97() && func_96(0))
	{
		return 1;
	}
	return 0;
}

var func_96(int iParam0)
{
	return Global_140676[iParam0];
}

var func_97()
{
	return func_96(func_51() + 1);
}

var func_98()
{
	return Global_195CCB.f_2;
}

int func_99()
{
	if (((((func_109() || !func_107(4294967295)) || !func_105()) || !func_102()) || !func_101()) || func_100())
	{
		return 1;
	}
	return 0;
}

var func_100()
{
	return Global_258C15;
}

int func_101()
{
	if (unk_0x0A4C9A3D51EAE31F(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_102()
{
	int iVar0;
	
	if (func_103(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_103(int iParam0)
{
	if (func_104())
	{
		*iParam0 = 10;
		return 1;
	}
	return unk_0x0563201A314D0675(iParam0);
}

bool func_104()
{
	return Global_7944;
}

int func_105()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_106(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_106(int iParam0)
{
	if (func_49(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_108(iParam0);
	iVar1 = unk_0x0A4C9A3D51EAE31F(iVar0);
	if (unk_0xEAE0D21A50E6C7F4(iVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_108(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_51();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

var func_109()
{
	return Global_2564C8.f_283;
}

bool func_110(int iParam0)
{
	return Global_195CCB.f_10[iParam0 /*44*/].f_4;
}

void func_111()
{
	int iVar0;
	int iVar1;
	
	func_117();
	if (unk_0x2E30080A978263CA() && !func_114())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0xFAC8389AB7F580F0(func_113(iVar0));
			if (iVar1 > 0)
			{
				Global_195CCB.f_10[iVar0 /*44*/] = iVar1;
				func_112(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_195CCB.f_10[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_112(int iParam0, int iParam1)
{
	bool bVar0;
	struct<16> Var1;
	var uVar2;
	
	bVar0 = true;
	if (unk_0x4D2AEAE2BF06C3A3(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_195CCB.f_10[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x4D2AEAE2BF06C3A3(iParam1, "playlist", &Var1))
	{
		Global_195CCB.f_10[iParam0 /*44*/].f_C = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x2116042E56ED2CE2(iParam1, &Var1))
	{
		Global_195CCB.f_10[iParam0 /*44*/].f_1C = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0x6943C2A5F566539D(iParam1, "coronaCountdown", &uVar2))
		{
			Global_195CCB.f_10[iParam0 /*44*/].f_1 = uVar2;
		}
		else
		{
			Global_195CCB.f_10[iParam0 /*44*/].f_1 = 120000;
		}
		Global_195CCB.f_10[iParam0 /*44*/].f_2 = 0;
		if (unk_0x6943C2A5F566539D(iParam1, "eventSubType", &uVar2))
		{
			Global_195CCB.f_10[iParam0 /*44*/].f_2 = uVar2;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_195CCB.f_1 = 1;
		}
		Global_195CCB.f_10[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_195CCB.f_10[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_114()
{
	if (!func_115())
	{
		return 1;
	}
	return 0;
}

int func_115()
{
	if (func_116())
	{
		return 0;
	}
	if (unk_0xE6725CC0C55B6CA1() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_116()
{
	return Global_258DFD;
}

void func_117()
{
	struct<281> Var0;
	
	Var0.f_8 = 4294967295;
	Var0.f_9 = 4294967295;
	Var0.f_10 = 6;
	Global_195CCB = { Var0 };
}

void func_118(int iParam0)
{
	var uVar0;
	
	if (Global_12B4E)
	{
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Hang_Up", "Phone_SoundSet_Michael", true);
	}
	else
	{
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Hang_Up", &Global_4C13, true);
	}
	if (unk_0x218F818E64020C17(1, iParam0, &uVar0, 21))
	{
		func_120();
	}
	Global_26D039.f_1 = 0;
	Global_26D039.f_21 = 4294967295;
	Global_26D039.f_22 = 4294967295;
	StringCopy(&(Global_26D039.f_4), "", 64);
	func_119(&(Global_26D039.f_14));
}

void func_119(var uParam0)
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

void func_120()
{
	Global_26D039.f_2 = 1;
	Global_26D039.f_26 = 1;
	if (unk_0x58424C49F8924842())
	{
		if (unk_0xC8DB5FB7097EAC7E())
		{
			while (unk_0x72B92E9113241B15())
			{
				SYSTEM::WAIT(0);
			}
			unk_0xBE1F51E5568A1C6A();
			Global_26D039 = 0;
			Global_26D039.f_2 = 0;
		}
		else if (func_128(Global_26D039.f_14))
		{
			if (unk_0x04A104F429E6CBB0(&(Global_26D039.f_14)))
			{
				if (!unk_0xD9AF1D6157682D28(&(Global_26D039.f_14)))
				{
					func_127();
				}
			}
		}
		else
		{
			func_127();
		}
	}
	else
	{
		func_127();
	}
	if (Global_26D039.f_25)
	{
		func_121(0);
	}
	Global_26D039.f_25 = 0;
	Global_26D039.f_3 = 0;
}

void func_121(int iParam0)
{
	if (func_126())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_125())
		{
			func_123(1, 1);
		}
		else
		{
			func_123(0, 0);
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
	if (!func_122())
	{
		Global_4C1E.f_1 = 3;
	}
}

int func_122()
{
	if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_123(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_124(0))
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

int func_124(int iParam0)
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

bool func_125()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 5);
}

bool func_126()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 19);
}

void func_127()
{
	Global_26D039.f_1 = 0;
	Global_26D039 = 0;
	Global_26D039.f_2 = 0;
	Global_26D039.f_21 = 4294967295;
	Global_26D039.f_22 = 4294967295;
	StringCopy(&(Global_26D039.f_4), "", 64);
	StringCopy(&(Global_26D039.f_27[0 /*16*/]), "", 64);
	Global_26D039.f_26 = 0;
	Global_26D039.f_38 = 0;
	Global_26D039.f_39 = 0;
	Global_26D039.f_3A = 4294967294;
	Global_26D039.f_3 = 0;
	func_119(&(Global_26D039.f_14));
}

bool func_128(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

void func_129(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 15))
	{
		Global_26D039.f_21 = Var0.f_1;
		Global_26D039.f_22 = Var0;
	}
}

void func_130(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 21))
	{
		if (Global_26D039.f_3 == 0)
		{
			if (!func_131(&(Var0.f_8)))
			{
				unk_0x646D6CB2DC3F00EE(0, 2);
			}
			else
			{
				Global_26D039.f_3 = 1;
				MemCopy(&(Global_26D039.f_4), {Var0}, 16);
				Global_26D039.f_14 = { Var0.f_8 };
				StringCopy(&(Global_26D039.f_27[0 /*16*/]), "", 64);
				Global_26D039.f_3A = 4294967294;
				Global_26D039.f_38 = 0;
				Global_26D039.f_39 = 0;
			}
		}
		else if (!func_131(&(Var0.f_8)))
		{
			unk_0x646D6CB2DC3F00EE(0, 2);
		}
		else
		{
			Global_26D039.f_3 = 1;
			MemCopy(&(Global_26D039.f_4), {Var0}, 16);
			Global_26D039.f_14 = { Var0.f_8 };
			StringCopy(&(Global_26D039.f_27[0 /*16*/]), "", 64);
			Global_26D039.f_3A = 4294967294;
			Global_26D039.f_38 = 0;
			Global_26D039.f_39 = 0;
		}
	}
}

int func_131(var uParam0)
{
	if (Global_12B4E)
	{
		if (func_48() == 0)
		{
			return 0;
		}
		if (func_135(unk_0xD803B885F5E47A62(), 1, 1))
		{
			if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
			{
				if (unk_0xFC0E4F7E386C43F8(unk_0x16F2683693E537C9()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0xE6725CC0C55B6CA1() == 0)
	{
		return 0;
	}
	if (Global_26D039.f_1)
	{
	}
	if (Global_4CD8 == 1)
	{
		return 0;
	}
	if (Global_180620)
	{
		return 0;
	}
	if (Global_26D039.f_24)
	{
		return 0;
	}
	if (func_122())
	{
		return 0;
	}
	if (((Global_A1D7 != 6 && Global_A1D7 != 8) && Global_A1D7 != 12) && Global_A1D7 != 15)
	{
		return 0;
	}
	if (func_134() && !func_133(12))
	{
		return 0;
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		return 0;
	}
	if (unk_0x39B7A3CCD2467CAB())
	{
		return 0;
	}
	if (!func_132(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (Global_12C52)
	{
		return 0;
	}
	if (unk_0x3BE9D9F3DC14F695())
	{
		if (!unk_0x5B99ACBBF316951B(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0;
	}
	if (unk_0x74684D5E87B13DBD(uParam0) || unk_0x5EB60FF82531F781(uParam0))
	{
		return 0;
	}
	if (unk_0x42912347AD653D4C(uParam0) || unk_0xD8CF175826CCB178(uParam0))
	{
		return 0;
	}
	if (unk_0x3C638171E81B9AA1())
	{
		if (unk_0xDC30EF462887322E())
		{
			if (unk_0x71467D5C7AFB49C6())
			{
				return 0;
			}
		}
		else if (unk_0x33A494591F2C1975())
		{
			return 0;
		}
	}
	return 1;
}

int func_132(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0xEB6436A75F06F09F() == 0)
	{
		return 0;
	}
	iVar0 = 4294967295;
	if (iParam0 != unk_0xD803B885F5E47A62())
	{
		iVar0 = iParam0;
		if (iVar0 == 4294967295)
		{
			return 0;
		}
	}
	if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		if (unk_0xB5E18209CA3E7DE6(0, iVar0))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			if (unk_0xFB7A8F661F94A3AE(0, 4294967293, 1) || unk_0xB5E18209CA3E7DE6(1, 4294967295))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (unk_0xB5E18209CA3E7DE6(0, 4294967295) || (unk_0xB5E18209CA3E7DE6(1, 4294967295) && unk_0x04A104F429E6CBB0(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xB5E18209CA3E7DE6(0, iVar0))
		{
			if (unk_0x8BB6DE13A9F3105E())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_133(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_134()
{
	if (Global_A1D7 == 15)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0, bool bParam1, bool bParam2)
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

void func_136()
{
	func_127();
}

void func_137()
{
	Global_26D039.f_1 = 1;
	Global_26D039.f_21 = 4294967295;
	Global_26D039.f_22 = 4294967295;
	if (unk_0x83D8570832F172A7(Global_4C0B) == 1)
	{
		if (Global_4C12)
		{
			func_138(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_4BE5)
			{
				func_138(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_138(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_138(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_139(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_139(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_139(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_139(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_139(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

void func_139(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_140()
{
	int iVar0;
	
	if (iLocal_64)
	{
		Global_D203 = 0;
		Global_D203.f_C = 0;
		Global_D203.f_18 = 0;
		Global_D203.f_24 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_D203.f_1[iVar0] = 0;
			Global_D203.f_D[iVar0] = 0;
			Global_D203.f_19[iVar0] = 0;
			Global_D203.f_25[iVar0] = 0;
			iVar0++;
		}
		iLocal_64 = 0;
	}
}

