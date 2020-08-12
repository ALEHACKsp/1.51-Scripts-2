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
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = -1;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<20> Local_89[32];
	vector3 vLocal_90[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117[4] = { 0, 0, 0, 0 };
	var uLocal_118[2] = { 0, 0 };
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	struct<8> Local_122 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	struct<8> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142[4] = { 0, 0, 0, 0 };
	struct<35> Local_143 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, -1, -1, 0, 0, 0 } ;
	struct<6> Local_144[32];
	struct<21> Local_145 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_80 = Global_40001.f_477A;
	iLocal_111 = unk_0xD68EA767274B7444();
	if (unk_0x8CD06866876216F2())
	{
		if (func_993(unk_0xD803B885F5E47A62(), 0, 1))
		{
			if (!func_942(ScriptParam_145))
			{
				func_883(0, 1);
				func_816();
			}
		}
		else
		{
			func_816();
		}
	}
	else
	{
		func_883(0, 1);
		func_816();
	}
	while (true)
	{
		func_815();
		if (func_810(1))
		{
			func_883(0, 1);
			func_816();
		}
		if (func_802())
		{
			func_883(0, 1);
			func_816();
		}
		func_798();
		func_796();
		func_795();
		func_792();
		func_791();
		func_785();
		switch (func_784(unk_0x57270EE11514DC67()))
		{
			case 0:
				if (func_783() == 1)
				{
					if (func_775())
					{
						func_774(unk_0x57270EE11514DC67(), 1);
					}
				}
				break;
			
			case 1:
				if (func_783() == 1)
				{
					func_50();
				}
				else if (func_783() == 3)
				{
					func_774(unk_0x57270EE11514DC67(), 3);
				}
				break;
			
			case 3:
				func_816();
				break;
		}
		if (unk_0xBFF81ED3B99522C7())
		{
			func_33();
			if (func_32())
			{
				func_883(0, 1);
				func_31(3);
			}
			switch (func_783())
			{
				case 0:
					if (func_28())
					{
						func_31(1);
					}
					break;
				
				case 1:
					func_1();
					break;
				
				case 3:
					func_816();
					break;
				}
		}
	}
}

void func_1()
{
	switch (func_27())
	{
		case 0:
			func_26(1);
			unk_0xCB466C2A425A9168(&(Local_143.f_21), &(Local_143.f_22));
			break;
		
		case 1:
			if (func_25() == 0)
			{
				func_18();
				if (func_17(6))
				{
					if (func_16())
					{
						func_15(10);
						func_26(2);
					}
					else
					{
						func_14(5);
						func_26(5);
					}
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 2:
			if (func_17(11))
			{
				func_26(3);
			}
			break;
		
		case 3:
			if (func_25() == 0)
			{
				func_6();
				if (!func_5(&(Local_143.f_5)))
				{
					func_4(&(Local_143.f_5), 0, 0);
				}
				else if (func_2(&(Local_143.f_5), func_3(), 0))
				{
					func_14(1);
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 5:
			if (func_17(0))
			{
				func_26(6);
			}
			break;
		
		case 6:
			func_31(3);
			break;
	}
}

int func_2(var uParam0, int iParam1, bool bParam2)
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

int func_3()
{
	return (1000 * Global_40001.f_476F);
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

bool func_5(var uParam0)
{
	return uParam0->f_1;
}

void func_6()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_13();
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_143.f_20, iVar1))
		{
			vVar2 = { func_12(iVar1) };
			if (!func_11(vVar2, 0f, 0f, 0f, 0))
			{
				if (!unk_0xE5DBF9B6126856CA(Local_143.f_13[iVar1]))
				{
					if (func_8(&(uLocal_142[iVar1]), &(Local_143.f_13[iVar1]), vVar2, 1))
					{
						unk_0x5D96D8530B3D0904(&(Local_143.f_20), iVar1);
						if (!func_5(&uLocal_112))
						{
							func_4(&uLocal_112, 0, 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (func_2(&uLocal_112, 300000, 0))
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (unk_0xEAE0D21A50E6C7F4(Local_143.f_20, iVar1))
			{
				unk_0x0674E58A79778E99(&(Local_143.f_20), iVar1);
			}
			iVar1++;
		}
		func_7(&uLocal_112);
	}
}

void func_7(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_8(var uParam0, var uParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_10(vParam2))
	{
		iVar0 = joaat("prop_gun_case_01");
		if (func_9(iVar0))
		{
			iVar1 = 0;
			unk_0x5D96D8530B3D0904(&iVar1, 0);
			unk_0x5D96D8530B3D0904(&iVar1, 1);
			unk_0x5D96D8530B3D0904(&iVar1, 9);
			unk_0x5D96D8530B3D0904(&iVar1, 4);
			*uParam0 = unk_0xB8D1BBEFD1257857(3993904883, vParam2 + Vector(0f, 0f, 0f), iVar1, 4294967295, iVar0, iParam3, 1);
			*uParam1 = unk_0x4193A2DE62BC07C0(*uParam0);
			return 1;
		}
	}
	return 0;
}

bool func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x523BCC9DC80CD82F(iParam0);
	return unk_0xB87F6CF6E5628C67(iParam0);
}

int func_10(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_11(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_12(int iParam0)
{
	switch (Local_143.f_1F)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1378.065f, 3179.572f, 39.5194f;
				
				case 1:
					return 1386.56f, 3147.986f, 39.52f;
				
				case 2:
					return 1396.397f, 3111.702f, 39.5088f;
				
				case 3:
					return 1402.808f, 3087.676f, 39.5129f;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1375.18f, -3033.337f, 12.9448f;
				
				case 1:
					return -1364.817f, -3015.949f, 12.9676f;
				
				case 2:
					return -1305.581f, -3048.433f, 12.9444f;
				
				case 3:
					return -1317.517f, -3067.379f, 12.9444f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2039.639f, 4749.277f, 40.013f;
				
				case 1:
					return 2028.618f, 4775.398f, 40.3574f;
				
				case 2:
					return 2134.54f, 4826.913f, 40.4972f;
				
				case 3:
					return 1936.858f, 4695.858f, 40.2577f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_13()
{
	switch (Local_143.f_1F)
	{
		case 0:
			return 4;
		
		case 1:
			return 4;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_14(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	Local_143.f_E = iParam0;
}

void func_15(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_143.f_1), iParam0);
}

bool func_16()
{
	return (func_17(8) && func_17(9));
}

bool func_17(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Local_143.f_1, iParam0);
}

void func_18()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = func_24();
	if (func_17(4))
	{
		if (!func_17(5))
		{
			if (func_23() - func_22(&(Local_143.f_7), 0, 0)) >= func_21()
			{
				func_7(&(Local_143.f_7));
				func_15(5);
			}
		}
	}
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (!func_17(3))
	{
		if (bVar0)
		{
			if (func_5(&(Local_143.f_9)))
			{
				func_7(&(Local_143.f_9));
			}
			if (!func_5(&(Local_143.f_7)))
			{
				func_4(&(Local_143.f_7), 0, 0);
				if (Local_143.f_4 > 0)
				{
					iVar2 = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), (4294967295 * Local_143.f_4));
					func_20(&(Local_143.f_7), iVar2);
					Local_143.f_4 = 0;
				}
			}
			else if (!func_17(6))
			{
				if ((iVar1 - func_22(&(Local_143.f_7), 0, 0)) <= 0)
				{
					func_15(6);
				}
			}
		}
		else
		{
			if (func_17(7))
			{
				if (func_5(&(Local_143.f_7)))
				{
					Local_143.f_4 = func_22(&(Local_143.f_7), 0, 0);
				}
			}
			else
			{
				Local_143.f_4 = 0;
			}
			if (func_5(&(Local_143.f_7)))
			{
				func_7(&(Local_143.f_7));
			}
			if (!func_5(&(Local_143.f_9)))
			{
				func_4(&(Local_143.f_9), 0, 0);
			}
			else
			{
				if (func_2(&(Local_143.f_9), func_19(), 0))
				{
					func_15(3);
					func_14(6);
				}
				if (func_2(&(Local_143.f_9), (func_19() - 30000), 0))
				{
					func_15(3);
					func_14(6);
				}
			}
		}
	}
}

int func_19()
{
	return 600000;
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_1 = 1;
}

int func_21()
{
	return 20000;
}

int func_22(var uParam0, bool bParam1, bool bParam2)
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

int func_23()
{
	return 180000;
}

var func_24()
{
	return (func_17(8) || func_17(9));
}

int func_25()
{
	return Local_143.f_E;
}

void func_26(int iParam0)
{
	if (!unk_0xBFF81ED3B99522C7())
	{
		return;
	}
	Local_143.f_D = iParam0;
}

int func_27()
{
	return Local_143.f_D;
}

bool func_28()
{
	if (!func_17(1))
	{
		if (func_30() > 4294967295)
		{
			if (func_30() == 0)
			{
				Local_143.f_1F = 0;
			}
			else if (func_30() == 1)
			{
				Local_143.f_1F = 1;
			}
			else
			{
				Local_143.f_1F = 2;
			}
		}
		else
		{
			Local_143.f_1F = unk_0x09AC81E49EA267F7(0, 3);
		}
		if (Global_40001.f_4774)
		{
			if (Local_143.f_1F == 0)
			{
				if (!Global_40001.f_4775)
				{
					Local_143.f_1F = 1;
				}
				else
				{
					Local_143.f_1F = 2;
				}
			}
		}
		else if (Global_40001.f_4775)
		{
			if (Local_143.f_1F == 1)
			{
				if (!Global_40001.f_4776)
				{
					Local_143.f_1F = 2;
				}
				else
				{
					Local_143.f_1F = 0;
				}
			}
		}
		else if (Global_40001.f_4776)
		{
			if (Local_143.f_1F == 2)
			{
				if (!Global_40001.f_4775)
				{
					Local_143.f_1F = 0;
				}
				else
				{
					Local_143.f_1F = 1;
				}
			}
		}
		Local_143.f_F = unk_0xD803B885F5E47A62();
		Local_143.f_10[0] = unk_0xD803B885F5E47A62();
		Local_143.f_18[0] = iLocal_80;
		Local_143.f_10[1] = func_29();
		Local_143.f_18[1] = iLocal_80;
		func_15(1);
	}
	return func_17(1);
}

int func_29()
{
	return 4294967295;
}

int func_30()
{
	return Global_26B66F.f_1404.f_153;
}

void func_31(int iParam0)
{
	Local_143 = iParam0;
}

int func_32()
{
	if (Global_26B66F.f_1404.f_28)
	{
		Global_26B66F.f_1404.f_28 = 0;
		return 1;
	}
	return 0;
}

void func_33()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7[2];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar2 = true;
	bVar3 = true;
	if (Local_143 != 3)
	{
		iVar0 = 0;
		while (iVar0 < unk_0x54EABC0DD106045B())
		{
			if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar0)))
			{
				iVar1 = unk_0xF4FB3A22FC4991C8(iVar0);
				iVar11 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar0));
				if (!func_47(iVar11, 0))
				{
					iVar6++;
					if (func_17(1))
					{
						if (Local_143.f_10[1] == func_29())
						{
							if (func_45(iVar11))
							{
								if (iVar11 != Local_143.f_F)
								{
									Local_143.f_10[1] = iVar11;
								}
							}
						}
					}
					if (!func_17(8))
					{
						if (iVar11 == Local_143.f_10[0])
						{
							if (func_44(iVar1, 1))
							{
								func_15(8);
							}
						}
					}
					else if (iVar11 == Local_143.f_10[0])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(8);
						}
					}
					if (!func_17(9))
					{
						if (iVar11 == Local_143.f_10[1])
						{
							if (func_44(iVar1, 1))
							{
								func_15(9);
							}
						}
					}
					else if (iVar11 == Local_143.f_10[1])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(9);
						}
					}
					if (func_27() == 1)
					{
						if (func_44(iVar1, 2))
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_143.f_2, iVar0))
							{
								iVar5++;
								unk_0x5D96D8530B3D0904(&(Local_143.f_2), iVar0);
							}
							else
							{
								iVar5++;
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(Local_143.f_2, iVar0))
						{
							unk_0x0674E58A79778E99(&(Local_143.f_2), iVar0);
						}
					}
					else if (func_27() == 3)
					{
						if (Local_144[iVar0 /*6*/].f_3 > 0)
						{
							iVar9 = func_34(iVar11);
							iVar7[iVar9] = (iVar7[iVar9] + Local_144[iVar0 /*6*/].f_3);
						}
						if (Local_144[iVar0 /*6*/].f_4 > 0)
						{
							iVar9 = func_34(iVar11);
							iVar10 = (1 - iVar9);
							iVar7[iVar10] = (iVar7[iVar10] + Local_144[iVar0 /*6*/].f_4);
						}
					}
					if (func_27() <= 2)
					{
						if (!bVar4)
						{
							if (func_44(iVar1, 1))
							{
								if (!func_44(iVar1, 7))
								{
									bVar4 = true;
								}
							}
						}
					}
					if (func_45(iVar11))
					{
						bVar3 = false;
						if (func_27() == 1)
						{
							iVar8++;
						}
						else if (func_44(iVar1, 1))
						{
							iVar8++;
						}
					}
					if (!func_44(iVar1, 0))
					{
						bVar2 = false;
					}
				}
			}
			iVar0++;
		}
	}
	if (!func_17(7))
	{
		if (iVar5 > 0)
		{
			func_15(7);
		}
	}
	else if (iVar5 == 0)
	{
		func_43(7);
	}
	if (!func_17(2))
	{
		if (iVar5 > 1)
		{
			func_15(2);
		}
	}
	else if (iVar5 <= 1)
	{
		func_43(2);
	}
	if (!func_17(4))
	{
		if (iVar6 > 1)
		{
			if (iVar6 == iVar5)
			{
				func_15(4);
			}
		}
	}
	if (!func_17(11))
	{
		if (func_27() == 2)
		{
			if (!bVar4)
			{
				func_15(11);
			}
		}
	}
	if (func_27() == 1)
	{
		if (func_25() == 0)
		{
			if (!func_5(&(Local_143.f_B)))
			{
				func_4(&(Local_143.f_B), 0, 0);
			}
			else if (func_2(&(Local_143.f_B), 10000, 0))
			{
				if (iVar8 < 2)
				{
					func_14(5);
				}
			}
		}
	}
	else if (func_27() == 3)
	{
		if (func_25() == 0)
		{
			iVar14 = iVar7[1];
			iVar13 = (iLocal_80 - iVar14);
			Local_143.f_1B[0] = iVar7[0];
			Local_143.f_1B[1] = iVar7[1];
			if (Local_143.f_18[0] != iVar13)
			{
				iVar12 = 0;
				if (Local_143.f_18[0] < iVar13)
				{
					iVar12 = (iVar13 - Local_143.f_18[0]);
				}
				Local_143.f_18[0] = (iVar13 - iVar12);
			}
			iVar14 = iVar7[0];
			iVar13 = (iLocal_80 - iVar14);
			if (Local_143.f_18[1] != iVar13)
			{
				iVar12 = 0;
				if (Local_143.f_18[1] < iVar13)
				{
					iVar12 = (iVar13 - Local_143.f_18[1]);
				}
				Local_143.f_18[1] = (iVar13 - iVar12);
			}
			if (Local_143.f_1B[0] >= iLocal_80)
			{
				Local_143.f_1E = 0;
			}
			else if (Local_143.f_1B[1] >= iLocal_80)
			{
				Local_143.f_1E = 1;
			}
			if (iVar8 < 2)
			{
				func_14(5);
			}
		}
		else if (func_25() == 1)
		{
			if (Local_143.f_1E == 4294967295)
			{
				if (Local_143.f_1B[0] == Local_143.f_1B[1])
				{
					Local_143.f_1E = 99;
				}
				else if (Local_143.f_1B[0] > Local_143.f_1B[1])
				{
					Local_143.f_1E = 0;
				}
				else
				{
					Local_143.f_1E = 1;
				}
			}
		}
	}
	if (bVar2)
	{
		if (!func_17(0))
		{
			func_15(0);
		}
	}
	else if (func_17(0))
	{
		func_43(0);
	}
	if (Local_143.f_3 != iVar5)
	{
		Local_143.f_3 = iVar5;
	}
	if (func_25() == 0)
	{
		if (bVar3)
		{
			func_14(2);
		}
		if (Local_143.f_1E != 4294967295)
		{
			func_14(4);
		}
	}
}

int func_34(int iParam0)
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_35(int iParam0)
{
	return func_36() == iParam0;
}

int func_36()
{
	return Local_143.f_F;
}

int func_37(int iParam0)
{
	return func_38(iParam0, func_36(), 0);
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	return func_39(iParam0, iParam1, bParam2, 1);
}

int func_39(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_29() && iParam0 != func_29())
	{
		if (!bParam2)
		{
			if (func_42(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_29())
		{
			if (iParam1 == Global_18D84D[iParam0 /*615*/].f_B)
			{
				return func_40(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_40(int iParam0, int iParam1)
{
	if (func_41(iParam0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1;
	}
	return 0;
}

int func_41(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_29())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_29())
			{
				if (Global_18D84D[iParam0 /*615*/].f_B == iParam0)
				{
					if (Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

void func_43(int iParam0)
{
	unk_0x0674E58A79778E99(&(Local_143.f_1), iParam0);
}

bool func_44(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Local_144[iParam0 /*6*/].f_1, iParam1);
}

bool func_45(int iParam0)
{
	return func_46(iParam0, 1);
}

int func_46(int iParam0, int iParam1)
{
	if (iParam0 != func_29())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_29())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B == iParam0 && Global_18D84D[iParam0 /*615*/].f_B.f_1C2 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_48(4294967295, 0) == 8;
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

int func_48(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_49();
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

int func_49()
{
	return Global_1407E9;
}

void func_50()
{
	if (iLocal_107 > 4294967295)
	{
		if ((!func_769() && !func_768()) && !func_767(179))
		{
			if (func_730(1, 1, 1, 0))
			{
				switch (Local_144[iLocal_107 /*6*/].f_5)
				{
					case 0:
						if (!func_729(2))
						{
							func_708(179, 1, 4294967295, 0);
							iLocal_120 = func_707(unk_0xD803B885F5E47A62());
							StringCopy(&Local_122, func_706(), 64);
							func_705(2);
						}
						if (!func_729(4))
						{
							func_620(4294967295, 0, 0, 4294967295, 0, 0);
							func_705(4);
						}
						if (Local_143.f_D > 0)
						{
							if (Local_143.f_D > 1)
							{
								Local_144[iLocal_107 /*6*/].f_5 = 4;
							}
							else
							{
								Local_144[iLocal_107 /*6*/].f_5 = Local_143.f_D;
							}
						}
						break;
					
					case 1:
						func_578();
						func_577();
						func_554();
						func_540();
						if (Local_143.f_D != 1)
						{
							if (func_44(unk_0xFB04705FDFDCE640(), 1))
							{
								func_530(1);
								Local_144[iLocal_107 /*6*/].f_5 = Local_143.f_D;
							}
							else
							{
								func_523();
								Local_144[iLocal_107 /*6*/].f_5 = 4;
							}
						}
						break;
					
					case 2:
						func_578();
						func_522();
						unk_0x38C3A68D7861DCFD(0, 140, 1);
						unk_0x38C3A68D7861DCFD(0, 141, 1);
						unk_0x38C3A68D7861DCFD(0, 142, 1);
						unk_0x38C3A68D7861DCFD(0, 143, 1);
						unk_0x38C3A68D7861DCFD(0, 24, 1);
						unk_0x38C3A68D7861DCFD(0, 345, 1);
						unk_0x38C3A68D7861DCFD(0, 346, 1);
						unk_0x38C3A68D7861DCFD(0, 347, 1);
						if (func_44(unk_0xFB04705FDFDCE640(), 1) || func_44(unk_0xFB04705FDFDCE640(), 2))
						{
							if (!func_44(unk_0xFB04705FDFDCE640(), 6))
							{
								func_521(1);
							}
							func_540();
						}
						func_516();
						if (Local_143.f_D != 2)
						{
							func_515(&iLocal_83);
							Local_144[iLocal_107 /*6*/].f_5 = Local_143.f_D;
						}
						break;
					
					case 3:
						if (func_5(&(Local_143.f_5)))
						{
							func_508((func_3() - func_22(&(Local_143.f_5), 0, 0)), func_25() != 0, &iLocal_81, 4294967295);
						}
						if (!func_729(3))
						{
							if (func_2(&(Local_143.f_5), 10000, 0))
							{
								func_507();
								func_705(3);
							}
						}
						if (func_25() == 0)
						{
							func_578();
							func_506();
							func_505();
							func_504();
							if (func_503())
							{
								if (Local_144[iLocal_107 /*6*/].f_5 == 3)
								{
									func_502();
								}
							}
							if (iLocal_107 > 4294967295)
							{
								if (iLocal_107 == unk_0x57270EE11514DC67())
								{
									func_516();
									func_381(&(Global_14DB79.f_216), &Global_14DB79, 28, &(Global_14DB79.f_1), &(Global_14DB79.f_75), 4294967295, 0, 0);
								}
							}
						}
						if (Local_143.f_D != 3)
						{
							Local_144[iLocal_107 /*6*/].f_5 = Local_143.f_D;
						}
						break;
					
					case 4:
						if (Local_143.f_D > 4)
						{
							Local_144[iLocal_107 /*6*/].f_5 = Local_143.f_D;
						}
						break;
					
					case 5:
						func_523();
						func_87();
						break;
					
					case 6:
						break;
				}
			}
			else
			{
				func_51();
			}
		}
		else
		{
			func_51();
		}
	}
}

void func_51()
{
	int iVar0;
	
	if (!func_729(5))
	{
		func_523();
		if (unk_0x8CD06866876216F2())
		{
			if (func_44(unk_0xFB04705FDFDCE640(), 4))
			{
				func_86(4);
				func_84(1);
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
			}
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_115))
		{
			unk_0x142CC44DB769B57E(&iLocal_115);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_114))
		{
			unk_0x142CC44DB769B57E(&iLocal_114);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_116))
		{
			unk_0x142CC44DB769B57E(&iLocal_116);
		}
		iVar0 = 0;
		while (iVar0 < func_13())
		{
			if (unk_0xE4EDC4B0E92C078B(iLocal_117[iVar0]))
			{
				unk_0x142CC44DB769B57E(&(iLocal_117[iVar0]));
			}
			iVar0++;
		}
		func_74();
		func_72();
		func_71();
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		func_515(&iLocal_83);
		func_52();
		func_705(5);
	}
}

void func_52()
{
	func_53(0, 0);
}

void func_53(int iParam0, int iParam1)
{
	Global_24B2D0.f_16 = iParam0;
	Global_24B2D0.f_17 = iParam1;
}

void func_54(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_70())
		{
			func_69();
		}
		Global_24B2D0.f_2C2.f_206 = unk_0x0D0A574C76D769AC();
		Global_24B2D0.f_2C2.f_1F8 = iParam1;
		Global_24B2D0.f_2C2.f_1F9 = iParam2;
		Global_24B2D0.f_2C2.f_1FA = iParam10;
		func_72();
		func_58(8, 0, 0, 0, 0);
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
		func_55();
	}
}

void func_55()
{
	if (func_70() && !func_57())
	{
		func_69();
	}
	if (func_57())
	{
		func_56();
	}
	else
	{
		func_72();
		func_58(0, 0, 0, 0, 0);
		Global_24B2D0.f_6D1 = 0;
		Global_24B2D0.f_6D0 = 0;
	}
}

void func_56()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_2C2), &(Global_24B2D0.f_4C9), 519);
	Global_24B2D0.f_1E7 = { Global_24B2D0.f_1ED };
	if (unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206)
	{
		Global_24B2D0.f_6D0 = 0;
	}
}

int func_57()
{
	if ((Global_24B2D0.f_6D0 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_4C9.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_4C9.f_206))
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2537E2.f_766.f_2BF.f_10 != func_29())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_2537E2.f_766.f_2BF.f_10 /*421*/].f_194, 0) && func_59())
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

int func_59()
{
	if ((((((func_67(unk_0xD803B885F5E47A62()) == 229 || func_67(unk_0xD803B885F5E47A62()) == 191) || func_66()) || func_65()) || func_64(unk_0xD803B885F5E47A62())) || Global_265BE2.f_E2 == 1) || (Global_24B2D0.f_6D1 && func_60(unk_0xD803B885F5E47A62())))
	{
		return 0;
	}
	return 1;
}

int func_60(int iParam0)
{
	if (func_63(iParam0))
	{
		return 1;
	}
	if (func_61(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_61(int iParam0)
{
	return func_62(iParam0, 20);
}

bool func_62(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 7);
	}
	return 0;
}

int func_64(int iParam0)
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

var func_65()
{
	return Global_180605;
}

int func_66()
{
	if (Global_440000 == 6)
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0)
{
	if (func_68(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_21;
	}
	return 4294967295;
}

int func_68(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

void func_69()
{
	if (func_57())
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

int func_70()
{
	if ((Global_24B2D0.f_6D1 && !unk_0x0D0A574C76D769AC() == Global_24B2D0.f_2C2.f_206) && unk_0x1727A44C562FBED2(Global_24B2D0.f_2C2.f_206))
	{
		return 1;
	}
	return 0;
}

void func_71()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_24B2D0.f_6D3[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_24B2D0.f_6D2 = 0;
}

void func_72()
{
	if (func_70() && !func_57())
	{
		func_69();
	}
	func_73();
	Global_24B2D0.f_2C2 = 0;
}

void func_73()
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

void func_74()
{
	int iVar0;
	int iVar1;
	
	if (!func_729(8))
	{
		func_705(8);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (unk_0x40B8C182D63932FC(iVar1))
			{
				if (iVar1 != unk_0xD803B885F5E47A62())
				{
					if (unk_0xEAE0D21A50E6C7F4(iLocal_108, iVar0))
					{
						func_82(iVar1, 432, 0, 0);
						func_75(iVar1, func_81(iLocal_121), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_75(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_77(iParam0))
	{
		return;
	}
	if (func_76(&(Global_24DDCF.f_26D[iParam0]), &(Global_24DDCF.f_3D8[iParam0]), &(Global_24DDCF.f_185), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1C8[iParam0] = uParam1;
		}
	}
}

int func_76(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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

int func_77(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 1;
	}
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_78())
	{
		return 1;
	}
	return 0;
}

int func_78()
{
	switch (func_80())
	{
		case 0:
			return func_79();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_79()
{
	switch (Global_259530)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_80()
{
	return Global_7830;
}

int func_81(int iParam0)
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

void func_82(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_77(iParam0))
	{
		return;
	}
	if (func_76(&(Global_24DDCF.f_24C[iParam0]), &(Global_24DDCF.f_3B7[iParam0]), &(Global_24DDCF.f_184), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_24DDCF.f_1A7[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_83();
		}
	}
}

void func_83()
{
	Global_24DDCF.f_64E = 1;
}

void func_84(bool bParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (!func_85())
		{
			if (func_993(unk_0xD803B885F5E47A62(), 1, 0))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 342, false);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 122, false);
			}
			unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 1f);
			unk_0x2F82E0AC5EC27DF2(0);
			unk_0xDC4BBCD7EBECDC32(true);
			if (Global_1406A2.f_1 == 0 || Global_1406A2.f_2 == 1)
			{
				Global_1406A2.f_2 = 0;
				if (bParam0)
				{
					unk_0x03718F4C6E876DE6(0, 0);
				}
			}
		}
		else
		{
			if (func_993(unk_0xD803B885F5E47A62(), 1, 1))
			{
				unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 342, true);
				unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 122, true);
				unk_0xEAA8C82878E482D0(unk_0xD803B885F5E47A62(), 0.5f);
				if (Global_1406A2.f_1 == 0 || Global_1406A2.f_2 == 1)
				{
					unk_0x03718F4C6E876DE6(1, 0);
				}
			}
			unk_0x2F82E0AC5EC27DF2(1);
			unk_0xDC4BBCD7EBECDC32(false);
		}
	}
}

bool func_85()
{
	return Global_1406A2;
}

void func_86(int iParam0)
{
	unk_0x0674E58A79778E99(&(Local_144[unk_0x57270EE11514DC67() /*6*/].f_1), iParam0);
}

void func_87()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<20> Var3;
	int iVar4;
	
	Var3.f_2 = 1065353216;
	Var3.f_3 = 1065353216;
	Var3.f_4 = 1;
	Var3.f_9 = 4294967295;
	Var3.f_12 = 4294967295;
	Var3.f_13 = 4294967295;
	if (!func_729(1))
	{
		if (func_25() != 0)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (func_730(1, 1, 1, 0))
				{
					if (((!func_769() && !func_768()) && !func_767(179)) && func_44(unk_0xFB04705FDFDCE640(), 1))
					{
						if (func_379())
						{
							iVar1 = func_34(unk_0xD803B885F5E47A62());
							iVar2 = Local_143.f_1E;
							switch (func_25())
							{
								case 2:
									unk_0xA37A90C62806D848(1);
									break;
								
								case 3:
									unk_0xA37A90C62806D848(1);
									break;
								
								case 1:
									unk_0xA37A90C62806D848(1);
									if (Local_143.f_1E > 4294967295)
									{
										if (Local_143.f_1E == 99)
										{
											func_377(88, "BK_RUN_OVER", "BIGM_JOUSTDR", &Local_122, iLocal_120, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
										}
										else if (iVar1 == iVar2)
										{
											bVar0 = true;
											func_377(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_122, iLocal_120, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
										}
										else
										{
											func_377(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_122, iLocal_120, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
										}
									}
									else
									{
										func_358(88, "BK_RUN_OVER", "BIGM_JOUSTLT", 1, 4294967295, 2, 1, 0);
									}
									break;
								
								case 5:
									unk_0xA37A90C62806D848(1);
									func_358(88, "BK_RUN_OVER", "BIGM_JOUSTNB", 1, 4294967295, 2, 1, 0);
									break;
								
								case 4:
									unk_0xA37A90C62806D848(1);
									if (iVar1 == iVar2)
									{
										bVar0 = true;
										func_377(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_122, iLocal_120, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
									}
									else
									{
										func_377(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_122, iLocal_120, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
									}
									break;
								
								case 6:
									func_377(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_122, iLocal_120, 0, 4294967295, 4294967295, 4294967295, 2, 4294967295);
									break;
							}
						}
					}
				}
				iVar4 = unk_0xD803B885F5E47A62();
				func_356(1, iVar4);
				if (bVar0)
				{
				}
				func_124(179, bVar0, &Var3, 0);
				func_883(bVar0, 0);
				func_51();
				func_705(1);
			}
		}
	}
	if (func_89(&uLocal_91, 1, 0))
	{
		func_88(0);
	}
}

void func_88(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Local_144[unk_0x57270EE11514DC67() /*6*/].f_1), iParam0);
}

int func_89(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_123(29);
	if ((*uParam0 > 0 && !func_122()) && func_116(unk_0xD803B885F5E47A62()) != 0)
	{
		if (!func_113())
		{
			func_112();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_5(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3), 0, 0);
			}
			else if (func_2(&(uParam0->f_3), 1000, 0))
			{
				unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 2);
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 0);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_111(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_5(&(uParam0->f_5)))
			{
				if (func_2(&(uParam0->f_5), 3000, 0))
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
				func_101(iParam2);
				func_111(uParam0, 2);
			}
			break;
		
		case 2:
			func_101(0);
			if (func_2(&(uParam0->f_1), 15000, 0))
			{
				if (func_90(func_91(0)))
				{
					unk_0xA37A90C62806D848(1);
				}
				func_111(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_2(&(uParam0->f_1), 23500, 0))
			{
				unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 1);
				unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 2);
				func_111(uParam0, 4);
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

bool func_90(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

char* func_91(int iParam0)
{
	if (((func_99(unk_0xD803B885F5E47A62()) || func_98(unk_0xD803B885F5E47A62())) || func_95()) || iParam0)
	{
		if (func_98(unk_0xD803B885F5E47A62()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_92(func_94()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_92(int iParam0)
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
	return func_93(iParam0, 0);
	return 0;
}

int func_93(int iParam0, int iParam1)
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

int func_94()
{
	return Global_192FD0;
}

bool func_95()
{
	return (func_97() && func_45(func_96()));
}

int func_96()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23;
}

bool func_97()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 148;
}

bool func_98(int iParam0)
{
	return func_93(func_67(iParam0), 0);
}

bool func_99(int iParam0)
{
	return func_100(func_67(iParam0));
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 148 && func_46(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_23, 1))
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

void func_101(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0))
	{
		if (((((((((((!unk_0x0178C60FEA5C5A75() && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_31B, 2)) && func_993(unk_0xD803B885F5E47A62(), 1, 1)) && !Global_12061) && !Global_E545) && !unk_0x757EF87A33649210()) && !func_62(unk_0xD803B885F5E47A62(), 22)) && func_116(unk_0xD803B885F5E47A62()) != 0) && !func_109(func_110())) && !func_99(unk_0xD803B885F5E47A62())) && !func_108(func_67(unk_0xD803B885F5E47A62()))) && !func_107(func_67(unk_0xD803B885F5E47A62())))
		{
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11EC), 1);
			func_106(func_91(iParam0), 4294967295);
			func_102(1);
			unk_0x0674E58A79778E99(&(Global_26B66F.f_11EC), 0);
		}
	}
}

void func_102(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_103(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_122())
	{
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_103(bool bParam0)
{
	return func_104(unk_0xD803B885F5E47A62(), bParam0);
}

bool func_104(int iParam0, bool bParam1)
{
	return func_105(iParam0, bParam1, 1);
}

int func_105(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_46(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18D84D[iParam0 /*615*/].f_B;
	if (iVar0 != func_29() && Global_18D84D[iVar0 /*615*/].f_B.f_1C2 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_106(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam1);
}

int func_107(int iParam0)
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

int func_108(int iParam0)
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

int func_109(int iParam0)
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

int func_110()
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

void func_111(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_112()
{
	Global_25920E = 1;
}

int func_113()
{
	if (((((((func_67(unk_0xD803B885F5E47A62()) == 170 || func_67(unk_0xD803B885F5E47A62()) == 219) || func_67(unk_0xD803B885F5E47A62()) == 221) || func_67(unk_0xD803B885F5E47A62()) == 220) || func_67(unk_0xD803B885F5E47A62()) == 216) || func_67(unk_0xD803B885F5E47A62()) == 215) || func_67(unk_0xD803B885F5E47A62()) == 214) || func_67(unk_0xD803B885F5E47A62()) == 218)
	{
		return 1;
	}
	if (func_114(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_115(int iParam0)
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

int func_116(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_121(iParam0) && !func_120(iParam0)) && !unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 8));
	bVar2 = func_61(iParam0);
	bVar3 = func_85();
	bVar4 = func_769();
	if ((bVar1 && (func_63(iParam0) || func_119(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_118(iParam0)) && !func_117(iParam0)))
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

bool func_117(int iParam0)
{
	return func_62(iParam0, 19);
}

int func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_62(iParam0, 9);
	}
	return 0;
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

bool func_120(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 2);
}

int func_121(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18D84D[iVar0 /*615*/] != 4294967295;
	}
	return 0;
}

bool func_122()
{
	return Global_2537E2.f_AA3[0 /*80*/].f_1 != 0;
}

void func_123(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

void func_124(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	
	func_354(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_353(iParam0, uParam2->f_D, bParam3));
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
		iVar0 = (iVar0 + func_352(iParam0, bParam3));
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
	if (func_350(iParam0))
	{
		if (bParam1)
		{
			if (func_349(unk_0xD803B885F5E47A62()) > 0)
			{
				func_348();
			}
			else
			{
				func_347();
			}
		}
		else
		{
			func_346();
		}
	}
	func_330(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_328(iParam0, uParam2, &iVar0, &iVar5);
	func_302(iParam0, uParam2, &iVar0, &iVar5);
	func_299(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_282(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_26B66F.f_1404.f_17E = iVar4;
	}
	else
	{
		Global_26B66F.f_1404.f_17E = iVar5;
	}
	iVar8 = func_96();
	if (iVar8 != func_29() && iParam0 != 148)
	{
		if (func_281(unk_0xD803B885F5E47A62(), 0))
		{
			if (!func_279(unk_0xD803B885F5E47A62(), iVar8, 1))
			{
				func_234(&iVar0, 1);
			}
		}
	}
	func_229(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_198C74.f_A = iVar1;
		func_228();
		func_178(0, unk_0x16F2683693E537C9(), "", 3419251281, 1626430110, iVar1, 1, 4294967295, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_198C74.f_9 = iVar0;
		func_152(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_151(iParam0, iVar0);
		if (func_150(iParam0))
		{
			if (func_149(iParam0) > 4294967295)
			{
				func_148(func_149(iParam0), iVar0);
			}
		}
		Global_2594A0 = iVar0;
		func_147(&Global_258DD8, 0, 0);
	}
	if (func_118(unk_0xD803B885F5E47A62()) || func_61(unk_0xD803B885F5E47A62()))
	{
		func_135(iParam0);
	}
	if (func_100(iParam0))
	{
		Global_198C86.f_D = iVar0;
		Global_198C86.f_E = iVar1;
	}
	if (func_108(iParam0))
	{
		Global_198CBC.f_D = iVar0;
		Global_198CBC.f_E = iVar1;
	}
	if (func_134(iParam0))
	{
		Global_198CFB.f_C = iVar0;
		Global_198CFB.f_D = iVar1;
	}
	if (func_133(iParam0))
	{
		Global_198D27.f_C = iVar0;
		Global_198D27.f_D = iVar1;
	}
	if (func_132(iParam0))
	{
		Global_198D5D.f_C = iVar0;
		Global_198D5D.f_D = iVar1;
	}
	if (func_107(iParam0))
	{
		if (func_131(iParam0))
		{
			Global_198DAF.f_C = iVar0;
			Global_198DAF.f_D = iVar1;
		}
		else if (func_127(iParam0))
		{
			Global_198DE5.f_C = iVar0;
			Global_198DE5.f_D = iVar1;
		}
	}
	if (func_126(iParam0))
	{
		Global_198E39.f_C = iVar0;
		Global_198E39.f_D = iVar1;
	}
	if (func_125(iParam0))
	{
		Global_198E84.f_10 = iVar0;
		Global_198E84.f_11 = iVar1;
	}
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_127(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_128(func_129(unk_0xD803B885F5E47A62()))))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)
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

int func_129(int iParam0)
{
	if (func_67(iParam0) == 237 || func_67(iParam0) == 250)
	{
		return func_130(iParam0);
	}
	return 4294967295;
}

int func_130(int iParam0)
{
	if (func_68(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_B5;
	}
	return 4294967295;
}

int func_131(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_133(int iParam0)
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

int func_134(int iParam0)
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

void func_135(int iParam0)
{
	if (func_146(unk_0xD803B885F5E47A62()) && func_145())
	{
		if (func_144(iParam0))
		{
			func_138(10146, 4294967295);
		}
		else if (func_137(iParam0))
		{
			func_138(10148, 4294967295);
		}
		else if (func_93(iParam0, 1))
		{
			func_138(10149, 4294967295);
		}
		else if (func_136(iParam0))
		{
			func_138(10150, 4294967295);
		}
	}
}

int func_136(int iParam0)
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

int func_137(int iParam0)
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

void func_138(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_142(iParam0, func_143(iParam1), 0);
	iVar0++;
	if (!func_141(iParam0))
	{
		func_140(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_139(iParam0, iVar0, iParam1, 1);
	}
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_143(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_152DD4[func_143(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_152DDA[func_143(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_152DE0[func_143(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_152DE6[func_143(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_152DEC[func_143(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_152DB6[func_143(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_152DBC[func_143(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_152DC2[func_143(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_152DC8[func_143(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_152DCE[func_143(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_152D98[func_143(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_152D9E[func_143(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_152DA4[func_143(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_152DAA[func_143(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_152DB0[func_143(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_152DF2[func_143(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_152DF8[func_143(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_152DFE[func_143(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_152E04[func_143(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_152E0A[func_143(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_152E10[func_143(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_152E16[func_143(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_152E1C[func_143(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_152E22[func_143(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2775D1[0 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2775D1[1 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2775D1[2 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2775D1[3 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_277666[func_143(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_152E28[func_143(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_152E2E[func_143(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_152E34[func_143(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_152E3A[func_143(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_152E40[func_143(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_27761A[0 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_27761A[1 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_27761A[2 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_27761A[3 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_27761A[4 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_277669[0 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_277669[1 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_277669[2 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_277669[3 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_277669[4 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_277679[0 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_277679[1 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_277679[2 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_277679[3 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_277679[4 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_27761A[5 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2775D1[4 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_277689[func_143(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_277692[func_143(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27768C[func_143(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_277695[func_143(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27768F[func_143(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_277698[func_143(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27769B[func_143(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_27761A[6 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2775D1[5 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_27761A[7 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2775D1[6 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_27761A[8 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2775D1[7 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_27761A[9 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2775D1[8 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_27761A[10 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2775D1[9 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_27761A[11 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2775D1[10 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_27761A[12 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2775D1[11 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_27761A[13 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2775D1[12 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_27761A[14 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2775D1[13 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_27761A[15 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2775D1[14 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_27761A[16 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2775D1[15 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_27761A[17 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2775D1[16 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2775D1[17 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2775D1[18 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2775D1[19 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2775D1[20 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_27769E[func_143(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2776A1[func_143(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2776A4[func_143(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2776A7[func_143(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2776AA[func_143(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2776AD[func_143(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2776B0[func_143(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2776B3[func_143(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2776B6[func_143(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2776B9[func_143(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2776BC[func_143(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2776BF[func_143(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2776C2[func_143(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2776C5[func_143(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2775D1[21 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_27761A[23 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2775D1[22 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_27761A[24 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2775D1[23 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_140(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_143(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_141(int iParam0)
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

int func_142(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_143(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 4294967295))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_49();
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

int func_144(int iParam0)
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

bool func_145()
{
	return func_45(unk_0xD803B885F5E47A62());
}

bool func_146(int iParam0)
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_7B, 14);
}

void func_147(var uParam0, bool bParam1, bool bParam2)
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

void func_148(int iParam0, int iParam1)
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

int func_149(int iParam0)
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

int func_150(int iParam0)
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

void func_151(int iParam0, int iParam1)
{
	if (func_146(unk_0xD803B885F5E47A62()) && func_145())
	{
		if (func_144(iParam0) && iParam1 > 0)
		{
			func_140(10147, (func_142(10147, 4294967295, 0) + iParam1), 4294967295, 1, 0);
		}
	}
}

void func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_177();
	if (iVar5 != func_29())
	{
		func_176(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_175(1);
	Var7.f_1 = 4294967295;
	switch (iParam0)
	{
		case 168:
			if (!func_174())
			{
				unk_0x114C796E8DF14FB1(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_145())
			{
				if (!func_174())
				{
					Var7 = { func_173() };
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_172(Var7)), func_171(Var7), iParam4);
				}
			}
			else if (func_174())
			{
				func_159(3438960429, iParam1, &iVar4, 0, 1, 0);
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
			if (func_158())
			{
				if (!func_174())
				{
					unk_0x52E03D7A828118C8(iParam1, unk_0x12AB0310C2281427(func_172(func_157(unk_0xD803B885F5E47A62()))), 5, iParam4);
				}
			}
			else if (func_174())
			{
				func_159(3438960429, iParam1, &iVar4, 0, 1, 0);
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
			if (func_158())
			{
				if (!func_174())
				{
					iVar2 = func_153(uParam5->f_10, iParam4);
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
			else if (func_174())
			{
				func_159(463142405, iParam1, &iVar4, 0, 1, 0);
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
			if (func_174())
			{
				func_159(1407278493, iParam1, &iVar4, 0, 1, 0);
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
			if (func_158())
			{
				if (!func_174())
				{
					unk_0x5D421B9474B610E6(iParam1, uParam5->f_14, iParam4);
				}
			}
			else if (func_174())
			{
				func_159(3438960429, iParam1, &iVar4, 0, 1, 0);
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
			if (func_174())
			{
				func_159(3333932415, iParam1, &iVar4, 0, 1, 0);
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
			if (func_174())
			{
				func_159(1135468152, iParam1, &iVar4, 0, 1, 0);
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
			if (func_174())
			{
				func_159(3660240660, iParam1, &iVar4, 0, 1, 0);
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
			if (func_174())
			{
				func_159(1698417709, iParam1, &iVar4, 0, 1, 0);
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
				if (func_174())
				{
					func_159(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0xB0E03FD240577D6C(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_174())
			{
				func_159(2262437735, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0xB0E03FD240577D6C(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_174())
			{
				func_159(3438960429, iParam1, &iVar4, 0, 1, 0);
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

int func_153(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_156(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_154(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_154(int iParam0, int iParam1)
{
	return (func_155(iParam0) * iParam1);
}

int func_155(int iParam0)
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

float func_156(int iParam0, int iParam1)
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

int func_157(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return Global_184507[iParam0 /*876*/].f_112.f_B7[5 /*12*/];
}

bool func_158()
{
	return func_41(unk_0xD803B885F5E47A62());
}

void func_159(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_174())
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
				func_160(iParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_160(iParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_160(iParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_160(iParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_160(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_174())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_49()) || unk_0xDD2EE1F5DA6A6AB0())
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
			*uParam0 = func_167(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_166(1, iParam4);
			Global_411257 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_161(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_162(iParam0);
	}
}

void func_162(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_174())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_165(iParam0))
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
		func_163(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_163(var uParam0)
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
	func_164(&(uParam0->f_E));
	func_164(&(uParam0->f_E.f_D));
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

void func_164(var uParam0)
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

int func_165(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 1;
	}
	return 0;
}

void func_166(int iParam0, int iParam1)
{
	Global_25952B = iParam1;
	Global_25952A = iParam0;
}

int func_167(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0)
		{
			if (!func_174())
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
				func_168(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_168(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_170(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_169();
		unk_0xFB061A86A7AC749F(1, &vVar0, 36, iVar1);
	}
}

void func_169()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_170(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 4294967295)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_171(int iParam0)
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

char* func_172(int iParam0)
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

struct<2> func_173()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_C1;
}

int func_174()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

bool func_175(bool bParam0)
{
	return func_281(unk_0xD803B885F5E47A62(), bParam0);
}

void func_176(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_18D84D[iParam0 /*615*/].f_B.f_8[0];
	*uParam2 = Global_18D84D[iParam0 /*615*/].f_B.f_8[1];
}

int func_177()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

int func_178(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_179(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_179(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_189(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == 3702944691 || iParam4 == 2379775567)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0xEC560E589DF8370E(iParam1))
			{
				iVar1 = unk_0x940C1429253D3B1B(iParam1);
				func_185(unk_0x64430C979F516F7A(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_180(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_180(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_183(iParam0, 1) };
	if (iParam0 == func_182(unk_0x16F2683693E537C9()))
	{
		func_181(1);
	}
	func_185(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_181(int iParam0)
{
	Global_2537E2.f_763 = iParam0;
}

int func_182(int iParam0)
{
	return iParam0;
}

Vector3 func_183(int iParam0, bool bParam1)
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
	if (iParam0 == func_184(unk_0x16F2683693E537C9()) && unk_0xA4FD7964FEE91ED8(unk_0x5A0033B025D45F1B()) == 4)
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

int func_184(int iParam0)
{
	return iParam0;
}

void func_185(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2537E2.f_50A[iVar1 /*30*/].f_4 = func_188(Global_2537E2.f_50A[iVar1 /*30*/], &Global_14063D, &Global_14063E);
			Global_2537E2.f_50A[iVar1 /*30*/].f_7 = unk_0x2B6E0A53779D29EA();
			Global_2537E2.f_50A[iVar1 /*30*/].f_3 = iParam1;
			Global_2537E2.f_50A[iVar1 /*30*/].f_8 = iParam2;
			Global_2537E2.f_50A[iVar1 /*30*/].f_9 = func_187();
			Global_2537E2.f_50A[iVar1 /*30*/].f_A = func_186();
			StringCopy(&(Global_2537E2.f_50A[iVar1 /*30*/].f_16), sParam3, 16);
			Global_2537E2.f_50A[iVar1 /*30*/].f_1A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), iParam4);
		}
	}
}

int func_186()
{
	if (Global_2537E2.f_763)
	{
		Global_2537E2.f_763 = 0;
		return 1;
	}
	Global_2537E2.f_763 = 0;
	return 0;
}

var func_187()
{
	var uVar0;
	
	uVar0 = Global_2537E2.f_765;
	Global_2537E2.f_765 = 1;
	return uVar0;
}

float func_188(vector3 vParam0, var uParam1, var uParam2)
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

var func_189(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_190(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_190(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_227(unk_0xD803B885F5E47A62()) || func_226(unk_0xD803B885F5E47A62()))
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
	else if (func_223() || func_222(unk_0xD803B885F5E47A62()))
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
	if (func_221(sParam2))
	{
	}
	if (func_220())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_218(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_217(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_214(0, &iVar1);
					break;
				
				case 3:
					func_214(1, &iVar1);
					break;
				
				case 1:
					func_210(&iVar1);
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
			func_209(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_201((func_208(unk_0xD803B885F5E47A62()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x189A6F4108CDFDD6(iVar1, iParam8, iParam9);
				if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_2 != 4294967295)
				{
					func_209(1165, iVar1, 4294967295);
				}
				func_195(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 4294967295)
			{
				func_191((func_193(unk_0xD803B885F5E47A62()) + iVar1));
			}
			else
			{
				func_191((func_193(unk_0xD803B885F5E47A62()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_191(int iParam0)
{
	if (func_220())
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_5 = iParam0;
		func_192(joaat("mpply_globalxp"), iParam0);
	}
}

void func_192(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 1);
	}
}

int func_193(int iParam0)
{
	if (iParam0 > 4294967295)
	{
		if (func_993(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return func_194(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_5;
			}
		}
		else
		{
			return func_194(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_194(int iParam0)
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

void func_195(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_200(unk_0xD803B885F5E47A62()) };
	if (unk_0x080E9D045AEE5605())
	{
		if (unk_0xF2EC2A39FF9E838D(&Var0))
		{
			iVar1 = func_198(func_199(&Var0));
			if (iVar1 == 0)
			{
				func_197(&Global_152D8B, iParam0);
				func_196(joaat("mpply_crew_local_xp_0"), Global_152D8B);
			}
			else if (iVar1 == 1)
			{
				func_197(&Global_152D8C, iParam0);
				func_196(joaat("mpply_crew_local_xp_1"), Global_152D8C);
			}
			else if (iVar1 == 2)
			{
				func_197(&Global_152D8D, iParam0);
				func_196(joaat("mpply_crew_local_xp_2"), Global_152D8D);
			}
			else if (iVar1 == 3)
			{
				func_197(&Global_152D8E, iParam0);
				func_196(joaat("mpply_crew_local_xp_3"), Global_152D8E);
			}
			else if (iVar1 == 4)
			{
				func_197(&Global_152D8F, iParam0);
				func_196(joaat("mpply_crew_local_xp_4"), Global_152D8F);
			}
		}
	}
}

void func_196(int iParam0, int iParam1)
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

void func_197(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_198(int iParam0)
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

int func_199(var uParam0)
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

struct<13> func_200(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 13);
	return Var0;
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	if (func_220())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2583 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_152E1C[func_143(4294967295)])
				{
					unk_0x189A6F4108CDFDD6(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_152E1C[func_143(4294967295)])
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
		if (func_207(unk_0xD803B885F5E47A62()))
		{
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_1 = iParam0;
			Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_D3.f_6 = func_205(iParam0, 1);
		}
		func_139(639, iParam0, 4294967295, 1);
		func_140(640, func_205(iParam0, 1), 4294967295, 1, 0);
		Global_152E1C[func_143(4294967295)] = iParam0;
		func_202(3185322862, 7, 0);
	}
}

void func_202(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_204(iParam1, iParam2))
	{
		iVar0 = func_203();
		Global_258B8D[iVar0] = iParam1;
		Global_258B98[iVar0] = iParam0;
	}
}

int func_203()
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

int func_204(int iParam0, var uParam1)
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

int func_205(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_206(iParam0, 0);
}

int func_206(int iParam0, int iParam1)
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

int func_207(int iParam0)
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

int func_208(int iParam0)
{
	if (Global_1406D3.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == unk_0xD803B885F5E47A62())
			{
				return Global_152E1C[func_143(4294967295)];
			}
			else if (func_207(iParam0))
			{
				return Global_184507[iParam0 /*876*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_152E1C[func_143(4294967295)];
	}
	return 0;
}

void func_209(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_142(iParam0, func_143(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_141(iParam0))
	{
		func_140(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_139(iParam0, iVar0, iParam2, 1);
	}
}

void func_210(int iParam0)
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
				if (unk_0x08067D4957B73C02(iVar5) == iVar1 || func_213(unk_0x08067D4957B73C02(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xD803B885F5E47A62())
					{
						if (func_212(unk_0xD803B885F5E47A62(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_211(*iParam0, 100) * (10f * Global_40001.f_107A)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_211(*iParam0, 100) * (20f * Global_40001.f_1073)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_211(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_212(int iParam0, int iParam1)
{
	if (unk_0x080E9D045AEE5605())
	{
		Global_265942 = { func_200(iParam0) };
		Global_26594F = { func_200(iParam1) };
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

int func_213(int iParam0, int iParam1, int iParam2)
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

void func_214(bool bParam0, int iParam1)
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
				if (func_993(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xD803B885F5E47A62())
					{
						iVar1++;
						if (func_212(unk_0xD803B885F5E47A62(), iVar4))
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
			if (func_993(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xD803B885F5E47A62())
				{
					if (func_215(unk_0xD803B885F5E47A62(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_212(unk_0xD803B885F5E47A62(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_211(*iParam1, 100) * (10f * Global_40001.f_107A)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_211(*iParam1, 100) * (20f * Global_40001.f_1073)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_215(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_216(iParam0), func_216(iParam1));
	return 0f;
}

Vector3 func_216(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

int func_217(int iParam0)
{
	int iVar0;
	
	if (unk_0xA0501A3E65437842() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_211(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_218(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x51D1D19912234EA0(iParam0) > func_208(unk_0xD803B885F5E47A62()))
		{
			iParam0 = -func_208(unk_0xD803B885F5E47A62());
		}
	}
	if (func_219(8000, 0, 0) > 0)
	{
		if (func_219(8000, 0, 0) < (iParam0 + func_208(unk_0xD803B885F5E47A62())))
		{
			iParam0 = (func_219(8000, 0, 0) - func_208(unk_0xD803B885F5E47A62()));
		}
	}
	return iParam0;
}

int func_219(int iParam0, bool bParam1, int iParam2)
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

int func_220()
{
	return 1;
}

int func_221(char* sParam0)
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

int func_222(int iParam0)
{
	return func_132(func_67(iParam0));
}

bool func_223()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_225();
	}
	return func_224(Global_440000.f_2F9AE);
}

int func_224(int iParam0)
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

bool func_225()
{
	return Global_2564C8.f_11;
}

bool func_226(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 2;
}

bool func_227(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 7;
}

void func_228()
{
	Global_25920D = 1;
}

void func_229(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_233(7))
	{
		return;
	}
	iVar0 = func_232(iParam0);
	iVar1 = func_231(iParam0);
	iVar2 = unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(Global_26B66F.f_1404.f_109, unk_0x2B6E0A53779D29EA()));
	if (func_230(iParam0) != 4294967295)
	{
		if (iVar2 > func_230(iParam0))
		{
			iVar2 = func_230(iParam0);
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

int func_230(int iParam0)
{
	if (func_93(iParam0, 0) || func_137(iParam0))
	{
		return Global_40001.f_4837;
	}
	if (func_144(iParam0))
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

int func_231(int iParam0)
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
			if (!func_158())
			{
				return Global_40001.f_523D;
			}
			break;
		
		case 226:
			if (!func_158())
			{
				return Global_40001.f_5229;
			}
			break;
		
		case 227:
			if (!func_158())
			{
				return Global_40001.f_5235;
			}
			break;
		
		case 229:
			if (!func_158())
			{
				return Global_40001.f_56C1;
			}
			break;
		
		case 230:
			if (!func_158())
			{
				return Global_40001.f_5721;
			}
			break;
		
		case 233:
			if (!func_158())
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
			if (!func_158())
			{
				return Global_40001.f_5D88;
			}
			break;
		
		case 238:
			if (!func_158())
			{
				return Global_40001.f_5DF7;
			}
			break;
		
		case 249:
			if (!func_158())
			{
				return Global_40001.f_5E07;
			}
			break;
		
		case 243:
			if (!func_158())
			{
				return Global_40001.f_66C0;
			}
			break;
		
		case 158:
			if (!func_158())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_232(int iParam0)
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
			if (func_103(0))
			{
				return Global_40001.f_4663;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_103(0))
			{
				return Global_40001.f_46BE;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_103(0))
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
			if (func_103(0))
			{
				return Global_40001.f_523C;
			}
			break;
		
		case 226:
			if (func_103(0))
			{
				return Global_40001.f_5228;
			}
			break;
		
		case 227:
			if (func_103(0))
			{
				return Global_40001.f_5234;
			}
			break;
		
		case 229:
			if (func_103(0))
			{
				return Global_40001.f_56C0;
			}
			break;
		
		case 230:
			if (func_103(0))
			{
				return Global_40001.f_5720;
			}
			break;
		
		case 233:
			if (func_103(0))
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
			if (func_103(0))
			{
				return Global_40001.f_5D87;
			}
			break;
		
		case 238:
			if (func_103(0))
			{
				return Global_40001.f_5DF6;
			}
			break;
		
		case 249:
			if (func_103(0))
			{
				return Global_40001.f_5E06;
			}
			break;
		
		case 243:
			return Global_40001.f_66BC;
		
		case 158:
			if (func_103(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_233(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_2D, iParam0);
}

void func_234(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_158())
		{
			if (func_175(0))
			{
				if (!func_103(0))
				{
					if (unk_0x40B8C182D63932FC(func_177()))
					{
						if (func_278() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_278());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_276(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_239("GB_BCUT_TICK1", func_177(), iVar0, 0, 0, 1);
						}
						func_238(20);
						func_235(func_177(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_235(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_993(iParam0, 0, 1))
	{
		Var0 = 3000381556;
		Var0.f_1 = unk_0xD803B885F5E47A62();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_237(iParam0);
		func_236(&(Var0.f_6), &(Var0.f_7));
		unk_0xFB061A86A7AC749F(1, &Var0, 8, func_170(iParam0));
	}
}

void func_236(var uParam0, var uParam1)
{
	*uParam0 = Global_192FD0.f_9;
	*uParam1 = Global_192FD0.f_A;
}

var func_237(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_215;
}

void func_238(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

int func_239(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0x3A820E495A7BA3E5(func_246(iParam1, 4294967294, 1, 0, 0));
		unk_0xD06AC7C87A34A6AD(func_244(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x3A820E495A7BA3E5(iParam3);
		}
		unk_0x6D99DF8263D35CE5(iParam2);
		iVar0 = unk_0x47AFB2993A42BD03(0, 1);
		func_240(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_240(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_243() || !unk_0xA14BB9332558B949()) || !func_47(unk_0xD803B885F5E47A62(), 0))
	{
		return;
	}
	iVar0 = func_241(iParam2);
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

int func_241(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_197EBE - 1))
	{
		if (iParam0 > Global_197EBE.f_5[iVar0 /*53*/].f_1)
		{
			func_242(iVar0);
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

void func_242(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_197EBE.f_5[iVar0 /*53*/] = { Global_197EBE.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_243()
{
	return unk_0xC146D5FBD23C6954(2532323046);
}

var func_244(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_245(&cVar0);
}

var func_245(char[4] cParam0)
{
	return cParam0;
}

int func_246(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_274(iParam0) && !bParam4)
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
	if (((func_274(unk_0xD803B885F5E47A62()) || (func_273() && func_272())) && !unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 31)) && !bParam4)
	{
		iVar1 = func_271();
		if (unk_0xC844350D5D58C99A(iVar1))
		{
			if (unk_0x34BFC6F0CB887BC2(iVar1))
			{
				if (unk_0x83FACCC48B68F9D1(iVar1) != 4294967295)
				{
					if (func_993(unk_0x83FACCC48B68F9D1(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
						{
							if (Global_440000.f_2E673[iParam1] != 4294967295)
							{
								return func_269(iParam1, iParam0, 0);
							}
							else
							{
								return func_258(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_258(iParam0, unk_0x83FACCC48B68F9D1(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
			{
				if (Global_440000.f_2E673[iParam1] != 4294967295)
				{
					return func_269(iParam1, iParam0, 0);
				}
				else
				{
					return func_247(0, 4294967295, 0);
				}
			}
			else
			{
				return func_247(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && unk_0xA14BB9332558B949()) && iParam1 < 4)
	{
		if (Global_440000.f_2E673[iParam1] != 4294967295)
		{
			return func_269(iParam1, iParam0, 0);
		}
		else
		{
			return func_258(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
		}
	}
	return func_258(iParam0, unk_0xD803B885F5E47A62(), iParam1, bParam2, bParam3);
}

int func_247(bool bParam0, int iParam1, bool bParam2)
{
	return func_248(unk_0xD803B885F5E47A62(), bParam0, iParam1, bParam2);
}

int func_248(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x40B8C182D63932FC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x08067D4957B73C02(iParam0);
	if ((func_257() || (func_256() && func_254())) && Global_152E4D.f_1)
	{
		if (bParam1)
		{
			return func_253(iParam2, iVar0);
		}
		else
		{
			return func_253(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_213(iVar0, iParam2, 0) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_252(1);
				}
				else
				{
					return func_252(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_4, 20))
			{
				return func_249(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_249(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_252(1);
	}
	return func_252(0);
}

int func_249(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_251(iParam0, iParam1, iParam3);
	if (func_250(Global_440000.f_2F9AE, 1))
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

int func_250(int iParam0, bool bParam1)
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

int func_251(int iParam0, int iParam1, int iParam2)
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
			if (!func_213(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_252(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_253(int iParam0, int iParam1)
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_251(iParam1, iParam0, 4);
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

bool func_254()
{
	if (func_255())
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 4);
}

bool func_255()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 12);
}

bool func_256()
{
	if (unk_0xA14BB9332558B949())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0);
	}
	return ((unk_0xEAE0D21A50E6C7F4(Global_440000.f_39DE1, 0) || Global_193AE6) && unk_0x8A22C4C08282BF26(joaat("fm_deathmatch_creator")) > 0);
}

int func_257()
{
	if (func_255() && unk_0xA14BB9332558B949())
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_265())
			{
				iVar3 = func_263(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_261(iVar3);
				}
			}
			if ((func_260(iParam1, iParam0, iVar0, 0) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18)) || ((func_213(unk_0x08067D4957B73C02(iParam1), unk_0x08067D4957B73C02(iParam0), 0) && unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 23)) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 18)))
			{
				return func_252(1);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 26))
			{
				return func_259(1);
			}
			else
			{
				return func_248(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_18060A || Global_180601) || Global_184507[iParam0 /*876*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_18060A == 1 && Global_180614 == 0))
			{
				return func_252(1);
			}
			else
			{
				return func_248(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_180605 && Global_18040E.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_263(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_261(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_259(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_260(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_261(int iParam0)
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_262(iParam0);
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

var func_262(int iParam0)
{
	return Global_24E4E9.f_332.f_2C[iParam0 /*2*/].f_1;
}

int func_263(int iParam0)
{
	if (!iParam0 == func_29())
	{
		if (func_281(iParam0, 1))
		{
			return Global_24E4E9.f_332.f_B[func_264(iParam0)];
		}
	}
	return 4294967295;
}

int func_264(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_29();
}

int func_265()
{
	if (((func_268() || func_267()) || func_225()) || func_266())
	{
		return 1;
	}
	return 0;
}

var func_266()
{
	return Global_2564C8.f_13;
}

var func_267()
{
	return Global_2564C8.f_10;
}

var func_268()
{
	return Global_2564C8.f_F;
}

int func_269(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC947.f_E[iParam0];
	if (func_265())
	{
		iVar2 = func_263(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_261(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_10F[iParam0 /*15700*/].f_1971[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_29())
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
			iVar0 = func_248(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_15, 13))
		{
			iVar0 = func_270(iParam0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_440000.f_F, 26) && !func_213(iParam0, unk_0x08067D4957B73C02(iParam1), 0))
		{
			iVar0 = func_259(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_270(int iParam0)
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

var func_271()
{
	return Global_240006.f_2;
}

bool func_272()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 4);
}

bool func_273()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 14);
}

int func_274(int iParam0)
{
	if (func_47(iParam0, 0))
	{
		return 1;
	}
	if (func_275())
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

bool func_275()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 3);
}

void func_276(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_277(1);
	}
	else
	{
		iVar1 = func_277(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_277(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_3066;
}

int func_278()
{
	return Global_40001.f_3065;
}

int func_279(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_29())
	{
		if (!bParam2)
		{
			if (func_280(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_18D84D[iParam0 /*615*/].f_B != func_29())
		{
			return iParam1 == Global_18D84D[iParam0 /*615*/].f_B;
		}
	}
	return 0;
}

int func_280(int iParam0, int iParam1)
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_18D84D[iParam0 /*615*/].f_B != func_29())
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

bool func_281(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_41(iParam0))
		{
			return 0;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_29();
}

void func_282(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar18 = func_103(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_158())
		{
			iVar17 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar17 = func_177();
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
				iVar2 = func_298(Global_184507[iVar11 /*876*/].f_356, *uParam3);
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
			iVar10 = func_297(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0xD803B885F5E47A62())
				{
					func_296("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_198DAF.f_31 = *uParam3;
			if (iVar17 == unk_0xD803B885F5E47A62())
			{
				if (iVar2 > 0)
				{
					func_295(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_293(*uParam3);
				}
				iVar6 = func_292(&uVar5);
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
						func_238(140);
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
								if (func_291(iVar23))
								{
									func_283(iVar23, 1, 198210293);
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
					func_238(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_283(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_285(iParam0);
	func_284(iParam0, uVar0, iParam1, iParam2);
}

void func_284(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 3693313620;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_237(iParam0);
	func_236(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_29())
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			unk_0xFB061A86A7AC749F(1, &Var0, 8, func_170(iParam0));
		}
	}
}

int func_285(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_290();
	iVar0 = func_288(iParam0, iVar0);
	iVar1 = Global_18D84D[func_177() /*615*/].f_B.f_1C1;
	iVar0 = (iVar0 + (iVar1 * Global_40001.f_3A6B));
	if (iVar0 < func_287())
	{
		iVar0 = func_287();
	}
	if (iVar0 > func_286())
	{
		iVar0 = func_286();
	}
	return iVar0;
}

int func_286()
{
	return Global_40001.f_3A6C;
}

int func_287()
{
	return Global_40001.f_3F03;
}

int func_288(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_349(iParam0) * func_289());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_289()
{
	return Global_40001.f_3F02;
}

var func_290()
{
	return Global_40001.f_305D;
}

int func_291(int iParam0)
{
	if (unk_0x40B8C182D63932FC(iParam0))
	{
		if (iParam0 != unk_0xD803B885F5E47A62())
		{
			if (func_279(iParam0, unk_0xD803B885F5E47A62(), 0))
			{
				if (!func_62(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_292(var uParam0)
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
			if (!func_47(iVar2, 0) && !func_279(iVar2, unk_0xD803B885F5E47A62(), 1))
			{
				iVar1++;
			}
			else if (func_47(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_293(int iParam0)
{
	func_294(iParam0, 7236);
}

void func_294(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_142(iParam1, 4294967295, 0);
	func_140(iParam1, (iVar0 + iParam0), 4294967295, 1, 0);
}

void func_295(int iParam0)
{
	func_294(iParam0, 7231);
}

int func_296(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 4294967295;
	unk_0x1E64CE678ED5F61E(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	iVar0 = unk_0x47AFB2993A42BD03(0, 1);
	func_240(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_297(int iParam0)
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

int func_298(struct<5> Param0, int iParam1)
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

void func_299(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_103(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_158())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_177();
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
			iVar2 = func_154(uParam1->f_10, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_153(uParam1->f_10, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_301(*iParam2) > 0)
			{
				if (iVar15 == unk_0xD803B885F5E47A62())
				{
					func_296("SMTICK_RONCUT", func_301(*iParam2));
				}
				*iParam2 = (*iParam2 - func_301(*iParam2));
			}
			if (iVar15 == unk_0xD803B885F5E47A62())
			{
				func_300(iVar2, iVar9);
				iVar6 = func_292(&uVar5);
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
						func_238(44);
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
								if (func_291(iVar20))
								{
									func_283(iVar20, 1, 1160415507);
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
					func_238(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_300(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_294(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_294(iParam1, 6117);
	}
}

int func_301(int iParam0)
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

void func_302(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_103(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_158())
		{
			iVar15 = unk_0xD803B885F5E47A62();
		}
		else
		{
			iVar15 = func_177();
		}
		if (iVar15 != 4294967295)
		{
			iVar16 = func_157(iVar15);
			iVar0 = (func_327(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_323(iVar15, iVar16, iVar1);
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
				func_317(iVar16, iVar2);
				if (func_313(iVar16) >= Global_40001.f_5067 || iVar2 >= Global_40001.f_5067)
				{
					func_303(5);
				}
				iVar6 = func_292(&uVar5);
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
						func_238(108);
					}
					else
					{
						func_238(110);
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
								if (func_291(iVar20))
								{
									func_283(iVar20, 1, 2389839094);
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
					func_238(112);
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

void func_303(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_40001.f_505B)
			{
				if (func_305(Global_40001.f_505C))
				{
					func_304("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_40001.f_505D)
			{
				if (func_305(Global_40001.f_505E))
				{
					func_304("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_40001.f_505F)
			{
				if (func_305(Global_40001.f_5060))
				{
					func_304("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_40001.f_5061)
			{
				if (func_305(Global_40001.f_5062))
				{
					func_304("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_40001.f_5063)
			{
				if (func_305(Global_40001.f_5064))
				{
					func_304("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_40001.f_5065)
			{
				if (func_305(Global_40001.f_5066))
				{
					func_296("CLOTHAWDSTRAP3", Global_40001.f_5067);
				}
			}
			break;
		
		case 6:
			if (Global_40001.f_5068)
			{
				if (func_305(Global_40001.f_5069))
				{
					func_296("CLOTHAWDSTRAP5", Global_40001.f_50ED);
				}
			}
			break;
		
		case 7:
			if (Global_40001.f_506B)
			{
				if (func_305(Global_40001.f_506C))
				{
					func_304("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_40001.f_506D)
			{
				if (func_305(Global_40001.f_506E))
				{
					func_304("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_40001.f_506F)
			{
				if (func_305(Global_40001.f_5070))
				{
					func_304("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_40001.f_5071)
			{
				if (func_305(Global_40001.f_5072))
				{
					func_304("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_40001.f_5073)
			{
				if (func_305(Global_40001.f_5074))
				{
					func_304("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_40001.f_5075)
			{
				if (func_305(Global_40001.f_5076))
				{
					func_304("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_40001.f_5077)
			{
				if (func_305(Global_40001.f_5078))
				{
					func_304("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_40001.f_5079)
			{
				if (func_305(Global_40001.f_507A))
				{
					func_304("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_304(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
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
		Global_265942 = { func_200(unk_0xD803B885F5E47A62()) };
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
	func_240(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case 3103481304:
		case 2559625089:
			if (!func_310(15417, 4294967295, 4294967295))
			{
				func_309(15417, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case 4174055868:
		case 2887664642:
		case 2255168310:
			if (!func_310(15418, 4294967295, 4294967295))
			{
				func_309(15418, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case 2935769924:
		case 4153970748:
		case 2444324359:
			if (!func_310(15425, 4294967295, 4294967295))
			{
				func_309(15425, 1, 4294967295, 1);
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
			if (!func_310(15405, 4294967295, 4294967295))
			{
				func_309(15405, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case 3723642317:
		case 1374601256:
			if (!func_310(15393, 4294967295, 4294967295))
			{
				func_309(15393, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case 3634679186:
			if (!func_310(15409, 4294967295, 4294967295))
			{
				func_309(15409, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case 2492427392:
		case 3289780757:
		case 3868944767:
			if (!func_310(15396, 4294967295, 4294967295))
			{
				func_309(15396, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2196597796:
		case 3097998512:
		case 2980310317:
		case 3162445127:
			if (!func_310(15412, 4294967295, 4294967295))
			{
				func_309(15412, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3122223739:
		case 2792755277:
		case 1110085176:
		case 3405296186:
			if (!func_308(209, 4294967295))
			{
				func_306(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2411791819:
		case 3710352815:
		case 2557983445:
		case 4112352903:
			if (!func_310(15403, 4294967295, 4294967295))
			{
				func_309(15403, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case 3404257586:
		case 2797983601:
		case 48701978:
			if (!func_308(209, 4294967295))
			{
				func_306(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3424976530:
		case 3713826333:
		case 1827333048:
		case 3648114472:
			if (!func_310(15389, 4294967295, 4294967295))
			{
				func_309(15389, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3752338848:
		case 3424508832:
		case 420690954:
		case 3886574485:
			if (!func_308(209, 4294967295))
			{
				func_306(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_310(15398, 4294967295, 4294967295))
			{
				func_309(15398, 1, 4294967295, 1);
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
			if (!func_310(15400, 4294967295, 4294967295))
			{
				func_309(15400, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3127501824:
		case 3981548879:
		case 4091931946:
		case 2761646929:
		case 2065127290:
		case 3904886266:
			if (!func_308(209, 4294967295))
			{
				func_306(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2189358123:
		case 3596480360:
		case 917598912:
		case 939297301:
		case 4238563984:
		case 2926043467:
			if (!func_310(15408, 4294967295, 4294967295))
			{
				func_309(15408, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2430046428:
		case 3222061766:
		case 682284723:
		case 1186965403:
		case 4002266725:
		case 2226228703:
			if (!func_308(209, 4294967295))
			{
				func_306(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case 3646067695:
		case 3682843522:
			if (!func_310(15411, 4294967295, 4294967295))
			{
				func_309(15411, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case 3405772618:
		case 801334272:
			if (!func_310(15397, 4294967295, 4294967295))
			{
				func_309(15397, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case 4148261629:
			if (!func_310(15413, 4294967295, 4294967295))
			{
				func_309(15413, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case 2297277414:
		case 627387411:
		case 3447136105:
			if (!func_310(15391, 4294967295, 4294967295))
			{
				func_309(15391, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case 2731313194:
		case 1932815241:
		case 2677758273:
		case 308545041:
		case 1682427144:
			if (!func_310(15388, 4294967295, 4294967295))
			{
				func_309(15388, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case 3574885561:
		case 1626031863:
		case 2903012379:
		case 35480964:
		case 2029975158:
			if (!func_308(209, 4294967295))
			{
				func_306(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3170262904:
		case 3444874261:
		case 926585800:
		case 2461997424:
		case 1539395388:
		case 1377465778:
			if (!func_310(15401, 4294967295, 4294967295))
			{
				func_309(15401, 1, 4294967295, 1);
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
			if (!func_310(15394, 4294967295, 4294967295))
			{
				func_309(15394, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3760111810:
		case 3126392231:
		case 2927838092:
		case 3288939386:
			if (!func_308(209, 4294967295))
			{
				func_306(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3778634034:
		case 756873456:
		case 87453937:
		case 2856191972:
			if (!func_310(15406, 4294967295, 4294967295))
			{
				func_309(15406, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case 3564929588:
		case 2608307573:
		case 3200692489:
			if (!func_310(15395, 4294967295, 4294967295))
			{
				func_309(15395, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case 3324508810:
		case 1992217604:
		case 2946241204:
			if (!func_308(209, 4294967295))
			{
				func_306(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2804308795:
		case 975601953:
		case 2360410088:
		case 1786218600:
			if (!func_310(15410, 4294967295, 4294967295))
			{
				func_309(15410, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2559332058:
		case 1614208560:
		case 3260934977:
		case 2436945402:
			if (!func_310(15407, 4294967295, 4294967295))
			{
				func_309(15407, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case 3568934735:
		case 1747334867:
		case 1237632771:
			if (!func_308(209, 4294967295))
			{
				func_306(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2363349808:
		case 2469980134:
		case 236389050:
		case 1987485798:
			if (!func_308(209, 4294967295))
			{
				func_306(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2568634995:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_310(15414, 4294967295, 4294967295))
			{
				func_309(15414, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2912044766:
		case 734151492:
		case 3937330446:
		case 3272973588:
			if (!func_310(15415, 4294967295, 4294967295))
			{
				func_309(15415, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case 2528104976:
		case 479676642:
		case 2640138660:
			if (!func_310(15399, 4294967295, 4294967295))
			{
				func_309(15399, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2518176946:
		case 579562906:
		case 242920617:
		case 2929259547:
			if (!func_310(15404, 4294967295, 4294967295))
			{
				func_309(15404, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2306910001:
		case 3675212365:
		case 3075243594:
		case 3906758817:
			if (!func_308(209, 4294967295))
			{
				func_306(209, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case 2717995956:
		case 2087194554:
			if (!func_310(15392, 4294967295, 4294967295))
			{
				func_309(15392, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case 2889930927:
		case 3672065391:
		case 981732339:
			if (!func_310(15390, 4294967295, 4294967295))
			{
				func_309(15390, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case 3313834683:
		case 1271443068:
			if (!func_310(15402, 4294967295, 4294967295))
			{
				func_309(15402, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 4002044941:
		case 4260428506:
		case 2385980452:
		case 2509849112:
			if (!func_310(15416, 4294967295, 4294967295))
			{
				func_309(15416, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2799534611:
		case 1898518287:
		case 2029126042:
		case 2773934483:
			if (!func_308(209, 4294967295))
			{
				func_306(209, 1, 4294967295, 1);
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
			if (!func_310(15426, 4294967295, 4294967295))
			{
				func_309(15426, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3479260505:
		case 3228839791:
		case 1281631799:
		case 2775938488:
			if (!func_310(15422, 4294967295, 4294967295))
			{
				func_309(15422, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 2976164949:
		case 2928217253:
		case 447234752:
		case 1996626130:
			if (!func_310(15423, 4294967295, 4294967295))
			{
				func_309(15423, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case 2313207439:
			if (!func_310(15421, 4294967295, 4294967295))
			{
				func_309(15421, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case 2655677837:
		case 3732359775:
		case 3415687675:
			if (!func_310(15427, 4294967295, 4294967295))
			{
				func_309(15427, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 3375652548:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_310(15419, 4294967295, 4294967295))
			{
				func_309(15419, 1, 4294967295, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case 3410686596:
		case 4208984884:
		case 1573086793:
			if (!func_310(15420, 4294967295, 4294967295))
			{
				func_309(15420, 1, 4294967295, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_306(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_307())
	{
		iVar0 = Global_276C68[iParam0 /*3*/][func_143(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xD8B681091EBE4064(iVar0, bParam1, iParam3);
		}
	}
}

int func_307()
{
	return 1;
	return 0;
}

int func_308(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_276C68[iParam0 /*3*/][func_143(iParam1)];
	if (unk_0x89484FAA0691E684(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_309(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_49();
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

int func_310(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_49();
	}
	iVar1 = func_312(iParam0, iParam1);
	uVar2 = func_311(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_311(int iParam0)
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

int func_312(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_49();
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

int func_313(int iParam0)
{
	int iVar0;
	
	iVar0 = func_315(iParam0);
	return func_142(func_314(iVar0), 4294967295, 0);
}

int func_314(int iParam0)
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

int func_315(int iParam0)
{
	int iVar0;
	
	if (func_316(iParam0))
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

int func_316(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_317(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_315(iParam0);
	iVar1 = func_314(iVar0);
	iVar2 = (func_142(iVar1, 4294967295, 0) + iParam1);
	func_140(iVar1, iVar2, 4294967295, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_320(9357, 4294967295, 4294967295) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iVar0 /*12*/] != 0)
			{
				iVar1 = func_314(iVar0);
				iVar3 = (iVar3 + func_142(iVar1, 4294967295, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_319(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_318(9357, iVar5, 4294967295, 1);
	}
}

var func_318(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_49();
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

int func_319(int iParam0)
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

int func_320(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	iVar1 = func_322(iParam0, iParam1);
	iVar2 = func_321(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_321(int iParam0)
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

int func_322(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_49();
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

int func_323(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_171(iParam1);
	if (func_316(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_40001.f_4240;
				if (func_324(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4245);
				}
				if (func_324(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_424A);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_40001.f_423F;
				if (func_324(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4244);
				}
				if (func_324(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4249);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_40001.f_423E;
				if (func_324(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4243);
				}
				if (func_324(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4248);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_40001.f_423C;
				if (func_324(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4241);
				}
				if (func_324(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4246);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_40001.f_423D;
				if (func_324(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_4242);
				}
				if (func_324(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_4247);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_40001.f_5244;
				if (func_324(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_40001.f_5246);
				}
				if (func_324(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_40001.f_5245);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_324(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_326(iParam0, iParam1))
	{
		iVar0 = func_325(iParam0, iParam1);
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_325(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_316(iParam1) && iParam0 != func_29())
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

int func_326(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_316(iParam1) && iParam0 != func_29())
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

int func_327(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_316(iParam1))
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

void func_328(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_145())
			{
				Var0 = { func_173() };
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
				iVar6 = func_323(unk_0xD803B885F5E47A62(), Var0, *uParam3);
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
				iVar10 = func_292(&uVar9);
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
					func_238(86);
				}
				Global_26B66F.f_1404.f_17D = *iParam2;
			}
			else if (func_103(0))
			{
				Var14 = { func_329(func_177()) };
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
				iVar20 = func_323(func_177(), Var14, *uParam3);
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

struct<2> func_329(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_C1;
}

void func_330(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_41(unk_0xD803B885F5E47A62()))
		{
			if (bParam1)
			{
				func_345();
			}
			func_344();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_41(unk_0xD803B885F5E47A62()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_336(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B6));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_335(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_292(&uVar2);
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
						func_238(44);
					}
				}
				func_333(*iParam3);
				func_332();
				Global_26B66F.f_1404.f_17D = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0x54EABC0DD106045B())
				{
					iVar8 = iVar7;
					if (unk_0x81A93C8315C28F58(iVar8))
					{
						iVar9 = unk_0x4B2BFE4A3BC248ED(iVar8);
						if (func_291(iVar9))
						{
							func_283(iVar9, 1, 3002513507);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_41(unk_0xD803B885F5E47A62()))
		{
			func_331();
		}
	}
}

void func_331()
{
	int iVar0;
	
	iVar0 = Global_27768F[func_49()];
	iVar0++;
	func_139(3667, iVar0, 4294967295, 1);
}

void func_332()
{
	int iVar0;
	
	iVar0 = Global_277695[func_49()];
	iVar0++;
	func_139(3666, iVar0, 4294967295, 1);
}

void func_333(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_277698[func_49()];
	iVar0 = (iVar0 + iParam0);
	func_139(3668, iVar0, 4294967295, 1);
	if (func_320(7666, 4294967295, 4294967295) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_334(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_318(7666, iVar2, 4294967295, 1);
	}
}

int func_334(int iParam0)
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

var func_335(int iParam0)
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

int func_336(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_343(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_342(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_341(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_337(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_337(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_341(unk_0x09AC81E49EA267F7(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_337(int iParam0)
{
	int iVar0;
	
	if (func_340(iParam0))
	{
		iVar0 = func_338(func_339(iParam0));
		return func_142(iVar0, 4294967295, 0);
	}
	return 0;
}

int func_338(int iParam0)
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

int func_339(int iParam0)
{
	int iVar0;
	
	if (func_340(iParam0))
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

int func_340(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_341(int iParam0)
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

int func_342(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_340(iParam0))
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

int func_343(int iParam0)
{
	int iVar0;
	
	if (func_340(iParam0))
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

void func_344()
{
	int iVar0;
	
	iVar0 = Global_27768C[func_49()];
	iVar0++;
	Global_27768C[func_49()] = iVar0;
	func_139(3665, iVar0, 4294967295, 1);
}

void func_345()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_277689[func_49()];
	iVar1 = Global_277692[func_49()];
	iVar0++;
	iVar1++;
	Global_277689[func_49()] = iVar0;
	Global_277692[func_49()] = iVar1;
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_80 = iVar1;
	func_139(3663, iVar0, 4294967295, 1);
	func_139(3664, iVar1, 4294967295, 1);
}

void func_346()
{
	if (func_158())
	{
		Global_2567E2.f_C02.f_86 = 0;
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
	}
}

void func_347()
{
	if (func_158())
	{
		if (Global_2567E2.f_C02.f_86 < 10)
		{
			Global_2567E2.f_C02.f_86++;
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
		}
	}
}

void func_348()
{
	if (func_158())
	{
		if (Global_2567E2.f_C02.f_86 > 0)
		{
			Global_2567E2.f_C02.f_86 = (Global_2567E2.f_C02.f_86 - 1);
			Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1C1 = Global_2567E2.f_C02.f_86;
		}
	}
}

int func_349(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_1C;
}

int func_350(int iParam0)
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
			if (func_175(1) && !func_103(1))
			{
				if (func_351(func_177()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_351(int iParam0)
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 26);
}

int func_352(int iParam0, bool bParam1)
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

int func_353(int iParam0, bool bParam1, bool bParam2)
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
			if (func_158())
			{
				return Global_40001.f_499B;
			}
			else if (bParam1)
			{
				return Global_40001.f_499C;
			}
			break;
		
		case 188:
			if (func_158())
			{
				return Global_40001.f_49EF;
			}
			else if (bParam1)
			{
				return Global_40001.f_49F0;
			}
			break;
		
		case 225:
			if (func_158() && !func_145())
			{
				if (func_351(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5238;
				}
				else
				{
					return Global_40001.f_5239;
				}
			}
			else if (func_145())
			{
				return Global_40001.f_523A;
			}
			break;
		
		case 226:
			if (func_158() && !func_145())
			{
				if (func_351(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5224;
				}
				else
				{
					return Global_40001.f_5225;
				}
			}
			else if (func_145())
			{
				return Global_40001.f_5226;
			}
			break;
		
		case 227:
			if (func_158() && !func_145())
			{
				if (func_351(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5230;
				}
				else
				{
					return Global_40001.f_5231;
				}
			}
			else if (func_145())
			{
				return Global_40001.f_5232;
			}
			break;
		
		case 229:
			if (func_158() && !func_145())
			{
				if (func_351(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_56BC;
				}
				else
				{
					return Global_40001.f_56BD;
				}
			}
			else if (func_145())
			{
				return Global_40001.f_56BE;
			}
			break;
		
		case 230:
			if (func_158() && !func_145())
			{
				if (func_351(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_571C;
				}
				else
				{
					return Global_40001.f_571D;
				}
			}
			else if (func_145())
			{
				return Global_40001.f_571E;
			}
			break;
		
		case 233:
			if (func_158() && !func_145())
			{
				if (func_351(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_58F8;
				}
				else
				{
					return Global_40001.f_58F9;
				}
			}
			else if (func_145())
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
			if (func_158() && !func_145())
			{
				if (func_351(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5D83;
				}
				else
				{
					return Global_40001.f_5D84;
				}
			}
			else if (func_145())
			{
				return Global_40001.f_5D85;
			}
			break;
		
		case 238:
			if (func_158() && !func_145())
			{
				if (func_351(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5DF2;
				}
				else
				{
					return Global_40001.f_5DF3;
				}
			}
			else if (func_145())
			{
				return Global_40001.f_5DF4;
			}
			break;
		
		case 249:
			if (func_158() && !func_145())
			{
				if (func_351(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_5E02;
				}
				else
				{
					return Global_40001.f_5E03;
				}
			}
			else if (func_145())
			{
				return Global_40001.f_5E04;
			}
			break;
		
		case 243:
			if (func_158() && !func_145())
			{
				if (func_351(unk_0xD803B885F5E47A62()))
				{
					return Global_40001.f_66BE;
				}
				else
				{
					return Global_40001.f_66BF;
				}
			}
			else if (func_145())
			{
				return Global_40001.f_66BE;
			}
			break;
		
		case 158:
			if (func_158() && !func_145())
			{
				if (func_351(unk_0xD803B885F5E47A62()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_145())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_354(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_355(iParam0))
	{
		if (!func_158())
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
	if (func_281(unk_0xD803B885F5E47A62(), 1))
	{
		if (func_100(iParam0))
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
	else if (func_100(iParam0))
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
	iVar0 = func_96();
	if (iVar0 != func_29())
	{
		if (func_279(unk_0xD803B885F5E47A62(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_355(int iParam0)
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

void func_356(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_29())
	{
		if (unk_0x40B8C182D63932FC(iParam1))
		{
			if (iParam1 == unk_0xD803B885F5E47A62())
			{
				iVar0 = 1;
			}
			else if (func_357(iParam1, unk_0xD803B885F5E47A62()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_993(unk_0xD803B885F5E47A62(), 1, 1))
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			Global_26B66F.f_1404.f_17F = unk_0xDD0E7998AE8AD485();
		}
	}
}

int func_357(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_29() && iParam1 != func_29())
	{
		iVar0 = func_264(iParam0);
		if (iVar0 != func_29())
		{
			return iVar0 == func_264(iParam1);
		}
	}
	return 0;
}

int func_358(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_376(iParam0, &Var0, 4294967295, sParam2, sParam1);
	Var0.f_47 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_48 = iParam5;
	Var0.f_10 = iParam6;
	if (iParam7 != 0)
	{
		func_374(&(Var0.f_45), iParam7);
	}
	return func_359(&Var0);
}

int func_359(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2537E2.f_BE5)
		{
			return 0;
		}
	}
	func_373(uParam0, uParam0->f_11);
	func_370(uParam0);
	if (func_225())
	{
		func_370(uParam0);
	}
	if (func_369(uParam0->f_1))
	{
		func_362();
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
				func_362();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_374(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 2);
				Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_361(uParam0->f_45, 128))
			{
				if (func_360(Global_2537E2.f_AA3[iVar0 /*80*/].f_1))
				{
					Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
					func_374(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_360(int iParam0)
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

bool func_361(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_362()
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
	func_363();
	if (bVar0)
	{
		Global_12C5A = 0;
	}
}

void func_363()
{
	Global_2537E2.f_BE7 = 0;
	Global_2537E2.f_BE7.f_242 = 0;
	func_367(&(Global_2537E2.f_BE7.f_1));
	Global_2537E2.f_BE7.f_1.f_1 = 0;
	func_364(&(Global_2537E2.f_BE7.f_1));
}

void func_364(var uParam0)
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
				if (unk_0x757EF87A33649210() && !func_366(0))
				{
					unk_0x82E51BCA72537B6C(800);
				}
			}
		}
	}
	func_365(0);
}

void func_365(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

bool func_366(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0);
}

void func_367(var uParam0)
{
	func_368(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

void func_368(var uParam0)
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

int func_369(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_370(var uParam0)
{
	if (func_372(uParam0->f_1))
	{
		uParam0->f_48 = func_371();
	}
}

int func_371()
{
	return 21;
}

int func_372(int iParam0)
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

void func_373(var uParam0, int iParam1)
{
	if (func_372(uParam0->f_1))
	{
		uParam0->f_49 = 1;
	}
	if (iParam1 == func_29() || !func_993(iParam1, 0, 1))
	{
		return;
	}
	if (func_360(uParam0->f_1))
	{
		if (uParam0->f_47 == 1)
		{
			uParam0->f_49 = func_246(iParam1, 4294967294, 0, 0, 0);
		}
	}
}

void func_374(var uParam0, int iParam1)
{
	func_375(uParam0, iParam1);
}

void func_375(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_376(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_11 = func_29();
	uParam1->f_12 = func_29();
	uParam1->f_13 = func_29();
	uParam1->f_14 = func_29();
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

int func_377(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_29();
	iVar1 = func_29();
	iVar2 = func_29();
	return func_378(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_378(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
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
	func_376(uParam0, &Var0, uParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_11 = iParam5;
	Var0.f_12 = iParam6;
	Var0.f_13 = iParam7;
	StringCopy(&(Var0.f_19), sParam3, 64);
	StringCopy(&(Var0.f_39), sParam8, 16);
	Var0.f_49 = uParam4;
	Var0.f_47 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_48 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_47 = iParam14;
	}
	func_374(&(Var0.f_45), 4);
	return func_359(&Var0);
}

int func_379()
{
	if ((func_993(unk_0xD803B885F5E47A62(), 1, 1) && !unk_0x798A3F1296751F46()) && !func_380())
	{
		return 1;
	}
	return 0;
}

bool func_380()
{
	return unk_0x1C0640BA9A7327B3() <= Global_574E.f_16F6 + 100;
}

void func_381(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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
	
	if (func_501(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_24 = 0;
	if (func_499() || iParam2 == 28)
	{
		if (func_450(iParam1, iParam2, uParam3, Global_180529, 0, func_497(), sParam7))
		{
			func_449(1);
			if ((!func_448() && !func_447()) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 1))
			{
				if (func_446())
				{
					func_444();
				}
				else
				{
					unk_0xD02CE72B4B66DC29(76, 84);
					if (uParam3->f_1B == 0)
					{
						func_443(1);
						Global_180529 = 0;
						iVar19 = 4294967295;
						if (Global_180606 != 1)
						{
							func_442(iParam1, 0, 0);
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
								if (func_993(unk_0x117658E336116132(iVar17), 0, 1))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
									if (!func_47(iVar3, 0))
									{
										if ((func_441(iVar3) || Global_25033E[iVar3 /*421*/].f_EC != 4294967295) || func_440(iVar3))
										{
											iVar9 = iVar3;
											if (func_41(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_439(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_438(unk_0xD803B885F5E47A62(), 0) && func_67(unk_0xD803B885F5E47A62()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_437())
							{
								if (func_993(unk_0x117658E336116132(iVar17), 0, 1))
								{
									iVar3 = unk_0x117658E336116132(iVar17);
								}
								else
								{
									iVar3 = func_29();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_436(iVar3) && func_432(iVar3, iParam2)) && func_993(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
								Var6 = { func_427(iVar3) };
								if (iVar3 == unk_0xD803B885F5E47A62())
								{
									uParam3->f_23 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x6E524813889AECF8(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_200(iVar3) };
								iVar5 = func_421(iVar3);
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
									if (!func_437())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != 4294967295)
								{
									func_416(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_68), func_415(iParam5, 1, 0, 0), 16);
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
								iVar16 = func_414(iVar3, 0);
								if (bVar2)
								{
									if (func_281(iVar3, 1) && iVar1[iVar9] != 4294967295)
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
								if (func_413(iParam5))
								{
									func_412(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
								}
								else
								{
									func_412(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
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
							if (func_993(iVar3, 0, 1) && !unk_0xEAE0D21A50E6C7F4(iVar14, iVar3))
							{
								iVar3 = unk_0x117658E336116132(iVar17);
							}
							else
							{
								iVar3 = func_29();
							}
							if (func_436(iVar3))
							{
								if (func_993(unk_0x117658E336116132(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_184507[iVar9 /*876*/].f_D3.f_6;
									Var6 = { func_427(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_200(iVar3) };
									iVar5 = func_421(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x5283D58F79627134(iVar5);
									}
									Global_180529++;
									iVar16 = func_414(iVar3, 1);
									if (bVar2)
									{
										if (func_281(iVar3, 1))
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
									func_394(iVar3, unk_0x6E524813889AECF8(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 11))
						{
							func_391(uParam3, iParam1, iParam2);
						}
						func_7(&(uParam3->f_15));
						func_390();
						uParam3->f_1B = 2;
					}
					if (uParam3->f_1B == 2)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 7))
						{
							func_389(uParam3, iParam1);
							func_388(iParam1, 0, 1);
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 7);
						}
						func_389(uParam3, iParam1);
						if (!unk_0xEAE0D21A50E6C7F4(uParam3->f_21, 11))
						{
							unk_0x5D96D8530B3D0904(&(uParam3->f_21), 11);
						}
						if (func_384(uParam3))
						{
							Global_180606 = 1;
						}
						func_382(uParam3);
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
			func_390();
			func_443(0);
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

void func_382(var uParam0)
{
	if (!func_5(&(uParam0->f_15)))
	{
		func_4(&(uParam0->f_15), 0, 0);
	}
	else if (func_2(&(uParam0->f_15), 250, 0))
	{
		func_7(&(uParam0->f_15));
		func_383(0);
	}
}

void func_383(bool bParam0)
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

int func_384(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_25;
	iVar3 = unk_0x117658E336116132(uParam0->f_25);
	if (iVar3 != func_29() && func_993(iVar3, 0, 1))
	{
		Var2 = { func_200(iVar3) };
		iVar1 = func_387(uParam0, uParam0->f_25);
		if (func_386(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 1;
							func_385(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 1;
						func_385(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x8086012EEEB2D3DF(&Var2))
						{
							iVar4 = 1;
							func_385(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_385(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xD01DD90A3EAEC725(&Var2))
					{
						if (!unk_0x74684D5E87B13DBD(&Var2))
						{
							iVar4 = 1;
							func_385(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x74684D5E87B13DBD(&Var2))
					{
						iVar4 = 1;
						func_385(uParam0, iVar0, 0);
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

void func_385(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_386(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

var func_387(var uParam0, int iParam1)
{
	return uParam0->f_26[iParam1 /*2*/];
}

void func_388(int iParam0, bool bParam1, int iParam2)
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

void func_389(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 10))
	{
		unk_0x7E60C62A7CE58FC8(*iParam1, "SET_HIGHLIGHT");
		unk_0x3CAEA85DA607305E(uParam0->f_23);
		unk_0x7E60D21B163E9D56();
		unk_0x5D96D8530B3D0904(&(uParam0->f_21), 10);
	}
}

void func_390()
{
	if (Global_180606 != 0)
	{
		Global_180606 = 0;
	}
}

void func_391(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar0);
		if (iVar2 != func_29())
		{
			if (func_993(iVar2, 0, 1))
			{
				if (uParam0->f_26[iVar0 /*2*/].f_1 != 4294967295)
				{
					iVar1 = func_393(uParam0->f_26[iVar0 /*2*/], 0, iParam2);
					func_392(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_184507[iVar0 /*876*/].f_D3.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_392(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_393(int iParam0, bool bParam1, int iParam2)
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

void func_394(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_411() && iParam4 < func_410())
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
				func_409("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(iParam10);
			}
			func_409(sParam1);
			unk_0x3CAEA85DA607305E(iParam11);
			if (uParam3->f_6C == 6)
			{
				func_409("");
			}
			else
			{
				unk_0x3CAEA85DA607305E(65);
			}
			unk_0x3CAEA85DA607305E(4294967295);
			func_409("");
			if (uParam3->f_6C == 6)
			{
				func_409("");
			}
			else
			{
				func_409(&sParam5);
			}
			func_399(uParam3, iParam0);
			unk_0x024BC5F58A72410C(sParam9);
			unk_0x024BC5F58A72410C(sParam9);
			if (func_398(uParam3))
			{
				func_397("DPAD_FRIEND");
			}
			else if (func_396(uParam3))
			{
				func_397("DPAD_FRIEND");
			}
			else if (func_395(uParam3))
			{
				func_397("DPAD_CREW");
			}
			else
			{
				func_397("");
			}
			unk_0x7E60D21B163E9D56();
		}
	}
}

bool func_395(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 6);
}

bool func_396(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(uParam0->f_21, 5);
}

void func_397(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

int func_398(var uParam0)
{
	if (func_396(uParam0) && func_395(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_399(var uParam0, int iParam1)
{
	if (func_408(iParam1))
	{
		unk_0x3CAEA85DA607305E(121);
	}
	else if (func_403(iParam1))
	{
		unk_0x3CAEA85DA607305E(122);
	}
	else if (((unk_0xEAE0D21A50E6C7F4(Global_440000.f_1B, 15) && iParam1 > 4294967295) && iParam1 < 32) && unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam1 /*421*/].f_19D, 0))
	{
		unk_0x3CAEA85DA607305E(123);
	}
	else
	{
		if (func_400())
		{
			uParam0->f_24 = 0;
		}
		unk_0x1200CC973A2399C8(uParam0->f_24);
	}
}

int func_400()
{
	if (unk_0xA14BB9332558B949())
	{
		if (func_401() || func_268())
		{
			return 1;
		}
	}
	return 0;
}

int func_401()
{
	if (unk_0xA14BB9332558B949())
	{
		return func_268();
	}
	return func_402(Global_440000.f_2F9AE);
}

int func_402(int iParam0)
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

int func_403(int iParam0)
{
	if ((func_993(iParam0, 0, 1) && func_404()) && func_104(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_404()
{
	if (func_121(unk_0xD803B885F5E47A62()) || func_407())
	{
		if (!func_405(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_405(int iParam0)
{
	if (func_406(iParam0) == 236 || func_406(iParam0) == 150)
	{
		return func_63(iParam0);
	}
	return 0;
}

int func_406(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18D84D[iVar0 /*615*/];
	}
	return 4294967295;
}

int func_407()
{
	switch (func_67(unk_0xD803B885F5E47A62()))
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

int func_408(int iParam0)
{
	if (func_400())
	{
		if (func_993(iParam0, 0, 1))
		{
			return func_41(iParam0);
		}
	}
	if ((func_993(iParam0, 0, 1) && func_404()) && func_46(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_409(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

int func_410()
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

int func_411()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_18052B)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_412(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_411() && iParam3 < func_410())
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
					func_409("");
				}
				else
				{
					unk_0x3CAEA85DA607305E(iParam9);
				}
				if (uParam2->f_6C == 6 && !unk_0xEA6BC48857E0AC4C(sParam16))
				{
					func_397(sParam16);
				}
				else
				{
					func_409(&(uParam2->f_1));
				}
				unk_0x3CAEA85DA607305E(iParam11);
				if (uParam2->f_6C == 6)
				{
					func_409("");
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
				if (func_437())
				{
					func_409("");
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
						func_397(&(uParam2->f_68));
					}
					else
					{
						func_409("");
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
					func_409("");
				}
				if (uParam2->f_6C == 6)
				{
					func_409("");
				}
				else
				{
					func_409(&sParam4);
				}
				func_399(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xEA6BC48857E0AC4C(sParam8))
				{
					func_409("");
					func_409("");
				}
				else
				{
					unk_0x024BC5F58A72410C(sParam8);
					unk_0x024BC5F58A72410C(sParam8);
				}
				if (func_398(uParam2))
				{
					func_397("DPAD_FRIEND");
				}
				else if (func_396(uParam2))
				{
					func_397("DPAD_FRIEND");
				}
				else if (func_395(uParam2))
				{
					func_397("DPAD_CREW");
				}
				else
				{
					func_397("");
				}
				unk_0x7E60D21B163E9D56();
			}
		}
	}
}

int func_413(int iParam0)
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

int func_414(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_121(iParam0)) && !func_61(iParam0))
	{
		iVar0 = func_371();
	}
	iVar1 = func_263(iParam0);
	if (!iVar1 == 4294967295)
	{
		return func_261(iVar1);
	}
	return iVar0;
}

char* func_415(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_416(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_420(iParam3))
	{
		*fParam1 = (func_417(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_413(iParam3))
	{
		*fParam1 = (func_417(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_417(int iParam0, int iParam1)
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
				return func_419(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x8ED6EC1BDC7FE067())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_418(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_418(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_419(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_420(int iParam0)
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

int func_421(int iParam0)
{
	int iVar0;
	
	iVar0 = func_424(iParam0);
	if (iVar0 == 4294967295)
	{
		func_422(iParam0, 1);
		return 0;
	}
	Global_153216[iVar0 /*5*/].f_4 = 1;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_422(int iParam0, bool bParam1)
{
	if (!func_993(iParam0, 0, 1))
	{
		return;
	}
	if (func_424(iParam0) != 4294967295)
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
	if (func_423(iParam0))
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

int func_423(int iParam0)
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

int func_424(int iParam0)
{
	int iVar0;
	
	if (!func_993(iParam0, 0, 1))
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
			func_425(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_425(int iParam0)
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
	func_426(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 1);
}

void func_426(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_29();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

struct<4> func_427(int iParam0)
{
	char cVar0[32];
	
	if (func_993(iParam0, 0, 1))
	{
		Global_265942 = { func_200(iParam0) };
		if (unk_0xDC30EF462887322E())
		{
			if (func_386(Global_265942))
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
		if (func_431(&Global_265942))
		{
			Global_2658FC = { func_429(iParam0) };
			func_428(&Global_2658FC, &cVar0);
		}
	}
	return cVar0;
}

void func_428(var uParam0, char* sParam1)
{
	unk_0xC6B7299B3E15AD8B(uParam0, 35, sParam1);
}

struct<35> func_429(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_430(iParam0))
	{
		return Global_14088D[unk_0xD803B885F5E47A62() /*35*/];
	}
	Var0 = { func_200(iParam0) };
	unk_0xD9DA83C40D038174(&Var1, 35, &Var0);
	return Var1;
}

int func_430(int iParam0)
{
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		return 1;
	}
	return 0;
}

int func_431(var uParam0)
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

int func_432(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_120(iParam0) || func_435(iParam0)) || func_434(iParam0))
		{
			return 0;
		}
	}
	if (!func_433(iParam0))
	{
		return 0;
	}
	if ((!func_441(iParam0) && Global_25033E[iParam0 /*421*/].f_EC == 4294967295) && !func_440(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_433(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_8E, 22);
}

bool func_434(int iParam0)
{
	if (func_120(iParam0))
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 8);
}

int func_435(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return (unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 10) || unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 9));
	}
	return 0;
}

int func_436(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_47(iParam0, 0))
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

int func_437()
{
	switch (func_67(unk_0xD803B885F5E47A62()))
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
	switch (func_406(unk_0xD803B885F5E47A62()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_61(unk_0xD803B885F5E47A62()))
	{
		switch (func_67(unk_0xD803B885F5E47A62()))
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
	if (func_405(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_438(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295 && func_92(Global_18D84D[iParam0 /*615*/].f_B.f_21))
	{
		return 1;
	}
	if (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295)
	{
		if (func_92(Global_18D84D[iParam0 /*615*/].f_B.f_20))
		{
			return 1;
		}
	}
	return 0;
}

void func_439(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_993(unk_0x117658E336116132(iVar0), 0, 1))
		{
			iVar1 = unk_0x117658E336116132(iVar0);
			if (!func_47(iVar1, 0))
			{
				if ((func_441(iVar1) || Global_25033E[iVar1 /*421*/].f_EC != 4294967295) || func_440(iVar1))
				{
					if (func_279(iVar1, iParam1, 0))
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

bool func_440(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4 != 0;
}

int func_441(int iParam0)
{
	if (func_993(iParam0, 0, 1))
	{
		if (func_993(unk_0xD803B885F5E47A62(), 0, 1))
		{
			if (unk_0xF816C4B5324CB295(iParam0, unk_0xD803B885F5E47A62()) || func_67(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_442(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x3CAEA85DA607305E(iParam2);
		unk_0x7E60D21B163E9D56();
	}
}

void func_443(bool bParam0)
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

void func_444()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 1))
	{
		if (func_122())
		{
			func_445();
		}
	}
}

void func_445()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2537E2.f_AA3[iVar0 /*80*/].f_2 != 0)
		{
			Global_2537E2.f_AA3[iVar0 /*80*/].f_2 = 5;
			func_374(&(Global_2537E2.f_AA3[iVar0 /*80*/].f_45), 1);
		}
		iVar0++;
	}
}

int func_446()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 0) && func_122())
	{
		return 1;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EC, 1) && func_122())
	{
		return 1;
	}
	return 0;
}

int func_447()
{
	if (func_122())
	{
		if (func_360(Global_2537E2.f_AA3[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_448()
{
	if (func_122())
	{
		if (func_372(Global_2537E2.f_AA3[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_449(int iParam0)
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

int func_450(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
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
	bVar3 = func_496(iParam1);
	fVar4 = func_495();
	iVar5 = 4294967295;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_494())
		{
			if (func_493() > 0 && Global_18052B)
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
		if (!func_477())
		{
			func_476(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11EF, 26))
	{
		func_476(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_5(&(uParam2->f_13)))
	{
		if (func_493() == 1)
		{
			func_475(bVar3, iParam0, 0);
			func_4(&(uParam2->f_13), 0, 0);
			func_476(iParam0, uParam2, 0);
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_11F0), 5);
		}
	}
	if (func_5(&(uParam2->f_13)) || bParam5)
	{
		if (unk_0xFEBC1E4EC9E001F0())
		{
			unk_0xE19C2AAC820D8ED5();
		}
		unk_0x3584F71E5CA29322(10);
		if (func_2(&(uParam2->f_13), 10000, 0) || (func_493() == 0 && !bParam5))
		{
			func_476(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_474();
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
					func_474();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xB8E3919889462ACD();
					}
					unk_0x3584F71E5CA29322(18);
				}
				unk_0xD668DA5CA4A1D2C8(fVar4);
				if (func_475(bVar3, iParam0, 0))
				{
					func_442(iParam0, 0, 0);
					sVar1 = func_472(iParam1, &(Global_440000.f_2F9B5), bParam4);
					Var0 = { func_470(iParam1) };
					if (bParam4)
					{
						func_467(iParam0, sVar1, "", 0, 4294967295, 4294967295, 1);
					}
					else if (iParam1 == 27)
					{
						func_460(iParam0, func_464(uParam2), func_461(uParam2), 4294967295);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_458(uParam2);
						if (!unk_0xEA6BC48857E0AC4C(sParam6))
						{
							sVar6 = sParam6;
						}
						func_456(iParam0, sVar6, func_457(), 4294967295);
					}
					else if (func_400())
					{
						uParam2->f_22 = Global_18052A;
						func_467(iParam0, sVar1, &Var0, 1, 4294967295, Global_18052A, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_451(iParam1);
						uParam2->f_22 = Global_18052A;
						func_467(iParam0, sVar1, "", 0, iVar5, Global_18052A, 1);
					}
					else
					{
						iVar5 = func_451(iParam1);
						func_467(iParam0, sVar1, &Var0, 1, iVar5, 4294967295, 1);
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

int func_451(int iParam0)
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (func_455())
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
			if (func_454(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 20;
			}
			if (func_453(unk_0xD803B885F5E47A62()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_452(unk_0xD803B885F5E47A62()))
	{
		iVar0 = 2;
	}
	if (func_223())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_452(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 4;
}

bool func_453(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 7;
}

bool func_454(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 2;
}

bool func_455()
{
	return Global_440000.f_1 == 0;
}

void func_456(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_397(sParam1);
		}
		else
		{
			unk_0x7ACC3006A87F8B39("FM_AE_BRACKT");
			unk_0x6B012227B3921E18(sParam1);
			unk_0x6B012227B3921E18(sParam2);
			unk_0x779B34565F4D71B1();
		}
		func_397("");
		if (iParam3 != 4294967295)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_457()
{
	switch (func_67(unk_0xD803B885F5E47A62()))
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

char* func_458(var uParam0)
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
	switch (func_67(unk_0xD803B885F5E47A62()))
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
			if (func_95())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_103(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_103(1))
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
			if (func_459(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_B5))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_459(int iParam0)
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

void func_460(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (unk_0xEA6BC48857E0AC4C(sParam2))
		{
			func_397(sParam1);
		}
		else if (func_406(unk_0xD803B885F5E47A62()) == 133)
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
		func_397("");
		if (iParam3 != 4294967295)
		{
			unk_0x3CAEA85DA607305E(iParam3);
		}
		unk_0x7E60D21B163E9D56();
	}
}

char* func_461(var uParam0)
{
	int iVar0;
	
	iVar0 = func_406(unk_0xD803B885F5E47A62());
	if (func_463())
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
			switch (func_462())
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

int func_462()
{
	if (func_406(unk_0xD803B885F5E47A62()) == 133)
	{
		return Global_26B66F.f_13B5;
	}
	return 4294967295;
}

bool func_463()
{
	return Global_184488;
}

char* func_464(var uParam0)
{
	int iVar0;
	
	iVar0 = func_406(unk_0xD803B885F5E47A62());
	if (func_463())
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
			if (func_466() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_466() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_462())
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
			if (func_465() == 1)
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

int func_465()
{
	return Global_26B66F.f_13B8;
}

int func_466()
{
	if (func_406(unk_0xD803B885F5E47A62()) == 132)
	{
		return Global_26B66F.f_13B3;
	}
	return 4294967295;
}

void func_467(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x83D8570832F172A7(*iParam0))
	{
		unk_0x7E60C62A7CE58FC8(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_409(sParam1);
		}
		else if (iParam5 != 4294967295)
		{
			unk_0x7ACC3006A87F8B39(sParam1);
			unk_0x6D99DF8263D35CE5(iParam5);
			unk_0x779B34565F4D71B1();
		}
		else
		{
			func_397(sParam1);
		}
		if (func_494() && iParam6)
		{
			if (func_469())
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
			func_397(sParam2);
		}
		if (iParam4 != 4294967295)
		{
			unk_0x3CAEA85DA607305E(iParam4);
			if (func_468(unk_0xD803B885F5E47A62()))
			{
				unk_0x3CAEA85DA607305E(166);
			}
			else if (func_225())
			{
				unk_0x3CAEA85DA607305E(220);
			}
		}
		unk_0x7E60D21B163E9D56();
	}
}

int func_468(int iParam0)
{
	if (func_454(iParam0) || func_453(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_469()
{
	return Global_18052B;
}

struct<4> func_470(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_471(unk_0xD803B885F5E47A62()) || func_452(unk_0xD803B885F5E47A62()))
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
	if (func_400() && unk_0xA14BB9332558B949())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_440000.f_CC, 16);
	}
	return Var0;
}

bool func_471(int iParam0)
{
	return Global_25033E[iParam0 /*421*/].f_73 == 5;
}

char* func_472(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_400() || unk_0xEA6BC48857E0AC4C(sParam1)))
	{
		uVar0 = func_473();
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

char* func_473()
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

void func_474()
{
	Global_A56F = 1;
}

bool func_475(bool bParam0, int iParam1, bool bParam2)
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

void func_476(int iParam0, var uParam1, bool bParam2)
{
	unk_0x0674E58A79778E99(&(uParam1->f_21), 7);
	Global_180529 = 0;
	func_390();
	Global_180528 = 0;
	uParam1->f_1B = 0;
	if (bParam2)
	{
		if (func_5(&(uParam1->f_13)))
		{
			func_7(&(uParam1->f_13));
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

int func_477()
{
	if (func_380())
	{
		return 0;
	}
	if (func_492())
	{
		return 0;
	}
	if (!func_490())
	{
		return 0;
	}
	if (!func_488())
	{
		return 0;
	}
	if (func_487(8, 4294967295))
	{
		return 0;
	}
	if (func_493() == 2)
	{
		return 0;
	}
	if (Global_26B66F.f_11BF)
	{
		return 0;
	}
	if (func_486())
	{
		return 0;
	}
	else if (!func_483(unk_0xD803B885F5E47A62(), 1, 0) && Global_1403E4[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_482(1) || func_480(1)) || Global_56C3.f_7C) || Global_56C3)
	{
		return 0;
	}
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (func_479() && Global_19DEEC == 2)
	{
		return 0;
	}
	if (func_274(unk_0xD803B885F5E47A62()) && !func_479())
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
	if (func_233(0))
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
	if (func_478(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((Global_14E899 || Global_14E89A) || Global_14E89B)
	{
		return 0;
	}
	return 1;
}

bool func_478(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136.f_4, 6);
}

bool func_479()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_440000.f_1E, 12) && unk_0xEAE0D21A50E6C7F4(Global_19DEED, 0));
}

int func_480(bool bParam0)
{
	if (unk_0xD6C3CB7DCE462DB4())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (func_481(unk_0x16F2683693E537C9()))
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

int func_481(int iParam0)
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

bool func_482(bool bParam0)
{
	if (bParam0)
	{
		return (Global_56C3.f_4 && Global_56C3.f_68 == 4);
	}
	return Global_56C3.f_4;
}

int func_483(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_484(iParam0))
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

bool func_484(int iParam0)
{
	return func_485(iParam0);
}

bool func_485(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_D.f_1, 0);
}

bool func_486()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_C4 != 0;
}

bool func_487(int iParam0, int iParam1)
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

int func_488()
{
	if (func_489() == 0)
	{
		return 1;
	}
	return 0;
}

int func_489()
{
	return Global_1406D3.f_12;
}

int func_490()
{
	if (func_491())
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

bool func_491()
{
	return Global_1406B8;
}

bool func_492()
{
	return Global_184507[unk_0xD803B885F5E47A62() /*876*/] == 5;
}

int func_493()
{
	return Global_150392.f_44;
}

int func_494()
{
	if (Global_18052A > 16)
	{
		return 1;
	}
	return 0;
}

float func_495()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x57C534E6A9384F53()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_496(int iParam0)
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

int func_497()
{
	if (func_498(unk_0xD803B885F5E47A62()))
	{
		return Global_1420BD;
	}
	return 0;
}

int func_498(int iParam0)
{
	if (unk_0x8CD06866876216F2())
	{
		if (func_47(iParam0, 0))
		{
			return unk_0xB9BE6EF14AC6F8DE(iParam0);
		}
	}
	return 0;
}

int func_499()
{
	if (func_497())
	{
		return 1;
	}
	if (func_434(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_463())
	{
		return 1;
	}
	if (func_121(unk_0xD803B885F5E47A62()))
	{
		switch (func_406(unk_0xD803B885F5E47A62()))
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
				if (!func_500(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_500(unk_0xD803B885F5E47A62()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_500(unk_0xD803B885F5E47A62()))
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

bool func_500(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_1, 4);
}

int func_501(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_121(unk_0xD803B885F5E47A62()) && !func_61(unk_0xD803B885F5E47A62())) && !func_405(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_68(unk_0xD803B885F5E47A62(), 0) && func_61(unk_0xD803B885F5E47A62()))
		{
			return 1;
		}
		if (func_116(unk_0xD803B885F5E47A62()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_502()
{
	if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		func_522();
		unk_0x38C3A68D7861DCFD(0, 140, 1);
		unk_0x38C3A68D7861DCFD(0, 141, 1);
		unk_0x38C3A68D7861DCFD(0, 142, 1);
		unk_0x38C3A68D7861DCFD(0, 143, 1);
		unk_0x38C3A68D7861DCFD(0, 24, 1);
		unk_0x38C3A68D7861DCFD(0, 24, 1);
		unk_0x38C3A68D7861DCFD(0, 345, 1);
		unk_0x38C3A68D7861DCFD(0, 346, 1);
		unk_0x38C3A68D7861DCFD(0, 347, 1);
	}
}

bool func_503()
{
	return func_27() >= 2;
}

void func_504()
{
	func_53(3000, 3000);
}

void func_505()
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if (((((unk_0x13CCB7DAE50E574D(iVar0) || unk_0x134B62B726CEC8E6(iVar0) == joaat("hydra")) || unk_0x134B62B726CEC8E6(iVar0) == joaat("savage")) || unk_0x134B62B726CEC8E6(iVar0) == joaat("buzzard")) || unk_0x134B62B726CEC8E6(iVar0) == joaat("insurgent")) || unk_0x134B62B726CEC8E6(iVar0) == joaat("valkyrie"))
		{
			unk_0x38C3A68D7861DCFD(0, 68, 1);
			unk_0x38C3A68D7861DCFD(0, 69, 1);
			unk_0x38C3A68D7861DCFD(0, 70, 1);
		}
	}
}

void func_506()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_13())
	{
		if (!unk_0xE4EDC4B0E92C078B(iLocal_117[iVar0]))
		{
			if (unk_0xE5DBF9B6126856CA(Local_143.f_13[iVar0]))
			{
				iLocal_117[iVar0] = unk_0x5C3B41825F6AC5A0(unk_0x09AD4CE7DA179533(Local_143.f_13[iVar0]));
				unk_0xBC8E0A7390523199(iLocal_117[iVar0], 351);
				unk_0x61755AC17D8F538E(iLocal_117[iVar0], 2);
				unk_0xDC5B2F9D0CCE3A10(iLocal_117[iVar0], "GB_AMMOPICKBLIP");
			}
		}
		iVar0++;
	}
}

void func_507()
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1403), 1);
}

void func_508(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == 4294967295)
	{
		if (!func_61(unk_0xD803B885F5E47A62()))
		{
			return;
		}
	}
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		func_514(iParam2);
		return;
	}
	iVar1 = func_67(unk_0xD803B885F5E47A62());
	if (iParam3 != 4294967295)
	{
		iVar1 = iParam3;
	}
	if (unk_0x7F8A39872A07D2CE(func_513(iVar1), "IE_PRE_COUNTDOWN_STOP"))
	{
		iVar0 = 35000;
	}
	else
	{
		iVar0 = 40000;
	}
	if (iParam2->f_1 > 4294967295)
	{
		iVar0 = iParam2->f_1;
	}
	if (!unk_0xEAE0D21A50E6C7F4(*iParam2, 0))
	{
		if (iParam0 <= iVar0)
		{
			if (unk_0xC92DB9682A650680(func_513(iVar1)))
			{
				unk_0x5D96D8530B3D0904(iParam2, 0);
				unk_0x5D96D8530B3D0904(iParam2, 1);
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(*iParam2, 1))
	{
		if (iParam0 <= 30000)
		{
			if (!unk_0xEAE0D21A50E6C7F4(*iParam2, 2))
			{
				if (unk_0x13896FDECC859926(func_512(iVar1)))
				{
					unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 1);
					unk_0xBEF52C1D400C0A44(0);
					unk_0x5D96D8530B3D0904(iParam2, 2);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(*iParam2, 3))
			{
				if (unk_0xC92DB9682A650680(func_511(iVar1)))
				{
					unk_0x5D96D8530B3D0904(iParam2, 3);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(*iParam2, 3))
			{
				if (iParam0 <= 27000)
				{
					if (!unk_0xEAE0D21A50E6C7F4(*iParam2, 4))
					{
						unk_0xBEF52C1D400C0A44(1);
						unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
						unk_0x5D96D8530B3D0904(iParam2, 4);
					}
					if (iParam0 <= 5000 && func_510(iVar1))
					{
						if (!unk_0xEAE0D21A50E6C7F4(*iParam2, 8))
						{
							unk_0x4D7F4CC43D4D0DE3(4294967295, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							unk_0x5D96D8530B3D0904(iParam2, 8);
						}
					}
					if (iParam0 <= 500)
					{
						if (unk_0xC92DB9682A650680(func_509(iVar1)))
						{
							unk_0x38DC636F3D2D2FA8(func_512(iVar1));
							unk_0x0674E58A79778E99(iParam2, 1);
						}
					}
				}
			}
		}
	}
}

char* func_509(int iParam0)
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
		case 236:
		case 243:
		case 150:
		case 158:
			return "IE_FADE_IN_RADIO";
		
		default:
	}
	return "FM_COUNTDOWN_30S_FIRA";
}

int func_510(int iParam0)
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

char* func_511(int iParam0)
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
		case 236:
		case 150:
		case 243:
		case 158:
			return "IE_COUNTDOWN_30S";
		
		default:
	}
	return "FM_COUNTDOWN_30S";
}

char* func_512(int iParam0)
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
		case 236:
		case 150:
		case 243:
		case 158:
			return "IE_COUNTDOWN_30S_KILL";
		
		default:
	}
	return "FM_COUNTDOWN_30S_KILL";
}

char* func_513(int iParam0)
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
		case 236:
		case 150:
		case 243:
		case 158:
			return "IE_PRE_COUNTDOWN_STOP";
		
		default:
	}
	return "FM_PRE_COUNTDOWN_30S";
}

void func_514(int iParam0)
{
	int iVar0;
	
	iVar0 = func_67(unk_0xD803B885F5E47A62());
	if (unk_0xEAE0D21A50E6C7F4(*iParam0, 1))
	{
		if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 5))
		{
			if (unk_0xEAE0D21A50E6C7F4(*iParam0, 2))
			{
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 4))
				{
					unk_0xBEF52C1D400C0A44(1);
					unk_0x7352ACF3368DF65F("AllowScoreAndRadio", 0);
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 6))
			{
				if (unk_0xC92DB9682A650680(func_512(iVar0)))
				{
					unk_0x5D96D8530B3D0904(iParam0, 6);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(*iParam0, 6))
			{
				if (!unk_0xEAE0D21A50E6C7F4(*iParam0, 7))
				{
					if (unk_0xC92DB9682A650680(func_509(iVar0)))
					{
						unk_0x5D96D8530B3D0904(iParam0, 7);
					}
				}
				if (unk_0xEAE0D21A50E6C7F4(*iParam0, 7))
				{
					unk_0x5D96D8530B3D0904(iParam0, 5);
				}
			}
		}
	}
}

void func_515(int iParam0)
{
	unk_0xE17FDF9E3068281B(iParam0);
	unk_0x42740B44BA8D7B43("HUD_MINI_GAME_SOUNDSET");
}

void func_516()
{
	int iVar0;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (!func_44(unk_0xFB04705FDFDCE640(), 8))
		{
			if (func_519())
			{
				func_88(8);
				if (func_5(&uLocal_140))
				{
					func_7(&uLocal_140);
				}
			}
		}
		else if (!func_519())
		{
			func_86(8);
		}
		if (iLocal_111 >= 0)
		{
			if (func_519())
			{
				if (!unk_0x8AA6DC470ABA63A2(iLocal_111))
				{
					unk_0x55D0A2DB35045A35(iLocal_111);
				}
			}
		}
		if (func_44(unk_0xFB04705FDFDCE640(), 1))
		{
			if (Local_144[iLocal_107 /*6*/].f_5 == 3)
			{
				if (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_DE == 99)
				{
					if (!func_44(unk_0xFB04705FDFDCE640(), 8))
					{
						if (!func_5(&uLocal_140))
						{
							if (func_517())
							{
								unk_0x4D7F4CC43D4D0DE3(iLocal_111, "Out_of_Bounds_Explode", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							else
							{
								unk_0x4D7F4CC43D4D0DE3(iLocal_111, "Out_of_Bounds", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							func_4(&uLocal_140, 0, 0);
						}
						if (func_5(&uLocal_140))
						{
							if (!func_2(&uLocal_140, 10000, 0))
							{
							}
							else if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
							{
								iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
								unk_0xCCB891029A74A633(iVar0, 1, 0, 4294967295);
								Local_144[unk_0x57270EE11514DC67() /*6*/].f_4++;
							}
							else
							{
								unk_0xD458AC1C1D29C3B4(unk_0x16F2683693E537C9(), 0, 0);
								Local_144[unk_0x57270EE11514DC67() /*6*/].f_4++;
							}
						}
					}
					if (!func_517())
					{
						func_522();
						unk_0x38C3A68D7861DCFD(0, 140, 1);
						unk_0x38C3A68D7861DCFD(0, 141, 1);
						unk_0x38C3A68D7861DCFD(0, 142, 1);
						unk_0x38C3A68D7861DCFD(0, 143, 1);
						unk_0x38C3A68D7861DCFD(0, 24, 1);
						unk_0x38C3A68D7861DCFD(0, 24, 1);
					}
				}
				else if (func_5(&uLocal_140))
				{
					func_7(&uLocal_140);
				}
			}
		}
	}
}

int func_517()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar1 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			iVar0 = unk_0x134B62B726CEC8E6(iVar1);
			if (func_518(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_518(int iParam0)
{
	if (unk_0x7D8B2A8F9EA82DB7(iParam0) && !unk_0xAD09C9A4B56FA133(iParam0))
	{
		return 1;
	}
	if ((((iParam0 == joaat("chimera") || iParam0 == joaat("blazer")) || iParam0 == joaat("blazer2")) || iParam0 == joaat("blazer3")) || iParam0 == joaat("blazer4"))
	{
		return 1;
	}
	return 0;
}

int func_519()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	func_520(&vVar0, &vVar1, &fVar2);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), vVar0, vVar1, fVar2, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_520(var uParam0, var uParam1, var uParam2)
{
	switch (Local_143.f_1F)
	{
		case 0:
			*uParam0 = { 1056.1f, 3042.89f, 30.78792f };
			*uParam1 = { 1727.083f, 3227.135f, 71.17491f };
			*uParam2 = 100f;
			break;
		
		case 1:
			*uParam0 = { -1689.147f, -2829.733f, 13.9444f };
			*uParam1 = { -989.6f, -3256.4f, 10.9444f };
			*uParam2 = 107f;
			break;
		
		case 2:
			*uParam0 = { 1914.747f, 4705.012f, 35.1674f };
			*uParam1 = { 2166.719f, 4826.836f, 45.523f };
			*uParam2 = 50f;
			break;
	}
}

void func_521(bool bParam0)
{
	unk_0x38C3A68D7861DCFD(0, 71, 1);
	unk_0x38C3A68D7861DCFD(0, 72, 1);
	unk_0x38C3A68D7861DCFD(0, 76, 1);
	unk_0x38C3A68D7861DCFD(0, 59, 1);
	unk_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam0)
	{
		unk_0x38C3A68D7861DCFD(0, 75, 1);
	}
	unk_0x38C3A68D7861DCFD(0, 80, 1);
	unk_0x38C3A68D7861DCFD(0, 69, 1);
	unk_0x38C3A68D7861DCFD(0, 70, 1);
	unk_0x38C3A68D7861DCFD(0, 68, 1);
	unk_0x38C3A68D7861DCFD(0, 74, 1);
	unk_0x38C3A68D7861DCFD(0, 86, 1);
	unk_0x38C3A68D7861DCFD(0, 81, 1);
	unk_0x38C3A68D7861DCFD(0, 82, 1);
	unk_0x38C3A68D7861DCFD(0, 114, 1);
	unk_0x38C3A68D7861DCFD(0, 107, 1);
	unk_0x38C3A68D7861DCFD(0, 110, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 87, 1);
	unk_0x38C3A68D7861DCFD(0, 88, 1);
	unk_0x38C3A68D7861DCFD(0, 113, 1);
	unk_0x38C3A68D7861DCFD(0, 115, 1);
	unk_0x38C3A68D7861DCFD(0, 116, 1);
	unk_0x38C3A68D7861DCFD(0, 117, 1);
	unk_0x38C3A68D7861DCFD(0, 118, 1);
	unk_0x38C3A68D7861DCFD(0, 119, 1);
}

void func_522()
{
	unk_0x38C3A68D7861DCFD(0, 69, 1);
	unk_0x38C3A68D7861DCFD(0, 70, 1);
	unk_0x38C3A68D7861DCFD(0, 68, 1);
	unk_0x38C3A68D7861DCFD(0, 114, 1);
	unk_0x38C3A68D7861DCFD(0, 115, 1);
	unk_0x38C3A68D7861DCFD(0, 116, 1);
	unk_0x38C3A68D7861DCFD(0, 91, 1);
	unk_0x38C3A68D7861DCFD(0, 92, 1);
	unk_0x38C3A68D7861DCFD(0, 99, 1);
	unk_0x38C3A68D7861DCFD(0, 100, 1);
	unk_0x38C3A68D7861DCFD(0, 24, 1);
	unk_0x38C3A68D7861DCFD(0, 257, 1);
	unk_0x38C3A68D7861DCFD(0, 37, 1);
}

void func_523()
{
	if (!func_529())
	{
		return;
	}
	if (!unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == Global_140749.f_9)
	{
		return;
	}
	func_524();
}

void func_524()
{
	func_526();
	func_525(0);
}

void func_525(bool bParam0)
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

void func_526()
{
	if (!func_528())
	{
	}
	if (func_529())
	{
		unk_0x400C0D66EFD08603(&(Global_140749.f_C));
		func_527();
		unk_0x35F2C6537D10DAEB();
	}
}

void func_527()
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

int func_528()
{
	if (!func_529())
	{
		return 0;
	}
	unk_0x18B60B994182620C(&(Global_140749.f_C));
	func_527();
	return unk_0xB165082A56EE6E7F();
}

int func_529()
{
	if (Global_140749 == 20)
	{
		return 0;
	}
	return 1;
}

void func_530(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_34(unk_0xD803B885F5E47A62());
	if (bParam0)
	{
		iLocal_119 = unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9());
		unk_0x6DF7BF67E86AAE86(unk_0x16F2683693E537C9(), uLocal_118[iVar0]);
		func_84(0);
		func_533();
		func_531();
	}
}

void func_531()
{
	int iVar0;
	
	iVar0 = func_34(unk_0xD803B885F5E47A62());
	func_71();
	switch (Local_143.f_1F)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_532(1708.082f, 3257.124f, 40.0367f, 103.4795f);
					func_532(1708.174f, 3249.501f, 40.0217f, 105.6852f);
					func_532(1709.982f, 3241.591f, 39.9943f, 111.8098f);
					func_532(1713.491f, 3233.364f, 40.1406f, 102.9456f);
					func_532(1701.75f, 3218.817f, 40.4952f, 101.568f);
					func_532(1699.146f, 3212.31f, 41.0702f, 89.9389f);
					func_532(1684.962f, 3214.27f, 41.6779f, 93.4364f);
					func_532(1677.763f, 3224.455f, 39.5792f, 95.5699f);
					func_532(1674.756f, 3233.18f, 39.6863f, 100.0559f);
					func_532(1672.174f, 3242.395f, 39.6958f, 97.4521f);
					break;
				
				case 1:
					func_532(1056.888f, 3088.653f, 40.3451f, 278.7011f);
					func_532(1060.045f, 3081.229f, 40.2589f, 278.8035f);
					func_532(1062.256f, 3073.965f, 40.2523f, 286.0508f);
					func_532(1064.773f, 3066.959f, 40.2525f, 287.8311f);
					func_532(1066.519f, 3057.584f, 40.2967f, 275.5681f);
					func_532(1069.415f, 3042.697f, 40.3412f, 291.182f);
					func_532(1070.516f, 3033.868f, 40.3801f, 289.8516f);
					func_532(1075.104f, 3023.745f, 40.3225f, 276.9676f);
					func_532(1076.357f, 3015.861f, 40.3525f, 288.1565f);
					func_532(1075.891f, 3067.573f, 39.8683f, 291.6247f);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_532(-1024.927f, -3260.799f, 12.9444f, 80.47f);
					func_532(-1022.464f, -3257.815f, 12.9444f, 80.47f);
					func_532(-1027.673f, -3254.468f, 12.9444f, 80.47f);
					func_532(-1022.058f, -3255.974f, 12.9444f, 80.47f);
					func_532(-1026.681f, -3253.933f, 12.9444f, 80.47f);
					func_532(-1028.014f, -3248.853f, 12.9444f, 80.47f);
					func_532(-1023.804f, -3248.954f, 12.9444f, 80.47f);
					func_532(-1026.189f, -3244.342f, 12.9444f, 80.47f);
					func_532(-1021.859f, -3244.705f, 12.9444f, 80.47f);
					break;
				
				case 1:
					func_532(-1650.909f, -2860.519f, 12.9444f, 250.7f);
					func_532(-1648.204f, -2866.492f, 12.9444f, 250.7f);
					func_532(-1641.552f, -2865.687f, 12.9452f, 250.7f);
					func_532(-1634.865f, -2869.221f, 12.948f, 250.7f);
					func_532(-1634.6f, -2874.042f, 12.9556f, 250.7f);
					func_532(-1629.217f, -2873.462f, 12.9513f, 250.7f);
					func_532(-1626.581f, -2878.242f, 12.9573f, 250.7f);
					func_532(-1621.161f, -2877.972f, 12.951f, 250.7f);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_532(2128.587f, 4814.231f, 40.1959f, 103.4795f);
					func_532(2131.345f, 4808.89f, 40.1959f, 103.4795f);
					func_532(2133.655f, 4803.1f, 40.1576f, 103.4795f);
					func_532(2127.704f, 4799.296f, 40.1545f, 103.4795f);
					func_532(2123.396f, 4801.777f, 40.0564f, 103.4795f);
					func_532(2119.169f, 4806.328f, 40.1959f, 103.4795f);
					func_532(2114.736f, 4804.185f, 40.1931f, 103.4795f);
					func_532(2113.656f, 4800.263f, 40.1573f, 103.4795f);
					func_532(2115.452f, 4795.467f, 40.1041f, 103.4795f);
					func_532(2110.035f, 4793.893f, 39.8382f, 103.4795f);
					break;
				
				case 1:
					func_532(1927.808f, 4712.542f, 40.1779f, 278.7011f);
					func_532(1928.894f, 4718.197f, 40.1608f, 278.7011f);
					func_532(1934.309f, 4718.631f, 40.098f, 278.7011f);
					func_532(1941.779f, 4714.215f, 40.0632f, 278.7011f);
					func_532(1945.644f, 4715.785f, 40.0656f, 278.7011f);
					func_532(1947.567f, 4720.629f, 40.0604f, 278.7011f);
					func_532(1947.436f, 4726.579f, 40.0851f, 278.7011f);
					func_532(1951.564f, 4730.475f, 40.1026f, 278.7011f);
					func_532(1955.027f, 4729.683f, 40.0806f, 278.7011f);
					func_532(1958.042f, 4726.624f, 40.0604f, 278.7011f);
					func_532(1963.565f, 4722.866f, 40.0783f, 278.7011f);
					break;
			}
			break;
	}
}

void func_532(vector3 vParam0, float fParam1)
{
	if (Global_24B2D0.f_6D2 < 101)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_24B2D0.f_6D3[Global_24B2D0.f_6D2 /*4*/] = { vParam0 };
		Global_24B2D0.f_6D3[Global_24B2D0.f_6D2 /*4*/].f_3 = fParam1;
		Global_24B2D0.f_6D2++;
	}
}

void func_533()
{
	int iVar0;
	
	iVar0 = func_34(unk_0xD803B885F5E47A62());
	func_54(1, 1, 0, 1060320051, 1f, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 1, 1, 0, 1109393408);
	func_536(1, joaat("hexer"), 0, 0, 0, 0, 4294967295, 1, 0, 0, 0);
	switch (Local_143.f_1F)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_534(1708.082f, 3257.124f, 40.0367f, 103.4795f, 1065353216);
					func_534(1708.174f, 3249.501f, 40.0217f, 105.6852f, 1065353216);
					func_534(1709.982f, 3241.591f, 39.9943f, 111.8098f, 1065353216);
					func_534(1713.491f, 3233.364f, 40.1406f, 102.9456f, 1065353216);
					func_534(1701.75f, 3218.817f, 40.4952f, 101.568f, 1065353216);
					func_534(1699.146f, 3212.31f, 41.0702f, 89.9389f, 1065353216);
					func_534(1684.962f, 3214.27f, 41.6779f, 93.4364f, 1065353216);
					func_534(1677.763f, 3224.455f, 39.5792f, 95.5699f, 1065353216);
					func_534(1674.756f, 3233.18f, 39.6863f, 100.0559f, 1065353216);
					func_534(1672.174f, 3242.395f, 39.6958f, 97.4521f, 1065353216);
					break;
				
				case 1:
					func_534(1056.888f, 3088.653f, 40.3451f, 278.7011f, 1065353216);
					func_534(1060.045f, 3081.229f, 40.2589f, 278.8035f, 1065353216);
					func_534(1062.256f, 3073.965f, 40.2523f, 286.0508f, 1065353216);
					func_534(1064.773f, 3066.959f, 40.2525f, 287.8311f, 1065353216);
					func_534(1066.519f, 3057.584f, 40.2967f, 275.5681f, 1065353216);
					func_534(1069.415f, 3042.697f, 40.3412f, 291.182f, 1065353216);
					func_534(1070.516f, 3033.868f, 40.3801f, 289.8516f, 1065353216);
					func_534(1075.104f, 3023.745f, 40.3225f, 276.9676f, 1065353216);
					func_534(1076.357f, 3015.861f, 40.3525f, 288.1565f, 1065353216);
					func_534(1075.891f, 3067.573f, 39.8683f, 291.6247f, 1065353216);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_534(-1024.927f, -3260.799f, 12.9444f, 80.47f, 1065353216);
					func_534(-1022.464f, -3257.815f, 12.9444f, 80.47f, 1065353216);
					func_534(-1027.673f, -3254.468f, 12.9444f, 80.47f, 1065353216);
					func_534(-1022.058f, -3255.974f, 12.9444f, 80.47f, 1065353216);
					func_534(-1026.681f, -3253.933f, 12.9444f, 80.47f, 1065353216);
					func_534(-1028.014f, -3248.853f, 12.9444f, 80.47f, 1065353216);
					func_534(-1023.804f, -3248.954f, 12.9444f, 80.47f, 1065353216);
					func_534(-1026.189f, -3244.342f, 12.9444f, 80.47f, 1065353216);
					func_534(-1021.859f, -3244.705f, 12.9444f, 80.47f, 1065353216);
					break;
				
				case 1:
					func_534(-1650.909f, -2860.519f, 12.9444f, 250.7f, 1065353216);
					func_534(-1648.204f, -2866.492f, 12.9444f, 250.7f, 1065353216);
					func_534(-1641.552f, -2865.687f, 12.9452f, 250.7f, 1065353216);
					func_534(-1634.865f, -2869.221f, 12.948f, 250.7f, 1065353216);
					func_534(-1634.6f, -2874.042f, 12.9556f, 250.7f, 1065353216);
					func_534(-1629.217f, -2873.462f, 12.9513f, 250.7f, 1065353216);
					func_534(-1626.581f, -2878.242f, 12.9573f, 250.7f, 1065353216);
					func_534(-1621.161f, -2877.972f, 12.951f, 250.7f, 1065353216);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_534(2128.587f, 4814.231f, 40.1959f, 103.4795f, 1065353216);
					func_534(2131.345f, 4808.89f, 40.1959f, 103.4795f, 1065353216);
					func_534(2133.655f, 4803.1f, 40.1576f, 103.4795f, 1065353216);
					func_534(2127.704f, 4799.296f, 40.1545f, 103.4795f, 1065353216);
					func_534(2123.396f, 4801.777f, 40.0564f, 103.4795f, 1065353216);
					func_534(2119.169f, 4806.328f, 40.1959f, 103.4795f, 1065353216);
					func_534(2114.736f, 4804.185f, 40.1931f, 103.4795f, 1065353216);
					func_534(2113.656f, 4800.263f, 40.1573f, 103.4795f, 1065353216);
					func_534(2115.452f, 4795.467f, 40.1041f, 103.4795f, 1065353216);
					func_534(2110.035f, 4793.893f, 39.8382f, 103.4795f, 1065353216);
					break;
				
				case 1:
					func_534(1927.808f, 4712.542f, 40.1779f, 278.7011f, 1065353216);
					func_534(1928.894f, 4718.197f, 40.1608f, 278.7011f, 1065353216);
					func_534(1934.309f, 4718.631f, 40.098f, 278.7011f, 1065353216);
					func_534(1941.779f, 4714.215f, 40.0632f, 278.7011f, 1065353216);
					func_534(1945.644f, 4715.785f, 40.0656f, 278.7011f, 1065353216);
					func_534(1947.567f, 4720.629f, 40.0604f, 278.7011f, 1065353216);
					func_534(1947.436f, 4726.579f, 40.0851f, 278.7011f, 1065353216);
					func_534(1951.564f, 4730.475f, 40.1026f, 278.7011f, 1065353216);
					func_534(1955.027f, 4729.683f, 40.0806f, 278.7011f, 1065353216);
					func_534(1958.042f, 4726.624f, 40.0604f, 278.7011f, 1065353216);
					func_534(1963.565f, 4722.866f, 40.0783f, 278.7011f, 1065353216);
					break;
			}
			break;
	}
}

void func_534(vector3 vParam0, float fParam1, int iParam2)
{
	func_535(vParam0, fParam1, iParam2);
}

void func_535(vector3 vParam0, var uParam1, var uParam2)
{
	if (!Global_24B2D0.f_6D1)
	{
	}
	if (Global_24B2D0.f_2C2 < 100)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_24B2D0.f_2C2.f_1[Global_24B2D0.f_2C2 /*5*/] = { vParam0 };
		Global_24B2D0.f_2C2.f_1[Global_24B2D0.f_2C2 /*5*/].f_3 = uParam1;
		Global_24B2D0.f_2C2.f_1[Global_24B2D0.f_2C2 /*5*/].f_4 = uParam2;
		Global_24B2D0.f_2C2++;
	}
}

void func_536(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	
	if (!iParam1 == 0 && !unk_0x3FC14104C3FD24D5(iParam1))
	{
		iParam1 = joaat("tailgater");
	}
	Global_24B2D0.f_2D.f_41 = bParam0;
	Global_24B2D0.f_2D.f_43 = iParam1;
	Global_24B2D0.f_2D.f_44 = bParam2;
	Global_24B2D0.f_2D.f_AD = iParam3;
	Global_24B2D0.f_2D.f_42 = iParam4;
	Global_24B2D0.f_2D.f_AF = bParam5;
	Global_24B2D0.f_2D.f_B0 = bParam7;
	Global_24B2D0.f_2D.f_B4 = iParam6;
	Global_24B2D0.f_2D.f_B1 = iParam8;
	Global_24B2D0.f_2D.f_B2 = iParam9;
	Global_24B2D0.f_2D.f_B3 = bParam10;
	if (!bParam0)
	{
		func_539();
	}
	if (bParam2)
	{
		iVar0 = func_538();
		if (unk_0xC844350D5D58C99A(iVar0))
		{
			if (!unk_0xAF6690C489CC6203(iVar0))
			{
				if (unk_0x7DDF43006A714856(iVar0))
				{
					unk_0x73270B3C9CC833FD(iVar0, false, 1);
					bVar1 = true;
				}
			}
			if (!unk_0x437347B10A200C4B(iVar0, 0))
			{
				if (unk_0x9C77D2D0559097F0(iVar0, 1))
				{
					if (!unk_0xAFE0D3608EDA7039(iVar0))
					{
						unk_0x8D30F6387EE75385(unk_0xFBA927257CA38E95(iVar0));
					}
				}
			}
			if (unk_0xAFE0D3608EDA7039(iVar0))
			{
				if (bVar1)
				{
					unk_0x046C362CF15F1935(&iVar0);
				}
				if (bParam5)
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0))
					{
						unk_0xD5A0214B20BCBAD8(iVar0, true);
					}
				}
				if (bParam7)
				{
					if (!unk_0x437347B10A200C4B(iVar0, 0))
					{
						unk_0xA22F71BBC8173C39(iVar0, false);
					}
				}
				if (iParam6 > 4294967295)
				{
					unk_0xC002508A277213DE(iVar0, iParam6, iParam6);
					unk_0x58A0C35FA7CA6162(iVar0, iParam6, iParam6);
				}
				if (bParam10)
				{
					func_537(iVar0);
				}
			}
		}
	}
}

void func_537(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0xAFE0D3608EDA7039(iParam0))
		{
			if (Global_19BFF9 > 4294967295)
			{
				if (unk_0xF1D385D359D58F72("GBMissionFire", 3))
				{
					if (!unk_0x30F813723591D02E(iParam0, "GBMissionFire"))
					{
						unk_0xB7E567188872123E(iParam0, "GBMissionFire", Global_19BFF9);
					}
				}
			}
		}
	}
}

var func_538()
{
	return Global_24B2D0.f_A64;
}

void func_539()
{
	struct<102> Var0;
	
	Var0.f_9 = 49;
	Var0.f_3B = 2;
	Var0.f_4E = 4294967295;
	Var0.f_4F = 4294967295;
	Var0.f_60 = 4294967295;
	Var0.f_61 = 1;
	Var0.f_63 = 132;
	Var0.f_64 = 4294967295;
	Global_24B2D0.f_2D.f_45 = { Var0 };
	Global_24B2D0.f_2D.f_AB = 0;
}

void func_540()
{
	if (!func_44(unk_0xFB04705FDFDCE640(), 1))
	{
		return;
	}
	if (!func_729(7))
	{
		func_553(&iLocal_83);
		func_705(7);
		unk_0x679C321F8CAA2CFA(func_552(func_34(unk_0xD803B885F5E47A62())), 50f, 1);
	}
	if (!func_44(unk_0xFB04705FDFDCE640(), 7))
	{
		if (func_551(&iLocal_83))
		{
			if (func_17(10))
			{
				if (func_541(&iLocal_83, 1, 0, 1))
				{
					func_88(7);
				}
			}
		}
	}
}

int func_541(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_551(iParam0))
	{
		if (!func_550(&(iParam0->f_3)))
		{
			func_548(&(iParam0->f_3));
		}
		unk_0xD9ACBBA59FD5A09E(4);
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0x6567AE843FADBA94(*iParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = SYSTEM::FLOOR(func_545(&(iParam0->f_3)));
		iVar1 = unk_0x51D1D19912234EA0((iVar0 - 3));
		bVar2 = false;
		if (func_361(iParam0->f_1, 4))
		{
			if (iParam0->f_2 >= 5)
			{
				if (!func_361(iParam0->f_1, 16))
				{
					unk_0x4D7F4CC43D4D0DE3(4294967295, "GO", "HUD_MINI_GAME_SOUNDSET", false);
					func_374(&(iParam0->f_1), 16);
					unk_0xE96F19797E59AB06();
				}
			}
			else
			{
				iParam0->f_2++;
			}
		}
		if (!func_361(iParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_361(iParam0->f_1, 1))
			{
				func_374(&(iParam0->f_1), 1);
				unk_0x4D7F4CC43D4D0DE3(4294967295, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_544(iParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_361(iParam0->f_1, 2))
			{
				func_374(&(iParam0->f_1), 2);
				unk_0x4D7F4CC43D4D0DE3(4294967295, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_544(iParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_361(iParam0->f_1, 4))
			{
				func_374(&(iParam0->f_1), 4);
				unk_0x4D7F4CC43D4D0DE3(4294967295, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_544(iParam0, iVar1);
			}
			else if (iVar1 == 0 && !func_361(iParam0->f_1, 8))
			{
				func_374(&(iParam0->f_1), 8);
				unk_0xC92DB9682A650680("BIKER_JOUST_FIGHT");
				unk_0xA402F6C87C08815C(18, &iVar3, &iVar4, &iVar5, &uVar6);
				unk_0x7E60C62A7CE58FC8(*iParam0, "SET_MESSAGE");
				func_397("CNTDWN_GO");
				unk_0x3CAEA85DA607305E(iVar3);
				unk_0x3CAEA85DA607305E(iVar4);
				unk_0x3CAEA85DA607305E(iVar5);
				unk_0x1200CC973A2399C8(true);
				unk_0x7E60D21B163E9D56();
				func_88(6);
				if (!bParam1)
				{
					bVar2 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			bVar2 = true;
		}
		if ((iParam2 && func_543()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				iParam0->f_1 = 0;
				func_542(&(iParam0->f_3));
			}
			unk_0x8910D3D58E0132B8("RACES_RADIO_MUTE_scene");
			unk_0x8BC9595FD2792B5D("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < unk_0x54EABC0DD106045B())
			{
				if (unk_0x81A93C8315C28F58(unk_0xF4FB3A22FC4991C8(iVar7)))
				{
					iVar8 = unk_0x4B2BFE4A3BC248ED(unk_0xF4FB3A22FC4991C8(iVar7));
					if (iVar8 != unk_0xD803B885F5E47A62())
					{
						iVar9 = unk_0x9539D44F3E4492F6(iVar8);
						if (unk_0x405E212DDE472467(iVar9, 0))
						{
							iVar10 = unk_0x6937EA2286828455(iVar9, 0);
							unk_0x2E1E5367A885F9B7(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar7++;
			}
			return 1;
		}
	}
	return 0;
}

void func_542(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_543()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (unk_0x06F8112AA79C53D9(0, 18) || unk_0x06F8112AA79C53D9(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_544(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	unk_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0x7E60C62A7CE58FC8(*iParam0, "SET_MESSAGE");
	unk_0x7ACC3006A87F8B39("NUMBER");
	unk_0x6D99DF8263D35CE5(unk_0x51D1D19912234EA0(iParam1));
	unk_0x779B34565F4D71B1();
	unk_0x3CAEA85DA607305E(iVar0);
	unk_0x3CAEA85DA607305E(iVar1);
	unk_0x3CAEA85DA607305E(iVar2);
	unk_0x1200CC973A2399C8(true);
	unk_0x7E60D21B163E9D56();
}

float func_545(var uParam0)
{
	if (func_550(uParam0))
	{
		if (func_547(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_546(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_546(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x1C0640BA9A7327B3()) / 1000f);
}

bool func_547(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

void func_548(int iParam0)
{
	func_549(iParam0, 0f);
}

void func_549(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_546(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_550(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

int func_551(int iParam0)
{
	if (!unk_0x83D8570832F172A7(*iParam0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_552(int iParam0)
{
	switch (Local_143.f_1F)
	{
		case 0:
			if (iParam0 == 0)
			{
				return 1706.612f, 3251.994f, 40.1522f;
			}
			return 1066.192f, 3078.314f, 40.9174f;
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				return -1004.147f, -3235.733f, 12.9444f;
			}
			return -1675.056f, -2848.475f, 12.9444f;
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				return 2141.719f, 4811.836f, 40.1823f;
			}
			return 1928.747f, 4713.012f, 40.1674f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_553(int iParam0)
{
	*iParam0 = unk_0xB01F55A0FD1CFD49("COUNTDOWN");
}

void func_554()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_44(unk_0xFB04705FDFDCE640(), 1))
		{
			func_86(1);
		}
		if (func_44(unk_0xFB04705FDFDCE640(), 2))
		{
			func_86(2);
		}
		return;
	}
	if (func_576() || func_573())
	{
		func_522();
		unk_0x38C3A68D7861DCFD(0, 140, 1);
		unk_0x38C3A68D7861DCFD(0, 141, 1);
		unk_0x38C3A68D7861DCFD(0, 142, 1);
		unk_0x38C3A68D7861DCFD(0, 143, 1);
		unk_0x38C3A68D7861DCFD(0, 24, 1);
		unk_0x38C3A68D7861DCFD(0, 345, 1);
		unk_0x38C3A68D7861DCFD(0, 346, 1);
		unk_0x38C3A68D7861DCFD(0, 347, 1);
	}
	if (func_576())
	{
		if (!func_44(unk_0xFB04705FDFDCE640(), 4))
		{
			func_88(4);
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), false);
			unk_0xDC4BBCD7EBECDC32(false);
			unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 0);
		}
		if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
		{
			if (func_572(2))
			{
				func_571(2);
			}
			if (!func_85())
			{
				if (func_572(3))
				{
					func_571(3);
				}
				iVar1 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
				iVar0 = unk_0x134B62B726CEC8E6(iVar1);
				if (func_518(iVar0))
				{
					unk_0xFC03550CDEF9A885(iVar1, 1);
					func_570(3);
					if (func_572(4))
					{
						func_571(4);
					}
					if (!func_44(unk_0xFB04705FDFDCE640(), 2))
					{
						func_88(2);
					}
					if (unk_0xEAE0D21A50E6C7F4(Local_143.f_2, unk_0x57270EE11514DC67()))
					{
						if (!func_44(unk_0xFB04705FDFDCE640(), 1))
						{
							unk_0xC92DB9682A650680("BIKER_JOUST_START");
							func_88(1);
							func_568();
							unk_0x335A7ED560871478(1);
						}
						if (!func_567() || !func_566())
						{
							if (func_45(unk_0xD803B885F5E47A62()))
							{
								if (!func_567())
								{
									func_555(6);
								}
							}
							else
							{
								func_555(7);
							}
						}
						else
						{
							func_555(8);
						}
					}
				}
				else
				{
					if (func_44(unk_0xFB04705FDFDCE640(), 1))
					{
						func_86(1);
					}
					if (func_44(unk_0xFB04705FDFDCE640(), 2))
					{
						func_86(2);
					}
					func_555(4);
				}
			}
			else
			{
				if (func_44(unk_0xFB04705FDFDCE640(), 1))
				{
					func_86(1);
				}
				if (func_44(unk_0xFB04705FDFDCE640(), 2))
				{
					func_86(2);
				}
				if (func_44(unk_0xFB04705FDFDCE640(), 4))
				{
					func_86(4);
				}
				func_555(3);
			}
		}
		else
		{
			if (func_44(unk_0xFB04705FDFDCE640(), 1))
			{
				func_86(1);
			}
			if (func_44(unk_0xFB04705FDFDCE640(), 2))
			{
				func_86(2);
			}
			func_555(2);
		}
	}
	else
	{
		if (func_44(unk_0xFB04705FDFDCE640(), 1))
		{
			func_86(1);
		}
		if (func_44(unk_0xFB04705FDFDCE640(), 2))
		{
			func_86(2);
		}
		if (func_44(unk_0xFB04705FDFDCE640(), 4))
		{
			func_86(4);
			func_84(0);
			unk_0x5507FCD92D15E617(unk_0x16F2683693E537C9(), 1);
		}
	}
}

void func_555(int iParam0)
{
	struct<8> Var0;
	int iVar1;
	
	if (func_565())
	{
		if (!func_572(iParam0))
		{
			switch (iParam0)
			{
				case 3:
					func_106("JST_PASSMD", 4294967295);
					break;
				
				case 2:
					func_106("JST_NOBIKE", 4294967295);
					break;
				
				case 5:
					break;
				
				case 6:
					func_106("JST_HRBOSS", 4294967295);
					break;
				
				case 7:
					func_106("JST_HWBOSS", 4294967295);
					break;
				
				case 8:
					func_106("JST_HTBOSS", 4294967295);
					break;
				
				case 9:
					func_106("JST_KBIKE", 4294967295);
					break;
				
				case 11:
					func_106("JST_OAREA", 4294967295);
					break;
				
				case 12:
					func_106("JST_HSTART", 4294967295);
					break;
				
				case 13:
					if (func_145())
					{
						func_564("JST_HTBLAUNCH", "JST_BLIP", iLocal_120, 4294967295);
					}
					else
					{
						func_564("JST_HGNLNCH", "JST_BLIP", iLocal_120, 4294967295);
					}
					break;
				
				case 14:
					func_564("JST_HGNLNCH", "JST_BLIP", iLocal_120, 4294967295);
					break;
				
				case 10:
					func_564("JST_FIGHT", "HUNT_TARBLP", iLocal_121, 4294967295);
					break;
				
				case 15:
					func_564("JST_AMMOH", "JST_AMMOBL", 18, 4294967295);
					break;
				
				case 16:
					StringCopy(&Var0, func_558(func_36()), 64);
					iVar1 = func_707(func_36());
					func_557("JST_RVLLNCH", &Var0, iVar1, "JST_BLIP", iLocal_120, 4294967295);
					break;
				
				case 17:
					if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if (unk_0x134B62B726CEC8E6(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)) != 884483972)
						{
							func_106("JST_DOUB", 4294967295);
						}
					}
					break;
				
				default:
					break;
			}
			func_102(1);
			func_556(iParam0);
		}
	}
}

void func_556(int iParam0)
{
	unk_0x5D96D8530B3D0904(&iLocal_99, iParam0);
}

void func_557(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_558(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		sVar0 = func_563(&(Global_18D84D[iParam0 /*615*/].f_B.f_68));
		return sVar0;
	}
	if (Global_18D84D[iParam0 /*615*/].f_B.f_78 != Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_78)
	{
		sVar0 = func_561(iParam0, 0);
		return sVar0;
	}
	if (((func_62(iParam0, 28) || func_62(unk_0xD803B885F5E47A62(), 28)) || func_560(iParam0)) && !func_559(iParam0))
	{
		return func_561(iParam0, 0);
	}
	iVar1 = func_264(iParam0);
	if (iVar1 != func_29())
	{
		if (iVar1 != unk_0xD803B885F5E47A62())
		{
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0, 4294967295, 1))
			{
				return func_561(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_29())
	{
		sVar0 = func_563(&(Global_18D84D[iVar1 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar0))
		{
			return func_561(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_559(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_200(iParam0) };
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

int func_560(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_29())
	{
		Var0 = { func_200(iParam0) };
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

char* func_561(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_104(iParam0, 1))
		{
			return func_562();
		}
	}
	return unk_0x19C9F30A7697B43C("GB_REST_ACC");
}

char* func_562()
{
	return unk_0x19C9F30A7697B43C("GB_REST_ACCM");
}

var func_563(var uParam0)
{
	return uParam0;
}

void func_564(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x3A820E495A7BA3E5(iParam2);
	}
	unk_0x6B012227B3921E18(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0, 0, false, iParam3);
}

int func_565()
{
	if (((((!func_380() && !unk_0x798A3F1296751F46()) && !unk_0x0178C60FEA5C5A75()) && func_993(unk_0xD803B885F5E47A62(), 1, 1)) && !func_122()) && !unk_0xFEBC1E4EC9E001F0())
	{
		return 1;
	}
	return 0;
}

bool func_566()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_34(unk_0xD803B885F5E47A62());
	if (iVar1 == 0)
	{
		iVar0 = 8;
	}
	else
	{
		iVar0 = 9;
	}
	return func_17(iVar0);
}

bool func_567()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (1 - func_34(unk_0xD803B885F5E47A62()));
	if (iVar0 == 0)
	{
		iVar1 = 8;
	}
	else
	{
		iVar1 = 9;
	}
	return func_17(iVar1);
}

void func_568()
{
	if (!func_569(unk_0xD803B885F5E47A62()))
	{
		func_123(25);
	}
}

bool func_569(int iParam0)
{
	return func_62(iParam0, 25);
}

void func_570(int iParam0)
{
	Global_24B2D0.f_2D.f_12E = iParam0;
	unk_0x545E1397F38D9D5A(unk_0x16F2683693E537C9(), Global_24B2D0.f_2D.f_12E);
	if (Global_24B2D0.f_2D.f_12E == 1)
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 115, true);
	}
	else
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 115, false);
	}
}

void func_571(int iParam0)
{
	unk_0x0674E58A79778E99(&iLocal_99, iParam0);
}

bool func_572(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_99, iParam0);
}

int func_573()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	vVar1 = { func_552(func_575(unk_0xD803B885F5E47A62())) };
	fVar2 = unk_0x0EB28750412C3A5A(vVar0, vVar1, false);
	fVar3 = (func_574(func_575(unk_0xD803B885F5E47A62())) / 2f);
	if (fVar2 <= fVar3)
	{
		if (unk_0x755FF954DAE327E1((vVar1.z - vVar0.z)) <= fVar3)
		{
			return 1;
		}
	}
	return 0;
}

float func_574(int iParam0)
{
	if (iParam0 == 0)
	{
		return 44.75f;
	}
	return 44.75f;
}

int func_575(int iParam0)
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_576()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	
	vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	vVar1 = { func_552(func_34(unk_0xD803B885F5E47A62())) };
	fVar2 = unk_0x0EB28750412C3A5A(vVar0, vVar1, false);
	fVar3 = (func_574(func_34(unk_0xD803B885F5E47A62())) / 2f);
	if (fVar2 <= fVar3)
	{
		if (unk_0x755FF954DAE327E1((vVar1.z - vVar0.z)) <= fVar3)
		{
			return 1;
		}
	}
	return 0;
}

void func_577()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	unk_0xA402F6C87C08815C(iLocal_120, &iVar0, &iVar1, &iVar2, &iVar3);
	fVar4 = 16.125f;
	fVar5 = 3.75f;
	fVar6 = func_574(func_34(unk_0xD803B885F5E47A62()));
	vVar7 = { func_552(func_34(unk_0xD803B885F5E47A62())) };
	vVar7.z = (vVar7.z - fVar5);
	unk_0x922D0EFFF8F2403B(1, vVar7, 0f, 0f, 0f, 0f, 0f, 0f, fVar6, fVar6, fVar4, iVar0, iVar1, iVar2, iVar3, 0, 0, 2, 0, 0, 0, false);
}

void func_578()
{
	if (func_617())
	{
		func_611();
		func_610();
		func_597();
		func_580();
		func_579();
	}
	else
	{
		switch (func_116(unk_0xD803B885F5E47A62()))
		{
			case 0:
				func_523();
				break;
			
			case 1:
				func_611();
				break;
			
			case 2:
				func_579();
				break;
			
			case 3:
				func_611();
				func_610();
				func_597();
				func_579();
				func_580();
				break;
			}
	}
}

void func_579()
{
	if (func_27() >= 2)
	{
		if (func_17(11))
		{
			if (func_44(unk_0xFB04705FDFDCE640(), 1))
			{
				if (!func_572(10))
				{
					func_555(10);
				}
				else
				{
					func_555(15);
				}
				if (!func_572(17))
				{
					func_555(17);
				}
			}
		}
		else if (!func_44(unk_0xFB04705FDFDCE640(), 1))
		{
			func_555(12);
		}
		else
		{
			func_555(12);
		}
	}
	else if (func_27() >= 1)
	{
		if (func_617())
		{
			if (unk_0xD803B885F5E47A62() == Local_143.f_10[0])
			{
				func_555(13);
			}
			else
			{
				func_555(14);
			}
		}
		else
		{
			func_555(16);
		}
	}
}

void func_580()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_5(&uLocal_140))
	{
		if (func_5(&(Local_143.f_5)))
		{
			iLocal_110 = (func_3() - func_22(&(Local_143.f_5), 0, 0));
			if (iLocal_110 < func_3())
			{
				if (iLocal_110 > 30000)
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = 6;
				}
				func_596();
				iVar2 = func_34(unk_0xD803B885F5E47A62());
				iVar3 = (1 - iVar2);
				iVar4 = func_707(unk_0xD803B885F5E47A62());
				iVar5 = Local_143.f_10[iVar3];
				if (Local_143.f_18[iVar2] > 0)
				{
					func_593(Local_143.f_1B[iVar2], "JST_TEAML", 4294967295, iVar4, 5, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_80, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, 4294967295);
				}
				else
				{
					func_593(Local_143.f_1B[iVar2], "JST_TEAML", 999999999, 6, 5, 0, 0, 0, 0, 2, 0, 6, 0, iLocal_80, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, 4294967295);
				}
				if (iVar5 != func_29())
				{
					if (unk_0x40B8C182D63932FC(iVar5))
					{
						if (!unk_0xEA6BC48857E0AC4C(&Local_131))
						{
							iVar4 = func_707(iVar5);
							func_593(Local_143.f_1B[iVar3], "JST_ETEAML", 4294967295, iVar4, 4, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_80, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, 4294967295);
						}
					}
				}
				if (iLocal_110 > 0)
				{
					func_592(iLocal_110, "CLUB_WORK_END", 0, 0, 4294967295, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
				}
				else
				{
					func_592(0, "CLUB_WORK_END", 0, 0, 4294967295, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0, 4294967295);
				}
			}
		}
		else
		{
			func_581();
		}
	}
	else
	{
		iVar0 = (10000 - func_22(&uLocal_140, 0, 0));
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		if (func_993(unk_0xD803B885F5E47A62(), 1, 1))
		{
			func_596();
			func_592(iVar0, "PEN_ELM", 0, 1, 4294967295, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, 4294967295);
		}
	}
}

void func_581()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_503())
	{
		return;
	}
	bVar0 = func_24();
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (bVar0)
	{
		iVar2 = func_591();
		if (iVar2 > iLocal_104)
		{
			iVar2 = iLocal_104;
		}
		if (iVar3 != Local_143.f_3)
		{
			iVar3 = Local_143.f_3;
		}
		if ((iVar1 - func_22(&(Local_143.f_7), 0, 0)) >= 0)
		{
			func_590((iVar1 - func_22(&(Local_143.f_7), 0, 0)));
			func_582(iVar3, iVar2, (iVar1 - func_22(&(Local_143.f_7), 0, 0)), 1, func_589(4294967295));
		}
		else
		{
			func_582(iVar3, iVar2, 0, 1, func_589(4294967295));
		}
	}
}

void func_582(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_587(0) == 0)
	{
		return;
	}
	func_586();
	func_583(iParam0, iParam1, "HUD_PARITIC", 4294967295, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_221(sParam4))
	{
		sVar0 = sParam4;
	}
	func_592(iParam2, sVar0, 0, 0, 4294967295, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, 4294967295);
}

void func_583(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_585(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_150976.f_1 = 1;
		func_584(4, iVar0);
		Global_150976.f_CC8[iVar0] = iParam0;
		Global_150976.f_CC8.f_AC[iVar0] = iParam1;
		StringCopy(&(Global_150976.f_CC8.f_B[iVar0 /*16*/]), sParam2, 64);
		Global_150976.f_CC8.f_B7[iVar0] = iParam3;
		Global_150976.f_CC8.f_D8[iVar0] = iParam5;
		Global_150976.f_CC8.f_C2[iVar0] = iParam4;
		Global_150976.f_CC8.f_E3[iVar0] = iParam6;
		Global_150976.f_CC8.f_10E[iVar0] = iParam7;
		Global_150976.f_CC8.f_119[iVar0] = iParam8;
		Global_150976.f_CC8.f_124[iVar0] = iParam9;
		Global_150976.f_CC8.f_12F[iVar0] = iParam10;
		Global_150976.f_CC8.f_13A[iVar0] = iParam11;
		Global_150976.f_CC8.f_145[iVar0] = iParam13;
		Global_150976.f_CC8.f_150[iVar0] = iParam14;
		Global_150976.f_CC8.f_15B[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x0EFF6B4415DAF4A1()) && iParam12)
		{
			Global_150976.f_46A = 1;
		}
	}
}

void func_584(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_585(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

void func_586()
{
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(7);
	Global_259211 = 1;
}

int func_587(bool bParam0)
{
	if (func_588())
	{
		return 0;
	}
	if (func_486())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_993(unk_0xD803B885F5E47A62(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_588()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 12);
}

char* func_589(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xBB0808A181D4745C();
	return "HUD_STARTING";
	if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0x7F8A39872A07D2CE(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_590(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x6117725E0134737F())
	{
		Global_26B66F.f_1361 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1361, 1))
		{
			unk_0x4D7F4CC43D4D0DE3(4294967295, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_26B66F.f_1361 = 0;
			unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1361), 1);
		}
	}
}

int func_591()
{
	return 16;
}

void func_592(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_585(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_150976.f_1 = 1;
		func_584(7, iVar0);
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

void func_593(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_585(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_150976.f_1 = 1;
		func_584(6, iVar0);
		Global_150976.f_F68[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_F68.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_F68.f_B7[iVar0] = iParam3;
		Global_150976.f_F68.f_AC[iVar0] = iParam2;
		Global_150976.f_F68.f_104[iVar0] = iParam4;
		Global_150976.f_F68.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_150976.f_F68.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_150976.f_F68.f_1BB[iVar0] = iParam7;
		Global_150976.f_F68.f_1C6[iVar0] = iParam8;
		Global_150976.f_F68.f_1F1[iVar0] = iParam9;
		Global_150976.f_F68.f_1FC[iVar0] = iParam10;
		Global_150976.f_F68.f_CD[iVar0] = iParam11;
		Global_150976.f_F68.f_D8[iVar0] = iParam12;
		Global_150976.f_F68.f_E3[iVar0] = uParam13;
		Global_150976.f_F68.f_EE[iVar0] = iParam14;
		Global_150976.f_F68.f_F9[iVar0] = iParam15;
		Global_150976.f_F68.f_207[iVar0] = iParam16;
		Global_150976.f_F68.f_212[iVar0] = iParam17;
		Global_150976.f_F68.f_21D[iVar0] = iParam18;
		Global_150976.f_F68.f_228[iVar0] = iParam19;
		Global_150976.f_F68.f_233[iVar0] = iParam20;
		Global_150976.f_F68.f_23E[iVar0] = iParam21;
		Global_150976.f_F68.f_249[iVar0] = iParam22;
		Global_150976.f_F68.f_254[iVar0] = iParam23;
		Global_150976.f_F68.f_25F[iVar0] = iParam24;
		Global_150976.f_F68.f_C2[iVar0] = iParam25;
		if (iParam15 == 5 && func_595())
		{
			Global_150976.f_46A = 1;
		}
		if (unk_0x0EFF6B4415DAF4A1())
		{
			iVar2 = 0;
			unk_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_150976.f_46E = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_150976.f_46D = 1;
			}
			else if (iParam0 > 999)
			{
				Global_150976.f_46A = 1;
			}
			if (func_594())
			{
				Global_150976.f_46E = 1;
			}
		}
	}
}

int func_594()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_595()
{
	if (((unk_0xB3260A60545D3F11() == 8 || unk_0xB3260A60545D3F11() == 9) || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 12)
	{
		return 1;
	}
	return 0;
}

void func_596()
{
	Global_150976.f_46A = 1;
}

void func_597()
{
	if (iLocal_107 > 4294967295)
	{
		if (func_44(unk_0xF4FB3A22FC4991C8(iLocal_107), 1))
		{
			if (func_44(unk_0xF4FB3A22FC4991C8(iLocal_107), 6))
			{
				if (func_519())
				{
					if (func_517())
					{
						if (!func_609("JST_OBJ_KILL"))
						{
							func_608("JST_OBJ_KILL", &Local_131, iLocal_121, 0);
						}
					}
					else
					{
						if (func_609("JST_OBJ_KILL"))
						{
							func_523();
						}
						if (!func_609("JST_FBIKE"))
						{
							func_605("JST_FBIKE", 0);
						}
						if (!func_44(unk_0xFB04705FDFDCE640(), 10))
						{
							func_88(10);
							func_604("JST_FBIKEGUNS", 4294967295);
						}
					}
				}
				else if (func_517())
				{
					if (!func_609("JST_OBKAREA"))
					{
						func_605("JST_OBKAREA", 0);
					}
				}
				else
				{
					if (func_609("JST_OBJ_KILL"))
					{
						func_523();
					}
					if (!func_609("JST_FBIKE"))
					{
						func_605("JST_FBIKE", 0);
					}
				}
			}
			else if (func_729(9))
			{
				if (func_517())
				{
					if (!func_609("JST_OBJ_CHARGE"))
					{
						func_608("JST_OBJ_CHARGE", &Local_131, iLocal_121, 0);
					}
				}
			}
		}
		else if (!func_576())
		{
			if (!func_609("JST_OGOAREA"))
			{
				func_598("JST_OGOAREA", "JST_START", iLocal_120, 0);
			}
		}
		else if (!func_517())
		{
			if (!func_609("JST_OBIKE"))
			{
				func_605("JST_OBIKE", 0);
			}
		}
	}
}

void func_598(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_599(sParam0, sParam1, bParam3, iParam2))
	{
		Global_140749 = 19;
		Global_140749.f_38 = iParam2;
	}
}

int func_599(char* sParam0, char* sParam1, bool bParam2, var uParam3)
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
	if (func_603(sParam0, sParam1) && Global_140749.f_38 == Global_140749.f_3A)
	{
		return 0;
	}
	func_524();
	Global_140749 = 3;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	StringCopy(&(Global_140749.f_10), sParam1, 64);
	Global_140749.f_3A = uParam3;
	Global_140749.f_38 = uParam3;
	func_602();
	func_601(bParam2);
	func_600();
	return 1;
}

void func_600()
{
	unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 1);
}

void func_601(bool bParam0)
{
	if (bParam0)
	{
		unk_0x5D96D8530B3D0904(&(Global_140749.f_3B), 0);
		return;
	}
	unk_0x0674E58A79778E99(&(Global_140749.f_3B), 0);
}

void func_602()
{
	Global_140749.f_A = unk_0x04787588C7E736F8(unk_0x2B6E0A53779D29EA(), 86400000);
	Global_140749.f_B = unk_0x2B6E0A53779D29EA();
}

bool func_603(char* sParam0, char* sParam1)
{
	if (!func_529())
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

void func_604(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_605(char* sParam0, bool bParam1)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	if (unk_0x7724E025FD444F45(sParam0) > 23)
	{
		return;
	}
	if (func_606(sParam0))
	{
		return;
	}
	func_524();
	Global_140749 = 0;
	StringCopy(&(Global_140749.f_1), unk_0xBB0808A181D4745C(), 32);
	Global_140749.f_9 = unk_0x12AB0310C2281427(&(Global_140749.f_1));
	StringCopy(&(Global_140749.f_C), sParam0, 16);
	func_602();
	func_601(bParam1);
	func_600();
}

bool func_606(char* sParam0)
{
	if (!func_529())
	{
		return 0;
	}
	if (Global_140749 == 11)
	{
		return func_607(sParam0);
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_C));
}

bool func_607(char* sParam0)
{
	if (!func_529())
	{
		return 0;
	}
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	return unk_0x12AB0310C2281427(sParam0) == unk_0x12AB0310C2281427(&(Global_140749.f_10));
}

void func_608(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_599(sParam0, sParam1, bParam3, iParam2))
	{
		Global_140749 = 16;
		Global_140749.f_38 = iParam2;
	}
}

int func_609(char* sParam0)
{
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return 0;
	}
	if (!func_529())
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
	return func_606(sParam0);
}

void func_610()
{
}

void func_611()
{
	if (!func_503())
	{
		func_616();
	}
	else
	{
		if (unk_0xE4EDC4B0E92C078B(iLocal_115))
		{
			unk_0x142CC44DB769B57E(&iLocal_115);
		}
		if (unk_0xE4EDC4B0E92C078B(iLocal_114))
		{
			unk_0x142CC44DB769B57E(&iLocal_114);
		}
		if (iLocal_107 > 4294967295)
		{
			if (func_44(unk_0xF4FB3A22FC4991C8(iLocal_107), 1))
			{
				func_612();
			}
		}
	}
}

void func_612()
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	func_615(&vVar0);
	if (!unk_0xE4EDC4B0E92C078B(iLocal_116))
	{
		func_614(&fVar1, &fVar2, &iVar3);
		iLocal_116 = unk_0x45BC314CDB82325B(vVar0, fVar1, fVar2);
		unk_0x436F3596830D7DC3(iLocal_116, iVar3);
		func_613(&iLocal_116, 29);
		unk_0x7F010F50CE03A8AF(iLocal_116, 180);
		unk_0xF2D30B8ACAF12A39(iLocal_116, false);
	}
}

void func_613(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		iVar0 = func_81(iParam1);
		unk_0x61755AC17D8F538E(*iParam0, iVar0);
	}
}

void func_614(var uParam0, var uParam1, var uParam2)
{
	if (Local_143.f_1F == 0)
	{
		*uParam0 = 696f;
		*uParam1 = 101.5f;
		*uParam2 = 16;
	}
	else if (Local_143.f_1F == 1)
	{
		*uParam0 = 817f;
		*uParam1 = 101.5f;
		*uParam2 = 149;
	}
	else if (Local_143.f_1F == 2)
	{
		*uParam0 = 280f;
		*uParam1 = 50.5f;
		*uParam2 = 205;
	}
}

void func_615(var uParam0)
{
	switch (Local_143.f_1F)
	{
		case 0:
			*uParam0 = { 1392.895f, 3132.5f, 39.4141f };
			break;
		
		case 1:
			*uParam0 = { -1342.056f, -3041.475f, 10.9444f };
			break;
		
		case 2:
			*uParam0 = { 2039.747f, 4768.012f, 40.1674f };
			break;
	}
}

void func_616()
{
	if (!unk_0xE4EDC4B0E92C078B(iLocal_115))
	{
		iLocal_115 = unk_0x6CC513A908911CF0(func_552(func_34(unk_0xD803B885F5E47A62())));
		unk_0xBC8E0A7390523199(iLocal_115, 495);
		unk_0xF412DD40DE84CE72(iLocal_115, true);
		unk_0x0EC848EFF66DF45A(iLocal_115, 7000);
		unk_0xDC5B2F9D0CCE3A10(iLocal_115, "CELL_JOUST");
		unk_0x2A065371C9D96655(iLocal_115, 9);
		Global_26B66F.f_10B = 1;
		func_613(&iLocal_115, iLocal_120);
		if (!func_729(6))
		{
			unk_0x4A51D2E4732BD556();
			func_705(6);
		}
	}
	if (!unk_0xE4EDC4B0E92C078B(iLocal_114))
	{
		iLocal_114 = unk_0x3F3860E60C44719E(func_552(func_34(unk_0xD803B885F5E47A62())), (func_574(func_34(unk_0xD803B885F5E47A62())) / 2f));
		func_613(&iLocal_114, iLocal_120);
		unk_0x7F010F50CE03A8AF(iLocal_114, 100);
		unk_0x516E63E474722206(iLocal_114, 1.4f);
		unk_0xF2D30B8ACAF12A39(iLocal_114, false);
	}
}

int func_617()
{
	if (func_619() || func_618())
	{
		return 1;
	}
	return 0;
}

int func_618()
{
	return func_37(unk_0xD803B885F5E47A62());
}

bool func_619()
{
	return func_35(unk_0xD803B885F5E47A62());
}

void func_620(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_406(unk_0xD803B885F5E47A62());
		Global_198D8B = iVar0;
		Global_198D8B.f_1 = iParam0;
		if (func_177() != func_29())
		{
			Global_198D8B.f_2 = func_704(func_177());
			Global_198D8B.f_3 = func_703(func_177());
		}
		if (func_96() != func_29())
		{
			func_176(func_96(), &(Global_198D8B.f_2), &(Global_198D8B.f_3));
		}
		Global_198D8B.f_7 = unk_0xDD0E7998AE8AD485();
		Global_198D8B.f_1C = func_702(unk_0xD803B885F5E47A62());
		Global_198D8B.f_D = 0;
		Global_198D8B.f_E = 0;
		if (func_281(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198D8B.f_17 = func_701(func_103(1));
		}
	}
	else
	{
		iVar0 = func_67(unk_0xD803B885F5E47A62());
	}
	if (iParam2 || func_100(iVar0))
	{
		if (iParam3 != 4294967295 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_198C86 = iVar0;
		if (func_144(iVar0))
		{
			Global_198C86.f_1 = 4;
		}
		else if (func_700(iVar0))
		{
			Global_198C86.f_1 = 5;
		}
		else if (func_93(iVar0, 0))
		{
			Global_198C86.f_1 = 2;
			if (func_136(iVar0))
			{
				Global_198C86.f_1 = 3;
			}
		}
		else
		{
			Global_198C86.f_1 = 1;
		}
		if (func_177() != func_29())
		{
			Global_198C86.f_4 = func_704(func_177());
			Global_198C86.f_5 = func_703(func_177());
		}
		if (func_96() != func_29())
		{
			func_176(func_96(), &(Global_198C86.f_6), &(Global_198C86.f_7));
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
			Global_198C86.f_28 = func_171(iParam1);
			Global_198C86.f_29 = func_699();
			Global_198C86.f_2A = func_327(unk_0xD803B885F5E47A62(), iParam1);
			Global_198C86.f_2C = func_698(unk_0xD803B885F5E47A62(), iParam1);
		}
		if (!func_158() || iVar0 != 192)
		{
			Global_198C86.f_35 = 0;
		}
	}
	else if (func_134(iVar0))
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
			Global_198CFB = func_697(unk_0xD803B885F5E47A62());
		}
		switch (iVar0)
		{
			case 225:
				if (func_130(unk_0xD803B885F5E47A62()) == 0)
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
		if (func_177() != func_29())
		{
			Global_198CFB.f_4 = func_704(func_177());
			Global_198CFB.f_5 = func_703(func_177());
		}
		if (func_96() != func_29())
		{
			func_176(func_96(), &(Global_198CFB.f_4), &(Global_198CFB.f_5));
		}
		Global_198CFB.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 4294967295)
		{
			Global_198CFB.f_14 = iParam0;
		}
	}
	else if (func_108(iVar0))
	{
		if (iParam3 != 4294967295 && iParam2)
		{
		}
		Global_198CBC = iVar0;
		Global_198C86.f_1 = 1;
		if (func_177() != func_29())
		{
			Global_198CBC.f_4 = func_704(func_177());
			Global_198CBC.f_5 = func_703(func_177());
		}
		if (func_96() != func_29())
		{
			func_176(func_96(), &(Global_198CBC.f_6), &(Global_198CBC.f_7));
		}
		Global_198CBC.f_9 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 4294967295)
		{
			Global_198CBC.f_15 = iParam0;
		}
	}
	else if (func_133(iVar0))
	{
		Global_198D27 = iVar0;
		Global_198D27.f_1 = iParam0;
		Global_198D27.f_15 = 1;
		Global_198D27.f_16 = 1;
		if (func_177() != func_29())
		{
			Global_198D27.f_4 = func_704(func_177());
			Global_198D27.f_5 = func_703(func_177());
		}
		if (func_96() != func_29())
		{
			func_176(func_96(), &(Global_198D27.f_4), &(Global_198D27.f_5));
		}
		Global_198D27.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 4294967295)
		{
			Global_198D27.f_14 = iParam0;
		}
		Global_198D27.f_1B = func_695(func_49(), 5);
		Global_198D27.f_1C = func_701(func_694(unk_0xD803B885F5E47A62()));
		Global_198D27.f_1D = func_142(6107, 4294967295, 0);
		Global_198D27.f_1E = func_142(6103, 4294967295, 0);
		Global_198D27.f_1F = func_142(6104, 4294967295, 0);
		Global_198D27.f_20 = func_142(6106, 4294967295, 0);
		Global_198D27.f_21 = func_142(6105, 4294967295, 0);
		Global_198D27.f_22 = func_142(6108, 4294967295, 0);
		Global_198D27.f_7 = func_692();
		Global_198D27.f_33 = func_701(bParam4);
	}
	else if (func_132(iVar0))
	{
		Global_198D5D = iVar0;
		Global_198D5D.f_1 = iParam0;
		Global_198D5D.f_15 = 1;
		Global_198D5D.f_16 = 1;
		if (func_177() != func_29())
		{
			Global_198D5D.f_4 = func_704(func_177());
			Global_198D5D.f_5 = func_703(func_177());
		}
		if (func_96() != func_29())
		{
			func_176(func_96(), &(Global_198D5D.f_4), &(Global_198D5D.f_5));
		}
		Global_198D5D.f_8 = unk_0xDD0E7998AE8AD485();
		if (iParam0 != 4294967295)
		{
			Global_198D5D.f_14 = iParam0;
		}
		Global_198D5D.f_18 = func_142(6157, 4294967295, 0);
		Global_198D5D.f_19 = func_142(6162, 4294967295, 0);
		Global_198D5D.f_1A = func_142(6163, 4294967295, 0);
		Global_198D5D.f_1B = func_701((((func_691() || func_690()) || func_689()) || func_688(unk_0xD803B885F5E47A62())));
		Global_198D5D.f_1C = func_142(6164, 4294967295, 0);
		Global_198D5D.f_1D = func_701(func_687());
		Global_198D5D.f_1F = 0;
		Global_198D5D.f_1E = 0;
		Global_198D5D.f_20 = 0;
		Global_198D5D.f_21 = 0;
		Global_198D5D.f_22 = 0;
		Global_198D5D.f_10 = 0;
		Global_198D5D.f_7 = func_692();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_128(func_129(unk_0xD803B885F5E47A62()))))
	{
		Global_198DE5 = iVar0;
		Global_198DE5.f_1 = iParam0;
		Global_198DE5.f_15 = 1;
		Global_198DE5.f_16 = 1;
		Global_198DE5.f_7 = func_692();
		if (func_177() != func_29())
		{
			Global_198DE5.f_4 = func_704(func_177());
			Global_198DE5.f_5 = func_703(func_177());
		}
		if (func_96() != func_29())
		{
			func_176(func_96(), &(Global_198DE5.f_4), &(Global_198DE5.f_5));
		}
		if (func_177() != 4294967295)
		{
			Global_198DE5.f_11 = func_686(func_177());
		}
		Global_198DE5.f_8 = unk_0xDD0E7998AE8AD485();
		Global_198DE5.f_1C = func_702(unk_0xD803B885F5E47A62());
		Global_198DE5.f_10 = 0;
		Global_198DE5.f_18 = 0;
		Global_198DE5.f_17 = 0;
		if (func_281(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198DE5.f_21 = func_701(func_103(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_198DAF = iVar0;
		Global_198DAF.f_1 = iParam0;
		Global_198DAF.f_15 = 1;
		Global_198DAF.f_16 = 1;
		Global_198DAF.f_7 = func_692();
		Global_198DAF.f_18 = 0;
		Global_198DAF.f_17 = 0;
		Global_198DAF.f_10 = 0;
		if (func_177() != func_29())
		{
			Global_198DAF.f_4 = func_704(func_177());
			Global_198DAF.f_5 = func_703(func_177());
		}
		Global_198DAF.f_1C = func_702(unk_0xD803B885F5E47A62());
		if (Global_198DAF.f_1C)
		{
			Global_198DAF.f_1D = func_685(unk_0xD803B885F5E47A62());
		}
		else
		{
			Global_198DAF.f_1D = 0;
		}
		Global_198DAF.f_1E = func_669(unk_0xD803B885F5E47A62(), 4, 4294967295);
		Global_198DAF.f_1F = func_668(unk_0xD803B885F5E47A62());
		Global_198DAF.f_20 = func_701(func_667(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_21 = func_701(func_666(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_22 = func_701(func_665(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_23 = func_701(func_664(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_24 = func_663(unk_0xD803B885F5E47A62());
		Global_198DAF.f_25 = func_662(unk_0xD803B885F5E47A62());
		Global_198DAF.f_27 = func_661(unk_0xD803B885F5E47A62());
		if (func_281(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198DAF.f_29 = func_701(func_103(1));
		}
		if (func_96() != func_29())
		{
			func_176(func_96(), &(Global_198DAF.f_4), &(Global_198DAF.f_5));
		}
		Global_198DAF.f_8 = unk_0xDD0E7998AE8AD485();
		Global_198DAF.f_1C = func_702(unk_0xD803B885F5E47A62());
	}
	else if (func_126(iVar0))
	{
		Global_198E39 = iVar0;
		Global_198E39.f_1 = func_130(unk_0xD803B885F5E47A62());
		Global_198E39.f_2 = func_660();
		Global_198E39.f_3 = func_659();
		Global_198E39.f_4 = func_704(func_177());
		Global_198E39.f_5 = func_703(func_177());
		Global_198E39.f_7 = func_692();
		Global_198E39.f_8 = unk_0xDD0E7998AE8AD485();
		if (func_177() != 4294967295)
		{
			Global_198E39.f_11 = func_686(func_177());
		}
		Global_198E39.f_15 = 1;
		Global_198E39.f_16 = 1;
		Global_198E39.f_19 = iParam0;
		Global_198E39.f_1B = func_701(func_658(unk_0xD803B885F5E47A62()));
		Global_198E39.f_1C = func_656(21, 4294967295);
	}
	else if (func_125(iVar0))
	{
		Global_198E84 = Global_C0073.f_1;
		Global_198E84.f_2 = Global_C0073;
		Global_198E84.f_6 = func_704(func_177());
		Global_198E84.f_7 = func_703(func_177());
		if (func_281(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198E84.f_8 = func_701(func_103(1));
		}
		if (func_177() != 4294967295)
		{
			Global_198E84.f_9 = func_686(func_177());
		}
		Global_198E84.f_A = func_692();
		Global_198E84.f_13 = 1;
		Global_198E84.f_14 = 1;
		Global_198E84.f_15 = 0;
		Global_198E84.f_16 = 0;
		Global_198E84.f_17 = 0;
		Global_19FC3D = unk_0xDD0E7998AE8AD485();
	}
	else
	{
		if (func_177() != func_29())
		{
			Global_198C74 = func_704(func_177());
			Global_198C74.f_1 = func_703(func_177());
		}
		Global_198C74.f_5 = unk_0xDD0E7998AE8AD485();
		Global_198C74.f_D = func_655();
		Global_198C74.f_F = 0;
		if (func_175(1))
		{
			if (func_96() == func_177())
			{
				Global_198C74.f_F = 1;
			}
		}
		if (func_654())
		{
			Global_198CFB.f_1C = 1;
		}
		if (((((func_653() || func_652()) || func_651()) || func_650()) || func_649()) || func_648(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_1E = 1;
		}
		if (func_646(func_647(2413121211)))
		{
			Global_198CFB.f_20 = 1;
		}
		if (func_629(func_645(joaat("caddy"))))
		{
			Global_198CFB.f_1F = 1;
		}
		if (func_628(unk_0xD803B885F5E47A62()) || func_627(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_1D = 1;
		}
		if (func_626(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_21 = 1;
			Global_198CFB.f_22 = 1;
		}
		if (func_625(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_24 = 1;
		}
		if (func_624(0, unk_0xD803B885F5E47A62()) == 1)
		{
			Global_198CFB.f_23 = 1;
		}
		if (func_623(unk_0xD803B885F5E47A62(), 3, &uVar1))
		{
			Global_198CFB.f_25 = 1;
		}
		if (func_623(unk_0xD803B885F5E47A62(), 7, &uVar1))
		{
			Global_198CFB.f_26 = 1;
		}
		if (func_622(unk_0xD803B885F5E47A62()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_621(unk_0xD803B885F5E47A62(), iVar2);
				if (func_324(unk_0xD803B885F5E47A62(), iVar3, 0))
				{
					Global_198CFB.f_27 = 1;
				}
				if (func_324(unk_0xD803B885F5E47A62(), iVar3, 2))
				{
					Global_198CFB.f_28 = 1;
				}
				if (func_324(unk_0xD803B885F5E47A62(), iVar3, 1))
				{
					Global_198CFB.f_29 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_621(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_316(Global_184507[iParam0 /*876*/].f_112.f_B7[iParam1 /*12*/]))
	{
		uVar0 = Global_184507[iParam0 /*876*/].f_112.f_B7[iParam1 /*12*/];
	}
	return uVar0;
}

int func_622(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
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

int func_623(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_624(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_624(int iParam0, int iParam1)
{
	if (iParam1 == func_29())
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

bool func_625(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 7);
}

bool func_626(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 8);
}

bool func_627(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 11);
}

bool func_628(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 10);
}

int func_629(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_656(11, 4294967295) == 0)
	{
		return 0;
	}
	if (iParam0 != 4294967295)
	{
		iVar0 = 4294967295;
		iVar1 = (iParam0 + func_643(11));
		func_642(iVar1, &iVar0, 1);
		iVar2 = func_656(func_631(iVar1), 4294967295);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_142(func_630(4, iVar0), 4294967295, 0);
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

int func_630(int iParam0, int iParam1)
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

int func_631(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_643(iVar0) && iParam0 < func_632(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 4294967295;
}

int func_632(int iParam0)
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
		iVar0 = func_641(iParam0);
		return func_640(iVar0);
	}
	return (func_633(iParam0, 4294967295) * iParam0 + 1);
}

int func_633(int iParam0, int iParam1)
{
	if (iParam0 == 4294967295)
	{
		if (iParam1 >= 1)
		{
			if (func_636(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_635(iParam1))
			{
				return 0;
			}
			else if (func_634(iParam1, 4294967295))
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

int func_634(int iParam0, int iParam1)
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

int func_635(int iParam0)
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

int func_636(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_637(unk_0xD803B885F5E47A62(), 0);
	}
	if (bParam1)
	{
		if (func_637(unk_0xD803B885F5E47A62(), 0))
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

bool func_637(int iParam0, bool bParam1)
{
	if (Global_184465 != func_29())
	{
		if (!func_639(Global_184465))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0xD803B885F5E47A62() != Global_184465)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_25033E[Global_184465 /*421*/].f_C3, 24) || func_638(Global_184465))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 24);
}

int func_638(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_C3, 9);
	}
	return 0;
}

int func_639(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 2);
	}
	return 0;
}

int func_640(int iParam0)
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

int func_641(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return 4294967295;
}

void func_642(int iParam0, int iParam1, bool bParam2)
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

int func_643(int iParam0)
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
		iVar0 = func_641(iParam0);
		return func_644(iVar0);
	}
	return (func_633(iParam0, 4294967295) * iParam0);
}

int func_644(int iParam0)
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

int func_645(int iParam0)
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

int func_646(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != 4294967295)
	{
		iVar0 = 4294967295;
		iVar1 = iParam0 + 157;
		func_642(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_142(func_630(4, iVar0), 4294967295, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_647(int iParam0)
{
	switch (iParam0)
	{
		case 2413121211:
			return 0;
			break;
	}
	return 4294967295;
}

int func_648(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (Global_184507[iParam0 /*876*/].f_112.f_153 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_649()
{
	return func_142(6542, 4294967295, 0) != 0;
}

bool func_650()
{
	return func_142(6163, 4294967295, 0) != 0;
}

bool func_651()
{
	return func_142(5380, 4294967295, 0) != 0;
}

bool func_652()
{
	return func_142(3828, 4294967295, 0) != 0;
}

bool func_653()
{
	return func_142(3223, 4294967295, 0) != 0;
}

bool func_654()
{
	return func_142(5379, 4294967295, 0) != 0;
}

int func_655()
{
	int iVar0;
	
	iVar0 = func_177();
	if (iVar0 != func_29())
	{
		return Global_18D84D[iVar0 /*615*/].f_B.f_62;
	}
	return 0;
}

int func_656(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == 4294967295)
	{
		iVar0 = func_49();
	}
	if (iParam0 == 7 && !Global_40001.f_4258)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_641(iParam0);
		if (iVar1 == 0 && func_142(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_657(4294967295) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_702(unk_0xD803B885F5E47A62()) && iVar1 == 1)
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

bool func_657(int iParam0)
{
	if (!Global_40001.f_5C6F)
	{
		return 0;
	}
	return func_142(7207, iParam0, 0) != 0;
}

int func_658(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_171 != 0;
	}
	return 0;
}

int func_659()
{
	if (Global_198C74.f_3 != 0)
	{
		return Global_198C74.f_3;
	}
	return 4294967295;
}

int func_660()
{
	if (Global_198C74.f_2 != 0)
	{
		return Global_198C74.f_2;
	}
	return 4294967295;
}

int func_661(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 12);
	}
	return 0;
}

int func_662(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 10);
	}
	return 0;
}

int func_663(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_14E, 11);
	}
	return 0;
}

bool func_664(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 4);
}

bool func_665(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 3);
}

bool func_666(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 2);
}

bool func_667(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 1);
}

bool func_668(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 31);
}

int func_669(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_29() || !func_684(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_679(iParam0, iParam2);
		
		case 1:
			return func_677(iParam0, iParam2);
		
		case 3:
			return func_676(iParam0);
		
		case 2:
			return func_671(iParam0, iParam2);
		
		case 4:
			return func_670(iParam0);
		
		default:
	}
	return 0;
}

bool func_670(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 6);
}

int func_671(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_675(iParam0);
		
		case 11:
			return func_674(iParam0);
		
		case 12:
			return func_673(iParam0);
		
		case 13:
			return func_672(iParam0);
		
		default:
	}
	return 0;
}

bool func_672(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 15);
}

bool func_673(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 14);
}

bool func_674(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 13);
}

bool func_675(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 12);
}

bool func_676(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 5);
}

int func_677(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_678(iParam0);
		
		case 6:
			return func_667(iParam0);
		
		case 7:
			return func_666(iParam0);
		
		case 8:
			return func_665(iParam0);
		
		case 9:
			return func_664(iParam0);
		
		default:
	}
	return 0;
}

bool func_678(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 0);
}

int func_679(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_683(iParam0);
		
		case 1:
			return func_682(iParam0);
		
		case 2:
			return func_681(iParam0);
		
		case 3:
			return func_680(iParam0);
		
		case 4:
			return func_668(iParam0);
		
		default:
	}
	return 0;
}

bool func_680(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 10);
}

bool func_681(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 9);
}

bool func_682(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 8);
}

bool func_683(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_119.f_4, 7);
}

bool func_684(int iParam0)
{
	return (iParam0 != 4294967295 && iParam0 != 6);
}

int func_685(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_669(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_669(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_669(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_669(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

var func_686(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_D3.f_6;
}

bool func_687()
{
	return func_142(6156, 4294967295, 0) != 0;
}

int func_688(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_10F != 0;
	}
	return 0;
}

bool func_689()
{
	return func_142(6164, 4294967295, 0) == 3;
}

bool func_690()
{
	return func_142(6164, 4294967295, 0) == 2;
}

bool func_691()
{
	return func_142(6164, 4294967295, 0) == 1;
}

int func_692()
{
	int iVar0;
	
	if (func_145())
	{
		return 4;
	}
	else if (func_158())
	{
		if (func_351(unk_0xD803B885F5E47A62()))
		{
			return 8;
		}
		return 6;
	}
	if (func_103(1))
	{
		iVar0 = func_693(unk_0xD803B885F5E47A62());
		if (iVar0 == 4294967295)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_175(1))
	{
		if (func_351(func_177()))
		{
			return 9;
		}
		return 7;
	}
	return 4294967294;
}

int func_693(int iParam0)
{
	if (func_281(iParam0, 1))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1C3;
	}
	return 4294967295;
}

int func_694(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_108 != 0;
	}
	return 0;
}

int func_695(int iParam0, int iParam1)
{
	return func_142(func_696(iParam1), iParam0, 0);
}

int func_696(int iParam0)
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

int func_697(int iParam0)
{
	if (func_67(iParam0) == 225 || func_67(iParam0) == 226)
	{
		return func_130(iParam0);
	}
	return 4294967295;
}

int func_698(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_316(iParam1))
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

var func_699()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_326(unk_0xD803B885F5E47A62(), iVar0))
		{
			unk_0x5D96D8530B3D0904(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_700(int iParam0)
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

int func_701(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_702(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_142 != 0;
	}
	return 0;
}

int func_703(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 4294967295;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_8[1];
}

int func_704(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 4294967295;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_8[0];
}

void func_705(int iParam0)
{
	unk_0x5D96D8530B3D0904(&iLocal_98, iParam0);
}

char* func_706()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_264(unk_0xD803B885F5E47A62());
	if (iVar0 != func_29())
	{
		if (iVar0 != unk_0xD803B885F5E47A62())
		{
			if (((func_62(iVar0, 28) || func_62(unk_0xD803B885F5E47A62(), 28)) || func_560(iVar0)) && !func_559(iVar0))
			{
				return func_561(iVar0, 0);
			}
			if (!unk_0xDC30EF462887322E() && !unk_0x05449BDA851F5199(0, 4294967295, 1))
			{
				return func_561(iVar0, 0);
			}
		}
		sVar1 = func_563(&(Global_18D84D[iVar0 /*615*/].f_B.f_68));
		if (unk_0xEA6BC48857E0AC4C(sVar1))
		{
			return func_561(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_707(int iParam0)
{
	int iVar0;
	
	iVar0 = func_263(iParam0);
	if (iVar0 != 4294967295)
	{
		return func_261(iVar0);
	}
	return 1;
}

void func_708(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 != iParam0)
	{
		func_728(4294967295);
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 = iParam0;
		if (func_30() != 4294967295)
		{
			func_727(4294967295);
		}
		if (func_726() != 4294967295)
		{
			func_725(4294967295);
		}
		func_724(iParam2);
		func_722(iParam0);
		if (!func_721(iParam0))
		{
			fVar0 = func_720(iParam0);
			if (fVar0 != 1f)
			{
				func_719(fVar0);
				unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 1);
			}
		}
		if (!func_718(iParam0) || iParam3)
		{
			if (func_717(iParam0, iParam2) && iParam3 == 1)
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
		if (func_85())
		{
			func_123(27);
		}
		if (bParam1)
		{
			if (!func_769())
			{
				func_715(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 1) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 4)) || unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_11CB, 0))
			{
				func_238(6);
			}
			func_714();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0x15EA7F4313456B1D(3, false);
			unk_0x15EA7F4313456B1D(5, false);
		}
		if (func_121(unk_0xD803B885F5E47A62()) && func_118(unk_0xD803B885F5E47A62()))
		{
			unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_1), 8);
		}
		func_710();
		if (func_709(iParam0))
		{
			unk_0x15EA7F4313456B1D(3, false);
			unk_0x15EA7F4313456B1D(5, false);
			unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 6);
		}
		Global_26B66F.f_19B3 = 0;
	}
}

int func_709(int iParam0)
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

void func_710()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_713();
	iVar2 = func_264(unk_0xD803B885F5E47A62());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (func_279(iVar1, iVar2, 1) || func_711(iVar1, unk_0xD803B885F5E47A62()))
			{
				unk_0xD463D0CE3DC66332(unk_0xD803B885F5E47A62(), iVar1, bVar3);
				unk_0xD463D0CE3DC66332(iVar1, unk_0xD803B885F5E47A62(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_711(int iParam0, int iParam1)
{
	if (func_281(iParam0, 1) && func_281(iParam1, 1))
	{
		return (func_712(iParam0) == func_264(iParam1) || func_712(iParam1) == func_264(iParam0));
	}
	return 0;
}

int func_712(int iParam0)
{
	if (func_281(iParam0, 1))
	{
		return Global_18D84D[func_264(iParam0) /*615*/].f_B.f_1E4;
	}
	return func_29();
}

int func_713()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_177();
	if (iVar0 != func_29())
	{
		if (func_993(iVar0, 0, 1))
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

void func_714()
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

void func_715(int iParam0)
{
	if (func_716() && iParam0)
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

int func_716()
{
	if ((((Global_EC6CD != 4294967295 && Global_EC6CD != 33) && Global_EC6CD != 35) && Global_EC6CD != 37) && Global_EC6CD != 21)
	{
		return 1;
	}
	return 0;
}

int func_717(int iParam0, int iParam1)
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

int func_718(int iParam0)
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

void func_719(float fParam0)
{
	float fVar0;
	
	if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) == func_78())
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

float func_720(int iParam0)
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

int func_721(int iParam0)
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

void func_722(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_142(3791, 4294967295, 0);
	iVar1 = func_723(iParam0);
	if (iVar1 != 4294967295)
	{
		unk_0x5D96D8530B3D0904(&iVar0, iVar1);
		func_140(3791, iVar0, 4294967295, 1, 0);
	}
}

int func_723(int iParam0)
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

void func_724(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD803B885F5E47A62();
	if (Global_18D84D[iVar0 /*615*/].f_B.f_B5 != iParam0)
	{
		Global_18D84D[iVar0 /*615*/].f_B.f_B5 = iParam0;
	}
}

void func_725(int iParam0)
{
	if (Global_26B66F.f_1404.f_154 != iParam0)
	{
		Global_26B66F.f_1404.f_154 = iParam0;
	}
}

int func_726()
{
	return Global_26B66F.f_1404.f_154;
}

void func_727(int iParam0)
{
	if (Global_26B66F.f_1404.f_153 != iParam0)
	{
		Global_26B66F.f_1404.f_153 = iParam0;
	}
}

void func_728(int iParam0)
{
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_20 = iParam0;
}

bool func_729(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(iLocal_98, iParam0);
}

int func_730(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_766(unk_0xD803B885F5E47A62(), 29))
	{
		return 0;
	}
	if (func_765(unk_0xD803B885F5E47A62(), 21))
	{
		return 0;
	}
	if (func_765(unk_0xD803B885F5E47A62(), 25))
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
	if (!func_433(unk_0xD803B885F5E47A62()))
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
	if (func_764(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_763())
	{
		return 0;
	}
	if (func_492())
	{
		return 0;
	}
	if (func_762())
	{
		return 0;
	}
	if (func_486())
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	if (func_484(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_488())
	{
		return 0;
	}
	if (func_765(unk_0xD803B885F5E47A62(), 0) || func_765(unk_0xD803B885F5E47A62(), 3))
	{
		return 0;
	}
	if ((func_765(unk_0xD803B885F5E47A62(), 12) || func_765(unk_0xD803B885F5E47A62(), 14)) || func_765(unk_0xD803B885F5E47A62(), 13))
	{
		return 0;
	}
	if (func_755(unk_0xD803B885F5E47A62(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_740())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_739())
		{
			return 0;
		}
	}
	if (Global_195C36)
	{
		return 0;
	}
	if (func_738(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_737())
	{
		return 0;
	}
	if (func_736(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if ((func_735(unk_0xD803B885F5E47A62()) && func_734(unk_0xD803B885F5E47A62()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_733())
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1A, 4))
	{
		return 0;
	}
	if (func_732(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (func_64(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (!func_61(unk_0xD803B885F5E47A62()))
	{
		if (func_731(unk_0xD803B885F5E47A62()))
		{
			return 0;
		}
	}
	return 1;
}

int func_731(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_19FCF7[iVar0 /*13*/].f_C != 0;
	}
	return 0;
}

int func_732(int iParam0)
{
	if (Global_25033E[iParam0 /*421*/].f_105.f_4 != 0 || Global_25033E[iParam0 /*421*/].f_105.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_733()
{
	return Global_199459.f_10CF != 4294967295;
}

int func_734(int iParam0)
{
	if (iParam0 != func_29() && func_993(iParam0, 1, 1))
	{
		return Global_25033E[iParam0 /*421*/].f_136.f_E;
	}
	return 4294967295;
}

int func_735(int iParam0)
{
	if (iParam0 != func_29() && func_993(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 3);
	}
	return 0;
}

int func_736(int iParam0)
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

int func_737()
{
	if (Global_40EB30.f_3AF > 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_738(int iParam0)
{
	if (!func_993(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_184507[iParam0 /*876*/].f_23;
}

bool func_739()
{
	return Global_181EC.f_15A > 0;
}

int func_740()
{
	int iVar0;
	
	iVar0 = func_67(unk_0xD803B885F5E47A62());
	if (((func_635(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_1C) || func_754(unk_0xD803B885F5E47A62())) || func_753(unk_0xD803B885F5E47A62())) || func_752(unk_0xD803B885F5E47A62()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_751(unk_0xD803B885F5E47A62()))
	{
		if (func_144(iVar0) || func_700(iVar0))
		{
			return 1;
		}
	}
	if (func_114(unk_0xD803B885F5E47A62()))
	{
		if (func_700(iVar0))
		{
			return 1;
		}
	}
	if (func_750(unk_0xD803B885F5E47A62()))
	{
		if (func_134(iVar0))
		{
			return 1;
		}
	}
	if (func_749(unk_0xD803B885F5E47A62()))
	{
		if (func_133(iVar0))
		{
			return 1;
		}
	}
	if (func_748(unk_0xD803B885F5E47A62()))
	{
		if (func_132(iVar0))
		{
			return 1;
		}
	}
	if (func_747(unk_0xD803B885F5E47A62()))
	{
		if (func_746(iVar0))
		{
			return 1;
		}
	}
	if (func_745(unk_0xD803B885F5E47A62(), 0))
	{
		if (func_744(iVar0))
		{
			if (func_742(unk_0xD803B885F5E47A62()))
			{
				return 1;
			}
		}
	}
	if (func_741(unk_0xD803B885F5E47A62()))
	{
		if (func_125(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_741(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_742(int iParam0)
{
	if (func_743(iParam0) != func_29())
	{
		return func_743(iParam0) == func_264(iParam0);
	}
	return 0;
}

int func_743(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_23;
}

int func_744(int iParam0)
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

int func_745(int iParam0, bool bParam1)
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
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295 && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_29())
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_746(int iParam0)
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

int func_747(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_748(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_749(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_750(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_751(int iParam0)
{
	if (func_634(Global_184507[iParam0 /*876*/].f_112.f_1C, 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_752(int iParam0)
{
	if (func_636(Global_184507[iParam0 /*876*/].f_112.f_1C, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_753(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_754(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_755(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_754(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_114(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_753(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_750(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_749(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_748(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_761(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_747(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_760(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_745(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_759(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_741(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_758(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_757(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_756(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_756(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_757(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_758(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_759(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_760(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295)
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_761(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_993(iParam0, 1, 1))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 4294967295 && Global_25033E[iParam0 /*421*/].f_136.f_8 != func_29())
			{
				return func_115(Global_25033E[iParam0 /*421*/].f_136.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_762()
{
	return Global_14086D;
}

bool func_763()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 0);
}

int func_764(int iParam0)
{
	if (func_483(iParam0, 1, 0))
	{
		if (Global_184507[iParam0 /*876*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_765(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_D0, iParam1);
}

bool func_766(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_5, iParam1);
}

int func_767(int iParam0)
{
	if (!func_158() && !func_281(unk_0xD803B885F5E47A62(), 1))
	{
		if (!func_118(unk_0xD803B885F5E47A62()))
		{
			if (func_769())
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

int func_768()
{
	return 0;
}

int func_769()
{
	if ((func_62(unk_0xD803B885F5E47A62(), 21) || func_62(unk_0xD803B885F5E47A62(), 22)) || func_773())
	{
		return 1;
	}
	if (func_770())
	{
		func_123(22);
		return 1;
	}
	return 0;
}

int func_770()
{
	if (func_68(unk_0xD803B885F5E47A62(), 0))
	{
		if (((func_85() && !func_772()) || func_765(unk_0xD803B885F5E47A62(), 21)) || func_765(unk_0xD803B885F5E47A62(), 25))
		{
			return 1;
		}
		else
		{
			func_771(27);
		}
	}
	return 0;
}

void func_771(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_4), iParam0);
}

bool func_772()
{
	return Global_1406A2.f_1;
}

bool func_773()
{
	return func_308(358, 4294967295);
}

void func_774(int iParam0, int iParam1)
{
	Local_144[iParam0 /*6*/] = iParam1;
}

bool func_775()
{
	if (!func_44(unk_0xFB04705FDFDCE640(), 3))
	{
		if (func_17(1))
		{
			func_777("JCMcBpPl9UWmcdOYFza0Tg");
			func_777("jDF4fBBUqG9ZuI9TR7mw");
			func_88(3);
			func_776();
		}
	}
	return func_44(unk_0xFB04705FDFDCE640(), 3);
}

void func_776()
{
	Global_19824D = 1;
	if (!unk_0xEAE0D21A50E6C7F4(Global_26D9AC, 0))
	{
		unk_0x5D96D8530B3D0904(&Global_26D9AC, 0);
		unk_0x5D96D8530B3D0904(&Global_19824E, 0);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_26D9AC, 1))
	{
		unk_0x5D96D8530B3D0904(&Global_26D9AC, 1);
		unk_0x5D96D8530B3D0904(&Global_19824E, 1);
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_26D9AC, 5))
	{
		unk_0x5D96D8530B3D0904(&Global_26D9AC, 5);
		unk_0x5D96D8530B3D0904(&Global_19824E, 5);
	}
	if (unk_0x76395FF5E8D5E643(3939230146))
	{
		unk_0x1BA7FCEAFCE8D46E(3939230146, 0, false, false);
	}
	if (unk_0x76395FF5E8D5E643(3713987790))
	{
		unk_0x1BA7FCEAFCE8D46E(3713987790, 0, false, false);
	}
	if (unk_0x76395FF5E8D5E643(2868514821))
	{
		unk_0x1BA7FCEAFCE8D46E(2868514821, 0, false, false);
	}
	if (unk_0x76395FF5E8D5E643(745417724))
	{
		unk_0x1BA7FCEAFCE8D46E(745417724, 0, false, false);
	}
	if (unk_0x76395FF5E8D5E643(2989662390))
	{
		unk_0x1BA7FCEAFCE8D46E(2989662390, 0, false, false);
	}
	if (unk_0x76395FF5E8D5E643(2751792219))
	{
		unk_0x1BA7FCEAFCE8D46E(2751792219, 0, false, false);
	}
	if (unk_0x76395FF5E8D5E643(3483196299))
	{
		unk_0x1BA7FCEAFCE8D46E(3483196299, 0, false, false);
	}
}

void func_777(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEA6BC48857E0AC4C(sParam0))
	{
		return;
	}
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar1 /*26*/].f_C, 11))
		{
			if (func_778(&(Global_2401A9[iVar1 /*26*/].f_F)) == iVar0)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_2401A9[iVar1 /*26*/].f_D, 26))
				{
					unk_0x5D96D8530B3D0904(&(Global_2401A9[iVar1 /*26*/].f_D), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_778(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_C = 4294967295;
	iVar1 = 0;
	iVar2 = func_780(uParam0);
	if (iVar2 == 4294967295)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_779(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_779(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = 4294967295;
	Var0.f_5 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_C = 4294967295;
	iVar1 = func_780(uParam0);
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

int func_780(var uParam0)
{
	int iVar0;
	
	if (unk_0xEA6BC48857E0AC4C(&(uParam0->f_3)))
	{
		return 4294967295;
	}
	if (func_782(uParam0->f_1))
	{
		if (func_781(uParam0))
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

int func_781(var uParam0)
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

bool func_782(int iParam0)
{
	return iParam0 == 9999;
}

int func_783()
{
	return Local_143;
}

int func_784(int iParam0)
{
	return Local_144[iParam0 /*6*/];
}

void func_785()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		switch (iVar1)
		{
			case 174:
				unk_0x218F818E64020C17(1, iVar0, &uVar2, 2);
				break;
			
			case 185:
				func_786(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_786(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 13))
	{
		if (unk_0xC844350D5D58C99A(Var0))
		{
			if (unk_0xEC560E589DF8370E(Var0))
			{
				iVar1 = unk_0x940C1429253D3B1B(Var0);
				if (unk_0x34BFC6F0CB887BC2(iVar1))
				{
					iVar2 = unk_0x83FACCC48B68F9D1(iVar1);
					if (unk_0xFB75B0F82CA525F6(iVar2))
					{
						if (Var0.f_5)
						{
							if (unk_0xC844350D5D58C99A(Var0.f_1))
							{
								if (unk_0xEC560E589DF8370E(Var0.f_1))
								{
									iVar1 = unk_0x940C1429253D3B1B(Var0.f_1);
									if (unk_0x34BFC6F0CB887BC2(iVar1))
									{
										iVar3 = unk_0x83FACCC48B68F9D1(iVar1);
										if (iVar3 == unk_0xD803B885F5E47A62())
										{
											if (func_517())
											{
												if (func_519())
												{
													if (!func_357(iVar3, iVar2) && func_789(iVar3))
													{
														if (func_787(Var0))
														{
															if (func_45(iVar2))
															{
																Local_144[unk_0x57270EE11514DC67() /*6*/].f_3 = (Local_144[unk_0x57270EE11514DC67() /*6*/].f_3 + (Global_40001.f_4778 * Global_40001.f_4779));
															}
															else
															{
																Local_144[unk_0x57270EE11514DC67() /*6*/].f_3 = (Local_144[unk_0x57270EE11514DC67() /*6*/].f_3 + (Global_40001.f_4777 * Global_40001.f_4779));
															}
														}
														else if (func_45(iVar2))
														{
															Local_144[unk_0x57270EE11514DC67() /*6*/].f_3 = (Local_144[unk_0x57270EE11514DC67() /*6*/].f_3 + Global_40001.f_4778);
														}
														else
														{
															Local_144[unk_0x57270EE11514DC67() /*6*/].f_3 = (Local_144[unk_0x57270EE11514DC67() /*6*/].f_3 + Global_40001.f_4777);
														}
													}
													else if (iVar3 == iVar2 || !func_357(iVar3, iVar2))
													{
														if (func_787(Var0))
														{
															Local_144[unk_0x57270EE11514DC67() /*6*/].f_4++;
														}
													}
												}
												else
												{
													func_555(11);
												}
											}
											else
											{
												func_555(9);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_787(struct<12> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC844350D5D58C99A(unk_0x940C1429253D3B1B(Param0.f_1)) && !unk_0x437347B10A200C4B(unk_0x940C1429253D3B1B(Param0.f_1), 0))
	{
		if (func_788(unk_0x940C1429253D3B1B(Param0.f_1)))
		{
			iVar0 = unk_0xEAAE5E58EF8421BD(Param0.f_6);
			iVar1 = Param0.f_6;
			iVar2 = unk_0x654E7ACE881E41FE(iVar1);
			if (((Param0.f_B || iVar1 == joaat("weapon_unarmed")) || iVar2 == 3566412244) || iVar0 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_788(int iParam0)
{
	int iVar0;
	
	if (unk_0x7A649D473D0B6339(iParam0))
	{
		return 1;
	}
	if (unk_0x405E212DDE472467(iParam0, 1))
	{
		iVar0 = unk_0x6937EA2286828455(iParam0, 1);
		if ((((unk_0x134B62B726CEC8E6(iVar0) == joaat("chimera") || unk_0x134B62B726CEC8E6(iVar0) == joaat("blazer")) || unk_0x134B62B726CEC8E6(iVar0) == joaat("blazer2")) || unk_0x134B62B726CEC8E6(iVar0) == joaat("blazer3")) || unk_0x134B62B726CEC8E6(iVar0) == joaat("blazer4"))
		{
			return 1;
		}
	}
	return 0;
}

int func_789(int iParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x6E524813889AECF8(iParam0);
	if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iParam0), 0))
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iParam0), 0);
		iVar1 = func_790(iVar0);
		if (func_357(iVar1, iParam0) || iVar1 == iParam0)
		{
			unk_0x6E524813889AECF8(iParam0);
			unk_0x6E524813889AECF8(iVar1);
			return 1;
		}
	}
	return 0;
}

int func_790(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		if (!unk_0xBBA8A868118C90ED(iParam0, 4294967295, 0))
		{
			iVar0 = unk_0xA30B8362589C124A(iParam0, 4294967295, 0);
			if (!unk_0xEB6A8945D1AC98A1(iVar0))
			{
				iVar1 = unk_0x83FACCC48B68F9D1(iVar0);
				if (!iVar1 == func_29())
				{
					if (func_993(iVar1, 0, 1))
					{
						return iVar1;
					}
				}
			}
		}
	}
	return iVar1;
}

void func_791()
{
	int iVar0;
	
	if (func_17(1))
	{
		if (!func_729(9))
		{
			iVar0 = (1 - func_34(unk_0xD803B885F5E47A62()));
			if (Local_143.f_10[1] != Local_143.f_10[0])
			{
				if (Local_143.f_10[iVar0] != func_29())
				{
					StringCopy(&Local_131, func_558(Local_143.f_10[iVar0]), 64);
					iLocal_121 = func_707(Local_143.f_10[iVar0]);
					func_705(9);
				}
			}
		}
	}
}

void func_792()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA0CCD09012AED177(unk_0x16F2683693E537C9()))
	{
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (iVar1 != unk_0xD803B885F5E47A62())
		{
			if (unk_0x40B8C182D63932FC(iVar1))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_106, iVar0))
				{
					unk_0xF8FCA0CD5B6B1935(iVar1, 0);
					unk_0x5D96D8530B3D0904(&iLocal_106, iVar0);
				}
				else if (!unk_0xFB75B0F82CA525F6(iVar1))
				{
					if (!unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1)))
					{
						if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_105, iVar0))
							{
								if (((!func_794(unk_0x16F2683693E537C9(), unk_0x9539D44F3E4492F6(iVar1)) && !func_793(unk_0x9539D44F3E4492F6(iVar1))) && !func_357(unk_0xD803B885F5E47A62(), iVar1)) && (func_576() || func_573()))
								{
									unk_0xF8FCA0CD5B6B1935(iVar1, 1);
									unk_0x5D96D8530B3D0904(&iLocal_105, iVar0);
								}
							}
							else if (func_794(unk_0x16F2683693E537C9(), unk_0x9539D44F3E4492F6(iVar1)))
							{
								unk_0xF8FCA0CD5B6B1935(iVar1, 0);
								unk_0x0674E58A79778E99(&iLocal_105, iVar0);
							}
							else if (func_793(unk_0x9539D44F3E4492F6(iVar1)))
							{
								unk_0xF8FCA0CD5B6B1935(iVar1, 0);
								unk_0x0674E58A79778E99(&iLocal_105, iVar0);
							}
							else if (func_357(unk_0xD803B885F5E47A62(), iVar1))
							{
								unk_0xF8FCA0CD5B6B1935(iVar1, 0);
								unk_0x0674E58A79778E99(&iLocal_105, iVar0);
							}
							else if (!func_576() && !func_573())
							{
								unk_0xF8FCA0CD5B6B1935(iVar1, 0);
								unk_0x0674E58A79778E99(&iLocal_105, iVar0);
							}
						}
					}
				}
				else if (func_27() < 2)
				{
				}
				else if (func_44(unk_0xFB04705FDFDCE640(), 1))
				{
					if (Local_144[iLocal_107 /*6*/].f_5 >= 2)
					{
						if (!func_44(unk_0x7B9C1F53FE442D06(iVar1), 1))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_105, iVar0))
							{
								if (!(unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1))))
								{
									if (!func_794(unk_0x16F2683693E537C9(), unk_0x9539D44F3E4492F6(iVar1)) && !func_793(unk_0x9539D44F3E4492F6(iVar1)))
									{
										unk_0xF8FCA0CD5B6B1935(iVar1, 1);
										unk_0x5D96D8530B3D0904(&iLocal_105, iVar0);
									}
								}
							}
							else if (!(unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0xEB6A8945D1AC98A1(unk_0x9539D44F3E4492F6(iVar1))))
							{
								if (func_794(unk_0x16F2683693E537C9(), unk_0x9539D44F3E4492F6(iVar1)) || func_793(unk_0x9539D44F3E4492F6(iVar1)))
								{
									unk_0xF8FCA0CD5B6B1935(iVar1, 0);
									unk_0x0674E58A79778E99(&iLocal_105, iVar0);
								}
							}
						}
						else if (unk_0xEAE0D21A50E6C7F4(iLocal_105, iVar0))
						{
							if (func_44(unk_0x7B9C1F53FE442D06(iVar1), 1))
							{
								unk_0xF8FCA0CD5B6B1935(iVar1, 0);
								unk_0x0674E58A79778E99(&iLocal_105, iVar0);
							}
						}
					}
				}
				else
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_105, iVar0))
					{
						if (func_44(unk_0x7B9C1F53FE442D06(iVar1), 1))
						{
							unk_0xF8FCA0CD5B6B1935(iVar1, 1);
							unk_0x5D96D8530B3D0904(&iLocal_105, iVar0);
						}
					}
					if (!func_44(unk_0x7B9C1F53FE442D06(iVar1), 1))
					{
						if (unk_0xEAE0D21A50E6C7F4(iLocal_105, iVar0))
						{
							unk_0xF8FCA0CD5B6B1935(iVar1, 0);
							unk_0x0674E58A79778E99(&iLocal_105, iVar0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_793(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x0E0E6175453415CB(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x117658E336116132(iVar0);
		if (unk_0x40B8C182D63932FC(iVar1))
		{
			if (unk_0xFB75B0F82CA525F6(iVar1))
			{
				iVar2 = unk_0x9539D44F3E4492F6(iVar1);
				if (iVar2 != iParam0)
				{
					if (func_794(iParam0, iVar2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_794(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!unk_0x405E212DDE472467(iParam0, 0) || !unk_0x405E212DDE472467(iParam1, 0))
	{
		return 0;
	}
	return unk_0x6937EA2286828455(iParam0, 0) == unk_0x6937EA2286828455(iParam1, 0);
}

void func_795()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x117658E336116132(iLocal_109);
	iVar2 = func_34(unk_0xD803B885F5E47A62());
	if (unk_0x40B8C182D63932FC(iVar1))
	{
		if (unk_0xFB75B0F82CA525F6(iVar1))
		{
			iVar0 = unk_0x7B9C1F53FE442D06(iVar1);
			if (iLocal_107 > 4294967295)
			{
				if (func_44(unk_0xF4FB3A22FC4991C8(iLocal_107), 1))
				{
					if (func_729(9))
					{
						if (iVar0 != unk_0xFB04705FDFDCE640())
						{
							iVar3 = func_34(iVar1);
							if (iVar3 != iVar2)
							{
								if (func_17(11))
								{
									if (func_44(iVar0, 1))
									{
										if (!unk_0xEAE0D21A50E6C7F4(iLocal_108, iLocal_109))
										{
											func_82(iVar1, 432, 1, 0);
											func_75(iVar1, func_81(iLocal_121), 1, 0);
											unk_0x5D96D8530B3D0904(&iLocal_108, iLocal_109);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (unk_0xEAE0D21A50E6C7F4(iLocal_108, iLocal_109))
		{
			func_82(iVar1, 432, 0, 0);
			func_75(iVar1, func_81(iLocal_121), 0, 0);
			unk_0x0674E58A79778E99(&iLocal_108, iLocal_109);
		}
	}
	iLocal_109++;
	if (iLocal_109 >= 32)
	{
		iLocal_109 = 0;
	}
}

void func_796()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	int iVar5;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		vLocal_90[iVar1 /*3*/] = func_29();
		vLocal_90[iVar1 /*3*/].f_1 = 4294967295;
		vLocal_90[iVar1 /*3*/].f_2 = uVar3;
		unk_0x0674E58A79778E99(&iLocal_101, iVar1);
		unk_0x0674E58A79778E99(&iLocal_103, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		Local_89[iVar0 /*20*/] = func_797();
		Local_89[iVar0 /*20*/].f_1 = 4294967295;
		unk_0x0674E58A79778E99(&iLocal_102, iVar0);
		Local_89[iVar0 /*20*/].f_2 = { Var4 };
		Local_89[iVar0 /*20*/].f_12 = 0;
		Local_89[iVar0 /*20*/].f_13 = 0;
		iVar0++;
	}
	iVar5 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x54EABC0DD106045B())
	{
		if (unk_0x81A93C8315C28F58(iVar0))
		{
			Local_89[iVar0 /*20*/] = iVar0;
			unk_0x5D96D8530B3D0904(&iLocal_102, iVar0);
			iVar2 = unk_0x4B2BFE4A3BC248ED(Local_89[iVar0 /*20*/]);
			iVar1 = iVar2;
			if (func_993(iVar2, 0, 1))
			{
				iVar5++;
				vLocal_90[iVar1 /*3*/] = iVar2;
				Local_89[iVar0 /*20*/].f_1 = iVar1;
				vLocal_90[iVar1 /*3*/].f_1 = iVar0;
				vLocal_90[iVar1 /*3*/].f_2 = unk_0x9539D44F3E4492F6(iVar2);
				StringCopy(&(Local_89[iVar0 /*20*/].f_2), unk_0x6E524813889AECF8(iVar2), 64);
				unk_0x5D96D8530B3D0904(&iLocal_101, iVar1);
				if (unk_0x437347B10A200C4B(vLocal_90[iVar1 /*3*/].f_2, 0))
				{
					unk_0x5D96D8530B3D0904(&iLocal_103, iVar1);
				}
				if (func_45(vLocal_90[iVar1 /*3*/]))
				{
					Local_89[iVar0 /*20*/].f_12 = 1;
				}
				else if (func_104(vLocal_90[iVar1 /*3*/], 0))
				{
					Local_89[iVar0 /*20*/].f_13 = 1;
				}
				if (iLocal_107 == iVar0)
				{
					if (unk_0x405E212DDE472467(vLocal_90[iVar1 /*3*/].f_2, 0))
					{
					}
				}
				if (Local_89[iVar0 /*20*/].f_12)
				{
					if (!unk_0xEAE0D21A50E6C7F4(iLocal_103, iVar1) && !unk_0xEAE0D21A50E6C7F4(iLocal_103, unk_0xD803B885F5E47A62()))
					{
					}
				}
				else if (Local_89[iVar0 /*20*/].f_13)
				{
				}
			}
		}
		iVar0++;
	}
	if (iLocal_104 != iVar5)
	{
		iLocal_104 = iVar5;
	}
}

int func_797()
{
	return 4294967295;
}

void func_798()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_107 = 4294967295;
	if (unk_0xEAE0D21A50E6C7F4(iLocal_101, unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEAE0D21A50E6C7F4(iLocal_102, unk_0x57270EE11514DC67()))
		{
			if (!func_274(unk_0xD803B885F5E47A62()))
			{
				iLocal_107 = unk_0x57270EE11514DC67();
			}
			else if (func_272() && !func_801())
			{
				iVar0 = func_799();
				if (unk_0x34BFC6F0CB887BC2(iVar0))
				{
					iVar1 = unk_0x83FACCC48B68F9D1(iVar0);
					if (unk_0xFB75B0F82CA525F6(iVar1))
					{
						iVar2 = unk_0x7B9C1F53FE442D06(iVar1);
						iLocal_107 = iVar2;
					}
				}
			}
		}
	}
}

var func_799()
{
	if (unk_0xC844350D5D58C99A(func_800()))
	{
		return func_800();
	}
	return func_271();
}

var func_800()
{
	return Global_240006.f_3;
}

bool func_801()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 11);
}

int func_802()
{
	var uVar0;
	
	func_807(&uVar0);
	if (Global_140856 == 0)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 1;
		}
	}
	if (func_806())
	{
		return 1;
	}
	if (Global_2594CA)
	{
		return 1;
	}
	if (func_805())
	{
		return 1;
	}
	if (func_804(159))
	{
		if (!func_803())
		{
			return 1;
		}
	}
	if (func_804(157))
	{
		return 1;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 1;
	}
	if (func_78() != 0)
	{
		if (unk_0x8A22C4C08282BF26(func_78()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_803()
{
	return Global_2564C8.f_256;
}

int func_804(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_805()
{
	return Global_258C08;
}

bool func_806()
{
	return Global_2564C8.f_251;
}

void func_807(var uParam0)
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
					func_808(iVar0);
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

void func_808(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(1, iParam0, &vVar0, 3))
	{
		if (func_993(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_809(iVar2, &bVar3))
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

int func_809(int iParam0, var uParam1)
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

int func_810(bool bParam0)
{
	if (func_813(1))
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
		if (func_96() == func_29() || !func_993(func_96(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_742(unk_0xD803B885F5E47A62()))
	{
		if (func_812(unk_0xD803B885F5E47A62()) && func_811())
		{
			return 1;
		}
	}
	return 0;
}

int func_811()
{
	switch (func_115(func_734(unk_0xD803B885F5E47A62())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_812(int iParam0)
{
	if (iParam0 != func_29() && func_993(iParam0, 1, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 4);
	}
	return 0;
}

int func_813(bool bParam0)
{
	bool bVar0;
	
	if (!func_175(1))
	{
		bVar0 = false;
		if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 != func_29())
		{
			if (func_993(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39, 0, 1))
			{
				if ((Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 4 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 8) || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_18 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_814(func_67(unk_0xD803B885F5E47A62())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_238(31);
				if (func_100(func_67(unk_0xD803B885F5E47A62())))
				{
					func_238(81);
				}
				if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 != func_29() && unk_0x40B8C182D63932FC(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39))
				{
					Global_18D265 = func_246(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39, 4294967294, 0, 0, 0);
					if (!func_45(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39))
					{
						func_238(88);
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

int func_814(int iParam0)
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

void func_815()
{
	SYSTEM::WAIT(0);
}

void func_816()
{
	int iVar0;
	int iVar1;
	
	if (!func_882(&iLocal_81))
	{
		unk_0xC92DB9682A650680("BIKER_MP_MUSIC_STOP");
	}
	unk_0x335A7ED560871478(0);
	func_514(&iLocal_81);
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()) == uLocal_118[0] || unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()) == uLocal_118[1])
		{
			unk_0x6DF7BF67E86AAE86(unk_0x16F2683693E537C9(), iLocal_119);
		}
	}
	if (unk_0x8CD06866876216F2())
	{
		if (func_44(unk_0xFB04705FDFDCE640(), 9))
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			func_86(9);
		}
	}
	func_51();
	Global_26B66F.f_10B = 0;
	func_880(Global_198C74, 4294967295, 4294967295, 4294967295, 4294967295);
	func_820(1, 0);
	func_819();
	func_523();
	func_71();
	if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
	{
		iVar0 = unk_0x3C66DF04E6EA3587(unk_0x16F2683693E537C9());
		iVar1 = unk_0x134B62B726CEC8E6(iVar0);
		if (func_518(iVar1))
		{
			unk_0xFC03550CDEF9A885(iVar0, 0);
		}
	}
	func_570(0);
	func_818();
	func_817();
	unk_0x10FAF14A60A0DBE1();
}

void func_817()
{
	unk_0x51732B934211201A(uLocal_118[0]);
	unk_0x51732B934211201A(uLocal_118[1]);
}

void func_818()
{
	if (Global_19824D)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 0))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 0);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 1))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 1);
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_19824E, 5))
		{
			unk_0x0674E58A79778E99(&Global_26D9AC, 5);
		}
		if (unk_0x76395FF5E8D5E643(3939230146))
		{
			unk_0x1BA7FCEAFCE8D46E(3939230146, 1, false, false);
		}
		if (unk_0x76395FF5E8D5E643(3713987790))
		{
			unk_0x1BA7FCEAFCE8D46E(3713987790, 1, false, false);
		}
		if (unk_0x76395FF5E8D5E643(2868514821))
		{
			unk_0x1BA7FCEAFCE8D46E(2868514821, 1, false, false);
		}
		if (unk_0x76395FF5E8D5E643(745417724))
		{
			unk_0x1BA7FCEAFCE8D46E(745417724, 1, false, false);
		}
		if (unk_0x76395FF5E8D5E643(2989662390))
		{
			unk_0x1BA7FCEAFCE8D46E(2989662390, 1, false, false);
		}
		if (unk_0x76395FF5E8D5E643(2751792219))
		{
			unk_0x1BA7FCEAFCE8D46E(2751792219, 1, false, false);
		}
		if (unk_0x76395FF5E8D5E643(3483196299))
		{
			unk_0x1BA7FCEAFCE8D46E(3483196299, 1, false, false);
		}
		Global_19824E = 0;
	}
	Global_19824D = 0;
}

void func_819()
{
	struct<20> Var0;
	
	Var0.f_2 = 4294967295;
	Var0.f_3 = 4294967295;
	Var0.f_4 = 4294967295;
	Var0.f_6 = 4294967295;
	Var0.f_7 = 4294967295;
	Var0.f_8 = 4294967295;
	Global_18040E = { Var0 };
	Global_18040E.f_D = func_29();
	if (unk_0xEAE0D21A50E6C7F4(Global_1801E0, 3))
	{
		unk_0x0674E58A79778E99(&Global_1801E0, 3);
	}
}

void func_820(bool bParam0, int iParam1)
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
		func_878();
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 4);
	}
	if ((func_145() && iParam1 != 0) && Global_40001.f_4255)
	{
		if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 190 || Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_21 == 192)
		{
			func_860(unk_0xD803B885F5E47A62(), iParam1, 1, 0);
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
		if (!unk_0xEAE0D21A50E6C7F4(Global_1806FA.f_1, 14) && !func_121(unk_0xD803B885F5E47A62()))
		{
			func_715(0);
		}
	}
	else if (func_858(unk_0xD803B885F5E47A62()) != 4294967295)
	{
		func_728(4294967295);
	}
	func_857(func_29());
	if (func_233(16))
	{
		func_856(16);
	}
	func_853(0);
	func_724(4294967295);
	func_819();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_852(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_850(iVar1);
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
	iVar2 = func_110();
	if ((func_92(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_849(4294967295);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_144(iVar2))
	{
		func_846(4294967295, 1);
	}
	else if (((((func_109(iVar2) || func_845(iVar2)) || func_844(iVar2)) || func_134(iVar2)) || func_133(iVar2)) || func_132(iVar2))
	{
	}
	else
	{
		func_846(4294967295, 1);
	}
	func_771(19);
	func_771(20);
	func_771(21);
	func_771(22);
	func_771(27);
	func_856(3);
	func_856(4);
	func_856(7);
	func_843();
	if (func_118(unk_0xD803B885F5E47A62()))
	{
		func_842(0);
	}
	func_771(29);
	Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 = func_29();
	if (Global_26B66F.f_1404.f_29 != 0)
	{
		Global_26B66F.f_1404.f_29 = 0;
	}
	if (bParam0)
	{
		func_835();
	}
	if (!func_121(unk_0xD803B885F5E47A62()))
	{
		func_834();
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
		func_833("IMPEXP_SELFDES", 0);
		func_823("IMPEXP_SELFDES");
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 8);
	}
	func_821(iVar2, 0);
}

void func_821(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 9))
		{
			unk_0x8BC9595FD2792B5D(func_822(iParam0));
			unk_0x5D96D8530B3D0904(&(Global_198C6B.f_3), 9);
		}
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_198C6B.f_3, 9))
	{
		unk_0x8910D3D58E0132B8(func_822(iParam0));
		unk_0x0674E58A79778E99(&(Global_198C6B.f_3), 9);
	}
}

char* func_822(int iParam0)
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

void func_823(char* sParam0)
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
					func_825();
					Global_1B416.f_3738[iVar0 /*104*/].f_63[Global_4C1E] = 0;
					if (func_824(iVar0))
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

int func_824(int iParam0)
{
	if ((Global_1B416.f_3738[iParam0 /*104*/].f_63[0] == 1 || Global_1B416.f_3738[iParam0 /*104*/].f_63[1] == 1) || Global_1B416.f_3738[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_825()
{
	if (func_832(14))
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
		Global_4C1E = func_826();
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

var func_826()
{
	func_827();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_827()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_830(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_829(unk_0x16F2683693E537C9());
			if (func_828(iVar0) && (!func_832(14) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_828(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_828(int iParam0)
{
	return iParam0 < 3;
}

int func_829(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_830(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_830(int iParam0)
{
	if (func_828(iParam0))
	{
		return func_831(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_831(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_832(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_833(char* sParam0, int iParam1)
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

void func_834()
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

void func_835()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_18), &Global_24C36F, 2);
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_1A), &Global_24C371, 19);
	func_840();
	func_836(1, 1, 0);
	func_52();
}

void func_836(bool bParam0, bool bParam1, bool bParam2)
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
		func_839();
	}
	if (!bParam2)
	{
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_838(0);
	func_837();
}

void func_837()
{
	struct<6> Var0;
	
	if (Global_24B2D0.f_1E7.f_1 == unk_0x0D0A574C76D769AC())
	{
		Global_24B2D0.f_1E7 = { Var0 };
	}
}

void func_838(bool bParam0)
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

void func_839()
{
	unk_0xBFC87303F2B2ED31(&(Global_24B2D0.f_16D), &Global_24C4C4, 121);
}

void func_840()
{
	func_841();
	Global_24B2D0.f_8CE = 0;
}

void func_841()
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

void func_842(bool bParam0)
{
	if (bParam0)
	{
		if (!func_62(unk_0xD803B885F5E47A62(), 9))
		{
			if (func_116(unk_0xD803B885F5E47A62()) != 0)
			{
				func_123(9);
			}
		}
	}
	else if (func_62(unk_0xD803B885F5E47A62(), 9))
	{
		func_771(9);
	}
}

void func_843()
{
	if (func_569(unk_0xD803B885F5E47A62()))
	{
		func_771(25);
	}
}

int func_844(int iParam0)
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

int func_845(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_846(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_110();
	}
	if (iParam0 > 0)
	{
		if (func_177() != func_29())
		{
			if (func_743(unk_0xD803B885F5E47A62()) == unk_0xD803B885F5E47A62())
			{
				Global_265EAE.f_5D[func_848(iParam0)] = 1;
			}
		}
		iVar0 = func_848(159);
		if (func_847(iVar0, Global_40001.f_313E, bParam1))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(157);
		if (func_847(iVar0, Global_40001.f_313E, bParam1))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(148);
		if (func_847(iVar0, Global_40001.f_313E, bParam1))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(164);
		if (func_847(iVar0, Global_40001.f_313E, bParam1))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(142);
		if (func_847(iVar0, Global_40001.f_313E, bParam1))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(152);
		if (func_847(iVar0, Global_40001.f_313E, bParam1))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(166);
		if (func_847(iVar0, Global_40001.f_313E, bParam1))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(170);
		if (func_847(iVar0, Global_40001.f_313E, bParam1))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(173);
		if (func_847(iVar0, Global_40001.f_313E, bParam1))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(179);
		if (func_847(iVar0, Global_40001.f_313E, bParam1))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(200);
		if (func_847(iVar0, Global_40001.f_313E, bParam1))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(201);
		if (func_847(iVar0, Global_40001.f_313E, bParam1))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(182);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(183);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(185);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(186);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(180);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(195);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(197);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(198);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(207);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(208);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(209);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(214);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(215);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(216);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(217);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(218);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(219);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(220);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(221);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_847(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_62(unk_0xD803B885F5E47A62(), 19) && !func_62(unk_0xD803B885F5E47A62(), 20)) && !func_62(unk_0xD803B885F5E47A62(), 9))
		{
			return 0;
		}
	}
	if (Global_265EAE.f_5D[iParam0] == 1 && func_5(&(Global_265EAE[iParam0 /*2*/])))
	{
		if (func_22(&(Global_265EAE[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_265EAE.f_5D[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_848(int iParam0)
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

void func_849(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = func_110();
	}
	if (iParam0 > 0)
	{
		if (func_177() != func_29())
		{
			Global_265EAE.f_5D[func_848(iParam0)] = 1;
		}
		iVar0 = func_848(155);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(163);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(160);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(153);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(162);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(154);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(171);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(172);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(199);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(194);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(193);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(210);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(205);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(189);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_848(211);
		if (func_847(iVar0, Global_40001.f_313F, 0))
		{
			func_7(&(Global_265EAE[iVar0 /*2*/]));
			func_4(&(Global_265EAE[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_850(int iParam0)
{
	if (!func_11(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_151[iParam0 /*3*/], func_851(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_151[iParam0 /*3*/] = { func_851() };
	}
	if (!func_11(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_144[iParam0 /*3*/], func_851(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_144[iParam0 /*3*/] = { func_851() };
	}
}

Vector3 func_851()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_852(int iParam0)
{
	if (!func_11(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_96[iParam0 /*3*/], func_851(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_96[iParam0 /*3*/] = { func_851() };
	}
	if (!func_11(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_7D[iParam0 /*3*/], func_851(), 0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_7D[iParam0 /*3*/] = { func_851() };
	}
}

void func_853(bool bParam0)
{
	if (bParam0)
	{
		if (!func_766(unk_0xD803B885F5E47A62(), 14))
		{
			func_855(14);
		}
	}
	else if (func_766(unk_0xD803B885F5E47A62(), 14))
	{
		func_854(14);
	}
}

void func_854(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_5), iParam0);
}

void func_855(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_5), iParam0);
}

void func_856(int iParam0)
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_2D), iParam0);
}

void func_857(int iParam0)
{
	if (func_41(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xD803B885F5E47A62() != iParam0)
		{
			if (Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1E4 != iParam0)
			{
				Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_1E4 = iParam0;
				if (iParam0 != func_29())
				{
				}
			}
		}
	}
}

int func_858(int iParam0)
{
	if (func_859(iParam0, 0))
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_20;
	}
	return 4294967295;
}

int func_859(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_20 != 4294967295 || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_21 != 4294967295))
	{
		return 1;
	}
	return 0;
}

void func_860(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_326(iParam0, iParam1) && func_877(iParam0, iParam1))
	{
		iVar0 = func_325(iParam0, iParam1);
		func_864(iVar0, bParam2, bParam3);
		func_861(iVar0, 1);
	}
}

void func_861(int iParam0, bool bParam1)
{
	if (!func_863(iParam0))
	{
		return;
	}
	func_309(func_862(iParam0), bParam1, 4294967295, 1);
	Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_6 = bParam1;
}

int func_862(int iParam0)
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

bool func_863(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_864(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_621(unk_0xD803B885F5E47A62(), iParam0);
	if (!bParam1)
	{
		func_876(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_265A43[iParam0];
		iVar0 = func_875(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1993C9 = 4294967295;
		}
		func_874(iParam0, 0, bParam2);
	}
	else if (func_872(iParam0, bParam2))
	{
		iVar0 = func_871(iVar2, 0);
		iVar3 = func_698(unk_0xD803B885F5E47A62(), iVar2);
		iVar4 = func_870(iVar2, bParam2);
		iVar5 = func_871(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_869(iVar2) && func_868(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_876(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_867(unk_0xD803B885F5E47A62(), iVar2) > 0)
		{
			func_866(iParam0, (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2 - (func_870(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_871(iVar2, bParam2) / func_867(unk_0xD803B885F5E47A62(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_869(iVar2) && func_868(unk_0xD803B885F5E47A62(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_865(unk_0xD803B885F5E47A62(), iVar2, iVar0, bParam2);
}

void func_865(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return;
	}
	if (func_316(iParam1))
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

void func_866(int iParam0, int iParam1)
{
	if (iParam0 != 4294967295 && iParam1 != Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2)
	{
		Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_B7[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_867(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_316(iParam1))
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

int func_868(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_316(iParam1) && func_869(iParam1))
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

bool func_869(int iParam0)
{
	return func_171(iParam0) == 5;
}

int func_870(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_171(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_40001.f_4236;
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_423B;
			}
			break;
		
		case 3:
			uVar0 = Global_40001.f_4235;
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_423A;
			}
			break;
		
		case 4:
			uVar0 = Global_40001.f_4234;
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_4239;
			}
			break;
		
		case 0:
			uVar0 = Global_40001.f_4232;
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_4237;
			}
			break;
		
		case 2:
			uVar0 = Global_40001.f_4233;
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				uVar0 = Global_40001.f_4238;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_40001.f_5252;
				if (func_324(unk_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_40001.f_5253;
				}
			}
			else
			{
				uVar0 = Global_40001.f_5242;
				if (func_324(unk_0xD803B885F5E47A62(), iParam0, 0))
				{
					uVar0 = Global_40001.f_5243;
				}
			}
			break;
	}
	return uVar0;
}

int func_871(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_171(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_40001.f_4223;
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_422C);
			}
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_4231);
			}
			break;
		
		case 3:
			iVar0 = Global_40001.f_4224;
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_422B);
			}
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_4230);
			}
			break;
		
		case 4:
			iVar0 = Global_40001.f_4225;
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_422A);
			}
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_422F);
			}
			break;
		
		case 0:
			iVar0 = Global_40001.f_4226;
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_4228);
			}
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_40001.f_422D);
			}
			break;
		
		case 2:
			iVar0 = Global_40001.f_4227;
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_40001.f_4229);
			}
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 1))
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
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 0))
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
			if (func_324(unk_0xD803B885F5E47A62(), iParam0, 1))
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
			if (func_868(unk_0xD803B885F5E47A62(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_872(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_310(15384, 4294967295, 4294967295);
	}
	return func_310(func_873(iParam0), 4294967295, 4294967295);
}

int func_873(int iParam0)
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

void func_874(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_309(15384, bParam1, 4294967295, 1);
		return;
	}
	func_309(func_873(iParam0), bParam1, 4294967295, 1);
}

int func_875(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_265A43[iParam0];
	iVar1 = func_621(unk_0xD803B885F5E47A62(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_265A4A;
	}
	if (func_869(iVar1))
	{
		if (func_868(unk_0xD803B885F5E47A62(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_876(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_265A4A = iParam1;
		return;
	}
	Global_265A43[iParam0] = iParam1;
}

int func_877(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_326(iParam0, iParam1))
	{
		iVar0 = func_325(iParam0, iParam1);
		if (Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_4 > 0 && Global_184507[iParam0 /*876*/].f_112.f_B7[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_878()
{
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 28);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 29);
	func_879(24);
}

void func_879(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_7[iVar0]), iVar1);
}

void func_880(struct<14> Param0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	char* sVar0;
	struct<15> Var1;
	struct<19> Var2;
	struct<19> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<15> Var6;
	struct<17> Var7;
	struct<17> Var8;
	
	sVar0 = unk_0xBB0808A181D4745C();
	if (unk_0x8CD06866876216F2())
	{
		if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_E = iParam1;
			unk_0xB047F6117D395ACC(&Var1);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_ROB_SHOP"))
		{
			Var2 = { Param0 };
			Var2.f_E = Global_198C74.f_E;
			Var2.f_F = iParam1;
			Var2.f_10 = iParam2;
			Var2.f_11 = iParam3;
			Var2.f_12 = iParam4;
			unk_0x9BB0AC5E4A8F404F(&Var2);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_COLLECT_MONEY"))
		{
			Var3 = { Param0 };
			Var3.f_E = Global_198C74.f_E;
			Var3.f_F = iParam1;
			Var3.f_10 = iParam2;
			Var3.f_11 = iParam3;
			Var3.f_12 = iParam4;
			unk_0xE93B0B1B12C1E1E1(&Var3);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FIVESTAR"))
		{
			Var4 = { Param0 };
			Var4.f_E = Global_198C74.f_E;
			Var4.f_F = iParam1;
			unk_0xCD81BB1970E3B8E2(&Var4);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var5 = { Param0 };
			Var5.f_E = Global_198C74.f_E;
			Var5.f_F = iParam1;
			Var5.f_10 = iParam2;
			unk_0x28D613A77A383381(&Var5);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_POINT_TO_POINT"))
		{
			Var6 = { Param0 };
			Var6.f_E = Global_198C74.f_E;
			unk_0x438700D865B444D6(&Var6);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_CASHING_OUT"))
		{
			Var7 = { Param0 };
			Var7.f_E = iParam1;
			Var7.f_F = (SYSTEM::TO_FLOAT(iParam1) / SYSTEM::TO_FLOAT(iParam2));
			Var7.f_10 = iParam3;
			unk_0x49B509F5A7E9A84A(&Var7);
		}
		else if (unk_0x7F8A39872A07D2CE(sVar0, "GB_SALVAGE"))
		{
			Var8 = { Param0 };
			Var8.f_E = iParam1;
			Var8.f_F = iParam2;
			Var8.f_10 = Global_198C74.f_E;
			unk_0xCF5A5AEF9EB03B45(&Var8);
		}
	}
	func_881();
}

void func_881()
{
	struct<18> Var0;
	
	Global_198C74 = { Var0 };
}

bool func_882(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 0);
}

void func_883(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;
	
	if (!func_729(0))
	{
		uVar1 = func_941(func_25(), bParam0, bVar0, bParam1);
		Global_198C74.f_2 = Local_143.f_21;
		Global_198C74.f_3 = Local_143.f_22;
		func_884(bParam0, uVar1, 0, 0, 4294967295, 4294967295, 4294967295, 4294967295, 4294967295, 0);
		func_705(0);
	}
}

void func_884(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
		iVar0 = func_406(unk_0xD803B885F5E47A62());
		Global_198D8B.f_4 = func_660();
		Global_198D8B.f_5 = func_659();
		if (func_119(unk_0xD803B885F5E47A62()) || func_63(unk_0xD803B885F5E47A62()))
		{
			Global_198D8B.f_6 = 1;
		}
		else
		{
			Global_198D8B.f_6 = 0;
		}
		Global_198D8B.f_1 = func_935(bParam9);
		Global_198D8B.f_8 = unk_0xDD0E7998AE8AD485();
		Global_198D8B.f_9 = func_701(bParam0);
		Global_198D8B.f_A = uParam1;
		Global_198D8B.f_11 = Global_198D8B.f_2;
		Global_198D8B.f_12 = Global_198D8B.f_2;
		Global_198D8B.f_13 = func_692();
		Global_198D8B.f_15 = (Global_198D8B.f_8 - Global_198D8B.f_7);
		if (func_281(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198D8B.f_17 = func_701(func_103(1));
		}
		Global_198D8B.f_18 = func_934(unk_0xD803B885F5E47A62());
		Global_198D8B.f_1C = func_702(unk_0xD803B885F5E47A62());
		if (Global_198D8B.f_18 > 2)
		{
			Global_198D8B.f_18 = 2;
		}
		func_932(iVar0);
	}
	else
	{
		iVar0 = func_67(unk_0xD803B885F5E47A62());
	}
	if (func_100(iVar0))
	{
		Global_198C86.f_2 = func_660();
		Global_198C86.f_3 = func_659();
		Global_198C86.f_32 = iParam4;
		Global_198C86.f_33 = iParam5;
		Global_198C86.f_A = unk_0xDD0E7998AE8AD485();
		Global_198C86.f_14 = (Global_198C86.f_A - Global_198C86.f_9);
		Global_198C86.f_C = uParam1;
		Global_198C86.f_13 = func_928(iVar0, bParam0, func_931(bParam3));
		if (bParam0)
		{
			Global_198C86.f_B = 1;
		}
		else
		{
			Global_198C86.f_B = 0;
		}
		if ((func_118(unk_0xD803B885F5E47A62()) || func_117(unk_0xD803B885F5E47A62())) || func_61(unk_0xD803B885F5E47A62()))
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
			Global_198C86.f_2D = func_698(func_177(), iParam2);
			Global_198C86.f_2F = iParam7;
			Global_198C86.f_2E = iParam6;
			Global_198C86.f_34 = func_927(func_177(), iParam2);
		}
		func_925(iVar0);
	}
	else if (func_108(iVar0))
	{
		Global_198CBC.f_2 = func_660();
		Global_198CBC.f_3 = func_659();
		Global_198CBC.f_A = unk_0xDD0E7998AE8AD485();
		Global_198CBC.f_13 = (Global_198CBC.f_A - Global_198CBC.f_9);
		Global_198CBC.f_C = uParam1;
		if (bParam0)
		{
			Global_198CBC.f_B = 1;
		}
		else
		{
			Global_198CBC.f_B = 0;
		}
		if ((func_118(unk_0xD803B885F5E47A62()) || func_117(unk_0xD803B885F5E47A62())) || func_61(unk_0xD803B885F5E47A62()))
		{
			Global_198CBC.f_8 = 1;
		}
		else
		{
			Global_198CBC.f_8 = 0;
		}
		func_923(iVar0);
	}
	else if (func_134(iVar0))
	{
		Global_198CFB.f_2 = func_660();
		Global_198CFB.f_3 = func_659();
		Global_198CFB.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198CFB.f_12 = (Global_198CFB.f_9 - Global_198CFB.f_8);
		Global_198CFB.f_B = uParam1;
		Global_198CFB.f_7 = func_692();
		Global_198CFB.f_2A = func_695(func_49(), 5);
		iVar1 = unk_0xD803B885F5E47A62();
		iVar2 = func_157(iVar1);
		Global_198CFB.f_1C = iVar2;
		Global_198CFB.f_1D = func_701((func_628(iVar1) || func_627(iVar1)));
		Global_198CFB.f_1E = func_701(func_922(iVar1));
		Global_198CFB.f_20 = func_701(func_625(iVar1));
		Global_198CFB.f_21 = func_701(func_626(iVar1));
		Global_198CFB.f_22 = func_701(func_921(iVar1));
		Global_198CFB.f_23 = func_701(func_624(0, iVar1) == 1);
		Global_198CFB.f_24 = func_701(func_920(iVar1));
		Global_198CFB.f_25 = func_701(func_919(iVar1));
		Global_198CFB.f_26 = func_701(func_918(iVar1));
		Global_198CFB.f_27 = func_701(func_324(iVar1, iVar2, 0));
		Global_198CFB.f_28 = func_701(func_324(iVar1, iVar2, 2));
		Global_198CFB.f_29 = func_701(func_324(iVar1, iVar2, 1));
		if (func_917(iVar1))
		{
			Global_198CFB.f_1F = 2;
		}
		else if (func_916(iVar1))
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
		if ((func_118(unk_0xD803B885F5E47A62()) || func_117(unk_0xD803B885F5E47A62())) || func_61(unk_0xD803B885F5E47A62()))
		{
			Global_198CFB.f_6 = 1;
		}
		else
		{
			Global_198CFB.f_6 = 0;
		}
		Global_198CFB.f_15 = 4294967294;
		Global_198CFB.f_16 = 4294967294;
		func_914(iVar0);
	}
	else if (func_133(iVar0))
	{
		Global_198D27.f_2 = func_660();
		Global_198D27.f_3 = func_659();
		if ((func_118(unk_0xD803B885F5E47A62()) || func_117(unk_0xD803B885F5E47A62())) || func_61(unk_0xD803B885F5E47A62()))
		{
			Global_198D27.f_6 = 1;
		}
		else
		{
			Global_198D27.f_6 = 0;
		}
		Global_198D27.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198D27.f_A = func_701(bParam0);
		Global_198D27.f_B = uParam1;
		Global_198D27.f_11 = func_693(func_96());
		Global_198D27.f_12 = (Global_198D27.f_9 - Global_198D27.f_8);
		Global_198D27.f_14 = iParam8;
		Global_198D27.f_15 = 4294967294;
		Global_198D27.f_16 = 4294967294;
		Global_198D27.f_1B = func_913();
		Global_198D27.f_1D = func_142(6107, 4294967295, 0);
		Global_198D27.f_1E = func_142(6103, 4294967295, 0);
		Global_198D27.f_1F = func_142(6104, 4294967295, 0);
		Global_198D27.f_20 = func_142(6106, 4294967295, 0);
		Global_198D27.f_21 = func_142(6105, 4294967295, 0);
		Global_198D27.f_22 = func_142(6108, 4294967295, 0);
		Global_198D27.f_24 = func_701(func_103(1));
		Global_198D27.f_25 = func_911();
		func_901();
		func_899(iVar0);
	}
	else if (func_132(iVar0))
	{
		Global_198D5D.f_2 = func_660();
		Global_198D5D.f_3 = func_659();
		if ((func_118(unk_0xD803B885F5E47A62()) || func_117(unk_0xD803B885F5E47A62())) || func_61(unk_0xD803B885F5E47A62()))
		{
			Global_198D5D.f_6 = 1;
		}
		else
		{
			Global_198D5D.f_6 = 0;
		}
		Global_198D5D.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198D5D.f_A = func_701(bParam0);
		Global_198D5D.f_B = uParam1;
		Global_198D5D.f_12 = (Global_198D5D.f_9 - Global_198D5D.f_8);
		Global_198D5D.f_14 = iParam8;
		Global_198D5D.f_17 = Global_C0073;
		Global_198D5D.f_24 = Global_C0073.f_1;
		Global_198D5D.f_18 = func_142(6157, 4294967295, 0);
		Global_198D5D.f_19 = func_142(6162, 4294967295, 0);
		Global_198D5D.f_1A = func_142(6163, 4294967295, 0);
		Global_198D5D.f_1B = func_701((((func_691() || func_690()) || func_689()) || func_688(unk_0xD803B885F5E47A62())));
		Global_198D5D.f_1C = func_142(6164, 4294967295, 0);
		Global_198D5D.f_1D = func_701(func_687());
		Global_198D5D.f_23 = 4294967295;
		Global_198D5D.f_26 = 4294967295;
		Global_198D5D.f_27 = Global_198D5D.f_4;
		Global_198D5D.f_28 = Global_198D5D.f_5;
		Global_198D5D.f_29 = func_660();
		Global_198D5D.f_2A = func_701(func_103(1));
		Global_198D5D.f_2C = Global_198D5D.f_12;
		func_897(iVar0);
	}
	else if (func_127(iVar0))
	{
		if (Global_198DE5.f_2 == 4294967295)
		{
			Global_198DE5.f_2 = func_660();
		}
		if (Global_198DE5.f_3 == 4294967295)
		{
			Global_198DE5.f_3 = func_659();
		}
		if ((func_118(unk_0xD803B885F5E47A62()) || func_117(unk_0xD803B885F5E47A62())) || func_61(unk_0xD803B885F5E47A62()))
		{
			Global_198DE5.f_6 = 1;
		}
		else
		{
			Global_198DE5.f_6 = 0;
		}
		Global_198DE5.f_1 = func_935(0);
		Global_198DE5.f_7 = func_692();
		Global_198DE5.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198DE5.f_A = func_701(bParam0);
		Global_198DE5.f_B = uParam1;
		if (func_177() != 4294967295)
		{
			Global_198DE5.f_11 = func_686(func_177());
		}
		Global_198DE5.f_12 = (Global_198DE5.f_9 - Global_198DE5.f_8);
		Global_198DE5.f_13 = Global_26B66F.f_19B3;
		Global_198DE5.f_1C = func_702(unk_0xD803B885F5E47A62());
		Global_198DE5.f_1D = func_701(func_896(unk_0xD803B885F5E47A62()));
		Global_198DE5.f_1E = func_701(func_895(unk_0xD803B885F5E47A62()));
		Global_198DE5.f_1F = func_668(unk_0xD803B885F5E47A62());
		if (func_281(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198DE5.f_21 = func_701(func_103(1));
		}
		if (Global_198DE5.f_22 > 2)
		{
			Global_198DE5.f_22 = 2;
		}
		func_893(iVar0);
	}
	else if (func_131(iVar0))
	{
		Global_198DAF.f_2 = func_660();
		Global_198DAF.f_3 = func_659();
		if ((func_118(unk_0xD803B885F5E47A62()) || func_117(unk_0xD803B885F5E47A62())) || func_61(unk_0xD803B885F5E47A62()))
		{
			Global_198DAF.f_6 = 1;
		}
		else
		{
			Global_198DAF.f_6 = 0;
		}
		Global_198DAF.f_1 = func_935(0);
		Global_198DAF.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198DAF.f_A = func_701(bParam0);
		Global_198DAF.f_B = uParam1;
		Global_198DAF.f_12 = (Global_198DAF.f_9 - Global_198DAF.f_8);
		Global_198DAF.f_1C = func_702(unk_0xD803B885F5E47A62());
		if (Global_198DAF.f_1C)
		{
			Global_198DAF.f_1D = func_685(unk_0xD803B885F5E47A62());
		}
		else
		{
			Global_198DAF.f_1D = 0;
		}
		Global_198DAF.f_1E = func_669(unk_0xD803B885F5E47A62(), 4, 4294967295);
		Global_198DAF.f_1F = func_668(unk_0xD803B885F5E47A62());
		Global_198DAF.f_20 = func_701(func_667(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_21 = func_701(func_666(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_22 = func_701(func_665(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_23 = func_701(func_664(unk_0xD803B885F5E47A62()));
		Global_198DAF.f_24 = func_663(unk_0xD803B885F5E47A62());
		Global_198DAF.f_25 = func_662(unk_0xD803B885F5E47A62());
		Global_198DAF.f_27 = func_661(unk_0xD803B885F5E47A62());
		if (func_281(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198DAF.f_29 = func_701(func_103(1));
		}
		if (Global_198DAF.f_2A > 2)
		{
			Global_198DAF.f_2A = 2;
		}
		func_891(iVar0);
	}
	else if (func_126(iVar0))
	{
		Global_198E39.f_2 = func_660();
		Global_198E39.f_3 = func_659();
		Global_198E39.f_4 = func_704(func_177());
		Global_198E39.f_5 = func_703(func_177());
		if ((func_118(unk_0xD803B885F5E47A62()) || func_117(unk_0xD803B885F5E47A62())) || func_61(unk_0xD803B885F5E47A62()))
		{
			Global_198E39.f_6 = 1;
		}
		else
		{
			Global_198E39.f_6 = 0;
		}
		Global_198E39.f_7 = func_692();
		Global_198E39.f_9 = unk_0xDD0E7998AE8AD485();
		Global_198E39.f_A = func_701(bParam0);
		Global_198E39.f_B = uParam1;
		if (func_96() != 4294967295)
		{
			Global_198E39.f_11 = func_686(func_96());
		}
		Global_198E39.f_12 = (Global_198E39.f_9 - Global_198E39.f_8);
		Global_198E39.f_15 = 1;
		Global_198E39.f_16 = 1;
		Global_198E39.f_19 = func_890(unk_0xD803B885F5E47A62());
		Global_198E39.f_1B = func_701(func_658(unk_0xD803B885F5E47A62()));
		Global_198E39.f_1C = func_656(21, 4294967295);
		Global_198E39.f_1D = func_701(func_889(unk_0xD803B885F5E47A62()));
		func_887(iVar0);
	}
	else if (func_125(iVar0))
	{
		Global_198E84.f_6 = func_704(func_177());
		Global_198E84.f_7 = func_703(func_177());
		if (func_281(unk_0xD803B885F5E47A62(), 1))
		{
			Global_198E84.f_8 = func_701(func_103(1));
		}
		Global_198E84.f_A = func_692();
		Global_198E84.f_B = 1;
		Global_198E84.f_D = (unk_0xDD0E7998AE8AD485() - Global_19FC3D);
		Global_198E84.f_E = uParam1;
		Global_198E84.f_13 = 1;
		Global_198E84.f_14 = 1;
		func_885(iVar0);
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
		Global_198C74.f_8 = uParam1;
		if (Global_198C74.f_4 == 0)
		{
			if ((func_118(unk_0xD803B885F5E47A62()) || func_117(unk_0xD803B885F5E47A62())) || func_61(unk_0xD803B885F5E47A62()))
			{
				Global_198C74.f_4 = 1;
			}
		}
	}
}

void func_885(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x9CA4259CC8E87599(&Global_198E84);
	func_886();
}

void func_886()
{
	struct<36> Var0;
	
	Global_198E84 = { Var0 };
	Global_198E84.f_17 = 0;
	Global_198E84.f_16 = 0;
	Global_198E84.f_15 = 0;
}

void func_887(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x62CC3DEF90BBBB82(&Global_198E39);
	func_888();
}

void func_888()
{
	struct<31> Var0;
	
	Global_198E39 = { Var0 };
}

int func_889(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_171.f_2, 6);
	}
	return 0;
}

int func_890(int iParam0)
{
	if (func_67(iParam0) == 243)
	{
		return func_130(iParam0);
	}
	return 4294967295;
}

void func_891(int iParam0)
{
	unk_0x26ABE31DF89E0806(&Global_198DAF);
	func_892();
}

void func_892()
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

void func_893(int iParam0)
{
	unk_0xEB3BD00621D19C22(&Global_198DE5);
	func_894();
}

void func_894()
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

bool func_895(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 0);
}

bool func_896(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_142.f_1, 19);
}

void func_897(int iParam0)
{
	unk_0xD620402A9DD91217(&Global_198D5D);
	func_898();
}

void func_898()
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

void func_899(int iParam0)
{
	unk_0x51EB431C1612B9CA(&Global_198D27);
	func_900();
}

void func_900()
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

void func_901()
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
		iVar2 = (iVar0 + func_643(12));
		func_642(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_14325F[iVar1 /*141*/].f_42 != 0 && func_903(Global_14325F[iVar1 /*141*/].f_42, 1))
			{
				if (Global_26B66F.f_380 != iVar1)
				{
					if (func_902(Global_14325F[iVar1 /*141*/].f_42))
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

int func_902(int iParam0)
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

int func_903(int iParam0, bool bParam1)
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
		if (!func_910())
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
		if ((((!func_909() && !func_908()) && !func_907()) && !func_906()) && !func_910())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_907())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_905(iParam0))
		{
			return 0;
		}
	}
	if (!func_904(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_904(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_174())
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

int func_905(int iParam0)
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

int func_906()
{
	return 0;
}

int func_907()
{
	return 1;
}

int func_908()
{
	return 1;
}

int func_909()
{
	if (unk_0xC146D5FBD23C6954(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_910()
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

var func_911()
{
	var uVar0;
	
	uVar0 = func_912();
	if (!func_158())
	{
		if (func_177() != func_29())
		{
			uVar0 = func_934(func_177()) + 1;
		}
	}
	return uVar0;
}

int func_912()
{
	return func_934(unk_0xD803B885F5E47A62()) + 1;
}

int func_913()
{
	return func_142(6113, 4294967295, 0);
}

void func_914(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x09B65A782EA88A3D(&Global_198CFB);
	func_915();
}

void func_915()
{
	struct<44> Var0;
	
	Global_198CFB = { Var0 };
	Global_198CFB.f_17 = 0;
	Global_198CFB.f_18 = 0;
	Global_198CFB.f_10 = 0;
}

bool func_916(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 12);
}

bool func_917(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 13);
}

int func_918(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 12) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 13)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_919(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 1)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_920(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (((((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 3) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 4)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 5)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 0)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 1)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_921(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 6) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 7)) || unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_103, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_922(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_15F, 9);
}

void func_923(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x3315867670EACADD(&Global_198CBC);
	func_924();
}

void func_924()
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

void func_925(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x9D44809E7CAF1A79(&Global_198C86);
	func_926();
}

void func_926()
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

int func_927(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_324(iParam0, iParam1, 2);
	bVar1 = func_324(iParam0, iParam1, 1);
	bVar2 = func_324(iParam0, iParam1, 0);
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

int func_928(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_144(iParam0))
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
	else if (func_700(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_93(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_40001.f_450F;
			iVar1 = 20;
		}
	}
	else if (func_100(iParam0))
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
		unk_0xF9647457141B11A7(func_704(func_177()), func_703(func_177()), func_660(), func_659(), iVar1, iVar0);
	}
	func_930(iVar0);
	func_929(iVar0);
	return iVar0;
}

void func_929(int iParam0)
{
	int iVar0;
	
	iVar0 = func_142(3968, 4294967295, 0);
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
	func_140(3968, iVar0, 4294967295, 1, 0);
}

void func_930(int iParam0)
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

int func_931(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_118(unk_0xD803B885F5E47A62()) || func_61(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

void func_932(var uParam0)
{
	unk_0xC56A8C7E94A60EE3(&Global_198D8B);
	func_933();
}

void func_933()
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

int func_934(int iParam0)
{
	if (func_264(iParam0) == func_29())
	{
		return 0;
	}
	return Global_18D84D[iParam0 /*615*/].f_B.f_13;
}

int func_935(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	if (bParam0)
	{
		iVar0 = func_406(unk_0xD803B885F5E47A62());
	}
	else
	{
		iVar0 = func_67(unk_0xD803B885F5E47A62());
	}
	if (iVar0 != 4294967295)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_940(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_938(unk_0xD803B885F5E47A62());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_937(unk_0xD803B885F5E47A62());
			if (func_128(func_129(unk_0xD803B885F5E47A62())))
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
			iVar2 = func_937(unk_0xD803B885F5E47A62());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_936(unk_0xD803B885F5E47A62());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_936(unk_0xD803B885F5E47A62());
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

int func_936(int iParam0)
{
	if (func_67(unk_0xD803B885F5E47A62()) == 238 || func_67(unk_0xD803B885F5E47A62()) == 249)
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1F3;
	}
	return 4294967295;
}

int func_937(int iParam0)
{
	if (func_67(unk_0xD803B885F5E47A62()) == 237 || func_67(unk_0xD803B885F5E47A62()) == 250)
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1F2;
	}
	return 4294967295;
}

int func_938(int iParam0)
{
	return func_939(iParam0, 150);
}

int func_939(int iParam0, int iParam1)
{
	if (func_406(iParam0) == iParam1)
	{
		return Global_18D84D[iParam0 /*615*/].f_B.f_1F0;
	}
	return 4294967295;
}

int func_940(int iParam0)
{
	return func_939(iParam0, 236);
}

int func_941(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		
		case 3:
			return 6;
		
		case 1:
		case 4:
		case 6:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_942(struct<21> Param0)
{
	func_991(func_992(Param0), Param0);
	func_988(0, 4294967295, 0);
	unk_0x9752E7BAEABA939E(&Local_143, 35);
	unk_0x35B62793EAE9ADDF(&Local_144, 193);
	unk_0x256D93AFAE851A7A(0);
	func_945(0, 0, 0);
	func_943();
	return 1;
}

void func_943()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0xF63400DBE3303D26("relJoust0", &(uLocal_118[0]));
	unk_0xF63400DBE3303D26("relJoust1", &(uLocal_118[1]));
	iVar0 = unk_0x256517DE1B6755D4(unk_0xD09DF7101876AFB8(unk_0x16F2683693E537C9()), 2761840924);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			unk_0x0E2400AB9174FA81(1, Global_180837[iVar1], uLocal_118[iVar2]);
			unk_0x0E2400AB9174FA81(1, uLocal_118[iVar2], Global_180837[iVar1]);
			unk_0x0E2400AB9174FA81(iVar0, uLocal_118[iVar2], 2761840924);
			unk_0x0E2400AB9174FA81(iVar0, 2761840924, uLocal_118[iVar2]);
			unk_0x0E2400AB9174FA81(1, uLocal_118[iVar2], Global_180867[5]);
			unk_0x0E2400AB9174FA81(1, Global_180867[5], uLocal_118[iVar2]);
			unk_0x0E2400AB9174FA81(1, uLocal_118[iVar2], Global_180858);
			unk_0x0E2400AB9174FA81(1, Global_180858, uLocal_118[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	unk_0x0E2400AB9174FA81(5, uLocal_118[0], uLocal_118[1]);
	unk_0x0E2400AB9174FA81(5, uLocal_118[1], uLocal_118[0]);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		unk_0x0E2400AB9174FA81(5, 2017343592, uLocal_118[iVar2]);
		func_944(&(uLocal_118[iVar2]));
		iVar2++;
	}
}

void func_944(var uParam0)
{
	unk_0x0E2400AB9174FA81(1, 2429016672, *uParam0);
	unk_0x0E2400AB9174FA81(1, *uParam0, 2429016672);
	unk_0x0E2400AB9174FA81(1, 296331235, *uParam0);
	unk_0x0E2400AB9174FA81(1, *uParam0, 296331235);
	unk_0x0E2400AB9174FA81(1, 1166638144, *uParam0);
	unk_0x0E2400AB9174FA81(1, *uParam0, 1166638144);
	unk_0x0E2400AB9174FA81(1, 2037579709, *uParam0);
	unk_0x0E2400AB9174FA81(1, *uParam0, 2037579709);
	unk_0x0E2400AB9174FA81(1, 2017343592, *uParam0);
	unk_0x0E2400AB9174FA81(1, *uParam0, 2017343592);
	unk_0x0E2400AB9174FA81(1, 2473492219, *uParam0);
	unk_0x0E2400AB9174FA81(1, *uParam0, 2473492219);
	unk_0x0E2400AB9174FA81(1, 1782292358, *uParam0);
	unk_0x0E2400AB9174FA81(1, *uParam0, 1782292358);
	unk_0x0E2400AB9174FA81(1, 3261945386, *uParam0);
	unk_0x0E2400AB9174FA81(1, *uParam0, 3261945386);
	unk_0x0E2400AB9174FA81(1, 3008990876, *uParam0);
	unk_0x0E2400AB9174FA81(1, *uParam0, 3008990876);
}

void func_945(int iParam0, int iParam1, bool bParam2)
{
	func_987();
	if (func_742(unk_0xD803B885F5E47A62()))
	{
		func_949(1);
	}
	if ((iParam0 != 0 && unk_0x40B8C182D63932FC(iParam1)) && func_948(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x5D96D8530B3D0904(&Global_198C66, 0);
				break;
			}
	}
	if (!func_158() && !func_281(unk_0xD803B885F5E47A62(), 1))
	{
		if (func_773())
		{
			func_947(3);
		}
	}
	func_947(4);
	if (func_175(0))
	{
		Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B.f_39 = func_177();
	}
	if (func_100(iParam0))
	{
		func_926();
		Global_198C86.f_12 = func_693(func_96());
	}
	else if (func_108(func_858(unk_0xD803B885F5E47A62())))
	{
		func_924();
		Global_198CBC.f_12 = func_693(func_96());
	}
	if (bParam2)
	{
		if (!func_769())
		{
			func_715(1);
		}
	}
	func_946();
}

void func_946()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_14DB79.f_216[iVar0 /*42*/].f_1 = func_29();
		Global_14DB79.f_216[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_947(int iParam0)
{
	unk_0x5D96D8530B3D0904(&(Global_26B66F.f_1404.f_2D), iParam0);
}

int func_948(int iParam0, bool bParam1)
{
	return func_279(unk_0xD803B885F5E47A62(), iParam0, bParam1);
}

void func_949(bool bParam0)
{
	int iVar0;
	
	func_879(33);
	func_879(34);
	func_879(35);
	func_879(36);
	func_879(37);
	func_879(38);
	func_879(39);
	func_879(40);
	func_879(43);
	func_879(41);
	func_879(54);
	func_879(42);
	func_879(47);
	func_986(23);
	func_986(24);
	func_879(92);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_6C9), 2);
	func_985();
	func_980();
	func_975();
	func_970();
	func_959();
	func_955();
	func_951();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_26B66F.f_1404.f_E[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_950(3))
	{
		func_986(3);
	}
	else if (func_950(4))
	{
		func_986(4);
	}
	else if (func_950(5))
	{
		func_986(5);
	}
	else if (func_950(6))
	{
		func_986(6);
	}
	else if (func_950(7))
	{
		func_986(7);
	}
	else if (((((((((((((((((func_950(0) || func_950(1)) || func_950(2)) || func_950(8)) || func_950(9)) || func_950(10)) || func_950(11)) || func_950(12)) || func_950(13)) || func_950(14)) || func_950(15)) || func_950(16)) || func_950(17)) || func_950(18)) || func_950(19)) || func_950(20)) || func_950(21)) || func_950(22))
	{
		func_986(8);
		func_986(0);
		func_986(1);
		func_986(2);
		func_986(9);
		func_986(10);
		func_986(11);
		func_986(12);
		func_986(13);
		func_986(14);
		func_986(15);
		func_986(16);
		func_986(17);
		func_986(18);
		func_986(19);
		func_986(20);
		func_986(21);
		func_986(22);
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

bool func_950(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_E[iVar0], iVar1);
}

void func_951()
{
	if (func_953())
	{
		func_952(0);
		func_952(1);
		func_952(2);
		func_952(3);
	}
}

void func_952(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_21[iVar0]), iVar1);
}

int func_953()
{
	if (((func_954(0) || func_954(1)) || func_954(2)) || func_954(3))
	{
		return 1;
	}
	return 0;
}

bool func_954(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_21[iVar0], iVar1);
}

void func_955()
{
	if (func_957())
	{
		func_956(4);
		func_956(5);
		func_956(6);
		func_956(7);
	}
}

void func_956(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_1F[iVar0]), iVar1);
}

int func_957()
{
	if (((func_958(4) || func_958(5)) || func_958(6)) || func_958(7))
	{
		return 1;
	}
	return 0;
}

bool func_958(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_1F[iVar0], iVar1);
}

void func_959()
{
	int iVar0;
	
	if (func_969())
	{
		func_968(8);
		func_968(9);
		func_968(10);
		func_968(12);
		func_968(13);
		func_968(14);
		func_968(19);
		func_968(20);
		func_968(21);
		func_968(22);
		func_968(23);
		func_968(24);
		func_968(25);
		func_968(26);
		func_968(15);
		func_968(16);
		func_968(17);
		func_968(18);
		func_968(35);
		func_968(45);
		func_968(46);
		if (func_967(11))
		{
			func_968(11);
			iVar0 = func_142(7226, 4294967295, 0);
			unk_0x5D96D8530B3D0904(&iVar0, 2);
			func_140(7226, iVar0, 4294967295, 1, 0);
		}
	}
	if (func_967(48))
	{
		if (func_965(151, 3))
		{
			func_963(151, 3);
		}
		func_968(48);
	}
	if (func_967(49))
	{
		if (func_965(152, 3))
		{
			func_963(152, 3);
		}
		func_968(49);
	}
	if (func_967(50))
	{
		if (func_965(153, 3))
		{
			func_963(153, 3);
		}
		func_968(50);
	}
	if (func_967(51))
	{
		if (func_965(func_960(), 3))
		{
			func_963(func_960(), 3);
		}
		func_968(51);
	}
}

int func_960()
{
	if (func_962())
	{
		func_961(154, Global_4C1E, 1);
	}
	return 154;
}

void func_961(int iParam0, int iParam1, int iParam2)
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

int func_962()
{
	int iVar0;
	
	iVar0 = func_264(unk_0xD803B885F5E47A62());
	if (((iVar0 != unk_0xD803B885F5E47A62() && iVar0 != func_29()) && unk_0x40B8C182D63932FC(iVar0)) && iVar0 != 4294967295)
	{
		return 1;
	}
	return 0;
}

void func_963(int iParam0, int iParam1)
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
			func_964(iParam0, iVar0, 0);
			func_961(iParam0, iVar0, 0);
		}
	}
}

void func_964(int iParam0, int iParam1, int iParam2)
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

int func_965(int iParam0, int iParam1)
{
	if (func_966(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_966(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_706[iParam0 /*29*/].f_C[iParam1];
}

bool func_967(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_1A[iVar0], iVar1);
}

void func_968(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_1A[iVar0]), iVar1);
}

int func_969()
{
	if (((((((((((((((((((((func_967(8) || func_967(9)) || func_967(10)) || func_967(12)) || func_967(11)) || func_967(13)) || func_967(14)) || func_967(19)) || func_967(20)) || func_967(21)) || func_967(22)) || func_967(23)) || func_967(24)) || func_967(25)) || func_967(26)) || func_967(15)) || func_967(16)) || func_967(17)) || func_967(18)) || func_967(35)) || func_967(45)) || func_967(46))
	{
		return 1;
	}
	return 0;
}

void func_970()
{
	if (func_974())
	{
		func_973(0);
		func_973(1);
		func_973(2);
		func_973(3);
		func_973(4);
		func_973(5);
		if (func_972(32))
		{
			if (func_965(func_971(), 3))
			{
				func_963(func_971(), 3);
			}
			func_973(32);
		}
	}
}

int func_971()
{
	if (func_962())
	{
		func_961(12, Global_4C1E, 1);
	}
	return 12;
}

bool func_972(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_17[iVar0], iVar1);
}

void func_973(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_17[iVar0]), iVar1);
}

int func_974()
{
	if ((((func_972(1) || func_972(0)) || func_972(2)) || func_972(4)) || func_972(5))
	{
		return 1;
	}
	return 0;
}

void func_975()
{
	if (func_979())
	{
		func_978(0);
		func_978(1);
		func_978(2);
		func_978(3);
		func_978(4);
		func_978(5);
		func_978(6);
		func_978(7);
		if (func_977(8))
		{
			func_978(8);
		}
		if (func_977(15))
		{
			if (func_965(func_976(), 3))
			{
				func_963(func_976(), 3);
			}
			func_978(15);
		}
	}
}

int func_976()
{
	if (func_962())
	{
		func_961(20, Global_4C1E, 1);
	}
	return 20;
}

bool func_977(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_15[iVar0], iVar1);
}

void func_978(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_15[iVar0]), iVar1);
}

int func_979()
{
	if ((((((((func_977(0) || func_977(1)) || func_977(2)) || func_977(3)) || func_977(4)) || func_977(5)) || func_977(6)) || func_977(7)) || func_977(8))
	{
		return 1;
	}
	return 0;
}

void func_980()
{
	if (func_984())
	{
		func_983(0);
		func_983(1);
		func_983(2);
		func_983(3);
		func_983(4);
		func_983(5);
		func_983(6);
		func_983(7);
		func_983(8);
		func_983(9);
		func_983(10);
		func_983(11);
		func_983(12);
		if (func_982(13))
		{
			if (func_965(func_981(), 3))
			{
				func_963(func_981(), 3);
			}
			func_983(13);
		}
	}
}

int func_981()
{
	if (func_962())
	{
		func_961(76, Global_4C1E, 1);
	}
	return 76;
}

bool func_982(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(Global_26B66F.f_1404.f_13[iVar0], iVar1);
}

void func_983(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_13[iVar0]), iVar1);
}

int func_984()
{
	if ((((((((((((func_982(0) || func_982(1)) || func_982(2)) || func_982(3)) || func_982(4)) || func_982(5)) || func_982(6)) || func_982(7)) || func_982(8)) || func_982(9)) || func_982(10)) || func_982(11)) || func_982(12))
	{
		return 1;
	}
	return 0;
}

void func_985()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_26B66F.f_1404.f_11[iVar0] = 0;
		iVar0++;
	}
}

void func_986(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0674E58A79778E99(&(Global_26B66F.f_1404.f_E[iVar0]), iVar1);
}

void func_987()
{
	struct<14> Var0;
	
	Global_198C74 = { Var0 };
	Global_198C74.f_E = 0;
	Global_198C74.f_F = 0;
}

int func_988(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_990();
			}
			else
			{
				return 0;
			}
		}
		if (!func_989())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_990();
					}
					else
					{
						return 0;
					}
				}
				if (func_806())
				{
					if (!bParam2)
					{
						func_990();
					}
					else
					{
						return 0;
					}
				}
				if (func_804(157))
				{
					if (!bParam2)
					{
						func_990();
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
					func_990();
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
				func_990();
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
			func_990();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_989()
{
	return Global_140856;
}

void func_990()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_991(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x8CD06866876216F2())
	{
		func_990();
	}
	unk_0x37AD2AB54480FA6A(iParam0, 0, Param1.f_10);
}

int func_992(int iParam0)
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

int func_993(int iParam0, bool bParam1, bool bParam2)
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

