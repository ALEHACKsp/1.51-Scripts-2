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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	float fLocal_46 = 0f;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	float fLocal_48 = 0f;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	var uLocal_53 = 16;
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
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
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
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	fLocal_41 = 50f;
	fLocal_42 = 2500f;
	vLocal_43 = { 409.1539f, -1626.677f, 28.2928f };
	vLocal_45 = { 409.2747f, -1623.022f, 28.29278f };
	fLocal_46 = 202.6928f;
	vLocal_47 = { 415.6071f, -1647.604f, 28.2928f };
	fLocal_48 = 85.7173f;
	if (unk_0x2EBF608FFE6CA406(18))
	{
		func_33();
	}
	if (unk_0x8A22C4C08282BF26(joaat("ambient_tonyacall")) > 1)
	{
		unk_0x10FAF14A60A0DBE1();
	}
	while (true)
	{
		unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62());
		if (func_32(0, 14))
		{
			func_33();
		}
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			vLocal_44 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		}
		if (SYSTEM::VDIST2(vLocal_44, vLocal_43) > fLocal_42)
		{
			func_33();
		}
		switch (iLocal_37)
		{
			case 0:
				if (func_28())
				{
					if (func_5(&uLocal_53, "TOWAUD", "TONYA_HANG", 8, 0, 0, 0))
					{
						iLocal_37 = 1;
					}
				}
				break;
			
			case 1:
				unk_0x3F423BF5B8125A50("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0x3F423BF5B8125A50("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0x3F423BF5B8125A50("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0x3F423BF5B8125A50("amb@world_human_smoking@female@enter");
				unk_0x3F423BF5B8125A50("amb@world_human_smoking@female@idle_a");
				unk_0x523BCC9DC80CD82F(joaat("prop_phone_ing"));
				if (((((unk_0xB87F6CF6E5628C67(joaat("prop_phone_ing")) && unk_0xB4AE0788C1587752("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0xB4AE0788C1587752("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0xB4AE0788C1587752("amb@world_human_stand_mobile@female@standing@call@exit")) && unk_0xB4AE0788C1587752("amb@world_human_smoking@female@enter")) && unk_0xB4AE0788C1587752("amb@world_human_smoking@female@idle_a"))
				{
					iLocal_37 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_37 = 3;
				}
				break;
			
			case 3:
				func_33();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	if (!unk_0x437347B10A200C4B(iLocal_38, 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iLocal_38, true) };
	}
	else
	{
		vVar1 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((SYSTEM::VDIST2(vVar0, vVar1) > 10000f || unk_0x437347B10A200C4B(iLocal_38, 0)) || func_4())
	{
		if (SYSTEM::VDIST2(vVar0, vVar1) > 10000f)
		{
		}
		if (unk_0x437347B10A200C4B(iLocal_38, 0))
		{
		}
		if (func_4())
		{
		}
		return 1;
	}
	switch (iLocal_40)
	{
		case 0:
			if (unk_0xC844350D5D58C99A(iLocal_38) && !unk_0x437347B10A200C4B(iLocal_38, 0))
			{
				if (unk_0x5A91F08DF773C39D(iLocal_38, vLocal_49, 1f, 1f, 1f, false, true, 0))
				{
					unk_0xF82EA857DA10E0CD(&iVar2);
					unk_0xDD353D0E9C789D0E(&iVar2);
					unk_0xE655C47E46F9A7E4(0, fLocal_50, 0);
					unk_0xC6EB89C59F2AF6B8(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, 4294967295, 0, 0, 0, 0, 0);
					unk_0xC6EB89C59F2AF6B8(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, 4294967295, 1, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(iVar2);
					unk_0x78ADC381772E3D54(iLocal_38, iVar2);
					unk_0xF82EA857DA10E0CD(&iVar2);
					iLocal_40 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xC844350D5D58C99A(iLocal_38) && !unk_0x437347B10A200C4B(iLocal_38, 0))
			{
				if (unk_0x4F1B602325013CC2(iLocal_38) == 1)
				{
					if (!unk_0xC844350D5D58C99A(iLocal_39))
					{
						if (unk_0xB4ECF989E2C1DAC8(iLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar3 = unk_0x8CA9406E01C7EE58(iLocal_38, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar3 >= 0.157f)
							{
								iLocal_39 = unk_0x7707E48765093646(joaat("prop_phone_ing"), 1f, 1f, 1f, true, true, false);
								unk_0x9F528B1B53FBC5D9(iLocal_39, iLocal_38, unk_0x4A089F2B762B8D33(iLocal_38, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (unk_0x4F1B602325013CC2(iLocal_38) == 2)
				{
					iVar4 = (unk_0x09AC81E49EA267F7(0, 65535) % 2);
					if (iVar4 == 0)
					{
						if (func_5(&uLocal_53, "TOWAUD", "TONYA_CALL1", 8, 0, 0, 0))
						{
							iLocal_40 = 2;
						}
					}
					else if (func_5(&uLocal_53, "TOWAUD", "TONYA_CALL2", 8, 0, 0, 0))
					{
						iLocal_40 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x437347B10A200C4B(iLocal_38, 0))
			{
				if (!func_3())
				{
					unk_0xF82EA857DA10E0CD(&iVar2);
					unk_0xDD353D0E9C789D0E(&iVar2);
					unk_0xC6EB89C59F2AF6B8(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, 4294967295, 0, 0, 0, 0, 0);
					unk_0x509B8296EBA9B408(0, "WORLD_HUMAN_SMOKING", 4294967295, 1);
					unk_0x75ABDC5F81978924(iVar2);
					unk_0x78ADC381772E3D54(iLocal_38, iVar2);
					unk_0xF82EA857DA10E0CD(&iVar2);
					iLocal_40 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (SYSTEM::VDIST2(vVar0, vVar1) < 25f)
			{
				if (unk_0xA4FD7964FEE91ED8(0) != 4)
				{
					if (func_5(&uLocal_53, "TOWAUD", "TONYA_MESS", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_40 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (SYSTEM::TIMERA() > 10000)
			{
				iLocal_40 = 3;
			}
			break;
	}
	return 0;
}

void func_2()
{
	if (unk_0xC844350D5D58C99A(iLocal_38) && !unk_0x437347B10A200C4B(iLocal_38, 0))
	{
		if (unk_0x4F1B602325013CC2(iLocal_38) == 1)
		{
			if (unk_0xC844350D5D58C99A(iLocal_39))
			{
				unk_0xF690C84DADBB3551(&iLocal_39);
				unk_0x0C8C0C840C2D1AD2(iLocal_38, unk_0x16F2683693E537C9(), 4294967295, 0, 2);
			}
		}
	}
	if (unk_0xC844350D5D58C99A(iLocal_38) && !unk_0x437347B10A200C4B(iLocal_38, 0))
	{
		if (unk_0xC844350D5D58C99A(iLocal_39))
		{
			if (unk_0xD1960163A3042274(iLocal_38, 993674639) == 1)
			{
				unk_0xF690C84DADBB3551(&iLocal_39);
			}
		}
	}
}

int func_3()
{
	if (Global_5145 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_4()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0) && !unk_0x437347B10A200C4B(iLocal_38, 0))
	{
		if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iLocal_38) || unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			if (unk_0xC844350D5D58C99A(iLocal_39))
			{
				unk_0x15AFB6CBDE990FB6(iLocal_39, 1, true);
			}
			unk_0x5CEB4DB888A62073(false);
			if (unk_0xD1960163A3042274(iLocal_38, 1805844857) != 1)
			{
				unk_0xFADC0A217229F6B5(iLocal_38, true);
				unk_0xF3268524E9BE6D6E(iLocal_38, unk_0x16F2683693E537C9(), 1000f, 4294967295, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_514C = 0;
	Global_514E = 0;
	Global_5153 = 0;
	Global_5524 = 0;
	Global_5526 = 0;
	Global_552A = 0;
	Global_280001 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
{
	Global_5146 = 0;
	if (Global_5145 == 0 || Global_5147 == 2)
	{
		if (Global_5145 != 0)
		{
			if (iParam1 > Global_5147)
			{
				if (Global_514C == 0)
				{
					unk_0x5CEB4DB888A62073(false);
					Global_4C1E.f_1 = 3;
					Global_5145 = 0;
					Global_5146 = 1;
					Global_517A = 0;
					Global_5141 = 0;
					Global_5142 = 0;
					Global_5150 = 0;
					Global_514F = 0;
					Global_4C1D = 0;
				}
				else
				{
					func_26();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_25(8, 4294967295))
		{
			return 0;
		}
		Global_5191 = { Global_518B };
		func_24();
		Global_4E7E = { Global_4F23 };
		Global_514B = Global_514C;
		Global_5152 = Global_5153;
		Global_280002 = Global_280001;
		Global_5154 = { Global_5164 };
		Global_514D = Global_514E;
		Global_5523 = Global_5524;
		Global_552B = { Global_5531 };
		Global_5525 = Global_5526;
		Global_5527 = Global_5528;
		Global_5529 = Global_552A;
		Global_4FC8.f_172 = Global_5522;
		Global_4FC8.f_170 = Global_5520;
		Global_4FC8.f_171 = Global_5521;
		Global_5141 = Global_5142;
		if (Global_514B)
		{
			unk_0x0674E58A79778E99(&Global_1CBC, 20);
			unk_0x0674E58A79778E99(&Global_1CBD, 17);
			unk_0x0674E58A79778E99(&Global_1CBE, 0);
			if (bParam2)
			{
				func_16();
				if (Global_1FE1[Global_4C1E /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_4C1E.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_4BFC == 1)
			{
				return 0;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_12B4E)
				{
					if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_14())
			{
				return 0;
			}
			else
			{
				switch (Global_4C1E.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0;
		func_12();
		func_7();
		return 1;
	}
	if (Global_5145 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_5147 || iParam1 == Global_5147)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_26();
	}
	return 0;
}

void func_7()
{
	if (!func_8())
	{
		return;
	}
	if (Global_514B)
	{
		MemCopy(&(Global_19FCC4.f_1), {Global_4FC8}, 4);
		Global_19FCC4 = Global_1A0F;
		Global_19FCC4.f_6 = Global_514F;
	}
}

int func_8()
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
	if (func_9(unk_0xD803B885F5E47A62()))
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

bool func_9(int iParam0)
{
	return func_10(iParam0, 20);
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_11()
{
	return 4294967295;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_4CD9[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(false);
	Global_5145 = 1;
}

void func_13()
{
	Global_517A = Global_5179;
	Global_5174 = Global_5175;
	Global_51A3 = { Global_5197 };
	Global_51A9 = { Global_519D };
	Global_517C = Global_517B;
	Global_51C1 = { Global_51AF };
	Global_51C7 = { Global_51B5 };
	Global_51CD = { Global_51BB };
	Global_51D3 = { Global_51D9 };
	Global_1A0F = Global_1A10;
	Global_1A11 = Global_1A12;
	Global_5150 = Global_5151;
	Global_5152 = Global_5153;
	Global_5154 = { Global_5164 };
	Global_5149 = Global_514A;
	Global_553D = 0;
	Global_5176 = 0;
	Global_5177 = 0;
	unk_0x0674E58A79778E99(&Global_1CBD, 16);
}

int func_14()
{
	if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	int iVar0;
	int iVar1;
	
	if (Global_12B4E)
	{
		iVar0 = 0;
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_16()
{
	if (func_23(14))
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
		Global_4C1E = func_17();
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

var func_17()
{
	func_18();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_18()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_21(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_20(unk_0x16F2683693E537C9());
			if (func_19(iVar0) && (!func_23(14) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_19(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return func_22(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_22(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

bool func_23(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_24()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_4E7E[iVar0 /*10*/] = 0;
		StringCopy(&(Global_4E7E[iVar0 /*10*/].f_1), "", 24);
		Global_4E7E[iVar0 /*10*/].f_7 = 0;
		Global_4E7E[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_4E7E.f_A1 = 4294967197;
	Global_4E7E.f_A2 = { 0f, 0f, 0f };
}

bool func_25(int iParam0, int iParam1)
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

void func_26()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0;
	if ((unk_0x1EE04CEA36EF313B() || Global_4C1E.f_1 == 9) || Global_4C1D == 1)
	{
		unk_0x5CEB4DB888A62073(false);
		Global_5145 = 6;
		Global_4C1E.f_1 = 3;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(true);
		Global_5145 = 6;
		return;
	}
}

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = uParam5;
	if (iParam3 == 0)
	{
		Global_5520 = 1;
		Global_551E = 0;
	}
	else
	{
		Global_5520 = 0;
		Global_551E = 1;
	}
	if (iParam4 == 0)
	{
		Global_5521 = 1;
		Global_551F = 0;
	}
	else
	{
		Global_5521 = 0;
		Global_551F = 1;
	}
}

int func_28()
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
	}
	unk_0xE51E576EA6B739AC(vVar0, fLocal_41, 1, 1, &iVar1, 0, 1, 4294967295);
	if (unk_0xC844350D5D58C99A(iVar1) && !unk_0x437347B10A200C4B(iVar1, 0))
	{
		iVar2 = unk_0x134B62B726CEC8E6(iVar1);
		if (iVar2 == joaat("ig_tonya"))
		{
			iLocal_38 = iVar1;
			unk_0x73270B3C9CC833FD(iLocal_38, true, 0);
			unk_0x6D80F1AEBA734886(iLocal_38, 0);
			unk_0x25C5402CC10F76CD(iLocal_38, false);
			unk_0x5F2AA9E2843E9403(iLocal_38, "TONYA");
			unk_0x6DF7BF67E86AAE86(iLocal_38, 1862763509);
			func_31(&uLocal_53, 3, iLocal_38, "TONYA", 1, 1);
			func_30();
			if (!func_29(vLocal_49))
			{
				if (unk_0xD1960163A3042274(iLocal_38, 713668775) != 1)
				{
					unk_0x96167B03C5A77156(iLocal_38, vLocal_49, 1f, 4294967295, 0.25f, 0, fLocal_50);
					unk_0xFADC0A217229F6B5(iLocal_38, true);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_29(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	vector3 vVar0;
	
	if (unk_0xC844350D5D58C99A(iLocal_38) && !unk_0x437347B10A200C4B(iLocal_38, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iLocal_38, true) };
		if (func_29(vLocal_49))
		{
			fLocal_51 = SYSTEM::VDIST(vVar0, vLocal_45);
			fLocal_52 = SYSTEM::VDIST(vVar0, vLocal_47);
			if (fLocal_51 < fLocal_52)
			{
				vLocal_49 = { vLocal_45 };
				fLocal_50 = fLocal_46;
			}
			else
			{
				vLocal_49 = { vLocal_47 };
				fLocal_50 = fLocal_48;
			}
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, true, 0))
				{
					vLocal_49 = { vLocal_47 };
					fLocal_50 = fLocal_48;
				}
			}
		}
	}
}

void func_31(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_12B4E)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA245D14CC59CDD36(iParam2, 0);
			}
			else
			{
				unk_0xA245D14CC59CDD36(iParam2, 1);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971EF1DE410C56CF(iParam2, 0);
			}
			else
			{
				unk_0x971EF1DE410C56CF(iParam2, 1);
			}
		}
	}
}

bool func_32(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == 4294967295)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iParam0], iParam1);
	return bVar0;
}

void func_33()
{
	unk_0x8D17794CE3273D70("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0x8D17794CE3273D70("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0x8D17794CE3273D70("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0x8D17794CE3273D70("amb@world_human_smoking@female@enter");
	unk_0x8D17794CE3273D70("amb@world_human_smoking@female@idle_a");
	unk_0x71199B01895C6202(joaat("prop_phone_ing"));
	if (unk_0xC844350D5D58C99A(iLocal_38))
	{
		if (unk_0x03068588A1FCED1A(iLocal_38))
		{
			unk_0xEBA53F35D0085654(&iLocal_38);
		}
		else
		{
			unk_0x6DAD7906B73F064D(&iLocal_38);
		}
	}
	unk_0x10FAF14A60A0DBE1();
}

