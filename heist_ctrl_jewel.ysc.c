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
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	struct<485> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
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
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
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
	iLocal_36 = 202;
	iLocal_37 = 201;
	iLocal_38 = 24;
	iLocal_39 = 202;
	iLocal_40 = 25;
	iLocal_43 = 4294967295;
	iLocal_45 = 4294967295;
	iLocal_254 = 4294967295;
	if (unk_0x2EBF608FFE6CA406(82))
	{
		func_243();
	}
	func_242(3);
	func_231(&(Local_46.f_1), func_241(Global_17235[1 /*19*/], Global_17235[2 /*19*/]));
	func_230(&Local_46, 0);
	while (!func_229(4))
	{
		if (!Global_12C5B)
		{
			if (!func_228(86) && !func_227(14))
			{
				func_216(&Local_46, 32f, 35f);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Local_46.f_1C1, 0))
			{
				func_214(&Local_46);
			}
			if (unk_0xEAE0D21A50E6C7F4(Local_46.f_1C1, 0))
			{
				if (func_213() == 86)
				{
					while (!func_214(&Local_46))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			func_211(&Local_46);
			func_202();
			func_153();
			if (func_151(0) || unk_0xEAE0D21A50E6C7F4(Local_46.f_1C1, 2))
			{
				func_67(&Local_46);
				func_4(&Local_46);
				func_3(&Local_46);
			}
		}
		if (unk_0x8A22C4C08282BF26(joaat("jewelry_heist")) > 0)
		{
			func_2();
		}
		SYSTEM::WAIT(0);
	}
	func_1(3);
	func_243();
}

int func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iVar0], iVar1))
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_2378.f_63.f_DB[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	
	if (Global_12C52)
	{
		return;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((1f + (1000f * SYSTEM::TIMESTEP())));
	Global_172F4.f_8 = (Global_172F4.f_8 + iVar0);
}

void func_3(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_17220, *uParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 1))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 15);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 16);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 14);
			unk_0x0674E58A79778E99(&Global_17220, *uParam0);
		}
	}
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_66(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_1D0 && !(iVar1 == 2 && uParam0->f_1D0 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_1D0 == 4))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 2))
		{
			func_5(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_1D0 = iVar1;
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != uParam0->f_1D0)
	{
		if (uParam0->f_2A8 == 0)
		{
			func_64(uParam0);
			uParam0->f_1D0 = iParam1;
			func_6(uParam0, iParam1, iParam2);
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			func_63(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 5);
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 4);
			break;
		
		case 1:
			func_63(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 5);
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 4);
			uParam0->f_1C4 = 4294967295;
			break;
		
		case 2:
			func_35(uParam0, uParam0->f_1A1, iParam2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 5);
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 4);
			uParam0->f_1C9 = unk_0x1C0640BA9A7327B3();
			break;
		
		case 3:
			func_17(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 5);
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 4);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 9);
			uParam0->f_1C9 = unk_0x1C0640BA9A7327B3();
			break;
		
		case 4:
			func_13(&(uParam0->f_1.f_6C[0 /*4*/]), 1);
			func_13(&(uParam0->f_1.f_6C[1 /*4*/]), 1);
			Global_1B416.f_1.f_6[*uParam0] = 1;
			unk_0xA37A90C62806D848(0);
			func_11(uParam0, 0);
			func_63(uParam0);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 5);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 4);
			uParam0->f_1C9 = unk_0x1C0640BA9A7327B3();
			break;
	}
	func_7(uParam0);
}

void func_7(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	
	sVar0 = unk_0xE32F7AC5E6DF304A(2, 13, true);
	sVar1 = unk_0xE32F7AC5E6DF304A(2, 11, true);
	sVar2 = unk_0xF59058FCB716F903(0, 32, true);
	sVar3 = unk_0xE32F7AC5E6DF304A(0, 1, true);
	sVar4 = unk_0xF59058FCB716F903(2, 201, true);
	sVar5 = unk_0xF59058FCB716F903(2, 202, true);
	if (unk_0x91E3F625EF57450D(2))
	{
		sVar0 = unk_0xE32F7AC5E6DF304A(2, 6, true);
		sVar1 = unk_0xE32F7AC5E6DF304A(2, 7, true);
		sVar2 = unk_0xE32F7AC5E6DF304A(0, 29, true);
	}
	bVar6 = func_10(1, *uParam0);
	unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_MAX_WIDTH");
	unk_0x7C19E5E4784BD7CF(0.6f);
	unk_0x7E60D21B163E9D56();
	switch (uParam0->f_1D0)
	{
		case 0:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 2))
			{
				if (bVar6)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(2);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_9(sVar5);
					func_8("PB_H_EXIT");
					unk_0x7E60D21B163E9D56();
				}
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1200CC973A2399C8(false);
				unk_0x7E60D21B163E9D56();
			}
			break;
		
		case 1:
			unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x1200CC973A2399C8(false);
			unk_0x7E60D21B163E9D56();
			break;
		
		case 2:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 2))
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
				unk_0x7E60D21B163E9D56();
				if (*uParam0 == 2)
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(2);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(3);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(2);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_9(sVar5);
					func_8("PB_H_UNDO");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0x7E60D21B163E9D56();
				}
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1200CC973A2399C8(false);
				unk_0x7E60D21B163E9D56();
			}
			break;
		
		case 3:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 2))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 9))
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(2);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					unk_0x7E60D21B163E9D56();
					unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					unk_0x7E60D21B163E9D56();
				}
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1200CC973A2399C8(false);
				unk_0x7E60D21B163E9D56();
			}
			break;
		
		case 4:
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 2))
			{
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(3);
				func_9(sVar2);
				func_8("PB_H_ZOOM");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(2);
				func_9(sVar3);
				func_8("PB_H_LOOK");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(1);
				func_9(sVar5);
				func_8("PB_H_UNDO");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(0);
				func_9(sVar4);
				func_8("PB_H_CONF");
				unk_0x7E60D21B163E9D56();
				unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				unk_0x1200CC973A2399C8(false);
				unk_0x7E60D21B163E9D56();
			}
			break;
	}
}

void func_8(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_9(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

bool func_10(int iParam0, int iParam1)
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

void func_11(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 18);
		if (((!func_12(&(uParam0->f_1.f_14[0 /*4*/])) && !func_12(&(uParam0->f_1.f_14[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_6C[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_6C[1 /*4*/])))
		{
			unk_0xA37A90C62806D848(0);
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&(uParam0->f_1C1), 18);
	}
}

bool func_12(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_13(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1AEC6 && iParam1)
	{
		if (func_12(sParam0) && !unk_0x79BBCD5833294FD5())
		{
			unk_0xA37A90C62806D848(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_1B416.f_4FB5[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_1B416.f_4FB5.f_91 - 2))
			{
				func_16(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_15((Global_1B416.f_4FB5.f_91 - 1));
			Global_1B416.f_4FB5.f_91 = (Global_1B416.f_4FB5.f_91 - 1);
			func_14();
			return;
		}
		iVar0++;
	}
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1B416.f_4FB5.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 0))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[0])
			{
				Global_1B416.f_4FB5.f_92[0] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 1))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[1])
			{
				Global_1B416.f_4FB5.f_92[1] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5[iVar0 /*16*/].f_B, 2))
		{
			if (Global_1B416.f_4FB5[iVar0 /*16*/].f_C > Global_1B416.f_4FB5.f_92[2])
			{
				Global_1B416.f_4FB5.f_92[2] = Global_1B416.f_4FB5[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_15(int iParam0)
{
	StringCopy(&(Global_1B416.f_4FB5[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_1B416.f_4FB5[iParam0 /*16*/].f_4), "", 16);
	Global_1B416.f_4FB5[iParam0 /*16*/].f_8 = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_9 = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_B = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_A = 4294967295;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_C = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_D = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_E = 0;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_F = 0;
}

void func_16(int iParam0, int iParam1)
{
	Global_1B416.f_4FB5[iParam0 /*16*/] = { Global_1B416.f_4FB5[iParam1 /*16*/] };
	Global_1B416.f_4FB5[iParam0 /*16*/].f_4 = { Global_1B416.f_4FB5[iParam1 /*16*/].f_4 };
	Global_1B416.f_4FB5[iParam0 /*16*/].f_8 = Global_1B416.f_4FB5[iParam1 /*16*/].f_8;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_A = Global_1B416.f_4FB5[iParam1 /*16*/].f_A;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_9 = Global_1B416.f_4FB5[iParam1 /*16*/].f_9;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_B = Global_1B416.f_4FB5[iParam1 /*16*/].f_B;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_C = Global_1B416.f_4FB5[iParam1 /*16*/].f_C;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_D = Global_1B416.f_4FB5[iParam1 /*16*/].f_D;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_E = Global_1B416.f_4FB5[iParam1 /*16*/].f_E;
	Global_1B416.f_4FB5[iParam0 /*16*/].f_F = Global_1B416.f_4FB5[iParam1 /*16*/].f_F;
}

void func_17(var uParam0)
{
	int iVar0;
	struct<2> Var1;
	
	func_34(uParam0);
	func_31(uParam0);
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_19F);
	unk_0x7E60D21B163E9D56();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(8);
			unk_0x7E60D21B163E9D56();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(9);
			unk_0x7E60D21B163E9D56();
		}
	}
	Var1 = (uParam0->f_1.f_10 + uParam0->f_1.f_12);
	Var1.f_1 = (uParam0->f_1.f_10.f_1 + uParam0->f_1.f_12.f_1);
	func_25(uParam0, &Var1, uParam0->f_1.f_A);
	func_23(uParam0, 1, 1);
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_18(var uParam0)
{
	int iVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 7))
	{
		if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 18))
		{
			switch (uParam0->f_1D0)
			{
				case 3:
					if (!Global_1B416.f_1[*uParam0])
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_14[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_14[0 /*4*/]), 3, 0, 4294967295, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_14[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_14[1 /*4*/]), 3, 1000, 4294967295, 10000, 7, 0, 0, 0);
						}
						Global_1B416.f_1[*uParam0] = 1;
					}
					else if (func_20() && !unk_0xFEBC1E4EC9E001F0())
					{
						if (((!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 11) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 10)) && !func_19()) && uParam0->f_1E3 == 0)
						{
							unk_0xB6A2CAEFEE28197D("PB_H_CHOICE");
							unk_0xBAB71DDCAEBC7FDD(0, 1, false, 4294967295);
						}
					}
					break;
				
				case 2:
					if (!Global_1B416.f_1.f_6[*uParam0])
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_6C[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_6C[0 /*4*/]), 3, 0, 4294967295, 10000, 7, 0, 0, 0);
						}
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_6C[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_6C[1 /*4*/]), 3, 1000, 4294967295, 10000, 7, 0, 0, 0);
						}
						Global_1B416.f_1.f_6[*uParam0] = 1;
					}
					else if (func_20() && !unk_0xFEBC1E4EC9E001F0())
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 10))
						{
							if ((!func_12("PB_H_GUNM") && !func_12("PB_H_HACK")) && !func_12("PB_H_DRIV"))
							{
								iVar0 = func_65(func_30(*uParam0));
								if (uParam0->f_1A1 < 5)
								{
									if (((!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 11) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 10)) && !func_19()) && uParam0->f_1E3 == 0)
									{
										switch (Global_17235[iVar0 /*19*/].f_1[uParam0->f_1A1])
										{
											case 1:
												unk_0xB6A2CAEFEE28197D("PB_H_GUNM");
												unk_0xBAB71DDCAEBC7FDD(0, 1, false, 4294967295);
												break;
											
											case 2:
												unk_0xB6A2CAEFEE28197D("PB_H_HACK");
												unk_0xBAB71DDCAEBC7FDD(0, 1, false, 4294967295);
												break;
											
											case 3:
												unk_0xB6A2CAEFEE28197D("PB_H_DRIV");
												unk_0xBAB71DDCAEBC7FDD(0, 1, false, 4294967295);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

int func_19()
{
	if (Global_5145 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	if (Global_1B416.f_4FB5.f_91 > 0)
	{
		return 0;
	}
	return 1;
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != 4294967295)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != 4294967295)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_1B416.f_4FB5[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_1B416.f_4FB5.f_91 < 9)
	{
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_4), sParam1, 16);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_9 = iParam5;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_B = iParam6;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_C = uParam2;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_D = iParam7;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_E = iParam8;
		Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 4294967295)
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_1B416.f_4FB5[Global_1B416.f_4FB5.f_91 /*16*/].f_A = 4294967295;
		}
		Global_1B416.f_4FB5.f_91++;
		func_14();
	}
}

void func_23(var uParam0, int iParam1, int iParam2)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1.f_12F, iParam1))
	{
		if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_118[iParam1 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_118[iParam1 /*2*/], iParam2);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1.f_12F), iParam1);
		}
	}
}

void func_24(var uParam0, struct<2> Param1, struct<2> Param2, int iParam3)
{
	if (uParam0->f_1E3 == 3)
	{
		return;
	}
	if (!unk_0xEA6BC48857E0AC4C(&Param2))
	{
		uParam0->f_1D3[uParam0->f_1E3 /*5*/] = { Param1 };
		uParam0->f_1D3[uParam0->f_1E3 /*5*/].f_2 = { Param2 };
		uParam0->f_1D3[uParam0->f_1E3 /*5*/].f_4 = iParam3;
		uParam0->f_1E3++;
	}
}

void func_25(var uParam0, var uParam1, float fParam2)
{
	vector3 vVar0;
	
	uParam0->f_19B = *uParam1;
	uParam0->f_19B.f_1 = uParam1->f_1;
	uParam0->f_1C6 = unk_0x1C0640BA9A7327B3() + 1000;
	vVar0 = { func_27(uParam0, &(uParam0->f_19B)) };
	func_26(&(uParam0->f_289), vVar0, fParam2);
}

void func_26(var uParam0, vector3 vParam1, float fParam2)
{
	uParam0->f_B = { vParam1 };
	if (fParam2 != -1f)
	{
		uParam0->f_7 = fParam2;
	}
}

Vector3 func_27(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_194;
	vVar7 = { uParam0->f_191 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	fVar8 = fVar4;
	fVar9 = unk_0x10FCEF75D66B7A3B((fVar8 / uParam0->f_1.f_8));
	fVar10 = (uParam0->f_191.f_2 - uParam0->f_289.f_1.f_2);
	fVar11 = (vVar7.z - uParam0->f_289.f_1.f_2);
	fVar12 = (fVar11 - fVar10);
	fVar13 = unk_0x10FCEF75D66B7A3B((fVar12 / uParam0->f_1.f_8));
	fVar14 = ((fVar9 * 3f) / 18f);
	return (fVar13 * 0.95f), fVar14, (-fVar9 * 0.85f);
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (SYSTEM::TO_FLOAT(*uParam1) / SYSTEM::TO_FLOAT(iVar0));
	*uParam3 = (SYSTEM::TO_FLOAT(uParam1->f_1) / SYSTEM::TO_FLOAT(iVar1));
}

int func_29(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				
				case 1:
					return 7;
					break;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 9;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_31(var uParam0)
{
	int iVar0;
	
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "CREATE_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_19F);
	unk_0x3CAEA85DA607305E(1);
	unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_10));
	unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_10.f_1));
	unk_0x7E60D21B163E9D56();
	func_33(uParam0);
	switch (*uParam0)
	{
		case 0:
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(2);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(1);
			unk_0x3CAEA85DA607305E(1);
			unk_0x7E60D21B163E9D56();
			break;
		
		case 1:
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(3);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(1);
			unk_0x3CAEA85DA607305E(4);
			unk_0x7E60D21B163E9D56();
			break;
		
		case 3:
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(6);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(1);
			unk_0x3CAEA85DA607305E(7);
			unk_0x7E60D21B163E9D56();
			break;
		
		case 4:
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(0);
			unk_0x3CAEA85DA607305E(8);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F);
			unk_0x3CAEA85DA607305E(1);
			unk_0x3CAEA85DA607305E(9);
			unk_0x7E60D21B163E9D56();
			break;
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "DISPLAY_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_19F);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_19F);
	unk_0x1200CC973A2399C8(func_32(*uParam0, uParam0->f_1.f_1D));
	unk_0x7E60D21B163E9D56();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
		unk_0x3CAEA85DA607305E(uParam0->f_19F);
		unk_0x7E60D21B163E9D56();
		if (iVar0 == func_29(*uParam0, 0))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(8);
			unk_0x7E60D21B163E9D56();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(9);
			unk_0x7E60D21B163E9D56();
		}
		unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
		unk_0x3CAEA85DA607305E(99);
		unk_0x7E60D21B163E9D56();
	}
}

bool func_32(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_78[iParam0], iParam1);
}

void func_33(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_LABELS");
	func_8("H_CRW_NAME");
	func_8("H_CRW_TYPE");
	func_8("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_JWL");
			break;
		
		case 1:
			func_8("H_LBL_DOC");
			break;
		
		case 2:
			func_8("H_LBL_RUR");
			break;
		
		case 3:
			func_8("H_LBL_AGN");
			break;
		
		case 4:
			func_8("H_LBL_FA");
			func_8("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_8("H_LBL_CRW");
	}
	func_8("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_8("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_J1");
			func_8("H_LBL_J2");
			func_8("H_LBL_J3");
			func_8("H_LBL_J4");
			func_8("HC_J_IMPACT");
			func_8("HC_J_STEALTH");
			break;
		
		case 1:
			func_8("HC_D_BLOW_UP");
			func_8("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_8("H_LBL_R1");
			func_8("H_LBL_R2");
			func_8("H_LBL_R3");
			func_8("H_LBL_R4");
			func_8("H_LBL_R5");
			func_8("H_LBL_R6");
			func_8("H_LBL_R7");
			func_8("H_LBL_R8");
			func_8("H_LBL_R9");
			func_8("H_LBL_R10");
			func_8("H_LBL_R11");
			func_8("H_LBL_R12");
			break;
		
		case 3:
			func_8("H_LBL_A1");
			func_8("H_LBL_A2");
			func_8("H_LBL_A3");
			func_8("H_LBL_A4");
			func_8("H_LBL_A5");
			func_8("HC_A_FIRETRUCK");
			func_8("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_8("H_LBL_F1");
			func_8("H_LBL_F2");
			func_8("H_LBL_F3");
			func_8("H_LBL_F4");
			func_8("H_LBL_F5");
			func_8("HC_F_TRAFFCONT");
			func_8("HC_F_HELI");
			break;
	}
	unk_0x7E60D21B163E9D56();
}

void func_34(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(uParam0->f_19F);
	unk_0x7E60D21B163E9D56();
}

void func_35(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_60)
	{
		return;
	}
	func_23(uParam0, 2, 1);
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = Global_17235[iVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_62(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_62(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_62(uParam0, iVar0, 2);
			break;
	}
	func_61(uParam0, uParam0->f_1A1);
	func_36(uParam0, uParam0->f_1A1);
	uParam0->f_1C2 = iParam1;
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x1200CC973A2399C8(true);
	unk_0x7E60D21B163E9D56();
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
	func_25(uParam0, &(uParam0->f_1.f_61[iParam1 /*2*/]), uParam0->f_1.f_A);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_1A2[iVar2] != iParam2)
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
			unk_0x3CAEA85DA607305E(9);
			unk_0x7E60D21B163E9D56();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_36(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_30(*uParam0);
	iVar1 = func_65(iVar0);
	iVar2 = Global_17235[iVar1 /*19*/].f_1[iParam1];
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "CREATE_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x3CAEA85DA607305E(0);
	unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_61[iParam1 /*2*/]));
	unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_61[iParam1 /*2*/].f_1));
	unk_0x7E60D21B163E9D56();
	func_33(uParam0);
	iVar3 = 0;
	if (Global_1B416.f_1.f_C[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_1B416.f_1.f_C[iVar1 /*6*/][iParam1];
		func_41(uParam0->f_19D, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_40(iVar6) == iVar2)
			{
				if (func_39(iVar6))
				{
					if (!func_38(iVar6))
					{
						if (!func_37(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_41(uParam0->f_19D, iVar6, iParam1, iVar3, iVar5);
								uParam0->f_1A2[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_1B416.f_1.f_C[iVar1 /*6*/][iParam1] != 0)
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x1200CC973A2399C8(true);
		unk_0x7E60D21B163E9D56();
	}
	else
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
		unk_0x3CAEA85DA607305E(iParam1);
		unk_0x1200CC973A2399C8(false);
		unk_0x7E60D21B163E9D56();
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "DISPLAY_VIEW");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

int func_37(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_1A1)
	{
		if (Global_1B416.f_1.f_C[iVar0 /*6*/][iVar1] == iParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_38(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_76, iParam0);
}

bool func_39(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_74, iParam0);
}

int func_40(int iParam0)
{
	return Global_1719B[iParam0 /*5*/];
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x7E60C62A7CE58FC8(iParam0, "SET_DATA_SLOT");
	unk_0x3CAEA85DA607305E(iParam2);
	unk_0x3CAEA85DA607305E(iParam3);
	unk_0x3CAEA85DA607305E(iParam4);
	func_8(func_59(iParam1));
	func_8(func_58(iParam1));
	switch (func_40(iParam1))
	{
		case 1:
			func_8(func_57(0));
			unk_0x3CAEA85DA607305E(func_54(iParam1, 0));
			func_8(func_57(1));
			unk_0x3CAEA85DA607305E(func_54(iParam1, 1));
			func_8(func_57(2));
			unk_0x3CAEA85DA607305E(func_54(iParam1, 2));
			func_8(func_57(3));
			unk_0x3CAEA85DA607305E(func_54(iParam1, 3));
			break;
		
		case 2:
			func_8(func_53(0));
			unk_0x3CAEA85DA607305E(func_50(iParam1, 0));
			func_8(func_53(1));
			unk_0x3CAEA85DA607305E(func_50(iParam1, 1));
			func_8(func_53(2));
			unk_0x3CAEA85DA607305E(func_50(iParam1, 2));
			break;
		
		case 3:
			func_8(func_48(0));
			unk_0x3CAEA85DA607305E(func_43(iParam1, 0));
			func_8(func_48(1));
			unk_0x3CAEA85DA607305E(func_43(iParam1, 1));
			func_8(func_48(2));
			unk_0x3CAEA85DA607305E(func_43(iParam1, 2));
			break;
	}
	func_8("H_CRW_CUT");
	unk_0x3CAEA85DA607305E(func_42(iParam1));
	unk_0x7E60D21B163E9D56();
}

var func_42(int iParam0)
{
	return Global_1719B[iParam0 /*5*/].f_1;
}

int func_43(int iParam0, int iParam1)
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_45(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_44(iParam1))) * 100f));
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 3)
	{
		return 4294967295;
	}
	return func_46(iParam0, iParam1);
}

int func_46(int iParam0, int iParam1)
{
	return func_47(iParam1, Global_1B416.f_1.f_49[iParam0 /*3*/].f_1, Global_1B416.f_1.f_49[iParam0 /*3*/].f_2);
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return SYSTEM::SHIFT_RIGHT(iParam1, (15 * iParam0)) & 32767;
			break;
		
		case 2:
		case 3:
			return SYSTEM::SHIFT_RIGHT(iParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return 4294967295;
}

char* func_48(int iParam0)
{
	return func_49(3, iParam0);
}

char* func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
					break;
				
				case 1:
					return "HC_STA_G2";
					break;
				
				case 2:
					return "HC_STA_G3";
					break;
				
				case 3:
					return "HC_STA_G4";
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
					break;
				
				case 1:
					return "HC_STA_H2";
					break;
				
				case 2:
					return "HC_STA_H3";
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
					break;
				
				case 1:
					return "HC_STA_D2";
					break;
				
				case 2:
					return "HC_STA_D3";
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_50(int iParam0, int iParam1)
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_52(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_51(iParam1))) * 100f));
}

int func_51(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 2)
	{
		return 4294967295;
	}
	return func_46(iParam0, iParam1);
}

char* func_53(int iParam0)
{
	return func_49(2, iParam0);
}

int func_54(int iParam0, int iParam1)
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_56(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_55(iParam1))) * 100f));
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	if (func_40(iParam0) != 1)
	{
		return 4294967295;
	}
	return func_46(iParam0, iParam1);
}

char* func_57(int iParam0)
{
	return func_49(1, iParam0);
}

char* func_58(int iParam0)
{
	switch (Global_1719B[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G";
			break;
		
		case 2:
			return "HC_TYPE_H";
			break;
		
		case 3:
			return "HC_TYPE_D";
			break;
	}
	return "ERROR!";
}

char* func_59(int iParam0)
{
	return func_60(iParam0);
}

char* func_60(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

void func_61(var uParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(iParam1);
	unk_0x7E60D21B163E9D56();
}

void func_62(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_17235[iParam1 /*19*/].f_12, iParam2))
	{
		if (!unk_0x7F8A39872A07D2CE(&(Global_17235[iParam1 /*19*/].f_7[iParam2 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_114, Global_17235[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
			unk_0x5D96D8530B3D0904(&(Global_17235[iParam1 /*19*/].f_12), iParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_17235[iParam1 /*19*/].f_7[iParam2 /*2*/]), &(Global_17235[iVar0 /*19*/].f_7[iParam2 /*2*/])))
				{
					unk_0x5D96D8530B3D0904(&(Global_17235[iVar0 /*19*/].f_12), iParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_63(var uParam0)
{
	func_25(uParam0, &(uParam0->f_1.f_C), 45f);
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(99);
	unk_0x7E60D21B163E9D56();
	func_18(uParam0);
}

void func_64(var uParam0)
{
	switch (uParam0->f_1D0)
	{
		case 1:
		case 2:
		case 3:
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
			unk_0x3CAEA85DA607305E(99);
			unk_0x7E60D21B163E9D56();
			break;
	}
	unk_0xA37A90C62806D848(0);
}

int func_65(int iParam0)
{
	if (iParam0 == 13 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_1B416.f_2378.f_63.f_CD[iParam0];
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 5;
			break;
		
		case 4:
			return 6;
			break;
	}
	return 4294967295;
}

void func_67(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 1))
	{
		func_68(uParam0);
	}
}

void func_68(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 2))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!func_150(0))
			{
				if (func_141(8))
				{
					if (SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), uParam0->f_191) < 4f)
					{
						vVar1 = { uParam0->f_191 - unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
						fVar2 = unk_0xE7D606C557C86100(vVar1.x, vVar1.y);
						fVar3 = unk_0x755FF954DAE327E1((uParam0->f_194 - fVar2));
						if (fVar3 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar4 = uParam0->f_194;
							if (fVar4 > 180f)
							{
								fVar4 = (fVar4 - 360f);
							}
							else if (fVar4 < -180f)
							{
								fVar4 = (fVar4 + 360f);
							}
							if ((fVar4 - fVar2) < fVar3)
							{
								fVar3 = unk_0x755FF954DAE327E1((fVar4 - fVar2));
							}
							if (fVar3 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar2 > 180f)
								{
									fVar2 = (fVar2 - 360f);
								}
								else if (fVar2 < -180f)
								{
									fVar2 = (fVar2 + 360f);
								}
								if ((uParam0->f_194 - fVar2) < fVar3)
								{
									fVar3 = unk_0x755FF954DAE327E1((uParam0->f_194 - fVar2));
								}
								if (fVar3 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar4 - fVar2) < fVar3)
									{
										fVar3 = unk_0x755FF954DAE327E1((fVar4 - fVar2));
									}
									if (fVar3 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_1C3 == 4294967295)
			{
				func_140(&(uParam0->f_1C3), 3, "PB_H_ENT", 0, 0, 0, 0);
			}
			else if (func_139(uParam0->f_1C3, 1))
			{
				func_137(&(uParam0->f_1C3));
				func_123(uParam0);
			}
		}
		else if (uParam0->f_1C3 != 4294967295)
		{
			func_137(&(uParam0->f_1C3));
		}
	}
	else
	{
		bVar5 = func_10(1, *uParam0);
		func_79(uParam0);
		if (((!bVar5 && uParam0->f_1C5 > 15) && (unk_0xBFC0798A6E3417F9(2, iLocal_36) || unk_0xBFC0798A6E3417F9(2, 238))) || unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 8))
		{
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 8);
			func_69(uParam0, 0);
		}
	}
}

void func_69(var uParam0, bool bParam1)
{
	vector3 vVar0;
	int iVar1;
	
	uParam0->f_1C5 = 0;
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), false);
		if (!bParam1)
		{
			vVar0 = { uParam0->f_191 };
			vVar0 = { vVar0 + Vector(0f, (1f * SYSTEM::COS((180f - uParam0->f_194))), (1f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			unk_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), uParam0->f_194);
			unk_0x2FB9A57162E54BAB(0f);
			unk_0xEF6276132B396452(0f, 1065353216);
			unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 2423432979, false, 0, 0);
			unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 1, 0);
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 134);
	}
	unk_0xBFE31971E49FA500(true);
	func_72(0);
	func_71();
	unk_0x17D339215F817B98();
	unk_0xA5E3ADAAA4CD5D6C(17);
	unk_0x911B98CDC647AC76(false);
	func_70(&(uParam0->f_289), 0, 1);
	func_13(&(uParam0->f_1.f_14[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_14[1 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_6C[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_6C[1 /*4*/]), 1);
	unk_0xA37A90C62806D848(1);
	while (unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(1);
		SYSTEM::WAIT(0);
	}
	iVar1 = unk_0xFBD08BECC9B87937(uParam0->f_191);
	if (iVar1 != 0)
	{
		unk_0x25BB71BA267FE042(iVar1);
	}
	unk_0x5372553242EA2414();
	func_64(uParam0);
	unk_0x0674E58A79778E99(&(uParam0->f_1C1), 7);
	unk_0x0674E58A79778E99(&(uParam0->f_1C1), 2);
	Global_1721F = 0;
}

void func_70(var uParam0, int iParam1, bool bParam2)
{
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (bParam2)
		{
			unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, iParam1, 0);
		}
		if (unk_0xFBB4F23D534EB790(*uParam0))
		{
			unk_0xE3BB8E05FCEB3FBE(*uParam0, false);
		}
		unk_0x9A8DDC7C522F5BF5(*uParam0, iParam1);
	}
	if (uParam0->f_17)
	{
		unk_0xF737A3AD8873CE16();
		uParam0->f_17 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
}

void func_71()
{
	Global_56C3.f_5 = 0;
}

void func_72(bool bParam0)
{
	if (bParam0)
	{
		func_78();
		if (Global_4C1E.f_1 == 10 || Global_4C1E.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 16);
		}
		Global_4C1E.f_1 = 1;
		if (func_150(0))
		{
			func_73(0);
		}
	}
	else if (Global_4C1E.f_1 == 1)
	{
		if (!Global_4C1E.f_1 == 0)
		{
			Global_4C1E.f_1 = 3;
		}
	}
}

void func_73(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_76())
		{
			func_75(1, 1);
		}
		else
		{
			func_75(0, 0);
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
	if (!func_74())
	{
		Global_4C1E.f_1 = 3;
	}
}

int func_74()
{
	if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_150(0))
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

bool func_76()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 5);
}

bool func_77()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 19);
}

void func_78()
{
	if (Global_4C1E.f_1 == 9 || Global_4C1E.f_1 == 10)
	{
		Global_517A = 0;
		Global_5176 = 1;
	}
}

void func_79(var uParam0)
{
	char* sVar0;
	bool bVar1;
	vector3 vVar2;
	
	sVar0 = unk_0xE32F7AC5E6DF304A(0, 1, true);
	if (!unk_0x7F8A39872A07D2CE(sVar0, uParam0->f_1D2))
	{
		func_7(uParam0);
	}
	uParam0->f_1D2 = sVar0;
	func_121();
	func_109(uParam0);
	func_87(uParam0);
	if (uParam0->f_1D0 == 1)
	{
		func_84(uParam0);
	}
	if (func_20())
	{
		func_18(uParam0);
	}
	bVar1 = uParam0->f_1C6 > unk_0x1C0640BA9A7327B3();
	func_80(&(uParam0->f_289), unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 4), (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 5) && !bVar1), 1, 0, 1045220557, 1, 1065353216, 0);
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 7))
	{
		if ((!unk_0x22A8E52414415B76() && unk_0x0F1CCD77290EE12F()) && !unk_0x798A3F1296751F46())
		{
			if (uParam0->f_1D0 != 1)
			{
				if (uParam0->f_1D0 == 0 || (((!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 11) && !unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 10)) && !func_19()) && uParam0->f_1E3 == 0))
				{
					if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 18) || uParam0->f_1D0 == 2)
					{
						unk_0x6567AE843FADBA94(uParam0->f_19E, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	unk_0xBFE31971E49FA500(false);
	unk_0x3584F71E5CA29322(2);
	unk_0x3584F71E5CA29322(1);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(3);
	unk_0xB8E3919889462ACD();
	unk_0xD02CE72B4B66DC29(82, 66);
	unk_0x744B56EE9DE7B57F(17, 0.612f, 0.818f);
	unk_0xD59EF13BB60323B9();
	if (!unk_0x22A8E52414415B76())
	{
		unk_0x558EC149EB2BC0A2(2, 201);
	}
	unk_0x558EC149EB2BC0A2(2, 202);
	unk_0x558EC149EB2BC0A2(2, 188);
	unk_0x558EC149EB2BC0A2(2, 187);
	unk_0x558EC149EB2BC0A2(2, 189);
	unk_0x558EC149EB2BC0A2(2, 190);
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 7))
	{
		if (!unk_0x22A8E52414415B76())
		{
			vVar2 = { uParam0->f_191 };
			vVar2 = { vVar2 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_194))), (2.9f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			unk_0xE82754C349C7B581(vVar2, &(vVar2.f_2), 0, 0);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 134);
			unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar2, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), uParam0->f_194);
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 7);
		}
	}
}

void func_80(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	
	unk_0xA2E3EDD0E119882F(2);
	func_83(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0x89DF0B812BA6383B())
	{
		iVar0[3] = (iVar0[3] * 4294967295);
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		fVar1 = unk_0x659FAE9DBE6F38F5(2, 239);
		fVar2 = unk_0x659FAE9DBE6F38F5(2, 240);
		fVar3 = (fVar1 - uParam0->f_1D);
		fVar4 = (fVar2 - uParam0->f_1E);
		uParam0->f_1D = fVar1;
		uParam0->f_1E = fVar2;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar3 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((unk_0x659FAE9DBE6F38F5(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((unk_0x659FAE9DBE6F38F5(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_82((iVar0[2] + uParam0->f_18), 4294967169, 127);
		iVar0[3] = func_82((iVar0[3] + uParam0->f_19), 4294967169, 127);
	}
	if (uParam0->f_18 == iVar0[2] && uParam0->f_19 == iVar0[3])
	{
		if (uParam0->f_1B < unk_0x1C0640BA9A7327B3())
		{
			uParam0->f_18 = 0;
			uParam0->f_19 = 0;
			if (unk_0x91E3F625EF57450D(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_1C = 1;
			}
		}
	}
	else
	{
		uParam0->f_18 = iVar0[2];
		uParam0->f_19 = iVar0[3];
		uParam0->f_1B = unk_0x1C0640BA9A7327B3() + 4000;
		uParam0->f_1C = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_14));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_16)) / IntToFloat(uParam0->f_14));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_15));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
	}
	fVar5 = (30f * SYSTEM::TIMESTEP());
	vVar6 = { uParam0->f_8 + uParam0->f_B };
	if ((unk_0x91E3F625EF57450D(2) && bParam2) && !uParam0->f_1C)
	{
		uParam0->f_E = vVar6.x;
		uParam0->f_E.f_1 = vVar6.y;
		uParam0->f_E.f_2 = vVar6.z;
	}
	else
	{
		uParam0->f_E = (uParam0->f_E + func_81(((((vVar6.x - uParam0->f_E) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_E.f_1 = (uParam0->f_E.f_1 + func_81(((((vVar6.y - uParam0->f_E.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_E.f_2 = (uParam0->f_E.f_2 + func_81(((((vVar6.z - uParam0->f_E.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_1A)
	{
		uParam0->f_E = func_81(uParam0->f_E, SYSTEM::TO_FLOAT(-uParam0->f_15), SYSTEM::TO_FLOAT(uParam0->f_15));
		uParam0->f_E.f_1 = func_81(uParam0->f_E.f_1, SYSTEM::TO_FLOAT(-uParam0->f_16), SYSTEM::TO_FLOAT(uParam0->f_16));
		uParam0->f_E.f_2 = func_81(uParam0->f_E.f_2, SYSTEM::TO_FLOAT(-uParam0->f_14), SYSTEM::TO_FLOAT(uParam0->f_14));
	}
	if (unk_0x91E3F625EF57450D(0) && bParam1)
	{
		if (uParam0->f_1C)
		{
			uParam0->f_11 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_11 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0x91E3F625EF57450D(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (unk_0xD245978525608929(0, iVar7))
			{
				uParam0->f_11 = (uParam0->f_11 - 5f);
				uParam0->f_1B = unk_0x1C0640BA9A7327B3() + 4000;
				uParam0->f_1C = 0;
			}
			else if (unk_0xD245978525608929(0, iVar8))
			{
				uParam0->f_11 = (uParam0->f_11 + 5f);
				uParam0->f_1B = unk_0x1C0640BA9A7327B3() + 4000;
				uParam0->f_1C = 0;
			}
			if (bParam3)
			{
				uParam0->f_11 = func_81(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), uParam0->f_7);
			}
			else
			{
				uParam0->f_11 = func_81(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), (uParam0->f_7 + uParam0->f_13));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0x0DED1C1B8250FA57(2, 207);
			iVar0[3] = unk_0x0DED1C1B8250FA57(2, 208);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[3]) > 127f)
				{
					uParam0->f_11 = (uParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (uParam0->f_13 / 2f)))));
				}
			}
			else
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
				uParam0->f_11 = (uParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * uParam0->f_13))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
			}
		}
		else
		{
			uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
		}
	}
	uParam0->f_12 = (uParam0->f_12 + (((uParam0->f_11 - uParam0->f_12) * 0.06f) * fVar5));
	unk_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_E, uParam0->f_12, 0, 1, 1, 2);
	if (unk_0x9F4FE516EAACCFC5(*uParam0))
	{
		if (unk_0xFBB4F23D534EB790(*uParam0))
		{
			if (unk_0x9CF8D5C7090408A2(*uParam0))
			{
				unk_0x9501364A300048C6();
			}
		}
	}
}

float func_81(float fParam0, float fParam1, float fParam2)
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

int func_82(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_83(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
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

void func_84(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_10(3, *uParam0))
	{
		if (uParam0->f_1E3 == 0 && uParam0->f_1C7 > 3)
		{
			if (uParam0->f_1C4 == 4294967295)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 19))
				{
					uParam0->f_1C4 = unk_0x1C0640BA9A7327B3() + 500;
				}
				else
				{
					uParam0->f_1C4 = unk_0x1C0640BA9A7327B3();
				}
			}
			else if (unk_0x1C0640BA9A7327B3() > uParam0->f_1C4)
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < uParam0->f_1.f_171)
				{
					if (!bVar0)
					{
						if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1.f_12F, iVar1 + 4))
						{
							func_86(uParam0, iVar1);
							if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1.f_172, iVar1))
							{
								unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 19);
							}
							else
							{
								unk_0x0674E58A79778E99(&(uParam0->f_1C1), 19);
							}
							bVar0 = true;
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_85(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_85(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == 4294967295)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_2378.f_63.f_DB[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_2378.f_63.f_DB[iParam0]), iParam1);
	}
}

void func_86(var uParam0, int iParam1)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
	unk_0x3CAEA85DA607305E(99);
	unk_0x7E60D21B163E9D56();
	func_25(uParam0, &(uParam0->f_1.f_173[iParam1 /*2*/]), uParam0->f_1.f_B);
	func_23(uParam0, iParam1 + 4, 1);
	uParam0->f_1C4 = 4294967295;
}

void func_87(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if ((!func_19() && unk_0x0F1CCD77290EE12F()) && !unk_0x22A8E52414415B76())
	{
		if (uParam0->f_1E3 > 0)
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 13))
			{
				if (func_88(&(uParam0->f_1E4), &(uParam0->f_1D3[0 /*5*/]), &(uParam0->f_1D3[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_1C7 = 0;
					if (uParam0->f_1D3[0 /*5*/].f_4)
					{
						unk_0x0674E58A79778E99(&(uParam0->f_1C1), 11);
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_1D3[iVar0 /*5*/] = { uParam0->f_1D3[iVar0 + 1 /*5*/] };
						uParam0->f_1D3[iVar0 /*5*/].f_2 = { uParam0->f_1D3[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_1D3[iVar0 /*5*/].f_4 = uParam0->f_1D3[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_1E3 = (uParam0->f_1E3 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_1D3[iVar1 /*5*/] = { uParam0->f_1D3[iVar1 + 1 /*5*/] };
					uParam0->f_1D3[iVar1 /*5*/].f_2 = { uParam0->f_1D3[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_1D3[iVar1 /*5*/].f_4 = uParam0->f_1D3[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_1E3 = (uParam0->f_1E3 - 1);
				unk_0x0674E58A79778E99(&(uParam0->f_1C1), 13);
				unk_0x0674E58A79778E99(&(uParam0->f_1C1), 11);
			}
		}
		else
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 11))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_1C1), 11);
			}
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 13))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_1C1), 13);
			}
			uParam0->f_1C7++;
		}
	}
}

bool func_88(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_108(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_89(sParam2, iParam3, 0);
}

int func_89(char* sParam0, int iParam1, bool bParam2)
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
					func_107();
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
		if (func_106(8, 4294967295))
		{
			return 0;
		}
		Global_5191 = { Global_518B };
		func_105();
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
				func_98();
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
				if (func_97())
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
			if (func_74())
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
			func_96();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0;
		func_95();
		func_90();
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
		func_107();
	}
	return 0;
}

void func_90()
{
	if (!func_91())
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

int func_91()
{
	if (!Global_40001.f_6DB6)
	{
		return 0;
	}
	if (!Global_12B4E)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_94())
	{
		return 0;
	}
	if (func_92(unk_0xD803B885F5E47A62()))
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

bool func_92(int iParam0)
{
	return func_93(iParam0, 20);
}

bool func_93(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_94()
{
	return 4294967295;
}

void func_95()
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

void func_96()
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

int func_97()
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

void func_98()
{
	if (func_227(14))
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
		Global_4C1E = func_99();
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

var func_99()
{
	func_100();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_100()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_103(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_102(unk_0x16F2683693E537C9());
			if (func_101(iVar0) && (!func_227(14) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_101(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_101(int iParam0)
{
	return iParam0 < 3;
}

int func_102(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_103(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_103(int iParam0)
{
	if (func_101(iParam0))
	{
		return func_104(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_104(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_105()
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

bool func_106(int iParam0, int iParam1)
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

void func_107()
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

void func_108(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_109(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
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
	
	uParam0->f_1C5++;
	if (unk_0xB8E3620B82AD47D7(2))
	{
		func_7(uParam0);
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 11))
	{
		if ((unk_0xBFC0798A6E3417F9(2, iLocal_37) || unk_0xBFC0798A6E3417F9(2, iLocal_39)) || (unk_0x91E3F625EF57450D(2) && (unk_0xBFC0798A6E3417F9(2, iLocal_38) || unk_0xBFC0798A6E3417F9(2, iLocal_40))))
		{
			func_119();
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 12))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 13);
				unk_0x0674E58A79778E99(&(uParam0->f_1C1), 11);
				unk_0x0674E58A79778E99(&(uParam0->f_1C1), 10);
			}
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 12);
		}
	}
	func_83(&(uParam0->f_1CA[0]), &(uParam0->f_1CA[1]), &(uParam0->f_1CA[2]), &(uParam0->f_1CA[3]), 0, 0);
	if (unk_0x91E3F625EF57450D(2))
	{
		uParam0->f_1CA[2] = (uParam0->f_1CA[2] / 10);
		uParam0->f_1CA[3] = (uParam0->f_1CA[3] / 10);
		uParam0->f_1CA[2] = func_82((uParam0->f_1CA[2] + uParam0->f_289.f_18), 4294967169, 127);
		uParam0->f_1CA[3] = func_82((uParam0->f_1CA[3] + uParam0->f_289.f_19), 4294967169, 127);
	}
	uParam0->f_289.f_18 = uParam0->f_1CA[2];
	uParam0->f_289.f_19 = uParam0->f_1CA[3];
	if (unk_0x89DF0B812BA6383B())
	{
		uParam0->f_1CA[3] = -uParam0->f_1CA[3];
	}
	if (uParam0->f_1C6 > unk_0x1C0640BA9A7327B3())
	{
		uParam0->f_1CA[2] = 0;
		uParam0->f_1CA[3] = 0;
	}
	if (uParam0->f_1D0 == 0 || uParam0->f_1D0 == 4)
	{
		if (uParam0->f_1C5 > 15)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 4);
		}
		else
		{
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 4);
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 10))
	{
		if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 11))
		{
			if ((unk_0x1C0640BA9A7327B3() - uParam0->f_1C8) > 200)
			{
				if ((uParam0->f_1D0 == 2 || uParam0->f_1D0 == 3) || uParam0->f_1D0 == 4)
				{
					if ((unk_0x1C0640BA9A7327B3() - uParam0->f_1C9) > 25000)
					{
						func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_118[3 /*2*/], 1);
						uParam0->f_1C9 = (unk_0x1C0640BA9A7327B3() + unk_0x09AC81E49EA267F7(0, 8000));
					}
				}
				if (uParam0->f_1D0 == 2)
				{
					if ((((uParam0->f_1CA[1] < 4294967211 || uParam0->f_1CA[0] < 4294967211) || unk_0x06F8112AA79C53D9(2, 188)) || unk_0x06F8112AA79C53D9(2, 189)) || (unk_0x91E3F625EF57450D(2) && unk_0xD245978525608929(2, 241)))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
						unk_0x3CAEA85DA607305E(8);
						unk_0x7E60D21B163E9D56();
						unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "GET_CURRENT_SELECTION");
						uParam0->f_2AA = unk_0x7A8BB56B212464AC();
						uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
					else if ((((uParam0->f_1CA[1] > 85 || uParam0->f_1CA[0] > 85) || unk_0x06F8112AA79C53D9(2, 187)) || unk_0x06F8112AA79C53D9(2, 190)) || (unk_0x91E3F625EF57450D(2) && unk_0xD245978525608929(0, 242)))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
						unk_0x3CAEA85DA607305E(9);
						unk_0x7E60D21B163E9D56();
						unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "GET_CURRENT_SELECTION");
						uParam0->f_2AA = unk_0x7A8BB56B212464AC();
						uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
				}
				if (uParam0->f_1D0 == 3)
				{
					if ((uParam0->f_1CA[1] < 4294967211 || unk_0x06F8112AA79C53D9(2, 188)) || (unk_0x91E3F625EF57450D(2) && unk_0xD245978525608929(0, 40)))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
						unk_0x3CAEA85DA607305E(8);
						unk_0x7E60D21B163E9D56();
						if (uParam0->f_1A0 != 0)
						{
							unk_0x4D7F4CC43D4D0DE3(4294967295, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_1A0 = 0;
						if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 9))
						{
							unk_0x0674E58A79778E99(&(uParam0->f_1C1), 9);
							func_7(uParam0);
						}
						uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
					else if ((uParam0->f_1CA[1] > 85 || unk_0x06F8112AA79C53D9(2, 187)) || (unk_0x91E3F625EF57450D(2) && unk_0xD245978525608929(0, 41)))
					{
						unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_INPUT_EVENT");
						unk_0x3CAEA85DA607305E(9);
						unk_0x7E60D21B163E9D56();
						if (uParam0->f_1A0 != 1)
						{
							unk_0x4D7F4CC43D4D0DE3(4294967295, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_1A0 = 1;
						if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 9))
						{
							unk_0x0674E58A79778E99(&(uParam0->f_1C1), 9);
							func_7(uParam0);
						}
						uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
				}
				if (!func_19() || unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 13))
				{
					if (unk_0xBFC0798A6E3417F9(2, iLocal_37) || (unk_0x91E3F625EF57450D(2) && unk_0xBFC0798A6E3417F9(2, iLocal_38)))
					{
						switch (uParam0->f_1D0)
						{
							case 3:
								if (!func_19())
								{
									if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 9))
									{
										uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
										iVar0 = func_30(*uParam0);
										if (iVar0 != 4294967295)
										{
											unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "GET_CURRENT_SELECTION");
											uParam0->f_2A8 = unk_0x7A8BB56B212464AC();
											func_11(uParam0, 1);
											func_13(&(uParam0->f_1.f_14[0 /*4*/]), 1);
											func_13(&(uParam0->f_1.f_14[1 /*4*/]), 1);
											Global_1B416.f_1[*uParam0] = 1;
											unk_0xA37A90C62806D848(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_10(4, *uParam0))
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									if (uParam0->f_1C2 < Global_17235[iVar1 /*19*/])
									{
										unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "GET_CURRENT_SELECTION");
										uParam0->f_2A9 = unk_0x7A8BB56B212464AC();
										func_11(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_85(4, *uParam0, 1);
									if (!func_118(0))
									{
										func_116(*uParam0);
									}
								}
								else
								{
									func_85(5, *uParam0, 1);
								}
								unk_0x4D7F4CC43D4D0DE3(4294967295, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_17235[iVar1 /*19*/])
								{
									if (Global_1B416.f_1.f_C[iVar1 /*6*/][iVar2] == 0 || func_40(Global_1B416.f_1.f_C[iVar1 /*6*/][iVar2]) != Global_17235[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												iVar3 = iVar5;
												if (iVar3 != 0)
												{
													if (Global_1719B[iVar3 /*5*/] != Global_17235[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_74, iVar3))
													{
														bVar4 = false;
													}
													if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_76, iVar3))
													{
														bVar4 = false;
													}
													if (iVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_37(uParam0, iVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_1B416.f_1.f_C[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_11(uParam0, 1);
								func_62(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_1AB = 0;
					}
					if (unk_0xBFC0798A6E3417F9(2, iLocal_39) || (unk_0x91E3F625EF57450D(2) && unk_0xBFC0798A6E3417F9(2, iLocal_40)))
					{
						switch (uParam0->f_1D0)
						{
							case 2:
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								if (uParam0->f_1C2 > 0)
								{
									func_11(uParam0, 1);
									uParam0->f_1C2 = (uParam0->f_1C2 - 1);
									uParam0->f_1A1 = uParam0->f_1C2;
									iVar6 = Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
									Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
									uParam0->f_1D1 = Global_17235[iVar1 /*19*/].f_1[uParam0->f_1C2];
									func_35(uParam0, uParam0->f_1C2, iVar6);
									unk_0x4D7F4CC43D4D0DE3(4294967295, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
									uParam0->f_1AB = 0;
									uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
								}
								else if (!func_229(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_60)
										{
											unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
											unk_0x3CAEA85DA607305E(iVar7);
											unk_0x7E60D21B163E9D56();
											unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
											unk_0x3CAEA85DA607305E(iVar7);
											unk_0x1200CC973A2399C8(true);
											unk_0x7E60D21B163E9D56();
											iVar7++;
										}
										unk_0x4D7F4CC43D4D0DE3(4294967295, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_1E[iVar7] != 13)
											{
												func_115(*uParam0, uParam0->f_1.f_1E[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_1AB = 0;
										func_11(uParam0, 1);
										uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
										uParam0->f_1D1 = 0;
										func_114(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									uParam0->f_1C2 = (uParam0->f_1C2 - 1);
									uParam0->f_1A1 = uParam0->f_1C2;
									iVar8 = Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
									Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
									uParam0->f_1D1 = Global_17235[iVar1 /*19*/].f_1[uParam0->f_1C2];
									func_5(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_1E[iVar9] != 13)
										{
											func_115(*uParam0, uParam0->f_1.f_1E[iVar9], 0);
										}
										iVar9++;
									}
									func_113(8, 0);
									func_85(5, 1, 0);
									uParam0->f_1AB = 0;
									func_11(uParam0, 1);
									uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
									func_5(uParam0, 3, 0);
								}
								unk_0x4D7F4CC43D4D0DE3(4294967295, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_1C7 > 5)
	{
		iVar0 = func_30(*uParam0);
		iVar1 = func_65(iVar0);
		if (uParam0->f_1C2 >= Global_17235[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_1C2 > uParam0->f_19F))
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
			unk_0x3CAEA85DA607305E(99);
			unk_0x3CAEA85DA607305E(4294967295);
			unk_0x7E60D21B163E9D56();
			func_23(uParam0, 0, 1);
			func_5(uParam0, 4, 0);
		}
		else
		{
			if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 17))
			{
				iVar10 = Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
				Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
				uParam0->f_1D1 = Global_17235[iVar1 /*19*/].f_1[uParam0->f_1C2];
				func_35(uParam0, uParam0->f_1C2, iVar10);
			}
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 17);
		}
		uParam0->f_1C9 = unk_0x1C0640BA9A7327B3();
		unk_0x0674E58A79778E99(&(uParam0->f_1C1), 10);
	}
	else if (unk_0xFEBC1E4EC9E001F0())
	{
		if (((!func_12(&(uParam0->f_1.f_6C[0 /*4*/])) && !func_12(&(uParam0->f_1.f_6C[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_14[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_14[1 /*4*/])))
		{
			unk_0xA37A90C62806D848(1);
		}
	}
	if (uParam0->f_2A8 != 0)
	{
		if (unk_0xC95D7AEEDEF4946B(uParam0->f_2A8))
		{
			iVar11 = unk_0xA52833FE33F41C53(uParam0->f_2A8);
			iVar1 = func_29(*uParam0, iVar11);
			iVar0 = func_30(*uParam0);
			func_113(iVar0, iVar1);
			if (!func_118(0))
			{
				func_112(*uParam0);
			}
			unk_0x4D7F4CC43D4D0DE3(4294967295, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_62(uParam0, iVar1, 0);
			if (uParam0->f_1.f_1E[iVar11] != 13)
			{
				func_115(*uParam0, uParam0->f_1.f_1E[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_60)
			{
				func_61(uParam0, iVar12);
				if (iVar12 < Global_17235[iVar1 /*19*/])
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
					unk_0x3CAEA85DA607305E(iVar12);
					unk_0x1200CC973A2399C8(true);
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
					unk_0x3CAEA85DA607305E(iVar12);
					unk_0x1200CC973A2399C8(false);
					unk_0x7E60D21B163E9D56();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_85(5, *uParam0, 1);
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 10);
				uParam0->f_1C2++;
			}
			unk_0xA37A90C62806D848(0);
			uParam0->f_2A8 = 0;
		}
	}
	if (uParam0->f_2A9 != 0)
	{
		if (unk_0xC95D7AEEDEF4946B(uParam0->f_2A9))
		{
			iVar13 = unk_0xA52833FE33F41C53(uParam0->f_2A9);
			iVar0 = func_30(*uParam0);
			iVar1 = func_65(iVar0);
			Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = uParam0->f_1A2[iVar13];
			iVar14 = Global_1B416.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "UPDATE_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_1C2);
			unk_0x3CAEA85DA607305E(iVar13);
			unk_0x3CAEA85DA607305E(iVar14);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "FOCUS_VIEW");
			unk_0x3CAEA85DA607305E(99);
			unk_0x7E60D21B163E9D56();
			unk_0x4D7F4CC43D4D0DE3(4294967295, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
			unk_0x0674E58A79778E99(&(uParam0->f_1C1), 17);
			func_111(uParam0, iVar14);
			uParam0->f_1C2++;
			uParam0->f_1A1 = uParam0->f_1C2;
			uParam0->f_1C8 = unk_0x1C0640BA9A7327B3();
			uParam0->f_1C9 = uParam0->f_1C8;
			unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 10);
			if (!func_12(&(uParam0->f_1.f_6C[0 /*4*/])) && !func_12(&(uParam0->f_1.f_6C[1 /*4*/])))
			{
				unk_0xA37A90C62806D848(0);
			}
			uParam0->f_2A9 = 0;
		}
	}
	if (uParam0->f_2AA != 0)
	{
		if (unk_0xC95D7AEEDEF4946B(uParam0->f_2AA))
		{
			iVar15 = unk_0xA52833FE33F41C53(uParam0->f_2AA);
			if (iVar15 != 4294967295)
			{
				iVar16 = uParam0->f_1A2[iVar15];
				if (iVar16 != uParam0->f_1AB)
				{
					unk_0x4D7F4CC43D4D0DE3(4294967295, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
				}
				uParam0->f_1AB = iVar16;
			}
			uParam0->f_2AA = 0;
		}
	}
	if (uParam0->f_1AB != 0)
	{
		func_110(uParam0, uParam0->f_1AB);
	}
}

void func_110(var uParam0, int iParam1)
{
	if (!func_19())
	{
		if (uParam0->f_1E3 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_77, 14))
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_130[14 /*2*/]), ""))
						{
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 10);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[14 /*2*/], 1);
							unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 14);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_77, 16))
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_130[16 /*2*/]), ""))
						{
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 10);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[16 /*2*/], 1);
							unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 16);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_77, 15))
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_130[15 /*2*/]), ""))
						{
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 10);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[15 /*2*/], 1);
							unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 15);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_77, 17))
					{
						if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_130[17 /*2*/]), ""))
						{
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 10);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[17 /*2*/], 1);
							unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 17);
							unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_111(var uParam0, int iParam1)
{
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1CF, iParam1))
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_77, iParam1))
		{
			if (!unk_0x7F8A39872A07D2CE(&(uParam0->f_1.f_130[iParam1 /*2*/]), ""))
			{
				func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[iParam1 /*2*/], 1);
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_77), iParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 1:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 1))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 12:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 3))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 6))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 7))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 7))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 1))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 8))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 8))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 4))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 2))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 5))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 12:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 15))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 3))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[25 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[24 /*2*/], 1);
								}
							}
							break;
						
						case 7:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 2))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 14))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[30 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[28 /*2*/], 1);
								}
							}
							else if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 14))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 18))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 6))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[27 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[26 /*2*/], 1);
								}
							}
							break;
						
						case 4:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 17))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 12))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 10))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 0))
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 7))
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 10:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 11))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 1))
								{
									if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 8))
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 3:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 13))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 19))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 4))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 8:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 16))
							{
								if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 5))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 13:
							if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_75, 20))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_1CF), iParam1);
	}
}

void func_112(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1B416.f_2378.f_63.f_CD[7];
			if (iVar0 == 1)
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_jewel_stealth"), true, 1);
			}
			else
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_jewel_stealth"), false, 1);
			}
			break;
		
		case 1:
			iVar0 = Global_1B416.f_2378.f_63.f_CD[8];
			if (iVar0 == 3)
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_docks_sink_ship"), true, 1);
			}
			else
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_docks_sink_ship"), false, 1);
			}
			break;
		
		case 3:
			iVar0 = Global_1B416.f_2378.f_63.f_CD[10];
			if (iVar0 == 6)
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_bureau_firecrew"), true, 1);
			}
			else
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_bureau_firecrew"), false, 1);
			}
			break;
		
		case 4:
			iVar0 = Global_1B416.f_2378.f_63.f_CD[11];
			if (iVar0 == 8)
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_bigs_traffic"), true, 1);
			}
			else
			{
				unk_0xD8B681091EBE4064(joaat("sp_heist_chose_bigs_traffic"), false, 1);
			}
			break;
	}
}

void func_113(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 == 4294967295)
	{
		return;
	}
	if (Global_1B416.f_2378.f_63.f_CD[iParam0] == iParam1)
	{
		return;
	}
	Global_1B416.f_2378.f_63.f_CD[iParam0] = iParam1;
}

void func_114(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return;
	}
	if (Global_1B416.f_2378.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_1B416.f_2378.f_63.f_3A[iParam0] = iParam1;
}

void func_115(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_78[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_78[iParam0]), iParam1);
	}
	unk_0x5D96D8530B3D0904(&Global_17220, iParam0);
}

void func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_117(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_1B416.f_2378.f_63.f_CD[7];
			iVar0 = 0;
			while (iVar0 < Global_17235[iVar1 /*19*/])
			{
				switch (Global_1B416.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 0);
						break;
					
					case 10:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 1);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 14);
						break;
					
					case 7:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 2);
						break;
					
					case 12:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 3);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 15);
						break;
					
					case 6:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 4);
						break;
					
					case 8:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 5);
						break;
					
					case 9:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 6);
						break;
				}
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_77), Global_1B416.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_1B416.f_2378.f_63.f_CD[9];
			iVar0 = 0;
			while (iVar0 < Global_17235[iVar1 /*19*/])
			{
				switch (Global_1B416.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 7);
						break;
					
					case 10:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 8);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 14);
						break;
					
					case 11:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 9);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 17);
						break;
				}
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_77), Global_1B416.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_1B416.f_2378.f_63.f_CD[10];
			iVar0 = 0;
			while (iVar0 < Global_17235[iVar1 /*19*/])
			{
				switch (Global_1B416.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 10);
						break;
					
					case 10:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 11);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 14);
						break;
					
					case 5:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 12);
						break;
					
					case 3:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 13);
						break;
					
					case 4:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 17);
						break;
					
					case 7:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 14);
						break;
					
					case 12:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 15);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 15);
						break;
					
					case 6:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 19);
						break;
					
					case 8:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 16);
						break;
					
					case 9:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 18);
						break;
					
					case 13:
						unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_75), 20);
						unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_77), 16);
						break;
				}
				unk_0x5D96D8530B3D0904(&(Global_1B416.f_1.f_77), Global_1B416.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 0);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 1);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 2);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 3);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 4);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 5);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 6);
			break;
		
		case 2:
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 7);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 8);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 9);
			break;
		
		case 3:
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 10);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 11);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 12);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 13);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 14);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 15);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 16);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 17);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 18);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 19);
			unk_0x0674E58A79778E99(&(Global_1B416.f_1.f_75), 20);
			break;
	}
}

bool func_118(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0);
}

void func_119()
{
	Global_4CD7 = 0;
	func_120();
}

void func_120()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_5145 = 6;
	}
}

void func_121()
{
	unk_0xC2127C0F64D6A3B9();
	func_122();
}

void func_122()
{
	Global_56C3.f_86 = 1;
}

void func_123(var uParam0)
{
	vector3 vVar0;
	int iVar1;
	
	uParam0->f_1C5 = 0;
	uParam0->f_1CF = 0;
	unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 9);
	func_11(uParam0, 0);
	if (!unk_0x22A8E52414415B76())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (Global_A664 == 1)
			{
				func_128(unk_0x16F2683693E537C9());
			}
			vVar0 = { uParam0->f_191 };
			vVar0 = { vVar0 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_194))), (2.9f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			unk_0xE82754C349C7B581(vVar0, &(vVar0.f_2), 0, 0);
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 134);
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar0, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), uParam0->f_194);
			unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
			unk_0x1E9649458B15960F(unk_0x16F2683693E537C9(), true);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 7);
	}
	unk_0xBFE31971E49FA500(false);
	func_72(1);
	func_127();
	unk_0x56FCE5C6DA4AA600();
	unk_0x536F1BE96C726C4B(uParam0->f_191, 5f, 1, 1, 0, false);
	unk_0xD7AD2803AD9697F7(uParam0->f_191, 5f);
	unk_0x911B98CDC647AC76(true);
	unk_0xD02CE72B4B66DC29(82, 66);
	unk_0x744B56EE9DE7B57F(17, 0.612f, 0.818f);
	unk_0xD59EF13BB60323B9();
	func_126(&(uParam0->f_289), uParam0->f_195, uParam0->f_198, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, 3212836864, 0);
	iVar1 = unk_0xFBD08BECC9B87937(uParam0->f_191);
	if (iVar1 != 0)
	{
		unk_0x0007C2367F4F23F3(iVar1);
	}
	unk_0xB8842F7C7761A196(&(Global_171E2[uParam0->f_1.f_1 /*15*/].f_7));
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x445BDC28669C33B9(unk_0xB1C09B89AED111A5(unk_0x16F2683693E537C9()));
	}
	func_125(0);
	func_124();
	unk_0x9CBC55A05A07FC47(0);
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_19E, "TOGGLE_MOUSE_BUTTONS");
		unk_0x1200CC973A2399C8(false);
		unk_0x7E60D21B163E9D56();
	}
	uParam0->f_1D2 = unk_0xE32F7AC5E6DF304A(2, 10, true);
	unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 2);
	Global_1721F = 1;
	func_6(uParam0, uParam0->f_1D0, 0);
}

void func_124()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		func_15(iVar0);
		iVar0++;
	}
	Global_1B416.f_4FB5.f_91 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1B416.f_4FB5.f_92[iVar0] = 0;
		iVar0++;
	}
	if (unk_0xFEBC1E4EC9E001F0())
	{
		unk_0xA37A90C62806D848(1);
	}
}

void func_125(bool bParam0)
{
	if (!bParam0)
	{
		Global_1AEC8 = unk_0x1C0640BA9A7327B3() + 250;
	}
	Global_1AEC5 = bParam0;
}

void func_126(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, float fParam10, bool bParam11)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = fParam3;
	uParam0->f_12 = fParam3;
	uParam0->f_17 = iParam8;
	uParam0->f_13 = uParam7;
	*uParam0 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", false);
	unk_0xE3BB8E05FCEB3FBE(*uParam0, true);
	unk_0x86F44313DFA8F00C(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		unk_0x91F5B0244AAE6222(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		unk_0xDC3CC6D1845B0567(*uParam0, fParam10);
	}
	if (uParam0->f_17)
	{
		unk_0x3B05E4399DC8490C(iParam9);
	}
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_1D = 0f;
	uParam0->f_1E = 0f;
	uParam0->f_1A = 0;
	uParam0->f_1C = 0;
	uParam0->f_1B = 0;
}

void func_127()
{
	Global_56C3.f_5 = 1;
}

void func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return;
	}
	iVar0 = func_136(iParam0);
	if (!iVar0 == 4294967295)
	{
		iVar1 = Global_A58F[iVar0 /*5*/];
		func_131(1, iVar1, 1);
		return;
	}
	iVar2 = func_130(iParam0);
	if (iVar2 == 4294967295)
	{
		return;
	}
	func_129(iVar2);
}

void func_129(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_A575[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_A575[iParam0 /*5*/].f_1 == unk_0x16F2683693E537C9())
		{
			Global_A662 = 0;
		}
	}
	Global_A575[iParam0 /*5*/] = 13;
	Global_A575[iParam0 /*5*/].f_1 = 0;
	Global_A575[iParam0 /*5*/].f_2 = 0;
	Global_A575[iParam0 /*5*/].f_3 = 0;
	Global_A575[iParam0 /*5*/].f_4 = 0;
	Global_A573 = (Global_A573 - 1);
	if (Global_A573 < 0)
	{
		Global_A573 = 0;
	}
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_A575[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_131(int iParam0, int iParam1, int iParam2)
{
	func_132(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_132(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (iParam1 == 4294967295)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_134(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_133();
	if (iVar0 == 4294967295)
	{
		return;
	}
	Global_A5E0[iVar0 /*6*/] = iParam0;
	Global_A5E0[iVar0 /*6*/].f_1 = iParam1;
	Global_A5E0[iVar0 /*6*/].f_2 = iParam2;
	Global_A5E0[iVar0 /*6*/].f_3 = iParam3;
	Global_A5E0[iVar0 /*6*/].f_4 = iParam4;
	Global_A5E0[iVar0 /*6*/].f_5 = iParam5;
}

int func_133()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_A5E0[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_134(int iParam0, int iParam1, int iParam2)
{
	if (func_135(iParam0, iParam1, iParam2) == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_135(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_A5E0[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_A5E0[iVar0 /*6*/])
			{
				if (iParam1 == Global_A5E0[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_136(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_A58F[iVar0 /*5*/] == 4294967295)
		{
			if (iParam0 == Global_A58F[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

void func_137(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = func_138(*uParam0);
	if (iVar0 == 4294967295)
	{
		*uParam0 = 4294967295;
		return;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/].f_7 = 1;
			*uParam0 = 4294967295;
			return;
		}
	}
	*uParam0 = 4294967295;
}

int func_138(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_A4A7[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_139(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_138(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0;
	}
	if (func_150(0))
	{
		return 0;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_A4A7[iVar0 /*32*/] == 1 && Global_A4A7[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_A4A7[iVar0 /*32*/].f_1D)
				{
					return 0;
				}
			}
			Global_A4A7[iVar0 /*32*/].f_5 = 1;
			Global_A4A7[iVar0 /*32*/].f_1D = 1;
			return 1;
		}
		else
		{
			if (Global_A4A7[iVar0 /*32*/] == 0)
			{
			}
			if (Global_A4A7[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_140(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == 4294967295)
		{
			func_137(uParam0);
		}
		return;
	}
	if (!*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/] = 1;
			Global_A4A7[iVar0 /*32*/].f_1 = Global_A570;
			Global_A570++;
			Global_A4A7[iVar0 /*32*/].f_4 = 0;
			Global_A4A7[iVar0 /*32*/].f_1D = 0;
			Global_A4A7[iVar0 /*32*/].f_5 = 0;
			Global_A4A7[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_A4A7[iVar0 /*32*/].f_8), sParam2, 16);
			Global_A4A7[iVar0 /*32*/].f_6 = iParam3;
			Global_A4A7[iVar0 /*32*/].f_1F = unk_0x0D0A574C76D769AC();
			Global_A4A7[iVar0 /*32*/].f_7 = 0;
			Global_A4A7[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_A4A7[iVar0 /*32*/].f_C = 1;
				StringCopy(&(Global_A4A7[iVar0 /*32*/].f_D), sParam4, 64);
				Global_A4A7[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0;
				Global_A4A7[iVar0 /*32*/].f_1E = 0;
			}
			*uParam0 = Global_A4A7[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_141(int iParam0)
{
	int iVar0;
	
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				iVar0 = func_99();
				if (!func_101(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_149()) || Global_1B05D) || Global_7832) || func_148()) || func_106(8, 4294967295)) || func_147()) || func_146()) || func_145()) || func_144()) || Global_1B416.f_1E03.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1) || func_149()) || Global_7832) || func_148()) || func_106(8, 4294967295)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_1B416.f_1E03.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x81A5359F25512A04(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_149()) || Global_1B05D) || Global_7832) || func_148()) || func_106(8, 4294967295)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_1B416.f_1E03.f_397[iVar0] == 5) || Global_A3FA != 4294967295)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0)) || func_149()) || Global_1B05D) || Global_7832) || func_148()) || func_106(8, 4294967295)) || func_147()) || func_146()) || func_144()) || Global_1B416.f_1E03.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_149() || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || func_106(8, 4294967295)) || func_144()) || func_143()) || Global_1B416.f_1E03.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_106(8, 4294967295) || func_147()) || func_146()) || func_143()) || func_142())
						{
							return 0;
						}
						if ((unk_0x991B1F0980C62628() && unk_0x19EC8D83154D7CC1() != 3) && unk_0x00A15D69BCAA5267() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
						{
							if ((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_149()) || Global_7832) || func_148()) || func_106(8, 4294967295)) || func_146()) || func_145()) || func_144()) || Global_1B416.f_1E03.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || func_149()) || func_146()) || Global_1B05D) || Global_7832) || func_148()) || Global_A664) || func_106(8, 4294967295)) || func_145()) || func_143()) || func_144()) || Global_1B416.f_1E03.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x4734A6196B611C3B(unk_0x16F2683693E537C9(), 0) || !unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) || !unk_0x093B8869A122CF27(unk_0xD803B885F5E47A62())) || !unk_0x0F1CCD77290EE12F()) || unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0)) || unk_0xE934758D273C899A(unk_0x16F2683693E537C9())) || unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 1)) || unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) || unk_0x92444005288A72ED(unk_0x16F2683693E537C9())) || unk_0x5EB102898326C705(unk_0x16F2683693E537C9())) || unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1)) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || func_149()) || Global_1B05D) || Global_7832) || func_148()) || func_106(8, 4294967295)) || func_145()) || func_143()) || func_147()) || func_146()) || func_144())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_142()
{
	return Global_181DF.f_1;
}

int func_143()
{
	if (Global_175B2 != 4294967295)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_15DBC[Global_175B2 /*34*/].f_F, 13);
	}
	return 0;
}

int func_144()
{
	if (unk_0x8A22C4C08282BF26(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	if (Global_12C52)
	{
		return 1;
	}
	else if (Global_F042 && !Global_F048)
	{
		return 1;
	}
	return 0;
}

bool func_146()
{
	return Global_181EC.f_15A > 0;
}

bool func_147()
{
	return Global_181EC.f_159 > 0;
}

var func_148()
{
	return Global_14086D;
}

int func_149()
{
	if (!unk_0x8CD06866876216F2())
	{
		return Global_177DE.f_2C == 1;
	}
	return 0;
}

int func_150(int iParam0)
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

bool func_151(int iParam0)
{
	return func_152(iParam0, Global_A1D7);
}

int func_152(int iParam0, int iParam1)
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

void func_153()
{
	int iVar0;
	vector3 vVar1;
	
	if (func_229(17))
	{
		if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 11))
		{
			unk_0xAE1670DD12E839C3("JH_1_MCS_4P2", 8);
			unk_0x92DCE5C81176D2B4("lesterHandler");
			unk_0xD7992BEF7A9D109E("JHS1AUD", 6);
			unk_0x5D96D8530B3D0904(&iLocal_41, 11);
		}
		else if (unk_0x75EECC9B0572F772())
		{
			unk_0xA2888AACD3C45CCA("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_229(18))
	{
		if (func_229(17))
		{
			if ((unk_0xA0F4292EA950943D("JH_1_MCS_4P2") && unk_0x1FBF08B001C4788A("lesterHandler")) && unk_0x67C1D9E5B91B2E37(6))
			{
				if (!unk_0x437347B10A200C4B(iLocal_245, 0))
				{
					unk_0x29E8331978B73E7F(iLocal_245, "Lester", 0, joaat("cs_lestercrest"), 0);
				}
				else
				{
					unk_0x29E8331978B73E7F(iLocal_245, "Lester", 2, joaat("cs_lestercrest"), 0);
				}
				if (unk_0xC844350D5D58C99A(iLocal_248))
				{
					if (unk_0xBDEB2DEEF1D23A18(iLocal_248))
					{
						unk_0x15AFB6CBDE990FB6(iLocal_248, 1, true);
					}
				}
				if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
				{
					unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "Michael", 0, joaat("player_zero"), 0);
				}
				if (unk_0xC844350D5D58C99A(iLocal_248))
				{
					unk_0x29E8331978B73E7F(iLocal_248, "WalkingStick_Lester", 1, joaat("prop_cs_walking_stick"), 0);
				}
				else
				{
					unk_0x29E8331978B73E7F(iLocal_248, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
				}
				unk_0x523BCC9DC80CD82F(joaat("prop_cs_walking_stick"));
				unk_0x523BCC9DC80CD82F(joaat("prop_laptop_lester2"));
				func_72(1);
				func_125(1);
				func_193(1, 1, 1, 0, 0, 0);
				iLocal_43 = 4294967295;
				unk_0x4C902758BEA97C68(0);
				if (func_118(0))
				{
					unk_0xFCA2A436FD40C153(0, 0, 0, 0);
				}
				func_114(17, 0);
			}
		}
		else if (unk_0x22A8E52414415B76())
		{
			func_121();
			if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 7))
			{
				if (unk_0xC844350D5D58C99A(iLocal_248))
				{
					unk_0x4A4806F9D471E491(iLocal_248, true, 0);
				}
				if (unk_0xC844350D5D58C99A(iLocal_246))
				{
					unk_0x4A4806F9D471E491(iLocal_246, true, 0);
				}
				if (unk_0xC844350D5D58C99A(iLocal_245))
				{
					unk_0x4A4806F9D471E491(iLocal_245, true, 0);
				}
				unk_0x0674E58A79778E99(&iLocal_41, 7);
			}
			if (unk_0x3148AE92ED70DC30("Lester", 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(iLocal_245))
				{
					iVar0 = iLocal_245;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &iVar0, 1, 1424);
					unk_0x5E8C29AE121DF1C7("lesterHandler");
					iLocal_255 = unk_0x1C0640BA9A7327B3();
					unk_0x5D96D8530B3D0904(&iLocal_41, 18);
				}
			}
			if (unk_0x3148AE92ED70DC30("Michael", 0))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					vVar1 = { 709.3766f, -964.2602f, 29.3954f };
					unk_0xE82754C349C7B581(vVar1, &(vVar1.f_2), 0, 0);
					if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
					{
						unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vVar1, 1, false, 0, 1);
						unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 261.7831f);
						if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
						{
							unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 1f, 2000, 0, 1, 0);
						}
						unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), 3626484699, false, 0, 0);
					}
					unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
				}
			}
			if (unk_0xEABED1927EFB48CA(0))
			{
				unk_0x2FB9A57162E54BAB(0f);
				unk_0xEF6276132B396452(0f, 1065353216);
			}
		}
		else if (iLocal_43 == 4294967295 && !func_118(0))
		{
			iLocal_43 = unk_0x1C0640BA9A7327B3() + 1500;
		}
		else if (unk_0x1C0640BA9A7327B3() > iLocal_43 || func_118(0))
		{
			if (func_118(0))
			{
				unk_0x53491B90E4FD0E56(0);
			}
			else
			{
				Global_F048 = 0;
				Global_181DF = 0;
				func_192();
			}
			unk_0x71199B01895C6202(joaat("prop_cs_walking_stick"));
			unk_0x71199B01895C6202(joaat("prop_laptop_lester2"));
			func_72(0);
			func_193(0, 1, 1, 0, 0, 0);
			func_190(&(Global_1B416.f_936.f_21B), 86);
			func_162(&(Global_1B416.f_936.f_21B), 86);
			func_161(&iLocal_45);
			unk_0x0674E58A79778E99(&iLocal_41, 1);
			unk_0x2952D66A502EA873(iLocal_249, 0);
			if (iLocal_254 != 4294967295)
			{
				if (unk_0x49083FDB78AC0509(iLocal_254))
				{
					unk_0xDDABC98CFF1A4C60(iLocal_254);
				}
			}
			unk_0xEFED0CD6E25037B9();
			unk_0x17E8C6920A1E386F(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D, true, 0);
			unk_0x34D79252800B23FF(5);
			func_114(18, 0);
			func_154(0, 0);
		}
	}
	else if (!func_229(17))
	{
		if (unk_0xA0F4292EA950943D("JH_1_MCS_4P2"))
		{
			unk_0x5C8D148FC238F38A();
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 18))
	{
		unk_0x38C3A68D7861DCFD(0, 26, 1);
		if (unk_0x1C0640BA9A7327B3() > iLocal_255 + 1000)
		{
			unk_0x0674E58A79778E99(&iLocal_41, 18);
		}
	}
}

void func_154(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_39(iVar1) || func_38(iVar1))
		{
			if (!(iVar1 == 11 && iParam0 == 3))
			{
				switch (iVar1)
				{
					case 1:
						func_158(4, 1);
						break;
					
					case 4:
						func_158(8, 1);
						break;
					
					case 6:
						func_158(10, 1);
						break;
					
					case 7:
						func_158(1, 1);
						break;
					
					case 8:
						func_158(3, 1);
						break;
					
					case 9:
						func_158(6, 1);
						break;
					
					case 10:
						func_158(9, 1);
						break;
					
					case 12:
						func_158(11, 1);
						break;
					
					case 13:
						func_158(12, 1);
						break;
					
					case 11:
						if (func_157(91))
						{
							func_158(0, 1);
						}
						break;
					
					case 5:
						if (func_157(91))
						{
							func_158(2, 1);
						}
						break;
					
					case 3:
						if (func_157(67))
						{
							func_158(5, 1);
						}
						break;
					
					case 2:
						if (func_157(77))
						{
							func_158(7, 1);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_39(10) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[4], 0))
	{
		func_158(9, 1);
	}
	if (!func_39(13) && unk_0xEAE0D21A50E6C7F4(Global_1B416.f_619E.f_8[16], 0))
	{
		func_158(12, 1);
	}
	if (!func_39(12))
	{
		if (iParam0 == 4)
		{
			func_158(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_156(69))
		{
			func_21("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_155("DI_FEED_HST");
	}
}

void func_155(char* sParam0)
{
	unk_0x1E64CE678ED5F61E("");
	unk_0x49E52B24E5A757B3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_4FB5.f_96[iVar1], iVar0);
	}
	return 0;
}

int func_157(int iParam0)
{
	if (iParam0 == 94 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_1B416.f_2378.f_14A[iParam0 /*6*/];
}

void func_158(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_160(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_1B416.f_673D.f_1), iVar0);
			if (!bParam1)
			{
				func_155(func_159(iParam0));
			}
		}
	}
}

char* func_159(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_160(int iParam0)
{
	if (iParam0 != 4294967295 && iParam0 != 13)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1B416.f_673D.f_1, iParam0);
	}
	return 0;
}

void func_161(int iParam0)
{
	if (*iParam0 == 4294967295)
	{
		return;
	}
	if (!*iParam0 == Global_A1B1)
	{
		*iParam0 = 4294967295;
		return;
	}
	*iParam0 = 4294967295;
	Global_A1B0 = 0;
	Global_A1B2 = 0;
	Global_A1D7 = 15;
	Global_F045 = 0;
	Global_F046 = 0;
}

void func_162(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 17:
			func_163(uParam0, 0, 12);
			break;
		
		case 19:
			func_163(uParam0, 1, 13);
			break;
		
		case 29:
			func_163(uParam0, 1, 14);
			break;
		
		case 30:
			func_163(uParam0, 2, 15);
			func_163(uParam0, 1, 29);
			break;
		
		case 32:
			func_163(uParam0, 1, 16);
			func_163(uParam0, 0, 17);
			break;
		
		case 39:
			func_163(uParam0, 0, 21);
			func_163(uParam0, 1, 20);
			break;
		
		case 31:
			func_163(uParam0, 0, 18);
			break;
		
		case 20:
			func_163(uParam0, 2, 22);
			break;
		
		case 66:
			func_163(uParam0, 1, 23);
			break;
		
		case 68:
			func_163(uParam0, 1, 24);
			break;
		
		case 70:
			func_163(uParam0, 1, 67);
			break;
		
		case 8:
			func_163(uParam0, 1, 25);
			func_163(uParam0, 2, 26);
			break;
		
		case 67:
			func_163(uParam0, 1, 27);
			break;
		
		case 9:
			func_163(uParam0, 2, 28);
			break;
		
		case 38:
			func_163(uParam0, 2, 30);
			func_163(uParam0, 1, 19);
			break;
		
		case 83:
			func_163(uParam0, 2, 33);
			break;
		
		case 45:
			func_163(uParam0, 1, 35);
			break;
		
		case 64:
			func_163(uParam0, 0, 36);
			func_163(uParam0, 1, 37);
			break;
		
		case 91:
			func_163(uParam0, 0, 41);
			break;
		
		case 42:
			func_163(uParam0, 0, 58);
			Global_17F64[0 /*98*/] = 0;
			func_163(uParam0, 2, 59);
			Global_17F64[2 /*98*/] = 0;
			break;
		
		case 41:
			func_163(uParam0, 1, 42);
			func_163(uParam0, 2, 42);
			break;
		
		case 15:
			func_163(uParam0, 0, 46);
			func_163(uParam0, 1, 47);
			break;
		
		case 16:
			func_163(uParam0, 0, 48);
			break;
		
		case 48:
			func_163(uParam0, 1, 50);
			func_163(uParam0, 2, 51);
			break;
		
		case 74:
			func_163(uParam0, 0, 52);
			func_163(uParam0, 1, 66);
			break;
		
		case 76:
			func_163(uParam0, 1, 53);
			func_163(uParam0, 2, 54);
			func_163(uParam0, 0, 62);
			break;
		
		case 75:
			func_163(uParam0, 0, 61);
			func_163(uParam0, 1, 31);
			break;
		
		case 69:
			func_163(uParam0, 1, 63);
			break;
		
		case 84:
			func_163(uParam0, 0, 68);
			func_163(uParam0, 2, 69);
			break;
		
		case 85:
			func_163(uParam0, 0, 64);
			func_163(uParam0, 2, 65);
			break;
		
		case 93:
			func_163(uParam0, 1, 38);
			func_163(uParam0, 2, 39);
			break;
		
		case 11:
			func_163(uParam0, 2, 55);
			break;
		
		case 77:
			func_163(uParam0, 1, 56);
			func_163(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_163(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<98> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[0], 9))
	{
		iVar0 = Global_1B416.f_4860[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_1B416.f_4860[iParam1] = iParam2;
	uParam0->f_8F8[iParam1] = func_179();
	if (!func_178(iParam2, &(uParam0->f_8FC[iParam1 /*3*/]), &(uParam0->f_906[iParam1])))
	{
		return 0;
	}
	if (!func_177(uParam0->f_8FC[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_177(Global_17B9F[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_B = 12;
			Var1.f_1F = 49;
			Var1.f_51 = 2;
			if (func_164(iParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				Global_17F64[iParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_90A[iParam1] = 0;
	uParam0->f_90E[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_918[iParam1] = 0;
	return 1;
}

int func_164(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_54 = 255;
	uParam2->f_55 = 255;
	uParam2->f_56 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_17F64[iParam0 /*98*/] };
			if (Global_1808B[iParam0] != 2)
			{
				if (unk_0x0399732A9EBC368E(Global_18093[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, true))
				{
					if (Global_1808B[iParam0] == 1)
					{
						*uParam3 = { Global_18093[iParam0 /*3*/] - Global_1B416.f_936.f_21B.f_8FC[iParam0 /*3*/] };
						*uParam4 = (Global_1809D[iParam0] - Global_1B416.f_936.f_21B.f_906[iParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_18093[iParam0 /*3*/] - Global_1B416.f_936.f_21B.f_8FC[iParam0 /*3*/] };
				*uParam4 = (Global_1809D[iParam0] - Global_1B416.f_936.f_21B.f_906[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_17F64[iParam0 /*98*/] };
			if (Global_1808B[iParam0] != 2)
			{
				*uParam3 = { Global_18093[iParam0 /*3*/] - Global_1B416.f_936.f_21B.f_8FC[iParam0 /*3*/] };
				*uParam4 = (Global_1809D[iParam0] - Global_1B416.f_936.f_21B.f_906[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_17F64[iParam0 /*98*/] };
			if (Global_1808B[iParam0] != 2)
			{
				*uParam3 = { Global_18093[iParam0 /*3*/] - Global_1B416.f_936.f_21B.f_8FC[iParam0 /*3*/] };
				*uParam4 = (Global_1809D[iParam0] - Global_1B416.f_936.f_21B.f_906[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_61 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		
		case 9:
			return func_164(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_164(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_166(iParam0, uParam2, 2);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_61 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_61 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_61 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_61 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_164(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_166(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_61 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_166(iParam0, uParam2, 1);
			uParam2->f_5B = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_166(iParam0, uParam2, 2);
			uParam2->f_5B = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_61 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_61 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_61 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		
		case 40:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_61 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_61 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_61 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_61 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_61 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_61 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_1B), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_61 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		
		case 52:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_61 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_61 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			uParam2->f_59 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		
		case 112:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_164(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_61 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_164(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_164(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_61 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_166(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_164(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_164(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_164(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_164(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_164(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_61 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_B[0] = 0;
			uParam2->f_B[1] = 0;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 0;
			uParam2->f_B[4] = 0;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_164(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { unk_0x79833B02DBD2A244(-5f, 5f), unk_0x79833B02DBD2A244(-5f, 5f), 0f };
				*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_164(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_166(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_164(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_164(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_164(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_164(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_164(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_164(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_166(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_164(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_164(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_165(iParam0, uParam2, 2);
			uParam2->f_5B = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_164(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_61 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_61 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_164(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_164(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_164(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_164(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_164(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_164(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_164(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_164(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_164(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_164(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_164(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_164(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_61 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_5B = 0;
				return 1;
			}
			break;
		
		case 275:
			func_165(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_164(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_164(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				uParam2->f_61 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_B[0] = 0;
				uParam2->f_B[1] = 0;
				uParam2->f_B[2] = 1;
				uParam2->f_B[3] = 0;
				uParam2->f_B[4] = 0;
				uParam2->f_B[5] = 1;
				uParam2->f_B[6] = 1;
				uParam2->f_B[7] = 1;
				uParam2->f_B[8] = 1;
			}
			else
			{
				uParam2->f_61 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_61 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_61 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_61 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_61 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_61 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_61 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (296.1685f - unk_0xE7D606C557C86100(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (236.223f - unk_0xE7D606C557C86100(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (332.7842f - unk_0xE7D606C557C86100(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_17B9F[iParam1 /*3*/] };
			*uParam4 = unk_0x79833B02DBD2A244(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_166(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_165(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_58 = 1;
	uParam1->f_54 = 255;
	uParam1->f_55 = 255;
	uParam1->f_56 = 255;
	uParam1->f_61 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_1B416.f_2378.f_63.f_3A[128] && !Global_1B416.f_2378.f_63.f_3A[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_B[0] = 1;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_1B416.f_2378.f_63.f_3A[119])
					{
						uParam1->f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_1B416.f_2378.f_63.f_3A[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_A = 1;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0] = 1;
					uParam1->f_B[1] = 1;
					uParam1->f_B[2] = 1;
					uParam1->f_B[3] = 1;
					uParam1->f_B[4] = 1;
					uParam1->f_B[5] = 1;
					uParam1->f_B[6] = 1;
					uParam1->f_B[7] = 1;
					uParam1->f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_166(int iParam0, var uParam1, int iParam2)
{
	if (Global_17F64[iParam0 /*98*/] == 0)
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("blimp"))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (func_176(iParam0))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (unk_0xA7082C42B8809BF2(Global_17F64[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (unk_0xC41A9202669A24C4(Global_17F64[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (unk_0xAFB8495D36825275(Global_17F64[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (unk_0xA7D7011F9888A365(Global_17F64[iParam0 /*98*/]))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!unk_0x8E39AC3C76C8AA58(Global_17F64[iParam0 /*98*/]))
		{
			func_165(iParam0, uParam1, iParam2);
			uParam1->f_5B = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!unk_0x7D8B2A8F9EA82DB7(Global_17F64[iParam0 /*98*/]))
		{
			func_165(iParam0, uParam1, iParam2);
			uParam1->f_5B = iParam2;
			return 1;
		}
	}
	if (!func_167(Global_17F64[iParam0 /*98*/], 0))
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_165(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		if (Global_17F64[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_17F64[iParam0 /*98*/] };
			uParam1->f_5B = 0;
			return 0;
		}
	}
	else
	{
		func_165(iParam0, uParam1, 1);
		uParam1->f_5B = 1;
		if (Global_17F64[iParam0 /*98*/] == *uParam1)
		{
			func_165(iParam0, uParam1, 1);
			uParam1->f_5B = 1;
			return 1;
		}
		func_165(iParam0, uParam1, 2);
		uParam1->f_5B = 2;
		if (Global_17F64[iParam0 /*98*/] == *uParam1)
		{
			func_165(iParam0, uParam1, 2);
			uParam1->f_5B = 2;
			return 1;
		}
		*uParam1 = { Global_17F64[iParam0 /*98*/] };
		uParam1->f_5B = 0;
		return 0;
	}
	func_165(iParam0, uParam1, iParam2);
	uParam1->f_5B = iParam2;
	return 1;
}

int func_167(int iParam0, bool bParam1)
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
		if (!func_175())
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
		if ((((!func_174() && !func_173()) && !func_172()) && !func_171()) && !func_175())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xDC30EF462887322E() || unk_0x0EFF6B4415DAF4A1()) || unk_0x33A494591F2C1975())
		{
		}
		else if (!func_172())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_170(iParam0))
		{
			return 0;
		}
	}
	if (!func_168(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_168(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_169())
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

int func_169()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0;
}

int func_170(int iParam0)
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

int func_171()
{
	return 0;
}

int func_172()
{
	return 1;
}

int func_173()
{
	return 1;
}

int func_174()
{
	if (unk_0xC146D5FBD23C6954(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_175()
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

int func_176(int iParam0)
{
	if (Global_17F64[iParam0 /*98*/] == joaat("blimp") || Global_17F64[iParam0 /*98*/] == joaat("blimp2"))
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("submersible") || Global_17F64[iParam0 /*98*/] == joaat("submersible2"))
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("freight"))
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("packer"))
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("asea2"))
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("burrito2") || Global_17F64[iParam0 /*98*/] == joaat("fbi2"))
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("entityxf") && !Global_1B416.f_2378.f_14A[8 /*6*/])
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("cheetah") && !Global_1B416.f_2378.f_14A[8 /*6*/])
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("policeb") && !Global_1B416.f_2378.f_14A[8 /*6*/])
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("ztype") && !Global_1B416.f_2378.f_14A[9 /*6*/])
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("polmav") && !Global_1B416.f_2378.f_14A[9 /*6*/])
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("jb700") && !Global_1B416.f_2378.f_14A[10 /*6*/])
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("monroe") && !Global_1B416.f_2378.f_14A[11 /*6*/])
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == 1938952078)
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("handler"))
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("monroe"))
	{
		return 1;
	}
	if (Global_17F64[iParam0 /*98*/] == joaat("phantom"))
	{
		return 1;
	}
	if (((Global_17F64[iParam0 /*98*/] == joaat("gauntlet") && !Global_1B416.f_2378.f_14A[80 /*6*/]) && !Global_1B416.f_2378.f_14A[81 /*6*/]) && !Global_1B416.f_2378.f_14A[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_177(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_178(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_178(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_178(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

var func_179()
{
	var uVar0;
	
	func_189(&uVar0, unk_0x4460E481B9E33ADA());
	func_188(&uVar0, unk_0x8D199E381D262EEF());
	func_187(&uVar0, unk_0xD8A54335F18763BA());
	func_182(&uVar0, unk_0x972A296334C9D57B());
	func_181(&uVar0, unk_0x118229AD063C3C1D());
	func_180(&uVar0, unk_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_180(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 = (*uParam0 || 2147483648);
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - (*uParam0 && 2147483648));
	}
}

void func_181(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_182(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_186(*uParam0);
	iVar1 = func_184(*uParam0);
	if (iParam1 < 1 || iParam1 > func_183(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_183(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_184(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_185(unk_0xEAE0D21A50E6C7F4(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_185(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_186(var uParam0)
{
	return uParam0 & 15;
}

void func_187(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_188(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_189(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_190(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_1B416.f_4860[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_178(Global_1B416.f_4860[iVar0], &vVar2, &fVar3))
			{
				Global_1B416.f_4860[iVar0] = 318;
				func_191(&(uParam0->f_8F8[iVar0]));
				uParam0->f_8FC[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_906[iVar0] = 0f;
				uParam0->f_90A[iVar0] = 0;
				uParam0->f_90E[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_918[iVar0] = 0;
				Global_17786[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_9 = 0f;
				Global_17786[iVar0 /*29*/].f_C = 0f;
				Global_17786[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_A = 0f;
				Global_17786[iVar0 /*29*/].f_D = 0f;
				Global_17786[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_B = 0f;
				Global_17786[iVar0 /*29*/].f_E = 0f;
				Global_17786[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_1A = 0f;
				Global_17786[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_1B = 0f;
				Global_17786[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_17786[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_191(var uParam0)
{
	*uParam0 = 4294967281;
}

int func_192()
{
	if (func_118(0))
	{
		return 0;
	}
	if (Global_181DF.f_8)
	{
		if (Global_181DF.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_181DF.f_A > 1)
	{
		return 0;
	}
	Global_181DF.f_A++;
	return 1;
}

void func_193(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_201(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_4C1E.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_74())
			{
				Global_4C1E.f_1 = 3;
			}
			Global_5145 = 5;
		}
		func_200(1, iParam3, iParam2, 0);
		Global_F04E = 1;
		Global_12064 = 1;
		Global_12B4C = 1;
	}
	else
	{
		func_201(0);
		unk_0x17D339215F817B98();
		Global_F04E = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_200(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_198(unk_0xD803B885F5E47A62())) && !func_195(unk_0xD803B885F5E47A62(), 0)) && !func_194()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_198(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_12B4C = 0;
	}
}

bool func_194()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_27.f_12, 14);
}

bool func_195(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_196(4294967295, 0) == 8;
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

int func_196(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_197();
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

int func_197()
{
	return Global_1407E9;
}

int func_198(int iParam0)
{
	if (func_195(iParam0, 0))
	{
		return 1;
	}
	if (func_199())
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

bool func_199()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 3);
}

int func_200(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && iParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_201(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 13);
	}
}

void func_202()
{
	unk_0x16BBAF4B051E4BF5(2547114342);
	if (func_229(16))
	{
		if (!func_118(0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 10))
			{
				unk_0xAE1670DD12E839C3("JH_1_MCS_4_P1_ALT1", 8);
				func_210();
				func_115(0, 0, 1);
				iLocal_249 = unk_0x7D6CA5F52B3748BF(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D, 0, 1, 1, 1);
				iLocal_254 = unk_0x544B74C043CE9948(Local_46.f_1.f_18A, Local_46.f_1.f_18D * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
				unk_0x10F3BFFADF2CE3DA(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D);
				unk_0x17E8C6920A1E386F(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D, false, 0);
				unk_0x5D96D8530B3D0904(&iLocal_41, 10);
			}
			else if (unk_0x75EECC9B0572F772())
			{
				unk_0xA2888AACD3C45CCA("LESTER", 1, 0, 0, 0);
			}
			if (func_157(86))
			{
				if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 1))
				{
					if (func_151(0))
					{
						if (func_207(&iLocal_45, 0, 0, 0, 0) == 1)
						{
							func_200(1, 0, 1, 0);
							if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
							{
								unk_0x2B9CF4095FF44019(unk_0xD803B885F5E47A62());
								unk_0x34D79252800B23FF(0);
							}
							unk_0x5D96D8530B3D0904(&iLocal_41, 1);
							unk_0x5D96D8530B3D0904(&iLocal_41, 2);
						}
					}
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 2))
			{
				switch (iLocal_42)
				{
					case 0:
						if (unk_0x9F4FE516EAACCFC5(iLocal_250))
						{
							unk_0x9A8DDC7C522F5BF5(iLocal_250, 0);
						}
						if (unk_0x9F4FE516EAACCFC5(iLocal_251))
						{
							unk_0x9A8DDC7C522F5BF5(iLocal_251, 0);
						}
						iLocal_250 = unk_0xAE06CCC36C49929C(26379945, 724.4682f, -992.0684f, 24.25137f, 5.259225f, 0.000715f, 25.88918f, 44.13121f, 0, 2);
						iLocal_251 = unk_0xAE06CCC36C49929C(26379945, 724.3727f, -991.3205f, 24.43304f, 31.49925f, 0.000715f, -4.206256f, 44.13121f, 0, 2);
						if (unk_0xC844350D5D58C99A(Global_17409.f_9[0]))
						{
							if (!unk_0x437347B10A200C4B(Global_17409.f_9[0], 0))
							{
								iLocal_245 = Global_17409.f_9[0];
								unk_0x73270B3C9CC833FD(iLocal_245, false, 1);
							}
						}
						if (unk_0xC844350D5D58C99A(Global_17409[0]))
						{
							if (!unk_0x437347B10A200C4B(Global_17409[0], 0))
							{
								iLocal_247 = Global_17409[0];
							}
						}
						iLocal_42++;
						break;
					
					case 1:
						func_193(1, 1, 0, 0, 0, 0);
						unk_0xBFE31971E49FA500(false);
						unk_0x8BCB70EB440DED83(false);
						if (unk_0xC844350D5D58C99A(iLocal_247))
						{
							if (unk_0xDF1306B443CD3D15(iLocal_247, 0))
							{
								unk_0x1305278186D1C53E(iLocal_250, iLocal_247, 0f, 0f, 0f, 1);
							}
						}
						unk_0xF1E4C781086FABC1(iLocal_251, iLocal_250, 5000, 1, 1);
						unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
						iLocal_43 = unk_0x1C0640BA9A7327B3();
						iLocal_42++;
						break;
					
					case 2:
						if ((unk_0x1C0640BA9A7327B3() - iLocal_43) > 1200)
						{
							if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
							{
								if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
								{
									if (unk_0xDF1306B443CD3D15(iLocal_247, 0))
									{
										if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_247, 0))
										{
											unk_0xDD353D0E9C789D0E(&iLocal_252);
											unk_0x45F014B3D0466974(0, iLocal_247, 0);
											unk_0x96167B03C5A77156(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 0.25f, 0, 1193033728);
											unk_0x75ABDC5F81978924(iLocal_252);
											unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
											unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), iLocal_252);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 3:
						if ((unk_0x1C0640BA9A7327B3() - iLocal_43) > 2400)
						{
							if (!unk_0x437347B10A200C4B(iLocal_245, 0))
							{
								if (unk_0xC844350D5D58C99A(iLocal_247))
								{
									if (unk_0xDF1306B443CD3D15(iLocal_247, 0))
									{
										if (unk_0xC42A92762C58E1B9(iLocal_245, iLocal_247, 0))
										{
											unk_0xDD353D0E9C789D0E(&iLocal_253);
											unk_0x45F014B3D0466974(0, iLocal_247, 0);
											unk_0x96167B03C5A77156(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 0.25f, 0, 1193033728);
											unk_0x75ABDC5F81978924(iLocal_253);
											unk_0xA3BF0AA5A2608191(iLocal_245);
											unk_0x78ADC381772E3D54(iLocal_245, iLocal_253);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 4:
						if ((unk_0x1C0640BA9A7327B3() - iLocal_43) > 5000)
						{
							unk_0x0674E58A79778E99(&iLocal_41, 2);
						}
						break;
					}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 1) && !unk_0xEAE0D21A50E6C7F4(iLocal_41, 2))
			{
				if (unk_0xA0F4292EA950943D("JH_1_MCS_4_P1_ALT1"))
				{
					if (!unk_0x22A8E52414415B76())
					{
						iLocal_246 = unk_0x16F2683693E537C9();
						if (!unk_0x437347B10A200C4B(iLocal_246, 0))
						{
							unk_0x29E8331978B73E7F(iLocal_246, "Michael", 0, joaat("player_zero"), 0);
						}
						if (!unk_0x437347B10A200C4B(iLocal_245, 0))
						{
							unk_0x29E8331978B73E7F(iLocal_245, "Lester", 2, joaat("ig_lestercrest"), 0);
						}
						unk_0x5D96D8530B3D0904(&iLocal_41, 9);
						unk_0x29E8331978B73E7F(iLocal_248, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
						unk_0x5D96D8530B3D0904(&iLocal_41, 8);
						func_206(&(Local_46.f_1E4), 0, 0, "MICHAEL", 1, 1);
						func_206(&(Local_46.f_1E4), 3, 0, "LESTER", 1, 1);
						func_72(1);
						iLocal_43 = unk_0x1C0640BA9A7327B3();
						unk_0x4C902758BEA97C68(2048);
					}
					else
					{
						func_121();
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 17))
						{
							if (!unk_0x0F1CCD77290EE12F() && !unk_0x7BCE0E6DD4A1F749())
							{
								unk_0x82E51BCA72537B6C(800);
							}
							unk_0x5D96D8530B3D0904(&iLocal_41, 17);
						}
						if (unk_0xEAD40E09B5AA81FC())
						{
							unk_0x5D96D8530B3D0904(&iLocal_41, 16);
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 16))
						{
							if (unk_0x757EF87A33649210())
							{
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 12))
								{
									func_115(0, 1, 1);
									unk_0x5D96D8530B3D0904(&iLocal_41, 12);
								}
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 13))
								{
									func_115(0, 2, 1);
									unk_0x5D96D8530B3D0904(&iLocal_41, 13);
								}
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 14))
								{
									func_115(0, 3, 1);
									unk_0x5D96D8530B3D0904(&iLocal_41, 14);
								}
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 15))
								{
									func_115(0, 4, 1);
									unk_0x5D96D8530B3D0904(&iLocal_41, 15);
								}
								func_204(&Local_46);
								if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0))
								{
									func_203();
									unk_0x5D96D8530B3D0904(&iLocal_41, 0);
								}
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 5))
						{
							if (unk_0x9F4FE516EAACCFC5(iLocal_250))
							{
								unk_0xE3BB8E05FCEB3FBE(iLocal_250, false);
							}
							if (unk_0x9F4FE516EAACCFC5(iLocal_251))
							{
								unk_0xE3BB8E05FCEB3FBE(iLocal_251, false);
							}
							unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
							if (unk_0x9F4FE516EAACCFC5(iLocal_251))
							{
								unk_0x9A8DDC7C522F5BF5(iLocal_251, 0);
							}
							if (unk_0x9F4FE516EAACCFC5(iLocal_251))
							{
								unk_0x9A8DDC7C522F5BF5(iLocal_251, 0);
							}
							if (unk_0xC844350D5D58C99A(iLocal_245))
							{
								unk_0xEBA53F35D0085654(&iLocal_245);
							}
							unk_0x5D96D8530B3D0904(&iLocal_41, 5);
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 6))
						{
							if (iLocal_44 > 0)
							{
								unk_0x5D96D8530B3D0904(&iLocal_41, 6);
							}
						}
						if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 12))
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_43) > 14058)
							{
								func_115(0, 1, 1);
								unk_0x5D96D8530B3D0904(&iLocal_41, 12);
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 13))
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_43) > 22887)
							{
								func_115(0, 2, 1);
								unk_0x5D96D8530B3D0904(&iLocal_41, 13);
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 14))
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_43) > 27988)
							{
								func_115(0, 3, 1);
								func_204(&Local_46);
								unk_0x5D96D8530B3D0904(&iLocal_41, 14);
							}
						}
						else if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 15))
						{
							if ((unk_0x1C0640BA9A7327B3() - iLocal_43) > 42084)
							{
								func_115(0, 4, 1);
								unk_0x5D96D8530B3D0904(&iLocal_41, 15);
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 8))
						{
							if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("WalkingStick_Lester", joaat("prop_cs_walking_stick"))))
							{
								iLocal_248 = unk_0x486F67509A82DB2D(unk_0x6450C2A9FBA3C3BF("WalkingStick_Lester", joaat("prop_cs_walking_stick")));
								unk_0x0674E58A79778E99(&iLocal_41, 8);
							}
						}
						if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 9))
						{
							if (unk_0xC844350D5D58C99A(unk_0x6450C2A9FBA3C3BF("Lester", joaat("ig_lestercrest"))))
							{
								iLocal_245 = unk_0x940C1429253D3B1B(unk_0x6450C2A9FBA3C3BF("Lester", joaat("ig_lestercrest")));
								unk_0x0674E58A79778E99(&iLocal_41, 9);
							}
						}
						if (unk_0x3148AE92ED70DC30("Michael", 0))
						{
							if (!unk_0x437347B10A200C4B(iLocal_246, 0))
							{
								unk_0x11AD11297DC58CC7(iLocal_246, true);
								unk_0x4E885A246A9D983A(iLocal_246, 208, true);
								unk_0x4E885A246A9D983A(iLocal_246, 118, false);
								unk_0x4E885A246A9D983A(iLocal_246, 213, false);
								unk_0x80AA372E04ED318D(iLocal_246, 708.8129f, -966.3621f, 29.3956f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (unk_0x3148AE92ED70DC30("Lester", 0))
						{
							if (!unk_0x437347B10A200C4B(iLocal_245, 0))
							{
								if (unk_0xC844350D5D58C99A(iLocal_248))
								{
									unk_0x9F528B1B53FBC5D9(iLocal_248, iLocal_245, unk_0x4A089F2B762B8D33(iLocal_245, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
							}
							if (!unk_0x437347B10A200C4B(iLocal_245, 0))
							{
								unk_0x11AD11297DC58CC7(iLocal_245, true);
								unk_0x4E885A246A9D983A(iLocal_245, 208, true);
								unk_0x4E885A246A9D983A(iLocal_245, 118, false);
								unk_0x4E885A246A9D983A(iLocal_245, 213, false);
								unk_0x80AA372E04ED318D(iLocal_245, 708.3643f, -963.9194f, 29.4181f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (unk_0xEABED1927EFB48CA(0))
						{
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 0))
							{
								func_203();
								unk_0x5D96D8530B3D0904(&iLocal_41, 0);
							}
							if (!unk_0xEAE0D21A50E6C7F4(iLocal_41, 7))
							{
								if (!unk_0x437347B10A200C4B(iLocal_246, 0))
								{
									unk_0x4A4806F9D471E491(iLocal_246, false, 0);
								}
								if (!unk_0x437347B10A200C4B(iLocal_245, 0))
								{
									unk_0x4A4806F9D471E491(iLocal_245, false, 0);
								}
								if (unk_0xC844350D5D58C99A(iLocal_248))
								{
									unk_0x4A4806F9D471E491(iLocal_248, false, 0);
								}
								unk_0x5D96D8530B3D0904(&iLocal_41, 7);
							}
							func_114(16, 0);
						}
						iLocal_44++;
					}
				}
			}
		}
		else
		{
			func_206(&(Local_46.f_1E4), 0, 0, "MICHAEL", 1, 1);
			func_206(&(Local_46.f_1E4), 3, 0, "LESTER", 1, 1);
			if (func_151(0))
			{
				if (func_207(&iLocal_45, 0, 0, 0, 0) == 1)
				{
					unk_0x5D96D8530B3D0904(&iLocal_41, 1);
				}
			}
			if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 1))
			{
				func_203();
				func_114(16, 0);
			}
		}
	}
	else
	{
		if (unk_0xA0F4292EA950943D("JH_1_MCS_4_P1_ALT1"))
		{
			unk_0x5C8D148FC238F38A();
		}
		if (unk_0xEAE0D21A50E6C7F4(iLocal_41, 10))
		{
			unk_0x0674E58A79778E99(&iLocal_41, 10);
		}
	}
}

void func_203()
{
	func_85(1, 0, 1);
	func_85(2, 0, 1);
	func_211(&Local_46);
	func_67(&Local_46);
}

void func_204(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 1))
	{
		if (!unk_0x22A8E52414415B76())
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 2))
			{
				func_69(uParam0, 0);
			}
		}
		func_205(uParam0);
		unk_0x0674E58A79778E99(&(uParam0->f_1C1), 1);
		unk_0x0674E58A79778E99(&Global_17221, *uParam0);
	}
}

void func_205(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_21)
	{
		if (unk_0xC844350D5D58C99A(uParam0->f_1AC[iVar0]))
		{
			unk_0xF690C84DADBB3551(&(uParam0->f_1AC[iVar0]));
		}
		iVar0++;
	}
}

void func_206(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_207(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_177DE.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_209(0))
		{
			return 0;
		}
		Global_A1B3++;
		*iParam0 = Global_A1B3;
		unk_0x62DE699599F0417E(unk_0xA30EC016B12C03E4(), 0);
		Global_56C3.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x4C7B0415764B64BA(8);
		}
		Global_A1D7 = iParam2;
		Global_A1B1 = *iParam0;
		Global_A1B2 = iParam4;
		Global_A1B0 = 0;
		return 1;
	}
	if (*iParam0 != 4294967295)
	{
		if (Global_A1B0 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_A1B0)
			{
				if (Global_A1B6[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_A1B1 == *iParam0)
		{
			return 1;
		}
		*iParam0 = 4294967295;
	}
	if (*iParam0 == 4294967295)
	{
		if (!func_151(iParam2))
		{
			return 0;
		}
		if (Global_A1B0 == 8)
		{
			return 0;
		}
		Global_A1B3++;
		*iParam0 = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/] = Global_A1B3;
		Global_A1B6[Global_A1B0 /*4*/].f_1 = iParam1;
		Global_A1B6[Global_A1B0 /*4*/].f_2 = iParam2;
		Global_A1B6[Global_A1B0 /*4*/].f_3 = 0;
		Global_A1B0++;
		if (iParam4 != 0)
		{
			func_208(iParam0, iParam4);
		}
	}
	return 2;
}

void func_208(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_A1B0 == 0)
	{
		return;
	}
	if (*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_A1B0)
	{
		if (Global_A1B6[iVar0 /*4*/] == *uParam0)
		{
			Global_A1B6[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = 4294967295;
}

int func_209(int iParam0)
{
	if (Global_A1D7 == 15)
	{
		return 0;
	}
	if (func_151(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_210()
{
	Global_181DF = 1;
}

void func_211(var uParam0)
{
	if (func_10(2, *uParam0))
	{
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 1))
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 2))
			{
				func_69(uParam0, func_212(*uParam0));
				func_85(2, *uParam0, 0);
			}
			else
			{
				func_123(uParam0);
				func_85(2, *uParam0, 0);
			}
		}
	}
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_229(18);
			break;
		
		case 1:
			return func_229(22);
			break;
		
		case 2:
			return func_229(40);
			break;
		
		case 3:
			return func_229(8);
			break;
		
		case 4:
			return func_229(26);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_213()
{
	return Global_12C54;
}

int func_214(var uParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 1))
	{
		func_204(uParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0))
	{
		func_215(uParam0);
	}
	return 1;
}

void func_215(var uParam0)
{
	unk_0x42740B44BA8D7B43("HEIST_BULLETIN_BOARD");
	unk_0x71199B01895C6202(joaat("prop_ld_planning_pin_01"));
	unk_0x71199B01895C6202(joaat("prop_ld_planning_pin_02"));
	unk_0x71199B01895C6202(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_19D != 0)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_19D));
	}
	if (uParam0->f_19E != 0)
	{
		unk_0xE17FDF9E3068281B(&(uParam0->f_19E));
	}
	unk_0x11CCD0ACA866C6C5(5, false);
	unk_0x0674E58A79778E99(&Global_17222, *uParam0);
	unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0);
}

void func_216(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		fVar0 = SYSTEM::VDIST2(uParam0->f_191, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true));
		if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 1))
		{
			func_224(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || unk_0xEAE0D21A50E6C7F4(Global_17221, *uParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0))
			{
				if (func_223(uParam0))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_17221, *uParam0))
					{
						if (unk_0xEAE0D21A50E6C7F4(Global_17223, *uParam0))
						{
							func_218(uParam0);
						}
					}
					else
					{
						func_218(uParam0);
					}
				}
			}
			else
			{
				func_217(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !unk_0xEAE0D21A50E6C7F4(Global_17221, *uParam0))
		{
			if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 0))
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 1))
				{
					func_204(uParam0);
				}
				func_215(uParam0);
			}
		}
	}
}

void func_217(var uParam0)
{
	if (!unk_0x1D6041CB88128065())
	{
		return;
	}
	unk_0xD7992BEF7A9D109E(&(uParam0->f_1.f_110), 5);
	unk_0xAE317D00A5A55DF6("HEIST_BULLETIN_BOARD", false, 4294967295);
	if (*uParam0 != 1)
	{
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_planning_pin_01"));
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_planning_pin_02"));
		unk_0x523BCC9DC80CD82F(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_19D = unk_0x5275223F099DEF26(&(uParam0->f_1.f_10C));
	uParam0->f_19E = unk_0x5275223F099DEF26("INSTRUCTIONAL_BUTTONS");
	unk_0x5D96D8530B3D0904(&Global_17220, *uParam0);
	unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 0);
}

void func_218(var uParam0)
{
	int iVar0;
	
	if (!unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_60)
		{
			func_36(uParam0, iVar0);
			iVar0++;
		}
		func_33(uParam0);
		func_31(uParam0);
		func_222(uParam0);
		func_221(uParam0);
		func_219(uParam0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 1);
	}
}

void func_219(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_21)
	{
		if (func_32(*uParam0, uParam0->f_1.f_4B[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					iVar1 = joaat("prop_ld_planning_pin_01");
					break;
				
				case 1:
					iVar1 = joaat("prop_ld_planning_pin_02");
					break;
				
				case 2:
					iVar1 = joaat("prop_ld_planning_pin_03");
					break;
			}
			fVar2 = (SYSTEM::TO_FLOAT((unk_0x09AC81E49EA267F7(0, 65535) - 32767)) / 4000f);
			fVar3 = (SYSTEM::TO_FLOAT((unk_0x09AC81E49EA267F7(0, 65535) - 32767)) / 4000f);
			vVar4 = { func_220(uParam0, &(uParam0->f_1.f_22[iVar0 /*2*/])) };
			uParam0->f_1AC[iVar0] = unk_0x7707E48765093646(iVar1, vVar4, true, true, false);
			unk_0xC023D1C4BF532815(uParam0->f_1AC[iVar0], fVar2, 0f, (uParam0->f_194 + fVar3), 2, 1);
			unk_0x73270B3C9CC833FD(uParam0->f_1AC[iVar0], true, 0);
			unk_0xE121AE1BBF90E186(uParam0->f_1AC[iVar0], true);
			unk_0x20641932E5104B25(uParam0->f_1AC[iVar0], false, 0);
			unk_0x08543B8F6DBE0B08(uParam0->f_1AC[iVar0], 0);
			unk_0x1E9649458B15960F(uParam0->f_1AC[iVar0], true);
		}
		iVar0++;
	}
	unk_0x0674E58A79778E99(&Global_17223, *uParam0);
}

Vector3 func_220(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_194;
	vVar7 = { uParam0->f_191 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	return vVar7;
}

void func_221(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_75)
	{
		iVar2 = uParam0->f_1.f_BA[iVar0];
		bVar3 = unk_0xEAE0D21A50E6C7F4(Global_1B416.f_1.f_78[iVar1], iVar2);
		if (uParam0->f_1.f_8D[iVar0 /*2*/] == 0 && uParam0->f_1.f_8D[iVar0 /*2*/].f_1 == 0)
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_HEIST_ASSET");
			unk_0x3CAEA85DA607305E(uParam0->f_1.f_76[iVar0]);
			unk_0x1200CC973A2399C8(bVar3);
			unk_0x7E60D21B163E9D56();
		}
		else
		{
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_HEIST_ASSET");
			unk_0x3CAEA85DA607305E(uParam0->f_1.f_76[iVar0]);
			unk_0x1200CC973A2399C8(bVar3);
			unk_0x3CAEA85DA607305E(0);
			unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_8D[iVar0 /*2*/]));
			unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_8D[iVar0 /*2*/].f_1));
			unk_0x7E60D21B163E9D56();
		}
		iVar0++;
	}
}

void func_222(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "CREATE_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_19F + 1);
	unk_0x3CAEA85DA607305E(2);
	unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_E));
	unk_0x7C19E5E4784BD7CF(SYSTEM::TO_FLOAT(uParam0->f_1.f_E.f_1));
	unk_0x7E60D21B163E9D56();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_D1)
	{
		if (func_32(iVar0, uParam0->f_1.f_F8[iVar2]))
		{
			iVar3 = 0;
			if (func_32(iVar0, uParam0->f_1.f_102[iVar2]))
			{
				iVar3 = 1;
			}
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT");
			unk_0x3CAEA85DA607305E(uParam0->f_19F + 1);
			unk_0x3CAEA85DA607305E(iVar1);
			unk_0x3CAEA85DA607305E(iVar3);
			func_8(&(uParam0->f_1.f_D3[iVar2 /*4*/]));
			unk_0x7E60D21B163E9D56();
			iVar1++;
		}
		iVar2++;
	}
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "DISPLAY_VIEW");
	unk_0x3CAEA85DA607305E(uParam0->f_19F + 1);
	unk_0x7E60D21B163E9D56();
	if (func_32(*uParam0, uParam0->f_1.f_D2))
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
		unk_0x3CAEA85DA607305E(uParam0->f_19F + 1);
		unk_0x1200CC973A2399C8(true);
		unk_0x7E60D21B163E9D56();
	}
	else
	{
		unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_VIEW");
		unk_0x3CAEA85DA607305E(uParam0->f_19F + 1);
		unk_0x1200CC973A2399C8(false);
		unk_0x7E60D21B163E9D56();
	}
}

int func_223(var uParam0)
{
	if (!unk_0x83D8570832F172A7(uParam0->f_19D))
	{
		return 0;
	}
	if (!unk_0x83D8570832F172A7(uParam0->f_19E))
	{
		return 0;
	}
	if (!unk_0x67C1D9E5B91B2E37(5))
	{
		return 0;
	}
	if (unk_0x1D6041CB88128065())
	{
		if (!unk_0xAE317D00A5A55DF6("HEIST_BULLETIN_BOARD", false, 4294967295))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (*uParam0 != 1)
	{
		if ((!unk_0xB87F6CF6E5628C67(joaat("prop_ld_planning_pin_01")) || !unk_0xB87F6CF6E5628C67(joaat("prop_ld_planning_pin_02"))) || !unk_0xB87F6CF6E5628C67(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	unk_0x5D96D8530B3D0904(&Global_17222, *uParam0);
	return 1;
}

void func_224(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if (func_32(*uParam0, 0))
	{
		func_225(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		unk_0x0103165890FA9E7F(uParam0->f_19D, uParam0->f_191 + Vector(fVar1, (fVar0 * SYSTEM::COS((90f - uParam0->f_194))), (fVar0 * SYSTEM::SIN((90f - uParam0->f_194)))), 180f, 0f, uParam0->f_194, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_225(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	
	if (unk_0xEAE0D21A50E6C7F4(Global_17220, *uParam0))
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 16);
		unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 15);
		unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 14);
		unk_0x0674E58A79778E99(&Global_17220, *uParam0);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_75)
		{
			iVar1 = uParam0->f_1.f_BA[iVar0];
			bVar2 = func_32(*uParam0, iVar1);
			unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SHOW_HEIST_ASSET");
			unk_0x3CAEA85DA607305E(uParam0->f_1.f_76[iVar0]);
			unk_0x1200CC973A2399C8(bVar2);
			unk_0x3CAEA85DA607305E(0);
			unk_0x7E60D21B163E9D56();
			iVar0++;
		}
		unk_0x0674E58A79778E99(&(uParam0->f_1C1), 16);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_21)
		{
			if (func_32(*uParam0, uParam0->f_1.f_4B[iVar0]))
			{
				if (!unk_0xC844350D5D58C99A(uParam0->f_1AC[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							iVar3 = joaat("prop_ld_planning_pin_01");
							break;
						
						case 1:
							iVar3 = joaat("prop_ld_planning_pin_02");
							break;
						
						case 2:
							iVar3 = joaat("prop_ld_planning_pin_03");
							break;
					}
					fVar4 = (SYSTEM::TO_FLOAT((unk_0x09AC81E49EA267F7(0, 65535) - 32767)) / 4000f);
					fVar5 = (SYSTEM::TO_FLOAT((unk_0x09AC81E49EA267F7(0, 65535) - 32767)) / 4000f);
					vVar6 = { func_220(uParam0, &(uParam0->f_1.f_22[iVar0 /*2*/])) };
					uParam0->f_1AC[iVar0] = unk_0x7707E48765093646(iVar3, vVar6, true, true, false);
					unk_0xC023D1C4BF532815(uParam0->f_1AC[iVar0], fVar4, 0f, (uParam0->f_194 + fVar5), 2, 1);
					unk_0x73270B3C9CC833FD(uParam0->f_1AC[iVar0], true, 0);
					unk_0xE121AE1BBF90E186(uParam0->f_1AC[iVar0], true);
					unk_0x20641932E5104B25(uParam0->f_1AC[iVar0], false, 0);
					unk_0x08543B8F6DBE0B08(uParam0->f_1AC[iVar0], 0);
					unk_0x1E9649458B15960F(uParam0->f_1AC[iVar0], true);
				}
			}
			else if (!unk_0xC844350D5D58C99A(uParam0->f_1AC[iVar0]))
			{
				unk_0xF690C84DADBB3551(&(uParam0->f_1AC[iVar0]));
			}
			iVar0++;
		}
		unk_0x0674E58A79778E99(&(uParam0->f_1C1), 15);
	}
	if (unk_0xEAE0D21A50E6C7F4(uParam0->f_1C1, 14))
	{
		func_226(uParam0);
		func_33(uParam0);
		func_222(uParam0);
		unk_0x0674E58A79778E99(&(uParam0->f_1C1), 14);
	}
}

void func_226(var uParam0)
{
	unk_0x7E60C62A7CE58FC8(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	unk_0x3CAEA85DA607305E(uParam0->f_19F + 1);
	unk_0x7E60D21B163E9D56();
}

bool func_227(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_228(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == 4294967295)
	{
		return 0;
	}
	if (Global_16A39[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_15D98)
	{
		if (Global_15D98[iVar0 /*5*/] != 4294967295)
		{
			if (Global_12C5B.f_6D[Global_15D98[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_229(int iParam0)
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_1B416.f_2378.f_63.f_3A[iParam0];
}

void func_230(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar1;
	
	*uParam0 = iParam1;
	vVar0 = { Global_171E2[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar1 = Global_171E2[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_191 = { vVar0 };
	uParam0->f_194 = fVar1;
	uParam0->f_195 = { vVar0 + Vector(0f, (-uParam0->f_1.f_8 * SYSTEM::COS((360f - fVar1))), (-uParam0->f_1.f_8 * SYSTEM::SIN((360f - fVar1)))) };
	uParam0->f_198 = { -0.85f, 0f, fVar1 };
	unk_0x5D96D8530B3D0904(&(uParam0->f_1C1), 4);
	uParam0->f_19F = uParam0->f_1.f_60;
	uParam0->f_1A0 = 4294967295;
	unk_0x0674E58A79778E99(&(uParam0->f_1C1), 0);
	unk_0x0674E58A79778E99(&(uParam0->f_1C1), 1);
	unk_0x0674E58A79778E99(&(uParam0->f_1C1), 2);
	uParam0->f_1D0 = 0;
	uParam0->f_1C3 = 4294967295;
}

void func_231(var uParam0, var uParam1)
{
	func_240(uParam0, 1, "HEIST_JEWELLERY", "BOARD0", "JHFAUD", "CRWAUD", 2, 2, 7, 8, uParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 4f);
	func_239(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 116, 420, 248, 425, 380, 425, 510, 430, 0, 0, 650, 300, 0, 70, 684, 106);
	func_238(uParam0, 20f, 22f, 28f);
	func_237(uParam0, "BRD_H_01", "BRD_H_02", "BRD_H_03", "BRD_H_04", "JHFP1", "JHFP4", "JHP11", "JHHUR");
	func_236(uParam0, 1, "CRW_GM", "");
	func_236(uParam0, 4, "CRW_NR", "");
	func_236(uParam0, 6, "CRW_PH", "");
	func_236(uParam0, 7, "CRW_CF", "");
	func_236(uParam0, 8, "CRW_ET", "");
	func_236(uParam0, 9, "CRW_KD", "");
	func_236(uParam0, 10, "CRW_PM", "CRM_PM");
	func_236(uParam0, 12, "CRW_RL", "CRM_RL");
	func_235(uParam0, 0, 0, 0, 0);
	func_235(uParam0, 6, 0, 0, 0);
	func_235(uParam0, 1, 0, 0, 0);
	func_235(uParam0, 3, 1, 0, 0);
	func_235(uParam0, 11, 2, 0, 0);
	func_235(uParam0, 5, 3, 0, 0);
	func_235(uParam0, 9, 3, 0, 0);
	func_235(uParam0, 2, 4, 0, 0);
	func_235(uParam0, 7, 9, 0, 0);
	func_235(uParam0, 10, 10, 0, 0);
	func_234(uParam0, 2, 2, "H_TD_SEC");
	func_234(uParam0, 2, 2, "H_TD_PHOTO");
	func_234(uParam0, 2, 5, "H_TD_PLAN");
	func_234(uParam0, 2, 6, "H_TD_CREW");
	func_234(uParam0, 7, 11, "H_TD_CARB");
	func_234(uParam0, 8, 9, "H_TD_BUGS");
	func_234(uParam0, 8, 10, "H_TD_GAS");
	func_233(uParam0, 0, 203, 74);
	func_233(uParam0, 1, 368, 181);
	func_233(uParam0, 1, 556, 189);
	func_233(uParam0, 2, 690, 63);
	func_233(uParam0, 2, 673, 308);
	func_233(uParam0, 2, 671, 406);
	func_233(uParam0, 3, 245, 244);
	func_233(uParam0, 4, 70, 68);
	func_232(uParam0, 0, "JHP12", 214, 165, 1);
	func_232(uParam0, 0, "JHP13", 254, 46, 1);
	func_232(uParam0, 0, "JHP14", 70, 97, 1);
	func_232(uParam0, 0, "JHP15", 254, 275, 1);
	func_232(uParam0, 0, "JHP16", 457, 165, 1);
}

void func_232(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	
	if (uParam0->f_171 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_182[uParam0->f_171] = iParam1;
		uParam0->f_173[uParam0->f_171 /*2*/] = iParam3;
		uParam0->f_173[uParam0->f_171 /*2*/].f_1 = iParam4;
		uParam0->f_118[uParam0->f_171 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_172), uParam0->f_171);
		}
		uParam0->f_171++;
	}
}

void func_233(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_21 < 20)
	{
		uParam0->f_4B[uParam0->f_21] = iParam1;
		uParam0->f_22[uParam0->f_21 /*2*/] = iParam2;
		uParam0->f_22[uParam0->f_21 /*2*/].f_1 = iParam3;
		uParam0->f_21++;
	}
}

void func_234(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	struct<8> Var0;
	
	if (uParam0->f_D1 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_F8[uParam0->f_D1] = iParam1;
		uParam0->f_102[uParam0->f_D1] = iParam2;
		MemCopy(&(uParam0->f_D3[uParam0->f_D1 /*4*/]), {Var0}, 4);
		uParam0->f_D1++;
	}
}

void func_235(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (uParam0->f_75 < 22)
	{
		uParam0->f_76[uParam0->f_75] = iParam1;
		uParam0->f_BA[uParam0->f_75] = iParam2;
		uParam0->f_8D[uParam0->f_75 /*2*/] = iParam3;
		uParam0->f_8D[uParam0->f_75 /*2*/].f_1 = iParam4;
		uParam0->f_75++;
	}
}

void func_236(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	struct<2> Var0;
	struct<2> Var1;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var1, sParam3, 8);
	uParam0->f_130[iParam1 /*2*/] = { Var0 };
	if (!unk_0x7F8A39872A07D2CE(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_130[14 /*2*/] = { Var1 };
				break;
			
			case 13:
				uParam0->f_130[16 /*2*/] = { Var1 };
				break;
			
			case 12:
				uParam0->f_130[15 /*2*/] = { Var1 };
				break;
			
			case 11:
				uParam0->f_130[17 /*2*/] = { Var1 };
				break;
			
			default:
				break;
			}
	}
}

void func_237(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	struct<4> Var0;
	struct<4> Var1;
	struct<4> Var2;
	struct<4> Var3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var1, sParam2, 16);
	StringCopy(&Var2, sParam3, 16);
	StringCopy(&Var3, sParam4, 16);
	StringCopy(&Var4, sParam5, 8);
	StringCopy(&Var5, sParam6, 8);
	StringCopy(&Var6, sParam7, 8);
	StringCopy(&Var7, sParam8, 8);
	uParam0->f_14[0 /*4*/] = { Var0 };
	uParam0->f_14[1 /*4*/] = { Var1 };
	uParam0->f_6C[0 /*4*/] = { Var2 };
	uParam0->f_6C[1 /*4*/] = { Var3 };
	uParam0->f_118[1 /*2*/] = { Var4 };
	uParam0->f_118[2 /*2*/] = { Var5 };
	uParam0->f_118[0 /*2*/] = { Var6 };
	uParam0->f_118[3 /*2*/] = { Var7 };
}

void func_238(var uParam0, float fParam1, float fParam2, float fParam3)
{
	uParam0->f_9 = fParam1;
	uParam0->f_A = fParam2;
	uParam0->f_B = fParam3;
}

void func_239(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_C = iParam8;
	uParam0->f_C.f_1 = iParam9;
	uParam0->f_61[0 /*2*/] = iParam10;
	uParam0->f_61[0 /*2*/].f_1 = iParam11;
	uParam0->f_61[1 /*2*/] = iParam12;
	uParam0->f_61[1 /*2*/].f_1 = iParam13;
	uParam0->f_61[2 /*2*/] = iParam14;
	uParam0->f_61[2 /*2*/].f_1 = iParam15;
	uParam0->f_61[3 /*2*/] = iParam16;
	uParam0->f_61[3 /*2*/].f_1 = iParam17;
	uParam0->f_61[4 /*2*/] = iParam18;
	uParam0->f_61[4 /*2*/].f_1 = iParam19;
	uParam0->f_10 = iParam20;
	uParam0->f_10.f_1 = iParam21;
	uParam0->f_12 = iParam22;
	uParam0->f_12.f_1 = iParam23;
	uParam0->f_E = iParam24;
	uParam0->f_E.f_1 = iParam25;
}

void func_240(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, vector3 vParam11, vector3 vParam12)
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_10C), sParam2, 16);
	StringCopy(&(uParam0->f_110), sParam3, 16);
	StringCopy(&(uParam0->f_114), sParam4, 8);
	StringCopy(&(uParam0->f_116), sParam5, 8);
	uParam0->f_1D = iParam6;
	uParam0->f_1E[0] = iParam8;
	uParam0->f_1E[1] = iParam9;
	uParam0->f_D2 = iParam7;
	uParam0->f_60 = uParam10;
	uParam0->f_18A = { vParam11 };
	uParam0->f_18D = { vParam12 };
}

int func_241(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_242(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1B416.f_2378.f_63.f_DB[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x5D96D8530B3D0904(&(Global_1B416.f_2378.f_63.f_DB[iVar0]), iVar1);
	return 1;
}

void func_243()
{
	if (unk_0xA0F4292EA950943D("JH_1_MCS_4P2") || unk_0xA0F4292EA950943D("JH_1_MCS_4_P1_ALT1"))
	{
		unk_0x5C8D148FC238F38A();
	}
	func_114(16, 0);
	func_114(17, 0);
	func_114(18, 0);
	func_85(1, 0, 0);
	func_85(2, 0, 0);
	unk_0x2952D66A502EA873(iLocal_249, 0);
	if (iLocal_254 != 4294967295)
	{
		if (unk_0x49083FDB78AC0509(iLocal_254))
		{
			unk_0xDDABC98CFF1A4C60(iLocal_254);
		}
	}
	unk_0xEFED0CD6E25037B9();
	unk_0x17E8C6920A1E386F(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D, true, 0);
	unk_0x34D79252800B23FF(5);
	if (iLocal_45 != 4294967295)
	{
		func_161(&iLocal_45);
	}
	while (!func_214(&Local_46))
	{
		SYSTEM::WAIT(0);
	}
	unk_0x10FAF14A60A0DBE1();
}

