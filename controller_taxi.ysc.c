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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	char* sLocal_32 = NULL;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 6;
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
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
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
	int iLocal_96 = 0;
	vector3 vLocal_97 = { 0f, 0f, 0f };
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 16;
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
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar7;
	
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
	sLocal_32 = "NULL";
	fLocal_33 = 0f;
	fLocal_37 = -0.0375f;
	fLocal_38 = 0.17f;
	iLocal_40 = 3;
	fLocal_43 = 80f;
	fLocal_44 = 140f;
	fLocal_45 = 180f;
	iLocal_51 = 1;
	iLocal_52 = 65;
	iLocal_53 = 49;
	iLocal_54 = 64;
	iLocal_77 = unk_0xAD1355DD1E5D2D9B();
	iLocal_78 = unk_0x817B3657F78A517A();
	vLocal_83 = { 500f, 500f, 500f };
	iLocal_104 = 4294967295;
	fLocal_107 = 0f;
	iLocal_113 = 1;
	bVar0 = false;
	iVar1 = 0;
	func_90(&(Global_1B416.f_4A94), 4);
	func_90(&(Global_1B416.f_4A94), 256);
	if (unk_0x2EBF608FFE6CA406(82))
	{
		func_89();
	}
	func_88(16);
	while (true)
	{
		bVar0 = !func_87(0, 12);
		iVar2 = 0;
		if (bVar0 && iVar1 != 1)
		{
			iVar1 = 1;
		}
		if (iVar1 == 2)
		{
			if (func_86(9))
			{
				func_85(&iLocal_114);
				iVar1 = 1;
			}
		}
		switch (iVar1)
		{
			case 0:
				if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
				{
					iVar3 = func_84(unk_0x16F2683693E537C9());
					if ((iVar3 == 0 || iVar3 == 2) || iVar3 == 1)
					{
						func_83();
						if (!func_82(Global_1B416.f_4A94, 64))
						{
							func_80(&(Global_1B416.f_4A94), 64);
						}
						func_79(&uLocal_120);
						iVar1 = 1;
						func_77(&iLocal_114);
					}
				}
				iVar2 = 100;
				break;
			
			case 1:
				if (func_76(1))
				{
					iLocal_105 = unk_0x1C0640BA9A7327B3();
				}
				if (!func_75() && !Global_175B8)
				{
					if (iVar1 != 2)
					{
						if ((!unk_0xC8BC75555A67090D() && !bVar0) && !func_74(5))
						{
							func_71();
							if (func_70())
							{
								if (!iLocal_109)
								{
									if (func_68() == 2)
									{
										if (!func_82(Global_1B416.f_4A94, 1))
										{
											switch (func_67("TC_H_TOODAMAGED"))
											{
												case 2:
													func_65("TC_H_TOODAMAGED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													func_80(&(Global_1B416.f_4A94), 1);
													break;
												}
										}
									}
									else
									{
										func_90(&(Global_1B416.f_4A94), 1);
									}
									iLocal_109 = 1;
								}
								if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0)
								{
									iLocal_102 = 0;
								}
								else if (bLocal_110)
								{
									if (!func_82(Global_1B416.f_4A94, 16384))
									{
										switch (func_67("TC_ANOTHERJOB"))
										{
											case 2:
												func_65("TC_ANOTHERJOB", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_80(&(Global_1B416.f_4A94), 16384);
												break;
											}
									}
								}
								else if (!func_82(Global_1B416.f_4A94, 16))
								{
									if (!iLocal_112)
									{
										switch (func_67("TC_HOWTOSTART"))
										{
											case 2:
												func_65("TC_HOWTOSTART", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												iLocal_106 = unk_0x1C0640BA9A7327B3();
												iLocal_112 = 1;
												if (func_64("TC_HOWTOSTART"))
												{
													Global_1B416.f_4A94.f_16[15]++;
												}
												if (Global_1B416.f_4A94.f_16[15] >= 5)
												{
													func_80(&(Global_1B416.f_4A94), 16);
												}
												break;
											}
										}
								}
								if (unk_0xE4EDC4B0E92C078B(iLocal_101))
								{
									unk_0x142CC44DB769B57E(&iLocal_101);
								}
								switch (iLocal_102)
								{
									case 0:
										if (func_68() == 0)
										{
											if (!func_63(&iLocal_114))
											{
												func_62(&iLocal_114);
											}
											if (func_63(&iLocal_117))
											{
												func_85(&iLocal_117);
											}
											if (func_59(&iLocal_114) > 20f)
											{
												if (!unk_0xFEBC1E4EC9E001F0() && func_58())
												{
													iLocal_103 = 9;
													StringCopy(&vLocal_97, "Taxi_Procedural", 24);
													func_57(&uLocal_120, 8, 0, "TaxiDispatch", 0, 1);
													func_56(&uLocal_120, "OJTXAUD", "OJTX_PRO_OFF", 2, 0, 0, 0);
													func_77(&iLocal_114);
													iLocal_102 = 1;
												}
												else if (!func_58())
												{
													if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
													{
													}
												}
											}
										}
										break;
									
									case 1:
										if (!func_63(&iLocal_114))
										{
											func_62(&iLocal_114);
										}
										if (func_59(&iLocal_114) >= 6f)
										{
											switch (func_67("TC_JOBOFFERED"))
											{
												case 2:
													func_65("TC_JOBOFFERED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													iLocal_108 = 1;
													func_77(&iLocal_114);
													iLocal_102 = 2;
													break;
											}
											if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
											{
											}
										}
										break;
									
									case 2:
										if (!func_63(&iLocal_114))
										{
											func_62(&iLocal_114);
										}
										if (func_59(&iLocal_114) > 15f)
										{
											if (!func_82(Global_1B416.f_4A94, 32))
											{
												func_55("TC_MISSEDJOB", 4294967295);
												func_80(&(Global_1B416.f_4A94), 32);
											}
											fLocal_107 = (unk_0x79833B02DBD2A244(10f, 40f) + func_59(&iLocal_114));
											iLocal_102 = 3;
										}
										else if (iLocal_108)
										{
											if (func_59(&iLocal_114) > 6f)
											{
												iLocal_108 = 0;
												unk_0xA37A90C62806D848(1);
											}
										}
										break;
									
									case 3:
										if (!func_63(&iLocal_114))
										{
											func_62(&iLocal_114);
										}
										if (func_59(&iLocal_114) > fLocal_107)
										{
											func_85(&iLocal_114);
											iLocal_102 = 0;
										}
										break;
								}
								if (((unk_0x06F8112AA79C53D9(0, 86) && !unk_0x377BE9A1BF38C7CE(unk_0x16F2683693E537C9())) && !Global_78C7) && (unk_0x1C0640BA9A7327B3() - iLocal_105) > 3000)
								{
									iVar4 = func_68();
									if (iVar4 == 0)
									{
										if (iLocal_102 == 0 || iLocal_102 == 3)
										{
											func_79(&uLocal_120);
											iLocal_103 = 9;
											func_33(iLocal_103, &vLocal_97, &uLocal_120, 0);
											iLocal_111 = 1;
											iVar1 = 4;
										}
										else
										{
											unk_0x790015DC92C918E2();
											unk_0xA37A90C62806D848(1);
											if (!func_82(Global_1B416.f_4A94, 128))
											{
												func_80(&(Global_1B416.f_4A94), 128);
											}
											iVar1 = 4;
										}
										unk_0x92DCE5C81176D2B4(&vLocal_97);
										func_85(&iLocal_114);
										iVar2 = 0;
									}
									else if (iVar4 == 2)
									{
										if (!unk_0xFEBC1E4EC9E001F0())
										{
											func_55("TXC_HEALTH_GONE", 4294967295);
										}
									}
									else if (iVar4 == 3)
									{
										if (!unk_0xFEBC1E4EC9E001F0())
										{
											if (!func_64("TXC_WANTED_WARN"))
											{
												if (!func_82(Global_1B416.f_4A94, 32768))
												{
													func_55("TXC_WANTED_WARN", 4294967295);
													func_80(&(Global_1B416.f_4A94), 32768);
												}
											}
										}
									}
								}
							}
							else
							{
								if (!func_63(&iLocal_117))
								{
									func_62(&iLocal_117);
								}
								else
								{
									if (func_59(&iLocal_117) < 10f)
									{
										if ((unk_0x1C0640BA9A7327B3() % 1000) < 50)
										{
										}
									}
									if (func_59(&iLocal_117) > 10f && iLocal_102 != 0)
									{
										iLocal_102 = 0;
									}
								}
								if (func_32("TC_HOWTOSTART"))
								{
									func_28("TC_HOWTOSTART", 1);
								}
								if (func_32("TC_JOBOFFERED"))
								{
									func_28("TC_JOBOFFERED", 1);
								}
								if (func_32("TC_H_TOODAMAGED"))
								{
									func_28("TC_H_TOODAMAGED", 1);
								}
								if (func_32("TC_ANOTHERJOB"))
								{
									func_28("TC_ANOTHERJOB", 1);
								}
								if (((unk_0x1C0640BA9A7327B3() - iLocal_106) > 60000 && !func_64("TC_HOWTOSTART")) && iLocal_112)
								{
									iLocal_112 = 0;
								}
								if (bLocal_110)
								{
									bLocal_110 = false;
								}
								iLocal_109 = 0;
								func_85(&iLocal_114);
							}
						}
					}
				}
				else if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) != 0)
				{
					iLocal_102 = 0;
				}
				break;
			
			case 4:
				if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
				{
					unk_0x7A6662707CC5CFB0(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 1);
				}
				if (unk_0x1FBF08B001C4788A(&vLocal_97))
				{
					iVar5 = func_24(&iLocal_104, 2, 9, 0, 0);
					if (iVar5 == 1)
					{
						Global_1B065 = 1;
						if (iLocal_111)
						{
							iVar1 = 5;
						}
						else
						{
							iVar1 = 7;
						}
						iVar2 = 0;
					}
					else if (iVar5 == 0)
					{
						iLocal_102 = 0;
						iVar1 = 11;
					}
					else
					{
						func_23("PROCESS_TAXI_DBG_SKIP = Scene is loading.", &iLocal_113, 1000);
					}
				}
				break;
			
			case 5:
				StringCopy(&vVar6, "OJTX_PLRDE1", 24);
				func_22(&vVar6, 1);
				func_56(&uLocal_120, "OJTXAUD", &vVar6, 8, 0, 0, 0);
				iVar1 = 6;
				break;
			
			case 6:
				if (!func_21())
				{
					func_56(&uLocal_120, "OJTXAUD", "OJTX_DIS_JOB", 8, 0, 0, 0);
					iVar1 = 7;
				}
				break;
			
			case 7:
				if (!func_21())
				{
					StringCopy(&vVar7, "OJTX_ACCEPT", 24);
					func_22(&vVar7, 1);
					func_79(&uLocal_120);
					func_56(&uLocal_120, "OJTXAUD", &vVar7, 8, 0, 0, 0);
					iVar1 = 8;
				}
				break;
			
			case 8:
				if (func_70())
				{
					if (!func_21())
					{
						bLocal_110 = false;
						if (func_32("TC_HOWTOSTART"))
						{
							func_28("TC_HOWTOSTART", 1);
						}
						iLocal_96 = SYSTEM::START_NEW_SCRIPT(&vLocal_97, 35000);
						unk_0x5E8C29AE121DF1C7(&vLocal_97);
						if (!func_82(Global_1B416.f_4A94, 4))
						{
							func_80(&(Global_1B416.f_4A94), 4);
							unk_0xAB8E2DDC7AF955E0(func_20(), true);
						}
						func_80(&(Global_1B416.f_4A94), 256);
						StringCopy(&vLocal_97, "", 24);
						iLocal_111 = 0;
						iVar1 = 10;
						iLocal_102 = 0;
					}
				}
				else
				{
					if (func_21())
					{
						func_18();
					}
					bLocal_110 = false;
					iLocal_111 = 0;
					unk_0x5E8C29AE121DF1C7(&vLocal_97);
					func_80(&(Global_1B416.f_4A94), 256);
					StringCopy(&vLocal_97, "", 24);
					iLocal_102 = 0;
					iVar1 = 10;
				}
				break;
			
			case 10:
				if (!unk_0x1727A44C562FBED2(iLocal_96))
				{
					func_90(&(Global_1B416.f_4A94), 2048);
					if (func_82(Global_1B416.f_4A94, 4))
					{
						func_90(&(Global_1B416.f_4A94), 4);
						unk_0xAB8E2DDC7AF955E0(func_20(), false);
					}
					Global_1B065 = 0;
					iLocal_103 = 4294967295;
					iVar1 = 11;
					iVar2 = 0;
				}
				else if (func_82(Global_1B416.f_4A94, 1024))
				{
					func_90(&(Global_1B416.f_4A94), 1024);
					func_11(func_17(iLocal_103), 0, 0);
					bLocal_110 = true;
					func_9(iLocal_103, bLocal_110);
					func_8(1, 0);
					func_5();
				}
				break;
			
			case 11:
				if (func_82(Global_1B416.f_4A94, 256))
				{
					func_90(&(Global_1B416.f_4A94), 256);
					func_4(&iLocal_104);
				}
				iLocal_104 = 4294967295;
				if (!func_3())
				{
					func_8(0, 0);
					func_2();
					StringCopy(&vLocal_97, "", 24);
					if (iLocal_96 != 0)
					{
						if (unk_0x1727A44C562FBED2(iLocal_96))
						{
							unk_0xB3147F6556CFCCAC(iLocal_96);
							iLocal_96 = 0;
						}
					}
					func_85(&iLocal_114);
					func_1(0);
					iLocal_102 = 0;
					iVar1 = 1;
					iVar2 = 0;
				}
				break;
			
			case 12:
				func_89();
				break;
			
			default:
				func_89();
				break;
		}
		SYSTEM::WAIT(iVar2);
	}
}

void func_1(int iParam0)
{
	Global_12C52 = iParam0;
	Global_12C53 = iParam0;
}

void func_2()
{
	vector3 vVar0[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		unk_0x3CFFF3C8EACD8DC1(StackVal, 0, 0, 0);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x8DECFDD6715449E4(0, &cVar0);
	}
}

bool func_3()
{
	return Global_181DF.f_1;
}

void func_4(int iParam0)
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

void func_5()
{
	func_6();
}

int func_6()
{
	if (func_7(0))
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

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0);
}

void func_8(int iParam0, int iParam1)
{
	Global_181DF.f_7 = iParam0;
	Global_181DF.f_8 = iParam1;
}

void func_9(int iParam0, bool bParam1)
{
	func_10();
	if (bParam1)
	{
		Global_1B416.f_4A94.f_1[iParam0 /*2*/] = 1;
		Global_1B416.f_4A94.f_1[iParam0 /*2*/].f_1 = 0;
	}
	else
	{
		Global_1B416.f_4A94.f_1[iParam0 /*2*/] = 0;
		Global_1B416.f_4A94.f_1[iParam0 /*2*/].f_1 = 1;
	}
}

void func_10()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_1B416.f_4A94.f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_15((891 + iParam0), 1, 4294967295, 1);
	}
	bVar0 = true;
	if (Global_1B416.f_27CD[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 11 || Global_1B416.f_27CD[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_1B416.f_27CD[iParam0 /*12*/].f_5 = 1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_A = iParam1;
		Global_1B416.f_27CD[iParam0 /*12*/].f_B = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_12();
	}
}

void func_12()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_1B30E = 0;
	Global_1B30F = 0;
	Global_1B310 = 0;
	Global_1B311 = 0;
	Global_1B312 = 0;
	Global_1B313 = 0;
	Global_1B314 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_1B416.f_27CD.f_F0D;
	Global_1B416.f_27CD.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_1B416.f_27CD[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_1B416.f_27CD[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_1B30E++;
					fVar1 = (fVar1 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_1B30F++;
					fVar2 = (fVar2 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_1B310++;
					fVar3 = (fVar3 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_1B311++;
					fVar4 = (fVar4 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_1B312++;
					fVar5 = (fVar5 + (Global_1B416.f_27CD[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_1B313++;
					fVar6 = (fVar6 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_1B314++;
					fVar7 = (fVar7 + Global_1B416.f_27CD[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_1B2FD > 0)
	{
		if (Global_1B30E == Global_1B2FD)
		{
			fVar1 = 55f;
		}
	}
	if (Global_1B2FE > 0)
	{
		if (Global_1B30F == Global_1B2FE)
		{
			fVar2 = 10f;
		}
	}
	if (Global_1B2FF > 0)
	{
		if (Global_1B310 == Global_1B2FF)
		{
			fVar3 = 0f;
		}
	}
	if (Global_1B300 > 0)
	{
		if (Global_1B311 == Global_1B300)
		{
			fVar4 = 10f;
		}
	}
	if (Global_1B301 > 0)
	{
		if (((Global_1B312 == Global_1B301 || (Global_1B301 * 10 / Global_1B312) < 41) || Global_1B312 > Global_1B304) || Global_1B312 == Global_1B304)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1B416.f_27CD.f_F10, 14))
			{
				if (Global_1B312 == Global_1B301)
				{
					unk_0xE7B2B6A56C007908(joaat("num_rndevents_completed"), Global_1B301, 0);
					unk_0x5D96D8530B3D0904(&(Global_1B416.f_27CD.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_1B302 > 0)
	{
		if (Global_1B313 == Global_1B302)
		{
			fVar6 = 15f;
		}
	}
	if (Global_1B303 > 0)
	{
		if (Global_1B314 == Global_1B303)
		{
			fVar7 = 5f;
		}
	}
	Global_1B416.f_27CD.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_1B312 > Global_1B304 || Global_1B312 == Global_1B304)
	{
		iVar9 = Global_1B304;
	}
	else
	{
		iVar9 = Global_1B312;
	}
	unk_0xCDC520E5E48E63D9(joaat("num_missions_completed"), Global_1B30E, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_missions_available"), Global_1B2FD, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_completed"), Global_1B30F, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_available"), Global_1B2FE, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_completed"), Global_1B310, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_available"), Global_1B2FF, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_completed"), Global_1B311, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_available"), Global_1B300, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_available"), Global_1B304, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_completed"), (Global_1B314 + Global_1B313), 1);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_available"), (Global_1B303 + Global_1B302), 1);
	Global_1B315 = (Global_1B30E * 100 / Global_1B2FD);
	Global_1B317 = ((Global_1B310 + Global_1B30F) * 100 / (Global_1B2FF + Global_1B2FE));
	Global_1B316 = ((Global_1B311 + iVar9) * 100 / (Global_1B300 + Global_1B304));
	Global_1B318 = ((Global_1B313 + Global_1B314) * 100 / (Global_1B302 + Global_1B303));
	unk_0x11F69E56D7B5F3C7(joaat("total_progress_made"), Global_1B416.f_27CD.f_F0D, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_story_missions"), Global_1B315, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_ambient_missions"), Global_1B316, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_oddjobs"), Global_1B317, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D))
	{
		func_14(13, SYSTEM::FLOOR(Global_1B416.f_27CD.f_F0D));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_12B4E)
		{
			if (func_13() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_1B30C = 0;
				}
				if (!Global_F048)
				{
					func_6();
				}
			}
		}
	}
}

int func_13()
{
	return Global_7830;
}

int func_14(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0;
}

int func_15(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_16();
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

int func_16()
{
	return Global_1407E9;
}

int func_17(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

void func_18()
{
	Global_4CD7 = 0;
	func_19();
}

void func_19()
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

int func_20()
{
	return joaat("taxi");
}

int func_21()
{
	if (Global_5145 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_22(char* sParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_84(unk_0x16F2683693E537C9());
	if (iVar0 == 0)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "M", 24);
		}
		else
		{
			StringConCat(sParam0, "_2", 24);
		}
	}
	else if (iVar0 == 2)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "T", 24);
		}
		else
		{
			StringConCat(sParam0, "_3", 24);
		}
	}
	else if (iVar0 == 1)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "F", 24);
		}
		else
		{
			StringConCat(sParam0, "_4", 24);
		}
	}
}

void func_23(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x1C0640BA9A7327B3() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x1C0640BA9A7327B3();
}

int func_24(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_86(0))
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
		if (!func_26(iParam2))
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
			func_25(iParam0, iParam4);
		}
	}
	return 2;
}

void func_25(var uParam0, int iParam1)
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

bool func_26(int iParam0)
{
	return func_27(iParam0, Global_A1D7);
}

int func_27(int iParam0, int iParam1)
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

void func_28(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1AEC6 && iParam1)
	{
		if (func_64(sParam0) && !unk_0x79BBCD5833294FD5())
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
				func_31(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_30((Global_1B416.f_4FB5.f_91 - 1));
			Global_1B416.f_4FB5.f_91 = (Global_1B416.f_4FB5.f_91 - 1);
			func_29();
			return;
		}
		iVar0++;
	}
}

void func_29()
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

void func_30(int iParam0)
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

void func_31(int iParam0, int iParam1)
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

int func_32(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_1B416.f_4FB5.f_91)
	{
		if (unk_0x7F8A39872A07D2CE(sParam0, &(Global_1B416.f_4FB5[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(int iParam0, char* sParam1, var uParam2, bool bParam3)
{
	struct<6> Var0;
	vector3 vVar1[24];
	
	if (iParam0 == 0)
	{
		StringCopy(sParam1, "Taxi_NeedExcitement", 24);
	}
	else if (iParam0 == 1)
	{
		StringCopy(sParam1, "Taxi_TakeItEasy", 24);
	}
	else if (iParam0 == 2)
	{
		StringCopy(sParam1, "Taxi_Deadline", 24);
	}
	else if (iParam0 == 3)
	{
		StringCopy(sParam1, "Taxi_GotYourBack", 24);
	}
	else if (iParam0 == 4)
	{
		StringCopy(sParam1, "Taxi_TakeToBest", 24);
	}
	else if (iParam0 == 5)
	{
		StringCopy(sParam1, "Taxi_CutYouIn", 24);
	}
	else if (iParam0 == 6)
	{
		StringCopy(sParam1, "Taxi_GotYouNow", 24);
	}
	else if (iParam0 == 7)
	{
		StringCopy(sParam1, "Taxi_ClownCar", 24);
	}
	else if (iParam0 == 8)
	{
		StringCopy(sParam1, "Taxi_FollowCar", 24);
	}
	else if (iParam0 == 9)
	{
		StringCopy(sParam1, "Taxi_Procedural", 24);
	}
	if (bParam3)
	{
		StringCopy(&Var0, func_54(iParam0), 24);
		cVar1 = { Var0 };
		StringConCat(&cVar1, "_1", 24);
		func_79(uParam2);
		func_34(uParam2, "OJTXAUD", &Var0, &cVar1, 8, 0, 0);
	}
}

int func_34(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_514C = 0;
	Global_5153 = 0;
	Global_514E = 0;
	Global_5524 = 1;
	Global_5526 = 0;
	Global_552A = 0;
	StringCopy(&Global_5531, sParam3, 24);
	Global_280001 = 0;
	return func_35(sParam2, iParam4, 0);
}

int func_35(char* sParam0, int iParam1, bool bParam2)
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
					func_19();
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
		if (func_52(8, 4294967295))
		{
			return 0;
		}
		Global_5191 = { Global_518B };
		func_51();
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
				func_45();
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
				if (func_44())
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
			if (func_43())
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
			func_42();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0;
		func_41();
		func_36();
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
		func_19();
	}
	return 0;
}

void func_36()
{
	if (!func_37())
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

int func_37()
{
	if (!Global_40001.f_6DB6)
	{
		return 0;
	}
	if (!Global_12B4E)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_40())
	{
		return 0;
	}
	if (func_38(unk_0xD803B885F5E47A62()))
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

bool func_38(int iParam0)
{
	return func_39(iParam0, 20);
}

bool func_39(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_40()
{
	return 4294967295;
}

void func_41()
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

void func_42()
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

int func_43()
{
	if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_44()
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

void func_45()
{
	if (func_74(14))
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
		Global_4C1E = func_46();
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

var func_46()
{
	func_47();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_47()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_49(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_84(unk_0x16F2683693E537C9());
			if (func_48(iVar0) && (!func_74(14) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_48(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_48(int iParam0)
{
	return iParam0 < 3;
}

int func_49(int iParam0)
{
	if (func_48(iParam0))
	{
		return func_50(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_50(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_51()
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

bool func_52(int iParam0, int iParam1)
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

void func_53(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_4F23 = { *uParam0 };
	Global_1A10 = iParam1;
	StringCopy(&Global_518B, sParam2, 24);
	Global_5522 = iParam5;
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

char* func_54(int iParam0)
{
	if (iParam0 == 0)
	{
		return "OJTX_EXC_OFF";
	}
	else if (iParam0 == 1)
	{
		return "OJTX_TIE_OFF";
	}
	else if (iParam0 == 2)
	{
		return "OJTX_DL_OFF";
	}
	else if (iParam0 == 3)
	{
		return "OJTX_GB_OFF";
	}
	else if (iParam0 == 4)
	{
		return "OJTX_TB_OFF";
	}
	else if (iParam0 == 5)
	{
		return "OJTX_CI_OFF";
	}
	else if (iParam0 == 6)
	{
		return "OJTX_GN_OFF";
	}
	else if (iParam0 == 7)
	{
		return "OJTX_CC_OFF";
	}
	else if (iParam0 == 8)
	{
		return "OJTX_FC_OFF";
	}
	else if (iParam0 == 9)
	{
		return "OJTX_PRO_OFF";
	}
	return "";
}

void func_55(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

int func_56(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_35(sParam2, iParam3, 0);
}

void func_57(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_58()
{
	int iVar0;
	
	iVar0 = unk_0x1C0640BA9A7327B3();
	if (Global_5145 == 0)
	{
		if ((iVar0 - Global_5543) > 3000)
		{
			if (unk_0x25037C66EB32B076() == 0)
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
	return 0;
}

float func_59(int iParam0)
{
	if (func_63(iParam0))
	{
		if (func_61(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_60(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_60(bool bParam0)
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

bool func_61(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 2);
}

void func_62(int iParam0)
{
	if (!func_63(iParam0))
	{
		func_77(iParam0);
	}
}

bool func_63(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*iParam0, 1);
}

bool func_64(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0);
}

void func_65(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_66(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_66(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_29();
	}
}

int func_67(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, &Global_1AEC9))
	{
		return 1;
	}
	if (func_32(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_70())
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		iVar1 = SYSTEM::ROUND(unk_0x6EE94F60DA2A2273(iVar0));
		iVar2 = unk_0x7F6DC62EA9922664(iVar0);
		if (iVar1 < 100 || iVar2 < 100)
		{
			return 2;
		}
		if (!func_69(iVar0))
		{
			return 2;
		}
		if (unk_0x179932739160BA96(unk_0xD803B885F5E47A62()) > 0)
		{
			return 3;
		}
	}
	return 0;
}

int func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x464B3D84B739AE72(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x464B3D84B739AE72(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x8E39AC3C76C8AA58(unk_0x134B62B726CEC8E6(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x1150BCE24B1630AC(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x1150BCE24B1630AC(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_70()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0xA30B8362589C124A(iVar0, 4294967295, 0) == unk_0x16F2683693E537C9())
				{
					if (unk_0x4906F8A34E9F4814(iVar0, func_20()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_71()
{
	if (!func_82(Global_1B416.f_4A94, 8192))
	{
		if (func_70())
		{
			func_80(&(Global_1B416.f_4A94), 8192);
			func_73();
		}
	}
	else if (!func_70())
	{
		func_90(&(Global_1B416.f_4A94), 8192);
		func_72();
	}
}

void func_72()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0))
	{
		unk_0xCEAA091B490F8407(4294967295, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_73()
{
	int iVar0;
	
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xDF1306B443CD3D15(iVar0, 0))
	{
		unk_0xCEAA091B490F8407(4294967295, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

bool func_74(int iParam0)
{
	return Global_A1D7 == iParam0;
}

int func_75()
{
	if (Global_A1D7 == 15)
	{
		return 0;
	}
	return 1;
}

int func_76(bool bParam0)
{
	if (Global_56C3.f_82)
	{
		return 0;
	}
	if (unk_0xB9132A06AE472728(0, 19) || (!bParam0 && unk_0x9A01369A10646AFE(0, 19)))
	{
		return 1;
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xB9132A06AE472728(0, 166))
		{
			if ((!unk_0x06F8112AA79C53D9(0, 167) && !unk_0x06F8112AA79C53D9(0, 168)) && !unk_0x06F8112AA79C53D9(0, 169))
			{
				return 1;
			}
		}
		else if (unk_0xB9132A06AE472728(0, 167))
		{
			if ((!unk_0x06F8112AA79C53D9(0, 166) && !unk_0x06F8112AA79C53D9(0, 168)) && !unk_0x06F8112AA79C53D9(0, 169))
			{
				return 1;
			}
		}
		else if (unk_0xB9132A06AE472728(0, 168))
		{
			if ((!unk_0x06F8112AA79C53D9(0, 166) && !unk_0x06F8112AA79C53D9(0, 167)) && !unk_0x06F8112AA79C53D9(0, 169))
			{
				return 1;
			}
		}
		else if (unk_0xB9132A06AE472728(0, 169))
		{
			if ((!unk_0x06F8112AA79C53D9(0, 166) && !unk_0x06F8112AA79C53D9(0, 167)) && !unk_0x06F8112AA79C53D9(0, 168))
			{
				return 1;
			}
		}
		if (!bParam0)
		{
			if (unk_0x9A01369A10646AFE(0, 166))
			{
				if ((!unk_0x7FEE810EE9E768EB(0, 167) && !unk_0x7FEE810EE9E768EB(0, 168)) && !unk_0x7FEE810EE9E768EB(0, 169))
				{
					return 1;
				}
			}
			else if (unk_0x9A01369A10646AFE(0, 167))
			{
				if ((!unk_0x7FEE810EE9E768EB(0, 166) && !unk_0x7FEE810EE9E768EB(0, 168)) && !unk_0x7FEE810EE9E768EB(0, 169))
				{
					return 1;
				}
			}
			else if (unk_0x9A01369A10646AFE(0, 168))
			{
				if ((!unk_0x7FEE810EE9E768EB(0, 166) && !unk_0x7FEE810EE9E768EB(0, 167)) && !unk_0x7FEE810EE9E768EB(0, 169))
				{
					return 1;
				}
			}
			else if (unk_0x9A01369A10646AFE(0, 169))
			{
				if ((!unk_0x7FEE810EE9E768EB(0, 166) && !unk_0x7FEE810EE9E768EB(0, 167)) && !unk_0x7FEE810EE9E768EB(0, 168))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_77(int iParam0)
{
	func_78(iParam0, 0f);
}

void func_78(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_60(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_79(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_84(unk_0x16F2683693E537C9());
	if (iVar0 == 0)
	{
		func_57(uParam0, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_57(uParam0, 0, unk_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_57(uParam0, 0, unk_0x16F2683693E537C9(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_57(uParam0, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_57(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_80(var uParam0, int iParam1)
{
	func_81(uParam0, iParam1);
}

void func_81(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_82(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_83()
{
	int iVar0;
	
	if (func_82(Global_1B416.f_4A94, 2048))
	{
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			Global_1B416.f_4A94.f_1[0 /*2*/] = 0;
			Global_1B416.f_4A94.f_1[0 /*2*/].f_1 = 0;
			iVar0++;
		}
	}
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_85(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_86(int iParam0)
{
	if (Global_A1D7 == 15)
	{
		return 0;
	}
	if (func_26(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_87(int iParam0, int iParam1)
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

int func_88(int iParam0)
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

void func_89()
{
	if (func_82(Global_1B416.f_4A94, 4))
	{
		func_90(&(Global_1B416.f_4A94), 4);
		unk_0xAB8E2DDC7AF955E0(func_20(), false);
	}
	if (func_82(Global_1B416.f_4A94, 256))
	{
		func_90(&(Global_1B416.f_4A94), 256);
		func_4(&iLocal_104);
	}
	if (iLocal_96 != 0)
	{
		if (unk_0x1727A44C562FBED2(iLocal_96))
		{
			unk_0xB3147F6556CFCCAC(iLocal_96);
			iLocal_96 = 0;
		}
	}
	if (unk_0x4880526EC51D1C27(&vLocal_97) != 0)
	{
		unk_0x5E8C29AE121DF1C7(&vLocal_97);
	}
	if (unk_0xE4EDC4B0E92C078B(iLocal_101))
	{
		unk_0x142CC44DB769B57E(&iLocal_101);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_90(var uParam0, int iParam1)
{
	func_91(uParam0, iParam1);
}

void func_91(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

