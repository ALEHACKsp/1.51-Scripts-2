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
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<67> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	struct<2> Local_41 = { 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_62 = 0;
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
	var uLocal_80 = 0;
	var uLocal_81 = 1;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	struct<34> Local_87 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_14 = 4294967295;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (unk_0x8CD06866876216F2())
	{
		func_52(ScriptParam_87);
	}
	else
	{
		func_50();
	}
	while (true)
	{
		func_49();
		if (Global_40001.f_5C10)
		{
			func_50();
		}
		if (func_38())
		{
			func_50();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_411248)
	{
		if (Global_41213B[iLocal_21 /*12*/].f_B)
		{
			func_35(iLocal_21);
			Global_41213B[iLocal_21 /*12*/].f_B = 0;
		}
	}
	if (Local_22.f_42.f_8)
	{
		func_17(Local_22.f_42);
	}
	if ((Local_22.f_42.f_2 == 1 && Global_411249) && func_16(&Local_22))
	{
		bVar0 = true;
	}
	if (Global_411012[iLocal_21 /*85*/].f_42 == 2147483647 && Local_22.f_42.f_C)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_50();
	}
	if (Local_22.f_42.f_12 > 0 && !func_14())
	{
		iVar2 = (1000 / SYSTEM::ROUND((unk_0x6117725E0134737F() * 1000f)));
		if ((unk_0xF4CCC8CB6DE7F1AE() - Local_22.f_42.f_12) > iVar2 * 10)
		{
			Local_22.f_42.f_12 = 4294967295;
		}
	}
	if (((func_13() && Local_22.f_42.f_2 == 1) && Local_22.f_42.f_D) && !Local_22.f_42.f_C)
	{
		if (unk_0xF4CCC8CB6DE7F1AE() - Local_22.f_42.f_E) >= func_12(Local_22.f_42.f_5)
		{
			iVar1 = 0;
			if (!unk_0x79B28160739BC9E6(func_11()) || unk_0xDD2EE1F5DA6A6AB0())
			{
				iVar1 = 1;
			}
			else if (Local_22.f_42.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_22.f_42.f_5 != 1 && !unk_0x98212517C34835B2(&(Local_22.f_42), Local_22.f_42.f_6, Local_22.f_42.f_4, Local_22.f_42.f_7, Local_22.f_42.f_1, Local_22.f_42.f_A))
			{
				iVar1 = 3;
			}
			else if (!unk_0x80C74F9931DCF063(Local_22.f_42))
			{
				iVar1 = 4;
			}
			else
			{
				Local_22.f_42.f_C = 1;
				Global_411012[iLocal_21 /*85*/].f_42.f_C = 1;
				Global_411012[iLocal_21 /*85*/].f_42 = Local_22.f_42;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_21);
				func_50();
			}
		}
	}
	if (!iLocal_86)
	{
		if (bVar0)
		{
			func_5(&Local_41, 0);
			iLocal_86 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_41.f_1), "HUD_TRANSP", 64);
		func_2(&Local_41, func_4(&Local_41));
	}
	else
	{
		iLocal_86 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_24)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x6D99DF8263D35CE5(uParam0->f_21);
			unk_0x6D99DF8263D35CE5(uParam0->f_22);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_25)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x6D99DF8263D35CE5(uParam0->f_21);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_27)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_11));
			unk_0x6D99DF8263D35CE5(uParam0->f_21);
			unk_0x6D99DF8263D35CE5(uParam0->f_22);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_26)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0xD06AC7C87A34A6AD(&(uParam0->f_11));
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else if (uParam0->f_28)
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x164431059FF80580(uParam0->f_21, 70);
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		else
		{
			unk_0xFCC7D1ED80D1900C(&(uParam0->f_1));
			unk_0x9A681BEC95A1B92E(uParam0->f_29);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_23 = 0;
}

int func_4(var uParam0)
{
	return uParam0->f_23;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_23 = 1;
}

void func_6(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_29 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_10(iParam0))
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
		func_8(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_8(var uParam0)
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
	func_9(&(uParam0->f_E));
	func_9(&(uParam0->f_E.f_D));
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

void func_9(var uParam0)
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

int func_10(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 1;
	}
	return 0;
}

var func_11()
{
	return Global_1407E9;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_41124B;
			break;
		
		case 1:
			return Global_41124A;
			break;
	}
	return 0;
}

int func_13()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

bool func_14()
{
	return Global_181EC.f_15A > 0;
}

void func_15(bool bParam0)
{
	unk_0xBBCE9616B024A2BF();
	if (bParam0)
	{
		unk_0xA3B57116ADBCDF5F();
	}
}

int func_16(var uParam0)
{
	if (uParam0->f_42.f_4 == 2043854386)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<67> Var4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar1 = 0;
	bVar2 = false;
	if (!func_13())
	{
		iVar1 = 1;
		Var0 = iParam0;
		Var0.f_2 = 0;
	}
	if (iVar1 || unk_0x218F818E64020C17(1, iParam0, &Var0, 7))
	{
		Var4.f_42 = 2147483647;
		iVar3 = func_34(Var0, &Var4);
		if (iVar3 != 4294967295)
		{
			Global_411012[iVar3 /*85*/].f_42.f_8 = 0;
			if (Global_411012[iVar3 /*85*/].f_42.f_12 == 0)
			{
				Global_411012[iVar3 /*85*/].f_42.f_12 = unk_0xF4CCC8CB6DE7F1AE();
			}
		}
		bVar5 = true;
		if (iVar3 != 4294967295)
		{
			Global_411012[iVar3 /*85*/].f_42.f_11 = Var0.f_2;
		}
		else
		{
			Global_41123C.f_4 = Var0.f_2;
			Global_41123C.f_6 = Var0.f_3;
			Global_41123C.f_7 = Var0.f_4;
			Global_41123C.f_8 = Var0.f_5;
			Global_41123C.f_9 = Var0.f_6;
			if (Global_41123C.f_A == 0)
			{
				Global_41123C.f_A = unk_0xF4CCC8CB6DE7F1AE();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar3 != 4294967295)
				{
					Global_41213B[iVar3 /*12*/] = Global_411012[iVar3 /*85*/].f_42.f_3;
					Global_41213B[iVar3 /*12*/].f_1 = Global_411012[iVar3 /*85*/].f_42.f_7;
					Global_41213B[iVar3 /*12*/].f_2 = Global_411012[iVar3 /*85*/].f_42.f_4;
					Global_41213B[iVar3 /*12*/].f_3 = Global_411012[iVar3 /*85*/].f_42.f_1;
					Global_41213B[iVar3 /*12*/].f_5 = Var0.f_1;
					Global_41213B[iVar3 /*12*/].f_6 = Var0.f_3;
					Global_41213B[iVar3 /*12*/].f_7 = Var0.f_4;
					Global_41213B[iVar3 /*12*/].f_8 = Var0.f_5;
					Global_41213B[iVar3 /*12*/].f_9 = Var0.f_6;
					Global_41213B[iVar3 /*12*/].f_B = 1;
					Global_411012[iVar3 /*85*/].f_42.f_2 = 2;
					if (Global_411012[iVar3 /*85*/].f_42.f_B & 4 != 0)
					{
						func_32(iVar3, bVar5);
					}
					else if (func_13())
					{
						if (bVar5)
						{
							unk_0x1D18B90CF9028441(Global_411012[iVar3 /*85*/].f_42, &uVar6);
						}
					}
				}
				break;
			
			default:
				if (iVar3 != 4294967295)
				{
					Global_411012[iVar3 /*85*/].f_42.f_2 = 3;
					if ((Global_411012[iVar3 /*85*/].f_42.f_B & 1 != 0 && Global_411012[iVar3 /*85*/].f_42.f_9 < 2) && func_31(Var0.f_2))
					{
						if (func_10(iVar3))
						{
							if (func_24())
							{
								Global_411012[iVar3 /*85*/].f_42.f_2 = 1;
								Global_411012[iVar3 /*85*/].f_42.f_9++;
							}
							else if (Global_411012[iVar3 /*85*/].f_42.f_B & 2 != 0)
							{
								Global_41125A = Global_411012[iVar3 /*85*/].f_42.f_4;
								Global_41125C = Global_411012[iVar3 /*85*/].f_42.f_6;
								Global_41125D = Var0.f_2;
								Global_41125B = Global_411012[iVar3 /*85*/].f_42.f_1;
								if (func_23(Global_41125A) && func_13())
								{
									if (!func_22(Global_411012[iVar3 /*85*/].f_42))
									{
										iVar7 = func_21();
										Global_411211[iVar7 /*7*/] = Global_411012[iVar3 /*85*/].f_42;
										Global_411211[iVar7 /*7*/].f_2 = Global_41125A;
										Global_411211[iVar7 /*7*/].f_3 = Global_41125C;
										Global_411211[iVar7 /*7*/].f_1 = Global_41125B;
										Global_411211[iVar7 /*7*/].f_4 = unk_0x2B6E0A53779D29EA();
									}
								}
								else
								{
									Global_411257 = 1;
								}
							}
						}
						else if (func_20(&iVar3))
						{
							Global_411012[iVar3 /*85*/].f_42.f_2 = 1;
							Global_411012[iVar3 /*85*/].f_42.f_9++;
						}
						else if (Global_411012[iVar3 /*85*/].f_42.f_B & 2 != 0)
						{
							Global_41125A = Global_411012[iVar3 /*85*/].f_42.f_4;
							Global_41125C = Global_411012[iVar3 /*85*/].f_42.f_6;
							Global_41125D = Var0.f_2;
							Global_41125B = Global_411012[iVar3 /*85*/].f_42.f_1;
							if (func_23(Global_41125A) && func_13())
							{
								if (!func_22(Global_411012[iVar3 /*85*/].f_42))
								{
									iVar8 = func_21();
									Global_411211[iVar8 /*7*/] = Global_411012[iVar3 /*85*/].f_42;
									Global_411211[iVar8 /*7*/].f_2 = Global_41125A;
									Global_411211[iVar8 /*7*/].f_3 = Global_41125C;
									Global_411211[iVar8 /*7*/].f_1 = Global_41125B;
									Global_411211[iVar8 /*7*/].f_4 = unk_0x2B6E0A53779D29EA();
								}
							}
							else
							{
								Global_411257 = 1;
							}
						}
					}
					else if (Global_411012[iVar3 /*85*/].f_42.f_B & 2 != 0)
					{
						Global_41125A = Global_411012[iVar3 /*85*/].f_42.f_4;
						Global_41125C = Global_411012[iVar3 /*85*/].f_42.f_6;
						Global_41125D = Var0.f_2;
						Global_41125B = Global_411012[iVar3 /*85*/].f_42.f_1;
						if ((func_23(Global_41125A) && func_13()) && func_31(Var0.f_2))
						{
							if (!func_22(Global_411012[iVar3 /*85*/].f_42))
							{
								iVar9 = func_21();
								Global_411211[iVar9 /*7*/] = Global_411012[iVar3 /*85*/].f_42;
								Global_411211[iVar9 /*7*/].f_2 = Global_41125A;
								Global_411211[iVar9 /*7*/].f_3 = Global_41125C;
								Global_411211[iVar9 /*7*/].f_1 = Global_41125B;
								Global_411211[iVar9 /*7*/].f_4 = unk_0x2B6E0A53779D29EA();
							}
						}
						else
						{
							Global_411257 = 1;
						}
					}
					if (Global_411012[iVar3 /*85*/].f_42.f_2 == 3)
					{
						if (bVar2)
						{
							func_19(1, Global_411012[iVar3 /*85*/].f_42.f_4);
							Global_411257 = 0;
						}
						if (Global_411012[iVar3 /*85*/].f_42.f_B & 4 != 0)
						{
							func_18(iVar3, Global_411012[iVar3 /*85*/].f_42.f_4, Global_411012[iVar3 /*85*/].f_42.f_A, Global_411012[iVar3 /*85*/].f_42.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_25952B = uParam1;
	Global_25952A = iParam0;
}

int func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == 4294967295 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_11()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 1;
			return 0;
		}
		if (Global_25908F)
		{
			if (Global_411012[*iParam0 /*85*/].f_42.f_6 == 1067618600 || Global_411012[*iParam0 /*85*/].f_42.f_6 == 2991135598)
			{
				Global_411259 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(Global_411012[*iParam0 /*85*/].f_42))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_411012[*iParam0 /*85*/].f_42.f_D = 1;
		Global_411012[*iParam0 /*85*/].f_42.f_C = 0;
		Global_411012[*iParam0 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
		if (bVar0)
		{
			if (*iParam0 != 4294967295)
			{
				Global_411012[*iParam0 /*85*/].f_42.f_8 = 1;
				Global_411012[*iParam0 /*85*/].f_42.f_C = 1;
			}
		}
		Global_411012[*iParam0 /*85*/].f_42.f_12 = 0;
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_411211;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_411211[iVar0 /*7*/] != 0 && Global_411211[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_411211;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_411211[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_411211[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_411211[iVar0 /*7*/].f_4 = unk_0x2B6E0A53779D29EA();
			Global_411211[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1780666425 || iParam0 == 2251272238) || iParam0 == 2708796979) || iParam0 == 393059668) || iParam0 == 3267748665) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == 3438960429) || iParam0 == 848090538) || iParam0 == 4001907056) || iParam0 == 4247420391) || iParam0 == 463142405) || iParam0 == 1550217370) || iParam0 == 4193659516) || iParam0 == 1052472386) || iParam0 == 2164767625) || iParam0 == 3067312758) || iParam0 == 3418954532) || iParam0 == 3572072971) || iParam0 == 1407278493) || iParam0 == 2715572802) || iParam0 == 1179783540) || iParam0 == 923419301) || iParam0 == 3986141121) || iParam0 == 603298940) || iParam0 == 4282347442) || iParam0 == 3983854621) || iParam0 == 870439158) || iParam0 == 3320678556) || iParam0 == 4290828642) || iParam0 == 3114013174) || iParam0 == 2376916280) || iParam0 == 844330594) || iParam0 == 1934825517) || iParam0 == 1852024236) || iParam0 == 2099238988) || iParam0 == 1952643559) || iParam0 == 3122066507) || iParam0 == 2279567963) || iParam0 == 2720171655) || iParam0 == 3333932415) || iParam0 == 1135468152) || iParam0 == 1265272476) || iParam0 == 3660240660) || iParam0 == 696556762) || iParam0 == 443347049) || iParam0 == 403506509) || iParam0 == 3411090882) || iParam0 == 3230816581) || iParam0 == 2907714241) || iParam0 == 3578004144) || iParam0 == 1138089938) || iParam0 == 3733955243) || iParam0 == 1240683675) || iParam0 == 1241904665) || iParam0 == 3800402237) || iParam0 == 827308208) || iParam0 == 2437282104) || iParam0 == 1698417709) || iParam0 == 2277042259) || iParam0 == 1057653594) || iParam0 == 1810506918) || iParam0 == 451427308) || iParam0 == 824622151) || iParam0 == 1253978276) || iParam0 == 2718886530) || iParam0 == 1508411869) || iParam0 == 1428501742) || iParam0 == 2376000145) || iParam0 == 1261538664) || iParam0 == 1180397655) || iParam0 == 1414674366) || iParam0 == 261460130) || iParam0 == 2267308920) || iParam0 == 1668610896) || iParam0 == 2262437735) || iParam0 == 3070487849) || iParam0 == 3975660607) || iParam0 == 3828440032) || iParam0 == 1925965142) || iParam0 == 592152676) || iParam0 == 2035612943) || iParam0 == 1568659720) || iParam0 == 1220095570) || iParam0 == 2050320631) || iParam0 == 592672421) || iParam0 == 1775876058) || iParam0 == 3452904320)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_30();
	if (iVar2 == 4294967295)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_11()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_29(Global_411012[iVar2 /*85*/].f_42.f_6, Global_411012[iVar2 /*85*/].f_42.f_4, Global_411012[iVar2 /*85*/].f_42.f_1) == 1)
			{
				Global_411258 = 1;
			}
			return 0;
		}
		if (Global_25908F)
		{
			if (Global_411012[iVar2 /*85*/].f_42.f_6 == 1067618600 || Global_411012[iVar2 /*85*/].f_42.f_6 == 2991135598)
			{
				Global_411259 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_28(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar3))
		{
			Global_411012[iVar2 /*85*/].f_42.f_D = 1;
			Global_411012[iVar2 /*85*/].f_42.f_C = 0;
			Global_411012[iVar2 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			if (bVar0)
			{
				Global_411012[iVar2 /*85*/].f_42.f_8 = 1;
				Global_411012[iVar2 /*85*/].f_42.f_C = 1;
			}
			Global_411012[iVar2 /*85*/].f_42.f_12 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_411012[iVar2 /*85*/], iVar2);
			}
			Global_411249 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_27(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_26();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_26()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_27(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 4294967295)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_28(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_411012[iParam0 /*85*/].f_42;
	}
	return 4294967295;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 3861527201 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case 4263810419:
			case 3967048882:
			case 550898518:
			case 835976347:
			case 1347433368:
			case 3194003497:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case 3630369731:
			case 599804707:
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
			case 443347049:
			case 403506509:
			case 3411090882:
			case 3230816581:
			case 2907714241:
			case 3578004144:
			case 1138089938:
			case 3733955243:
			case 1240683675:
			case 1241904665:
			case 3800402237:
			case 827308208:
			case 2437282104:
			case 1698417709:
			case 2277042259:
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
			case 1668610896:
			case 2262437735:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case 3395164992:
			case 3631022961:
			case 1208553146:
			case 3681746286:
			case 3623904420:
			case 291576838:
			case 3018288428:
			case 711665950:
			case 3887766060:
			case 3540943093:
			case 2409522409:
			case 1931729587:
			case 1064954035:
			case 4114826223:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case 3418119454:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case 3975660607:
			case 3828440032:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case 3070487849:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case 3452904320:
				return 1;
			
			case 1775876058:
				return 2;
				break;
		}
	}
	else if ((iParam0 == 3160114106 || iParam0 == 925407197) || iParam0 == 2705588414)
	{
		return 0;
	}
	return 1;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_28(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_31(int iParam0)
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	unk_0x7A87D9FAFCB10ADC(func_28(iParam0));
	if (Global_411012[iParam0 /*85*/].f_42.f_A == 1)
	{
	}
	else if (Global_411012[iParam0 /*85*/].f_42.f_A == 4)
	{
		bVar0 = true;
	}
	else if (Global_411012[iParam0 /*85*/].f_42.f_A == 2)
	{
		bVar1 = true;
	}
	switch (Global_411012[iParam0 /*85*/].f_42.f_4)
	{
		case 631654431:
			unk_0x39CD4F3FBE26D45B(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 4114826223:
			unk_0xAB3CCBD224F88BA8(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E), bVar1, bVar0);
			break;
		
		case 68030260:
			unk_0xA30EA38144B3C88C(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], &(Global_411012[iParam0 /*85*/].f_E), bVar1, bVar0);
			break;
		
		case 3312573245:
			unk_0x111D9D61331BF845(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 454359403:
			unk_0xB39DD8D66E65AB2A(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, Global_411012[iParam0 /*85*/].f_2, bVar0);
			break;
		
		case 2708796979:
			unk_0xF0BDBC17AD7AA68A(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), &(Global_411012[iParam0 /*85*/].f_E.f_22));
			break;
		
		case 650665123:
			unk_0x0C123A45910161F5(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 1654961868:
			unk_0x720F06601D6A3D91(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E), bVar1, bVar0);
			break;
		
		case 1182673174:
			unk_0x9A5DFC6851A069B1(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 563463121:
			unk_0x42507720ABD2E3DB(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 1940862352:
			unk_0xA63FA0129D34AA99(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), bVar1, bVar0);
			break;
		
		case 2905739390:
			unk_0xA63FA0129D34AA99(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), bVar1, bVar0);
			break;
		
		case 3778748250:
			unk_0x7CAD30CCC63BF1EB(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 2896648878:
			unk_0x045C859ACF224811(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_22));
			break;
		
		case 2043854386:
			unk_0x7FA34B11E2FA5AE3(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 277665518:
			unk_0xA10182A479573A30(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 3217811126:
			unk_0x478F5BB792BA9EE0(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_22), 4294967295);
			break;
		
		case 4198373795:
			unk_0x82910C1B770BE0D2(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 742499889:
			unk_0x516FAA390D131925(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 2050093329:
			unk_0x2DDA9F27020A3199(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 2542479227:
			unk_0x89426D1648CBE232(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 634375935:
			unk_0x6C2E7021DF2545F7(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 3267748665:
			unk_0xFDC65A7AB2E4C168(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A));
			break;
		
		case 4247420391:
			unk_0x4D6E04834D849B43(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A));
			break;
		
		case 291576838:
			unk_0xA4F4B39459FDE0FD(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], 14, 1, bVar1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0, 0, 0, bVar0);
			break;
		
		case 1612072658:
			unk_0x007780E78643FBFA(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 3304681061:
			unk_0x94E33A9479106442(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E), &(Global_411012[iParam0 /*85*/].f_E.f_D), 1);
			break;
		
		case 1349151477:
			unk_0x1A60C32FB1BCE2C8(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 4263810419:
		case 3967048882:
		case 550898518:
		case 835976347:
			unk_0x74342D5B553E1DFB(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 3108887451:
			unk_0xA2CF14803B9069FC(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 1734805203:
			unk_0xDACD1EB0C24D33AC(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 2649738075:
			unk_0x57050D488B359913(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 3709248901:
			unk_0x0637A4F2922611B2(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 763367758:
			unk_0xE1D92C288D286562(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 1850983186:
			unk_0x57050D488B359913(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 2165185470:
			unk_0xC939BD4F5FD7E665(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], bVar1, bVar0);
			break;
		
		case 1941570214:
			unk_0x65C09F8D6A9B310C(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], bVar1, bVar0);
			break;
		
		case 1869490922:
			unk_0x776C9C3A04B65D9A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 3958163446:
			unk_0x776C9C3A04B65D9A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 2882274531:
			unk_0x776C9C3A04B65D9A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 618167454:
			unk_0x776C9C3A04B65D9A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 980623936:
			unk_0x776C9C3A04B65D9A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
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
		case 3630369731:
		case 3194003497:
			unk_0x70C6C7E43DEB92C4(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_28), &(Global_411012[iParam0 /*85*/].f_E.f_2C), bVar1);
			break;
		
		case 312105838:
			unk_0x661D2111769889E2(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 2372412947:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case 2251272238:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case 1780666425:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case 1643659499:
			unk_0x6C5C42DFA8BC6886(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case 1839532116:
			unk_0x6BCFB59E6D5AD205(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 0);
			break;
		
		case 941287179:
			unk_0x530219CFD5D2CF9D(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_3);
			break;
		
		case 3942610365:
			unk_0xDF9A19F19D39D17D(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/]);
			break;
		
		case 1948102096:
			unk_0x8A174305CB36B1A5(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 2460920732:
			unk_0xD6F9EF2CBF17C39A(Global_411012[iParam0 /*85*/].f_42.f_1, bVar1, bVar0);
			break;
		
		case 393059668:
			unk_0x959E7CBD93B47040(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A));
			break;
		
		case 4237099040:
			unk_0xCE7D7A810252082C(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_22), Global_411012[iParam0 /*85*/].f_4);
			break;
		
		case 3167945912:
			unk_0x86F09E9726155438(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 1564537328:
			unk_0xA63FA0129D34AA99(Global_411012[iParam0 /*85*/].f_42.f_1, "RaceToPoint", false, false);
			break;
		
		case 2935592169:
			unk_0xD189E5E11FBABB3C(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 0);
			break;
		
		case 283351220:
			unk_0xA4F4B39459FDE0FD(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_5, 1, bVar1, &(Global_411012[iParam0 /*85*/].f_E.f_28), 0, 0, 0, bVar0);
			break;
		
		case 2209654107:
			switch (Global_411012[iParam0 /*85*/].f_42.f_6)
			{
				case 1067618600:
					unk_0xA4F4B39459FDE0FD(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_5, 1, bVar1, &(Global_411012[iParam0 /*85*/].f_E.f_28), 0, 0, 0, bVar0);
					break;
			}
			break;
		
		case 1704445500:
			unk_0x7CC825DF8865404E(Global_411012[iParam0 /*85*/].f_42.f_1, 0, &(Global_411012[iParam0 /*85*/].f_E.f_22), 0, 0);
			break;
		
		case 1620609399:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case 1961641934:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case 210955503:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case 4235299214:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case 1736933716:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case 2826443171:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case 111573502:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case 1525644423:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case 968073639:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case 1577781788:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case 3360501964:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case 3100714174:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case 4082360211:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case 3479420741:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case 1048226110:
			unk_0x9D6EB12A8E6A1B47(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 569170531:
			unk_0x017FA3B50AA7BBCB(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 3438960429:
			unk_0x0C06D61FE6218C43(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_8);
			break;
		
		case 208223429:
			unk_0x114C796E8DF14FB1(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_9);
			break;
		
		case 848090538:
			unk_0xBE795B7771B253F0(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 665109499:
			unk_0x249B09B41E203013(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], 0, 1);
			break;
		
		case 2964212290:
			unk_0xC6DCFD38EB6C5D6A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], 0, 1);
			break;
		
		case 1976384368:
			unk_0x9F7862A93AF57E41(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], 0, 0);
			break;
		
		case 268924934:
			unk_0x01823E47A902289C(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_1, Global_411012[iParam0 /*85*/].f_9);
			break;
		
		case 4001907056:
			unk_0x3B7EF88C105FB69A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7);
			break;
		
		case 437291904:
			unk_0xAEA694ECF02129DB(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1, Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_A, Global_411012[iParam0 /*85*/].f_B, Global_411012[iParam0 /*85*/].f_C);
			break;
		
		case 4159154248:
			unk_0xC5BC97E47ECB22E9(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1);
			break;
		
		case 463142405:
			unk_0x3CF6953686BFBF61(Global_411012[iParam0 /*85*/].f_6, Global_411012[iParam0 /*85*/].f_7, Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_8);
			break;
		
		case 1550217370:
			unk_0x434FE3A4DF341381(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 4193659516:
			unk_0xDA90C799534A72C9(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 599804707:
			unk_0x9AC21D04D5646532(Global_411012[iParam0 /*85*/].f_42.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case 1347433368:
			unk_0x50ED0C960093D63C(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 1052472386:
			unk_0x3925A46749966B4D(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), &(Global_411012[iParam0 /*85*/].f_E.f_22));
			break;
		
		case 2164767625:
			unk_0x53F58BDC6DFB17E6(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), &(Global_411012[iParam0 /*85*/].f_E.f_22));
			break;
		
		case 3067312758:
			unk_0xE9C48D19F762914B(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), &(Global_411012[iParam0 /*85*/].f_E.f_22));
			break;
		
		case 3364862819:
			unk_0x1940B733B2B94AE2(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1, Global_411012[iParam0 /*85*/]);
			break;
		
		case 1864522104:
			unk_0xE37616809557C456(Global_411012[iParam0 /*85*/].f_42.f_1, 0);
			break;
		
		case 215608230:
			unk_0xE37616809557C456(Global_411012[iParam0 /*85*/].f_42.f_1, 1);
			break;
		
		case 3418954532:
			unk_0x59DD36892C82F08B(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/]);
			break;
		
		case 3572072971:
			unk_0xC55B5E1A710EA4BE(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/]);
			break;
		
		case 1407278493:
			unk_0x53D560AAF6BF3D4E(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 2715572802:
		case 4267523385:
			unk_0x8A202B38FB66794C(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A));
			break;
		
		case 1179783540:
			unk_0xDB82D526B3C3DB77(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A));
			break;
		
		case 923419301:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0);
			break;
		
		case 3986141121:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 1);
			break;
		
		case 603298940:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 2);
			break;
		
		case 4282347442:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 3);
			break;
		
		case 3983854621:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 4);
			break;
		
		case 870439158:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 5);
			break;
		
		case 3320678556:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 6);
			break;
		
		case 4290828642:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 7);
			break;
		
		case 3114013174:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 8);
			break;
		
		case 2376916280:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 9);
			break;
		
		case 844330594:
			unk_0x183EBF404A6BDA94(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 10);
			break;
		
		case 1934825517:
			unk_0xF6F512DCB0C25FE1(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 0);
			break;
		
		case 1852024236:
			unk_0xF6F512DCB0C25FE1(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 1);
			break;
		
		case 2099238988:
			unk_0xF6F512DCB0C25FE1(Global_411012[iParam0 /*85*/].f_42.f_1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), 2);
			break;
		
		case 1952643559:
			break;
		
		case 2039302543:
			break;
		
		case 3122066507:
			unk_0xDB13FA8DB5E86B00(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_9);
			break;
		
		case 2561569253:
			unk_0x61F4393459646833(Global_411012[iParam0 /*85*/].f_9, Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1);
			break;
		
		case 2402207034:
			unk_0xFEFC69A008980415(Global_411012[iParam0 /*85*/].f_9, Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1);
			break;
		
		case 2279567963:
			unk_0x86CC628276254AC2(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 402505853:
			if (func_33(unk_0x117658E336116132(Global_411012[iParam0 /*85*/]), 0, 0))
			{
				unk_0x29F1378957C4338C(unk_0x117658E336116132(Global_411012[iParam0 /*85*/]), Global_411012[iParam0 /*85*/].f_1, Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1);
			}
			break;
		
		case 1678112166:
			unk_0xF919FABD5349A968(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], 0, 1);
			break;
		
		case 3151457114:
			unk_0x77BA509759C279CE(Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1);
			break;
		
		case 2720171655:
			unk_0x81D2E6A33B59B618(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 3333932415:
			unk_0xA106C1682C790290(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 1135468152:
			unk_0x546613D1293DBF87(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 1265272476:
			unk_0x5D421B9474B610E6(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_1, Global_411012[iParam0 /*85*/].f_9);
			break;
		
		case 3660240660:
			unk_0x163F1C05711ACF77(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 696556762:
			unk_0x5ECAFBC8E34D6EFE(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 837955913:
			unk_0x90FA66AB36899698(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_42.f_F, 0, 1);
			break;
		
		case 403506509:
			unk_0xD11BB1F07683633E(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 3411090882:
			unk_0xC7D6090C222E61FA(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_42.f_F);
			break;
		
		case 3230816581:
		case 2907714241:
		case 3578004144:
		case 1138089938:
			unk_0x6A2B8A4070C0594A(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/].f_42.f_F);
			break;
		
		case 2762500152:
			unk_0xF18D08B59CE9E875(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], 0, 1);
			break;
		
		case 1815541181:
			unk_0xFCA4582C61D6101E(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 0);
			break;
		
		case 3733955243:
			unk_0xAF721C887699EBE1(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 2952902635:
			unk_0xD2305C2E3F5D8E9C(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1);
			break;
		
		case 1240683675:
			unk_0xCA06E60B6B41CD39(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 1241904665:
			unk_0xAABADC392B147D80(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_42.f_10, Global_411012[iParam0 /*85*/].f_1);
			break;
		
		case 3800402237:
			unk_0xDEB9E7D80C47A76D(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 827308208:
			unk_0xFA7D82562F8AB32D(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 2437282104:
			unk_0x24CC5BC765961690(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 1698417709:
			unk_0xA8C1B24657FB32B3(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 2277042259:
			unk_0xB42761A25890EDEA(Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
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
			unk_0x2DF294D394338472(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/]);
			break;
		
		case 2601396541:
			unk_0xFB43929E288533F1(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1, &(Global_411012[iParam0 /*85*/].f_E.f_1A), Global_411012[iParam0 /*85*/]);
			break;
		
		case 1868043300:
			unk_0x0A920FD5AB632774(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 3597718413:
			unk_0x0AE713861459290A(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 2999421501:
			unk_0x566FF9B925CB8BDA(Global_411012[iParam0 /*85*/].f_9, Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1);
			break;
		
		case 914079366:
			unk_0xFF90259E892D5F8A(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1, 1, Global_411012[iParam0 /*85*/].f_42.f_1, 0, 0, 0, 0, 0, 0);
			break;
		
		case 395122350:
			unk_0xFF90259E892D5F8A(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1, 0, 0, 1, Global_411012[iParam0 /*85*/].f_42.f_1, 0, 0, 0, 0);
			break;
		
		case 3962986220:
			unk_0xFF90259E892D5F8A(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1, 0, 0, 0, 0, 1, Global_411012[iParam0 /*85*/].f_42.f_1, 0, 0);
			break;
		
		case 1671535231:
			unk_0xFF90259E892D5F8A(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 1982688246:
			break;
	}
	switch (Global_411012[iParam0 /*85*/].f_42.f_4)
	{
		case 1668610896:
			unk_0xB0E03FD240577D6C(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 0, 1, Global_411012[iParam0 /*85*/].f_42.f_1, 0, 0);
			break;
		
		case 2262437735:
			unk_0xB0E03FD240577D6C(Global_411012[iParam0 /*85*/].f_42.f_1, 1, Global_411012[iParam0 /*85*/].f_42.f_1, 0, 0, 0, 0);
			break;
		
		case 3070487849:
			unk_0xB0E03FD240577D6C(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 0, 0, 0, 1, Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 3975660607:
		case 3828440032:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
			unk_0x2BAB01599473BCB8(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_42.f_1, 0, 0);
			break;
		
		case 1220095570:
		case 2050320631:
		case 592672421:
			unk_0x2BAB01599473BCB8(Global_411012[iParam0 /*85*/].f_42.f_1, 0, 0, Global_411012[iParam0 /*85*/], Global_411012[iParam0 /*85*/].f_42.f_1);
			break;
		
		case 1775876058:
			unk_0xC0DE18944A7A9044(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/]);
			break;
		
		case 3452904320:
			unk_0x5C9B198AF5A54FA6(Global_411012[iParam0 /*85*/].f_42.f_1, Global_411012[iParam0 /*85*/]);
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			unk_0x1D18B90CF9028441(Global_411012[iParam0 /*85*/].f_42, &uVar3);
		}
	}
	func_7(iParam0);
}

int func_33(int iParam0, bool bParam1, bool bParam2)
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

int func_34(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_411012[iVar0 /*85*/].f_42 == iParam0)
		{
			*uParam1 = { Global_411012[iVar0 /*85*/] };
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_35(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_41213B[iParam0 /*12*/].f_1 == Global_41213B[iParam0 /*12*/].f_6)
	{
		if (Global_41213B[iParam0 /*12*/].f_1 != 1445302971 && Global_41213B[iParam0 /*12*/].f_1 != 2978375937)
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = unk_0x12AB0310C2281427(sVar2);
	iVar0 = (iVar0 || func_37());
	iVar0 = (iVar0 + Global_411933);
	func_36(&uVar1);
	iVar0 = (iVar0 || uVar1);
	unk_0x0674E58A79778E99(&iVar0, 28);
	unk_0x0674E58A79778E99(&iVar0, 29);
	unk_0x0674E58A79778E99(&iVar0, 26);
	iVar3 = (Global_41213B[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_41213B[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_41213B[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = 2209654107;
	}
	if (((Global_41213B[iParam0 /*12*/] != Global_41213B[iParam0 /*12*/].f_5 || Global_41213B[iParam0 /*12*/].f_1 != Global_41213B[iParam0 /*12*/].f_6) || Global_41213B[iParam0 /*12*/].f_2 != iVar5) || Global_41213B[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_1A734 = 1;
	}
}

int func_36(var uParam0)
{
	*uParam0 = SYSTEM::SHIFT_LEFT(1, 2);
	return 5410420;
}

int func_37()
{
	return SYSTEM::SHIFT_LEFT(1, 25);
}

int func_38()
{
	var uVar0;
	
	func_46(&uVar0);
	if (Global_140856 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_45())
	{
		return 1;
	}
	if (Global_2594CA)
	{
		return 1;
	}
	if (func_44())
	{
		return 1;
	}
	if (func_43(159))
	{
		if (!func_42())
		{
			return 1;
		}
	}
	if (func_43(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_39() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_39()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_39()
{
	switch (func_41())
	{
		case 0:
			return func_40();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_40()
{
	switch (Global_259530)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_41()
{
	return Global_7830;
}

bool func_42()
{
	return Global_2564C8.f_256;
}

int func_43(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return Global_258C08;
}

bool func_45()
{
	return Global_2564C8.f_251;
}

void func_46(var uParam0)
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
					func_47(iVar0);
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

void func_47(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_33(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_48(iVar2, &bVar3))
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

int func_48(int iParam0, var uParam1)
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

void func_49()
{
	SYSTEM::WAIT(0);
}

void func_50()
{
	func_51();
}

void func_51()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_52(struct<34> Param0)
{
	if (Global_40001.f_5C10)
	{
		func_50();
	}
	Local_22.f_42 = { Param0 };
	Local_22 = { Param0.f_13 };
	Local_22.f_E = { Global_411012[Param0.f_21 /*85*/].f_E };
	iLocal_21 = Param0.f_21;
	if (Param0.f_21 < 0)
	{
		func_50();
	}
	if (!func_53(Param0, Param0.f_21))
	{
		func_7(Param0.f_21);
		func_50();
	}
	if (Local_22.f_42.f_2 != 0)
	{
		Local_22.f_42.f_2 = 1;
	}
}

int func_53(struct<18> Param0, var uParam1, int iParam2)
{
	if (Global_411012[iParam2 /*85*/].f_42.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_E != Param0.f_E)
	{
		return 0;
	}
	if (Global_411012[iParam2 /*85*/].f_42.f_11 != Param0.f_11)
	{
		return 0;
	}
	return 1;
}

