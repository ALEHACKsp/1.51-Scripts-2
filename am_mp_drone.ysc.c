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
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	vector3 vLocal_83[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_84 = 0;
	struct<211> Local_85 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<12> Local_89 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	if (unk_0x8CD06866876216F2())
	{
		func_477(ScriptParam_89);
	}
	else
	{
		func_452(0);
	}
	while (true)
	{
		func_451();
		if (func_440())
		{
			func_452(0);
		}
		if (func_435())
		{
			func_452(0);
		}
		func_2();
		if (unk_0xBFF81ED3B99522C7())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (!func_434(5))
	{
		func_433();
		func_432();
		func_431();
		func_428();
		func_426();
		func_425();
	}
	if (func_434(0))
	{
		func_380();
	}
	else if (func_434(1))
	{
		if (!func_379())
		{
			func_373();
			func_358();
		}
		else
		{
			func_357(1);
			func_356(6);
		}
	}
	else if (func_434(2))
	{
		func_348();
	}
	else if (func_434(3))
	{
		func_347();
		func_342();
		func_340();
		func_339();
		func_338();
		func_337();
		func_336();
		func_330();
		func_324();
		func_310();
		func_308();
		func_266();
		func_265();
		func_250();
		func_348();
		if (func_243())
		{
			func_242();
			return;
		}
		func_238();
		func_237();
		func_231();
		func_219(0);
		func_202();
		func_193();
		func_185();
		func_164();
		func_157();
		func_156();
		func_81();
		func_66();
		func_65();
		func_64();
	}
	else if (func_434(4))
	{
		func_26();
	}
	else if (func_434(5))
	{
		func_22();
		func_20();
	}
	else if (func_434(6))
	{
		func_11();
	}
	if (!func_434(3) && !func_434(5))
	{
		func_5();
	}
	func_4();
	func_3();
}

void func_3()
{
	Local_85.f_2C++;
	if (Local_85.f_2C >= 32)
	{
		Local_85.f_2C = 0;
	}
}

void func_4()
{
	if (Local_85.f_2C != 4294967295)
	{
		if (unk_0xE5DBF9B6126856CA(vLocal_83[Local_85.f_2C /*3*/].f_2))
		{
			if (Global_19252E[unk_0xD803B885F5E47A62() /*85*/].f_34[Local_85.f_2C] != unk_0x09AD4CE7DA179533(vLocal_83[Local_85.f_2C /*3*/].f_2))
			{
				Global_19252E[unk_0xD803B885F5E47A62() /*85*/].f_34[Local_85.f_2C] = unk_0x09AD4CE7DA179533(vLocal_83[Local_85.f_2C /*3*/].f_2);
			}
		}
	}
}

void func_5()
{
	int iVar0;
	
	if (Local_85.f_76)
	{
		if (func_10(&(Local_85.f_B2)))
		{
			if (func_9())
			{
				iVar0 = Global_40001.f_60A6;
			}
			else
			{
				iVar0 = Global_40001.f_5E4E;
			}
			if (func_7(&(Local_85.f_B2), iVar0, 0))
			{
				func_6(&(Local_85.f_B2));
				Local_85.f_11 = 100;
				unk_0x0674E58A79778E99(&(Local_85.f_5), 4);
				unk_0x0674E58A79778E99(&(Local_85.f_5), 3);
				unk_0x0674E58A79778E99(&(Local_85.f_5), 24);
				Local_85.f_76 = 0;
			}
		}
	}
}

void func_6(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
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

void func_8(var uParam0, bool bParam1, bool bParam2)
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

bool func_9()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 2);
}

bool func_10(var uParam0)
{
	return uParam0->f_1;
}

void func_11()
{
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			if (!func_12())
			{
				func_452(1);
			}
			else
			{
				func_452(0);
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
	else if (!func_12())
	{
		func_452(1);
	}
	else
	{
		func_452(0);
	}
}

int func_12()
{
	if (func_19())
	{
		return 1;
	}
	if (func_18())
	{
		return 1;
	}
	if (func_17() && func_13(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_13(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_14(Global_25033E[iParam0 /*421*/].f_136.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
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

int func_15(int iParam0, bool bParam1, bool bParam2)
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

int func_16()
{
	return 4294967295;
}

bool func_17()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 5);
}

bool func_18()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 24);
}

bool func_19()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 16);
}

void func_20()
{
	char* sVar0;
	
	if (Local_85.f_2C == 4294967295)
	{
		return;
	}
	if (!func_21(Local_85.f_2C))
	{
		return;
	}
	if (unk_0xE5DBF9B6126856CA(vLocal_83[Local_85.f_2C /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		unk_0x1EEAD36B05B81FC1(sVar0);
		if (unk_0x436E3527A86BCA33(sVar0))
		{
			if (!unk_0x83A8177D302E1A7E(Local_85.f_88[Local_85.f_2C]))
			{
				unk_0x8F8ADC4754FE74DA(sVar0);
				Local_85.f_88[Local_85.f_2C] = unk_0xC1879030EB463216("scr_xs_guided_missile_trail", unk_0x09AD4CE7DA179533(vLocal_83[Local_85.f_2C /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
		}
	}
	else if (unk_0x83A8177D302E1A7E(Local_85.f_88[Local_85.f_2C]))
	{
		unk_0xF7E25143642732EA(Local_85.f_88[Local_85.f_2C], 0);
	}
}

int func_21(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (vLocal_83[iParam0 /*3*/].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_22()
{
	if (Local_85.f_2C != 4294967295)
	{
		if (unk_0xE5DBF9B6126856CA(vLocal_83[Local_85.f_2C /*3*/].f_2) && func_25(unk_0x09AD4CE7DA179533(vLocal_83[Local_85.f_2C /*3*/].f_2)))
		{
			if (func_24(Local_85.f_2C))
			{
				Local_85.f_77 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_23(Local_85.f_2C))
			{
				Local_85.f_77 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_21(Local_85.f_2C))
			{
				Local_85.f_77 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else
			{
				Local_85.f_77 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_85.f_2D[Local_85.f_2C] == 4294967295)
			{
				Local_85.f_2D[Local_85.f_2C] = unk_0xD68EA767274B7444();
				unk_0xCEAA091B490F8407(Local_85.f_2D[Local_85.f_2C], "Flight_Loop", unk_0x09AD4CE7DA179533(vLocal_83[Local_85.f_2C /*3*/].f_2), Local_85.f_77, false, 0);
				unk_0x6F6BA3FE885E6C91(Local_85.f_2D[Local_85.f_2C], "DroneRotationalSpeed", 1f);
			}
			else
			{
				unk_0x6F6BA3FE885E6C91(Local_85.f_2D[Local_85.f_2C], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_85.f_2D[Local_85.f_2C] != 4294967295)
		{
			unk_0x55D0A2DB35045A35(Local_85.f_2D[Local_85.f_2C]);
			unk_0x43A06902454A1172(Local_85.f_2D[Local_85.f_2C]);
			Local_85.f_2D[Local_85.f_2C] = 4294967295;
		}
	}
}

int func_23(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (vLocal_83[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_24(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (vLocal_83[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_26()
{
	int iVar0;
	
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(8);
	unk_0x3FC8DBCC154CA56B();
	unk_0x38C3A68D7861DCFD(0, 199, 1);
	unk_0x38C3A68D7861DCFD(0, 200, 1);
	func_63();
	func_61();
	func_54(1);
	if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 1))
	{
		if (!func_32() && !func_31())
		{
			if ((func_30() || func_9()) || func_29())
			{
				unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			}
		}
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
		{
			unk_0x08543B8F6DBE0B08(unk_0x09AD4CE7DA179533(Local_85.f_79), 1);
		}
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_21))
		{
			Local_85.f_21 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(Local_85.f_21, "HUD_Static_Loop", Local_85.f_77, true);
		}
		if (!func_28())
		{
			unk_0x5E858A00EAFA5B24(0, 300, 100);
			unk_0x63D6BFA449464BBF("RemixDrone");
			unk_0x5D96D8530B3D0904(&(Local_85.f_6), 0);
		}
		unk_0x5D96D8530B3D0904(&(Local_85.f_5), 1);
	}
	else if (!func_10(&(Local_85.f_AE)))
	{
		func_8(&(Local_85.f_AE), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_27())
		{
			iVar0 = 500;
		}
		if (func_7(&(Local_85.f_AE), iVar0, 0) || func_28())
		{
			if (Local_85.f_25 == 4294967295)
			{
				if (unk_0x8AA6DC470ABA63A2(Local_85.f_25))
				{
					Local_85.f_25 = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(Local_85.f_25, "HUD_Disconnect", Local_85.f_77, true);
				}
			}
			func_357(1);
			func_356(6);
		}
	}
}

bool func_27()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 4);
}

bool func_28()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 20);
}

bool func_29()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 3);
}

bool func_30()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 11);
}

bool func_31()
{
	return Global_265AC9;
}

int func_32()
{
	if ((func_53(unk_0xD803B885F5E47A62(), 0) && Global_1420C6 == 1) && func_33())
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (Global_1420C6 != 4294967295 || Global_1420CC != 4294967295)
	{
		if ((((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_51(unk_0x16F2683693E537C9(), 2106541073))
		{
			return 0;
		}
		if (((((!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_34())
		{
			return 0;
		}
	}
	return 1;
}

int func_34()
{
	int iVar0;
	
	if (func_50(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_49(unk_0xD803B885F5E47A62());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_48(iVar0) && func_14(func_47(iVar0)) == 4) && unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar0))) && !unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar0))) && unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar0), 0)) && unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0))) && func_46(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0)))
			{
				return 1;
			}
			if (!func_45(Global_440000.f_2F9AE))
			{
				if (func_50(iVar0))
				{
					if (func_44(iVar0))
					{
						return 1;
					}
					else if (func_48(unk_0xD803B885F5E47A62()) || func_43())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_19C0A4)
	{
		return 1;
	}
	if (func_42(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_41(unk_0xD803B885F5E47A62());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_48(iVar0) && func_14(func_47(iVar0)) == 9) && unk_0xC844350D5D58C99A(unk_0x9539D44F3E4492F6(iVar0))) && !unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar0))) && unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar0), 0)) && unk_0xC844350D5D58C99A(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0))) && unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iVar0), 0)) == 2176659152)
			{
				return 1;
			}
			if (func_40(iVar0))
			{
				return 1;
			}
			else if (func_48(unk_0xD803B885F5E47A62()) || func_43())
			{
				return 1;
			}
		}
	}
	if (func_53(unk_0xD803B885F5E47A62(), 0))
	{
		iVar0 = func_39(unk_0xD803B885F5E47A62());
		if (func_15(iVar0, 0, 1))
		{
			if ((((Global_18446E != func_16() && func_48(Global_18446E)) && func_14(func_47(Global_18446E)) == 11) && func_38(Global_18446E, 4294967295)) && unk_0x4906F8A34E9F4814(unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(Global_18446E), 0), 2306538597))
			{
				return 1;
			}
			else if (func_37(iVar0))
			{
				return 1;
			}
			else if (func_48(unk_0xD803B885F5E47A62()) || func_43())
			{
				return 1;
			}
		}
	}
	if (func_42(unk_0xD803B885F5E47A62()) || func_36(unk_0xD803B885F5E47A62()))
	{
		switch (Global_1420CC)
		{
			case 1:
				if (Global_40001.f_5838)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_40001.f_5839)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_40001.f_583A)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1420CA == 1)
	{
		return 1;
	}
	if (func_35(3))
	{
		if (Global_1801E8 == 185)
		{
			if (Global_18062A != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_35(int iParam0)
{
	return Global_40001.f_1390[iParam0] == Global_440000.f_2F9AE;
}

int func_36(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_14(Global_25033E[iParam0 /*421*/].f_136.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_37(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_3, 4);
	}
	return 0;
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_15(iParam0, 1, 1))
	{
		if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iParam0), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iParam0), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0x16F2683693E537C9() == unk_0xA30B8362589C124A(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_40(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_2, 6);
	}
	return 0;
}

int func_41(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_42(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295 && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_16())
			{
				return func_14(Global_25033E[iParam0 /*421*/].f_136.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_43()
{
	return unk_0xEAE0D21A50E6C7F4(Global_199459, 6);
}

int func_44(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 6);
	}
	return 0;
}

bool func_45(int iParam0)
{
	return Global_40001.f_1387[4] == iParam0;
}

int func_46(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(iParam0) == 387748548 || unk_0x134B62B726CEC8E6(iParam0) == 177270108)
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return Global_25033E[iParam0 /*421*/].f_136.f_E;
	}
	return 4294967295;
}

int func_48(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 3);
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_25033E[iParam0 /*421*/].f_136.f_8;
}

int func_50(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295 && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_16())
			{
				return func_14(Global_25033E[iParam0 /*421*/].f_136.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	if (func_52(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 1 || unk_0xD1960163A3042274(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_52(int iParam0)
{
	if (func_25(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_53(int iParam0, bool bParam1)
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
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295 && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_16())
			{
				return func_14(Global_25033E[iParam0 /*421*/].f_136.f_5) == 12;
			}
		}
	}
	return 0;
}

void func_54(int iParam0)
{
	if (func_60())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 1)
	{
		if (func_59(0))
		{
			func_55(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 2);
	}
}

void func_55(int iParam0)
{
	if (func_60())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_58())
		{
			func_57(1, 1);
		}
		else
		{
			func_57(0, 0);
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
	if (!func_56())
	{
		Global_4C1E.f_1 = 3;
	}
}

int func_56()
{
	if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_57(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_59(0))
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

bool func_58()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 5);
}

int func_59(int iParam0)
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

bool func_60()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 19);
}

void func_61()
{
	unk_0xC2127C0F64D6A3B9();
	func_62();
}

void func_62()
{
	Global_56C3.f_86 = 1;
}

void func_63()
{
	Global_14079A = 1;
}

void func_64()
{
	if (func_17())
	{
		if (func_18())
		{
			if (func_25(unk_0x16F2683693E537C9()))
			{
				unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 124, true);
			}
		}
	}
}

void func_65()
{
	char* sVar0;
	
	if (!func_27())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	unk_0x1EEAD36B05B81FC1(sVar0);
	if (unk_0x436E3527A86BCA33(sVar0))
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
		{
			if (!unk_0x83A8177D302E1A7E(Local_85.f_88[unk_0xD803B885F5E47A62()]))
			{
				unk_0x8F8ADC4754FE74DA(sVar0);
				Local_85.f_88[unk_0xD803B885F5E47A62()] = unk_0xC1879030EB463216("scr_xs_guided_missile_trail", unk_0x09AD4CE7DA179533(Local_85.f_79), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
		}
	}
}

void func_66()
{
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (!unk_0xC844350D5D58C99A(Local_85.f_7B))
		{
			unk_0x523BCC9DC80CD82F(func_80());
			if (unk_0xB87F6CF6E5628C67(func_80()))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 6))
				{
					if (func_74(unk_0xBF3DE18643F54472(false, 0) + 1, 0, 1))
					{
						unk_0x0BEC04ECA8485A3A(unk_0xA108079788452A90(0) + 1);
						unk_0x5D96D8530B3D0904(&(Local_85.f_5), 6);
					}
				}
				else if (unk_0xA3FA8B6D2780D661(1))
				{
					Local_85.f_7B = unk_0x36F2404464202779(26, func_80(), Local_85.f_70, unk_0xD9522BA9E27E1349(unk_0x09AD4CE7DA179533(Local_85.f_79)), 0, false);
					unk_0xE121AE1BBF90E186(Local_85.f_7B, true);
					unk_0x4A4806F9D471E491(Local_85.f_7B, false, 0);
					unk_0x08543B8F6DBE0B08(Local_85.f_7B, 0);
					unk_0x11AD11297DC58CC7(Local_85.f_7B, true);
					unk_0x71199B01895C6202(func_80());
					unk_0x4E885A246A9D983A(Local_85.f_7B, 118, false);
					unk_0x4E885A246A9D983A(Local_85.f_7B, 108, true);
					unk_0x4E885A246A9D983A(Local_85.f_7B, 208, true);
					unk_0xAA6B3A4292417750(Local_85.f_7B, true, true, true, true, true, false, 0, false);
					unk_0x9F528B1B53FBC5D9(Local_85.f_7B, unk_0x09AD4CE7DA179533(Local_85.f_79), 4294967295, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0xCDCD90141EA7E6EE(Local_85.f_7B, false, 0);
					Global_19C087.f_17 = Local_85.f_7B;
				}
			}
		}
		else if (func_25(Local_85.f_7B))
		{
			if (unk_0x4FC40AB0ECCE6E18(Local_85.f_7B))
			{
				unk_0x4A4806F9D471E491(Local_85.f_7B, false, 0);
			}
			if (!func_72(unk_0xD803B885F5E47A62()) && !func_69(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
				{
					func_68(Global_180863);
				}
			}
			else if ((Global_19C087.f_4 == 4294967295 || Global_19C087.f_4 == 0) || Global_19C087.f_4 == Global_180858)
			{
				func_68(Global_180863);
			}
			if (unk_0x7C055F40DB28E523(Local_85.f_7B) != func_67())
			{
				unk_0x6DF7BF67E86AAE86(Local_85.f_7B, func_67());
			}
			if (!unk_0xD59B17D2DFF98E26(Local_85.f_7B))
			{
				unk_0x9F528B1B53FBC5D9(Local_85.f_7B, unk_0x09AD4CE7DA179533(Local_85.f_79), 4294967295, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				unk_0xCDCD90141EA7E6EE(Local_85.f_7B, false, 0);
			}
		}
	}
}

int func_67()
{
	if (Global_19C087.f_4 != 4294967295 && Global_19C087.f_4 != 0)
	{
		return Global_19C087.f_4;
	}
	return Global_180863;
}

void func_68(int iParam0)
{
	if (Global_19C087.f_4 != iParam0)
	{
		Global_19C087.f_4 = iParam0;
	}
}

int func_69(int iParam0)
{
	if (func_71(iParam0) == 236 || func_71(iParam0) == 150)
	{
		return func_70(iParam0);
	}
	return 0;
}

int func_70(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

int func_71(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 4294967295;
}

bool func_72(int iParam0)
{
	return func_73(iParam0, 20);
}

bool func_73(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
{
	return func_75(2, iParam0, 1, bParam1, bParam2);
}

int func_75(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1532F0, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_79(iParam0) - func_78(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_78(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_79(iParam0) - func_77(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_78(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_79(iParam0) - func_78(iParam0, 1));
		}
		if (!bParam4 && Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 3)
		{
			iVar1 = (iVar1 - func_76(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1532F0.f_1;
			break;
		
		case 1:
			return Global_1532F0.f_2;
			break;
		
		case 2:
			return Global_1532F0.f_3;
			break;
	}
	return 0;
}

int func_78(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D1;
			}
			else
			{
				return unk_0x9BFC2168CB5FCF68(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D2;
			}
			else
			{
				return unk_0x11225ACFD0C1477E(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x2E9F2B9C010D34D9())
			{
				return Global_25033E[iVar0 /*421*/].f_D3;
			}
			else
			{
				return unk_0xBF3DE18643F54472(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1532F8;
			break;
		
		case 1:
			return Global_1532F9;
			break;
		
		case 2:
			return Global_1532FA;
			break;
	}
	return 0;
}

int func_80()
{
	return joaat("g_m_m_chigoon_01");
}

void func_81()
{
	if (func_155())
	{
		return;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0))
	{
		if (unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0x9CF8D5C7090408A2(Local_85.f_83))
		{
			if (!func_27())
			{
				func_146();
				func_108();
			}
			else
			{
				func_90();
				func_84();
			}
			unk_0x9501364A300048C6();
			func_83(1);
			func_82(2);
		}
	}
}

void func_82(int iParam0)
{
	Global_141384 = iParam0;
}

void func_83(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_84()
{
	int iVar0;
	
	if (!unk_0x83D8570832F172A7(Local_85.f_84))
	{
		Local_85.f_84 = func_89();
		return;
	}
	iVar0 = func_88();
	if (iVar0 < 0 || !func_25(iVar0))
	{
		return;
	}
	func_87(Local_85.f_84, 0);
	func_86(Local_85.f_84, 3, 3, 3);
	func_85(Local_85.f_84, 0f, 0f, 0f, 0f, (unk_0xD9522BA9E27E1349(iVar0) + 180f));
	unk_0xD9ACBBA59FD5A09E(1);
	unk_0x6567AE843FADBA94(Local_85.f_84, 255, 255, 255, 0, 0);
}

void func_85(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_ALT_FOV_HEADING");
	unk_0x7C19E5E4784BD7CF(fParam1);
	unk_0x7C19E5E4784BD7CF(fParam2);
	unk_0x7C19E5E4784BD7CF(fParam5);
	unk_0x7E60D21B163E9D56();
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_WEAPON_VALUES");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x7E60D21B163E9D56();
}

void func_87(int iParam0, bool bParam1)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_ZOOM_VISIBLE");
	unk_0x1200CC973A2399C8(bParam1);
	unk_0x7E60D21B163E9D56();
}

int func_88()
{
	if (unk_0xD803B885F5E47A62() != 4294967295)
	{
		return Global_19C087.f_14;
	}
	return 4294967295;
}

int func_89()
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_440000.f_372EA)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return unk_0xB01F55A0FD1CFD49(sVar0);
}

void func_90()
{
	if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 16))
	{
		if (func_106(0, 4294967295, 0))
		{
			func_105(4294967295);
			func_104(20, "DRONE_SPACE", 4294967295);
			func_104(21, "DRONE_POSITION", 4294967295);
			if (!unk_0x91E3F625EF57450D(0))
			{
				func_103(208, "DRONE_SPEEDU", 4294967295, 0);
				func_103(207, "DRONE_SLOWD", 4294967295, 0);
			}
			else
			{
				func_103(209, "DRONE_SPEEDU", 4294967295, 0);
				func_103(210, "DRONE_SLOWD", 4294967295, 0);
			}
			func_103(75, "MOVE_DRONE_RE", 4294967295, 0);
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 16);
		}
	}
	else
	{
		func_91(0, 4294967295, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x91E3F625EF57450D(0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 17))
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 17);
			unk_0x0674E58A79778E99(&(Local_85.f_5), 16);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 17))
	{
		unk_0x0674E58A79778E99(&(Local_85.f_5), 17);
		unk_0x0674E58A79778E99(&(Local_85.f_5), 16);
	}
}

void func_91(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_102(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_99(bParam4, bParam8))
	{
		return;
	}
	if (func_97())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_94(unk_0xD803B885F5E47A62(), 0))
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
					func_93(&(Global_574E.f_12A3[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_93(&(Global_574E.f_12A3[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_574E.f_1395[iVar1] == 4294967295)
					{
						func_92(&(Global_574E.f_1364[iVar1 /*4*/]));
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
				func_93(&Global_412185);
				if (Global_412185.f_14 == 4294967295)
				{
					func_92(&(Global_412185.f_10));
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

void func_92(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_93(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_94(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_95(4294967295, 0) == 8;
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

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_96();
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

int func_96()
{
	return Global_1407E9;
}

int func_97()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 3)
	{
		return 1;
	}
	if (func_98())
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

int func_98()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_99(bool bParam0, bool bParam1)
{
	if (Global_2537E2.f_766.f_2BD != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_101(8, 4294967295) && func_100() != 65)) || (unk_0x8BB17FEBE0394018() != 0 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_12C52) || Global_574E.f_20E0) || unk_0xE57E602827E07C9D()) || Global_181EC.f_589)
	{
		return 0;
	}
	return 1;
}

int func_100()
{
	return Global_14082C;
}

bool func_101(int iParam0, int iParam1)
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

int func_102(var uParam0, bool bParam1, int iParam2)
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

void func_103(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

void func_104(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xE32F7AC5E6DF304A(2, iParam0, true);
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
	Global_574E.f_13A2[Global_574E.f_12A1] = 361;
	Global_574E.f_13AF[Global_574E.f_12A1] = iParam0;
	Global_574E.f_12A1++;
}

void func_105(int iParam0)
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
		if (!func_102(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(false);
		unk_0x7E60D21B163E9D56();
	}
}

bool func_106(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_102(&iVar0, 1, iParam1))
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
	bVar2 = func_107(&(Global_574E.f_161C[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_107(var uParam0)
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

void func_108()
{
	if (!unk_0x83D8570832F172A7(Local_85.f_84))
	{
		Local_85.f_84 = unk_0xB01F55A0FD1CFD49("DRONE_CAM");
		return;
	}
	if ((func_29() || func_60()) || func_145(0))
	{
		func_144("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_144("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_29() || func_60()) || func_9())
	{
		func_144("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_144("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_9())
	{
		func_144("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_29() && !func_60())
	{
		func_144("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_144("SET_HEADING_METER_IS_VISIBLE", 1);
	func_144("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_29() && !func_60()) && !func_9()) && func_143())
	{
		func_144("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_142())
	{
		func_144("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_144("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_144("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_140(unk_0xD803B885F5E47A62()) == 240)
	{
		if (Local_85.f_53 >= (func_139() - 50f) || Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 50)))
		{
			func_144("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_138();
			if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 13))
			{
				unk_0x0674E58A79778E99(&(Local_85.f_5), 13);
			}
		}
		else
		{
			func_134(func_135());
			if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 13))
			{
				func_144("SET_SOUND_WAVE_IS_VISIBLE", 1);
				unk_0x5D96D8530B3D0904(&(Local_85.f_5), 13);
			}
		}
	}
	else
	{
		func_144("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_138();
	}
	func_144("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_29() && !func_60())
	{
		if (!func_9())
		{
			func_133(Local_85.f_11);
		}
		else
		{
			func_132(Local_85.f_11);
		}
		if (!func_145(0))
		{
			func_131(Local_85.f_12);
		}
	}
	if (func_142())
	{
		func_130(Local_85.f_17);
	}
	if (func_143())
	{
		func_129(Local_85.f_13);
	}
	func_128(0, "DRONE_ZOOM_1");
	func_128(1, "");
	func_128(2, "DRONE_ZOOM_2");
	func_128(3, "");
	func_128(4, "DRONE_ZOOM_3");
	func_126();
	func_124();
	func_122();
	func_121(SYSTEM::ROUND((unk_0xD9522BA9E27E1349(unk_0x09AD4CE7DA179533(Local_85.f_79)) + 180f)));
	if (func_140(unk_0xD803B885F5E47A62()) == 240)
	{
		func_120(func_135());
	}
	if (func_119())
	{
		func_112();
	}
	else if (func_9() || func_29())
	{
		func_111();
	}
	else if (func_18())
	{
		func_109();
	}
	unk_0xD9ACBBA59FD5A09E(1);
	unk_0x6567AE843FADBA94(Local_85.f_84, 255, 255, 255, 0, 0);
}

void func_109()
{
	float fVar0;
	
	fVar0 = Local_85.f_53;
	if (fVar0 >= (func_139() - 50f))
	{
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			Local_85.f_24 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(Local_85.f_24, "Out_Of_Bounds_Alarm_Loop", Local_85.f_77, true);
		}
		if (fVar0 >= (func_139() - 50f) && fVar0 < (func_139() - 45f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if (fVar0 >= (func_139() - 45f) && fVar0 < (func_139() - 40f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if (fVar0 >= (func_139() - 40f) && fVar0 < (func_139() - 35f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if (fVar0 >= (func_139() - 35f) && fVar0 < (func_139() - 30f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if (fVar0 >= (func_139() - 30f) && fVar0 < (func_139() - 25f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if (fVar0 >= (func_139() - 25f) && fVar0 < (func_139() - 20f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if (fVar0 >= (func_139() - 20f) && fVar0 < (func_139() - 15f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if (fVar0 >= (func_139() - 15f) && fVar0 < (func_139() - 10f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if (fVar0 >= (func_139() - 10f) && fVar0 < (func_139() - 5f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if (fVar0 >= (func_139() - 5f) && fVar0 < func_139())
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			unk_0x55D0A2DB35045A35(Local_85.f_24);
			unk_0x43A06902454A1172(Local_85.f_24);
			Local_85.f_24 = 4294967295;
		}
	}
}

void func_110(float fParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_WARNING_FLASH_RATE");
	unk_0x7C19E5E4784BD7CF(fParam0);
	unk_0x7E60D21B163E9D56();
}

void func_111()
{
	if (Local_85.f_70.f_2 >= (func_139() - 20f))
	{
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			Local_85.f_24 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(Local_85.f_24, "Out_Of_Bounds_Alarm_Loop", Local_85.f_77, true);
		}
		if (Local_85.f_70.f_2 >= (func_139() - 20f) && Local_85.f_70.f_2 < (func_139() - 16f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 16f) && Local_85.f_70.f_2 < (func_139() - 13f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 13f) && Local_85.f_70.f_2 < (func_139() - 10f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 10f) && Local_85.f_70.f_2 < (func_139() - 8f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 8f) && Local_85.f_70.f_2 < (func_139() - 6f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 6f) && Local_85.f_70.f_2 < (func_139() - 4f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 4f) && Local_85.f_70.f_2 < (func_139() - 3f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 3f) && Local_85.f_70.f_2 < (func_139() - 2f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 2f) && Local_85.f_70.f_2 < (func_139() - 1f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if (Local_85.f_70.f_2 >= (func_139() - 1f) && Local_85.f_70.f_2 < func_139())
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			unk_0x55D0A2DB35045A35(Local_85.f_24);
			unk_0x43A06902454A1172(Local_85.f_24);
			Local_85.f_24 = 4294967295;
		}
	}
}

void func_112()
{
	if (Local_85.f_53 >= (func_139() - 50f) || Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 50)))
	{
		func_113();
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			Local_85.f_24 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(Local_85.f_24, "Out_Of_Bounds_Alarm_Loop", Local_85.f_77, true);
		}
		if ((Local_85.f_53 >= (func_139() - 50f) && Local_85.f_53 < (func_139() - 45f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 50)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 45))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if ((Local_85.f_53 >= (func_139() - 45f) && Local_85.f_53 < (func_139() - 40f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 45)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 40))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if ((Local_85.f_53 >= (func_139() - 40f) && Local_85.f_53 < (func_139() - 35f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 40)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 35))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if ((Local_85.f_53 >= (func_139() - 35f) && Local_85.f_53 < (func_139() - 30f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 35)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 30))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if ((Local_85.f_53 >= (func_139() - 30f) && Local_85.f_53 < (func_139() - 25f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 30)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 25))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if ((Local_85.f_53 >= (func_139() - 25f) && Local_85.f_53 < (func_139() - 20f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 25)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 20))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if ((Local_85.f_53 >= (func_139() - 20f) && Local_85.f_53 < (func_139() - 15f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 20)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 15))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if ((Local_85.f_53 >= (func_139() - 15f) && Local_85.f_53 < (func_139() - 10f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 15)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 10))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if ((Local_85.f_53 >= (func_139() - 10f) && Local_85.f_53 < (func_139() - 5f)) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 10)) && Local_85.f_54 < IntToFloat((Global_40001.f_5E55 - 5))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if ((Local_85.f_53 >= (func_139() - 5f) && Local_85.f_53 < func_139()) || (Local_85.f_54 >= IntToFloat((Global_40001.f_5E55 - 5)) && Local_85.f_54 < IntToFloat(Global_40001.f_5E55)))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			unk_0x55D0A2DB35045A35(Local_85.f_24);
			unk_0x43A06902454A1172(Local_85.f_24);
			Local_85.f_24 = 4294967295;
		}
	}
}

void func_113()
{
	int iVar0;
	
	if (unk_0x0F1CCD77290EE12F() && !unk_0xEAE0D21A50E6C7F4(Global_199459.f_3, 15))
	{
		if (!unk_0xFEBC1E4EC9E001F0())
		{
			iVar0 = func_116(22045, 4294967295, 4294967295);
			if (iVar0 < 4)
			{
				func_115("HACK_DRONE_DIS", 4294967295);
				iVar0++;
				func_114(22045, iVar0, 4294967295, 1);
				unk_0x5D96D8530B3D0904(&(Global_199459.f_3), 15);
			}
		}
	}
}

var func_114(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_96();
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

void func_115(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_96();
	}
	iVar0 = 0;
	iVar1 = func_118(iParam0, iParam1);
	iVar2 = func_117(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_117(int iParam0)
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

int func_118(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_96();
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

bool func_119()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 1);
}

void func_120(float fParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "ATTENUATE_SOUND_WAVE");
	unk_0x7C19E5E4784BD7CF(fParam0);
	unk_0x7E60D21B163E9D56();
}

void func_121(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_HEADING");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_122()
{
	if (func_9())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 11) && !Local_85.f_76)
		{
			func_123(1);
		}
		else
		{
			func_123(0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 11) || unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 23))
	{
		func_123(1);
	}
	else
	{
		func_123(0);
	}
}

void func_123(bool bParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_RETICLE_ON_TARGET");
	unk_0x1200CC973A2399C8(bParam0);
	unk_0x7E60D21B163E9D56();
}

void func_124()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 4) || (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 3) && func_9()))
	{
		if (Local_85.f_11 == 100)
		{
			func_125(1);
		}
		else if (Local_85.f_11 != 0 && Local_85.f_11 != 100)
		{
			func_125(2);
		}
	}
	else
	{
		func_125(0);
	}
}

void func_125(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_RETICLE_STATE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_126()
{
	switch (Local_85.f_18)
	{
		case 0:
			func_127(0);
			break;
		
		case 1:
			func_127(2);
			break;
		
		case 2:
			func_127(4);
			break;
	}
}

void func_127(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_ZOOM");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_128(int iParam0, char* sParam1)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_ZOOM_LABEL");
	unk_0x3CAEA85DA607305E(iParam0);
	func_92(sParam1);
	unk_0x7E60D21B163E9D56();
}

void func_129(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_BOOST_PERCENTAGE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_130(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_TRANQUILIZE_PERCENTAGE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_131(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_DETONATE_PERCENTAGE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_132(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_EMP_PERCENTAGE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_133(int iParam0)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, "SET_SHOCK_PERCENTAGE");
	unk_0x3CAEA85DA607305E(iParam0);
	unk_0x7E60D21B163E9D56();
}

void func_134(float fParam0)
{
	if (unk_0x8AA6DC470ABA63A2(Local_85.f_2B))
	{
		Local_85.f_2B = unk_0xD68EA767274B7444();
		unk_0x4D7F4CC43D4D0DE3(Local_85.f_2B, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", true);
		unk_0x6F6BA3FE885E6C91(Local_85.f_2B, "signalstrength", fParam0);
	}
	else
	{
		unk_0x6F6BA3FE885E6C91(Local_85.f_2B, "signalstrength", fParam0);
	}
}

float func_135()
{
	float fVar0;
	
	if (func_140(unk_0xD803B885F5E47A62()) == 240)
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0))
		{
			fVar0 = func_136(unk_0x09AD4CE7DA179533(Local_85.f_79), func_137(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_136(int iParam0, vector3 vParam1, bool bParam2)
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

Vector3 func_137()
{
	if (func_140(unk_0xD803B885F5E47A62()) == 240)
	{
		return Global_19D9BE;
	}
	return 0f, 0f, 0f;
}

void func_138()
{
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_2B))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_2B);
		unk_0x43A06902454A1172(Local_85.f_2B);
		Local_85.f_2B = 4294967295;
	}
}

float func_139()
{
	if (Global_19C087.f_8 == 0f)
	{
		return Global_40001.f_5E56;
	}
	return Global_19C087.f_8;
}

int func_140(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 4294967295;
}

int func_141(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

bool func_142()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 6);
}

int func_143()
{
	if (func_142())
	{
		if (unk_0x31609A585163CBAC(Global_19C087.f_18))
		{
			return 0;
		}
	}
	return 1;
}

void func_144(char* sParam0, bool bParam1)
{
	unk_0x7E60C62A7CE58FC8(Local_85.f_84, sParam0);
	unk_0x1200CC973A2399C8(bParam1);
	unk_0x7E60D21B163E9D56();
}

int func_145(bool bParam0)
{
	if (func_119())
	{
		if (bParam0)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 4))
			{
				return 1;
			}
		}
	}
	if (func_142())
	{
		return 1;
	}
	return 0;
}

void func_146()
{
	int iVar0;
	int iVar1;
	
	if (func_60())
	{
		return;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 16))
	{
		if (func_106(0, 4294967295, 0))
		{
			func_105(4294967295);
			func_104(21, "DRONE_MOVE", 4294967295);
			func_104(20, "DRONE_POSITION", 4294967295);
			if (!unk_0x91E3F625EF57450D(0))
			{
				func_103(210, "CELL_284", 4294967295, 0);
				if ((!func_29() && !func_9()) && func_143())
				{
					func_103(209, "BOOST_DRONE_E", 4294967295, 0);
				}
				func_103(208, "MOVE_DRONE_UP", 4294967295, 0);
				func_103(207, "MOVE_DRONE_DO", 4294967295, 0);
			}
			else
			{
				func_104(29, "CELL_284", 4294967295);
				if ((!func_29() && !func_9()) && func_143())
				{
					func_103(203, "BOOST_DRONE_E", 4294967295, 0);
				}
				func_103(209, "MOVE_DRONE_UP", 4294967295, 0);
				func_103(210, "MOVE_DRONE_DO", 4294967295, 0);
			}
			if (!func_29())
			{
				iVar0 = 206;
				if (unk_0x91E3F625EF57450D(0))
				{
					iVar0 = 237;
				}
				if (func_9())
				{
					func_103(iVar0, "MOVE_DRONE_EM", 4294967295, 0);
				}
				else
				{
					func_103(iVar0, "MOVE_DRONE_ST", 4294967295, 0);
				}
				iVar1 = 205;
				if (unk_0x91E3F625EF57450D(0))
				{
					iVar1 = 238;
				}
				if (!func_145(0))
				{
					func_103(iVar1, "MOVE_DRONE_EX", 4294967295, 0);
				}
				else if (func_153())
				{
					func_103(iVar1, "MOVE_DRONE_TRG", 4294967295, 0);
				}
			}
			if (!func_9())
			{
				if ((((func_152(0) || func_152(1)) || func_151()) || unk_0x192DA571D9133D23()) || func_147(unk_0xD803B885F5E47A62()))
				{
				}
				else
				{
					func_103(201, "DRONE_PHOTO", 4294967295, 0);
				}
			}
			func_103(80, "MOVE_DRONE_RE", 4294967295, 0);
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 16);
		}
	}
	else
	{
		func_91(0, 4294967295, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x91E3F625EF57450D(0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 17))
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 17);
			unk_0x0674E58A79778E99(&(Local_85.f_5), 16);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 17))
	{
		unk_0x0674E58A79778E99(&(Local_85.f_5), 17);
		unk_0x0674E58A79778E99(&(Local_85.f_5), 16);
	}
}

int func_147(int iParam0)
{
	if (func_150(func_140(iParam0)))
	{
		if (func_149() != func_16())
		{
			if (func_148() == func_149())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_148()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23;
}

int func_149()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

var func_151()
{
	return Global_56C3.f_87;
}

bool func_152(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 4);
	}
	return Global_56C3.f_4;
}

int func_153()
{
	if (func_154() <= 0)
	{
		return 0;
	}
	if (func_142())
	{
		return 1;
	}
	return 0;
}

int func_154()
{
	return Global_19C087.f_6;
}

bool func_155()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 7);
}

void func_156()
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			if ((unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0x9CF8D5C7090408A2(Local_85.f_83)) && !func_60())
			{
				iVar0 = 80;
				if (func_27())
				{
					iVar0 = 75;
				}
				if (unk_0xBFC0798A6E3417F9(2, iVar0) || unk_0xD245978525608929(2, iVar0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 7))
					{
						unk_0x5D96D8530B3D0904(&(Local_85.f_5), 7);
					}
				}
			}
		}
	}
}

void func_157()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_163() || !func_147(unk_0xD803B885F5E47A62())) || !unk_0x8CD06866876216F2())
	{
		return;
	}
	iVar0 = func_162(1);
	func_161(iVar0);
	iVar1 = func_162(0);
	iVar2 = unk_0x4B72871A3BE7B474(Local_85.f_67, 2f, iVar1, 0, 0, 0);
	if (unk_0xC844350D5D58C99A(iVar2) && iVar2 != Local_85.f_7C)
	{
		if (unk_0x54648B774DB42A3A(iVar2, joaat("weapon_stungun"), 0) || unk_0x7F6DC62EA9922664(iVar2) == 999)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 26))
			{
				func_160(func_149(), 1);
				unk_0x5D96D8530B3D0904(&(Local_85.f_5), 26);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(Local_85.f_7C))
	{
		if (unk_0x54648B774DB42A3A(Local_85.f_7C, joaat("weapon_stungun"), 0) || unk_0x7F6DC62EA9922664(Local_85.f_7C) == 999)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 26))
			{
				func_160(func_149(), 1);
				unk_0x5D96D8530B3D0904(&(Local_85.f_5), 26);
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 26))
	{
		iVar3 = unk_0x4B72871A3BE7B474(Local_85.f_67, 2f, iVar0, 0, 0, 0);
		if (unk_0xC844350D5D58C99A(iVar3))
		{
			if (unk_0xC844350D5D58C99A(Local_85.f_7C))
			{
				unk_0x4A4806F9D471E491(Local_85.f_7C, false, 0);
			}
			if (unk_0xC844350D5D58C99A(iVar2))
			{
				unk_0x4A4806F9D471E491(iVar2, false, 0);
			}
			func_158(1);
		}
	}
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		if (!func_159())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 1);
		}
	}
	else if (func_159())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 1);
	}
}

bool func_159()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 1);
}

void func_160(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 1705449672;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam1;
	iVar1 = 0;
	if (iParam0 != func_16())
	{
		unk_0x5D96D8530B3D0904(&iVar1, iParam0);
	}
	if (!iVar1 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &vVar0, 3, iVar1);
	}
}

bool func_161(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_162(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_19C087.f_13 != 0)
		{
			return Global_19C087.f_13;
		}
		else
		{
			return 2151779629;
		}
	}
	else
	{
		return 3109994857;
	}
	return 0;
}

bool func_163()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 14);
}

void func_164()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 1) || func_176()) || func_175())
	{
		Local_85.f_11 = 0;
		Local_85.f_12 = 0;
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 10))
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 10);
		}
		return;
	}
	if (!func_175())
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 10))
		{
			Local_85.f_11 = 100;
			unk_0x0674E58A79778E99(&(Local_85.f_5), 10);
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			if ((unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0x9CF8D5C7090408A2(Local_85.f_83)) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 2))
			{
				if ((!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 4) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 3)) && !Local_85.f_76)
				{
					iVar0 = 206;
					if (unk_0x91E3F625EF57450D(0))
					{
						iVar0 = 237;
					}
					if ((((unk_0xB9132A06AE472728(2, iVar0) || unk_0x9A01369A10646AFE(2, iVar0)) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 5)) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 24)) && !func_60())
					{
						unk_0x5D96D8530B3D0904(&(Local_85.f_5), 24);
						if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 11) || unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 23))
						{
							Local_85.f_1A++;
						}
					}
					if (func_9())
					{
						func_171();
					}
					else
					{
						func_170();
					}
				}
				else if (func_10(&(Local_85.f_B2)))
				{
					if (func_9())
					{
						iVar1 = Global_40001.f_60A6;
					}
					else
					{
						iVar1 = Global_40001.f_5E4E;
					}
					if (func_7(&(Local_85.f_B2), iVar1, 0))
					{
						func_6(&(Local_85.f_B2));
						Local_85.f_11 = 100;
						if (Local_85.f_1F != 4294967295)
						{
							unk_0x55D0A2DB35045A35(Local_85.f_1F);
							unk_0x43A06902454A1172(Local_85.f_1F);
							Local_85.f_1F = 4294967295;
						}
						if (unk_0x8AA6DC470ABA63A2(Local_85.f_22))
						{
							unk_0x55D0A2DB35045A35(Local_85.f_22);
							unk_0x43A06902454A1172(Local_85.f_22);
							Local_85.f_22 = 4294967295;
						}
						unk_0x0674E58A79778E99(&(Local_85.f_5), 4);
						unk_0x0674E58A79778E99(&(Local_85.f_5), 3);
						unk_0x0674E58A79778E99(&(Local_85.f_5), 24);
						Local_85.f_76 = 0;
					}
					else
					{
						iVar2 = (100 * unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_B2)));
						Local_85.f_11 = (iVar2 / iVar1);
						if (!func_9())
						{
							if (unk_0x8AA6DC470ABA63A2(Local_85.f_1F))
							{
								Local_85.f_1F = unk_0xD68EA767274B7444();
								unk_0x4D7F4CC43D4D0DE3(Local_85.f_1F, "HUD_Shock_Recharge", Local_85.f_77, true);
								unk_0x6F6BA3FE885E6C91(Local_85.f_1F, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_168();
				func_165();
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

void func_165()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	
	if (func_153())
	{
		if (unk_0x91E3F625EF57450D(0))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 6))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 5))
			{
				if (unk_0xB9132A06AE472728(2, iVar0) || unk_0x9A01369A10646AFE(2, iVar0))
				{
					unk_0x5D96D8530B3D0904(&(Local_85.f_6), 5);
				}
			}
			else if (Local_85.f_C == 1)
			{
				if (Local_85.f_AD == 2)
				{
					vVar1 = { unk_0xF1EE614CA05DDE75() };
					vVar2 = { unk_0x9382F04ED9CDA21A(2) };
					vVar3 = { (-SYSTEM::SIN(vVar2.z) * SYSTEM::COS(vVar2.x)), (SYSTEM::COS(vVar2.z) * SYSTEM::COS(vVar2.x)), SYSTEM::SIN(vVar2.x) };
					vVar4 = { 10f, 10f, 10f };
					vVar5 = { vVar1 + vVar3 * vVar4 };
					iVar6 = Global_40001.f_5E4F;
					if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 23))
					{
						iVar6 = Global_40001.f_5E50;
					}
					unk_0x4A21BDDF4D038ECF(Local_85.f_70 + Vector(0f, 0f, 0f), vVar5, iVar6, 1, 849905853, unk_0x16F2683693E537C9(), 1, 1, 3212836864, unk_0x09AD4CE7DA179533(Local_85.f_79), 0, 0, 0, 1, 0, false);
					Local_85.f_17 = 100;
					unk_0x5E858A00EAFA5B24(0, 300, 150);
					if (unk_0x8AA6DC470ABA63A2(Local_85.f_50))
					{
						Local_85.f_50 = unk_0xD68EA767274B7444();
						unk_0xCEAA091B490F8407(Local_85.f_50, "Remote_Perspective_Fire", unk_0x09AD4CE7DA179533(Local_85.f_79), "DLC_H3_Drone_Tranq_Weapon_Sounds", true, 0);
					}
					unk_0x4D7F4CC43D4D0DE3(4294967295, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", true);
					if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 11) || unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 23))
					{
						Local_85.f_1C++;
					}
					func_167((func_154() - 1));
					if (func_154() <= 0)
					{
						Local_85.f_17 = 0;
						unk_0x0674E58A79778E99(&(Local_85.f_5), 16);
					}
					unk_0x5D96D8530B3D0904(&(Local_85.f_6), 6);
					func_8(&(Local_85.f_BA), 0, 0);
				}
			}
		}
		else
		{
			func_166();
		}
	}
}

void func_166()
{
	int iVar0;
	int iVar1;
	
	if (func_154() > 0)
	{
		if (func_10(&(Local_85.f_BA)))
		{
			iVar0 = Global_40001.f_5E4E;
			if (func_7(&(Local_85.f_BA), iVar0, 0))
			{
				unk_0x0674E58A79778E99(&(Local_85.f_6), 6);
				unk_0x0674E58A79778E99(&(Local_85.f_6), 5);
				func_6(&(Local_85.f_BA));
				Local_85.f_17 = 100;
				if (unk_0x8AA6DC470ABA63A2(Local_85.f_22))
				{
					unk_0x55D0A2DB35045A35(Local_85.f_22);
					unk_0x43A06902454A1172(Local_85.f_22);
					Local_85.f_22 = 4294967295;
				}
			}
			else
			{
				iVar1 = (100 * unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_BA)));
				Local_85.f_17 = (iVar1 / iVar0);
			}
		}
	}
}

void func_167(int iParam0)
{
	if (Global_19C087.f_6 != iParam0)
	{
		Global_19C087.f_6 = iParam0;
	}
}

void func_168()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_85.f_D2.f_2 = 2;
	if (unk_0x91E3F625EF57450D(0))
	{
		Local_85.f_D2.f_3 = 238;
	}
	else
	{
		Local_85.f_D2.f_3 = 205;
	}
	iVar0 = Global_40001.f_5E51;
	if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 31))
	{
		Local_85.f_15 = 100;
	}
	if (func_9())
	{
		iVar0 = (iVar0 / 2);
		if (unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 1))
		{
			Local_85.f_14 = ((Local_85.f_16 * (Global_40001.f_5E51 / 2)) / 100);
			Local_85.f_14 = ((Global_40001.f_5E51 / 2) - Local_85.f_14);
			unk_0x0674E58A79778E99(&(Local_85.f_6), 1);
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 31))
		{
			iVar0 = Local_85.f_14;
		}
	}
	else
	{
		Local_85.f_15 = 100;
	}
	if (!func_145(1))
	{
		if (!func_60() && func_169(&(Local_85.f_D2), 1, iVar0))
		{
			if (unk_0x8AA6DC470ABA63A2(Local_85.f_23))
			{
				Local_85.f_23 = unk_0xD68EA767274B7444();
				unk_0xCEAA091B490F8407(Local_85.f_23, "Destroyed", unk_0x09AD4CE7DA179533(Local_85.f_79), Local_85.f_77, true, 0);
			}
			unk_0x1FA2A2B10F3906F7();
			iVar1 = 0;
			if (func_9())
			{
				iVar1 = 69;
			}
			unk_0xA2FC3824D7AFA946(unk_0x16F2683693E537C9(), Local_85.f_70, iVar1, 0.5f, 1, 0, 1065353216);
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) < 1)
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			}
			unk_0x5E858A00EAFA5B24(0, 300, 200);
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 2);
		}
	}
	if (func_10(&(Local_85.f_D2)))
	{
		unk_0x5E858A00EAFA5B24(0, 300, 20);
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 5))
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 5);
		}
		func_6(&(Local_85.f_CA));
		if (!func_7(&(Local_85.f_D2), iVar0, 0))
		{
			iVar2 = (Local_85.f_15 * unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_D2)));
			if (!func_9())
			{
				Local_85.f_12 = (iVar2 / iVar0);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 31))
			{
				Local_85.f_12 = (iVar2 / iVar0);
			}
			else
			{
				Local_85.f_12 = (Local_85.f_16 + (iVar2 / iVar0));
			}
			if (unk_0x8AA6DC470ABA63A2(Local_85.f_20))
			{
				Local_85.f_20 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(Local_85.f_20, "HUD_Detonate_Charge", Local_85.f_77, true);
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 5))
	{
		unk_0x0674E58A79778E99(&(Local_85.f_5), 5);
		if (!func_9())
		{
			Local_85.f_12 = 0;
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 31);
			Local_85.f_15 = (100 - Local_85.f_12);
			Local_85.f_14 = (iVar0 - unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_D2)));
			Local_85.f_16 = Local_85.f_12;
			func_6(&(Local_85.f_CA));
		}
		if (Local_85.f_20 != 4294967295)
		{
			unk_0x55D0A2DB35045A35(Local_85.f_20);
			unk_0x43A06902454A1172(Local_85.f_20);
			Local_85.f_20 = 4294967295;
		}
	}
	else if (func_9())
	{
		if (Local_85.f_12 > 0)
		{
			if (Local_85.f_12 <= 2)
			{
				Local_85.f_12 = 0;
			}
			if (!func_10(&(Local_85.f_CA)))
			{
				func_8(&(Local_85.f_CA), 0, 0);
			}
			else
			{
				iVar3 = Global_40001.f_5E51;
				if (!func_7(&(Local_85.f_CA), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_85.f_15)) / SYSTEM::TO_FLOAT((iVar3 / unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_CA)))));
					Local_85.f_12 = (Local_85.f_12 - SYSTEM::ROUND(fVar4));
					Local_85.f_16 = Local_85.f_12;
					Local_85.f_15 = (100 - Local_85.f_12);
					unk_0x5D96D8530B3D0904(&(Local_85.f_6), 1);
				}
				else
				{
					Local_85.f_12 = 0;
				}
			}
		}
		else
		{
			func_6(&(Local_85.f_D2));
			unk_0x0674E58A79778E99(&(Local_85.f_5), 31);
			unk_0x0674E58A79778E99(&(Local_85.f_6), 1);
		}
	}
}

int func_169(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x06F8112AA79C53D9(uParam0->f_2, uParam0->f_3) || (unk_0x7FEE810EE9E768EB(uParam0->f_2, uParam0->f_3) && iParam1))
	{
		if (!func_10(uParam0))
		{
			func_8(uParam0, 0, 0);
		}
		else if (func_7(uParam0, iParam2, 0))
		{
			func_6(uParam0);
			return 1;
		}
	}
	else
	{
		func_6(uParam0);
	}
	return 0;
}

void func_170()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 24))
	{
		if (Local_85.f_C == 1)
		{
			if (Local_85.f_AD == 2)
			{
				vVar0 = { unk_0xF1EE614CA05DDE75() };
				vVar1 = { unk_0x9382F04ED9CDA21A(2) };
				vVar2 = { (-SYSTEM::SIN(vVar1.z) * SYSTEM::COS(vVar1.x)), (SYSTEM::COS(vVar1.z) * SYSTEM::COS(vVar1.x)), SYSTEM::SIN(vVar1.x) };
				vVar3 = { 10f, 10f, 10f };
				vVar4 = { vVar0 + vVar2 * vVar3 };
				iVar5 = Global_40001.f_5E4F;
				if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 23))
				{
					iVar5 = Global_40001.f_5E50;
				}
				if (func_142())
				{
					iVar5 = 1;
				}
				unk_0x4A21BDDF4D038ECF(Local_85.f_70 + Vector(0f, 0f, 0f), vVar4, iVar5, 1, joaat("weapon_stungun"), unk_0x16F2683693E537C9(), 1, 1, 3212836864, unk_0x09AD4CE7DA179533(Local_85.f_79), 0, 0, 0, 1, 0, false);
				Local_85.f_11 = 100;
				Local_85.f_12 = 0;
				unk_0x5E858A00EAFA5B24(0, 300, 150);
				if (unk_0x8AA6DC470ABA63A2(Local_85.f_22))
				{
					Local_85.f_22 = unk_0xD68EA767274B7444();
					unk_0xCEAA091B490F8407(Local_85.f_22, "Shock_Fire", unk_0x09AD4CE7DA179533(Local_85.f_79), Local_85.f_77, true, 0);
				}
				if (Local_85.f_20 != 4294967295)
				{
					unk_0x55D0A2DB35045A35(Local_85.f_20);
					unk_0x43A06902454A1172(Local_85.f_20);
					Local_85.f_20 = 4294967295;
				}
				unk_0x5D96D8530B3D0904(&(Local_85.f_5), 4);
				func_8(&(Local_85.f_B2), 0, 0);
			}
		}
	}
}

void func_171()
{
	if ((unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 24) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 3)) && !Local_85.f_76)
	{
		if (unk_0x436E3527A86BCA33("scr_xs_dr"))
		{
			if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
			{
				unk_0x8F8ADC4754FE74DA("scr_xs_dr");
				unk_0x52ED0131476FC22E("scr_xs_dr_emp", unk_0x09AD4CE7DA179533(Local_85.f_79), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
			}
		}
		Local_85.f_11 = 100;
		unk_0x5E858A00EAFA5B24(0, 300, 150);
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_22))
		{
			Local_85.f_22 = unk_0xD68EA767274B7444();
			unk_0xCEAA091B490F8407(Local_85.f_22, "Shock_Fire", unk_0x09AD4CE7DA179533(Local_85.f_79), Local_85.f_77, true, 0);
		}
		if (Local_85.f_20 != 4294967295)
		{
			unk_0x55D0A2DB35045A35(Local_85.f_20);
			unk_0x43A06902454A1172(Local_85.f_20);
			Local_85.f_20 = 4294967295;
		}
		func_172(unk_0x68F4C0EC296D3901(unk_0x09AD4CE7DA179533(Local_85.f_79), true), 0);
		unk_0x5D96D8530B3D0904(&(Local_85.f_5), 3);
		Local_85.f_76 = 1;
		func_8(&(Local_85.f_B2), 0, 0);
	}
}

void func_172(vector3 vParam0, bool bParam1)
{
	struct<6> Var0;
	
	Var0 = 472658729;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = { vParam0 };
	Var0.f_5 = bParam1;
	if (!bParam1)
	{
		if (!func_174(1, 1) == 0)
		{
			unk_0xFB061A86A7AC749F(1, &Var0, 6, func_174(1, 1));
		}
	}
	else if (Global_19C087.f_15 != func_16())
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 6, func_173(Global_19C087.f_15));
	}
}

var func_173(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 4294967295)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_174(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_15(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_94(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_175()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 8);
}

int func_176()
{
	if ((unk_0xE5DBF9B6126856CA(Local_85.f_79) && unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0)) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 2))
	{
		return 1;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (func_147(unk_0xD803B885F5E47A62()) && unk_0xEAE0D21A50E6C7F4(Global_26B199, 0))
		{
		}
		else if (func_184())
		{
			if (unk_0xE608C809F9416F00(unk_0x09AD4CE7DA179533(Local_85.f_79)))
			{
				Local_85.f_19 = 1;
				return 1;
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 2))
	{
		Local_85.f_19 = 4;
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 9))
	{
		Local_85.f_19 = 1;
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 7))
	{
		Local_85.f_19 = 0;
		return 1;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x70EED0761B82965E(unk_0x09AD4CE7DA179533(Local_85.f_79)) || func_183(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), 0))
		{
			Local_85.f_19 = 3;
			return 1;
		}
	}
	if (func_181(unk_0xD803B885F5E47A62()))
	{
		Local_85.f_19 = 0;
		return 1;
	}
	if (func_119())
	{
		if (Global_18446E != func_16())
		{
			if (func_37(Global_18446E))
			{
				Local_85.f_19 = 0;
				return 1;
			}
		}
	}
	if (func_180())
	{
		Local_85.f_19 = 1;
		return 1;
	}
	if (func_179(unk_0xD803B885F5E47A62()))
	{
		Local_85.f_19 = 0;
		return 1;
	}
	if (func_178())
	{
		Local_85.f_19 = 0;
		return 1;
	}
	if (func_177())
	{
		Local_85.f_19 = 0;
		return 1;
	}
	if (func_19())
	{
		Local_85.f_19 = 0;
		return 1;
	}
	if (func_28())
	{
		Local_85.f_19 = 0;
		return 1;
	}
	if (func_18())
	{
		if (unk_0x28072FDD60CE3A6E(unk_0x16F2683693E537C9(), 1))
		{
			Local_85.f_19 = 6;
			return 1;
		}
		if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) || unk_0xA750A57C629763A9(unk_0x16F2683693E537C9()))
		{
			Local_85.f_19 = 6;
			return 1;
		}
		if (func_136(unk_0x16F2683693E537C9(), Local_85.f_73, 1) > 2f)
		{
			Local_85.f_19 = 7;
			return 1;
		}
	}
	return 0;
}

bool func_177()
{
	return Global_17735;
}

bool func_178()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 9);
}

int func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (Global_18D84D[iVar0 /*615*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_180()
{
	vector3 vVar0;
	
	if (Local_85.f_10 == 2349762459)
	{
		if (func_25(unk_0x09AD4CE7DA179533(Local_85.f_79)))
		{
			if (unk_0xB0A50BC6EDB99CA9(unk_0x09AD4CE7DA179533(Local_85.f_79)) == 4269274169)
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x09AD4CE7DA179533(Local_85.f_79), true) };
				if (vVar0.z >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (func_25(unk_0x09AD4CE7DA179533(Local_85.f_79)))
		{
			if (unk_0x3D1053F9EB43B7AD(unk_0x09AD4CE7DA179533(Local_85.f_79), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, 0, true, 0))
			{
				return 1;
			}
			if (unk_0x3D1053F9EB43B7AD(unk_0x09AD4CE7DA179533(Local_85.f_79), 2494.398f, -276.2f, -69.09f, 2494.342f, -277.4824f, -67.98756f, 0.7f, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_181(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		if (func_48(iParam0) && !func_182(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 4);
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0) || iParam1)
		{
			if (unk_0x70EED0761B82965E(iParam0))
			{
				if (unk_0xFC0E4F7E386C43F8(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_184()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 15);
}

void func_185()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	int iVar9;
	bool bVar10;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			vVar0 = { Local_85.f_70 };
			switch (Local_85.f_C)
			{
				case 0:
					vVar1 = { unk_0xF1EE614CA05DDE75() };
					vVar2 = { unk_0x9382F04ED9CDA21A(2) };
					vVar3 = { (-SYSTEM::SIN(vVar2.z) * SYSTEM::COS(vVar2.x)), (SYSTEM::COS(vVar2.z) * SYSTEM::COS(vVar2.x)), SYSTEM::SIN(vVar2.x) };
					vVar4 = { 10f, 10f, 10f };
					if (func_9())
					{
						vVar4 = { Global_40001.f_60A7, Global_40001.f_60A7, Global_40001.f_60A7 };
					}
					vVar5 = { vVar1 + vVar3 * vVar4 };
					vVar0 = { unk_0x8A5E176FF719A014(Local_85.f_70, unk_0xD9522BA9E27E1349(unk_0x09AD4CE7DA179533(Local_85.f_79)), 0f, -0.1f, 0f) };
					Local_85.f_81 = unk_0xCD02F8660C47B801(vVar0, vVar5, 123, unk_0x09AD4CE7DA179533(Local_85.f_79), 7);
					if (Local_85.f_81 != 0)
					{
						Local_85.f_C = 1;
					}
					break;
				
				case 1:
					Local_85.f_AD = unk_0x1EC301670B54C6DE(Local_85.f_81, &iVar6, &vVar8, &uVar7, &iVar9);
					if (Local_85.f_AD == 2)
					{
						if (iVar6 == 0)
						{
							Local_85.f_D = 1;
							vVar8 = { 0f, 0f, 0f };
							if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 11) && !func_9())
							{
								unk_0x0674E58A79778E99(&(Local_85.f_5), 11);
							}
							if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 23))
							{
								unk_0x0674E58A79778E99(&(Local_85.f_5), 23);
							}
							func_192();
						}
						else
						{
							Local_85.f_D = 2;
							if (unk_0xC844350D5D58C99A(iVar9))
							{
								if (unk_0xEC560E589DF8370E(iVar9))
								{
									if (!unk_0x437347B10A200C4B(iVar9, 0))
									{
										if (unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(iVar9)))
										{
											if (func_190(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(unk_0x940C1429253D3B1B(iVar9))))
											{
												bVar10 = true;
											}
										}
										else
										{
											if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 23))
											{
												unk_0x5D96D8530B3D0904(&(Local_85.f_5), 23);
												if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 11) && !func_9())
												{
													unk_0x0674E58A79778E99(&(Local_85.f_5), 11);
												}
											}
											if (!func_72(unk_0xD803B885F5E47A62()) && !func_69(unk_0xD803B885F5E47A62()))
											{
												if ((func_189(unk_0x940C1429253D3B1B(iVar9)) || func_188(unk_0x940C1429253D3B1B(iVar9))) || func_187(unk_0x940C1429253D3B1B(iVar9)))
												{
													func_68(Global_180863);
													func_186(&(Local_85.f_BC), 0, 0);
												}
												else
												{
													func_192();
												}
											}
										}
										if ((((!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 11) && !bVar10) && func_25(Global_19C087.f_17)) && unk_0xF649DD3BF44195C7(Global_19C087.f_17, iVar9, 511)) && (unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(iVar9)) && unk_0x16F2683693E537C9() != unk_0x940C1429253D3B1B(iVar9)))
										{
											unk_0x5D96D8530B3D0904(&(Local_85.f_5), 11);
											if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 23))
											{
												unk_0x0674E58A79778E99(&(Local_85.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_9())
									{
										if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 11))
										{
											unk_0x0674E58A79778E99(&(Local_85.f_5), 11);
										}
									}
									if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 23))
									{
										unk_0x0674E58A79778E99(&(Local_85.f_5), 23);
									}
									func_192();
								}
							}
							else
							{
								func_192();
							}
							Local_85.f_81 = 0;
							Local_85.f_C = 0;
						}
					}
					else if (Local_85.f_AD == 0)
					{
						Local_85.f_C = 0;
					}
					break;
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

void func_186(var uParam0, bool bParam1, bool bParam2)
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

int func_187(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0x7C055F40DB28E523(iParam0) == 4111159735)
		{
			return 1;
		}
	}
	return 0;
}

int func_188(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if ((((((((((((unk_0x0A5D59F37DC7E974(iParam0) == 7 || unk_0x0A5D59F37DC7E974(iParam0) == 8) || unk_0x0A5D59F37DC7E974(iParam0) == 9) || unk_0x0A5D59F37DC7E974(iParam0) == 10) || unk_0x0A5D59F37DC7E974(iParam0) == 11) || unk_0x0A5D59F37DC7E974(iParam0) == 12) || unk_0x0A5D59F37DC7E974(iParam0) == 13) || unk_0x0A5D59F37DC7E974(iParam0) == 14) || unk_0x0A5D59F37DC7E974(iParam0) == 15) || unk_0x0A5D59F37DC7E974(iParam0) == 16) || unk_0x0A5D59F37DC7E974(iParam0) == 17) || unk_0x0A5D59F37DC7E974(iParam0) == 18) || unk_0x0A5D59F37DC7E974(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_189(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if ((((unk_0x0A5D59F37DC7E974(iParam0) == 6 || unk_0x0A5D59F37DC7E974(iParam0) == 29) || unk_0x0A5D59F37DC7E974(iParam0) == 27) || unk_0x7C055F40DB28E523(iParam0) == 3822679795) || unk_0x7C055F40DB28E523(iParam0) == 2761840924)
		{
			return 1;
		}
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_191(iParam0);
	if (!iVar0 == func_16())
	{
		if (iVar0 == func_191(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_16();
}

void func_192()
{
	if (func_10(&(Local_85.f_BC)))
	{
		if (func_7(&(Local_85.f_BC), 60000, 0))
		{
			func_6(&(Local_85.f_BC));
			if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) <= 0)
			{
				func_68(Global_180858);
			}
		}
	}
}

void func_193()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	int iVar8;
	var uVar9;
	vector3 vVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if ((func_27() || func_9()) || func_29())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 29))
		{
			return;
		}
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0))
	{
		if (unk_0x0A19E90E359995E6(unk_0x09AD4CE7DA179533(Local_85.f_79)))
		{
			return;
		}
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			switch (Local_85.f_A)
			{
				case 0:
					if ((func_9() || func_29()) || func_27())
					{
						fVar5 = 0.3f;
					}
					else
					{
						fVar5 = (func_196(Local_85.f_A9) * 1.5f);
					}
					if (func_27())
					{
						vVar6 = { Local_85.f_70 };
						vVar1 = { unk_0xF1EE614CA05DDE75() };
						vVar2 = { unk_0x9382F04ED9CDA21A(2) };
						vVar3 = { (-SYSTEM::SIN(vVar2.z) * SYSTEM::COS(vVar2.x)), (SYSTEM::COS(vVar2.z) * SYSTEM::COS(vVar2.x)), SYSTEM::SIN(vVar2.x) };
						vVar4 = { 0.9f, 0.9f, 0.9f };
						vVar7 = { vVar1 + vVar3 * vVar4 };
					}
					else
					{
						vVar6 = { Local_85.f_70 };
						vVar7 = { Local_85.f_70 };
					}
					Local_85.f_80 = unk_0x6D4C9F7CF124AE37(vVar6, vVar7, fVar5, 511, unk_0x09AD4CE7DA179533(Local_85.f_79), 4);
					if (Local_85.f_80 != 0)
					{
						Local_85.f_A = 1;
					}
					break;
				
				case 1:
					iVar12 = unk_0x1EC301670B54C6DE(Local_85.f_80, &iVar8, &vVar10, &uVar9, &iVar11);
					if (iVar12 == 2)
					{
						if (iVar8 == 0)
						{
							Local_85.f_B = 1;
							vVar10 = { 0f, 0f, 0f };
						}
						else
						{
							if (unk_0xC844350D5D58C99A(iVar11))
							{
								if (unk_0xE2F1E99DD161A861(iVar11))
								{
									if (!unk_0x437347B10A200C4B(iVar11, 0) && unk_0x134B62B726CEC8E6(iVar11) != Local_85.f_A9)
									{
										if (unk_0x9C66D99E63E8E24C(iVar11) > 0.5f || func_194(unk_0x134B62B726CEC8E6(iVar11)))
										{
											if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 9))
											{
												unk_0x5D96D8530B3D0904(&(Local_85.f_5), 9);
											}
										}
									}
								}
								else if (unk_0xEC560E589DF8370E(iVar11))
								{
									if (!unk_0x437347B10A200C4B(iVar11, 0))
									{
										if (!unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(iVar11)))
										{
											if (Local_85.f_1B == 0)
											{
												iVar0 = unk_0x09AC81E49EA267F7(0, 3);
												if (iVar0 == 0)
												{
													iVar13 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar13 = 90;
												}
												else
												{
													iVar13 = 79;
												}
												Local_85.f_1B = unk_0x7D0D8317DC09FF68(iVar13, Local_85.f_70, 5000f);
												func_186(&(Local_85.f_C2), 0, 0);
											}
										}
									}
								}
							}
							Local_85.f_B = 2;
							unk_0x5E858A00EAFA5B24(0, 300, 50);
							Local_85.f_80 = 0;
							Local_85.f_A = 0;
						}
					}
					else if (iVar12 == 0)
					{
						Local_85.f_A = 0;
					}
					break;
			}
			if (Local_85.f_1B != 0)
			{
				if (func_10(&(Local_85.f_C2)))
				{
					if (func_7(&(Local_85.f_C2), 5000, 0))
					{
						unk_0x850CF499433B183D(Local_85.f_1B);
						func_6(&(Local_85.f_C2));
						Local_85.f_1B = 0;
					}
				}
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 3602674979:
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (func_195(iParam0, 1))
	{
		return 1;
	}
	if (unk_0xAFB8495D36825275(iParam0) || unk_0xC41A9202669A24C4(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_40001.f_378B)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_40001.f_378C)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_40001.f_378A)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_40001.f_378D)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_40001.f_378F)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_40001.f_378E)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_40001.f_48ED)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_40001.f_48EF)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_40001.f_48F3)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_40001.f_48F0)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_40001.f_48F7)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_40001.f_48F5)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_40001.f_48FA)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_40001.f_5091)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 2370534026:
			if (Global_40001.f_5092)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 2233918197:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case 2370166601:
		case 2550461639:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 4267640610:
		case 2482017624:
		case 2920466844:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case 3579220348:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 3606777648:
		case 2919906639:
		case 3001042683:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case 2600885406:
		case 2252616474:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1802742206:
		case 2172320429:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1717532765:
		case 1107404867:
		case 3381377750:
			return 1;
			break;
	}
	return 0;
}

float func_196(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_197(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	return unk_0x755FF954DAE327E1((vVar0.z - vVar1.z));
}

void func_197(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x468C1AC3ABF95C57(iParam0))
	{
		unk_0xA6B02C1DB14DDA13(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_200(iParam0);
		if (iVar0 != 0)
		{
			func_198(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_198(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_199(iParam0, &Global_1413E4);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x468C1AC3ABF95C57(Global_1413E4[iVar0]))
		{
			unk_0xA6B02C1DB14DDA13(Global_1413E4[iVar0], &(Global_1413E8[iVar0 /*3*/]), &(Global_1413EF[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1413E8[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1413EF[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1413E8[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1413EF[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1413E8[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1413EF[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1413E8[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1413EF[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1413F6[iVar0] = (Global_1413EF[iVar0 /*3*/] - Global_1413E8[iVar0 /*3*/]);
		Global_1413F9[iVar0] = (Global_1413EF[iVar0 /*3*/].f_1 - Global_1413E8[iVar0 /*3*/].f_1);
		Global_1413FC[iVar0] = (Global_1413EF[iVar0 /*3*/].f_2 - Global_1413E8[iVar0 /*3*/].f_2);
		if (Global_1413F6[iVar0] > Global_1413FF)
		{
			Global_1413FF = Global_1413F6[iVar0];
		}
		if (Global_1413FC[iVar0] > Global_141400)
		{
			Global_141400 = Global_1413FC[iVar0];
		}
		iVar0++;
	}
	Global_141401 = (Global_1413FF * -0.5f);
	Global_141404 = (Global_1413FF * 0.5f);
	Global_141401.f_1 = ((((0.5f * Global_1413F9[0]) + Global_1413F9[1]) + Global_1413E4.f_3) * -1f);
	Global_141404.f_1 = (0.5f * Global_1413F9[0]);
	Global_141401.f_2 = (Global_1413FC[0] * -0.5f);
	Global_141404.f_2 = (Global_1413FC[0] * 0.5f);
	*uParam1 = { Global_141401 };
	*uParam2 = { Global_141404 };
}

void func_199(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = 2413121211;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_200(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_201(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_202()
{
	int iVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (func_25(unk_0x09AD4CE7DA179533(Local_85.f_79)))
		{
			iVar0 = func_205(unk_0x09AD4CE7DA179533(Local_85.f_79));
			if (iVar0 != 4294967295)
			{
				if (!func_204(&(Global_1801E9.f_174), iVar0) && !func_204(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_22E), iVar0))
				{
					func_203(1);
				}
			}
		}
	}
}

void func_203(bool bParam0)
{
	if (bParam0)
	{
		if (func_58())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_19C087, 9))
			{
				unk_0x5D96D8530B3D0904(&Global_19C087, 9);
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087, 9))
	{
		unk_0x0674E58A79778E99(&Global_19C087, 9);
	}
}

bool func_204(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], iVar1);
}

int func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		iVar0 = func_209(iParam0);
		if (iVar0 != 4294967295)
		{
			return iVar0;
		}
		iVar1 = unk_0x4D570FEF9D230CE7(iParam0);
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < 43)
			{
				iVar3 = iVar2;
				func_206(iVar3);
				if (Global_19A5EF[iVar2] == iVar1)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return 4294967295;
}

void func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_19A5EF[iVar0] == 0)
	{
		Global_19A5EF[iVar0] = unk_0x0D1736C2E221BCEA(func_208(iParam0), func_207(iParam0));
	}
}

char* func_207(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		case 34:
			return "v_foundry";
		
		case 35:
			return "v_refit";
		
		case 36:
			return "hei_int_mph_carrierhang3";
		
		case 37:
			return "hei_int_mph_carrierhang2";
		
		case 38:
			return "hei_int_mph_carrierhang1";
		
		case 39:
			return "hei_int_mph_carrierupper";
		
		case 40:
			return "hei_int_mph_carriercontrol1";
		
		case 41:
			return "hei_int_mph_carriercontrol2";
		
		case 42:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_208(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 984.1552f, -95.3662f, 75.9326f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 33:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 34:
			return 1087.195f, -1988.445f, 28.649f;
		
		case 35:
			return -583.1606f, -282.3967f, 35.394f;
		
		case 36:
			return 3053.565f, -4653.67f, 5.0773f;
		
		case 37:
			return 3058.002f, -4700.8f, 5.0773f;
		
		case 38:
			return 3080.619f, -4772.69f, 5.0773f;
		
		case 39:
			return 3088.469f, -4708.33f, 20.567f;
		
		case 40:
			return 3085.222f, -4690.66f, 26.2522f;
		
		case 41:
			return 3092.459f, -4711.389f, 26.2657f;
		
		case 42:
			return 2329.242f, 2571.494f, 45.6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_209(int iParam0)
{
	if (func_217(iParam0))
	{
		return 15;
	}
	if (func_215(iParam0))
	{
		return 28;
	}
	if (func_212(iParam0))
	{
		return 36;
	}
	if (func_211(iParam0))
	{
		return 23;
	}
	if (func_210(iParam0))
	{
		return 33;
	}
	return 4294967295;
}

int func_210(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if ((unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iParam0, true), -16.2669f, -685.4531f, 31.3381f, true) <= 80f)
		{
			if ((((((unk_0x3D1053F9EB43B7AD(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_212(int iParam0)
{
	return ((!unk_0x437347B10A200C4B(iParam0, 0) && unk_0x5A91F08DF773C39D(iParam0, 3042.596f, -4667.915f, 34.26143f, 250f, 300f, 40f, false, true, 0)) || func_213());
}

int func_213()
{
	if (!unk_0x757EF87A33649210())
	{
		if (SYSTEM::VDIST2(func_214(unk_0xD803B885F5E47A62()), 3042.596f, -4667.915f, 34.26143f) <= 25600f)
		{
			if (unk_0x8E28E832BEAC3DCE(3042.596f, -4667.915f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_214(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

bool func_215(int iParam0)
{
	return ((!unk_0x437347B10A200C4B(iParam0, 0) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, 0, true, 0)) || func_216());
}

int func_216()
{
	vector3 vVar0;
	
	if (!unk_0x757EF87A33649210())
	{
		vVar0 = { -2073.541f, -1021.104f, 14.99213f };
		if (SYSTEM::VDIST2(func_214(unk_0xD803B885F5E47A62()), vVar0) <= 25600f)
		{
			if (unk_0x8E28E832BEAC3DCE(vVar0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_217(int iParam0)
{
	return ((!unk_0x437347B10A200C4B(iParam0, 0) && unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, 0, true, 0)) || func_218());
}

int func_218()
{
	vector3 vVar0;
	
	if (!unk_0x757EF87A33649210())
	{
		vVar0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (SYSTEM::VDIST2(func_214(unk_0xD803B885F5E47A62()), vVar0) <= 25600f)
		{
			if (unk_0x8E28E832BEAC3DCE(vVar0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_27())
	{
		return;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0xFBB4F23D534EB790(Local_85.f_83))
		{
			if (unk_0x9CF8D5C7090408A2(Local_85.f_83) || iParam0)
			{
				if (!func_60())
				{
					func_54(0);
				}
				func_230(1);
				if ((!func_229() || unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 1)) || func_176())
				{
					unk_0x3FC8DBCC154CA56B();
				}
				else
				{
					unk_0x3584F71E5CA29322(9);
					unk_0x3584F71E5CA29322(7);
					unk_0x3584F71E5CA29322(8);
					func_63();
					func_227(1);
					iVar0 = unk_0x4D570FEF9D230CE7(unk_0xA5FBBC2F619A4DE2(Local_85.f_79));
					if (unk_0x31609A585163CBAC(iVar0))
					{
						Global_19C087.f_18 = iVar0;
						if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 8))
						{
							Local_85.f_56 = func_226(unk_0x0674DCE5BAE00012(iVar0));
							unk_0xCC1B6327F8842266(iVar0, &(Local_85.f_6D), &(Local_85.f_10));
							unk_0x5D96D8530B3D0904(&(Local_85.f_5), 8);
						}
						iVar1 = 0;
						if (func_225(Local_85.f_70.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_19C087.f_9 == -1f)
						{
							unk_0x403399A52DA3CF92(1f);
						}
						else
						{
							unk_0x403399A52DA3CF92(Global_19C087.f_9);
						}
						if (!func_147(unk_0xD803B885F5E47A62()) && !func_222(unk_0xD803B885F5E47A62()))
						{
							if (!func_221())
							{
								func_220(1);
							}
						}
						unk_0x58D1E74A3FBADA8D(0, 0);
						unk_0x3E48C1351341DC99(Local_85.f_10, Local_85.f_6D, Local_85.f_6D.f_1, SYSTEM::FLOOR(Local_85.f_56), iVar1);
					}
					else
					{
						Local_85.f_10 = 4294967295;
						if (Global_19C087.f_9 == -1f)
						{
							unk_0x403399A52DA3CF92(0f);
						}
						else
						{
							unk_0x403399A52DA3CF92(Global_19C087.f_9);
						}
						if (!func_221())
						{
							func_220(1);
						}
						unk_0x58D1E74A3FBADA8D(0, 0);
						Global_19C087.f_18 = 4294967295;
						if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 8))
						{
							unk_0x0674E58A79778E99(&(Local_85.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_220(int iParam0)
{
	Global_2594EF = iParam0;
}

bool func_221()
{
	return Global_2594EF;
}

int func_222(int iParam0)
{
	if (func_224(iParam0))
	{
		return 1;
	}
	if (func_223(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_223(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_73(iParam0, 9);
	}
	return 0;
}

int func_224(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_225(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_226(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_227(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_181EC.f_8 = 1;
	}
	else
	{
		Global_181EC.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_228(iVar0);
		iVar0++;
	}
}

void func_228(int iParam0)
{
	Global_181EC.f_B5[iParam0] = 1;
	Global_181EC.f_B4 = 1;
}

bool func_229()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 4);
}

void func_230(int iParam0)
{
	if (Global_26B66F.f_11CA != iParam0)
	{
		Global_26B66F.f_11CA = iParam0;
	}
}

void func_231()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	vector3 vVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	vector3 vVar21;
	vector3 vVar22;
	float fVar23;
	float fVar24;
	var uVar25;
	var uVar26;
	vector3 vVar27;
	
	if (!func_27() || func_176())
	{
		return;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			fVar0 = 26f;
			fVar1 = 40f;
			fVar2 = 30f;
			fVar3 = 30f;
			iVar4 = 1;
			fVar5 = unk_0xCE563465D2227DD6(unk_0x09AD4CE7DA179533(Local_85.f_79));
			fVar6 = unk_0x81FFFF2E58A35803(unk_0x09AD4CE7DA179533(Local_85.f_79));
			fVar7 = (30f * SYSTEM::TIMESTEP());
			func_236();
			unk_0xA2E3EDD0E119882F(2);
			func_235(&(Local_85[0]), &(Local_85[1]), &(Local_85[2]), &(Local_85[3]), 0, 0);
			if (unk_0x91E3F625EF57450D(0))
			{
				iVar4 = 2;
				Local_85[2] = (Local_85[2] * iVar4);
				Local_85[3] = (Local_85[3] * iVar4);
			}
			if (unk_0x89DF0B812BA6383B())
			{
				Local_85[3] = (Local_85[3] * 4294967295);
				Local_85[1] = (Local_85[1] * 4294967295);
			}
			if ((Local_85[2] != 0 || Local_85[3] != 0) || (Local_85[0] != 0 || Local_85[1] != 0))
			{
				if (Local_85[2] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_85[2])));
				}
				else if (Local_85[0] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_85[0])));
				}
				else
				{
					fVar8 = 0f;
				}
				if (Local_85[3] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_85[3])));
				}
				else if (Local_85[1] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_85[1])));
				}
				else
				{
					fVar9 = 0f;
				}
				vVar13 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 2) };
				fVar10 = (((fVar9 * 0.05f) * fVar7) * fVar0);
				fVar11 = -(((fVar8 * 0.05f) * fVar7) * fVar0);
				if ((fVar5 != 0f || Local_85[2] != 0) || Local_85[0] != 0)
				{
					if (Local_85[2] != 0)
					{
						fVar15 = (1f / (127f / IntToFloat(Local_85[2])));
						fVar12 = -(((fVar15 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else if (Local_85[0] != 0)
					{
						fVar15 = (1f / (127f / IntToFloat(Local_85[0])));
						fVar12 = -(((fVar15 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else
					{
						if (fVar5 > 0.1f || fVar5 < -0.1f)
						{
							if (fVar5 > 0f)
							{
								fVar15 = -1f;
							}
							else
							{
								fVar15 = 1f;
							}
						}
						if (vVar13.y != 0f)
						{
							if (vVar13.y < 2f && vVar13.y > 0f)
							{
								fVar15 = 0.0001f;
							}
							else if (vVar13.y > -2f && vVar13.y < 0f)
							{
								fVar15 = -0.0001f;
							}
						}
						else
						{
							fVar15 = 0f;
						}
						fVar12 = -(((fVar15 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				else
				{
					fVar12 = 0f;
				}
				vVar14 = { Vector(fVar11, fVar12, fVar10) + vVar13 };
				if (fVar5 != 0f)
				{
					if (Local_85[2] == 0 && Local_85[0] == 0)
					{
						if (vVar14.y > fVar2)
						{
							vVar14.y = fVar2;
						}
						else if (vVar14.y < -fVar2)
						{
							vVar14.y = -fVar2;
						}
					}
					else if (vVar14.y > fVar2)
					{
						vVar14.y = fVar2;
					}
					else if (vVar14.y < -fVar2)
					{
						vVar14.y = -fVar2;
					}
				}
				if (vVar14.x > fVar3)
				{
					vVar14.x = fVar3;
				}
				else if (vVar14.x < -fVar3)
				{
					vVar14.x = -fVar3;
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 12))
				{
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 12);
				}
				unk_0xC023D1C4BF532815(unk_0x09AD4CE7DA179533(Local_85.f_79), Vector(0f, 0f, 0f) + Vector(vVar14.z, vVar14.y, vVar14.x), 2, 1);
			}
			else if (((Local_85[2] != 0 || Local_85[3] != 0) || Local_85[0] != 0) || Local_85[1] != 0)
			{
				vVar16 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 2) };
				if (func_234())
				{
					if (func_233())
					{
						fVar18 = -1f;
						Local_85.f_5C = fVar18;
					}
				}
				else
				{
					if (Local_85[2] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_85[2])));
						Local_85.f_5C = fVar17;
					}
					else if (Local_85[0] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_85[0])));
						Local_85.f_5C = fVar17;
					}
					else
					{
						fVar17 = 0f;
					}
					if (Local_85[3] != 0)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_85[3])));
						Local_85.f_5C = fVar17;
					}
					else if (Local_85[1] != 0)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_85[1])));
						Local_85.f_5C = fVar17;
					}
					else
					{
						fVar18 = 0f;
					}
				}
				fVar19 = -(((fVar18 * 0.05f) * fVar7) * fVar1);
				fVar20 = -(((fVar17 * 0.05f) * fVar7) * fVar1);
				if (fVar5 != 0f)
				{
					if (Local_85[2] == 0 && Local_85[0] == 0)
					{
						if (fVar5 > 1f || fVar5 < -1f)
						{
							if (fVar5 > 0f)
							{
								fVar17 = -1f;
							}
							else
							{
								fVar17 = 1f;
							}
						}
						if (vVar16.y < 2f && vVar16.y > 0f)
						{
							fVar17 = 0.0001f;
						}
						else if (vVar16.y > -2f && vVar16.y < 0f)
						{
							fVar17 = -0.0001f;
						}
						fVar20 = -(((fVar17 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				vVar21 = { Vector(0f, fVar20, fVar19) + vVar16 };
				if (vVar21.y > fVar2)
				{
					vVar21.y = fVar2;
				}
				else if (vVar21.y < -fVar2)
				{
					vVar21.y = -fVar2;
				}
				if (vVar21.x > fVar3)
				{
					vVar21.x = fVar3;
				}
				else if (vVar21.x < -fVar3)
				{
					vVar21.x = -fVar3;
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 12))
				{
					unk_0x0674E58A79778E99(&(Local_85.f_5), 12);
				}
				unk_0xC023D1C4BF532815(unk_0x09AD4CE7DA179533(Local_85.f_79), Vector(0f, 0f, 0f) + Vector(vVar16.z, vVar21.y, vVar21.x), 2, 1);
			}
			else
			{
				Local_85.f_5C = 0f;
				vVar22 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 2) };
				if (fVar5 != 0f || fVar6 != 0f)
				{
					if (vVar22.y != 0f)
					{
						if (vVar22.y < 0f)
						{
							fVar23 = -1f;
						}
						else
						{
							fVar23 = 1f;
						}
					}
					else
					{
						fVar23 = 0f;
					}
					if (fVar6 != 0f)
					{
						if (vVar22.x < 0f)
						{
							fVar24 = -1f;
						}
						else
						{
							fVar24 = 1f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (vVar22.y != 0f)
					{
						if (vVar22.y < 2f && vVar22.y > 0f)
						{
							fVar23 = 0.0001f;
						}
						else if (vVar22.y > -2f && vVar22.y < 0f)
						{
							fVar23 = -0.0001f;
						}
					}
					else
					{
						fVar23 = 0f;
					}
					if (vVar22.x != 0f)
					{
						if (vVar22.x < 2f && vVar22.x > 0f)
						{
							fVar24 = 0.0001f;
						}
						else if (vVar22.x > -2f && vVar22.x < 0f)
						{
							fVar24 = -0.0001f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					uVar25 = func_232(-(((fVar24 * 0.05f) * fVar7) * (fVar1 - 25f)));
					uVar26 = func_232(-(((fVar23 * 0.05f) * fVar7) * (fVar1 - 25f)));
					vVar27 = { Vector(0f, uVar26, uVar25) + vVar22 };
					if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 12))
					{
						vVar27.x = vVar22.x;
					}
					unk_0xC023D1C4BF532815(unk_0x09AD4CE7DA179533(Local_85.f_79), Vector(0f, 0f, 0f) + Vector(vVar22.z, vVar27.y, vVar27.x), 2, 1);
				}
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

float func_232(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

bool func_233()
{
	return unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 22);
}

bool func_234()
{
	return unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 21);
}

void func_235(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0x659FAE9DBE6F38F5(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x718E6F84AA2510BB(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(2, 218) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(2, 219) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(2, 220) * 127f));
		}
		if (!unk_0x718E6F84AA2510BB(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((unk_0x8A6BC5D9CAEACD0F(2, 221) * 127f));
		}
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		if (bParam5)
		{
			if (unk_0x89DF0B812BA6383B())
			{
				*uParam3 = (*uParam3 * 4294967295);
			}
			if (unk_0x8EB1E94243F14479())
			{
				*uParam3 = (*uParam3 * 4294967295);
			}
		}
	}
}

void func_236()
{
	if (func_119())
	{
		switch (Local_85.f_18)
		{
			case 0:
				Local_85.f_5A = 90f;
				Local_85.f_59 = 90f;
				break;
			
			case 1:
				Local_85.f_5A = 75f;
				Local_85.f_59 = 75f;
				break;
			
			case 2:
				Local_85.f_5A = 45f;
				Local_85.f_59 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_85.f_18)
		{
			case 0:
				Local_85.f_5A = 90f;
				Local_85.f_59 = 90f;
				break;
			
			case 1:
				Local_85.f_5A = 80f;
				Local_85.f_59 = 80f;
				break;
			
			case 2:
				Local_85.f_5A = 70f;
				Local_85.f_59 = 70f;
				break;
			}
	}
}

void func_237()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	vector3 vVar15;
	float fVar16;
	vector3 vVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	vector3 vVar22;
	vector3 vVar23;
	float fVar24;
	float fVar25;
	var uVar26;
	var uVar27;
	vector3 vVar28;
	
	if ((unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 1) || func_176()) || func_27())
	{
		return;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = unk_0xCE563465D2227DD6(unk_0x09AD4CE7DA179533(Local_85.f_79));
			fVar5 = unk_0x81FFFF2E58A35803(unk_0x09AD4CE7DA179533(Local_85.f_79));
			if (func_17())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * SYSTEM::TIMESTEP());
			func_236();
			unk_0xA2E3EDD0E119882F(2);
			func_235(&(Local_85[0]), &(Local_85[1]), &(Local_85[2]), &(Local_85[3]), 0, 0);
			if (unk_0x91E3F625EF57450D(0))
			{
				iVar3 = 5;
				Local_85[2] = (Local_85[2] * iVar3);
				Local_85[3] = (Local_85[3] * iVar3);
			}
			if (unk_0x89DF0B812BA6383B())
			{
				Local_85[3] = (Local_85[3] * 4294967295);
			}
			if (func_7(&(Local_85.f_CE), 750, 0))
			{
				if (!unk_0x91E3F625EF57450D(0))
				{
					bVar7 = unk_0xD245978525608929(0, 210);
				}
				else
				{
					bVar7 = (unk_0xD245978525608929(0, 241) || unk_0xD245978525608929(0, 242));
					if (unk_0xD245978525608929(0, 241))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					func_186(&(Local_85.f_CE), 0, 0);
				}
			}
			if (bVar7 && !func_234())
			{
				if (!unk_0x91E3F625EF57450D(0))
				{
					Local_85.f_18++;
				}
				else if (bVar8)
				{
					Local_85.f_18 = (Local_85.f_18 - 1);
				}
				else
				{
					Local_85.f_18++;
				}
				if (unk_0x8AA6DC470ABA63A2(Local_85.f_26))
				{
					Local_85.f_26 = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(Local_85.f_26, "HUD_Zoom_Change", Local_85.f_77, true);
				}
				if (Local_85.f_18 > 2)
				{
					Local_85.f_18 = 0;
				}
				else if (Local_85.f_18 < 0)
				{
					Local_85.f_18 = 2;
				}
			}
			else if (unk_0x8AA6DC470ABA63A2(Local_85.f_26))
			{
				unk_0x55D0A2DB35045A35(Local_85.f_26);
				unk_0x43A06902454A1172(Local_85.f_26);
				Local_85.f_26 = 4294967295;
			}
			Local_85.f_5B = (Local_85.f_5B + (((Local_85.f_59 - Local_85.f_5B) * 0.06f) * fVar6));
			unk_0x5818C8D5303DCCF8(Local_85.f_83, Local_85.f_5B);
			if (Local_85[2] != 0 || Local_85[3] != 0)
			{
				if (Local_85[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_85[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_85[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_85[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				vVar14 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_85.f_5D);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_85.f_5D);
				if ((fVar4 != 0f || Local_85[0] != 0) && !func_60())
				{
					if (Local_85[0] != 0)
					{
						fVar16 = (1f / (127f / IntToFloat(Local_85[0])));
						fVar13 = -(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar16 = -1f;
							}
							else
							{
								fVar16 = 1f;
							}
						}
						if (vVar14.y != 0f)
						{
							if (vVar14.y < 1.5f && vVar14.y > 0f)
							{
								fVar16 = 0.001f;
							}
							else if (vVar14.y > -1.5f && vVar14.y < 0f)
							{
								fVar16 = -0.001f;
							}
						}
						else
						{
							fVar16 = 0f;
						}
						fVar13 = -(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				vVar15 = { Vector(fVar12, fVar13, fVar11) + vVar14 };
				if (fVar4 != 0f)
				{
					if (Local_85[0] == 0)
					{
						if (vVar15.y > fVar1)
						{
							vVar15.y = fVar1;
						}
						else if (vVar15.y < -fVar1)
						{
							vVar15.y = -fVar1;
						}
					}
					else if (vVar15.y > fVar1)
					{
						vVar15.y = fVar1;
					}
					else if (vVar15.y < -fVar1)
					{
						vVar15.y = -fVar1;
					}
				}
				if (vVar15.x > fVar2)
				{
					vVar15.x = fVar2;
				}
				else if (vVar15.x < -fVar2)
				{
					vVar15.x = -fVar2;
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 12))
				{
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 12);
				}
				unk_0xC023D1C4BF532815(unk_0x09AD4CE7DA179533(Local_85.f_79), Vector(0f, 0f, 0f) + Vector(vVar15.z, vVar15.y, vVar15.x), 2, 1);
			}
			else if (((Local_85[0] != 0 || Local_85[1] != 0) && !func_234()) && !func_60())
			{
				vVar17 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 2) };
				if (func_234())
				{
					if (func_233())
					{
						fVar19 = -1f;
						Local_85.f_5C = fVar19;
					}
				}
				else
				{
					if (Local_85[0] != 0)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_85[0])));
						Local_85.f_5C = fVar18;
					}
					else
					{
						fVar18 = 0f;
					}
					if (Local_85[1] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_85[1])));
						Local_85.f_5C = fVar18;
					}
					else
					{
						fVar19 = 0f;
					}
				}
				fVar20 = -(((fVar19 * 0.05f) * fVar6) * fVar0);
				fVar21 = -(((fVar18 * 0.05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if ((Local_85[0] == 0 && !func_60()) || func_234())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar18 = -1f;
							}
							else
							{
								fVar18 = 1f;
							}
						}
						if (vVar17.y < 1.5f && vVar17.y > 0f)
						{
							fVar18 = 0.001f;
						}
						else if (vVar17.y > -1.5f && vVar17.y < 0f)
						{
							fVar18 = -0.001f;
						}
						fVar21 = -(((fVar18 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				vVar22 = { Vector(0f, fVar21, fVar20) + vVar17 };
				if (vVar22.y > fVar1)
				{
					vVar22.y = fVar1;
				}
				else if (vVar22.y < -fVar1)
				{
					vVar22.y = -fVar1;
				}
				if (vVar22.x > fVar2)
				{
					vVar22.x = fVar2;
				}
				else if (vVar22.x < -fVar2)
				{
					vVar22.x = -fVar2;
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 12))
				{
					unk_0x0674E58A79778E99(&(Local_85.f_5), 12);
				}
				unk_0xC023D1C4BF532815(unk_0x09AD4CE7DA179533(Local_85.f_79), Vector(0f, 0f, 0f) + Vector(vVar17.z, vVar22.y, vVar22.x), 2, 1);
			}
			else if (!func_233() && !func_234())
			{
				Local_85.f_5C = 0f;
				vVar23 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (vVar23.y != 0f)
					{
						if (vVar23.y < 0f)
						{
							fVar24 = -1f;
						}
						else
						{
							fVar24 = 1f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (vVar23.x < 0f)
						{
							fVar25 = -1f;
						}
						else
						{
							fVar25 = 1f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (vVar23.y != 0f)
					{
						if (vVar23.y < 1.5f && vVar23.y > 0f)
						{
							fVar24 = 0.001f;
						}
						else if (vVar23.y > -1.5f && vVar23.y < 0f)
						{
							fVar24 = -0.001f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (vVar23.x != 0f)
					{
						if (vVar23.x < 1.5f && vVar23.x > 0f)
						{
							fVar25 = 0.001f;
						}
						else if (vVar23.x > -1.5f && vVar23.x < 0f)
						{
							fVar25 = -0.001f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					uVar26 = func_232(-(((fVar25 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar27 = func_232(-(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f)));
					vVar28 = { Vector(0f, uVar27, uVar26) + vVar23 };
					if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 12))
					{
						vVar28.x = vVar23.x;
					}
					unk_0xC023D1C4BF532815(unk_0x09AD4CE7DA179533(Local_85.f_79), Vector(0f, 0f, 0f) + Vector(vVar23.z, vVar28.y, vVar28.x), 2, 1);
				}
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

void func_238()
{
	int iVar0;
	int iVar1;
	
	if (func_53(unk_0xD803B885F5E47A62(), 0))
	{
		iVar0 = func_162(0);
		Local_85.f_67 = { func_241(&Local_85) };
		if (!unk_0xC844350D5D58C99A(Local_85.f_7C))
		{
			if (!func_240(Local_85.f_67))
			{
				if (func_161(iVar0))
				{
					Local_85.f_7C = unk_0x7707E48765093646(iVar0, Local_85.f_67, false, false, true);
					unk_0x08841CDB215AE18F(Local_85.f_7C, Local_85.f_67, 0, 0, 1);
					unk_0x20641932E5104B25(Local_85.f_7C, true, 0);
					unk_0xE8832A9E16A57A1F(Local_85.f_7C, true, 1);
					unk_0xD0C5FAC38659B26F(Local_85.f_7C, 1);
					unk_0xD8F6A53F4799FAFE(Local_85.f_7C, func_239());
					unk_0x1E9649458B15960F(Local_85.f_7C, true);
					unk_0x4A4806F9D471E491(Local_85.f_7C, false, 0);
					unk_0x71199B01895C6202(iVar0);
				}
			}
		}
		else
		{
			iVar1 = unk_0x4B72871A3BE7B474(Local_85.f_67, 2f, iVar0, 0, 0, 0);
			if (unk_0xC844350D5D58C99A(iVar1) && iVar1 != Local_85.f_7C)
			{
				if (unk_0xAFE0D3608EDA7039(iVar1))
				{
					unk_0xCDCD90141EA7E6EE(iVar1, false, 0);
					unk_0x1E9649458B15960F(iVar1, true);
					unk_0x4A4806F9D471E491(iVar1, true, 0);
				}
				else
				{
					unk_0x0C8A454B494DAA0D(iVar1);
				}
			}
		}
	}
	else
	{
		Local_85.f_67 = { func_241(&Local_85) };
	}
}

float func_239()
{
	if (Global_19C087.f_7 != 0f)
	{
		return Global_19C087.f_7;
	}
	return 0f;
}

int func_240(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_241(var uParam0)
{
	if (!func_240(Global_19C087.f_A))
	{
		return Global_19C087.f_A;
	}
	else
	{
		return uParam0->f_67;
	}
	return 0f, 0f, 0f;
}

void func_242()
{
	if (Local_85.f_20 != 4294967295)
	{
		unk_0x55D0A2DB35045A35(Local_85.f_20);
		unk_0x43A06902454A1172(Local_85.f_20);
		Local_85.f_20 = 4294967295;
	}
}

int func_243()
{
	if (unk_0x798A3F1296751F46() || unk_0x590766B2AF637235())
	{
		return 1;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return 1;
	}
	if (func_155())
	{
		return 1;
	}
	if (func_248(unk_0xD803B885F5E47A62()) && !func_247())
	{
		return 1;
	}
	if (func_147(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B199, 0))
		{
			return 1;
		}
	}
	if (Global_195C36 || Global_140817)
	{
		func_246(1);
		return 1;
	}
	if ((func_244(0) || func_152(1)) || func_151())
	{
		func_54(0);
		func_63();
		func_81();
		return 1;
	}
	return 0;
}

int func_244(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_245(unk_0x16F2683693E537C9()))
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

int func_245(int iParam0)
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

void func_246(bool bParam0)
{
	if (bParam0)
	{
		if (!func_28())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 20);
		}
	}
	else if (func_28())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 20);
	}
}

bool func_247()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 12) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0));
}

int func_248(int iParam0)
{
	if (func_94(iParam0, 0))
	{
		return 1;
	}
	if (func_249())
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

bool func_249()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 3);
}

void func_250()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_27())
	{
		return;
	}
	if (func_229())
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
		{
			if (!unk_0xE4EDC4B0E92C078B(Local_85.f_85))
			{
				Local_85.f_85 = func_264(Local_85.f_70, 0);
				unk_0xBC8E0A7390523199(Local_85.f_85, 627);
				if (func_17() && !unk_0xE4EDC4B0E92C078B(Local_85.f_86))
				{
					Local_85.f_86 = func_261(unk_0x16F2683693E537C9(), 0, 0);
					unk_0xBC8E0A7390523199(Local_85.f_86, 6);
					unk_0xF2D30B8ACAF12A39(Local_85.f_86, false);
					unk_0x516E63E474722206(Local_85.f_86, 0.7f);
					unk_0x2A065371C9D96655(Local_85.f_86, (13 - 1));
					if (func_258(unk_0xD803B885F5E47A62()) != 4294967295)
					{
						func_254(&(Local_85.f_86), func_256(func_258(unk_0xD803B885F5E47A62())));
					}
					else
					{
						func_254(&(Local_85.f_86), func_253());
					}
					unk_0x54B31D18C3F36EB7(Local_85.f_86, 1);
				}
			}
			else
			{
				fVar0 = func_252(Local_85.f_57);
				fVar1 = Local_85.f_70;
				fVar2 = Local_85.f_70.f_1;
				unk_0x9D7CDDB4B55142AF(Local_85.f_85, 2);
				unk_0x2F9282246F89FFD1(Local_85.f_85, Local_85.f_70);
				if (((func_9() || func_29()) && unk_0x798A3F1296751F46()) && unk_0xA14BB9332558B949())
				{
					if (!unk_0x91707EC961984BF8())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						unk_0x2F9282246F89FFD1(Local_85.f_85, fVar1, fVar2, 0f);
						unk_0x6857CFBD47C253B6(fVar1, fVar2);
						unk_0xB243B37593BB6C38();
					}
				}
				unk_0xDB111A9E05F41582(fVar1, fVar2);
				unk_0x436F3596830D7DC3(Local_85.f_85, SYSTEM::ROUND(fVar0));
				unk_0x516E63E474722206(Local_85.f_85, 1f);
				unk_0x2A065371C9D96655(Local_85.f_85, 9);
				unk_0x3B05E4399DC8490C(SYSTEM::ROUND(fVar0));
				if (unk_0xE4EDC4B0E92C078B(Local_85.f_86))
				{
					unk_0x436F3596830D7DC3(Local_85.f_86, func_251(unk_0x16F2683693E537C9()));
				}
			}
		}
	}
}

int func_251(int iParam0)
{
	float fVar0;
	
	fVar0 = unk_0x085953070423354C(iParam0);
	return SYSTEM::ROUND(fVar0);
}

float func_252(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_253()
{
	return 10;
}

void func_254(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*uParam0))
	{
		iVar0 = func_255(iParam1);
		unk_0x61755AC17D8F538E(*uParam0, iVar0);
	}
}

int func_255(int iParam0)
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

int func_256(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_257(iParam0);
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

var func_257(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_258(int iParam0)
{
	if (!iParam0 == func_16())
	{
		if (func_259(iParam0, 1))
		{
			return Global_24E4E9.f_332.f_B[func_191(iParam0)];
		}
	}
	return 4294967295;
}

bool func_259(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_260(iParam0))
		{
			return 0;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_16();
}

int func_260(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_16())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_261(int iParam0, bool bParam1, bool bParam2)
{
	return func_262(iParam0, !bParam1, bParam2);
}

int func_262(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
	if (unk_0xE2F1E99DD161A861(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_263(unk_0x8CD06866876216F2(), 1f, 1f));
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
		unk_0x516E63E474722206(iVar0, func_263(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
		unk_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (unk_0x6BC06B42AD71CD8B(iParam0))
	{
		unk_0x516E63E474722206(iVar0, func_263(unk_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_263(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_264(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6CC513A908911CF0(vParam0);
	unk_0x516E63E474722206(iVar0, func_263(unk_0x8CD06866876216F2(), 1f, 1f));
	unk_0x661342B9651D16E2(iVar0, bParam1);
	return iVar0;
}

void func_265()
{
	if (func_27())
	{
		if (Local_85.f_70.f_2 >= (func_139() - 20f))
		{
			if (unk_0x8AA6DC470ABA63A2(Local_85.f_24))
			{
				Local_85.f_24 = unk_0xD68EA767274B7444();
				unk_0x4D7F4CC43D4D0DE3(Local_85.f_24, "Out_Of_Bounds_Alarm_Loop", Local_85.f_77, true);
			}
		}
		else if (!unk_0x8AA6DC470ABA63A2(Local_85.f_24))
		{
			unk_0x55D0A2DB35045A35(Local_85.f_24);
			unk_0x43A06902454A1172(Local_85.f_24);
			Local_85.f_24 = 4294967295;
		}
	}
}

void func_266()
{
	if (((func_29() || func_119()) || func_17()) || func_142())
	{
		switch (Local_85.f_AB)
		{
			case 0:
				func_289();
				break;
			
			case 1:
				func_276();
				break;
			
			case 2:
				func_274();
				break;
			
			case 3:
				func_267();
				break;
			}
	}
}

void func_267()
{
	func_55(1);
	if (!func_273())
	{
		unk_0x82E51BCA72537B6C(500);
	}
	func_271(0);
	func_269(0);
	func_268(0);
}

void func_268(int iParam0)
{
	if (Local_85.f_AB != iParam0)
	{
		Local_85.f_AB = iParam0;
	}
}

void func_269(bool bParam0)
{
	if (bParam0)
	{
		if (!func_270())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 17);
		}
	}
	else if (func_270())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 17);
	}
}

bool func_270()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 17);
}

void func_271(bool bParam0)
{
	if (bParam0)
	{
		if (!func_272())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 18);
		}
	}
	else if (func_272())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 18);
	}
}

bool func_272()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 18);
}

bool func_273()
{
	return Global_199459.f_1DA;
}

void func_274()
{
	if (func_272() || unk_0x798A3F1296751F46())
	{
		func_55(1);
		func_275(0);
		unk_0x0674E58A79778E99(&(Local_85.f_5), 16);
		func_268(3);
	}
}

void func_275(bool bParam0)
{
	if (bParam0)
	{
		if (!func_60())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 19);
		}
	}
	else if (func_60())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 19);
	}
}

void func_276()
{
	if (unk_0x757EF87A33649210())
	{
		if (func_7(&(Local_85.f_C4), 3000, 0))
		{
			if (func_288())
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 2) || func_7(&(Local_85.f_C8), 8000, 0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 2))
					{
					}
					unk_0x82E51BCA72537B6C(500);
					func_277(unk_0xD803B885F5E47A62(), 1, 0, 0);
					func_6(&(Local_85.f_C4));
					func_6(&(Local_85.f_C8));
					func_268(2);
				}
			}
			else if (func_7(&(Local_85.f_C8), 15000, 0))
			{
				func_6(&(Local_85.f_C4));
				func_6(&(Local_85.f_C8));
				func_55(1);
				func_275(0);
				unk_0x0674E58A79778E99(&(Local_85.f_5), 16);
				func_268(3);
			}
		}
	}
}

void func_277(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_287())
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
		if (!func_285())
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
				else if (bVar14 || (!func_94(unk_0xD803B885F5E47A62(), 0) && !func_249()))
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
					func_282(0, 0, 0);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_281(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					func_280();
					func_279();
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
				if (!func_281(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
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
					if (func_278(Global_440000.f_38DB3))
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

bool func_278(int iParam0)
{
	return iParam0 == 17;
}

void func_279()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0;
	Global_2537E2.f_4D2 = 0;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 4294967295;
	Global_2537E2.f_4D9 = 0;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_280()
{
	Global_24B2D0.f_2B6 = 0;
	Global_24B2D0.f_AA6 = 0;
	Global_24B2D0.f_200 = 0;
	Global_24B2D0.f_258 = 0;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0;
	Global_24B2D0.f_A79 = 0;
}

int func_281(int iParam0)
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

void func_282(bool bParam0, int iParam1, int iParam2)
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
				func_284();
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
		if (func_94(unk_0xD803B885F5E47A62(), 0))
		{
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 1);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_283(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_283(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 1);
	}
}

void func_284()
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

int func_285()
{
	if (func_286() == 0)
	{
		return 1;
	}
	return 0;
}

int func_286()
{
	return Global_1406D3.f_12;
}

int func_287()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_288()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_289()
{
	if (func_307())
	{
		if (unk_0xB9132A06AE472728(2, 201) || unk_0x9A01369A10646AFE(2, 201))
		{
			if (!func_288())
			{
				if (unk_0x0F1CCD77290EE12F())
				{
					func_275(1);
					func_105(4294967295);
					func_277(unk_0xD803B885F5E47A62(), 0, 512, 0);
					unk_0x53491B90E4FD0E56(500);
					func_305(1, 4294967295);
					func_290(3, 1, 1, 0);
					func_8(&(Local_85.f_C4), 0, 0);
					func_8(&(Local_85.f_C8), 0, 0);
					func_268(1);
				}
			}
		}
	}
}

int func_290(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_12B4E)
	{
		if ((iParam0 != 17 && iParam0 != 3) && iParam0 != 23)
		{
			return 0;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 14))
		{
			if (iParam0 == 17)
			{
				unk_0x5D96D8530B3D0904(&Global_4126C5, 14);
				unk_0x5D96D8530B3D0904(&Global_4126C5, 16);
			}
			if (iParam0 == 3)
			{
				unk_0x5D96D8530B3D0904(&Global_4126C5, 14);
				unk_0x5D96D8530B3D0904(&Global_4126C5, 15);
			}
			if (iParam0 == 23)
			{
				unk_0x5D96D8530B3D0904(&Global_4126C5, 14);
				unk_0x5D96D8530B3D0904(&Global_4126C5, 27);
			}
		}
		if (Global_1CC3[iParam0 /*15*/].f_9 == 0)
		{
			func_302();
		}
		if (unk_0x8A22C4C08282BF26(Global_1CC3[iParam0 /*15*/].f_9) > 0)
		{
			unk_0x0674E58A79778E99(&Global_4126C5, 14);
			unk_0x0674E58A79778E99(&Global_4126C5, 16);
			unk_0x0674E58A79778E99(&Global_4126C5, 15);
			unk_0x0674E58A79778E99(&Global_4126C5, 27);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_295();
	if (Global_4C1E.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_59(0) == 1)
		{
			return 0;
		}
	}
	if (Global_4BFC == 1)
	{
		return 0;
	}
	if (Global_4C1E.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0x1727A44C562FBED2(Global_4C1B))
	{
		if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_4C1E.f_1 < 4)
			{
				func_294("cellphone_flashhand");
				if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0)
				{
					Global_4C1B = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				unk_0x5E8C29AE121DF1C7("cellphone_flashhand");
			}
		}
	}
	while (!Global_4C0C)
	{
		SYSTEM::WAIT(0);
	}
	func_302();
	func_291();
	if (unk_0x8A22C4C08282BF26(Global_1CC3[iParam0 /*15*/].f_9) == 0)
	{
		Global_1F1A = 0;
		Global_4C1E.f_1 = 7;
		func_294(&(Global_1CC3[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x8A22C4C08282BF26(Global_1CC3[iParam0 /*15*/].f_9) == 0)
			{
				Global_4C1C = SYSTEM::START_NEW_SCRIPT(&(Global_1CC3[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (unk_0x8A22C4C08282BF26(Global_1CC3[iParam0 /*15*/].f_9) == 0)
		{
			Global_4C1C = SYSTEM::START_NEW_SCRIPT(&(Global_1CC3[iParam0 /*15*/].f_5), 2552);
		}
		unk_0x5E8C29AE121DF1C7(&(Global_1CC3[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_291()
{
	if (Global_12B4E == 0)
	{
		Global_1CC3[14 /*15*/].f_4 = 4294967197;
		Global_1CC3[4 /*15*/].f_4 = 4294967197;
		if (Global_258C03)
		{
			if (func_293(14))
			{
				func_292(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_292(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_292(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_292(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_292(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_1CC3[iParam0 /*15*/]), sParam1, 16);
	Global_1CC3[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_1CC3[iParam0 /*15*/].f_5), sParam3, 16);
	Global_1CC3[iParam0 /*15*/].f_9 = unk_0x12AB0310C2281427(sParam3);
	Global_1CC3[iParam0 /*15*/].f_A = iParam4;
	Global_1CC3[iParam0 /*15*/].f_B = iParam5;
	Global_1CC3[iParam0 /*15*/].f_C = iParam6;
	Global_1CC3[iParam0 /*15*/].f_D = iParam7;
	Global_1CC3[iParam0 /*15*/].f_E = iParam8;
	if (Global_1CC3[iParam0 /*15*/].f_C == 0)
	{
		Global_1CC3[iParam0 /*15*/].f_C = 0;
	}
	if (Global_1CC3[iParam0 /*15*/].f_D == 0)
	{
		Global_1CC3[iParam0 /*15*/].f_D = 0;
	}
	if (Global_1CC3[iParam0 /*15*/].f_E == 0)
	{
		Global_1CC3[iParam0 /*15*/].f_E = 0;
	}
}

bool func_293(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_294(char* sParam0)
{
	unk_0x92DCE5C81176D2B4(sParam0);
	while (!unk_0x1FBF08B001C4788A(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_295()
{
	if (func_293(14))
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
		Global_4C1E = func_296();
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

var func_296()
{
	func_297();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_297()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_300(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_299(unk_0x16F2683693E537C9());
			if (func_298(iVar0) && (!func_293(14) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_298(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_298(int iParam0)
{
	return iParam0 < 3;
}

int func_299(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_300(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_300(int iParam0)
{
	if (func_298(iParam0))
	{
		return func_301(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_301(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_302()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_1CC3[iVar0 /*15*/].f_4 = 4294967197;
		iVar0++;
	}
	if (Global_12B4E == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_304(iVar2, Global_4C1E) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_292(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_292(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_292(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_A1D7 == 15 && func_303(0) == 0) && Global_1CC1 == 0)
		{
			func_292(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_4CD3 = 0;
			Global_1CC2 = 255;
		}
		else
		{
			func_292(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_4CD3 = 1;
			Global_1CC2 = 42;
		}
		if (iVar1 == 1)
		{
			func_292(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_292(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_292(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_292(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_292(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_1B416.f_36DE.f_59 == 1)
		{
			func_292(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_1B416.f_36DE.f_58 == 1)
		{
			func_292(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_292(25, "CELL_14", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_292(9, "CELL_13", 4294967197, "appContacts", 13, 2, 1, 0, 0);
		func_292(11, "CELL_14", 4294967197, "appContacts", 8, 2, 1, 0, 0);
		func_292(27, "CELL_15", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_292(28, "CELL_15", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_292(29, "CELL_15", 4294967197, "appSettings", 17, 2, 1, 0, 0);
		func_292(30, "CELL_15", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_292(31, "CELL_15", 4294967197, "appContacts", 17, 2, 1, 0, 0);
		func_292(32, "CELL_15", 4294967197, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_292(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_292(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_292(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_292(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_292(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_292(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_292(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_292(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 4) == 1)
		{
			func_292(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_292(13, "CELL_35", 4294967197, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_292(13, "CELL_20", 4294967197, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_292(15, "CELL_18", 4294967197, "appContacts", 8, 1, 1, 0, 0);
		func_292(9, "CELL_13", 4294967197, "appContacts", 13, 2, 1, 0, 0);
		func_292(5, "CELL_4", 4294967197, "appContacts", 12, 2, 1, 0, 0);
		func_292(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_292(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_292(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_292(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_292(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_292(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_292(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_292(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_292(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_292(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_292(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0xEAE0D21A50E6C7F4(Global_4126C5, 4) == 1)
		{
			if (Global_180426)
			{
				func_292(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 20) == 1)
			{
				func_292(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 22) == 1)
			{
				func_292(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 26) == 1)
			{
				func_292(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((unk_0xEAE0D21A50E6C7F4(Global_4126C5, 4) == 0 && Global_180426 == 0) && unk_0xEAE0D21A50E6C7F4(Global_4126C5, 20) == 0) && unk_0xEAE0D21A50E6C7F4(Global_4126C5, 22) == 0) && unk_0xEAE0D21A50E6C7F4(Global_4126C5, 26) == 0)
		{
			func_292(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

bool func_303(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0);
}

int func_304(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_706[iParam0 /*29*/].f_13[iParam1];
}

void func_305(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_102(&iVar0, 0, iParam1))
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
		func_306(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0;
	}
}

void func_306(int iParam0)
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

int func_307()
{
	if (func_60())
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if ((func_152(0) || func_151()) || unk_0x192DA571D9133D23())
	{
		func_6(&(Local_85.f_CC));
		func_8(&(Local_85.f_CC), 0, 0);
		unk_0x0674E58A79778E99(&(Local_85.f_5), 16);
		func_81();
		return 0;
	}
	else if (func_10(&(Local_85.f_CC)))
	{
		if (!func_7(&(Local_85.f_CC), 2000, 0))
		{
			return 0;
		}
		else
		{
			unk_0x0674E58A79778E99(&(Local_85.f_5), 16);
			func_6(&(Local_85.f_CC));
		}
	}
	if (func_147(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	return 1;
}

void func_308()
{
	if (func_309())
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0))
		{
			if (unk_0x526BC32A660C89E6(Local_85.f_79))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 25))
				{
					unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_85.f_79), true);
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 25);
				}
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_85.f_79);
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 25))
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0))
		{
			if (unk_0x526BC32A660C89E6(Local_85.f_79))
			{
				unk_0x1E9649458B15960F(unk_0x09AD4CE7DA179533(Local_85.f_79), false);
				unk_0x0674E58A79778E99(&(Local_85.f_5), 25);
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_85.f_79);
			}
		}
	}
}

int func_309()
{
	if (func_147(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_26B199, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_310()
{
	int iVar0;
	
	if (func_27())
	{
		Global_19C087.f_1 = 0;
	}
	if (func_314() || func_176())
	{
		if (!func_10(&(Local_85.f_B0)))
		{
			func_8(&(Local_85.f_B0), 0, 0);
		}
		else if (func_7(&(Local_85.f_B0), Global_19C087.f_1, 0) || func_176())
		{
			func_6(&(Local_85.f_AE));
			if (func_27())
			{
				if (func_25(unk_0x16F2683693E537C9()))
				{
					unk_0xA2FC3824D7AFA946(unk_0x16F2683693E537C9(), Local_85.f_70, 72, 0.5f, 1, 0, 1065353216);
				}
				else
				{
					unk_0xDA55CDFB97015579(Local_85.f_70, 72, 0.5f, 1, 0, 1065353216, 0);
				}
				unk_0x5E858A00EAFA5B24(0, 300, 200);
				unk_0x866EE3B81CEF363A(Local_85.f_79, true);
				unk_0x066C43E677C08D5C();
				iVar0 = unk_0x09AD4CE7DA179533(Local_85.f_79);
				unk_0xF690C84DADBB3551(&iVar0);
				unk_0x5D96D8530B3D0904(&(Local_85.f_6), 2);
			}
			if (func_18())
			{
				func_313(1);
				if (Local_85.f_19 == 0)
				{
					func_311(6, 0, 0);
				}
				else
				{
					func_311(5, 0, 0);
				}
			}
			func_357(1);
			func_356(4);
		}
	}
	else if (func_10(&(Local_85.f_B0)))
	{
		func_186(&(Local_85.f_B0), 0, 0);
	}
}

void func_311(int iParam0, bool bParam1, bool bParam2)
{
	char cVar0[64];
	int iVar1;
	float fVar2;
	float fVar3;
	
	StringCopy(&cVar0, func_312(iParam0), 64);
	iVar1 = 5;
	if (bParam1)
	{
		iVar1 = 69;
	}
	fVar2 = 8f;
	fVar3 = -8f;
	Local_85.f_4E = unk_0xF66E5A439A080021(Local_85.f_73, 0f, 0f, Local_85.f_51, 2, bParam2, bParam1, 1065353216, 0, 1065353216);
	unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_85.f_4E, Local_85.f_78, &cVar0, fVar2, fVar3, iVar1, 0, 1148846080, 0);
	if (iParam0 == 0)
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			unk_0xF50FD289C7836651(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), Local_85.f_4E, Local_85.f_78, &cVar0, fVar2, fVar3, 8);
		}
	}
	StringCopy(&cVar0, func_312(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (unk_0xE5DBF9B6126856CA(Local_85.f_7A))
	{
		unk_0xD65E6E13E145467B(unk_0xA5FBBC2F619A4DE2(Local_85.f_7A), &cVar0, Local_85.f_78, fVar2, bParam1, bParam2, 0, 0f, 0);
		unk_0x295ACC5727E47CB7(unk_0xA5FBBC2F619A4DE2(Local_85.f_7A));
	}
	unk_0x914E6894744915F8(Local_85.f_4E);
}

char* func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ENTER";
		
		case 1:
			return "BASE";
		
		case 2:
			return "USE_01";
		
		case 3:
			return "USE_02";
		
		case 4:
			return "USE_03";
		
		case 5:
			return "FAIL";
		
		case 6:
			return "EXIT";
		
		default:
	}
	return "";
}

void func_313(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xF958843510932FF6(iVar0);
	if (unk_0x69DF961355195C3C(iVar0))
	{
		unk_0xB46854F2D1C7DFA9(iVar0);
		unk_0x45934E8E3471AAA9(iVar0);
		iVar0 = 4294967295;
	}
	else if (bParam0)
	{
		if (func_25(unk_0x16F2683693E537C9()))
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
		}
	}
}

int func_314()
{
	if ((unk_0xE5DBF9B6126856CA(Local_85.f_79) && unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0)) && !unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 2))
	{
		return 1;
	}
	if (Local_85.f_B == 2)
	{
		Local_85.f_19 = 1;
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 1))
	{
		return 1;
	}
	if (func_323())
	{
		Local_85.f_19 = 5;
		return 1;
	}
	if (func_119() && func_316())
	{
		Local_85.f_19 = 5;
		return 1;
	}
	if (func_18())
	{
		if (func_316())
		{
			Local_85.f_19 = 5;
			return 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 2))
	{
		Local_85.f_19 = 4;
		return 1;
	}
	if (func_159())
	{
		if (!func_10(&(Local_85.f_B8)))
		{
			func_8(&(Local_85.f_B8), 0, 0);
		}
		else if (func_7(&(Local_85.f_B8), 3000, 0))
		{
			Local_85.f_19 = 0;
			return 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 7))
	{
		Local_85.f_19 = 0;
		return 1;
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x70EED0761B82965E(unk_0x09AD4CE7DA179533(Local_85.f_79)) || func_183(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), 0))
		{
			Local_85.f_19 = 3;
			return 1;
		}
	}
	if (!func_119() && !func_315())
	{
		if (Local_85.f_70.f_2 >= func_139())
		{
			Local_85.f_19 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_315()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0);
}

int func_316()
{
	vector3 vVar0;
	int iVar1;
	
	if (func_322())
	{
		return 0;
	}
	if (func_15(unk_0xD803B885F5E47A62(), 1, 1))
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0))
		{
			if (func_119())
			{
				if (unk_0xC844350D5D58C99A(func_321()) && !unk_0x437347B10A200C4B(func_321(), 0))
				{
					vVar0 = { unk_0x68F4C0EC296D3901(func_321(), true) };
				}
			}
			else if (func_17())
			{
				if (!func_18())
				{
					iVar1 = func_317(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8);
					switch (iVar1)
					{
						case 128:
							vVar0 = { -245.64f, 6210.96f, 35.94f };
							break;
						
						case 129:
							vVar0 = { 1695.88f, 4783.87f, 47.02f };
							break;
						
						case 130:
							vVar0 = { -115.15f, -1771.65f, 38.86f };
							break;
						
						case 131:
							vVar0 = { -600.96f, 280.47f, 87.04f };
							break;
						
						case 132:
							vVar0 = { -1269.72f, -304.09f, 40f };
							break;
						
						case 133:
							vVar0 = { 758.46f, -814.57f, 30.3f };
							break;
					}
				}
				else
				{
					vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
				}
			}
			else
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
			}
			if (func_25(unk_0x09AD4CE7DA179533(Local_85.f_79)))
			{
				Local_85.f_53 = func_136(unk_0x09AD4CE7DA179533(Local_85.f_79), vVar0, 1);
				if (Local_85.f_53 > func_139())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_317(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_16())
	{
		iVar0 = func_320(iParam0);
		if (iVar0 != 0)
		{
			return func_318(iVar0);
		}
	}
	return 4294967295;
}

int func_318(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_14(iVar0) == 17)
		{
			if (func_319(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 128:
			return 1;
		
		case 129:
			return 2;
		
		case 130:
			return 3;
		
		case 131:
			return 4;
		
		case 132:
			return 5;
		
		case 133:
			return 6;
		
		default:
	}
	return 0;
}

int func_320(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_189;
	}
	return 0;
}

int func_321()
{
	if (Global_18446E != func_16())
	{
		if (!func_37(Global_18446E))
		{
			if (unk_0xC844350D5D58C99A(Global_14E890))
			{
				return Global_14E890;
			}
			if (unk_0xC844350D5D58C99A(Global_19D964[Global_18446E]))
			{
				return Global_19D964[Global_18446E];
			}
		}
	}
	return 4294967295;
}

bool func_322()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 6);
}

int func_323()
{
	float fVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0))
	{
		if (unk_0xE82754C349C7B581(Local_85.f_70, &fVar0, 1, 0))
		{
			Local_85.f_54 = (Local_85.f_70.f_2 - fVar0);
			if (Local_85.f_54 > IntToFloat(Global_40001.f_5E55))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_324()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	
	if (!func_27())
	{
		return;
	}
	if ((unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0)) && unk_0x9F4FE516EAACCFC5(Local_85.f_83))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			vVar0 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 2) };
			vVar0 = { (vVar0.x + 180f), (-vVar0.y + 180f), vVar0.z };
			unk_0x5F3CBA6EB9341C90(Local_85.f_83, vVar0, 2);
			if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 1) || func_176())
			{
				return;
			}
			vVar1 = { func_327(func_328()) };
			vVar2 = { func_327(func_326(func_328())) };
			vVar3 = { func_325(vVar1, vVar2) };
			fVar4 = 5f;
			if (!unk_0x91E3F625EF57450D(0))
			{
				if (unk_0x659FAE9DBE6F38F5(2, 208) != 0f)
				{
					iVar5 = 1;
				}
				if (unk_0x659FAE9DBE6F38F5(2, 207) != 0f)
				{
					iVar6 = 1;
				}
			}
			else
			{
				if (unk_0x659FAE9DBE6F38F5(2, 209) != 0f)
				{
					iVar5 = 1;
				}
				if (unk_0x659FAE9DBE6F38F5(2, 210) != 0f)
				{
					iVar6 = 1;
				}
			}
			if (iVar5 && !func_243())
			{
				Local_85.f_52 = 140f;
				fVar4 = 7f;
			}
			else if (iVar6 && !func_243())
			{
				Local_85.f_52 = 60f;
				fVar4 = 3.5f;
			}
			else
			{
				Local_85.f_52 = 100f;
			}
			if (unk_0x91E3F625EF57450D(0))
			{
				if (Local_85[2] >= 127)
				{
					Local_85[2] = 127;
				}
				else if (Local_85[2] <= 4294967169)
				{
					Local_85[2] = 4294967169;
				}
				if (Local_85[0] >= 127)
				{
					Local_85[0] = 127;
				}
				else if (Local_85[0] <= 4294967169)
				{
					Local_85[0] = 4294967169;
				}
			}
			if (Local_85[2] > 0 || Local_85[0] > 0)
			{
				if (Local_85[2] > 0)
				{
					fVar7 = -(fVar4 / (127f / IntToFloat(Local_85[2])));
				}
				else
				{
					fVar7 = -(fVar4 / (127f / IntToFloat(Local_85[0])));
				}
				unk_0xDFC6BA855748EB10(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, vVar3 * Vector(fVar7, fVar7, fVar7), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, vVar1 * Vector(-Local_85.f_52, -Local_85.f_52, -Local_85.f_52), 0, 1, 1, 0);
				unk_0xDFC6BA855748EB10(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else if (Local_85[2] < 0 || Local_85[0] < 0)
			{
				if (Local_85[0] < 0)
				{
					fVar8 = -(fVar4 / (127f / IntToFloat(Local_85[0])));
				}
				else
				{
					fVar8 = -(fVar4 / (127f / IntToFloat(Local_85[2])));
				}
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, vVar1 * Vector(-Local_85.f_52, -Local_85.f_52, -Local_85.f_52), 0, 1, 1, 0);
				unk_0xDFC6BA855748EB10(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, vVar3 * Vector(fVar8, fVar8, fVar8), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				unk_0xDFC6BA855748EB10(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else
			{
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, vVar1 * Vector(-Local_85.f_52, -Local_85.f_52, -Local_85.f_52), 0, 1, 1, 0);
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

Vector3 func_325(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

Vector3 func_326(struct<2> Param0, var uParam1)
{
	vector3 vVar0;
	
	vVar0 = { SYSTEM::SIN(Param0.f_1), (-SYSTEM::SIN(Param0) * SYSTEM::COS(Param0.f_1)), (SYSTEM::COS(Param0) * SYSTEM::COS(Param0.f_1)) };
	return vVar0;
}

Vector3 func_327(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

Vector3 func_328()
{
	vector3 vVar0;
	
	vVar0 = { 0f, 1f, 0f };
	func_329(&vVar0);
	return vVar0;
}

void func_329(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

void func_330()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	vector3 vVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	
	if (func_27())
	{
		return;
	}
	if ((unk_0xE5DBF9B6126856CA(Local_85.f_79) && !unk_0x437347B10A200C4B(unk_0x09AD4CE7DA179533(Local_85.f_79), 0)) && unk_0x9F4FE516EAACCFC5(Local_85.f_83))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			fVar0 = 0f;
			if (!func_29() && !func_9())
			{
				if (!func_234())
				{
					if (func_10(&(Local_85.f_B6)))
					{
						iVar1 = Global_40001.f_5E53;
						if (func_9())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_7(&(Local_85.f_B6), iVar1, 0))
						{
							iVar2 = (100 * unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_B6)));
							Local_85.f_13 = (iVar2 / iVar1);
						}
						else
						{
							if (func_25(Local_85.f_7B))
							{
								unk_0x9F528B1B53FBC5D9(Local_85.f_7B, unk_0x09AD4CE7DA179533(Local_85.f_79), 4294967295, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							Local_85.f_13 = 100;
							func_6(&(Local_85.f_B6));
							if (!unk_0x8AA6DC470ABA63A2(Local_85.f_2A))
							{
								unk_0x55D0A2DB35045A35(Local_85.f_2A);
								unk_0x43A06902454A1172(Local_85.f_2A);
								Local_85.f_2A = 4294967295;
							}
						}
					}
					if (!unk_0x91E3F625EF57450D(0))
					{
						bVar3 = unk_0xD245978525608929(0, 209);
					}
					else
					{
						bVar3 = unk_0xD245978525608929(0, 203);
					}
					if ((((bVar3 && Local_85.f_13 == 100) && !func_243()) && !func_60()) && func_143())
					{
						fVar0 = 120f;
						if (func_9())
						{
							fVar0 = 110f;
						}
						else if (func_17())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_85[1]) != 0f)
						{
							func_335(1);
						}
						else
						{
							func_335(0);
						}
						unk_0x82A772610883F395("RaceTurbo", 0, 0);
						func_8(&(Local_85.f_B4), 0, 0);
						func_334(1);
						if (unk_0x8AA6DC470ABA63A2(Local_85.f_29))
						{
							Local_85.f_29 = unk_0xD68EA767274B7444();
							unk_0x4D7F4CC43D4D0DE3(Local_85.f_29, "HUD_Boost_Loop", Local_85.f_77, true);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_9())
					{
						fVar0 = 115f;
					}
					else if (func_17())
					{
						fVar0 = 49f;
					}
					if (unk_0x9F4FE516EAACCFC5(Local_85.f_83))
					{
						if (!unk_0xB3FFA20AEA3A2D9C(Local_85.f_83))
						{
							unk_0x91F5B0244AAE6222(Local_85.f_83, "DRONE_BOOST_SHAKE", 1f);
							unk_0x97271F6489B78F2D(Local_85.f_83, 0.15f);
						}
					}
					if (func_10(&(Local_85.f_B4)))
					{
						if (func_7(&(Local_85.f_B4), Global_40001.f_5E52, 0))
						{
							Local_85.f_13 = 0;
							func_335(0);
							func_334(0);
							func_6(&(Local_85.f_B6));
							func_8(&(Local_85.f_B6), 0, 0);
							unk_0x10486C0590CF176C(Local_85.f_83, 1);
							unk_0x0FB033EB6C6ED01F(0);
							unk_0x9A1335ECD7BD117F("RaceTurbo");
							func_6(&(Local_85.f_B4));
							if (!unk_0x8AA6DC470ABA63A2(Local_85.f_29))
							{
								unk_0x55D0A2DB35045A35(Local_85.f_29);
								unk_0x43A06902454A1172(Local_85.f_29);
								Local_85.f_29 = 4294967295;
							}
							if (unk_0x8AA6DC470ABA63A2(Local_85.f_2A))
							{
								Local_85.f_2A = unk_0xD68EA767274B7444();
								unk_0x4D7F4CC43D4D0DE3(Local_85.f_2A, "HUD_Boost_Recharge_Loop", Local_85.f_77, true);
							}
						}
						else
						{
							fVar4 = (100f / (SYSTEM::TO_FLOAT(Global_40001.f_5E52) / IntToFloat(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_B4))));
							Local_85.f_13 = (100 - SYSTEM::ROUND(fVar4));
							unk_0x5E858A00EAFA5B24(0, Global_40001.f_5E52, 255);
						}
					}
				}
			}
			vVar5 = { Local_85.f_70 };
			vVar6 = { unk_0x835730A2D89F6093(unk_0x09AD4CE7DA179533(Local_85.f_79), 2) };
			vVar6 = { (vVar6.x + 180f), (-vVar6.y + 180f), vVar6.z };
			unk_0x5F3CBA6EB9341C90(Local_85.f_83, vVar6, 2);
			if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 1) || func_176())
			{
				return;
			}
			vVar7 = { func_327(func_328()) };
			vVar8 = { func_327(func_326(func_328())) };
			unk_0xE82754C349C7B581(vVar5, &fVar9, 1, 0);
			if (!func_333())
			{
				if (Local_85.f_9 == 2 || (vVar5.z - fVar9) < 2f)
				{
					fVar10 = 24f;
					if (Local_85[1] != 0)
					{
						unk_0x38C3A68D7861DCFD(2, 207, 1);
					}
					if (unk_0x659FAE9DBE6F38F5(2, 207) != 0f || Local_85[1] != 0)
					{
						if ((vVar5.z - fVar9) < 0.5f || unk_0x659FAE9DBE6F38F5(2, 207) != 0f)
						{
							fVar10 = 24f;
						}
						else
						{
							fVar10 = 10f;
						}
					}
					else
					{
						fVar10 = 3f;
					}
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, 0f, 0f, fVar10, 0, 1, 1, 0);
				}
			}
			if (unk_0x91E3F625EF57450D(0))
			{
				if (Local_85[2] >= 127)
				{
					Local_85[2] = 127;
				}
				else if (Local_85[2] <= 4294967169)
				{
					Local_85[2] = 4294967169;
				}
				if (Local_85[0] >= 127)
				{
					Local_85[0] = 127;
				}
				else if (Local_85[0] <= 4294967169)
				{
					Local_85[0] = 4294967169;
				}
			}
			if (!unk_0x91E3F625EF57450D(0))
			{
				if (unk_0x659FAE9DBE6F38F5(2, 208) != 0f)
				{
					iVar11 = 1;
				}
				if (unk_0x659FAE9DBE6F38F5(2, 207) != 0f)
				{
					iVar12 = 1;
				}
			}
			else
			{
				if (unk_0x659FAE9DBE6F38F5(2, 209) != 0f)
				{
					iVar11 = 1;
				}
				if (unk_0x659FAE9DBE6F38F5(2, 210) != 0f)
				{
					iVar12 = 1;
				}
			}
			if (((iVar11 && func_332()) && !func_60()) || (func_234() && !func_233()))
			{
				fVar15 = Local_85.f_52;
				if (func_142())
				{
					fVar15 = 5f;
				}
				if (func_29() || func_9())
				{
					fVar14 = 10f;
				}
				if (func_234() && !func_233())
				{
					if (!unk_0x91E3F625EF57450D(0))
					{
						fVar13 = ((fVar15 + fVar0) / (1f / unk_0x659FAE9DBE6F38F5(2, 208)));
					}
					else
					{
						fVar13 = ((fVar15 + fVar0) / (1f / unk_0x659FAE9DBE6F38F5(2, 209)));
					}
				}
				else if (!unk_0x91E3F625EF57450D(0))
				{
					fVar13 = ((fVar15 + fVar14) / (1f / unk_0x659FAE9DBE6F38F5(2, 208)));
				}
				else
				{
					fVar13 = ((fVar15 + fVar14) / (1f / unk_0x659FAE9DBE6F38F5(2, 209)));
				}
				vVar16 = { vVar8 * Vector(fVar13, fVar13, fVar13) };
				if (vVar16.z > 149f)
				{
					vVar16.z = 149f;
				}
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, vVar16, 0, 1, 1, 0);
			}
			else if (((iVar12 && !func_60()) && func_332()) && !func_243())
			{
				if (func_29() || func_9())
				{
					fVar18 = 10f;
				}
				if (!unk_0x91E3F625EF57450D(0))
				{
					fVar17 = ((Local_85.f_52 + fVar18) / (1f / unk_0x659FAE9DBE6F38F5(2, 207)));
				}
				else
				{
					fVar17 = ((Local_85.f_52 + fVar18) / (1f / unk_0x659FAE9DBE6F38F5(2, 210)));
				}
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, vVar8 * Vector(-fVar17, -fVar17, -fVar17), 0, 1, 1, 0);
			}
			if (((Local_85[1] > 0 && !func_234()) && !func_243()) && !func_60())
			{
				fVar21 = func_331();
				fVar19 = (Local_85.f_52 / (127f / IntToFloat(Local_85[1])));
				fVar20 = (fVar21 / (127f / IntToFloat(Local_85[1])));
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, vVar7 * Vector(fVar19, fVar19, fVar19), 0, 1, 1, 0);
				unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, 0f, 0f, fVar20, 0, 1, 1, 0);
			}
			else if ((((Local_85[1] < 0 && !func_234()) && !func_243()) && !func_60()) || (func_234() && func_233()))
			{
				if (func_234() && func_233())
				{
					fVar24 = 50f;
					if (func_9())
					{
						fVar22 = (Local_85.f_52 / -1f);
					}
					else
					{
						fVar22 = ((Local_85.f_52 + fVar0) / -1f);
					}
					fVar23 = (fVar24 / -1f);
				}
				else
				{
					fVar24 = func_331();
					if (func_9())
					{
						fVar22 = (Local_85.f_52 / (127f / IntToFloat(Local_85[1])));
					}
					else
					{
						fVar22 = ((Local_85.f_52 + fVar0) / (127f / IntToFloat(Local_85[1])));
					}
					fVar23 = (fVar24 / (127f / IntToFloat(Local_85[1])));
				}
				if (func_9())
				{
					if (!func_233())
					{
						unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, 0f, 0f, -fVar23, 0, 1, 1, 0);
						unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, vVar7 * Vector(fVar22, fVar22, fVar22), 0, 1, 1, 0);
					}
					else
					{
						unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, 0f, 0f, 41f, 0, 1, 1, 0);
						unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, 0f, -149f, 0f, 0, 1, 1, 0);
					}
				}
				else
				{
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, 0f, 0f, -fVar23, 0, 1, 1, 0);
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, vVar7 * Vector(fVar22, fVar22, fVar22), 0, 1, 1, 0);
				}
			}
			vVar25 = { func_325(vVar7, vVar8) };
			if ((!func_234() && !func_243()) && !func_60())
			{
				if (Local_85[0] > 0)
				{
					fVar26 = -(Local_85.f_52 / (127f / IntToFloat(Local_85[0])));
					fVar27 = (8f / (127f / IntToFloat(Local_85[0])));
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, vVar25 * Vector(fVar26, fVar26, fVar26), 0, 1, 1, 0);
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, 0f, 0f, fVar27, 0, 1, 1, 0);
				}
				else if (Local_85[0] < 0)
				{
					fVar28 = -(Local_85.f_52 / (127f / IntToFloat(Local_85[0])));
					fVar29 = (8f / (127f / IntToFloat(Local_85[0])));
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, vVar25 * Vector(fVar28, fVar28, fVar28), 0, 1, 1, 0);
					unk_0xEF3C30F70D2ED135(unk_0x09AD4CE7DA179533(Local_85.f_79), 0, 0f, 0f, -fVar29, 0, 1, 1, 0);
				}
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

float func_331()
{
	if (func_9() || func_29())
	{
		return 40f;
	}
	else if (func_17())
	{
		return 30f;
	}
	else if (func_142())
	{
		return 2.5f;
	}
	return 6.4f;
}

int func_332()
{
	if (func_243())
	{
		return 0;
	}
	if (func_234() && !func_233())
	{
		return 0;
	}
	return 1;
}

bool func_333()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 2);
}

void func_334(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 21))
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 21);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 21))
	{
		unk_0x0674E58A79778E99(&(Local_85.f_5), 21);
	}
}

void func_335(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 22))
		{
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 22);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 22))
	{
		unk_0x0674E58A79778E99(&(Local_85.f_5), 22);
	}
}

void func_336()
{
	float fVar0;
	float fVar1;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_85.f_79), 0))
		{
			if ((func_9() || func_29()) || func_27())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_85.f_70;
				fVar1 = Local_85.f_70.f_1;
			}
			unk_0x6857CFBD47C253B6(fVar0, fVar1);
			unk_0xA464CD2441CD9CE2(fVar0, fVar1, 0);
			if (!unk_0x31609A585163CBAC(Global_19C087.f_18) && !func_27())
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 8))
				{
					unk_0xB243B37593BB6C38();
				}
				unk_0x6476077988E40DA0();
			}
		}
	}
}

void func_337()
{
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_28) && Local_85.f_28 == 4294967295)
		{
			Local_85.f_28 = unk_0xD68EA767274B7444();
			unk_0x4D7F4CC43D4D0DE3(Local_85.f_28, "HUD_Loop", Local_85.f_77, true);
		}
	}
}

void func_338()
{
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_1E))
		{
			Local_85.f_1E = unk_0xD68EA767274B7444();
			unk_0xCEAA091B490F8407(Local_85.f_1E, "Flight_Loop", unk_0x09AD4CE7DA179533(Local_85.f_79), Local_85.f_77, false, 0);
			unk_0x6F6BA3FE885E6C91(Local_85.f_1E, "DroneRotationalSpeed", Local_85.f_5C);
		}
		else
		{
			unk_0x6F6BA3FE885E6C91(Local_85.f_1E, "DroneRotationalSpeed", Local_85.f_5C);
		}
		if (unk_0x8AA6DC470ABA63A2(Local_85.f_27))
		{
			unk_0x43A06902454A1172(Local_85.f_27);
			Local_85.f_27 = 4294967295;
		}
	}
}

void func_339()
{
	if (func_15(unk_0xD803B885F5E47A62(), 1, 1))
	{
		unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 450, true);
	}
}

void func_340()
{
	int iVar0;
	
	if (func_9())
	{
		iVar0 = unk_0x117658E336116132(Local_85.f_2C);
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79) && func_15(iVar0, 1, 1))
		{
			if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iVar0), 0))
			{
				if (func_341(unk_0x09AD4CE7DA179533(Local_85.f_79), unk_0x9539D44F3E4492F6(iVar0), Global_40001.f_60A7, 1))
				{
					if (!func_190(unk_0xD803B885F5E47A62(), iVar0))
					{
						if (unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) != unk_0x08067D4957B73C02(iVar0) || unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62()) == 4294967295)
						{
							unk_0x5D96D8530B3D0904(&(Local_85.f_5), 11);
							return;
						}
					}
				}
			}
		}
		unk_0x0674E58A79778E99(&(Local_85.f_5), 11);
	}
}

bool func_341(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, bParam3), unk_0x68F4C0EC296D3901(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_342()
{
	int iVar0;
	
	if (func_25(func_88()))
	{
		iVar0 = unk_0x117658E336116132(Local_85.f_2C);
		if (unk_0xD803B885F5E47A62() != iVar0)
		{
			if (func_15(iVar0, 1, 1))
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_85.f_7, Local_85.f_2C))
				{
					if (!unk_0xFB75B0F82CA525F6(iVar0))
					{
						unk_0x0674E58A79778E99(&(Local_85.f_7), Local_85.f_2C);
					}
				}
				if (SYSTEM::VDIST2(func_214(iVar0), Local_85.f_70) < 12100f)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_7, Local_85.f_2C) && func_344(iVar0))
					{
						func_343(iVar0, 1);
						unk_0x7F379C0A8EB2F4D0(Local_85.f_79, iVar0, 1);
						unk_0x5D96D8530B3D0904(&(Local_85.f_7), Local_85.f_2C);
					}
				}
				else if (SYSTEM::VDIST2(func_214(iVar0), Local_85.f_70) > 14400f)
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_85.f_7, Local_85.f_2C))
					{
						func_343(iVar0, 0);
						unk_0x7F379C0A8EB2F4D0(Local_85.f_79, iVar0, 0);
						unk_0x0674E58A79778E99(&(Local_85.f_7), Local_85.f_2C);
					}
				}
			}
		}
	}
}

void func_343(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 2582165433;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.z = iParam1;
	iVar1 = func_173(iParam0);
	if (!iVar1 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &vVar0, 3, iVar1);
	}
}

int func_344(int iParam0)
{
	if (func_346(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_48(iParam0))
	{
		return 0;
	}
	if (func_345(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_345(int iParam0)
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

int func_346(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_16())
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

void func_347()
{
	int iVar0;
	
	if ((func_27() || func_9()) || func_29())
	{
		iVar0 = 1000;
		if (func_9() || func_29())
		{
			iVar0 = 7000;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 29))
		{
			if (unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0x9CF8D5C7090408A2(Local_85.f_83))
			{
				if (func_25(func_88()))
				{
					if (func_7(&(Local_85.f_C6), iVar0, 0))
					{
						unk_0xCDCD90141EA7E6EE(func_88(), true, 0);
						unk_0x20641932E5104B25(func_88(), true, 0);
						unk_0x5D96D8530B3D0904(&(Local_85.f_5), 29);
					}
				}
			}
		}
	}
}

void func_348()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_355() || !func_18())
	{
		return;
	}
	switch (Local_85.f_4F)
	{
		case 0:
			if (!unk_0xE5DBF9B6126856CA(Local_85.f_7A))
			{
				iVar0 = 3083764787;
				if (func_161(iVar0))
				{
					if (func_74(unk_0xBF3DE18643F54472(false, 1) + 1, 0, 1))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 4))
						{
							unk_0xE57F9AD44D9539F1(unk_0xBF3DE18643F54472(false, 1) + 1);
							unk_0x5D96D8530B3D0904(&(Local_85.f_6), 4);
						}
						if (unk_0x081C8BC5094A7B76(1))
						{
							if (func_354(&(Local_85.f_7A), iVar0, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 0, 1, 1, 0, 0, 0, 1))
							{
								unk_0x7F379C0A8EB2F4D0(Local_85.f_7A, unk_0xD803B885F5E47A62(), 1);
								iVar1 = unk_0x4A089F2B762B8D33(unk_0x16F2683693E537C9(), 28422);
								unk_0x9F528B1B53FBC5D9(unk_0x09AD4CE7DA179533(Local_85.f_7A), unk_0x16F2683693E537C9(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
								unk_0x71199B01895C6202(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_85.f_4F = 1;
			}
			break;
		
		case 1:
			if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 0 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 2106541073) != 1)
			{
				func_311(0, 0, 0);
				Local_85.f_4F = 2;
			}
			break;
		
		case 2:
			if (func_353(0, "CREATE"))
			{
				func_338();
				if (func_352(Local_85.f_7A))
				{
					if (!unk_0x4FC40AB0ECCE6E18(unk_0x09AD4CE7DA179533(Local_85.f_7A)))
					{
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_85.f_7A), true, 0);
					}
				}
				if (func_352(Local_85.f_79))
				{
					if (!unk_0x4FC40AB0ECCE6E18(unk_0x09AD4CE7DA179533(Local_85.f_79)))
					{
						unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_85.f_79), true, 0);
						unk_0x4A4806F9D471E491(Local_85.f_7D, false, 0);
					}
				}
			}
			if (func_350(1))
			{
				unk_0x9F528B1B53FBC5D9(Local_85.f_7D, unk_0x09AD4CE7DA179533(Local_85.f_79), 4294967295, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				unk_0x4A4806F9D471E491(Local_85.f_7D, false, 0);
				unk_0x295ACC5727E47CB7(unk_0xA5FBBC2F619A4DE2(Local_85.f_79));
				unk_0xD1A00B3C86CDAAC5(unk_0x09AD4CE7DA179533(Local_85.f_79));
				func_250();
				func_108();
				func_219(1);
				func_237();
				func_330();
				func_349();
				if (unk_0x8AA6DC470ABA63A2(Local_85.f_27))
				{
					Local_85.f_27 = unk_0xD68EA767274B7444();
					unk_0x4D7F4CC43D4D0DE3(Local_85.f_27, "HUD_Startup", Local_85.f_77, true);
				}
				unk_0xB3A1B75CB59FEB56(true, false, 0, 1, 1, 0);
				Local_85.f_87 = unk_0x2B6E0A53779D29EA();
				func_356(3);
				func_311(1, 1, 0);
				Local_85.f_4F = 3;
			}
			break;
		
		case 3:
			if (func_350(0))
			{
				iVar2 = unk_0x09AC81E49EA267F7(0, 3);
				switch (iVar2)
				{
					case 0:
						func_311(2, 0, 0);
						Local_85.f_AC = 2;
						break;
					
					case 1:
						func_311(3, 0, 0);
						Local_85.f_AC = 3;
						break;
					
					case 2:
						func_311(4, 0, 0);
						Local_85.f_AC = 4;
						break;
				}
				Local_85.f_4F = 4;
			}
			break;
		
		case 4:
			if (func_350(0))
			{
				func_311(1, 1, 0);
				Local_85.f_4F = 3;
			}
			break;
	}
}

void func_349()
{
	if (func_119() || func_18())
	{
		if (!unk_0x562F77A7F33D2E46("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			unk_0x8BC9595FD2792B5D("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_9())
	{
		if (!unk_0x562F77A7F33D2E46("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			unk_0x8BC9595FD2792B5D("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_29())
	{
		if (!unk_0x562F77A7F33D2E46("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			unk_0x8BC9595FD2792B5D("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_27())
	{
		if (!unk_0x562F77A7F33D2E46("dlc_aw_arena_piloted_missile_scene"))
		{
			unk_0x8BC9595FD2792B5D("dlc_aw_arena_piloted_missile_scene");
		}
	}
}

int func_350(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x16F2683693E537C9();
	if (func_25(iVar0))
	{
		fVar1 = func_351();
		iVar2 = unk_0xF958843510932FF6(Local_85.f_4E);
		if (unk_0x69DF961355195C3C(iVar2) && unk_0xA45992A6CE82FB43(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_313(0);
			}
			return 1;
		}
	}
	return 0;
}

float func_351()
{
	return 0.95f;
}

int func_352(int iParam0)
{
	if (unk_0xE9F78D191AD5EDBA(iParam0))
	{
		unk_0x8D30F6387EE75385(iParam0);
		return unk_0x526BC32A660C89E6(iParam0);
	}
	return 0;
}

int func_353(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = unk_0xF958843510932FF6(Local_85.f_4E);
	if (iVar0 != 4294967295)
	{
		if (unk_0x69DF961355195C3C(iVar0))
		{
			if ((unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), unk_0x12AB0310C2281427(sParam1)) || unk_0xDDCA9A4E51DADA2B(unk_0x09AD4CE7DA179533(Local_85.f_7A), unk_0x12AB0310C2281427(sParam1))) || unk_0xDDCA9A4E51DADA2B(unk_0x09AD4CE7DA179533(Local_85.f_79), unk_0x12AB0310C2281427(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_354(var uParam0, int iParam1, vector3 vParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x081C8BC5094A7B76(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0xB0BE3DFBBB59A620(iParam1, vParam2, bParam4, bParam3, bParam5));
	}
	else
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0x7707E48765093646(iParam1, vParam2, bParam4, bParam3, bParam5));
	}
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(*uParam0), bParam6);
		if (bParam8)
		{
			unk_0x271603AF9C0C7EB3(unk_0x09AD4CE7DA179533(*uParam0), true);
		}
		if (bParam9)
		{
			unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(*uParam0), false, 0);
		}
		if (unk_0xECE0BE5313FD8BDA(unk_0x09AD4CE7DA179533(*uParam0)))
		{
			if (bParam3)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool func_355()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 13);
}

void func_356(int iParam0)
{
	if (Local_85.f_AA != iParam0)
	{
		Local_85.f_AA = iParam0;
	}
}

void func_357(bool bParam0)
{
	if (bParam0)
	{
		if (!func_355())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 13);
		}
	}
	else if (func_355())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 13);
	}
}

void func_358()
{
	vector3 vVar0;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			if (!unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0))
			{
				if (func_368())
				{
					if (func_315())
					{
						func_277(unk_0xD803B885F5E47A62(), 0, 33280, 0);
					}
					else if (!func_27())
					{
						func_277(unk_0xD803B885F5E47A62(), 0, 512, 0);
					}
					if (!func_367())
					{
						unk_0xBBC60FE7D2EB37A6();
					}
					else
					{
						unk_0x1FA2A2B10F3906F7();
					}
					Local_85.f_83 = unk_0x92B061D59B9B540A(26379945, 1);
					unk_0x5818C8D5303DCCF8(Local_85.f_83, Local_85.f_58);
					unk_0xDC3CC6D1845B0567(Local_85.f_83, 0.01f);
					unk_0xC9CCB807979D3AC2(Local_85.f_83, 0.01f);
					unk_0x225CFE81EA219E44();
					if (func_27())
					{
						unk_0x63D6BFA449464BBF("eyeinthesky");
					}
					vVar0 = { 0f, -0.038f, -0.004f };
					if (func_9() || func_29())
					{
						vVar0 = { 0f, -0.099f, -0.02f };
					}
					else if (func_27())
					{
						vVar0 = { 0f, -0.9f, 0f };
					}
					else if (func_17() || func_142())
					{
						vVar0 = { 0f, -0.038f, -0.006f };
					}
					unk_0xC5940439E4EB9A33(Local_85.f_83, unk_0x09AD4CE7DA179533(Local_85.f_79), vVar0, 1);
					if (func_27())
					{
						unk_0x5F3CBA6EB9341C90(Local_85.f_83, func_366() - Vector(0f, -180f, 180f), 2);
					}
					unk_0xA4A0E041958E996F(Local_85.f_70, 75f, 75f);
					unk_0xF49D1BC9EF1C3EF4(Local_85.f_70, unk_0x17D61C69BA58F815(Local_85.f_83, 2));
					unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_85.f_79), false);
					if (!func_315())
					{
						if (unk_0x68367101660E33F0())
						{
							unk_0x486B4ADE317F0689();
						}
					}
					if (!func_18())
					{
						func_349();
						if (unk_0x8AA6DC470ABA63A2(Local_85.f_27))
						{
							Local_85.f_27 = unk_0xD68EA767274B7444();
							unk_0x4D7F4CC43D4D0DE3(Local_85.f_27, "HUD_Startup", Local_85.f_77, true);
						}
						func_250();
						if (func_27())
						{
							func_84();
						}
						else
						{
							func_108();
						}
						func_219(1);
						func_237();
						func_330();
						unk_0xB3A1B75CB59FEB56(true, false, 0, 1, 1, 0);
						Local_85.f_87 = unk_0x2B6E0A53779D29EA();
					}
					func_363(1);
					func_362(1);
					func_360(158);
					unk_0x5D96D8530B3D0904(&(vLocal_83[unk_0xD803B885F5E47A62() /*3*/]), 0);
					if (!func_18())
					{
						func_356(3);
					}
					else
					{
						Local_85.f_73 = { func_214(unk_0xD803B885F5E47A62()) };
						unk_0xE82754C349C7B581(Local_85.f_73, &(Local_85.f_73.f_2), 0, 0);
						Local_85.f_51 = unk_0xD9522BA9E27E1349(unk_0x16F2683693E537C9());
						func_359();
						Local_85.f_73 = { unk_0x8A5E176FF719A014(Local_85.f_73, Local_85.f_51, -0.0695723f, 0.177497f, 0f) };
						func_356(2);
					}
				}
				else if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0, 0);
				}
			}
			else
			{
				if (unk_0x9F4FE516EAACCFC5(Local_85.f_83))
				{
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0))
				{
				}
			}
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
		}
	}
}

void func_359()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
		}
	}
}

void func_360(int iParam0)
{
	int iVar0;
	
	if (Global_40001.f_217B)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_200000[func_361() /*10930*/].f_181E.f_100F[iVar0 /*3*/] == iParam0)
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

int func_361()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_362(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E, 26))
		{
			unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E), 26);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E, 26))
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E), 26);
	}
}

void func_363(bool bParam0)
{
	if (bParam0)
	{
		if (!func_58())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 5);
		}
	}
	else
	{
		if (func_58())
		{
			unk_0x0674E58A79778E99(&Global_19C087, 5);
		}
		func_364(0);
	}
}

void func_364(bool bParam0)
{
	if (bParam0)
	{
		if (!func_365())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 12);
		}
	}
	else if (func_365())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 12);
	}
}

bool func_365()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 12);
}

Vector3 func_366()
{
	return Global_19C087.f_10;
}

bool func_367()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 10);
}

int func_368()
{
	if (func_30() && !func_32())
	{
		return 1;
	}
	if (func_371())
	{
		return 1;
	}
	if (func_370())
	{
		return 1;
	}
	if (func_32() && func_369())
	{
		return 1;
	}
	if (!func_53(unk_0xD803B885F5E47A62(), 0) && !func_273())
	{
		return 1;
	}
	return 0;
}

int func_369()
{
	if (Global_1420C6 != 4294967295 || Global_1420CC != 4294967295)
	{
		if (((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_34())
		{
			return 0;
		}
	}
	return 0;
}

int func_370()
{
	return 0;
}

int func_371()
{
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		return 0;
	}
	if (func_32() || func_372())
	{
		return 0;
	}
	if (func_370())
	{
		return 0;
	}
	return 1;
}

int func_372()
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, 0, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_373()
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	float fVar3;
	
	iVar0 = joaat("bmx");
	if (func_161(Local_85.f_A9) && func_161(iVar0))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 0))
		{
			if (!unk_0xE5DBF9B6126856CA(Local_85.f_79))
			{
				if (!func_315())
				{
					if (func_119())
					{
						if (func_25(func_321()))
						{
							vVar1 = { unk_0x68F4C0EC296D3901(func_321(), true) };
						}
					}
					else
					{
						vVar1 = { Local_85.f_64 };
					}
					if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
					{
						func_277(unk_0xD803B885F5E47A62(), 0, 512, 0);
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 18))
					{
						if (unk_0x9E632F16E887F781(vVar1, 100f, 1))
						{
							unk_0x5D96D8530B3D0904(&(Local_85.f_5), 18);
						}
					}
					else if (unk_0x68367101660E33F0())
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 19))
						{
							if (func_378())
							{
								if (func_375())
								{
									unk_0x5D96D8530B3D0904(&(Local_85.f_5), 19);
								}
							}
							else
							{
								if (!func_240(func_374()))
								{
									Local_85.f_64 = { func_374() };
								}
								unk_0x5D96D8530B3D0904(&(Local_85.f_5), 19);
							}
						}
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 19) || func_315())
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 20))
					{
						Local_85.f_7D = unk_0x122AAB0B1D6F55AD(iVar0, Local_85.f_64, 0f, false, false, false);
						unk_0xE8832A9E16A57A1F(Local_85.f_7D, true, 1);
						unk_0x08841CDB215AE18F(Local_85.f_7D, Local_85.f_64, 0, 0, 1);
						unk_0xE121AE1BBF90E186(Local_85.f_7D, true);
						unk_0xCDCD90141EA7E6EE(Local_85.f_7D, false, 0);
						unk_0x4A4806F9D471E491(Local_85.f_7D, false, 0);
						unk_0x5D96D8530B3D0904(&(Local_85.f_5), 20);
					}
					else if (func_74(unk_0xBF3DE18643F54472(false, 1) + 1, 0, 1))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 30))
						{
							unk_0xE57F9AD44D9539F1(unk_0xBF3DE18643F54472(false, 1) + 1);
							unk_0x5D96D8530B3D0904(&(Local_85.f_5), 30);
						}
						if (unk_0x081C8BC5094A7B76(1))
						{
							bVar2 = false;
							if (func_18())
							{
								Local_85.f_73 = { func_214(unk_0xD803B885F5E47A62()) };
								unk_0xE82754C349C7B581(Local_85.f_73, &(Local_85.f_73.f_2), 0, 0);
								Local_85.f_64 = { unk_0x1BB04F10296A1C5E(Local_85.f_78, "ENTER", Local_85.f_73, unk_0x835730A2D89F6093(unk_0x16F2683693E537C9(), 2), 0, 2) };
								bVar2 = true;
							}
							if (func_354(&(Local_85.f_79), Local_85.f_A9, Local_85.f_64, 0, 1, 1, 1, 1, 0, bVar2))
							{
								Global_19C087.f_14 = unk_0x09AD4CE7DA179533(Local_85.f_79);
								if (func_119())
								{
									if (func_25(func_321()))
									{
										unk_0xC023D1C4BF532815(func_88(), unk_0x835730A2D89F6093(func_321(), 2), 2, 1);
										fVar3 = (unk_0xD9522BA9E27E1349(func_321()) + 180f);
									}
								}
								Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_199 = { Local_85.f_64 };
								Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_19C = fVar3;
								vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_2 = Local_85.f_79;
								unk_0x7F379C0A8EB2F4D0(Local_85.f_79, unk_0xD803B885F5E47A62(), 1);
								unk_0x5828F0011EBBBF85(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), 1);
								unk_0xE8832A9E16A57A1F(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), true, 1);
								unk_0x08841CDB215AE18F(func_88(), Local_85.f_64, 0, 0, 1);
								unk_0xD8F6A53F4799FAFE(func_88(), fVar3);
								unk_0x223F9D0E8DE69CDB(func_88(), 1);
								if (!func_240(func_366()))
								{
									unk_0xC023D1C4BF532815(func_88(), func_366(), 2, 1);
								}
								if (func_27())
								{
									unk_0xCDCD90141EA7E6EE(func_88(), false, 0);
								}
								unk_0x203472D20F76FBFF(Local_85.f_79, 1);
								if (func_147(unk_0xD803B885F5E47A62()))
								{
									unk_0xD458AC1C1D29C3B4(func_88(), Global_40001.f_5E54 * 5, 0);
								}
								else
								{
									unk_0xD458AC1C1D29C3B4(func_88(), Global_40001.f_5E54, 0);
								}
								unk_0xE121AE1BBF90E186(unk_0x09AD4CE7DA179533(Local_85.f_79), true);
								unk_0x866EE3B81CEF363A(Local_85.f_79, false);
								unk_0xD0C5FAC38659B26F(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), 1);
								unk_0xA4A0E041958E996F(Local_85.f_64, 100f, 200f);
								unk_0xF49D1BC9EF1C3EF4(unk_0x68F4C0EC296D3901(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), true), unk_0x835730A2D89F6093(unk_0xA5FBBC2F619A4DE2(Local_85.f_79), 2));
								unk_0x71199B01895C6202(Local_85.f_A9);
								unk_0x71199B01895C6202(iVar0);
							}
						}
					}
				}
			}
			else
			{
				unk_0x08543B8F6DBE0B08(unk_0x09AD4CE7DA179533(Local_85.f_79), 0);
				if (func_25(Local_85.f_7D) && func_25(unk_0xA5FBBC2F619A4DE2(Local_85.f_79)))
				{
					unk_0x9F528B1B53FBC5D9(Local_85.f_7D, unk_0x09AD4CE7DA179533(Local_85.f_79), 4294967295, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 0);
				}
			}
		}
	}
}

Vector3 func_374()
{
	return Global_19C087.f_D;
}

int func_375()
{
	if (Local_85.f_F == 0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 14))
		{
			if ((!func_147(unk_0xD803B885F5E47A62()) && func_119()) && func_25(func_321()))
			{
				Local_85.f_64 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(func_321(), true), unk_0xD9522BA9E27E1349(func_321()), -0.7f, 1.6f, 4f) };
				unk_0x5D96D8530B3D0904(&(Local_85.f_5), 14);
			}
			else
			{
				if (func_119() && func_25(func_321()))
				{
					Local_85.f_64 = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(func_321(), true), unk_0xD9522BA9E27E1349(func_321()), -0.7f, 1.6f, 4f) };
				}
				Local_85.f_64 = unk_0x79833B02DBD2A244((Local_85.f_64 - 1.5f), (Local_85.f_64 + 1.5f));
				Local_85.f_64.f_1 = unk_0x79833B02DBD2A244((Local_85.f_64.f_1 - 1.5f), (Local_85.f_64.f_1 + 1.5f));
				Local_85.f_64.f_2 = unk_0x79833B02DBD2A244((Local_85.f_64.f_2 + 0.5f), (Local_85.f_64.f_2 + 1.5f));
				if (!func_377(Local_85.f_64))
				{
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 14);
				}
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 15))
		{
			Local_85.f_64 = unk_0x79833B02DBD2A244((Local_85.f_64 - 1.5f), (Local_85.f_64 + 1.5f));
			Local_85.f_64.f_1 = unk_0x79833B02DBD2A244((Local_85.f_64.f_1 - 1.5f), (Local_85.f_64.f_1 + 1.5f));
			Local_85.f_64.f_2 = unk_0x79833B02DBD2A244((Local_85.f_64.f_2 + 0.5f), (Local_85.f_64.f_2 + 1.5f));
			if (!func_377(Local_85.f_64))
			{
				unk_0x0674E58A79778E99(&(Local_85.f_5), 15);
			}
		}
		func_376(Local_85.f_64);
	}
	else if (Local_85.f_F == 1 && !func_377(Local_85.f_64))
	{
		return 1;
	}
	else
	{
		Local_85.f_F = 0;
		unk_0x5D96D8530B3D0904(&(Local_85.f_5), 15);
	}
	return 0;
}

void func_376(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	var uVar5;
	int iVar6;
	
	switch (Local_85.f_E)
	{
		case 0:
			if (func_119())
			{
				if (func_25(func_321()))
				{
					iVar0 = func_321();
				}
			}
			if (func_9() || func_29())
			{
				fVar1 = func_196(Local_85.f_A9);
			}
			else
			{
				fVar1 = (func_196(Local_85.f_A9) * 11f);
			}
			Local_85.f_82 = unk_0x6D4C9F7CF124AE37(vParam0, vParam0, fVar1, 511, iVar0, 4);
			if (Local_85.f_82 != 0)
			{
				Local_85.f_E = 1;
			}
			break;
		
		case 1:
			iVar6 = unk_0x1EC301670B54C6DE(Local_85.f_82, &iVar2, &vVar4, &uVar3, &uVar5);
			if (iVar6 == 2)
			{
				if (iVar2 == 0)
				{
					Local_85.f_F = 1;
					vVar4 = { 0f, 0f, 0f };
				}
				else
				{
					Local_85.f_F = 2;
					Local_85.f_82 = 0;
					Local_85.f_E = 0;
				}
			}
			else if (iVar6 == 0)
			{
				Local_85.f_E = 0;
			}
			break;
	}
}

int func_377(vector3 vParam0)
{
	if (unk_0x0399732A9EBC368E(vParam0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, 0, true))
	{
		return 1;
	}
	return 0;
}

int func_378()
{
	if (func_119())
	{
		return 1;
	}
	if (func_17() && !func_18())
	{
		return 1;
	}
	return 0;
}

int func_379()
{
	if (func_273())
	{
		return Global_199459.f_1DB == 0;
	}
	return 0;
}

void func_380()
{
	if (func_15(unk_0xD803B885F5E47A62(), 1, 1))
	{
		Local_85.f_67 = { func_241(&Local_85) };
		if (!func_240(func_374()))
		{
			Local_85.f_64 = { func_374() };
		}
		else
		{
			Local_85.f_64 = { func_214(unk_0xD803B885F5E47A62()) };
			Local_85.f_64 = { Local_85.f_64, Local_85.f_64.f_1, (Local_85.f_64.f_2 + 1.5f) };
		}
		if (func_53(unk_0xD803B885F5E47A62(), 0))
		{
			func_424(1);
		}
		if (func_53(unk_0xD803B885F5E47A62(), 0))
		{
			func_420();
		}
		else if (((func_418(unk_0xD803B885F5E47A62()) == 2 || func_418(unk_0xD803B885F5E47A62()) == 1) && !unk_0xEAE0D21A50E6C7F4(Global_19DEED, 6)) && !unk_0xEAE0D21A50E6C7F4(Global_19DEEE, 0))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_265B3E, 0))
			{
				func_417(1);
				func_409(0, 0);
				func_408();
				func_364(1);
				func_356(1);
			}
		}
		else if ((func_31() && func_404()) && !unk_0xEAE0D21A50E6C7F4(Global_19DEED, 6))
		{
			func_382();
		}
		else if (unk_0xEAE0D21A50E6C7F4(Global_19DEED, 6) && unk_0xEAE0D21A50E6C7F4(Global_19DEEE, 0))
		{
			func_409(0, 0);
			func_364(1);
			func_356(1);
		}
		else if (func_18() && !func_381())
		{
			unk_0xA37A90C62806D848(1);
			func_115("PIM_DRONAMOS", 4294967295);
			func_277(unk_0xD803B885F5E47A62(), 1, 0, 0);
			func_356(6);
		}
		else if (func_240(Local_85.f_61))
		{
			Local_85.f_76 = 0;
			func_364(1);
			func_356(1);
		}
	}
}

bool func_381()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 23);
}

void func_382()
{
	vector3 vVar0;
	int iVar1;
	
	if (!func_397())
	{
		if ((((((func_396() || func_395()) && !Global_195C36) && func_404()) && !unk_0xEAE0D21A50E6C7F4(Global_265ACE, 6)) && Global_140818) && !(func_396() && Global_40001.f_64FE))
		{
			if ((((((unk_0xBFC0798A6E3417F9(2, 224) || unk_0xD245978525608929(2, 224)) && !unk_0xBFC0798A6E3417F9(2, 223)) && !unk_0xD245978525608929(2, 223)) && !unk_0xBFC0798A6E3417F9(2, 235)) && !unk_0xD245978525608929(2, 235)) && !unk_0x7FEE810EE9E768EB(2, 19))
			{
				if (unk_0x7A7BDE279347E517(Global_40001.f_6500, false, false, 1, 4294967295, 0) || unk_0xEAE0D21A50E6C7F4(Global_265ACE, 2))
				{
					unk_0x5D96D8530B3D0904(&Global_265ACE, 0);
					func_409(0, 0);
					func_364(1);
					func_356(1);
					func_391();
					func_389(73, 4294967295);
					func_386();
					vVar0 = { func_385() };
					func_383(vVar0, 0f, 0f, 0f);
					if (func_396())
					{
						unk_0xCEAA091B490F8407(iVar1, "Select_Spec_Drone", unk_0x16F2683693E537C9(), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Global_265ACE, 4))
				{
					unk_0x5D96D8530B3D0904(&Global_265ACE, 4);
				}
			}
		}
	}
}

void func_383(vector3 vParam0, vector3 vParam1)
{
	if (!func_384(Global_19C087.f_D, vParam0, 0))
	{
		Global_19C087.f_D = { vParam0 };
		vParam1 = { vParam1 + Vector(0f, -180f, 180f) };
		Global_19C087.f_10 = { vParam1 };
	}
}

bool func_384(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_385()
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	vVar3 = { 2800f, -3800.2f, 170f };
	if ((Global_440000.f_372EA.f_1 == 3 || Global_440000.f_372EA.f_1 == 3) || Global_440000.f_372EA.f_1 == 3)
	{
		vVar3.y = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(unk_0x57270EE11514DC67()));
	fVar2 = (fVar2 * IntToFloat((unk_0x57270EE11514DC67() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return unk_0x8A5E176FF719A014(vVar3, fVar0, fVar1, fVar2, 0f);
}

void func_386()
{
	int iVar0;
	
	iVar0 = func_387(73, 4294967295);
	if (iVar0 >= 50)
	{
		unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_153.f_3), 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_153.f_3), 13);
	}
}

int func_387(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_388(iParam1)];
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_388(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_96();
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

void func_389(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_387(iParam0, func_388(iParam1));
	iVar0++;
	func_390(iParam0, iVar0, iParam1);
}

void func_390(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2772C0[iParam0 /*3*/][func_388(uParam2)];
	unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
}

void func_391()
{
	func_392(1, 7982);
}

void func_392(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_394(iParam1, 4294967295, 0);
	func_393(iParam1, (iVar0 + iParam0), 4294967295, 1, 0);
}

void func_393(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_388(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_394(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_388(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 4294967295))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_395()
{
	return Global_258C24;
}

int func_396()
{
	if (Global_258C23 >= 0 && Global_258C23 < 10)
	{
		return 1;
	}
	return 0;
}

int func_397()
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, 0, true, 0))
	{
		return 1;
	}
	if (func_403())
	{
		return 1;
	}
	if (func_402())
	{
		return 1;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 1;
	}
	if (func_273())
	{
		return 1;
	}
	if (func_53(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_37(Global_18446E))
		{
			return 1;
		}
	}
	if (func_119())
	{
		if (func_401())
		{
			if (func_400())
			{
				return 1;
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_179(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	if (func_59(0))
	{
		return 1;
	}
	if (func_288())
	{
		return 1;
	}
	if (func_119())
	{
		if (func_30())
		{
			if (func_15(unk_0xD803B885F5E47A62(), 1, 1))
			{
				if (func_136(unk_0x16F2683693E537C9(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_399())
				{
					return 1;
				}
			}
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1) || func_398(unk_0x16F2683693E537C9(), 1))
			{
				return 1;
			}
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (Global_40001.f_5E5E)
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 27))
	{
		return 1;
	}
	if (func_53(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_25(func_321()))
		{
			if ((unk_0x3D1053F9EB43B7AD(func_321(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, true, 0) || unk_0x3D1053F9EB43B7AD(func_321(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, 0, true, 0)) || unk_0x3D1053F9EB43B7AD(func_321(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, 0, true, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1420CA)
	{
		return 1;
	}
	if (Global_265F63)
	{
		return 1;
	}
	if (Global_265F61)
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0, int iParam1)
{
	if (iParam1 && (!unk_0xC844350D5D58C99A(iParam0) || unk_0x437347B10A200C4B(iParam0, 0)))
	{
		return 0;
	}
	if (unk_0x8B8AFAD7ED240B7F(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x88A2866B31BF612A(iParam0) != 0 || unk_0x8B157DA177FBCF50(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_399()
{
	if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, 0, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_400()
{
	if (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8 != func_16() && unk_0xD803B885F5E47A62() != func_16())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8 /*876*/].f_112.f_14E, 20);
	}
	return 0;
}

int func_401()
{
	if (func_147(unk_0xD803B885F5E47A62()) && Global_19C087.f_5 == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_402()
{
	if (Global_2537E2.f_484.f_5 == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool func_403()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

int func_404()
{
	int iVar0;
	int iVar1;
	
	if (func_407() && !func_406())
	{
		return 1;
	}
	iVar0 = unk_0x08067D4957B73C02(unk_0xD803B885F5E47A62());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_EC947.f_E[iVar0];
	if (iVar1 < 17)
	{
		if ((((unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iVar0 /*15700*/].f_1983[iVar1], 23) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iVar0 /*15700*/].f_1983[iVar1], 24)) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iVar0 /*15700*/].f_1983[iVar1], 25)) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iVar0 /*15700*/].f_1983[iVar1], 26)) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_20, 16))
		{
			return 1;
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_440000.f_20, 16))
	{
		return 1;
	}
	else if (func_395() || func_405(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

bool func_405(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_27.f_12, 14);
}

int func_406()
{
	if (Global_440000.f_302A6 == 1 || Global_440000.f_302A6 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_407()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 12);
}

void func_408()
{
	unk_0x0674E58A79778E99(&Global_265B3E, 0);
}

void func_409(bool bParam0, bool bParam1)
{
	int iVar0;
	
	Local_85.f_52 = Global_40001.f_5E57;
	if (func_29() || func_9())
	{
		Local_85.f_52 = (Local_85.f_52 * 4.5f);
	}
	else if (func_27())
	{
		Local_85.f_52 = 100f;
	}
	else if (func_17())
	{
		Local_85.f_52 = 100f;
	}
	else if (func_142())
	{
		Local_85.f_52 = 10f;
	}
	Local_85.f_5D = 40f;
	if (func_17())
	{
		Local_85.f_5D = 70f;
	}
	else if (func_142())
	{
		Local_85.f_5D = 35f;
	}
	if (func_29())
	{
		Local_85.f_A9 = 3906753717;
	}
	else if (func_9())
	{
		Local_85.f_A9 = 442185650;
	}
	else if (func_27())
	{
		Local_85.f_A9 = 1270560417;
		func_416(1);
	}
	else if (func_17())
	{
		if (!func_18())
		{
			iVar0 = func_415(unk_0xD803B885F5E47A62());
			switch (iVar0)
			{
				case 37:
					Local_85.f_A9 = 2970024625;
					break;
				
				case 38:
					Local_85.f_A9 = 691432262;
					break;
				
				case 39:
					Local_85.f_A9 = 2528560657;
					break;
				
				case 40:
					Local_85.f_A9 = 2221416820;
					break;
			}
		}
		else
		{
			Local_85.f_A9 = 430841677;
		}
	}
	else if (func_142())
	{
		Local_85.f_A9 = 430841677;
	}
	else
	{
		Local_85.f_A9 = 2390443943;
	}
	if (bParam1)
	{
		Local_85.f_64 = { Local_85.f_6A };
	}
	Global_19C087.f_1 = 1500;
	func_414();
	func_413(1);
	func_412(1);
	if (func_29() || func_27())
	{
		func_411(1);
	}
	else if (func_9())
	{
		func_411(0);
	}
	if (func_18())
	{
		Local_85.f_78 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		unk_0x3F423BF5B8125A50(Local_85.f_78);
	}
	if (func_9())
	{
		unk_0x1EEAD36B05B81FC1("scr_xs_dr");
	}
	if (func_18())
	{
		func_410(Global_40001.f_6D60);
	}
	else if (func_17() && !func_18())
	{
		func_410(Global_40001.f_6D61);
	}
	else if (!func_119() && !func_315())
	{
		func_410(200f);
	}
	func_68(Global_180858);
	if (bParam0)
	{
	}
}

void func_410(float fParam0)
{
	if (Global_19C087.f_8 != fParam0)
	{
		Global_19C087.f_8 = fParam0;
	}
}

void func_411(bool bParam0)
{
	if (bParam0)
	{
		if (!func_175())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 8);
		}
	}
	else if (func_175())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 8);
	}
}

void func_412(bool bParam0)
{
	if (bParam0)
	{
		if (!func_333())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 2);
		}
	}
	else if (func_333())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 2);
	}
}

void func_413(bool bParam0)
{
	if (bParam0)
	{
		if (!func_229())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 4);
		}
	}
	else if (func_229())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 4);
	}
}

void func_414()
{
	if (!Local_85.f_76)
	{
		Local_85.f_11 = 100;
	}
	if (func_142())
	{
		Local_85.f_17 = 100;
	}
	Local_85.f_12 = 0;
	Local_85.f_13 = 100;
	Local_85.f_58 = 90f;
	Local_85.f_5B = 90f;
	if (!func_27())
	{
		Local_85.f_84 = unk_0xB01F55A0FD1CFD49("DRONE_CAM");
	}
	else
	{
		Local_85.f_84 = func_89();
	}
	if (func_29())
	{
		Local_85.f_77 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_9())
	{
		Local_85.f_77 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_27())
	{
		Local_85.f_77 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else
	{
		Local_85.f_77 = "DLC_BTL_Drone_Sounds";
	}
}

int func_415(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_25033E[iParam0 /*421*/].f_1A0.f_1;
	}
	return 4294967295;
}

void func_416(bool bParam0)
{
	if (bParam0)
	{
		if (!func_184())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 15);
		}
	}
	else if (func_184())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 15);
	}
}

void func_417(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 4))
		{
			Global_19C087.f_2 = 0;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 4);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 4))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 4);
	}
}

int func_418(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62() && !func_419())
	{
		return Global_265ADF.f_1;
	}
	return Global_24E4E9.f_535[iParam0 /*3*/].f_1;
}

int func_419()
{
	if (((Global_265AE2 != 0 && Global_265AE2 == Global_265AE3) && Global_265AD7 != 3) && Global_265AD7 != 1)
	{
		return 0;
	}
	return 1;
}

void func_420()
{
	if (!func_397())
	{
		if (func_32())
		{
			if (func_371())
			{
				if (!unk_0xFEBC1E4EC9E001F0() && !unk_0x8FA469D9C5F1A01F())
				{
					func_423("DRONE_TRIG");
				}
			}
			else if (func_422("DRONE_TRIG"))
			{
				unk_0xA37A90C62806D848(1);
			}
			if (func_32() || func_370())
			{
				if (unk_0xB9132A06AE472728(2, 176) || unk_0x9A01369A10646AFE(2, 176))
				{
					func_364(1);
					func_356(1);
					unk_0xA37A90C62806D848(1);
				}
			}
			else if (func_422("DRONE_TRIG"))
			{
				if ((unk_0xB9132A06AE472728(2, 51) || unk_0x9A01369A10646AFE(2, 51)) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					Local_85.f_76 = 0;
					func_364(1);
					func_356(1);
					unk_0xA37A90C62806D848(1);
				}
			}
		}
		else if ((func_30() && !unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, true, 0)) && func_371())
		{
			if (!unk_0xFEBC1E4EC9E001F0() && !unk_0x8FA469D9C5F1A01F())
			{
				func_423("DRONE_TRIG");
			}
			if (func_422("DRONE_TRIG"))
			{
				if (unk_0xB9132A06AE472728(2, 51) || unk_0x9A01369A10646AFE(2, 51))
				{
					Local_85.f_76 = 0;
					func_364(1);
					func_356(1);
					unk_0xA37A90C62806D848(1);
				}
			}
		}
		else if (func_422("DRONE_TRIG"))
		{
			unk_0xA37A90C62806D848(1);
		}
		if (func_421() || func_32())
		{
			if (func_422("DRONE_TRIG"))
			{
				unk_0xA37A90C62806D848(1);
			}
		}
	}
	else if (func_422("DRONE_TRIG"))
	{
		unk_0xA37A90C62806D848(1);
	}
}

int func_421()
{
	if ((((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_51(unk_0x16F2683693E537C9(), 2106541073))
	{
		return 1;
	}
	if ((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

bool func_422(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_423(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 1, true, 4294967295);
}

void func_424(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 1))
		{
			Global_19C087.f_2 = 0;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 1);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 1))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 1);
	}
}

void func_425()
{
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (!unk_0x437347B10A200C4B(unk_0xB177666FAB6F4417(Local_85.f_79), 0))
		{
			Local_85.f_70 = { unk_0x68F4C0EC296D3901(unk_0xB177666FAB6F4417(Local_85.f_79), true) };
			Local_85.f_57 = unk_0xD9522BA9E27E1349(unk_0xB177666FAB6F4417(Local_85.f_79));
			if (!func_10(&(Local_85.f_BE)))
			{
				func_8(&(Local_85.f_BE), 0, 0);
			}
			else if (func_7(&(Local_85.f_BE), 1000, 0))
			{
				if (!func_384(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_199, Local_85.f_70, 0))
				{
					Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_199 = { Local_85.f_70 };
				}
				if (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_19C != unk_0xD9522BA9E27E1349(unk_0xB177666FAB6F4417(Local_85.f_79)))
				{
					Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_19C = unk_0xD9522BA9E27E1349(unk_0xB177666FAB6F4417(Local_85.f_79));
				}
				func_6(&(Local_85.f_BE));
			}
		}
	}
	if (func_25(Local_85.f_7D))
	{
		if (unk_0x4FC40AB0ECCE6E18(Local_85.f_7D))
		{
			unk_0x4A4806F9D471E491(Local_85.f_7D, false, 0);
		}
	}
	if (func_25(Local_85.f_7B))
	{
		if (unk_0x4FC40AB0ECCE6E18(Local_85.f_7B))
		{
			unk_0x4A4806F9D471E491(Local_85.f_7B, false, 0);
		}
	}
}

void func_426()
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
				func_427(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_427(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		if (unk_0x218F818E64020C17(1, iParam0, &Var0, 13))
		{
			if (unk_0xC844350D5D58C99A(Var0) && unk_0xA5FBBC2F619A4DE2(Local_85.f_79) == Var0)
			{
				if (unk_0xC844350D5D58C99A(Var0.f_1))
				{
					if (unk_0xEC560E589DF8370E(Var0.f_1))
					{
						if (unk_0x34BFC6F0CB887BC2(unk_0x940C1429253D3B1B(Var0.f_1)) && unk_0x16F2683693E537C9() != unk_0x940C1429253D3B1B(Var0.f_1))
						{
							Local_85.f_19 = 2;
						}
					}
				}
			}
		}
	}
}

void func_428()
{
	if (func_434(3))
	{
		if (((func_119() || func_9()) || func_29()) || (func_17() && !func_18()))
		{
			if (!unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
			{
				func_277(unk_0xD803B885F5E47A62(), 1, 0, 0);
			}
		}
		unk_0x38C3A68D7861DCFD(0, 37, 0);
		if (!func_27())
		{
			func_429();
			unk_0xEAB026E686C0D991(0, 19, 1);
			unk_0xEAB026E686C0D991(0, 166, 1);
			unk_0xEAB026E686C0D991(0, 167, 1);
			unk_0xEAB026E686C0D991(0, 168, 1);
			unk_0xEAB026E686C0D991(0, 169, 1);
			unk_0xEAB026E686C0D991(2, 218, 1);
			unk_0xEAB026E686C0D991(2, 219, 1);
			unk_0xEAB026E686C0D991(2, 220, 1);
			unk_0xEAB026E686C0D991(2, 221, 1);
			unk_0xEAB026E686C0D991(2, 205, 1);
			unk_0xEAB026E686C0D991(2, 206, 1);
			unk_0xEAB026E686C0D991(2, 207, 1);
			unk_0xEAB026E686C0D991(2, 208, 1);
			unk_0xEAB026E686C0D991(2, 209, 1);
			unk_0xEAB026E686C0D991(2, 210, 1);
			unk_0xEAB026E686C0D991(2, 202, 1);
			unk_0xEAB026E686C0D991(2, 51, 1);
			unk_0xEAB026E686C0D991(2, 190, 1);
			unk_0xEAB026E686C0D991(2, 189, 1);
			unk_0xEAB026E686C0D991(2, 188, 1);
			unk_0xEAB026E686C0D991(2, 187, 1);
			unk_0xEAB026E686C0D991(2, 201, 1);
			unk_0xEAB026E686C0D991(2, 199, 1);
			unk_0xEAB026E686C0D991(2, 200, 1);
			if (unk_0x91E3F625EF57450D(0))
			{
				unk_0xEAB026E686C0D991(0, 238, 1);
				unk_0xEAB026E686C0D991(0, 237, 1);
				unk_0xEAB026E686C0D991(2, 235, 1);
				unk_0xEAB026E686C0D991(2, 234, 1);
				unk_0xEAB026E686C0D991(2, 1, 1);
				unk_0xEAB026E686C0D991(2, 174, 1);
				unk_0xEAB026E686C0D991(2, 175, 1);
				unk_0xEAB026E686C0D991(0, 174, 1);
				unk_0xEAB026E686C0D991(0, 175, 1);
				unk_0xEAB026E686C0D991(0, 245, 1);
				unk_0xEAB026E686C0D991(0, 246, 1);
				unk_0xEAB026E686C0D991(0, 247, 1);
				unk_0xEAB026E686C0D991(0, 248, 1);
			}
			if (unk_0x798A3F1296751F46())
			{
				unk_0xEAB026E686C0D991(0, 201, 1);
				unk_0xEAB026E686C0D991(0, 202, 1);
				unk_0xEAB026E686C0D991(0, 188, 1);
				unk_0xEAB026E686C0D991(0, 187, 1);
				unk_0xEAB026E686C0D991(0, 189, 1);
				unk_0xEAB026E686C0D991(2, 195, 1);
				unk_0xEAB026E686C0D991(2, 196, 1);
				unk_0xEAB026E686C0D991(2, 198, 1);
				unk_0xEAB026E686C0D991(2, 197, 1);
				unk_0xEAB026E686C0D991(2, 217, 1);
			}
		}
	}
}

void func_429()
{
	func_430();
}

void func_430()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 361)
	{
		unk_0x38C3A68D7861DCFD(0, iVar0, 1);
		iVar0++;
	}
}

void func_431()
{
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 28))
	{
		if (!func_10(&(Local_85.f_C0)))
		{
			func_8(&(Local_85.f_C0), 0, 0);
		}
		else if (func_7(&(Local_85.f_C0), 5000, 0))
		{
			unk_0x0674E58A79778E99(&(Local_85.f_5), 28);
			func_6(&(Local_85.f_C0));
		}
	}
}

void func_432()
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_85.f_5, 27))
	{
		if (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8 != func_16())
		{
			iVar0 = Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8;
		}
		else if (Global_18446E != func_16())
		{
			iVar0 = Global_18446E;
		}
		else if (func_259(unk_0xD803B885F5E47A62(), 0))
		{
			if (func_149() != func_16())
			{
				iVar0 = func_149();
			}
		}
		if (iVar0 != func_16())
		{
			if (unk_0x40B8C182D63932FC(iVar0))
			{
				if (unk_0x8CD06866876216F2())
				{
					func_160(iVar0, 0);
					unk_0x0674E58A79778E99(&(Local_85.f_5), 27);
				}
			}
		}
	}
}

void func_433()
{
	vector3 vVar0;
	
	if (func_119())
	{
		if (func_434(1))
		{
			if (func_25(func_321()))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(func_321(), true) };
				unk_0xA4A0E041958E996F(vVar0, 200f, 200f);
				unk_0x9303BDE130B7DFE2(Local_85.f_70, 60f, 30);
			}
		}
	}
	if (func_434(1) || func_434(3))
	{
		if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
		{
			if (unk_0x9F4FE516EAACCFC5(Local_85.f_83) && unk_0x9CF8D5C7090408A2(Local_85.f_83))
			{
				if (func_434(3))
				{
					unk_0xA4A0E041958E996F(Local_85.f_70, 60f, 200f);
					unk_0x71AEB1E48B81572C();
					unk_0xF49D1BC9EF1C3EF4(Local_85.f_70, unk_0x56E9E0FD5ACCD35D(unk_0x09AD4CE7DA179533(Local_85.f_79)));
					if ((unk_0xF4CCC8CB6DE7F1AE() % 120) == 0)
					{
						unk_0x9303BDE130B7DFE2(Local_85.f_70, 60f, 30);
					}
				}
			}
		}
	}
}

bool func_434(int iParam0)
{
	return Local_85.f_AA == iParam0;
}

int func_435()
{
	if (func_439())
	{
		return 1;
	}
	if (!func_285())
	{
		return 1;
	}
	if (unk_0xD803B885F5E47A62() != func_16())
	{
		if (func_248(unk_0xD803B885F5E47A62()) && !func_247())
		{
			return 1;
		}
	}
	if (func_181(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	if (func_345(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	if (func_438())
	{
		if (func_437())
		{
			return 1;
		}
		if (func_346(unk_0xD803B885F5E47A62(), 1, 1))
		{
			return 1;
		}
		if (func_31())
		{
			return 1;
		}
		if (!func_436())
		{
			if (func_7(&(Local_85.f_D0), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_6(&(Local_85.f_D0));
		}
	}
	return 0;
}

int func_436()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0x0DC0B2DBBD52B0C0() - 1))
	{
		if (unk_0xEAE0D21A50E6C7F4(vLocal_83[iVar0 /*3*/], 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_437()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 22);
}

bool func_438()
{
	return unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 3);
}

bool func_439()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0);
}

int func_440()
{
	var uVar0;
	
	func_448(&uVar0);
	if (Global_140856 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_447())
	{
		return 1;
	}
	if (Global_2594CA)
	{
		return 1;
	}
	if (func_446())
	{
		return 1;
	}
	if (func_445(159))
	{
		if (!func_444())
		{
			return 1;
		}
	}
	if (func_445(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_441() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_441()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_441()
{
	switch (func_443())
	{
		case 0:
			return func_442();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_442()
{
	switch (Global_259530)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_443()
{
	return Global_7830;
}

bool func_444()
{
	return Global_2564C8.f_256;
}

int func_445(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_446()
{
	return Global_258C08;
}

bool func_447()
{
	return Global_2564C8.f_251;
}

void func_448(var uParam0)
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
					func_449(iVar0);
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

void func_449(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_15(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_450(iVar2, &bVar3))
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

int func_450(int iParam0, var uParam1)
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

void func_451()
{
	SYSTEM::WAIT(0);
}

void func_452(bool bParam0)
{
	if (!func_438())
	{
		func_458(bParam0);
	}
	else
	{
		func_453();
	}
}

void func_453()
{
	func_6(&(Local_85.f_D0));
	func_457(0);
	func_456(0);
	func_455(0);
	func_454();
}

void func_454()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_455(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087, 21))
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 21);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087, 21))
	{
		unk_0x0674E58A79778E99(&Global_19C087, 21);
	}
}

void func_456(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087, 22))
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 22);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087, 22))
	{
		unk_0x0674E58A79778E99(&Global_19C087, 22);
	}
}

void func_457(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_116, 31))
		{
			unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_116), 31);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_116, 31))
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_116), 31);
	}
}

void func_458(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	
	if (unk_0xE5DBF9B6126856CA(Local_85.f_79))
	{
		unk_0x866EE3B81CEF363A(Local_85.f_79, true);
		if (unk_0x526BC32A660C89E6(Local_85.f_79))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 2))
			{
				if (func_27())
				{
					if (func_25(unk_0x16F2683693E537C9()))
					{
						unk_0xA2FC3824D7AFA946(unk_0x16F2683693E537C9(), Local_85.f_70, 72, 0.5f, 1, 0, 1065353216);
					}
					else
					{
						unk_0xDA55CDFB97015579(Local_85.f_70, 72, 0.5f, 1, 0, 1065353216, 0);
					}
					unk_0x5E858A00EAFA5B24(0, 300, 200);
					unk_0x5D96D8530B3D0904(&(Local_85.f_6), 2);
				}
			}
			unk_0x066C43E677C08D5C();
			iVar0 = unk_0x09AD4CE7DA179533(Local_85.f_79);
			unk_0x4AE2D6991D4E4082(iVar0, 0, 1);
			unk_0xF690C84DADBB3551(&iVar0);
		}
		else
		{
			unk_0x8D30F6387EE75385(Local_85.f_79);
			return;
		}
	}
	if (func_17() && !func_18())
	{
		Var1 = 4294967295;
		Var1.f_6 = 1073741824;
		Var1.f_7 = 3221225472;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		func_476(&Var1, 11);
	}
	if (func_422("DRONE_TRIG"))
	{
		unk_0xA37A90C62806D848(1);
	}
	if (func_25(Local_85.f_7B))
	{
		uVar2 = Local_85.f_7B;
		unk_0xEBA53F35D0085654(&uVar2);
	}
	if (unk_0xC844350D5D58C99A(Local_85.f_7C))
	{
		unk_0xF690C84DADBB3551(&(Local_85.f_7C));
	}
	if (unk_0xE4EDC4B0E92C078B(Local_85.f_85))
	{
		unk_0x142CC44DB769B57E(&(Local_85.f_85));
	}
	if (unk_0xE4EDC4B0E92C078B(Local_85.f_86))
	{
		unk_0x142CC44DB769B57E(&(Local_85.f_86));
	}
	if (unk_0xC844350D5D58C99A(Local_85.f_7D))
	{
		unk_0xA954465BA6FDEFE2(&(Local_85.f_7D));
	}
	unk_0x1FA2A2B10F3906F7();
	unk_0xF737A3AD8873CE16();
	unk_0xFB452C6B9BE826C7();
	unk_0x403399A52DA3CF92(0f);
	if (func_221())
	{
		func_220(0);
	}
	func_305(1, 4294967295);
	func_475();
	if (func_18())
	{
		func_313(0);
	}
	if (unk_0xE5DBF9B6126856CA(Local_85.f_7A))
	{
		iVar3 = unk_0x09AD4CE7DA179533(Local_85.f_7A);
		unk_0xF690C84DADBB3551(&iVar3);
	}
	if (!bParam0)
	{
		if (!unk_0xEA6BC48857E0AC4C(Local_85.f_78))
		{
			unk_0x8D17794CE3273D70(Local_85.f_78);
		}
		func_474(0);
	}
	func_230(0);
	if (func_473() && (!func_248(unk_0xD803B885F5E47A62()) || func_247()))
	{
		func_277(unk_0xD803B885F5E47A62(), 1, 0, 0);
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
	}
	Local_85.f_53 = 0f;
	Local_85.f_54 = 0f;
	Local_85.f_B = 0;
	Local_85.f_D = 0;
	Local_85.f_9 = 0;
	Local_85.f_F = 0;
	func_6(&(Local_85.f_AE));
	func_6(&(Local_85.f_B0));
	if (!Local_85.f_76)
	{
		func_6(&(Local_85.f_B2));
	}
	func_6(&(Local_85.f_B6));
	func_6(&(Local_85.f_B4));
	func_6(&(Local_85.f_B8));
	func_6(&(Local_85.f_BC));
	func_6(&(Local_85.f_C2));
	func_6(&(Local_85.f_C0));
	func_6(&(Local_85.f_BE));
	func_6(&(Local_85.f_C4));
	func_6(&(Local_85.f_C6));
	func_6(&(Local_85.f_C8));
	func_6(&(Local_85.f_CC));
	func_6(&(Local_85.f_CE));
	func_6(&(Local_85.f_BA));
	Local_85.f_1B = 0;
	Local_85.f_5 = 0;
	Local_85.f_6 = 0;
	Global_19C087.f_4 = 4294967295;
	func_472(-1f);
	func_410(0f);
	func_227(0);
	func_413(0);
	func_471(0);
	func_411(0);
	func_203(0);
	func_470(0);
	func_158(0);
	func_469(0);
	func_468(0);
	func_467(0);
	func_55(1);
	func_271(0);
	func_269(0);
	func_275(0);
	func_416(0);
	func_383(0f, 0f, 0f, 0f, 0f, 0f);
	func_466();
	Global_19C087.f_18 = 4294967295;
	unk_0x0674E58A79778E99(&Global_265ACE, 0);
	unk_0x0674E58A79778E99(&Global_19DEEE, 0);
	func_356(0);
	if (!func_465(0))
	{
		func_267();
	}
	if (func_58())
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (func_119())
		{
			if (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8 != func_16() && unk_0x40B8C182D63932FC(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8))
			{
				iVar4 = Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_8;
			}
			else if (Global_18446E != func_16() && unk_0x40B8C182D63932FC(Global_18446E))
			{
				iVar4 = Global_18446E;
			}
			else if (func_259(unk_0xD803B885F5E47A62(), 0))
			{
				if (func_149() != func_16() && unk_0x40B8C182D63932FC(func_149()))
				{
					iVar4 = func_149();
				}
			}
			if (iVar4 != func_16())
			{
				if (unk_0x40B8C182D63932FC(iVar4) && unk_0x8CD06866876216F2())
				{
					func_160(iVar4, 0);
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 28);
				}
				else
				{
					unk_0x5D96D8530B3D0904(&(Local_85.f_5), 27);
				}
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(Local_85.f_5), 27);
			}
		}
		else if (func_17() || func_142())
		{
			func_6(&Global_19C064);
			func_464(300000);
			func_463(1);
			unk_0x5D96D8530B3D0904(&(Local_85.f_5), 28);
		}
		func_363(0);
		func_362(0);
		unk_0x0674E58A79778E99(&(vLocal_83[unk_0xD803B885F5E47A62() /*3*/]), 0);
		iVar5 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), Local_85.f_87));
		if (func_17() || func_142())
		{
			Var6.f_7 = Global_C0073;
			Var6.f_1 = Global_C0073.f_1;
			if (unk_0xA14BB9332558B949())
			{
				Var6 = Global_440000.f_2F9AE;
			}
			else
			{
				Var6 = func_461(unk_0xD803B885F5E47A62());
			}
			Var6.f_6 = 1;
			Var6.f_4 = Local_85.f_1A;
			Var6.f_5 = Local_85.f_1C;
			Var6.f_3 = iVar5;
			Var6.f_2 = Local_85.f_19;
			unk_0xCC6008ED40B90167(&Var6);
		}
		else
		{
			unk_0xC93773AB3297EBFF(iVar5, Local_85.f_19, Local_85.f_1A);
		}
	}
	func_460();
	func_364(0);
	func_246(0);
	func_167(0);
	unk_0xE17FDF9E3068281B(&(Local_85.f_84));
	if (func_162(1) != 0)
	{
		unk_0x71199B01895C6202(func_162(1));
	}
	if (func_162(0) != 0)
	{
		unk_0x71199B01895C6202(func_162(0));
	}
	func_357(0);
	func_305(1, 4294967295);
	Local_85.f_19 = 0;
	Local_85.f_1A = 0;
	Local_85.f_1C = 0;
	unk_0x850CF499433B183D(Local_85.f_1B);
	if (unk_0x83A8177D302E1A7E(Local_85.f_88[unk_0xD803B885F5E47A62()]))
	{
		unk_0xF7E25143642732EA(Local_85.f_88[unk_0xD803B885F5E47A62()], 0);
	}
	if (!bParam0)
	{
		if (!func_147(unk_0xD803B885F5E47A62()))
		{
			func_459(0f, 0f, 0f, 0f);
		}
		Global_19C087.f_2 = 0;
		func_454();
	}
	else
	{
		func_409(0, 1);
	}
}

void func_459(vector3 vParam0, float fParam1)
{
	if (!func_384(Global_19C087.f_A, vParam0, 0))
	{
		Global_19C087.f_A = { vParam0 };
		Global_19C087.f_7 = fParam1;
	}
}

void func_460()
{
	int iVar0;
	
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_28))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_28);
		unk_0x43A06902454A1172(Local_85.f_28);
		Local_85.f_28 = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_1D))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_1D);
		unk_0x43A06902454A1172(Local_85.f_1D);
		Local_85.f_1D = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_1E))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_1E);
		unk_0x43A06902454A1172(Local_85.f_1E);
		Local_85.f_1E = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_1F))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_1F);
		unk_0x43A06902454A1172(Local_85.f_1F);
		Local_85.f_1F = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_20))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_20);
		unk_0x43A06902454A1172(Local_85.f_20);
		Local_85.f_20 = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_21))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_21);
		unk_0x43A06902454A1172(Local_85.f_21);
		Local_85.f_21 = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_27))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_27);
		unk_0x43A06902454A1172(Local_85.f_27);
		Local_85.f_27 = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_26))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_26);
		unk_0x43A06902454A1172(Local_85.f_26);
		Local_85.f_26 = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_25))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_25);
		unk_0x43A06902454A1172(Local_85.f_25);
		Local_85.f_25 = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_24))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_24);
		unk_0x43A06902454A1172(Local_85.f_24);
		Local_85.f_24 = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_23))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_23);
		unk_0x43A06902454A1172(Local_85.f_23);
		Local_85.f_23 = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_22))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_22);
		unk_0x43A06902454A1172(Local_85.f_22);
		Local_85.f_22 = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_29))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_29);
		unk_0x43A06902454A1172(Local_85.f_29);
		Local_85.f_29 = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_2A))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_2A);
		unk_0x43A06902454A1172(Local_85.f_2A);
		Local_85.f_2A = 4294967295;
	}
	if (!unk_0x8AA6DC470ABA63A2(Local_85.f_50))
	{
		unk_0x55D0A2DB35045A35(Local_85.f_50);
		unk_0x43A06902454A1172(Local_85.f_50);
		Local_85.f_50 = 4294967295;
	}
	if (func_438())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_85.f_2D[iVar0] != 4294967295)
			{
				unk_0x55D0A2DB35045A35(Local_85.f_2D[iVar0]);
				unk_0x43A06902454A1172(Local_85.f_2D[iVar0]);
				Local_85.f_2D[iVar0] = 4294967295;
			}
			iVar0++;
		}
	}
	func_138();
	if (unk_0x562F77A7F33D2E46("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		unk_0x8910D3D58E0132B8("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (unk_0x562F77A7F33D2E46("dlc_aw_arena_piloted_missile_scene"))
	{
		unk_0x8910D3D58E0132B8("dlc_aw_arena_piloted_missile_scene");
	}
	if (unk_0x562F77A7F33D2E46("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		unk_0x8910D3D58E0132B8("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (unk_0x562F77A7F33D2E46("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		unk_0x8910D3D58E0132B8("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
}

int func_461(int iParam0)
{
	if (func_140(iParam0) == 243)
	{
		return func_462(iParam0);
	}
	return 4294967295;
}

int func_462(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 4294967295;
}

void func_463(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E, 20))
		{
			unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E), 20);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E, 20))
	{
		unk_0x0674E58A79778E99(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_14E), 20);
	}
}

void func_464(int iParam0)
{
	if (Global_19C087.f_5 != iParam0)
	{
		Global_19C087.f_5 = iParam0;
	}
}

bool func_465(int iParam0)
{
	return Local_85.f_AB == iParam0;
}

void func_466()
{
	if (func_155())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 7);
	}
}

void func_467(bool bParam0)
{
	if (bParam0)
	{
		if (func_58())
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_19C087, 16))
			{
				unk_0x5D96D8530B3D0904(&Global_19C087, 16);
			}
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087, 16))
	{
		unk_0x0674E58A79778E99(&Global_19C087, 16);
	}
}

void func_468(bool bParam0)
{
	if (bParam0)
	{
		if (!func_439())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 6);
		}
	}
	else if (func_439())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 6);
	}
}

void func_469(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087, 3))
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 3);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087, 3))
	{
		unk_0x0674E58A79778E99(&Global_19C087, 3);
	}
}

void func_470(bool bParam0)
{
	if (bParam0)
	{
		if (!func_367())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 10);
		}
	}
	else if (func_367())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 10);
	}
}

void func_471(bool bParam0)
{
	if (bParam0)
	{
		if (unk_0x8A22C4C08282BF26(unk_0x12AB0310C2281427("AM_MP_DRONE")) > 0)
		{
			if (!func_439())
			{
				unk_0x5D96D8530B3D0904(&Global_19C087, 0);
			}
		}
	}
	else if (func_439())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 0);
	}
}

void func_472(float fParam0)
{
	if (Global_19C087.f_9 != fParam0)
	{
		Global_19C087.f_9 = fParam0;
	}
}

int func_473()
{
	if (!func_285())
	{
		return 0;
	}
	if (func_48(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_58())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	return 1;
}

void func_474(bool bParam0)
{
	if (bParam0)
	{
		if (!func_18())
		{
			unk_0x5D96D8530B3D0904(&Global_19C087, 24);
		}
	}
	else if (func_18())
	{
		unk_0x0674E58A79778E99(&Global_19C087, 24);
	}
}

void func_475()
{
	if (unk_0x9F4FE516EAACCFC5(Local_85.f_83))
	{
		unk_0x9A8DDC7C522F5BF5(Local_85.f_83, 0);
		unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
		if (!func_28() || unk_0xEAE0D21A50E6C7F4(Local_85.f_6, 0))
		{
			unk_0x225CFE81EA219E44();
		}
	}
}

void func_476(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = 3221225472;
	Var0 = 3560061309;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar1 = false;
	if (iParam1 == 11)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_1A0, 1))
		{
			unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_1A0), 1);
			bVar1 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_10(&(uParam0->f_1)))
	{
		func_8(&(uParam0->f_1), 0, 0);
	}
	bVar2 = true;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (func_10(&(uParam0->f_1)) && !func_7(&(uParam0->f_1), 1000, 0))
		{
			bVar2 = false;
		}
		else
		{
			func_6(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_6(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = func_173(unk_0xD803B885F5E47A62());
		if (iVar3 != 4294967295)
		{
			unk_0xFB061A86A7AC749F(1, &Var0, 8, iVar3);
			uParam0->f_5 = 1;
		}
	}
}

void func_477(struct<12> Param0)
{
	unk_0x37AD2AB54480FA6A(32, 0, Param0);
	func_485(0, 4294967295, 0);
	unk_0x9752E7BAEABA939E(&uLocal_84, 1);
	unk_0x35B62793EAE9ADDF(&vLocal_83, 97);
	if (!func_484())
	{
		func_452(0);
	}
	if (Param0.f_B)
	{
		unk_0x5D96D8530B3D0904(&(Local_85.f_6), 3);
	}
	if (unk_0x8CD06866876216F2())
	{
		if (!func_438())
		{
			Local_85.f_61 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (unk_0xC844350D5D58C99A(func_321()) && !unk_0x437347B10A200C4B(func_321(), 0))
					{
						Local_85.f_6A = { unk_0x8A5E176FF719A014(unk_0x68F4C0EC296D3901(func_321(), true), unk_0xD9522BA9E27E1349(func_321()), 0f, 1.6f, 2.9f) };
						Local_85.f_64 = { Local_85.f_6A };
					}
					func_424(1);
					vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_1 = 1;
					break;
				
				case 2:
					func_483(1);
					Local_85.f_6A = { Param0.f_5 };
					vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_1 = 2;
					break;
				
				case 3:
					func_482(1);
					Local_85.f_6A = { Param0.f_5 };
					vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_1 = 3;
					break;
				
				case 4:
					func_417(1);
					Local_85.f_6A = { Param0.f_5 };
					vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_1 = 4;
					break;
				
				case 5:
					func_481(1);
					Local_85.f_6A = { Param0.f_5 };
					vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_1 = 5;
					break;
				
				case 6:
					func_480(1);
					Local_85.f_6A = { Param0.f_5 };
					vLocal_83[unk_0xD803B885F5E47A62() /*3*/].f_1 = 6;
					break;
				
				default:
					func_479(1);
					Local_85.f_6A = { Param0.f_5 };
					break;
			}
			Local_85.f_67 = { Param0.f_8 };
			if (func_240(func_374()))
			{
				func_383(Local_85.f_6A, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_452(0);
	}
	if (!func_438())
	{
		func_409(1, 1);
	}
	else
	{
		func_478();
	}
}

void func_478()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_85.f_2D[iVar0] = 4294967295;
		iVar0++;
	}
	func_356(5);
}

void func_479(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0))
		{
			Global_19C087.f_2 = 0;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 0);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 0))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 0);
	}
}

void func_480(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 6))
		{
			Global_19C087.f_2 = 0;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 6);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 6))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 6);
	}
}

void func_481(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 5))
		{
			Global_19C087.f_2 = 0;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 5);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 5))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 5);
	}
}

void func_482(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 3))
		{
			Global_19C087.f_2 = 0;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 3);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 3))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 3);
	}
}

void func_483(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 2))
		{
			Global_19C087.f_2 = 0;
			unk_0x5D96D8530B3D0904(&(Global_19C087.f_2), 2);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_19C087.f_2, 2))
	{
		unk_0x0674E58A79778E99(&(Global_19C087.f_2), 2);
	}
}

int func_484()
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
		if (func_447())
		{
			return 0;
		}
		if (func_445(157))
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

int func_485(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_454();
			}
			else
			{
				return 0;
			}
		}
		if (!func_486())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_454();
					}
					else
					{
						return 0;
					}
				}
				if (func_447())
				{
					if (!bParam2)
					{
						func_454();
					}
					else
					{
						return 0;
					}
				}
				if (func_445(157))
				{
					if (!bParam2)
					{
						func_454();
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
					func_454();
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
				func_454();
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
			func_454();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_486()
{
	return Global_140856;
}

