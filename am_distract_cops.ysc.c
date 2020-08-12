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
	struct<19> Local_73 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_74 = 0;
	struct<4> Local_75[32];
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x8CD06866876216F2() && func_277(unk_0xD803B885F5E47A62(), 0, 1))
	{
		func_269(ScriptParam_84);
	}
	else
	{
		func_266();
	}
	while (true)
	{
		func_265();
		if (func_255() || func_251(16))
		{
			func_266();
		}
		if (unk_0x09BE1E6DF7B80B43())
		{
			func_266();
		}
		switch (func_250(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_249() == 1)
				{
					func_248();
					Local_75[unk_0x57270EE11514DC67() /*4*/] = 1;
				}
				else if (func_249() == 4)
				{
					Local_75[unk_0x57270EE11514DC67() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_249() == 1)
				{
					func_128();
				}
				else if (func_249() == 4)
				{
					func_14();
					Local_75[unk_0x57270EE11514DC67() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_73.f_12));
				if (func_12(&(Local_73.f_12)))
				{
					Local_75[unk_0x57270EE11514DC67() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_75[unk_0x57270EE11514DC67() /*4*/] = 4;
			
			case 4:
				func_266();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			switch (func_249())
			{
				case 0:
					Local_73 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_73 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_73.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	struct<14> Var0;
	
	switch (Local_73.f_7)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0))
			{
				Local_73.f_7 = 1;
			}
			else if (func_9(&(Local_73.f_8), 480000, 0))
			{
				Var0.f_2 = 455724956;
				func_7(Var0, func_8(1));
				unk_0x5D96D8530B3D0904(&(Local_73.f_1), 1);
				Local_73.f_7 = 2;
			}
			break;
		
		case 1:
			func_4();
			break;
		
		case 2:
			break;
	}
}

void func_4()
{
	if (!func_9(&(Local_73.f_A), Local_73.f_C, 0))
	{
		if (func_9(&(Local_73.f_D), Local_73.f_F, 0))
		{
			Local_73.f_11++;
			Local_73.f_10 = func_6();
			func_5(&(Local_73.f_D));
		}
	}
	else
	{
		Local_73.f_7 = 2;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6()
{
	switch (Local_73.f_11)
	{
		case 0:
		case 1:
			return 2;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		
		case 6:
		case 7:
		case 8:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return Local_73.f_10;
}

void func_7(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 1975453628;
	Param0.f_1 = unk_0xD803B885F5E47A62();
	if (!iParam13 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Param0, 14, iParam13);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar1)))
		{
			iVar2 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar1));
			if (func_277(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

void func_10(var uParam0, bool bParam1, bool bParam2)
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

void func_11()
{
	int iVar0;
	
	if (Local_73 == 1)
	{
		if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iLocal_82)))
		{
			iVar0 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iLocal_82));
			if (func_277(iVar0, 1, 1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_75[iLocal_82 /*4*/].f_1, 0))
					{
						iLocal_83 = 1;
						unk_0x5D96D8530B3D0904(&(Local_73.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_82++;
	if (iLocal_82 == unk_0x54EABC0DD106045B())
	{
		if (iLocal_83 == 0)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 0))
			{
				unk_0x0674E58A79778E99(&(Local_73.f_1), 0);
			}
		}
		else
		{
			iLocal_83 = 0;
		}
		iLocal_82 = 0;
	}
}

int func_12(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xBFF81ED3B99522C7())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_14()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_76, 1))
	{
		if ((unk_0xEAE0D21A50E6C7F4(Local_75[unk_0x57270EE11514DC67() /*4*/].f_1, 0) && unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) >= (Local_73.f_10 - 1)) && Local_75[unk_0x57270EE11514DC67() /*4*/].f_2 < 10)
		{
			Local_75[unk_0x57270EE11514DC67() /*4*/].f_2++;
		}
		if (Local_75[unk_0x57270EE11514DC67() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_75[unk_0x57270EE11514DC67() /*4*/].f_2 * Global_40001.f_1FA5);
			Global_2594A0 = iVar0;
			func_106(&iVar0, 1);
			if (iVar0 > 0)
			{
				func_103(iVar0, 1, 1, 0);
				if (func_102())
				{
					func_90(2251272238, iVar0, &uVar2, 0, 0, 0);
				}
				else
				{
					unk_0x9AC21D04D5646532(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (func_89())
			{
				func_76(12, "DSC_PASS0", 0, 0, 4294967197);
			}
			else
			{
				func_76(12, "DSC_PASS1", 0, 0, 4294967197);
			}
			func_20(51, iVar0, "DSC_CASH", "DSC_BIGM", 1, 4294967295, 3212836864, 2);
			if (unk_0xEAE0D21A50E6C7F4(iLocal_76, 4))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_76, 5))
				{
					func_15(66, 1, 4294967295);
				}
			}
		}
		unk_0x5D96D8530B3D0904(&iLocal_76, 1);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_17(iParam0, func_18(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_16(iParam0, iVar0, iParam2);
}

void func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_18(iParam2)];
	unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_18(iParam1)];
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1407E9;
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_75(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_47 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_48 = iParam7;
	return func_21(&Var0);
}

int func_21(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2537E2.f_BE5)
		{
			return 0;
		}
	}
	func_38(uParam0, uParam0->f_11);
	func_35(uParam0);
	if (func_34())
	{
		func_35(uParam0);
	}
	if (func_33(uParam0->f_1))
	{
		func_26();
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
				func_26();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_24(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 2);
				Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_23(uParam0->f_45, 128))
			{
				if (func_22(Global_2537E2.f_AA3[iVar0 /*80*/].f_1))
				{
					Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
					func_24(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0)
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

bool func_23(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_24(var uParam0, int iParam1)
{
	func_25(uParam0, iParam1);
}

void func_25(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_26()
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
	func_27();
	if (bVar0)
	{
		Global_12C5A = 0;
	}
}

void func_27()
{
	Global_2537E2.f_BE7 = 0;
	Global_2537E2.f_BE7.f_242 = 0;
	func_31(&(Global_2537E2.f_BE7.f_1));
	Global_2537E2.f_BE7.f_1.f_1 = 0;
	func_28(&(Global_2537E2.f_BE7.f_1));
}

void func_28(var uParam0)
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
				if (unk_0x757EF87A33649210() && !func_30(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_29(0);
}

void func_29(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_30(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0);
}

void func_31(var uParam0)
{
	func_32(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_32(var uParam0)
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

int func_33(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_34()
{
	return Global_2564C8.f_11;
}

void func_35(var uParam0)
{
	if (func_37(uParam0->f_1))
	{
		uParam0->f_48 = func_36();
	}
}

int func_36()
{
	return 21;
}

int func_37(int iParam0)
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

void func_38(var uParam0, int iParam1)
{
	if (func_37(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_74() || !func_277(iParam1, 0, 1))
	{
		return;
	}
	if (func_22(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_39(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

int func_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_70(iParam0) && !bParam4)
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
	if (((func_70(unk_0xD803B885F5E47A62()) || (func_69() && func_68())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 31)) && !bParam4)
	{
		iVar1 = func_67();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 4294967295)
				{
					if (func_277(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_440000.f_2E673[iParam1] != 4294967295)
							{
								return func_65(iParam1, iParam0, 0);
							}
							else
							{
								return func_52(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_52(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_440000.f_2E673[iParam1] != 4294967295)
				{
					return func_65(iParam1, iParam0, 0);
				}
				else
				{
					return func_40(0, 4294967295, 0);
				}
			}
			else
			{
				return func_40(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_440000.f_2E673[iParam1] != 4294967295)
		{
			return func_65(iParam1, iParam0, 0);
		}
		else
		{
			return func_52(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_52(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_40(bool bParam0, int iParam1, bool bParam2)
{
	return func_41(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_51() || (func_50() && func_48())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_47(iParam2, iVar0);
		}
		else
		{
			return func_47(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_46(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_45(1);
				}
				else
				{
					return func_45(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 20))
			{
				return func_42(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_42(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_45(1);
	}
	return func_45(0);
}

int func_42(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_44(iParam0, iParam1, iParam3);
	if (func_43(Global_440000.f_2F9AE, 1))
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

int func_43(int iParam0, bool bParam1)
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

int func_44(int iParam0, int iParam1, int iParam2)
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
			if (!func_46(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_45(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_46(int iParam0, int iParam1, int iParam2)
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

int func_47(int iParam0, int iParam1)
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_44(iParam1, iParam0, 4);
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

bool func_48()
{
	if (func_49())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 4);
}

bool func_49()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 12);
}

bool func_50()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0);
}

int func_51()
{
	if (func_49() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_61())
			{
				iVar3 = func_57(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_55(iVar3);
				}
			}
			if ((func_54(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18)) || ((func_46(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18)))
			{
				return func_45(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 26))
			{
				return func_53(1);
			}
			else
			{
				return func_41(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_18060A == 1 && Global_180614 == 0))
			{
				return func_45(1);
			}
			else
			{
				return func_41(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_57(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_55(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_53(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_54(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_55(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_56(iParam0);
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

var func_56(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_57(int iParam0)
{
	if (!iParam0 == func_74())
	{
		if (func_59(iParam0, 1))
		{
			return Global_24E4E9.f_332.f_B[func_58(iParam0)];
		}
	}
	return 4294967295;
}

int func_58(int iParam0)
{
	if (iParam0 != func_74())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_74();
}

bool func_59(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(iParam0))
		{
			return 0;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_74();
}

int func_60(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_74())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_61()
{
	if (((func_64() || func_63()) || func_34()) || func_62())
	{
		return 1;
	}
	return 0;
}

var func_62()
{
	return Global_2564C8.f_13;
}

var func_63()
{
	return Global_2564C8.f_10;
}

var func_64()
{
	return Global_2564C8.f_F;
}

int func_65(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_61())
	{
		iVar2 = func_57(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_55(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_74())
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
			iVar0 = func_41(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 13))
		{
			iVar0 = func_66(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 26) && !func_46(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_53(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_66(int iParam0)
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

var func_67()
{
	return Global_240006.f_2;
}

bool func_68()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 4);
}

bool func_69()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 14);
}

int func_70(int iParam0)
{
	if (func_72(iParam0, 0))
	{
		return 1;
	}
	if (func_71())
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

bool func_71()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 3);
}

bool func_72(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_73(4294967295, 0) == 8;
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

int func_73(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_19();
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

int func_74()
{
	return 4294967295;
}

void func_75(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	uParam1->f_11 = func_74();
	uParam1->f_12 = func_74();
	uParam1->f_13 = func_74();
	uParam1->f_14 = func_74();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_15), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_10 = 1;
	uParam1->f_3 = uParam2;
	uParam1->f_47 = 1;
	uParam1->f_4A = 1;
	uParam1->f_4B = 1;
	uParam1->f_4C = 0;
	uParam1->f_4D = 0;
	uParam1->f_49 = 0;
	StringCopy(&(uParam1->f_19), "", 64);
	StringCopy(&(uParam1->f_29), "", 64);
}

void func_76(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_77(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_77(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_78(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_78(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0xEA6BC48857E0AC4C(sParam1))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam1) > 15)
	{
		return;
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		if (unk_0x7724E025FD444F45(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_87();
	if (iVar0 == 4294967295)
	{
		return;
	}
	func_86(iVar0);
	func_85(iVar0, uParam0);
	func_84(iVar0, uParam2, bParam3);
	func_83(iVar0, sParam1);
	if (unk_0xEA6BC48857E0AC4C(sParam4) && iParam6 == 4294967197)
	{
		return;
	}
	func_82(iVar0);
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_80(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == 4294967197)
	{
		func_79(iVar0, iParam6);
	}
}

void func_79(int iParam0, int iParam1)
{
	Global_14E99F.f_3B[iParam0 /*16*/].f_F = iParam1;
}

void func_80(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_14E99F.f_3B[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_81(iParam0);
}

void func_81(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_14E99F.f_3B[iParam0 /*16*/]), 5);
}

void func_82(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_14E99F.f_3B[iParam0 /*16*/]), 4);
}

void func_83(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_14E99F.f_3B[iParam0 /*16*/].f_3 = { Var0 };
}

void func_84(int iParam0, var uParam1, bool bParam2)
{
	Global_14E99F.f_3B[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_14E99F.f_3B[iParam0 /*16*/]), 2);
		unk_0x0674E58A79778E99(&(Global_14E99F.f_3B[iParam0 /*16*/]), 3);
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_14E99F.f_3B[iParam0 /*16*/]), 3);
		unk_0x0674E58A79778E99(&(Global_14E99F.f_3B[iParam0 /*16*/]), 2);
	}
}

void func_85(int iParam0, var uParam1)
{
	Global_14E99F.f_3B[iParam0 /*16*/].f_1 = uParam1;
}

void func_86(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_14E99F.f_3B[iParam0 /*16*/]), 0);
}

int func_87()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_88(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool func_88(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_14E99F.f_3B[iParam0 /*16*/], 0);
}

int func_89()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_90(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_102())
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
				func_91(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_91(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_91(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_91(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_91(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_102())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_19()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_98(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_97(1, iParam4);
			Global_411257 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_92(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_93(iParam0);
	}
}

void func_93(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_102())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_96(iParam0))
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
		func_94(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_94(var uParam0)
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
	func_95(&(uParam0->f_E));
	func_95(&(uParam0->f_E.f_D));
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

void func_95(var uParam0)
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

int func_96(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 1;
	}
	return 0;
}

void func_97(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_98(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0)
		{
			if (!func_102())
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
				func_99(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_99(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_101(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_100();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_100()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_101(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 4294967295)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_102()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

void func_103(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_104(iParam0, iParam1, iParam2, fParam3);
}

void func_104(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_4 = iVar1;
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 = (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_105(iVar1, 0);
	}
}

void func_105(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_106(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_127())
		{
			if (func_126(0))
			{
				if (!func_122(0))
				{
					if (unk_0x40B8C182D63932FC(func_121()))
					{
						if (func_120() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_120());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_118(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_111("GB_BCUT_TICK1", func_121(), iVar0, 0, 0, 1);
						}
						func_110(20);
						func_107(func_121(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_107(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_277(iParam0, 0, 1))
	{
		Var0 = 3000381556;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_109(iParam0);
		func_108(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(1, &Var0, 8, func_101(iParam0));
	}
}

void func_108(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_109(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

void func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_111(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0x3A820E495A7BA3E5(func_39(iParam1, 4294967294, 1, 0, 0));
		unk_0xD06AC7C87A34A6AD(func_116(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		func_112(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_112(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_115() || !unk_0xA14BB9332558B949()) || !func_72(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_113(iParam2);
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

int func_113(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_197EBE - 1))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_114(iVar0);
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

void func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_115()
{
	return unk_0xC146D5FBD23C6954(2532323046);
}

var func_116(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_117(&cVar0);
}

var func_117(char[4] cParam0)
{
	return cParam0;
}

void func_118(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_119(1);
	}
	else
	{
		iVar1 = func_119(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_119(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_120()
{
	return Global_40001.f_3065;
}

int func_121()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_122(bool bParam0)
{
	return func_123(unk_0xD803B885F5E47A62(), bParam0);
}

int func_123(int iParam0, bool bParam1)
{
	return func_124(iParam0, bParam1, 1);
}

int func_124(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_74())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_125(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_74() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1)
{
	if (iParam0 != func_74())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_74())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_126(bool bParam0)
{
	return func_59(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_127()
{
	return func_60(unk_0xD803B885F5E47A62());
}

void func_128()
{
	func_246();
	if (unk_0xE4EDC4B0E92C078B(iLocal_77))
	{
		if (func_244() || func_243())
		{
			unk_0x9D7CDDB4B55142AF(iLocal_77, 0);
		}
		else
		{
			unk_0x9D7CDDB4B55142AF(iLocal_77, 4);
		}
	}
	switch (Local_75[unk_0x57270EE11514DC67() /*4*/].f_3)
	{
		case 0:
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_73.f_2, Local_73.f_5, Local_73.f_5, 1000f, false, true, 0))
			{
				func_220();
				unk_0x5D96D8530B3D0904(&(Local_75[unk_0x57270EE11514DC67() /*4*/].f_1), 0);
				unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 0);
				Local_75[unk_0x57270EE11514DC67() /*4*/].f_3 = 1;
			}
			if (Local_73.f_7 > 1)
			{
				Local_75[unk_0x57270EE11514DC67() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_194();
			func_129();
			if (Local_73.f_7 > 1)
			{
				Local_75[unk_0x57270EE11514DC67() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_129()
{
	func_193();
	func_138();
	func_131();
	func_130();
}

void func_130()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_76, 5))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_76, 4))
		{
			if (Local_73.f_11 == 0)
			{
				unk_0x5D96D8530B3D0904(&iLocal_76, 4);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&iLocal_76, 5);
			}
		}
		else if (!func_277(unk_0xD803B885F5E47A62(), 1, 1))
		{
			unk_0x5D96D8530B3D0904(&iLocal_76, 5);
		}
	}
}

void func_131()
{
	if ((((unk_0xB3260A60545D3F11() == 7 || unk_0xB3260A60545D3F11() == 8) || unk_0xB3260A60545D3F11() == 9) || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 12)
	{
		func_137();
	}
	else
	{
		func_136();
	}
	if ((Local_73.f_C - func_135(&(Local_73.f_A), 0, 0)) >= 0)
	{
		func_132((Local_73.f_C - func_135(&(Local_73.f_A), 0, 0)), "DCP_TIMER", 0, 1, 4294967295, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
	}
	else
	{
		func_132(0, "DCP_TIMER", 0, 1, 4294967295, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
	}
}

void func_132(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_134(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_150976.f_1 = 1;
		func_133(7, iVar0);
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

void func_133(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_134(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

int func_135(var uParam0, bool bParam1, bool bParam2)
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

void func_136()
{
	Global_150976.f_46B = 1;
}

void func_137()
{
	Global_150976.f_46A = 1;
}

void func_138()
{
	if (func_9(&uLocal_78, 30000, 0))
	{
		switch (Local_73.f_10)
		{
			case 2:
				func_190(2105, 1, 4294967295);
				break;
			
			case 3:
				func_190(2106, 1, 4294967295);
				break;
			
			case 4:
				func_190(2107, 1, 4294967295);
				break;
			
			case 5:
				func_190(2108, 1, 4294967295);
				break;
		}
		func_139(0, unk_0x16F2683693E537C9(), "XPT_DSC", 2658791846, 2048546661, (Global_40001.f_1FA6 * Local_73.f_10), 1, 4294967295, 0, 0, 0);
		Local_75[unk_0x57270EE11514DC67() /*4*/].f_2++;
		func_5(&uLocal_78);
	}
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
	
	if (func_189(unk_0xD803B885F5E47A62()) || func_188(unk_0xD803B885F5E47A62()))
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
	else if (func_186() || func_182(unk_0xD803B885F5E47A62()))
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
					func_171(&iVar1);
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
			func_190(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_161((func_170(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 4294967295)
				{
					func_190(1165, iVar1, 4294967295);
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
		if (func_277(iParam0, 0, 1))
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
				if (iParam0 < Global_152E1C[func_18(4294967295)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_18(4294967295)])
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
		if (func_169(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_167(iParam0, 1);
		}
		func_166(639, iParam0, 4294967295, 1);
		func_165(640, func_167(iParam0, 1), 4294967295, 1, 0);
		Global_152E1C[func_18(4294967295)] = iParam0;
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

void func_165(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_152DD4[func_18(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_152DDA[func_18(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_152DE0[func_18(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_152DE6[func_18(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_152DEC[func_18(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_152DB6[func_18(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_152DBC[func_18(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_152DC2[func_18(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_152DC8[func_18(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_152DCE[func_18(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_152D98[func_18(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_152D9E[func_18(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_152DA4[func_18(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_152DAA[func_18(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_152DB0[func_18(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_152DF2[func_18(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_152DF8[func_18(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_152DFE[func_18(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_152E04[func_18(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_152E0A[func_18(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_152E10[func_18(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_152E16[func_18(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_152E1C[func_18(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_152E22[func_18(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2775D1[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2775D1[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2775D1[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2775D1[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_277666[func_18(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_152E28[func_18(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_152E2E[func_18(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_152E34[func_18(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_152E3A[func_18(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_152E40[func_18(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_27761A[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_27761A[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_27761A[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_27761A[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_27761A[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_277669[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_277669[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_277669[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_277669[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_277669[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_277679[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_277679[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_277679[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_277679[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_277679[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_27761A[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2775D1[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_277689[func_18(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_277692[func_18(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27768C[func_18(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_277695[func_18(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27768F[func_18(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_277698[func_18(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27769B[func_18(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_27761A[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2775D1[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_27761A[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2775D1[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_27761A[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2775D1[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_27761A[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2775D1[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_27761A[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2775D1[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_27761A[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2775D1[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_27761A[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2775D1[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_27761A[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2775D1[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_27761A[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2775D1[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_27761A[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2775D1[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_27761A[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2775D1[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_27761A[17 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2775D1[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2775D1[17 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2775D1[18 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2775D1[19 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2775D1[20 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_27769E[func_18(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2776A1[func_18(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2776A4[func_18(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2776A7[func_18(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2776AA[func_18(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2776AD[func_18(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2776B0[func_18(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2776B3[func_18(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2776B6[func_18(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2776B9[func_18(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2776BC[func_18(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2776BF[func_18(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2776C2[func_18(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2776C5[func_18(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2775D1[21 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_27761A[23 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2775D1[22 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_27761A[24 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2775D1[23 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_167(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_168(iParam0, 0);
}

int func_168(int iParam0, int iParam1)
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

int func_169(int iParam0)
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

int func_170(int iParam0)
{
	if (Global_1406D3.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_18(4294967295)];
			}
			else if (func_169(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_18(4294967295)];
	}
	return 0;
}

void func_171(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_46(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_173(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_172(*iParam0, 100) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_172(*iParam0, 100) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_172(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_173(int iParam0, int iParam1)
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
				if (func_277(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_173(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_277(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_175(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_173(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_172(*iParam1, 100) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_172(*iParam1, 100) * (20f * Global_40001.f_1073)));
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
	iVar0 = SYSTEM::ROUND((func_172(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_178(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_170(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_170(unk_0xD803B885F5E47A62());
		}
	}
	if (func_179(8000, 0, 0) > 0)
	{
		if (func_179(8000, 0, 0) < (iParam0 + func_170(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_179(8000, 0, 0) - func_170(unk_0xD803B885F5E47A62()));
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
	return func_183(func_184(iParam0));
}

int func_183(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_184(int iParam0)
{
	if (func_185(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 4294967295;
}

int func_185(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

bool func_186()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_34();
	}
	return func_187(Global_440000.f_2F9AE);
}

int func_187(int iParam0)
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

bool func_188(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 2;
}

bool func_189(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 7;
}

void func_190(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_192(iParam0, func_18(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_191(iParam0))
	{
		func_165(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_166(iParam0, iVar0, iParam2, 1);
	}
}

int func_191(int iParam0)
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

int func_192(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_18(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 4294967295))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_193()
{
	if (func_9(&uLocal_80, 10000, 0))
	{
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < Local_73.f_10)
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), Local_73.f_10, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
		}
		unk_0xB61FC7262CB2E7A1(unk_0xD803B885F5E47A62());
	}
}

void func_194()
{
	if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_73.f_2, Local_73.f_5, Local_73.f_5, 1000f, false, true, 0))
	{
		func_197();
		Local_75[unk_0x57270EE11514DC67() /*4*/].f_3 = 0;
	}
	else if (!unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), Local_73.f_2, Local_73.f_6, Local_73.f_6, 950f, false, true, 0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_76, 0) && unk_0xEAE0D21A50E6C7F4(iLocal_76, 3))
		{
			if (!unk_0xFEBC1E4EC9E001F0() && !func_196())
			{
				if (!func_244())
				{
					func_195("DCP_LEAVE", 4294967295);
				}
				unk_0x5D96D8530B3D0904(&iLocal_76, 0);
			}
		}
	}
	else
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_76, 3))
		{
			unk_0x5D96D8530B3D0904(&iLocal_76, 3);
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_76, 0))
		{
			unk_0x0674E58A79778E99(&iLocal_76, 0);
		}
	}
}

void func_195(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_196()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

void func_197()
{
	func_5(&uLocal_78);
	func_5(&uLocal_80);
	func_198();
	unk_0x0674E58A79778E99(&(Local_75[unk_0x57270EE11514DC67() /*4*/].f_1), 0);
	unk_0x0674E58A79778E99(&iLocal_76, 3);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 0);
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_76, 5))
	{
		unk_0x5D96D8530B3D0904(&iLocal_76, 5);
	}
}

void func_198()
{
	if (unk_0xEAE0D21A50E6C7F4(iLocal_76, 2))
	{
		func_199(1, 1, 0);
		unk_0x0674E58A79778E99(&iLocal_76, 2);
	}
}

void func_199(bool bParam0, bool bParam1, bool bParam2)
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
		func_219();
	}
	if (!bParam2)
	{
		func_202(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_201(0);
	func_200();
}

void func_200()
{
	struct<6> Var0;
	
	if (Global_24B2D0.f_1E7.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_24B2D0.f_1E7 = { Var0 };
	}
}

void func_201(bool bParam0)
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

void func_202(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_218())
		{
			func_217();
		}
		Global_24B2D0.f_2C2.f_206 = unk_0x0D0A574C76D769AC();
		Global_24B2D0.f_2C2.f_1F8 = iParam1;
		Global_24B2D0.f_2C2.f_1F9 = iParam2;
		Global_24B2D0.f_2C2.f_1FA = iParam10;
		func_215();
		func_206(8, 0, 0, 0, 0);
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
		func_203();
	}
}

void func_203()
{
	if (func_218() && !func_205())
	{
		func_217();
	}
	if (func_205())
	{
		func_204();
	}
	else
	{
		func_215();
		func_206(0, 0, 0, 0, 0);
		Global_24B2D0.f_6D1 = 0;
		Global_24B2D0.f_6D0 = 0;
	}
}

void func_204()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2C2), &(Global_24B2D0.f_4C9), 519);
	Global_24B2D0.f_1E7 = { Global_24B2D0.f_1ED };
	if (unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		Global_24B2D0.f_6D0 = 0;
	}
}

int func_205()
{
	if ((Global_24B2D0.f_6D0 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_4C9.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_4C9.f_206))
	{
		return 1;
	}
	return 0;
}

void func_206(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2537E2.f_766.f_2BF.f_10 != func_74())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_2537E2.f_766.f_2BF.f_10 /*421*/].f_194, 0) && func_207())
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

int func_207()
{
	if ((((((func_184(unk_0xD803B885F5E47A62()) == 229 || func_184(unk_0xD803B885F5E47A62()) == 191) || func_214()) || func_213()) || func_212(unk_0xD803B885F5E47A62())) || Global_265BE2.f_E2 == 1) || (Global_24B2D0.f_6D1 && func_208(unk_0xD803B885F5E47A62())))
	{
		return 0;
	}
	return 1;
}

int func_208(int iParam0)
{
	if (func_211(iParam0))
	{
		return 1;
	}
	if (func_209(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_209(int iParam0)
{
	return func_210(iParam0, 20);
}

bool func_210(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_211(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

int func_212(int iParam0)
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

var func_213()
{
	return Global_180605;
}

int func_214()
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

void func_215()
{
	if (func_218() && !func_205())
	{
		func_217();
	}
	func_216();
	Global_24B2D0.f_2C2 = 0;
}

void func_216()
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

void func_217()
{
	if (func_205())
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

int func_218()
{
	if ((Global_24B2D0.f_6D1 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_2C2.f_206))
	{
		return 1;
	}
	return 0;
}

void func_219()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_16D), &Global_24C4C4, 121);
}

void func_220()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_76, 2))
	{
		func_240(Local_73.f_2, (Local_73.f_6 * 1.5f), 0, 0, 1, 0);
		func_222(Local_73.f_2, Local_73.f_6, 0, 1);
		func_221(Local_73.f_2, 1, 0);
		unk_0x5D96D8530B3D0904(&iLocal_76, 2);
	}
}

void func_221(vector3 vParam0, int iParam1, int iParam2)
{
	Global_24B2D0.f_2D.f_31 = { vParam0 };
	Global_24B2D0.f_2D.f_34 = iParam1;
	Global_24B2D0.f_2D.f_35 = iParam2;
}

void func_222(vector3 vParam0, var uParam1, int iParam2, int iParam3)
{
	func_223(vParam0, 0f, 0f, 0f, uParam1, 0, iParam2, iParam3);
}

void func_223(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)
{
	struct<12> Var0;
	
	if (func_232(unk_0xD803B885F5E47A62()) || uParam5)
	{
		if (Var0.f_A == 1)
		{
			func_231(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_A = iParam3;
		if (func_226(Var0))
		{
			Global_24B2D0.f_2D.f_40 = func_225(unk_0xD803B885F5E47A62());
			func_224(Var0, iParam4);
		}
	}
}

void func_224(struct<12> Param0, int iParam1)
{
	Global_24B2D0.f_16D[iParam1 /*12*/] = { Param0 };
	Global_24B2D0.f_16D[iParam1 /*12*/].f_9 = 1;
}

int func_225(int iParam0)
{
	if (func_277(iParam0, 0, 1))
	{
		return Global_25033E[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_226(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_24B2D0.f_2D[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_227(Global_24B2D0.f_2D[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_227(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_A)
			{
				case 0:
					switch (vParam0.f_A)
					{
						case 0:
							if (func_230(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_228(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (vParam0.f_A)
					{
						case 0:
							if (func_230(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_228(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_228(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
	vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
	return func_229(vParam0, vParam1, vVar0, vVar1);
}

int func_229(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
{
	if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
	{
		return 1;
	}
	return 0;
}

int func_230(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	
	vVar0 = { vParam2 - vParam0 };
	if ((SYSTEM::VMAG(vVar0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_231(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar1.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		vVar0.y = uParam0->f_1;
		vVar1.y = uParam1->f_1;
	}
	else
	{
		vVar0.y = uParam1->f_1;
		vVar1.y = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		vVar0.z = uParam0->f_2;
		vVar1.z = uParam1->f_2;
	}
	else
	{
		vVar0.z = uParam1->f_2;
		vVar1.z = uParam0->f_2;
	}
	*uParam0 = { vVar0 };
	*uParam1 = { vVar1 };
}

int func_232(int iParam0)
{
	if (((func_235(iParam0, 1) || func_234(iParam0)) || func_185(iParam0, 0)) || func_233(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)
{
	if (!func_277(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

int func_234(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18D84D[iVar0 /*615*/] != 4294967295;
	}
	return 0;
}

bool func_235(int iParam0, bool bParam1)
{
	if (func_239() != 0)
	{
		return func_225(iParam0) != 0;
	}
	return func_236(iParam0, bParam1, 0);
}

int func_236(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_237(iParam0))
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

bool func_237(int iParam0)
{
	return func_238(iParam0);
}

bool func_238(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0);
}

int func_239()
{
	return Global_7830;
}

void func_240(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_241(vParam0, 0f, 0f, 0f, fParam1, 0, iParam2, iParam4, iParam3, iParam5);
}

void func_241(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	struct<12> Var0;
	
	if (func_232(unk_0xD803B885F5E47A62()) || uParam5)
	{
		if (Global_24B2D0.f_6D1)
		{
			func_203();
		}
		if (Var0.f_A == 1)
		{
			func_231(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_A = iParam3;
		Var0.f_B = uParam6;
		Var0.f_8 = uParam7;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_24B2D0.f_2D.f_40 = func_225(unk_0xD803B885F5E47A62());
		func_242(Var0, iParam4);
	}
}

void func_242(struct<12> Param0, int iParam1)
{
	Global_24B2D0.f_2D[iParam1 /*12*/] = { Param0 };
	Global_24B2D0.f_2D[iParam1 /*12*/].f_9 = 1;
}

var func_243()
{
	return Global_24DDCF.f_714;
}

int func_244()
{
	if (func_245(21))
	{
		return 1;
	}
	if (func_245(0))
	{
		return 1;
	}
	return 0;
}

bool func_245(int iParam0)
{
	int iVar0;
	
	iVar0 = func_192(2480, 4294967295, 0);
	return unk_0xEAE0D21A50E6C7F4(iVar0, iParam0);
}

void func_246()
{
	if (!unk_0xEAE0D21A50E6C7F4(iLocal_76, 6))
	{
		if (((((((func_247(60000) && func_249() == 1) && Local_73.f_7 <= 1) && !unk_0xFEBC1E4EC9E001F0()) && !unk_0x798A3F1296751F46()) && func_277(unk_0xD803B885F5E47A62(), 1, 1)) && !func_196()) && Local_73.f_10 != 5)
		{
			if (!func_244())
			{
				func_195("DCP_HELP1", 4294967295);
			}
			unk_0x5D96D8530B3D0904(&iLocal_76, 6);
		}
	}
}

bool func_247(int iParam0)
{
	return unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_24D547, unk_0x2B6E0A53779D29EA())) > iParam0;
}

void func_248()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_77))
	{
		if (func_244() || func_243())
		{
			unk_0x9D7CDDB4B55142AF(iLocal_77, 0);
		}
		else
		{
			unk_0x9D7CDDB4B55142AF(iLocal_77, 4);
		}
	}
	else
	{
		iLocal_77 = unk_0x3F3860E60C44719E(Local_73.f_2, Local_73.f_5);
		unk_0x61755AC17D8F538E(iLocal_77, 50);
		unk_0x7F010F50CE03A8AF(iLocal_77, 220);
		unk_0xF2D30B8ACAF12A39(iLocal_77, false);
		unk_0xDC5B2F9D0CCE3A10(iLocal_77, "DCP_BLIPN");
		if (func_244())
		{
			unk_0x9D7CDDB4B55142AF(iLocal_77, 0);
		}
	}
}

int func_249()
{
	return Local_73;
}

int func_250(int iParam0)
{
	return Local_75[iParam0 /*4*/];
}

bool func_251(int iParam0)
{
	return !func_252(iParam0);
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_40001.f_1A04)
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_40001.f_1A05)
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_40001.f_1A06)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_40001.f_1A07)
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_253(4))
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_253(4))
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_253(4))
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_253(4))
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_253(4))
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_253(4))
			{
				return 0;
			}
			if (func_254(unk_0xD803B885F5E47A62(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_253(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_277(unk_0x117658E336116132(iVar0), 0, 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_25033E[iVar0 /*421*/].f_D0, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_254(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

int func_255()
{
	var uVar0;
	
	func_262(&uVar0);
	if (Global_140856 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_261())
	{
		return 1;
	}
	if (Global_2594CA)
	{
		return 1;
	}
	if (func_260())
	{
		return 1;
	}
	if (func_259(159))
	{
		if (!func_258())
		{
			return 1;
		}
	}
	if (func_259(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_256() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_256()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_256()
{
	switch (func_239())
	{
		case 0:
			return func_257();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_257()
{
	switch (Global_259530)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_258()
{
	return Global_2564C8.f_256;
}

int func_259(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_260()
{
	return Global_258C08;
}

bool func_261()
{
	return Global_2564C8.f_251;
}

void func_262(var uParam0)
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
					func_263(iVar0);
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

void func_263(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_277(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_264(iVar2, &bVar3))
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

int func_264(int iParam0, var uParam1)
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

void func_265()
{
	SYSTEM::WAIT(0);
}

void func_266()
{
	if (unk_0xE4EDC4B0E92C078B(iLocal_77))
	{
		unk_0x142CC44DB769B57E(&iLocal_77);
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_73.f_1, 1))
	{
		func_76(12, "DSC_FAIL", 0, 0, 4294967197);
	}
	func_198();
	func_268(16, 0);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 0);
	func_267();
}

void func_267()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_268(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0, iParam0))
	{
		unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_D0), iParam0);
	}
}

void func_269(struct<21> Param0)
{
	func_275(func_276(Param0), Param0);
	func_273(0, 4294967295, 0);
	unk_0x9752E7BAEABA939E(&Local_73, 20);
	unk_0x35B62793EAE9ADDF(&Local_75, 129);
	if (!func_272())
	{
		func_266();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0);
		if (unk_0xBFF81ED3B99522C7())
		{
			func_270();
		}
		func_268(16, 1);
		Local_75[unk_0x57270EE11514DC67() /*4*/] = 0;
	}
	else
	{
		func_266();
	}
}

void func_270()
{
	Local_73.f_2 = { func_271() };
	Local_73.f_5 = 200f;
	Local_73.f_6 = 180f;
}

Vector3 func_271()
{
	switch (unk_0x09AC81E49EA267F7(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		
		case 1:
			return 233f, -1725f, 30f;
		
		case 2:
			return -403f, -1207f, 38f;
		
		case 3:
			return -1060f, -1028f, 3f;
		
		case 4:
			return -2152f, -329f, 14f;
		
		case 5:
			return -1651f, 214f, 61f;
		
		case 6:
			return -527f, 662f, 142f;
		
		case 7:
			return -27f, -747f, 45f;
		
		case 8:
			return 1292f, -649f, 68f;
		
		case 9:
			return 978f, -3143f, 6f;
		
		default:
	}
	return 978f, -3143f, 6f;
}

int func_272()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 1;
		}
		if (func_261())
		{
			return 0;
		}
		if (func_259(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_273(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_267();
			}
			else
			{
				return 0;
			}
		}
		if (!func_274())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_267();
					}
					else
					{
						return 0;
					}
				}
				if (func_261())
				{
					if (!bParam2)
					{
						func_267();
					}
					else
					{
						return 0;
					}
				}
				if (func_259(157))
				{
					if (!bParam2)
					{
						func_267();
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
					func_267();
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
				func_267();
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
			func_267();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_274()
{
	return Global_140856;
}

void func_275(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_267();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_10);
}

int func_276(int iParam0)
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

int func_277(int iParam0, bool bParam1, bool bParam2)
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

