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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
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
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
#endregion

void __EntryFunction__()
{
	var uVar0;
	bool bVar1;
	
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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_66 = 0.952f;
	fLocal_67 = 0.949f;
	if (unk_0x2EBF608FFE6CA406(32))
	{
		unk_0x10FAF14A60A0DBE1();
	}
	unk_0xB57F88F0123F4C38();
	while (true)
	{
		if (func_244(&uVar0, 5, 0))
		{
			func_41();
		}
		if (Global_150976.f_1 == 0)
		{
			bVar1 = true;
		}
		func_40();
		func_39();
		func_11();
		if (bVar1)
		{
			unk_0xF5A41F3D3B38EFE3("timerbar_lines");
			func_1();
			unk_0x10FAF14A60A0DBE1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	int iVar0;
	struct<2> Var1;
	
	func_10();
	func_9();
	func_8();
	func_7();
	func_6();
	func_5();
	func_4();
	func_3();
	func_2();
	Global_150976 = 0;
	Global_150976.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_150976.f_2[iVar0 /*2*/] = { Var1 };
		Global_150976.f_17[iVar0 /*2*/] = { Var1 };
		Global_150976.f_2C[iVar0 /*2*/] = { Var1 };
		Global_150976.f_41[iVar0 /*2*/] = { Var1 };
		Global_150976.f_56[iVar0 /*2*/] = { Var1 };
		Global_150976.f_6B[iVar0 /*2*/] = { Var1 };
		Global_150976.f_80[iVar0 /*2*/] = { Var1 };
		Global_150976.f_95[iVar0 /*2*/] = { Var1 };
		Global_150976.f_AA[iVar0 /*2*/] = { Var1 };
		Global_150976.f_BF[iVar0 /*2*/] = { Var1 };
		Global_150976.f_D4[iVar0 /*2*/] = { Var1 };
		Global_150976.f_E9[iVar0 /*2*/] = { Var1 };
		Global_150976.f_FE[iVar0 /*2*/] = { Var1 };
		Global_150976.f_113[iVar0 /*2*/] = { Var1 };
		Global_150976.f_128[iVar0 /*2*/] = { Var1 };
		Global_150976.f_13D[iVar0 /*2*/] = { Var1 };
		Global_150976.f_152[iVar0 /*2*/] = { Var1 };
		Global_150976.f_167[iVar0 /*2*/] = { Var1 };
		Global_150976.f_1D0[iVar0 /*2*/] = { Var1 };
		Global_150976.f_1E5[iVar0 /*2*/] = { Var1 };
		Global_150976.f_1FA[iVar0 /*2*/] = { Var1 };
		Global_150976.f_20F[iVar0 /*2*/] = { Var1 };
		Global_150976.f_224[iVar0 /*2*/] = { Var1 };
		Global_150976.f_239[iVar0 /*2*/] = { Var1 };
		Global_150976.f_24E[iVar0 /*2*/] = { Var1 };
		Global_150976.f_263[iVar0 /*2*/] = { Var1 };
		Global_150976.f_278[iVar0 /*2*/] = { Var1 };
		Global_150976.f_28D[iVar0 /*2*/] = { Var1 };
		Global_150976.f_2A2[iVar0 /*2*/] = { Var1 };
		Global_150976.f_2B7[iVar0 /*2*/] = { Var1 };
		Global_150976.f_2CC[iVar0 /*2*/] = { Var1 };
		Global_150976.f_2E1[iVar0 /*2*/] = { Var1 };
		Global_150976.f_2F6[iVar0 /*2*/] = { Var1 };
		Global_150976.f_30B[iVar0 /*2*/] = { Var1 };
		Global_150976.f_35F[iVar0 /*2*/] = { Var1 };
		Global_150976.f_43F[iVar0 /*2*/] = { Var1 };
		Global_150976.f_37F[iVar0 /*2*/] = { Var1 };
		Global_150976.f_39F[iVar0 /*2*/] = { Var1 };
		Global_150976.f_3BF[iVar0 /*2*/] = { Var1 };
		Global_150976.f_3DF[iVar0 /*2*/] = { Var1 };
		Global_150976.f_3FF[iVar0 /*2*/] = { Var1 };
		Global_150976.f_41F[iVar0 /*2*/] = { Var1 };
		Global_150976.f_374[iVar0] = 0;
		Global_150976.f_394[iVar0] = 0;
		Global_150976.f_3B4[iVar0] = 0;
		Global_150976.f_3D4[iVar0] = 0;
		Global_150976.f_3F4[iVar0] = 0;
		Global_150976.f_414[iVar0] = 0;
		Global_150976.f_434[iVar0] = 0;
		Global_150976.f_454[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 13)
	{
		Global_150976.f_1895[iVar0] = 0;
		Global_150976.f_18A3[iVar0] = 0;
		Global_150976.f_18B1[iVar0] = 0;
		Global_150976.f_18BF[iVar0] = 0;
		iVar0++;
	}
	Global_150976.f_18CD = 0;
	Global_150976.f_18CE = 0f;
}

void func_2()
{
	struct<227> Var0;
	
	Var0 = 10;
	Var0.f_B = 10;
	Var0.f_AC = 10;
	Var0.f_B7 = 10;
	Var0.f_C2 = 10;
	Var0.f_CD = 10;
	Var0.f_D8 = 10;
	if (Global_2537E1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_150976.f_1363), &Var0, 227);
	}
	else
	{
		Global_150976.f_1363 = { Var0 };
	}
}

void func_3()
{
	struct<401> Var0;
	
	Var0 = 10;
	Var0.f_B = 10;
	Var0.f_AC = 10;
	Var0.f_B7 = 10;
	Var0.f_C2 = 10;
	Var0.f_CD = 10;
	Var0.f_D8 = 10;
	Var0.f_E3 = 10;
	Var0.f_EE = 10;
	Var0.f_F9 = 10;
	Var0.f_104 = 10;
	Var0.f_10F = 10;
	Var0.f_11A = 10;
	Var0.f_12F = 10;
	Var0.f_13A = 10;
	Var0.f_145 = 10;
	Var0.f_150 = 10;
	Var0.f_165 = 10;
	Var0.f_170 = 10;
	Var0.f_17B = 10;
	Var0.f_186 = 10;
	if (Global_2537E1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_150976.f_11D2), &Var0, 401);
	}
	else
	{
		Global_150976.f_11D2 = { Var0 };
	}
}

void func_4()
{
	struct<618> Var0;
	
	Var0 = 10;
	Var0.f_B = 10;
	Var0.f_AC = 10;
	Var0.f_B7 = 10;
	Var0.f_C2 = 10;
	Var0.f_CD = 10;
	Var0.f_D8 = 10;
	Var0.f_E3 = 10;
	Var0.f_EE = 10;
	Var0.f_F9 = 10;
	Var0.f_104 = 10;
	Var0.f_10F = 10;
	Var0.f_11A = 10;
	Var0.f_1BB = 10;
	Var0.f_1C6 = 10;
	Var0.f_1D1 = 10;
	Var0.f_1E6 = 10;
	Var0.f_1F1 = 10;
	Var0.f_1FC = 10;
	Var0.f_207 = 10;
	Var0.f_212 = 10;
	Var0.f_21D = 10;
	Var0.f_228 = 10;
	Var0.f_233 = 10;
	Var0.f_23E = 10;
	Var0.f_249 = 10;
	Var0.f_254 = 10;
	Var0.f_25F = 10;
	if (Global_2537E1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_150976.f_F68), &Var0, 618);
	}
	else
	{
		Global_150976.f_F68 = { Var0 };
	}
}

void func_5()
{
	struct<314> Var0;
	
	Var0 = 10;
	Var0.f_B = 10;
	Var0.f_AC = 10;
	Var0.f_B7 = 10;
	Var0.f_C2 = 10;
	Var0.f_CD = 10;
	Var0.f_D8 = 10;
	Var0.f_E3 = 10;
	Var0.f_EE = 10;
	Var0.f_103 = 10;
	Var0.f_10E = 10;
	Var0.f_119 = 10;
	Var0.f_124 = 10;
	Var0.f_12F = 10;
	if (Global_2537E1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_150976.f_E2E), &Var0, 314);
	}
	else
	{
		Global_150976.f_E2E = { Var0 };
	}
}

void func_6()
{
	struct<358> Var0;
	
	Var0 = 10;
	Var0.f_B = 10;
	Var0.f_AC = 10;
	Var0.f_B7 = 10;
	Var0.f_C2 = 10;
	Var0.f_CD = 10;
	Var0.f_D8 = 10;
	Var0.f_E3 = 10;
	Var0.f_EE = 10;
	Var0.f_103 = 10;
	Var0.f_10E = 10;
	Var0.f_119 = 10;
	Var0.f_124 = 10;
	Var0.f_12F = 10;
	Var0.f_13A = 10;
	Var0.f_145 = 10;
	Var0.f_150 = 10;
	Var0.f_15B = 10;
	if (Global_2537E1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_150976.f_CC8), &Var0, 358);
	}
	else
	{
		Global_150976.f_CC8 = { Var0 };
	}
}

void func_7()
{
	struct<508> Var0;
	
	Var0 = 10;
	Var0.f_B = 10;
	Var0.f_AC = 10;
	Var0.f_B7 = 10;
	Var0.f_C2 = 10;
	Var0.f_CD = 10;
	Var0.f_D8 = 10;
	Var0.f_E3 = 10;
	Var0.f_F8 = 10;
	Var0.f_103 = 10;
	Var0.f_1A4 = 10;
	Var0.f_1AF = 10;
	Var0.f_1BA = 10;
	Var0.f_1C5 = 10;
	Var0.f_1D0 = 10;
	Var0.f_1DB = 10;
	Var0.f_1E6 = 10;
	Var0.f_1F1 = 10;
	if (Global_2537E1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_150976.f_ACC), &Var0, 508);
	}
	else
	{
		Global_150976.f_ACC = { Var0 };
	}
}

void func_8()
{
	struct<719> Var0;
	
	Var0 = 10;
	Var0.f_B = 10;
	Var0.f_16 = 10;
	Var0.f_21 = 10;
	Var0.f_2C = 10;
	Var0.f_37 = 10;
	Var0.f_42 = 10;
	Var0.f_4D = 10;
	Var0.f_58 = 10;
	Var0.f_63 = 10;
	Var0.f_104 = 10;
	Var0.f_10F = 10;
	Var0.f_11A = 10;
	Var0.f_125 = 10;
	Var0.f_130 = 10;
	Var0.f_13B = 10;
	Var0.f_146 = 10;
	Var0.f_165 = 10;
	Var0.f_170 = 10;
	Var0.f_17B = 10;
	Var0.f_186 = 10;
	Var0.f_191 = 10;
	Var0.f_19C = 10;
	Var0.f_1A7 = 10;
	Var0.f_1B2 = 10;
	Var0.f_1BD = 10;
	Var0.f_1C8 = 10;
	Var0.f_1D3 = 10;
	Var0.f_1DE = 10;
	Var0.f_1E9 = 10;
	Var0.f_1F4 = 10;
	Var0.f_1FF = 10;
	Var0.f_20A = 10;
	Var0.f_215 = 10;
	Var0.f_220 = 10;
	Var0.f_22B = 10;
	Var0.f_240 = 10;
	Var0.f_24B = 10;
	Var0.f_256 = 10;
	Var0.f_261 = 10;
	Var0.f_26C = 10;
	Var0.f_277 = 10;
	Var0.f_282 = 10;
	Var0.f_28D = 10;
	Var0.f_298 = 10;
	Var0.f_2A3 = 10;
	Var0.f_2AE = 10;
	Var0.f_2B9 = 10;
	Var0.f_2C4 = 10;
	if (Global_2537E1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_150976.f_7FD), &Var0, 719);
	}
	else
	{
		Global_150976.f_7FD = { Var0 };
	}
}

void func_9()
{
	struct<345> Var0;
	
	Var0 = 10;
	Var0.f_B = 10;
	Var0.f_16 = 10;
	Var0.f_B7 = 10;
	Var0.f_C2 = 10;
	Var0.f_CD = 10;
	Var0.f_D8 = 10;
	Var0.f_E3 = 10;
	Var0.f_102 = 10;
	Var0.f_10D = 10;
	Var0.f_118 = 10;
	Var0.f_12D = 10;
	Var0.f_138 = 10;
	Var0.f_143 = 10;
	Var0.f_14E = 10;
	if (Global_2537E1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_150976.f_6A4), &Var0, 345);
	}
	else
	{
		Global_150976.f_6A4 = { Var0 };
	}
}

void func_10()
{
	struct<565> Var0;
	
	Var0 = 10;
	Var0.f_B = 10;
	Var0.f_16 = 10;
	Var0.f_B7 = 10;
	Var0.f_C2 = 10;
	Var0.f_CD = 10;
	Var0.f_D8 = 10;
	Var0.f_E3 = 10;
	Var0.f_102 = 10;
	Var0.f_10D = 10;
	Var0.f_118 = 10;
	Var0.f_12D = 10;
	Var0.f_138 = 10;
	Var0.f_143 = 10;
	Var0.f_14E = 10;
	Var0.f_159 = 10;
	Var0.f_164 = 10;
	Var0.f_16F = 10;
	Var0.f_17A = 10;
	Var0.f_185 = 10;
	Var0.f_190 = 10;
	Var0.f_19B = 10;
	Var0.f_1A6 = 10;
	Var0.f_1B1 = 10;
	Var0.f_1BC = 10;
	Var0.f_1C7 = 10;
	Var0.f_1D2 = 10;
	Var0.f_1DD = 10;
	Var0.f_1E8 = 10;
	Var0.f_1F3 = 10;
	Var0.f_1FE = 10;
	Var0.f_209 = 10;
	Var0.f_214 = 10;
	Var0.f_21F = 10;
	Var0.f_22A = 10;
	if (Global_2537E1)
	{
		unk_0xBFC87303F2B2ED31(&(Global_150976.f_46F), &Var0, 565);
	}
	else
	{
		Global_150976.f_46F = { Var0 };
	}
}

void func_11()
{
	int iVar0;
	
	Global_150976 = 0;
	Global_150976.f_460 = 0.725f;
	Global_150976.f_45F = func_30();
	Global_150976.f_1 = 0;
	Global_150976.f_461 = 0;
	Global_150976.f_462 = 0;
	Global_150976.f_463 = 0;
	Global_150976.f_464 = 0;
	Global_150976.f_465 = 0;
	Global_150976.f_466 = 0;
	Global_150976.f_467 = 0;
	Global_150976.f_468 = 0;
	Global_150976.f_469 = 0;
	Global_150976.f_46A = 0;
	Global_150976.f_46B = 0;
	Global_150976.f_46C = 0;
	Global_150976.f_46D = 0;
	Global_150976.f_46E = 0;
	Global_25920E = 0;
	Global_258C16 = 0;
	Global_258C17 = 0;
	Global_2591F5 = 1;
	Global_2594C5 = 0;
	if (func_29(3))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(3, iVar0) && func_27(3, iVar0))
			{
				func_26(iVar0);
				func_25(3, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(6))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(6, iVar0) && func_27(6, iVar0))
			{
				func_24(iVar0);
				func_25(6, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(7))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(7, iVar0) && func_27(7, iVar0))
			{
				func_23(iVar0);
				func_25(7, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(4))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(4, iVar0) && func_27(4, iVar0))
			{
				func_22(iVar0);
				func_25(4, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(5))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(5, iVar0) && func_27(5, iVar0))
			{
				func_21(iVar0);
				func_25(5, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(1))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(1, iVar0) && func_27(1, iVar0))
			{
				func_20(iVar0);
				func_25(1, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(0))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(0, iVar0) && func_27(0, iVar0))
			{
				func_19(iVar0);
				func_25(0, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(2))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(2, iVar0) && func_27(2, iVar0) == 0)
			{
				func_18(iVar0);
				func_25(2, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(8))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(8, iVar0) && func_27(8, iVar0) == 0)
			{
				func_17(iVar0);
				func_25(8, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(9))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(9, iVar0) && func_27(9, iVar0) == 0)
			{
				func_16(iVar0);
				func_25(9, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(10))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(10, iVar0) && func_27(10, iVar0) == 0)
			{
				func_14(iVar0);
				func_25(10, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(11))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(11, iVar0) && func_27(11, iVar0) == 0)
			{
				func_13(iVar0);
				func_25(11, iVar0);
			}
			iVar0++;
		}
	}
	if (func_29(12))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(12, iVar0) && func_27(12, iVar0) == 0)
			{
				func_12(iVar0);
				func_25(12, iVar0);
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0)
{
	Global_150976.f_1703[iParam0] = 0;
	Global_150976.f_1703.f_B[iParam0] = 0;
	Global_150976.f_1703.f_16[iParam0] = 0f;
	StringCopy(&(Global_150976.f_1703.f_21[iParam0 /*6*/]), "", 24);
	Global_150976.f_1703.f_5E[iParam0] = 0;
	Global_150976.f_1703.f_69[iParam0] = 0;
	Global_150976.f_1703.f_74[iParam0] = 0;
	Global_150976.f_1703.f_7F[iParam0] = 0;
	Global_150976.f_1703.f_8A[iParam0] = 0;
	Global_150976.f_1703.f_95[iParam0] = 0;
	Global_150976.f_1703.f_A0[iParam0] = 0;
	Global_150976.f_1703.f_AB[iParam0] = 0;
	Global_150976.f_1703.f_B6[iParam0] = 0;
	Global_150976.f_1703.f_C1[iParam0] = 0;
	Global_150976.f_1703.f_CC[iParam0] = 0;
	Global_150976.f_1703.f_D7[iParam0] = 0;
	Global_150976.f_1703.f_E2[iParam0] = 0;
	Global_150976.f_1703.f_ED[iParam0] = 2;
	Global_150976.f_1703.f_F8[iParam0] = 0;
	Global_150976.f_1703.f_103[iParam0] = 0;
	Global_150976.f_1703.f_10E[iParam0] = 0;
	Global_150976.f_1703.f_119[iParam0] = 0;
	Global_150976.f_1703.f_124[iParam0] = 0;
	Global_150976.f_1703.f_12F[iParam0] = 0;
	Global_150976.f_1703.f_13A[iParam0] = 0;
	Global_150976.f_1703.f_145[iParam0] = 0;
	Global_150976.f_1703.f_150[iParam0] = 0;
	Global_150976.f_1703.f_15B[iParam0] = 0;
	Global_150976.f_1703.f_166[iParam0] = 0;
	Global_150976.f_1703.f_171[iParam0] = 0;
	Global_150976.f_1703.f_17C[iParam0] = 0;
	Global_150976.f_1703.f_187[iParam0] = 0;
}

void func_13(int iParam0)
{
	Global_150976.f_165E[iParam0] = 0;
	Global_150976.f_165E.f_B[iParam0] = 0;
	Global_150976.f_165E.f_16[iParam0] = 0;
	Global_150976.f_165E.f_21[iParam0] = 0;
	Global_150976.f_165E.f_2C[iParam0] = 0;
	Global_150976.f_165E.f_37[iParam0] = 0;
	Global_150976.f_165E.f_42[iParam0] = 0;
	Global_150976.f_165E.f_4D[iParam0] = 0;
	Global_150976.f_165E.f_58[iParam0] = 0;
	Global_150976.f_165E.f_63[iParam0] = 2;
	Global_150976.f_165E.f_6E[iParam0] = 0;
	Global_150976.f_165E.f_79[iParam0] = 0;
	Global_150976.f_165E.f_84[iParam0] = 0;
	Global_150976.f_165E.f_8F[iParam0] = 0;
	Global_150976.f_165E.f_9A[iParam0] = 4294967295;
}

void func_14(int iParam0)
{
	Global_150976.f_1467.f_6[iParam0] = 0;
	Global_150976.f_1467.f_11[iParam0] = 0;
	StringCopy(&(Global_150976.f_1467.f_1C[iParam0 /*16*/]), "", 64);
	Global_150976.f_1467.f_BD[iParam0] = 4294967295;
	Global_150976.f_1467.f_C8[iParam0] = 1;
	Global_150976.f_1467.f_D3[iParam0] = 4294967295;
	Global_150976.f_1467.f_DE[iParam0] = 2;
	Global_150976.f_1467.f_E9[iParam0] = 0;
	Global_150976.f_1467.f_F4[iParam0] = 0;
	func_15(&(Global_150976.f_1467.f_FF[iParam0 /*2*/]));
	Global_150976.f_1467.f_114[iParam0] = 4294967295;
	Global_150976.f_1467.f_1D6[iParam0] = 0;
}

void func_15(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_16(int iParam0)
{
	Global_150976.f_1446[iParam0] = 0;
	Global_150976.f_1446.f_B[iParam0] = 1;
	Global_150976.f_1446.f_16[iParam0] = 2;
}

void func_17(int iParam0)
{
	Global_150976.f_1363[iParam0] = 0f;
	StringCopy(&(Global_150976.f_1363.f_B[iParam0 /*16*/]), "", 64);
	Global_150976.f_1363.f_AC[iParam0] = 0;
	Global_150976.f_1363[iParam0] = 0f;
	Global_150976.f_1363.f_B7[iParam0] = 0;
	Global_150976.f_1363.f_C2[iParam0] = 0;
	Global_150976.f_1363.f_CD[iParam0] = 0;
	Global_150976.f_1363.f_D8[iParam0] = 2;
}

void func_18(int iParam0)
{
	Global_150976.f_7FD[iParam0] = 0;
	Global_150976.f_7FD.f_B[iParam0] = 0;
	Global_150976.f_7FD.f_16[iParam0] = 0;
	Global_150976.f_7FD.f_21[iParam0] = 0;
	Global_150976.f_7FD.f_2C[iParam0] = 0;
	Global_150976.f_7FD.f_37[iParam0] = 0;
	Global_150976.f_7FD.f_42[iParam0] = 0;
	Global_150976.f_7FD.f_4D[iParam0] = 0;
	Global_150976.f_7FD.f_58[iParam0] = 0;
	StringCopy(&(Global_150976.f_7FD.f_63[iParam0 /*16*/]), "", 64);
	Global_150976.f_7FD.f_104[iParam0] = 4294967295;
	Global_150976.f_7FD.f_10F[iParam0] = 4294967295;
	Global_150976.f_7FD.f_11A[iParam0] = 18;
	Global_150976.f_7FD.f_125[iParam0] = 6;
	Global_150976.f_7FD.f_130[iParam0] = 4294967295;
	Global_150976.f_7FD.f_13B[iParam0] = 2;
	Global_150976.f_7FD.f_146[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_150976.f_7FD.f_165[iParam0] = 0;
	Global_150976.f_7FD.f_170[iParam0] = 1;
	Global_150976.f_7FD.f_17B[iParam0] = 1;
	Global_150976.f_7FD.f_186[iParam0] = 1;
	Global_150976.f_7FD.f_191[iParam0] = 1;
	Global_150976.f_7FD.f_19C[iParam0] = 1;
	Global_150976.f_7FD.f_1A7[iParam0] = 1;
	Global_150976.f_7FD.f_1B2[iParam0] = 1;
	Global_150976.f_7FD.f_1BD[iParam0] = 1;
	Global_150976.f_7FD.f_1C8[iParam0] = 1;
	Global_150976.f_7FD.f_1D3[iParam0] = 1;
	Global_150976.f_7FD.f_1DE[iParam0] = 1;
	Global_150976.f_7FD.f_1E9[iParam0] = 1;
	Global_150976.f_7FD.f_1F4[iParam0] = 1;
	Global_150976.f_7FD.f_1FF[iParam0] = 1;
	Global_150976.f_7FD.f_20A[iParam0] = 1;
	Global_150976.f_7FD.f_215[iParam0] = 1;
	func_15(&(Global_150976.f_7FD.f_22B[iParam0 /*2*/]));
	Global_150976.f_7FD.f_240[iParam0] = 4294967295;
	Global_150976.f_7FD.f_261[iParam0] = 0;
}

void func_19(int iParam0)
{
	Global_150976.f_46F[iParam0] = 0;
	Global_150976.f_46F.f_B[iParam0] = 0;
	StringCopy(&(Global_150976.f_46F.f_16[iParam0 /*16*/]), "", 64);
	Global_150976.f_46F.f_B7[iParam0] = 4294967295;
	Global_150976.f_46F.f_C2[iParam0] = 1;
	Global_150976.f_46F.f_CD[iParam0] = 4294967295;
	Global_150976.f_46F.f_D8[iParam0] = 2;
	Global_150976.f_46F.f_E3[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_150976.f_46F.f_102[iParam0] = 0;
	Global_150976.f_46F.f_10D[iParam0] = 0;
	func_15(&(Global_150976.f_46F.f_118[iParam0 /*2*/]));
	Global_150976.f_46F.f_12D[iParam0] = 4294967295;
	Global_150976.f_46F.f_14E[iParam0] = 0;
	Global_150976.f_46F.f_159[iParam0] = 0;
	Global_150976.f_46F.f_164[iParam0] = 0;
	Global_150976.f_46F.f_1BC[iParam0] = 1;
	Global_150976.f_46F.f_1C7[iParam0] = 4294967295;
}

void func_20(int iParam0)
{
	Global_150976.f_6A4[iParam0] = 0;
	Global_150976.f_6A4.f_B[iParam0] = 0;
	StringCopy(&(Global_150976.f_6A4.f_16[iParam0 /*16*/]), "", 64);
	Global_150976.f_6A4.f_B7[iParam0] = 4294967295;
	Global_150976.f_6A4.f_C2[iParam0] = 1;
	Global_150976.f_6A4.f_CD[iParam0] = 4294967295;
	Global_150976.f_6A4.f_D8[iParam0] = 2;
	Global_150976.f_6A4.f_E3[iParam0 /*3*/] = { 0.5f, 0.5f, 0f };
	Global_150976.f_6A4.f_102[iParam0] = 0;
	Global_26DB8D[iParam0] = 0;
	Global_26DB98[iParam0] = 0;
	Global_26DBA3[iParam0] = 0;
	Global_26DBAE[iParam0] = 0;
	Global_26DBB9[iParam0] = 0;
	Global_26DBC4[iParam0] = 0;
	Global_26DBCF[iParam0] = 0;
	Global_26DBDA[iParam0] = 0;
	Global_26DBE5[iParam0] = 0;
	Global_26DBF0[iParam0] = 0;
	Global_26DBFB[iParam0] = 0;
	Global_26DC06[iParam0] = 0;
	Global_26DC11[iParam0] = 0;
	Global_26DC1C[iParam0] = 0;
	Global_26DC27[iParam0] = 0;
	Global_26DC32[iParam0] = 0;
	func_15(&(Global_150976.f_6A4.f_118[iParam0 /*2*/]));
	Global_150976.f_6A4.f_12D[iParam0] = 4294967295;
}

void func_21(int iParam0)
{
	Global_150976.f_E2E[iParam0] = 0;
	StringCopy(&(Global_150976.f_E2E.f_B[iParam0 /*16*/]), "", 64);
	Global_150976.f_E2E.f_AC[iParam0] = 4294967295;
	Global_150976.f_E2E.f_B7[iParam0] = 4294967295;
	Global_150976.f_E2E.f_C2[iParam0] = 1;
	Global_150976.f_E2E.f_CD[iParam0] = 4294967295;
	Global_150976.f_E2E.f_D8[iParam0] = 2;
	Global_150976.f_E2E.f_E3[iParam0] = 0;
	func_15(&(Global_150976.f_E2E.f_EE[iParam0 /*2*/]));
	Global_150976.f_E2E.f_103[iParam0] = 4294967295;
}

void func_22(int iParam0)
{
	Global_150976.f_CC8[iParam0] = 4294967295;
	StringCopy(&(Global_150976.f_CC8.f_B[iParam0 /*16*/]), "", 64);
	Global_150976.f_CC8.f_AC[iParam0] = 4294967295;
	Global_150976.f_CC8.f_B7[iParam0] = 4294967295;
	Global_150976.f_CC8.f_C2[iParam0] = 1;
	Global_150976.f_CC8.f_CD[iParam0] = 4294967295;
	Global_150976.f_CC8.f_D8[iParam0] = 2;
	Global_150976.f_CC8.f_E3[iParam0] = 0;
	func_15(&(Global_150976.f_CC8.f_EE[iParam0 /*2*/]));
	Global_150976.f_CC8.f_103[iParam0] = 4294967295;
}

void func_23(int iParam0)
{
	Global_150976.f_11D2[iParam0] = 0;
	StringCopy(&(Global_150976.f_11D2.f_B[iParam0 /*16*/]), "", 64);
	Global_150976.f_11D2.f_AC[iParam0] = 4294967295;
	Global_150976.f_11D2.f_B7[iParam0] = 4294967295;
	Global_150976.f_11D2.f_C2[iParam0] = 0;
	Global_150976.f_11D2.f_CD[iParam0] = 1;
	Global_150976.f_11D2.f_D8[iParam0] = 0;
	Global_150976.f_11D2.f_E3[iParam0] = 4294967295;
	Global_150976.f_11D2.f_F9[iParam0] = 2;
	Global_150976.f_11D2.f_104[iParam0] = 0;
	func_15(&(Global_150976.f_11D2.f_11A[iParam0 /*2*/]));
	Global_150976.f_11D2.f_12F[iParam0] = 4294967295;
}

void func_24(int iParam0)
{
	Global_150976.f_F68[iParam0] = 0;
	StringCopy(&(Global_150976.f_F68.f_B[iParam0 /*16*/]), "", 64);
	Global_150976.f_F68.f_AC[iParam0] = 4294967295;
	Global_150976.f_F68.f_B7[iParam0] = 1;
	Global_150976.f_F68.f_C2[iParam0] = 4294967295;
	Global_150976.f_F68.f_104[iParam0] = 2;
	Global_150976.f_F68.f_10F[iParam0] = 0;
	StringCopy(&(Global_150976.f_F68.f_11A[iParam0 /*16*/]), "", 64);
	Global_150976.f_F68.f_1BB[iParam0] = 0;
	Global_150976.f_F68.f_1C6[iParam0] = -1f;
	func_15(&(Global_150976.f_F68.f_1D1[iParam0 /*2*/]));
	Global_150976.f_F68.f_1E6[iParam0] = 4294967295;
	Global_150976.f_F68.f_207[iParam0] = 0;
}

void func_25(int iParam0, int iParam1)
{
	unk_0x0674E58A79778E99(&(Global_150976.f_18B1[iParam0]), iParam1);
}

void func_26(int iParam0)
{
	Global_150976.f_ACC[iParam0] = 0;
	StringCopy(&(Global_150976.f_ACC.f_B[iParam0 /*16*/]), "", 64);
	Global_150976.f_ACC.f_AC[iParam0] = 4294967295;
	Global_150976.f_ACC.f_B7[iParam0] = 1;
	Global_150976.f_ACC.f_C2[iParam0] = 4294967295;
	Global_150976.f_ACC.f_CD[iParam0] = 2;
	Global_150976.f_ACC.f_D8[iParam0] = 0;
	func_15(&(Global_150976.f_ACC.f_E3[iParam0 /*2*/]));
	Global_150976.f_ACC.f_F8[iParam0] = 4294967295;
}

bool func_27(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

bool func_28(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_18B1[iParam0], iParam1);
}

int func_29(int iParam0)
{
	if (Global_150976.f_1895[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

float func_30()
{
	float fVar0;
	
	fVar0 = (0.925f - 0.002f);
	fVar0 = (fVar0 + (-0.036f * IntToFloat(Global_150976.f_461)));
	if (Global_150976.f_462 == 1)
	{
		fVar0 = (fVar0 + -0.15f);
	}
	else if (Global_150976.f_463 == 1)
	{
		fVar0 = (fVar0 + (-0.048f - 0.753f));
	}
	if (Global_150976.f_466 == 1)
	{
		fVar0 = (fVar0 + -0.919f);
	}
	if (Global_150976.f_467 == 1)
	{
		fVar0 = (fVar0 + -0.184f);
	}
	if (Global_150976.f_468 == 1)
	{
		fVar0 = (fVar0 + -0.522f);
	}
	if (Global_150976.f_464 == 1 && Global_150976.f_465 == 0)
	{
		switch (func_32())
		{
			case 0:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 2:
				fVar0 = (fVar0 + -0.405f);
				break;
			
			case 1:
				fVar0 = (fVar0 + -0.414f);
				break;
			
			default:
				if (!func_31())
				{
					fVar0 = (fVar0 + -0.405f);
				}
				break;
			}
	}
	return fVar0;
}

int func_31()
{
	if (unk_0x8A22C4C08282BF26(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	func_33();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_33()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_37(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_36(unk_0x16F2683693E537C9());
			if (func_35(iVar0) && (!func_34(14) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_35(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_34(int iParam0)
{
	return Global_A1D7 == iParam0;
}

bool func_35(int iParam0)
{
	return iParam0 < 3;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_37(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_37(int iParam0)
{
	if (func_35(iParam0))
	{
		return func_38(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_38(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_39()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_150976.f_1895[iVar0] = 0;
		iVar0++;
	}
}

void func_40()
{
	Global_259196 = 0;
}

void func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[12];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (unk_0x0F2D68EDB2457B74())
	{
		if (Global_150976.f_461 == 0)
		{
			func_243(1);
		}
	}
	func_239();
	if (func_234())
	{
		if ((unk_0xF4CCC8CB6DE7F1AE() % 100) == 0)
		{
			if (func_229(unk_0xD803B885F5E47A62()))
			{
				func_228();
			}
		}
		if (func_227())
		{
			Global_150392.f_49B = 1;
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			iVar4 = 0;
			if (func_27(7, iVar0))
			{
				Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_F68.f_104[iVar0];
			}
			iVar4 = 1;
			if (func_27(3, iVar0))
			{
				Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_ACC.f_CD[iVar0];
			}
			iVar4 = 2;
			if (func_27(4, iVar0))
			{
				Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_CC8.f_D8[iVar0];
			}
			iVar4 = 3;
			if (func_27(5, iVar0))
			{
				Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_E2E.f_D8[iVar0];
			}
			iVar4 = 4;
			if (func_27(1, iVar0))
			{
				Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_6A4.f_D8[iVar0];
			}
			iVar4 = 5;
			if (func_27(0, iVar0))
			{
				Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_46F.f_D8[iVar0];
			}
			iVar4 = 6;
			if (func_27(6, iVar0))
			{
				Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_F68.f_104[iVar0];
			}
			iVar4 = 7;
			if (func_27(2, iVar0))
			{
				Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_7FD.f_13B[iVar0];
			}
			iVar4 = 8;
			if (func_27(8, iVar0))
			{
				Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_1363.f_D8[iVar0];
			}
			iVar4 = 9;
			if (func_27(9, iVar0))
			{
				Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_1446.f_16[iVar0];
			}
			iVar4 = 10;
			if (func_27(10, iVar0))
			{
				Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_1467.f_DE[iVar0];
			}
			iVar4 = 11;
			if (func_27(11, iVar0))
			{
				Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_165E.f_63[iVar0];
			}
			iVar4 = 12;
			if (func_27(12, iVar0))
			{
				Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_1703.f_ED[iVar0];
			}
			iVar0++;
		}
		iVar4 = 0;
		if (Global_150392.f_49B == 1)
		{
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar4 = 0;
				if (func_27(7, iVar0))
				{
					Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_11D2.f_F9[iVar0];
					if (Global_150392.f_49C[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_150392.f_52C[iVar4 /*11*/][iVar0] != Global_150976.f_11D2.f_F9[iVar0] && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_11D2.f_F9[iVar0] == 2) || Global_150976.f_11D2.f_F9[iVar0] != 2)) && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_11D2.f_F9[iVar0] == 13) || Global_150976.f_11D2.f_F9[iVar0] != 13))
						{
							Global_150392.f_52C[iVar4 /*11*/][iVar0] = Global_150976.f_11D2.f_F9[iVar0];
						}
					}
				}
				iVar4 = 1;
				if (func_27(3, iVar0))
				{
					Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_ACC.f_CD[iVar0];
					if (Global_150392.f_49C[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_150392.f_52C[iVar4 /*11*/][iVar0] != Global_150976.f_ACC.f_CD[iVar0] && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_ACC.f_CD[iVar0] == 2) || Global_150976.f_ACC.f_CD[iVar0] != 2)) && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_ACC.f_CD[iVar0] == 13) || Global_150976.f_ACC.f_CD[iVar0] != 13))
						{
							Global_150392.f_52C[iVar4 /*11*/][iVar0] = Global_150976.f_ACC.f_CD[iVar0];
						}
					}
				}
				iVar4 = 2;
				if (func_27(4, iVar0))
				{
					Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_CC8.f_D8[iVar0];
					if (Global_150392.f_49C[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_150392.f_52C[iVar4 /*11*/][iVar0] != Global_150976.f_CC8.f_D8[iVar0] && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_CC8.f_D8[iVar0] == 2) || Global_150976.f_CC8.f_D8[iVar0] != 2)) && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_CC8.f_D8[iVar0] == 13) || Global_150976.f_CC8.f_D8[iVar0] != 13))
						{
							Global_150392.f_52C[iVar4 /*11*/][iVar0] = Global_150976.f_CC8.f_D8[iVar0];
						}
					}
				}
				iVar4 = 3;
				if (func_27(5, iVar0))
				{
					Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_E2E.f_D8[iVar0];
					if (Global_150392.f_49C[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_150392.f_52C[iVar4 /*11*/][iVar0] != Global_150976.f_E2E.f_D8[iVar0] && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_E2E.f_D8[iVar0] == 2) || Global_150976.f_E2E.f_D8[iVar0] != 2)) && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_E2E.f_D8[iVar0] == 13) || Global_150976.f_E2E.f_D8[iVar0] != 13))
						{
							Global_150392.f_52C[iVar4 /*11*/][iVar0] = Global_150976.f_E2E.f_D8[iVar0];
						}
					}
				}
				iVar4 = 4;
				if (func_27(1, iVar0))
				{
					Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_6A4.f_D8[iVar0];
					if (Global_150392.f_49C[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_150392.f_52C[iVar4 /*11*/][iVar0] != Global_150976.f_6A4.f_D8[iVar0] && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_6A4.f_D8[iVar0] == 2) || Global_150976.f_6A4.f_D8[iVar0] != 2)) && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_6A4.f_D8[iVar0] == 13) || Global_150976.f_6A4.f_D8[iVar0] != 13))
						{
							Global_150392.f_52C[iVar4 /*11*/][iVar0] = Global_150976.f_6A4.f_D8[iVar0];
						}
					}
				}
				iVar4 = 5;
				if (func_27(0, iVar0))
				{
					Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_46F.f_D8[iVar0];
					if (Global_150392.f_49C[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_150392.f_52C[iVar4 /*11*/][iVar0] != Global_150976.f_46F.f_D8[iVar0] && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_46F.f_D8[iVar0] == 2) || Global_150976.f_46F.f_D8[iVar0] != 2)) && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_46F.f_D8[iVar0] == 13) || Global_150976.f_46F.f_D8[iVar0] != 13))
						{
							Global_150392.f_52C[iVar4 /*11*/][iVar0] = Global_150976.f_46F.f_D8[iVar0];
						}
					}
				}
				iVar4 = 6;
				if (func_27(6, iVar0))
				{
					Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_F68.f_104[iVar0];
					if (Global_150392.f_49C[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_150392.f_52C[iVar4 /*11*/][iVar0] != Global_150976.f_F68.f_104[iVar0] && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_F68.f_104[iVar0] == 2) || Global_150976.f_F68.f_104[iVar0] != 2)) && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_F68.f_104[iVar0] == 13) || Global_150976.f_F68.f_104[iVar0] != 13))
						{
							Global_150392.f_52C[iVar4 /*11*/][iVar0] = Global_150976.f_F68.f_104[iVar0];
						}
					}
				}
				iVar4 = 7;
				if (func_27(2, iVar0))
				{
					Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_7FD.f_13B[iVar0];
					if (Global_150392.f_49C[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_150392.f_52C[iVar4 /*11*/][iVar0] != Global_150976.f_7FD.f_13B[iVar0] && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_7FD.f_13B[iVar0] == 2) || Global_150976.f_7FD.f_13B[iVar0] != 2)) && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_7FD.f_13B[iVar0] == 13) || Global_150976.f_7FD.f_13B[iVar0] != 13))
						{
							Global_150392.f_52C[iVar4 /*11*/][iVar0] = Global_150976.f_7FD.f_13B[iVar0];
						}
					}
				}
				iVar4 = 8;
				if (func_27(8, iVar0))
				{
					Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_1363.f_D8[iVar0];
					if (Global_150392.f_49C[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_150392.f_52C[iVar4 /*11*/][iVar0] != Global_150976.f_1363.f_D8[iVar0] && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_1363.f_D8[iVar0] == 2) || Global_150976.f_1363.f_D8[iVar0] != 2)) && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_1363.f_D8[iVar0] == 13) || Global_150976.f_1363.f_D8[iVar0] != 13))
						{
							Global_150392.f_52C[iVar4 /*11*/][iVar0] = Global_150976.f_1363.f_D8[iVar0];
						}
					}
				}
				iVar4 = 9;
				if (func_27(9, iVar0))
				{
					Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_1446.f_16[iVar0];
					if (Global_150392.f_49C[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_150392.f_52C[iVar4 /*11*/][iVar0] != Global_150976.f_1446.f_16[iVar0] && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_1446.f_16[iVar0] == 2) || Global_150976.f_1446.f_16[iVar0] != 2)) && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_1446.f_16[iVar0] == 13) || Global_150976.f_1446.f_16[iVar0] != 13))
						{
							Global_150392.f_52C[iVar4 /*11*/][iVar0] = Global_150976.f_1446.f_16[iVar0];
						}
					}
				}
				iVar4 = 10;
				if (func_27(10, iVar0))
				{
					Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_1467.f_DE[iVar0];
					if (Global_150392.f_49C[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_150392.f_52C[iVar4 /*11*/][iVar0] != Global_150976.f_1467.f_DE[iVar0] && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_1467.f_DE[iVar0] == 2) || Global_150976.f_1467.f_DE[iVar0] != 2)) && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_1467.f_DE[iVar0] == 13) || Global_150976.f_1467.f_DE[iVar0] != 13))
						{
							Global_150392.f_52C[iVar4 /*11*/][iVar0] = Global_150976.f_1467.f_DE[iVar0];
						}
					}
				}
				iVar4 = 11;
				if (func_27(11, iVar0))
				{
					Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_165E.f_63[iVar0];
					if (Global_150392.f_49C[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_150392.f_52C[iVar4 /*11*/][iVar0] != Global_150976.f_165E.f_63[iVar0] && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_165E.f_63[iVar0] == 2) || Global_150976.f_165E.f_63[iVar0] != 2)) && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_165E.f_63[iVar0] == 13) || Global_150976.f_165E.f_63[iVar0] != 13))
						{
							Global_150392.f_52C[iVar4 /*11*/][iVar0] = Global_150976.f_165E.f_63[iVar0];
						}
					}
				}
				iVar4 = 12;
				if (func_27(12, iVar0))
				{
					Global_150392.f_49C[iVar4 /*11*/][iVar0] = Global_150976.f_1703.f_ED[iVar0];
					if (Global_150392.f_49C[iVar4 /*11*/][iVar0] != 1)
					{
						if ((Global_150392.f_52C[iVar4 /*11*/][iVar0] != Global_150976.f_1703.f_ED[iVar0] && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_1703.f_ED[iVar0] == 2) || Global_150976.f_1703.f_ED[iVar0] != 2)) && ((Global_150392.f_52C[iVar4 /*11*/][iVar0] == 0 && Global_150976.f_1703.f_ED[iVar0] == 13) || Global_150976.f_1703.f_ED[iVar0] != 13))
						{
							Global_150392.f_52C[iVar4 /*11*/][iVar0] = Global_150976.f_1703.f_ED[iVar0];
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_150392.f_49C[iVar1 /*11*/][iVar0] != Global_150392.f_52C[iVar1 /*11*/][iVar0])
					{
						Global_150392.f_52C[iVar1 /*11*/][iVar0] = 0;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				iVar3[iVar2] = 0;
				iVar2++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_150392.f_49C[iVar1 /*11*/][iVar0] == 3)
					{
						iVar3[0] = 1;
					}
					if (Global_150392.f_49C[iVar1 /*11*/][iVar0] == 4)
					{
						iVar3[1] = 1;
					}
					if (Global_150392.f_49C[iVar1 /*11*/][iVar0] == 5)
					{
						iVar3[2] = 1;
					}
					if (Global_150392.f_49C[iVar1 /*11*/][iVar0] == 6)
					{
						iVar3[3] = 1;
					}
					if (Global_150392.f_49C[iVar1 /*11*/][iVar0] == 7)
					{
						iVar3[4] = 1;
					}
					if (Global_150392.f_49C[iVar1 /*11*/][iVar0] == 8)
					{
						iVar3[5] = 1;
					}
					if (Global_150392.f_49C[iVar1 /*11*/][iVar0] == 9)
					{
						iVar3[6] = 1;
					}
					if (Global_150392.f_49C[iVar1 /*11*/][iVar0] == 10)
					{
						iVar3[7] = 1;
					}
					if (Global_150392.f_49C[iVar1 /*11*/][iVar0] == 11)
					{
						iVar3[8] = 1;
					}
					if (Global_150392.f_49C[iVar1 /*11*/][iVar0] == 12)
					{
						iVar3[9] = 1;
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_150392.f_49C[iVar1 /*11*/][iVar0] == 2)
					{
						iVar2 = 0;
						while (iVar2 <= 11)
						{
							if (iVar3[iVar2] == 0)
							{
								Global_150392.f_49C[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_150392.f_52C[iVar1 /*11*/][iVar0] = Global_150392.f_49C[iVar1 /*11*/][iVar0];
								iVar2 = 12;
							}
							iVar2++;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				iVar1 = 0;
				while (iVar1 <= 12)
				{
					if (Global_150392.f_49C[iVar1 /*11*/][iVar0] == 13)
					{
						iVar2 = 11;
						while (iVar2 >= 1)
						{
							if (iVar3[iVar2] == 0 && iVar3[(iVar2 - 1)] == 1)
							{
								Global_150392.f_49C[iVar1 /*11*/][iVar0] = iVar2 + 3;
								iVar3[iVar2] = 1;
								Global_150392.f_52C[iVar1 /*11*/][iVar0] = Global_150392.f_49C[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							else if (iVar2 == 1 && iVar3[0] == 0)
							{
								Global_150392.f_49C[iVar1 /*11*/][iVar0] = 3;
								iVar3[0] = 1;
								Global_150392.f_52C[iVar1 /*11*/][iVar0] = Global_150392.f_49C[iVar1 /*11*/][iVar0];
								iVar2 = 0;
							}
							iVar2 = (iVar2 + 4294967295);
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			Global_150392.f_49B = 0;
		}
		if (Global_150976.f_466)
		{
			iVar5 = 84;
		}
		else
		{
			iVar5 = 66;
		}
		if (func_234())
		{
			iVar1 = 0;
			while (iVar1 <= 13)
			{
				if (func_226(0))
				{
					if (func_29(func_224(0)))
					{
						iVar0 = 0;
						while (iVar0 <= 9)
						{
							iVar6 = func_223(func_224(0));
							if (func_222(iVar6))
							{
								if (Global_150392.f_52C[iVar6 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[iVar6 /*11*/][iVar0] == 1)
								{
									if (func_218(Global_150392.f_49C[iVar6 /*11*/][iVar0]))
									{
										func_214(1);
										if (Global_150976.f_463 == 0)
										{
											unk_0xD02CE72B4B66DC29(82, iVar5);
											unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
										}
										func_213(func_224(0), iVar0);
										if (Global_150976.f_463 == 0)
										{
											unk_0xD59EF13BB60323B9();
										}
										func_214(0);
									}
								}
							}
							iVar0++;
						}
					}
				}
				if (func_226(1))
				{
					if (func_29(func_224(1)))
					{
						iVar0 = 0;
						while (iVar0 <= 9)
						{
							iVar7 = func_223(func_224(1));
							if (func_222(iVar7))
							{
								if (Global_150392.f_52C[iVar7 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[iVar7 /*11*/][iVar0] == 1)
								{
									if (func_218(Global_150392.f_49C[iVar7 /*11*/][iVar0]))
									{
										func_214(1);
										if (Global_150976.f_463 == 0)
										{
											unk_0xD02CE72B4B66DC29(82, iVar5);
											unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
										}
										func_213(func_224(1), iVar0);
										if (Global_150976.f_463 == 0)
										{
											unk_0xD59EF13BB60323B9();
										}
										func_214(0);
									}
								}
							}
							iVar0++;
						}
					}
				}
				if (func_29(7) && !func_212(7))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_150392.f_52C[0 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[0 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_150392.f_49C[0 /*11*/][iVar0]))
							{
								func_214(1);
								if (Global_150976.f_463 == 0)
								{
									unk_0xD02CE72B4B66DC29(82, iVar5);
									unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								}
								func_196(iVar0, Global_150976.f_11D2[iVar0], &(Global_150976.f_11D2.f_B[iVar0 /*16*/]), Global_150976.f_11D2.f_AC[iVar0], Global_150976.f_11D2.f_C2[iVar0], Global_150976.f_11D2.f_D8[iVar0], Global_150976.f_11D2.f_CD[iVar0], Global_150976.f_11D2.f_B7[iVar0], Global_150976.f_11D2.f_E3[iVar0], Global_150976.f_11D2.f_104[iVar0], Global_150976.f_11D2.f_13A[iVar0], Global_150976.f_11D2.f_145[iVar0], Global_150976.f_11D2.f_165[iVar0], Global_150976.f_11D2.f_EE[iVar0], Global_150976.f_11D2.f_10F[iVar0], Global_150976.f_11D2.f_170[iVar0], Global_150976.f_11D2.f_17B[iVar0], Global_150976.f_11D2.f_186[iVar0]);
								if (Global_150976.f_463 == 0)
								{
									unk_0xD59EF13BB60323B9();
								}
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(3) && !func_212(3))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_150392.f_52C[1 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[1 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_150392.f_49C[1 /*11*/][iVar0]))
							{
								func_214(1);
								unk_0xD02CE72B4B66DC29(82, iVar5);
								unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_195(iVar0, Global_150976.f_ACC[iVar0], &(Global_150976.f_ACC.f_B[iVar0 /*16*/]), Global_150976.f_ACC.f_B7[iVar0], Global_150976.f_ACC.f_AC[iVar0], Global_150976.f_ACC.f_C2[iVar0], Global_150976.f_ACC.f_D8[iVar0], &(Global_150976.f_ACC.f_103[iVar0 /*16*/]), Global_150976.f_ACC.f_1A4[iVar0], Global_150976.f_ACC.f_1C5[iVar0], Global_150976.f_ACC.f_1AF[iVar0], Global_150976.f_ACC.f_1BA[iVar0], Global_150976.f_ACC.f_1D0[iVar0], Global_150976.f_ACC.f_1DB[iVar0], Global_150976.f_ACC.f_1E6[iVar0], Global_150976.f_ACC.f_1F1[iVar0]);
								unk_0xD59EF13BB60323B9();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(4) && !func_212(4))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_150392.f_52C[2 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[2 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_150392.f_49C[2 /*11*/][iVar0]))
							{
								func_214(1);
								unk_0xD02CE72B4B66DC29(82, iVar5);
								unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_194(iVar0, Global_150976.f_CC8[iVar0], Global_150976.f_CC8.f_AC[iVar0], &(Global_150976.f_CC8.f_B[iVar0 /*16*/]), Global_150976.f_CC8.f_C2[iVar0], Global_150976.f_CC8.f_B7[iVar0], Global_150976.f_CC8.f_CD[iVar0], Global_150976.f_CC8.f_E3[iVar0], Global_150976.f_CC8.f_10E[iVar0], Global_150976.f_CC8.f_119[iVar0], Global_150976.f_CC8.f_124[iVar0], Global_150976.f_CC8.f_12F[iVar0], Global_150976.f_CC8.f_13A[iVar0], Global_150976.f_CC8.f_145[iVar0], Global_150976.f_CC8.f_150[iVar0], Global_150976.f_CC8.f_15B[iVar0]);
								unk_0xD59EF13BB60323B9();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(5) && !func_212(5))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_150392.f_52C[3 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[3 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_150392.f_49C[3 /*11*/][iVar0]))
							{
								func_214(1);
								unk_0xD02CE72B4B66DC29(82, iVar5);
								unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_193(iVar0, Global_150976.f_E2E[iVar0], Global_150976.f_E2E.f_AC[iVar0], &(Global_150976.f_E2E.f_B[iVar0 /*16*/]), Global_150976.f_E2E.f_C2[iVar0], Global_150976.f_E2E.f_B7[iVar0], Global_150976.f_E2E.f_CD[iVar0], Global_150976.f_E2E.f_E3[iVar0], Global_150976.f_E2E.f_10E[iVar0], Global_150976.f_E2E.f_119[iVar0], Global_150976.f_E2E.f_124[iVar0], Global_150976.f_E2E.f_12F[iVar0]);
								unk_0xD59EF13BB60323B9();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(1) && !func_212(1))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_150392.f_52C[4 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[4 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_150392.f_49C[4 /*11*/][iVar0]))
							{
								func_214(1);
								unk_0xD02CE72B4B66DC29(82, iVar5);
								unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_183(iVar0, Global_150976.f_6A4[iVar0], Global_150976.f_6A4.f_B[iVar0], &(Global_150976.f_6A4.f_16[iVar0 /*16*/]), Global_150976.f_6A4.f_C2[iVar0], Global_150976.f_6A4.f_CD[iVar0], Global_150976.f_6A4.f_102[iVar0], Global_150976.f_6A4.f_B7[iVar0], Global_150976.f_6A4.f_E3[iVar0 /*3*/], Global_150976.f_6A4.f_E3[iVar0 /*3*/].f_1, Global_150976.f_6A4.f_138[iVar0], Global_150976.f_6A4.f_143[iVar0], Global_150976.f_6A4.f_10D[iVar0], Global_26DB8D[iVar0], Global_26DB98[iVar0], Global_26DBA3[iVar0], Global_26DBAE[iVar0], Global_26DBB9[iVar0], Global_26DBC4[iVar0], Global_26DBCF[iVar0], Global_26DBDA[iVar0], Global_150976.f_6A4.f_14E[iVar0]);
								unk_0xD59EF13BB60323B9();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(0) && !func_212(0))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_150392.f_52C[5 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[5 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_150392.f_49C[5 /*11*/][iVar0]))
							{
								func_214(1);
								unk_0xD02CE72B4B66DC29(82, iVar5);
								unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_174(iVar0, Global_150976.f_46F[iVar0], Global_150976.f_46F.f_B[iVar0], &(Global_150976.f_46F.f_16[iVar0 /*16*/]), Global_150976.f_46F.f_C2[iVar0], Global_150976.f_46F.f_B7[iVar0], Global_150976.f_46F.f_E3[iVar0 /*3*/], Global_150976.f_46F.f_E3[iVar0 /*3*/].f_1, Global_150976.f_46F.f_102[iVar0], Global_150976.f_46F.f_CD[iVar0], Global_150976.f_46F.f_10D[iVar0], Global_150976.f_46F.f_138[iVar0], Global_150976.f_46F.f_143[iVar0], Global_150976.f_46F.f_14E[iVar0], Global_150976.f_46F.f_159[iVar0], Global_150976.f_46F.f_164[iVar0], Global_150976.f_46F.f_16F[iVar0], Global_150976.f_46F.f_17A[iVar0], Global_150976.f_46F.f_185[iVar0], Global_150976.f_46F.f_190[iVar0], Global_150976.f_46F.f_19B[iVar0], Global_150976.f_46F.f_1A6[iVar0], Global_150976.f_46F.f_1B1[iVar0], Global_150976.f_46F.f_1BC[iVar0], Global_150976.f_46F.f_1C7[iVar0], Global_150976.f_46F.f_1D2[iVar0], Global_150976.f_46F.f_1DD[iVar0], Global_150976.f_46F.f_1E8[iVar0], Global_150976.f_46F.f_1F3[iVar0], Global_150976.f_46F.f_1FE[iVar0], Global_150976.f_46F.f_209[iVar0], Global_150976.f_46F.f_214[iVar0], Global_150976.f_46F.f_21F[iVar0], Global_150976.f_46F.f_22A[iVar0]);
								unk_0xD59EF13BB60323B9();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(6) && !func_212(6))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_150392.f_52C[6 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[6 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_150392.f_49C[6 /*11*/][iVar0]))
							{
								func_214(1);
								unk_0xD02CE72B4B66DC29(82, iVar5);
								unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_164(iVar0, Global_150976.f_F68[iVar0], &(Global_150976.f_F68.f_B[iVar0 /*16*/]), Global_150976.f_F68.f_B7[iVar0], Global_150976.f_F68.f_AC[iVar0], Global_150976.f_F68.f_C2[iVar0], Global_150976.f_F68.f_10F[iVar0], &(Global_150976.f_F68.f_11A[iVar0 /*16*/]), Global_150976.f_F68.f_1BB[iVar0], Global_150976.f_F68.f_1C6[iVar0], Global_150976.f_F68.f_1F1[iVar0], Global_150976.f_F68.f_1FC[iVar0], Global_150976.f_F68.f_CD[iVar0], Global_150976.f_F68.f_D8[iVar0], Global_150976.f_F68.f_E3[iVar0], Global_150976.f_F68.f_EE[iVar0], Global_150976.f_F68.f_F9[iVar0], Global_150976.f_F68.f_207[iVar0], Global_150976.f_F68.f_212[iVar0], Global_150976.f_F68.f_21D[iVar0], Global_150976.f_F68.f_228[iVar0], Global_150976.f_F68.f_233[iVar0], Global_150976.f_F68.f_23E[iVar0], Global_150976.f_F68.f_249[iVar0], Global_150976.f_F68.f_254[iVar0], Global_150976.f_F68.f_25F[iVar0]);
								unk_0xD59EF13BB60323B9();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(2) && !func_212(2))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_150392.f_52C[7 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[7 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_150392.f_49C[7 /*11*/][iVar0]))
							{
								func_214(1);
								unk_0xD02CE72B4B66DC29(82, iVar5);
								unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_152(iVar0, Global_150976.f_7FD[iVar0], &(Global_150976.f_7FD.f_63[iVar0 /*16*/]), Global_150976.f_7FD.f_11A[iVar0], Global_150976.f_7FD.f_125[iVar0], Global_150976.f_7FD.f_104[iVar0], Global_150976.f_7FD.f_B[iVar0], Global_150976.f_7FD.f_16[iVar0], Global_150976.f_7FD.f_21[iVar0], Global_150976.f_7FD.f_2C[iVar0], Global_150976.f_7FD.f_37[iVar0], Global_150976.f_7FD.f_42[iVar0], Global_150976.f_7FD.f_4D[iVar0], Global_150976.f_7FD.f_58[iVar0], Global_150976.f_7FD.f_10F[iVar0], Global_150976.f_7FD.f_130[iVar0], Global_150976.f_7FD.f_165[iVar0], Global_150976.f_7FD.f_146[iVar0 /*3*/], Global_150976.f_7FD.f_146[iVar0 /*3*/].f_1, Global_150976.f_7FD.f_170[iVar0], Global_150976.f_7FD.f_17B[iVar0], Global_150976.f_7FD.f_186[iVar0], Global_150976.f_7FD.f_191[iVar0], Global_150976.f_7FD.f_19C[iVar0], Global_150976.f_7FD.f_1A7[iVar0], Global_150976.f_7FD.f_1B2[iVar0], Global_150976.f_7FD.f_1BD[iVar0], Global_150976.f_7FD.f_1C8[iVar0], Global_150976.f_7FD.f_1D3[iVar0], Global_150976.f_7FD.f_1DE[iVar0], Global_150976.f_7FD.f_1E9[iVar0], Global_150976.f_7FD.f_1F4[iVar0], Global_150976.f_7FD.f_1FF[iVar0], Global_150976.f_7FD.f_20A[iVar0], Global_150976.f_7FD.f_215[iVar0], Global_150976.f_7FD.f_24B[iVar0], Global_150976.f_7FD.f_256[iVar0], Global_150976.f_7FD.f_220[iVar0], Global_26DBE5[iVar0], Global_26DBF0[iVar0], Global_26DBFB[iVar0], Global_26DC06[iVar0], Global_26DC11[iVar0], Global_26DC1C[iVar0], Global_26DC27[iVar0], Global_26DC32[iVar0], Global_150976.f_7FD.f_261[iVar0], Global_150976.f_7FD.f_26C[iVar0], Global_150976.f_7FD.f_277[iVar0], Global_150976.f_7FD.f_282[iVar0], Global_150976.f_7FD.f_28D[iVar0], Global_150976.f_7FD.f_298[iVar0], Global_150976.f_7FD.f_2A3[iVar0], Global_150976.f_7FD.f_2AE[iVar0], Global_150976.f_7FD.f_2B9[iVar0], Global_150976.f_7FD.f_2C4[iVar0]);
								unk_0xD59EF13BB60323B9();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(8) && !func_212(8))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_150392.f_52C[8 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[8 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_150392.f_49C[8 /*11*/][iVar0]))
							{
								func_214(1);
								unk_0xD02CE72B4B66DC29(82, iVar5);
								unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_149(iVar0, &(Global_150976.f_1363.f_B[iVar0 /*16*/]), Global_150976.f_1363[iVar0], Global_150976.f_1363.f_AC[iVar0], Global_150976.f_1363.f_B7[iVar0], Global_150976.f_1363.f_C2[iVar0], Global_150976.f_1363.f_CD[iVar0]);
								unk_0xD59EF13BB60323B9();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(9) && !func_212(9))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_150392.f_52C[9 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[9 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_150392.f_49C[9 /*11*/][iVar0]))
							{
								func_214(1);
								unk_0xD02CE72B4B66DC29(82, iVar5);
								unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_143(iVar0, Global_150976.f_1446[iVar0], Global_150976.f_1446.f_B[iVar0]);
								unk_0xD59EF13BB60323B9();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(10) && !func_212(10))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_150392.f_52C[10 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[10 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_150392.f_49C[10 /*11*/][iVar0]))
							{
								func_214(1);
								unk_0xD02CE72B4B66DC29(82, iVar5);
								unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_112(iVar0, Global_150976.f_1467.f_6[iVar0], Global_150976.f_1467.f_11[iVar0], &(Global_150976.f_1467.f_1C[iVar0 /*16*/]), Global_150976.f_1467.f_C8[iVar0], Global_150976.f_1467.f_BD[iVar0], Global_150976.f_1467.f_E9[iVar0], Global_150976.f_1467.f_D3[iVar0], Global_150976.f_1467.f_F4[iVar0], Global_150976.f_1467.f_11F[iVar0], Global_150976.f_1467.f_12A[iVar0], &(Global_150976.f_1467.f_135[iVar0 /*16*/]), &(Global_150976.f_1467), Global_150976.f_1467.f_1D6[iVar0], Global_150976.f_1467.f_1E1[iVar0], Global_150976.f_1467.f_1EC[iVar0]);
								unk_0xD59EF13BB60323B9();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(11) && !func_212(11))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_150392.f_52C[11 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[11 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_150392.f_49C[11 /*11*/][iVar0]))
							{
								func_214(1);
								unk_0xD02CE72B4B66DC29(82, iVar5);
								unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_108(iVar0, Global_150976.f_165E[iVar0], Global_150976.f_165E.f_B[iVar0], Global_150976.f_165E.f_16[iVar0], Global_150976.f_165E.f_21[iVar0], Global_150976.f_165E.f_2C[iVar0], Global_150976.f_165E.f_37[iVar0], Global_150976.f_165E.f_42[iVar0], Global_150976.f_165E.f_4D[iVar0], Global_150976.f_165E.f_58[iVar0], Global_150976.f_165E.f_6E[iVar0], Global_150976.f_165E.f_79[iVar0], Global_150976.f_165E.f_84[iVar0], Global_150976.f_165E.f_8F[iVar0], Global_150976.f_165E.f_9A[iVar0]);
								unk_0xD59EF13BB60323B9();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				if (func_29(12) && !func_212(12))
				{
					iVar0 = 0;
					while (iVar0 <= 9)
					{
						if (Global_150392.f_52C[12 /*11*/][iVar0] == iVar1 + 3 || Global_150392.f_49C[12 /*11*/][iVar0] == 1)
						{
							if (func_218(Global_150392.f_49C[12 /*11*/][iVar0]))
							{
								func_214(1);
								unk_0xD02CE72B4B66DC29(82, iVar5);
								unk_0x75BBE9A62B73769F(fLocal_64, fLocal_65, fLocal_66, fLocal_67);
								func_43(iVar0, Global_150976.f_1703[iVar0], Global_150976.f_1703.f_16[iVar0], &(Global_150976.f_1703.f_21[iVar0 /*6*/]), Global_150976.f_1703.f_5E[iVar0], Global_150976.f_1703.f_B[iVar0], Global_150976.f_1703.f_69[iVar0], Global_150976.f_1703.f_74[iVar0], Global_150976.f_1703.f_7F[iVar0], Global_150976.f_1703.f_8A[iVar0], Global_150976.f_1703.f_95[iVar0], Global_150976.f_1703.f_A0[iVar0], Global_150976.f_1703.f_AB[iVar0], Global_150976.f_1703.f_B6[iVar0], Global_150976.f_1703.f_C1[iVar0], Global_150976.f_1703.f_CC[iVar0], Global_150976.f_1703.f_D7[iVar0], Global_150976.f_1703.f_E2[iVar0], Global_150976.f_1703.f_F8[iVar0], Global_150976.f_1703.f_103[iVar0], Global_150976.f_1703.f_10E[iVar0], Global_150976.f_1703.f_119[iVar0], Global_150976.f_1703.f_124[iVar0], Global_150976.f_1703.f_12F[iVar0], Global_150976.f_1703.f_13A[iVar0], Global_150976.f_1703.f_145[iVar0], Global_150976.f_1703.f_150[iVar0], Global_150976.f_1703.f_15B[iVar0], Global_150976.f_1703.f_166[iVar0], Global_150976.f_1703.f_171[iVar0], Global_150976.f_1703.f_17C[iVar0], Global_150976.f_1703.f_187[iVar0]);
								unk_0xD59EF13BB60323B9();
								func_214(0);
							}
						}
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		func_42();
	}
}

void func_42()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_150976.f_18A3[iVar0] = Global_150976.f_1895[iVar0];
		iVar0++;
	}
}

void func_43(int iParam0, int iParam1, float fParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, var uParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, bool bParam26, int iParam27, int iParam28, var uParam29, int iParam30, int iParam31)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(12, iParam0))
	{
		func_44(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, fParam2, sParam3, iParam4, iParam5, bParam6, iParam7, 1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, uParam18, bParam19, iParam20, iParam21, iParam22, iParam23, iParam24, iParam25, bParam26, iParam27, iParam28, uParam29, iParam30, iParam31);
	}
}

void func_44(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, var uParam23, bool bParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, bool bParam31, int iParam32, int iParam33, var uParam34, int iParam35, int iParam36)
{
	struct<8> Var0;
	struct<8> Var1;
	struct<8> Var2;
	struct<8> Var3;
	struct<8> Var4;
	struct<8> Var5;
	struct<8> Var6;
	struct<8> Var7;
	struct<8> Var8;
	struct<8> Var9;
	struct<8> Var10;
	struct<8> Var11;
	struct<8> Var12;
	struct<8> Var13;
	struct<8> Var14;
	struct<8> Var15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	vector3 vVar21[24];
	vector3 vVar22;
	vector3 vVar23[24];
	vector3 vVar24[24];
	vector3 vVar25;
	vector3 vVar26[24];
	vector3 vVar27[24];
	vector3 vVar28;
	vector3 vVar29[24];
	vector3 vVar30[24];
	vector3 vVar31;
	vector3 vVar32[24];
	vector3 vVar33[24];
	vector3 vVar34;
	vector3 vVar35[24];
	vector3 vVar36[24];
	vector3 vVar37[24];
	vector3 vVar38[24];
	vector3 vVar39[24];
	vector3 vVar40[24];
	vector3 vVar41[24];
	vector3 vVar42[24];
	vector3 vVar43[24];
	vector3 vVar44[24];
	vector3 vVar45[24];
	vector3 vVar46[24];
	vector3 vVar47[24];
	vector3 vVar48[24];
	vector3 vVar49[24];
	vector3 vVar50[24];
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	bool bVar67;
	bool bVar68;
	
	Global_150976++;
	if (func_107())
	{
		func_106(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_105(uParam1, 3);
		if (iParam5 < 1000000)
		{
			if ((unk_0xB3260A60545D3F11() == 8 && fParam6 >= 100f) && unk_0x7F8A39872A07D2CE("AMCH_KMHN", sParam7))
			{
				func_104(uParam2, 0, 0);
			}
			else if (((unk_0xB3260A60545D3F11() == 8 || unk_0xB3260A60545D3F11() == 9) || unk_0xB3260A60545D3F11() == 12) && ((iParam5 > 999 || iParam9 > 999) || fParam6 > 1000f))
			{
				func_104(uParam2, 0, 0);
			}
			else if (iParam9 > 99)
			{
				func_103(uParam2, 0, 0);
			}
			else
			{
				func_102(uParam2, 0, 0);
			}
		}
		else if (unk_0xB3260A60545D3F11() == 8 && (unk_0x7F8A39872A07D2CE("HUD_CASH", sParam7) || unk_0x7F8A39872A07D2CE("HUD_CASH_NEG", sParam7)))
		{
			func_104(uParam2, 0, 0);
		}
		else
		{
			func_103(uParam2, 0, 0);
		}
		func_100(uParam1);
		func_99(uParam2);
		func_98(12, iParam0);
		if (Global_150976 == 1)
		{
			func_97(iParam12);
		}
		func_91(uParam2, uParam3, uParam4, iParam12, uParam1);
		func_90(uParam2, iParam11);
		uParam2->f_6 = 255;
		Var1 = (*uParam4 + 0.095f);
		Var2 = (*uParam4 + 0.095f);
		Var3 = (*uParam4 + 0.095f);
		Var4 = (*uParam4 + 0.072f);
		Var5 = (*uParam4 + 0.072f);
		Var6 = (*uParam4 + 0.072f);
		Var7 = (*uParam4 + 0.049f);
		Var8 = (*uParam4 + 0.049f);
		Var9 = (*uParam4 + 0.049f);
		Var10 = (*uParam4 + 0.026f);
		Var11 = (*uParam4 + 0.026f);
		Var12 = (*uParam4 + 0.026f);
		Var13 = (*uParam4 + 0.003f);
		Var14 = (*uParam4 + 0.003f);
		Var15 = (*uParam4 + 0.003f);
		if (func_89())
		{
			Var1.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var2.f_1 = (uParam4->f_1 + 0.016f);
			Var3.f_1 = (uParam4->f_1 + 0.016f);
			Var4.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var5.f_1 = (uParam4->f_1 + 0.016f);
			Var6.f_1 = (uParam4->f_1 + 0.016f);
			Var7.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var8.f_1 = (uParam4->f_1 + 0.016f);
			Var9.f_1 = (uParam4->f_1 + 0.016f);
			Var10.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var11.f_1 = (uParam4->f_1 + 0.016f);
			Var12.f_1 = (uParam4->f_1 + 0.016f);
			Var13.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
			Var14.f_1 = (uParam4->f_1 + 0.016f);
			Var15.f_1 = (uParam4->f_1 + 0.016f);
		}
		else
		{
			Var1.f_1 = (uParam4->f_1 + 0.0185f);
			Var2.f_1 = (uParam4->f_1 + 0.019f);
			Var3.f_1 = (uParam4->f_1 + 0.019f);
			Var4.f_1 = (uParam4->f_1 + 0.0185f);
			Var5.f_1 = (uParam4->f_1 + 0.019f);
			Var6.f_1 = (uParam4->f_1 + 0.019f);
			Var7.f_1 = (uParam4->f_1 + 0.0185f);
			Var8.f_1 = (uParam4->f_1 + 0.019f);
			Var9.f_1 = (uParam4->f_1 + 0.019f);
			Var10.f_1 = (uParam4->f_1 + 0.0185f);
			Var11.f_1 = (uParam4->f_1 + 0.019f);
			Var12.f_1 = (uParam4->f_1 + 0.019f);
			Var13.f_1 = (uParam4->f_1 + 0.0185f);
			Var14.f_1 = (uParam4->f_1 + 0.019f);
			Var15.f_1 = (uParam4->f_1 + 0.019f);
		}
		Var1.f_2 = (0.016f + 0.003f);
		Var2.f_2 = (0.016f + 0.003f);
		Var3.f_2 = (0.016f + 0.003f);
		Var4.f_2 = (0.016f + 0.003f);
		Var5.f_2 = (0.016f + 0.003f);
		Var6.f_2 = (0.016f + 0.003f);
		Var7.f_2 = (0.016f + 0.003f);
		Var8.f_2 = (0.016f + 0.003f);
		Var9.f_2 = (0.016f + 0.003f);
		Var10.f_2 = (0.016f + 0.003f);
		Var11.f_2 = (0.016f + 0.003f);
		Var12.f_2 = (0.016f + 0.003f);
		Var13.f_2 = (0.016f + 0.003f);
		Var14.f_2 = (0.016f + 0.003f);
		Var15.f_2 = (0.016f + 0.003f);
		Var1.f_3 = (0.032f + 0.004f);
		Var2.f_3 = (0.032f + 0.004f);
		Var3.f_3 = (0.032f + 0.004f);
		Var4.f_3 = (0.032f + 0.004f);
		Var5.f_3 = (0.032f + 0.004f);
		Var6.f_3 = (0.032f + 0.004f);
		Var7.f_3 = (0.032f + 0.004f);
		Var8.f_3 = (0.032f + 0.004f);
		Var9.f_3 = (0.032f + 0.004f);
		Var10.f_3 = (0.032f + 0.004f);
		Var11.f_3 = (0.032f + 0.004f);
		Var12.f_3 = (0.032f + 0.004f);
		Var13.f_3 = (0.032f + 0.004f);
		Var14.f_3 = (0.032f + 0.004f);
		Var15.f_3 = (0.032f + 0.004f);
		Var1.f_7 = 255;
		Var2.f_7 = 255;
		Var3.f_7 = 255;
		Var4.f_7 = 255;
		Var5.f_7 = 255;
		Var6.f_7 = 255;
		Var7.f_7 = 255;
		Var8.f_7 = 255;
		Var9.f_7 = 255;
		Var10.f_7 = 255;
		Var11.f_7 = 255;
		Var12.f_7 = 255;
		Var13.f_7 = 255;
		Var14.f_7 = 255;
		Var15.f_7 = 255;
		func_88(&Var1, 1);
		func_88(&Var2, 1);
		func_88(&Var3, 1);
		func_88(&Var4, 1);
		func_88(&Var5, 1);
		func_88(&Var6, 1);
		func_88(&Var7, 1);
		func_88(&Var8, 1);
		func_88(&Var9, 1);
		func_88(&Var10, 1);
		func_88(&Var11, 1);
		func_88(&Var12, 1);
		func_88(&Var13, 1);
		func_88(&Var14, 1);
		func_88(&Var15, 1);
		StringCopy(&cVar21, "", 24);
		StringCopy(&vVar22, "", 24);
		StringCopy(&cVar23, "", 24);
		StringCopy(&cVar24, "", 24);
		StringCopy(&vVar25, "", 24);
		StringCopy(&cVar26, "", 24);
		StringCopy(&cVar27, "", 24);
		StringCopy(&vVar28, "", 24);
		StringCopy(&cVar29, "", 24);
		StringCopy(&cVar30, "", 24);
		StringCopy(&vVar31, "", 24);
		StringCopy(&cVar32, "", 24);
		StringCopy(&cVar33, "", 24);
		StringCopy(&vVar34, "", 24);
		StringCopy(&cVar35, "", 24);
		StringCopy(&cVar36, "", 24);
		StringCopy(&cVar37, "", 24);
		StringCopy(&cVar38, "", 24);
		StringCopy(&cVar39, "", 24);
		StringCopy(&cVar40, "", 24);
		StringCopy(&cVar41, "", 24);
		StringCopy(&cVar42, "", 24);
		StringCopy(&cVar43, "", 24);
		StringCopy(&cVar44, "", 24);
		StringCopy(&cVar45, "", 24);
		StringCopy(&cVar46, "", 24);
		StringCopy(&cVar47, "", 24);
		StringCopy(&cVar48, "", 24);
		StringCopy(&cVar49, "", 24);
		StringCopy(&cVar50, "", 24);
		iVar51 = 1;
		iVar52 = 1;
		iVar53 = 1;
		iVar54 = 1;
		iVar55 = 1;
		iVar56 = 1;
		iVar57 = 1;
		iVar58 = 1;
		iVar59 = 1;
		iVar60 = 1;
		iVar61 = 1;
		iVar62 = 1;
		iVar63 = 1;
		iVar64 = 1;
		iVar65 = 1;
		func_80(&iParam18, &Var1, &cVar21, &cVar36, &iVar51, &iParam13, &uVar16, &Var2, &vVar22, &cVar37, &iVar52, iParam11, iParam25);
		func_80(&iParam19, &Var4, &cVar24, &cVar39, &iVar54, &iParam14, &uVar17, &Var5, &vVar25, &cVar40, &iVar55, iParam11, iParam26);
		func_80(&iParam20, &Var7, &cVar27, &cVar42, &iVar57, &iParam15, &uVar18, &Var8, &vVar28, &cVar43, &iVar58, iParam11, iParam27);
		func_80(&iParam21, &Var10, &cVar30, &cVar45, &iVar60, &iParam16, &uVar19, &Var11, &vVar31, &cVar46, &iVar61, iParam11, iParam28);
		func_80(&iParam22, &Var13, &cVar33, &cVar48, &iVar63, &iParam17, &uVar20, &Var14, &vVar34, &cVar49, &iVar64, iParam11, iParam29);
		unk_0x0D3BE1DE0262A012("TimerBars", false);
		if (func_78(&cVar21, &vVar22, &cVar24, &vVar25, &cVar27, &vVar28, &cVar30, &vVar31, &cVar33, &vVar34) && unk_0x27117E2CDD4D67C3("TimerBars"))
		{
			iVar66 = func_77();
			unk_0xD9ACBBA59FD5A09E(iVar66);
			Var0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			if (iParam5 < 1000000)
			{
				Var0 = (Var0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.008f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.036f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			else
			{
				Var0 = (Var0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.01f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.033f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
			}
			if (func_89())
			{
				Var0 = (Var0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_150976.f_18CE = (Global_150976.f_18CE + Var0.f_3);
			func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_68(uParam1, 0);
			if (iParam35 == 0)
			{
				func_67(iParam0);
			}
			if (func_64(iParam35, &(Global_150976.f_1A6[iParam0 /*2*/]), &(Global_150976.f_1BB[iParam0 /*2*/])))
			{
				bVar67 = true;
			}
			else
			{
				bVar67 = false;
			}
			if (uParam34 && unk_0x95662AB5B1A3C2F9())
			{
				if (bVar67)
				{
					if (iParam33 == iParam13 && iParam36 == 5)
					{
						func_63(iParam18, &Var1, &Var2, &cVar21, &cVar36, iVar51, &vVar22, &cVar37, iVar52);
					}
					if (iParam33 == iParam14 && iParam36 == 4)
					{
						func_63(iParam19, &Var4, &Var5, &cVar24, &cVar39, iVar54, &vVar25, &cVar40, iVar55);
					}
					if (iParam33 == iParam15 && iParam36 == 3)
					{
						func_63(iParam20, &Var7, &Var8, &cVar27, &cVar42, iVar57, &vVar28, &cVar43, iVar58);
					}
					if (iParam33 == iParam16 && iParam36 == 2)
					{
						func_63(iParam21, &Var10, &Var11, &cVar30, &cVar45, iVar60, &vVar31, &cVar46, iVar61);
					}
					if (iParam33 == iParam17 && iParam36 == 1)
					{
						func_63(iParam22, &Var13, &Var14, &cVar33, &cVar48, iVar63, &vVar34, &cVar49, iVar64);
					}
				}
				if (iParam33 == iParam13 && iParam36 != 5)
				{
					func_63(iParam18, &Var1, &Var2, &cVar21, &cVar36, iVar51, &vVar22, &cVar37, iVar52);
				}
				if (iParam33 == iParam14 && iParam36 != 4)
				{
					func_63(iParam19, &Var4, &Var5, &cVar24, &cVar39, iVar54, &vVar25, &cVar40, iVar55);
				}
				if (iParam33 == iParam15 && iParam36 != 3)
				{
					func_63(iParam20, &Var7, &Var8, &cVar27, &cVar42, iVar57, &vVar28, &cVar43, iVar58);
				}
				if (iParam33 == iParam16 && iParam36 != 2)
				{
					func_63(iParam21, &Var10, &Var11, &cVar30, &cVar45, iVar60, &vVar31, &cVar46, iVar61);
				}
				if (iParam33 == iParam17 && iParam36 != 1)
				{
					func_63(iParam22, &Var13, &Var14, &cVar33, &cVar48, iVar63, &vVar34, &cVar49, iVar64);
				}
				if (iParam33 != iParam13)
				{
					func_63(iParam18, &Var1, &Var2, &cVar21, &cVar36, iVar51, &vVar22, &cVar37, iVar52);
				}
				if (iParam33 != iParam14)
				{
					func_63(iParam19, &Var4, &Var5, &cVar24, &cVar39, iVar54, &vVar25, &cVar40, iVar55);
				}
				if (iParam33 != iParam15)
				{
					func_63(iParam20, &Var7, &Var8, &cVar27, &cVar42, iVar57, &vVar28, &cVar43, iVar58);
				}
				if (iParam33 != iParam16)
				{
					func_63(iParam21, &Var10, &Var11, &cVar30, &cVar45, iVar60, &vVar31, &cVar46, iVar61);
				}
				if (iParam33 != iParam17)
				{
					func_63(iParam22, &Var13, &Var14, &cVar33, &cVar48, iVar63, &vVar34, &cVar49, iVar64);
				}
			}
			else
			{
				func_63(iParam18, &Var1, &Var2, &cVar21, &cVar36, iVar51, &vVar22, &cVar37, iVar52);
				func_63(iParam19, &Var4, &Var5, &cVar24, &cVar39, iVar54, &vVar25, &cVar40, iVar55);
				func_63(iParam20, &Var7, &Var8, &cVar27, &cVar42, iVar57, &vVar28, &cVar43, iVar58);
				func_63(iParam21, &Var10, &Var11, &cVar30, &cVar45, iVar60, &vVar31, &cVar46, iVar61);
				func_63(iParam22, &Var13, &Var14, &cVar33, &cVar48, iVar63, &vVar34, &cVar49, iVar64);
			}
			if (iParam32 == 0)
			{
				func_62(iParam0);
			}
			if (func_64(iParam32, &(Global_150976.f_17C[iParam0 /*2*/]), &(Global_150976.f_191[iParam0 /*2*/])))
			{
				bVar68 = true;
			}
			else
			{
				bVar68 = false;
			}
			if (bParam24)
			{
				switch (iParam30)
				{
					case 4294967295:
						func_60(&Var3, &cVar23, &cVar38, &iVar53, &iParam13, &uParam23, iParam11);
						func_60(&Var6, &cVar26, &cVar41, &iVar56, &iParam14, &uParam23, iParam11);
						func_60(&Var9, &cVar29, &cVar44, &iVar59, &iParam15, &uParam23, iParam11);
						func_60(&Var12, &cVar32, &cVar47, &iVar62, &iParam16, &uParam23, iParam11);
						func_60(&Var15, &cVar35, &cVar50, &iVar65, &iParam17, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar68)
							{
								func_59(&Var3, &cVar23, &cVar38, iVar53);
								func_59(&Var6, &cVar26, &cVar41, iVar56);
								func_59(&Var9, &cVar29, &cVar44, iVar59);
								func_59(&Var12, &cVar32, &cVar47, iVar62);
								func_59(&Var15, &cVar35, &cVar50, iVar65);
							}
						}
						else
						{
							func_59(&Var3, &cVar23, &cVar38, iVar53);
							func_59(&Var6, &cVar26, &cVar41, iVar56);
							func_59(&Var9, &cVar29, &cVar44, iVar59);
							func_59(&Var12, &cVar32, &cVar47, iVar62);
							func_59(&Var15, &cVar35, &cVar50, iVar65);
						}
						break;
					
					case 0:
						break;
					
					case 1:
						func_60(&Var3, &cVar23, &cVar38, &iVar53, &iParam13, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar68)
							{
								func_59(&Var3, &cVar23, &cVar38, iVar53);
							}
						}
						else
						{
							func_59(&Var3, &cVar23, &cVar38, iVar53);
						}
						break;
					
					case 2:
						func_60(&Var6, &cVar26, &cVar41, &iVar56, &iParam14, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar68)
							{
								func_59(&Var6, &cVar26, &cVar41, iVar56);
							}
						}
						else
						{
							func_59(&Var6, &cVar26, &cVar41, iVar56);
						}
						break;
					
					case 3:
						func_60(&Var9, &cVar29, &cVar44, &iVar59, &iParam15, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar68)
							{
								func_59(&Var9, &cVar29, &cVar44, iVar59);
							}
						}
						else
						{
							func_59(&Var9, &cVar29, &cVar44, iVar59);
						}
						break;
					
					case 4:
						func_60(&Var12, &cVar32, &cVar47, &iVar62, &iParam16, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar68)
							{
								func_59(&Var12, &cVar32, &cVar47, iVar62);
							}
						}
						else
						{
							func_59(&Var12, &cVar32, &cVar47, iVar62);
						}
						break;
					
					case 5:
						func_60(&Var15, &cVar35, &cVar50, &iVar65, &iParam17, &uParam23, iParam11);
						if (bParam31)
						{
							if (bVar68)
							{
								func_59(&Var15, &cVar35, &cVar50, iVar65);
							}
						}
						else
						{
							func_59(&Var15, &cVar35, &cVar50, iVar65);
						}
						break;
					}
			}
			func_68(uParam2, 0);
			if (bParam10)
			{
				func_58(uParam4, uParam2, "???", "", 1, 2);
			}
			else if (func_57(sParam7))
			{
				if (iParam9 == 0)
				{
					if (iParam8 == 0)
					{
						if (iParam5 != 4294966297)
						{
							func_55(uParam4, uParam2, "NUMBER", iParam5, 2);
						}
					}
					else
					{
						func_53(uParam4, uParam2, "NUMBER", fParam6, Global_2591F5, 2);
					}
				}
				else
				{
					func_51(uParam4, uParam2, "TIMER_DASHES", iParam5, iParam9, 2, 0);
				}
			}
			else if (unk_0x7F8A39872A07D2CE("HUD_CASH", sParam7) || unk_0x7F8A39872A07D2CE("HUD_CASH_S", sParam7))
			{
				sParam7 = "HUD_CASH_S";
				*uParam2 = 5;
				func_68(uParam2, 0);
				func_46(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (unk_0x7F8A39872A07D2CE("HUD_CASH_NEG", sParam7) || unk_0x7F8A39872A07D2CE("HUD_CASH_NEG_S", sParam7))
			{
				*uParam2 = 5;
				func_68(uParam2, 0);
				sParam7 = "HUD_CASH_NEG_S";
				func_46(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else if (iParam8 == 0)
			{
				func_55(uParam4, uParam2, sParam7, iParam5, 2);
			}
			else
			{
				func_53(uParam4, uParam2, sParam7, fParam6, Global_2591F5, 2);
			}
			func_45();
		}
	}
}

void func_45()
{
	unk_0xD9ACBBA59FD5A09E(4);
}

void func_46(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_57(sVar0))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			unk_0xEEF67251E263A87F(iParam4);
			unk_0x070005E852D4C0E9(sVar0);
			unk_0x6D99DF8263D35CE5(iParam3);
			unk_0xCBD015EC7E4226BC(iParam3, 1);
			unk_0xE0026608C37C7C41(func_48(*uParam0), func_47(uParam0->f_1), 0);
		}
	}
}

float func_47(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_48(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_49()
{
	if (func_50())
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

bool func_50()
{
	return Global_1406B8;
}

void func_51(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_57(sVar0))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			unk_0xAAE406A7DA443B93(iParam6);
			unk_0xEEF67251E263A87F(iParam5);
			func_52(func_48(*uParam0), func_47(uParam0->f_1), sVar0, iParam3, iParam4);
		}
	}
}

void func_52(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_53(var uParam0, var uParam1, char* sParam2, float fParam3, int iParam4, int iParam5)
{
	if (!func_57(sParam2))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			unk_0xEEF67251E263A87F(iParam5);
			func_54(func_48(*uParam0), func_47(uParam0->f_1), sParam2, fParam3, iParam4);
		}
	}
}

void func_54(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

void func_55(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_57(sVar0))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			unk_0xEEF67251E263A87F(iParam4);
			func_56(func_48(*uParam0), func_47(uParam0->f_1), sVar0, iParam3, 0);
		}
	}
}

void func_56(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

int func_57(char* sParam0)
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

void func_58(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	if (!func_57(sParam2))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			unk_0xEEF67251E263A87F(iParam5);
			if (func_57(sParam3))
			{
				sVar0 = "STRING";
			}
			else
			{
				sVar0 = sParam3;
			}
			unk_0x070005E852D4C0E9(sVar0);
			unk_0x3A820E495A7BA3E5(iParam4);
			unk_0xD06AC7C87A34A6AD(sParam2);
			unk_0xE0026608C37C7C41(func_48(*uParam0), func_47(uParam0->f_1), 0);
		}
	}
}

void func_59(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		unk_0x0D3BE1DE0262A012(sParam1, false);
		if (unk_0x27117E2CDD4D67C3(sParam1))
		{
			func_88(uParam0, iParam3);
			func_69(sParam1, sParam2, uParam0, 1, 0, 4, 0);
		}
	}
}

void func_60(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, var uParam5, int iParam6)
{
	if (*uParam5 != func_61() && *iParam4 != func_61())
	{
		if (*uParam5 == *iParam4)
		{
			StringCopy(sParam1, "timerbar_sr", 24);
			StringCopy(sParam2, "timer_box", 24);
			*iParam3 = iParam6;
			uParam0->f_2 = (0.016f + 0.008f);
			uParam0->f_3 = 0.038f;
		}
	}
}

int func_61()
{
	return 4294967295;
}

void func_62(int iParam0)
{
	func_15(&(Global_150976.f_17C[iParam0 /*2*/]));
	func_15(&(Global_150976.f_191[iParam0 /*2*/]));
}

void func_63(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_88(uParam1, iParam5);
		func_69(sParam3, sParam4, uParam1, 1, 0, 4, 0);
	}
	if (((((iParam0 == 27 || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		unk_0xA402F6C87C08815C(2, &iVar0, &iVar1, &iVar2, &uVar3);
		unk_0xC1032CAC14DE468A(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, iVar0, iVar1, iVar2, 153, 0);
	}
	if ((((((((((((((iParam0 == 18 || iParam0 == 19) || iParam0 == 20) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		if (!unk_0xEA6BC48857E0AC4C(sParam6))
		{
			func_88(uParam2, iParam8);
			func_69(sParam6, sParam7, uParam2, 1, 0, 4, 0);
		}
	}
}

int func_64(int iParam0, var uParam1, var uParam2)
{
	if (func_244(uParam1, iParam0, 0))
	{
		return 1;
	}
	if (!func_66(uParam2))
	{
		func_65(uParam2, 0, 0);
	}
	else if (func_244(uParam2, 300, 0))
	{
		if (func_244(uParam2, 800, 0))
		{
			func_15(uParam2);
			return 1;
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
	return 1;
}

void func_65(var uParam0, bool bParam1, bool bParam2)
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

bool func_66(var uParam0)
{
	return uParam0->f_1;
}

void func_67(int iParam0)
{
	func_15(&(Global_150976.f_1A6[iParam0 /*2*/]));
	func_15(&(Global_150976.f_1BB[iParam0 /*2*/]));
}

void func_68(var uParam0, bool bParam1)
{
	unk_0x7BBAC160090910C3(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		unk_0xF1F881BAAAFB43B1(uParam0->f_8, uParam0->f_9);
	}
	unk_0xD3539A877EC25E86(uParam0->f_1, uParam0->f_2);
	unk_0x7178F32F6742C936(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			unk_0x5C3AC46FC4D891D1();
			unk_0xC8CFC125861F0537();
			break;
		
		case 3:
			unk_0xC8CFC125861F0537();
			break;
		
		case 2:
			unk_0x5C3AC46FC4D891D1();
			break;
	}
	if (bParam1)
	{
		unk_0xD9ACBBA59FD5A09E(4);
	}
}

void func_69(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_76(&Var0);
			break;
		
		case 1:
			func_75(&Var0);
			break;
		
		case 5:
			func_74(&Var0);
			break;
		
		case 6:
			func_73(&Var0);
			break;
		
		case 7:
			func_72(&Var0);
			break;
		
		case 8:
			func_71(&Var0);
			break;
		
		case 9:
			func_70(&Var0);
			break;
	}
	if (func_49())
	{
		unk_0xD9ACBBA59FD5A09E(iParam5);
		if (iParam3 == 1)
		{
			unk_0x539E86AE011A8B38(sParam0, sParam1, func_48(Var0), func_47(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0x539E86AE011A8B38(sParam0, sParam1, func_48(Var0), func_47(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0xD9ACBBA59FD5A09E(4);
	}
}

void func_70(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_71(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_72(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_73(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_74(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_75(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_76(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_77()
{
	int iVar0;
	
	iVar0 = 1;
	if (Global_150976.f_469)
	{
		iVar0 = 7;
	}
	return iVar0;
}

int func_78(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	
	iVar0 = 1;
	if (func_79(sParam0, sParam1) == 0)
	{
		iVar0 = 0;
	}
	if (func_79(sParam2, sParam3) == 0)
	{
		iVar0 = 0;
	}
	if (func_79(sParam4, sParam5) == 0)
	{
		iVar0 = 0;
	}
	if (func_79(sParam6, sParam7) == 0)
	{
		iVar0 = 0;
	}
	if (func_79(sParam8, sParam9) == 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_79(char* sParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		unk_0x0D3BE1DE0262A012(sParam0, false);
		if (unk_0x27117E2CDD4D67C3(sParam0))
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 1;
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam1))
	{
		unk_0x0D3BE1DE0262A012(sParam1, false);
		if (unk_0x27117E2CDD4D67C3(sParam1))
		{
			iVar1 = 1;
		}
	}
	else
	{
		iVar1 = 1;
	}
	if (iVar0 && iVar1)
	{
		return 1;
	}
	return 0;
}

void func_80(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, var uParam5, var uParam6, var uParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	switch (*uParam0)
	{
		case 5:
			uParam1->f_3 = (uParam1->f_3 + -0.009f);
			uParam1->f_2 = (uParam1->f_2 + -0.002f);
			if (func_89())
			{
				uParam1->f_1 = (uParam1->f_1 + 0.0055f);
			}
			else
			{
				uParam1->f_1 = (uParam1->f_1 + 0.0025f);
			}
			StringCopy(sParam2, "MPRPSymbol", 24);
			StringCopy(sParam3, "RP", 24);
			break;
		
		case 2:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Rockets", 24);
			break;
		
		case 3:
			StringCopy(sParam2, "MpSpecialRace", 24);
			StringCopy(sParam3, "HOMING_ROCKET", 24);
			break;
		
		case 1:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Spikes", 24);
			break;
		
		case 4:
			StringCopy(sParam2, "TimerBars", 24);
			StringCopy(sParam3, "Boost", 24);
			break;
		
		case 6:
			StringCopy(sParam2, "CrossTheLine", 24);
			StringCopy(sParam3, "Timer_LargeTick_32", 24);
			break;
		
		case 7:
			StringCopy(sParam2, "CrossTheLine", 24);
			StringCopy(sParam3, "Timer_LargeCross_32", 24);
			break;
		
		case 8:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Beast", 24);
			*iParam4 = 118;
			break;
		
		case 9:
			StringCopy(sParam2, "MPSpecialRace", 24);
			StringCopy(sParam3, "MACHINE_GUN", 24);
			break;
		
		case 10:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Random", 24);
			*iParam4 = 118;
			break;
		
		case 11:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Slow_Time", 24);
			break;
		
		case 12:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Swap", 24);
			*iParam4 = 118;
			break;
		
		case 13:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Testosterone", 24);
			*iParam4 = 118;
			break;
		
		case 14:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Thermal", 24);
			*iParam4 = 118;
			break;
		
		case 15:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Weed", 24);
			*iParam4 = 118;
			break;
		
		case 16:
			StringCopy(sParam2, "TimerBar_Icons", 24);
			StringCopy(sParam3, "Pickup_Hidden", 24);
			*iParam4 = 118;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
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
			if (*uParam5 != func_61())
			{
				*uParam6 = func_81(*uParam5);
				if (*uParam6 != 0)
				{
					StringCopy(sParam2, unk_0x5283D58F79627134(*uParam6), 24);
					StringCopy(sParam3, unk_0x5283D58F79627134(*uParam6), 24);
				}
			}
			uParam1->f_2 = (0.016f + 0.004f);
			uParam1->f_3 = 0.034f;
			if (*uParam0 == 18)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_cross", 24);
				*iParam10 = iParam11;
			}
			if (*uParam0 == 19)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_tick", 24);
				*iParam10 = iParam11;
			}
			if (*uParam0 == 20 || *uParam0 == 27)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_0", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 21 || *uParam0 == 28)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_1", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 22 || *uParam0 == 29)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_2", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 23 || *uParam0 == 30)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_3", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 24 || *uParam0 == 31)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_4", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 25 || *uParam0 == 32)
			{
				StringCopy(sParam8, "timerbar_sr", 24);
				StringCopy(sParam9, "timer_5", 24);
				*iParam10 = iParam12;
			}
			if (*uParam0 == 26)
			{
				*iParam10 = iParam11;
			}
			if ((((((*uParam0 == 20 || *uParam0 == 21) || *uParam0 == 22) || *uParam0 == 23) || *uParam0 == 24) || *uParam0 == 25) || *uParam0 == 26)
			{
				uParam1->f_7 = 127;
			}
			break;
		
		case 0:
			uParam1->f_7 = 0;
			uParam7->f_7 = 0;
			break;
	}
}

int func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = func_85(iParam0);
	if (iVar0 == 4294967295)
	{
		func_82(iParam0, 1);
		return 0;
	}
	Global_153216[iVar0 /*5*/].f_4 = 1;
	return Global_153216[iVar0 /*5*/].f_2;
}

void func_82(int iParam0, bool bParam1)
{
	if (!func_84(iParam0, 0, 1))
	{
		return;
	}
	if (func_85(iParam0) != 4294967295)
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
	if (func_83(iParam0))
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

int func_83(int iParam0)
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

int func_84(int iParam0, bool bParam1, bool bParam2)
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

int func_85(int iParam0)
{
	int iVar0;
	
	if (!func_84(iParam0, 0, 1))
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
			func_86(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_86(int iParam0)
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
	func_87(&(Global_153216[iVar2 /*5*/]));
	Global_1532B7 = (Global_1532B7 - 1);
}

void func_87(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_61();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x8CD06866876216F2())
	{
		uParam0->f_3 = unk_0x2B6E0A53779D29EA();
	}
}

void func_88(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xA402F6C87C08815C(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

int func_89()
{
	if (((unk_0xB3260A60545D3F11() == 8 || unk_0xB3260A60545D3F11() == 9) || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 12)
	{
		return 1;
	}
	return 0;
}

void func_90(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xA402F6C87C08815C(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
	uParam0->f_6 = uVar3;
}

void func_91(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	float fVar0;
	
	fVar0 = func_96(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_95(iParam3);
	uParam1->f_1 = (uParam1->f_1 + func_94(uParam4));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_93(uParam0));
	func_92(iParam3, -fVar0);
}

void func_92(int iParam0, float fParam1)
{
	switch (iParam0)
	{
		case 1:
			Global_150976.f_45F = (Global_150976.f_45F + fParam1);
			break;
		
		case 2:
			Global_150976.f_460 = (Global_150976.f_460 + fParam1);
			break;
	}
}

float func_93(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_A)
	{
		case 9:
			fVar0 = ((((((-0.01f - 0.005f) + 0.004f) - 0.0005f) - 0.002f) + 0.002f) + 0.0005f);
			break;
		
		case 10:
			fVar0 = ((((-0.025f - 0.003f) + 0.002f) - 0.006f) + 0.001f);
			break;
		
		case 11:
			fVar0 = ((((-0.047f - 0.004f) + 0.012f) + 0.001f) + 0.007f);
			break;
		
		case 12:
			fVar0 = ((-0.019f + 0.011f) + 0.004f);
			break;
		
		case 13:
			fVar0 = (-0.012f + 0.001f);
			break;
		
		case 14:
			fVar0 = ((-0.012f + 0.001f) + 0.001f);
			break;
		
		case 15:
			fVar0 = ((((-0.035f - 0.008f) + 0.006f) + 0.013f) + 0.0005f);
			break;
		
		case 16:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) - 0.001f) + 0.001f);
			break;
		
		case 17:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.0007f);
			break;
		
		case 18:
			fVar0 = ((((-0.01f - 0.005f) + 0.004f) + 0.005f) + 0.003f);
			break;
		
		case 6:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
		
		case 19:
			fVar0 = (((-0.01f - 0.005f) + 0.004f) + 0.005f);
			break;
	}
	if (func_89())
	{
		fVar0 = (fVar0 + 0.003f);
	}
	return fVar0;
}

float func_94(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_A)
	{
		case 6:
			fVar0 = 0f;
			break;
	}
	return fVar0;
}

float func_95(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_150976.f_45F;
			break;
		
		case 2:
			return Global_150976.f_460;
			break;
	}
	return Global_150976.f_45F;
}

float func_96(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_A)
	{
		case 9:
			fVar0 = (((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.0018f) + 0.0005f) - 0.0005f);
			break;
		
		case 10:
			fVar0 = (((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) + 0.003f) + 0.002f) - 0.004f);
			break;
		
		case 11:
			fVar0 = (((((0.065f + 0.009f) - 0.006f) - 0.009f) + 0.001f) - 0.009f);
			break;
		
		case 12:
			fVar0 = 0f;
			break;
		
		case 13:
			fVar0 = (0.065f + 0.009f);
			break;
		
		case 14:
			fVar0 = (((0.065f + 0.009f) - 0.015f) - 0.022f);
			break;
		
		case 15:
			fVar0 = 0f;
			break;
		
		case 16:
			fVar0 = ((((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) + 0.001f) + 0.002f) + 0.0003f);
			break;
		
		case 17:
			fVar0 = ((((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f) - 0.0005f);
			break;
		
		case 18:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
		
		case 19:
			fVar0 = (((((0.035f + 0.023f) - 0.003f) + 0.001f) - 0.007f) - 0.012f);
			break;
	}
	return fVar0;
}

void func_97(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			Global_150976.f_45F = func_30();
			break;
		
		case 2:
			Global_150976.f_460 = func_30();
			break;
	}
}

void func_98(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_18B1[iParam0]), iParam1);
}

void func_99(var uParam0)
{
	float fVar0;
	
	fVar0 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) + 0.001f);
	uParam0->f_9 = fVar0;
	if (Global_150976.f_463 == 0)
	{
		switch (uParam0->f_A)
		{
			case 11:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			case 10:
				uParam0->f_9 = (uParam0->f_9 + 0.001f);
				break;
			
			default:
				break;
			}
	}
	if (Global_150976.f_463 == 1)
	{
		uParam0->f_9 = fVar0;
		uParam0->f_9 = (uParam0->f_9 + -0.113f);
	}
}

void func_100(var uParam0)
{
	float fVar0;
	
	fVar0 = ((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.03f);
	if (Global_150976.f_46A)
	{
		fVar0 = (fVar0 + -0.034f);
		if (unk_0x0D71AFA59EF5104F() == 0)
		{
			fVar0 = (fVar0 + -0.02f);
		}
	}
	if (Global_150976.f_46B && Global_150976.f_46A == 0)
	{
		fVar0 = (fVar0 + (-0.015f - 0.003f));
		if (unk_0x0D71AFA59EF5104F() == 0)
		{
			fVar0 = (fVar0 + -0.017f);
		}
	}
	if ((Global_150976.f_46C && Global_150976.f_46B == 0) && Global_150976.f_46A == 0)
	{
		fVar0 = (fVar0 + -0.038f);
	}
	if (Global_150976.f_463 == 1)
	{
		fVar0 = (fVar0 + -0.113f);
	}
	if (((unk_0xB3260A60545D3F11() == 7 && unk_0xB3260A60545D3F11() == 1) && !unk_0x0D71AFA59EF5104F()) && Global_150976.f_46C)
	{
		fVar0 = (fVar0 + -0.007f);
	}
	if (Global_150976.f_46D)
	{
		if (((((unk_0xB3260A60545D3F11() != 0 && unk_0xB3260A60545D3F11() != 5) && unk_0xB3260A60545D3F11() != 6) && unk_0xB3260A60545D3F11() != 9) && unk_0xB3260A60545D3F11() != 11) && unk_0xB3260A60545D3F11() != 12)
		{
			fVar0 = (fVar0 + -0.009f);
		}
		else
		{
			fVar0 = (fVar0 + -0.009f);
		}
	}
	if (Global_150976.f_46E)
	{
		if (func_101())
		{
			fVar0 = (fVar0 + -0.03f);
		}
		else if (((((unk_0xB3260A60545D3F11() != 0 && unk_0xB3260A60545D3F11() != 5) && unk_0xB3260A60545D3F11() != 6) && unk_0xB3260A60545D3F11() != 9) && unk_0xB3260A60545D3F11() != 11) && unk_0xB3260A60545D3F11() != 12)
		{
			fVar0 = (fVar0 + -0.024f);
		}
		else
		{
			fVar0 = (fVar0 + -0.019f);
		}
	}
	if (((((((((unk_0xB3260A60545D3F11() == 8 || unk_0xB3260A60545D3F11() == 7) || unk_0xB3260A60545D3F11() == 1) && Global_150976.f_46B == 0) && Global_150976.f_46A == 0) && Global_150976.f_463 == 0) && Global_150976.f_46C == 0) && Global_150976.f_46D == 0) && Global_150976.f_46E == 0) && unk_0x0EFF6B4415DAF4A1())
	{
		fVar0 = (fVar0 + -0.005f);
	}
	uParam0->f_9 = fVar0;
}

int func_101()
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

void func_102(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 16;
}

void func_103(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 17;
}

void func_104(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.095f) - 0.008f) - 0.012f) - 0.06f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 18;
}

void func_105(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 23;
}

void func_106(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	*uParam0 = fParam1;
	uParam0->f_1 = (fParam2 + fParam9);
	uParam0->f_2 = fParam3;
	uParam0->f_3 = fParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
}

int func_107()
{
	return 1;
}

void func_108(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(11, iParam0))
	{
		func_109(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, uParam1, 1, uParam2, uParam3, uParam4, uParam5, iParam6, iParam7, iParam8, iParam9, bParam10, bParam11, bParam12, bParam13, iParam14);
	}
}

void func_109(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18, int iParam19)
{
	struct<8> Var0;
	bool bVar1;
	int iVar2;
	struct<8> Var3;
	struct<8> Var4;
	struct<8> Var5;
	struct<8> Var6;
	struct<8> Var7;
	struct<8> Var8;
	struct<8> Var9;
	struct<8> Var10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	vector3 vVar15[24];
	vector3 vVar16;
	vector3 vVar17[24];
	vector3 vVar18;
	vector3 vVar19[24];
	vector3 vVar20;
	vector3 vVar21[24];
	vector3 vVar22;
	char[] cVar23[8];
	char[] cVar24[8];
	char[] cVar25[8];
	char[] cVar26[8];
	char[] cVar27[8];
	char[] cVar28[8];
	char[] cVar29[8];
	char[] cVar30[8];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	
	Global_150976++;
	if (func_107())
	{
		func_98(11, iParam0);
		func_105(uParam1, 0);
		func_100(uParam1);
		if (Global_150976 == 1)
		{
			func_97(iParam6);
		}
		func_102(uParam2, 0, 0);
		func_99(uParam2);
		func_91(uParam2, uParam3, uParam4, iParam6, uParam1);
		func_106(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (iParam19 == 0)
		{
			func_111(iParam0);
		}
		if (func_64(iParam19, &(Global_150976.f_152[iParam0 /*2*/]), &(Global_150976.f_167[iParam0 /*2*/])))
		{
			bVar1 = true;
		}
		else
		{
			bVar1 = false;
		}
		unk_0x0D3BE1DE0262A012("TimerBars", false);
		if (unk_0x27117E2CDD4D67C3("TimerBars"))
		{
			iVar2 = func_77();
			unk_0xD9ACBBA59FD5A09E(iVar2);
			Var0 = *uParam3;
			Var0.f_1 = uParam3->f_1;
			Var0 = (Var0 + 0.079f);
			Var0.f_1 = (Var0.f_1 + 0.008f);
			Var0.f_2 = (Var0.f_2 + 0.157f);
			Var0.f_3 = (Var0.f_3 + 0.036f);
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_89())
			{
				Var0 = (Var0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_150976.f_18CE = (Global_150976.f_18CE + Var0.f_3);
			func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, 4, 0);
			func_68(uParam1, 0);
			Var3 = ((*uParam4 + 0.145f) + 0.001f);
			Var4 = ((*uParam4 + 0.145f) + 0.001f);
			Var5 = (*uParam4 + 0.123f);
			Var6 = (*uParam4 + 0.123f);
			Var7 = (*uParam4 + 0.101f);
			Var8 = (*uParam4 + 0.101f);
			Var9 = (*uParam4 + 0.078f);
			Var10 = (*uParam4 + 0.078f);
			if (func_89())
			{
				Var3.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var4.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var5.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var6.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var7.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var8.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
				Var9.f_1 = ((uParam4->f_1 + 0.016f) - 0f);
				Var10.f_1 = ((uParam4->f_1 + 0.016f) + 0.0005f);
			}
			else
			{
				Var3.f_1 = (uParam4->f_1 + 0.0185f);
				Var4.f_1 = (uParam4->f_1 + 0.019f);
				Var5.f_1 = (uParam4->f_1 + 0.0185f);
				Var6.f_1 = (uParam4->f_1 + 0.019f);
				Var7.f_1 = (uParam4->f_1 + 0.0185f);
				Var8.f_1 = (uParam4->f_1 + 0.019f);
				Var9.f_1 = (uParam4->f_1 + 0.0185f);
				Var10.f_1 = (uParam4->f_1 + 0.019f);
			}
			Var3.f_2 = (0.016f + 0.003f);
			Var4.f_2 = (0.016f + 0.003f);
			Var5.f_2 = (0.016f + 0.003f);
			Var6.f_2 = (0.016f + 0.003f);
			Var7.f_2 = (0.016f + 0.003f);
			Var8.f_2 = (0.016f + 0.003f);
			Var9.f_2 = (0.016f + 0.003f);
			Var10.f_2 = (0.016f + 0.003f);
			Var3.f_3 = (0.032f + 0.004f);
			Var4.f_3 = (0.032f + 0.004f);
			Var5.f_3 = (0.032f + 0.004f);
			Var6.f_3 = (0.032f + 0.004f);
			Var7.f_3 = (0.032f + 0.004f);
			Var8.f_3 = (0.032f + 0.004f);
			Var9.f_3 = (0.032f + 0.004f);
			Var10.f_3 = (0.032f + 0.004f);
			Var3.f_7 = 255;
			Var4.f_7 = 255;
			Var5.f_7 = 255;
			Var6.f_7 = 255;
			Var7.f_7 = 255;
			Var8.f_7 = 255;
			Var9.f_7 = 255;
			Var10.f_7 = 255;
			func_88(&Var3, 1);
			func_88(&Var4, 1);
			func_88(&Var5, 1);
			func_88(&Var6, 1);
			func_88(&Var7, 1);
			func_88(&Var8, 1);
			func_88(&Var9, 1);
			func_88(&Var10, 1);
			StringCopy(&cVar15, "", 24);
			StringCopy(&vVar16, "", 24);
			StringCopy(&cVar17, "", 24);
			StringCopy(&vVar18, "", 24);
			StringCopy(&cVar19, "", 24);
			StringCopy(&vVar20, "", 24);
			StringCopy(&cVar21, "", 24);
			StringCopy(&vVar22, "", 24);
			iVar31 = 1;
			iVar32 = 1;
			iVar33 = 1;
			iVar34 = 1;
			iVar35 = 1;
			iVar36 = 1;
			iVar37 = 1;
			iVar38 = 1;
			func_80(&iParam11, &Var3, &cVar15, &cVar23, &iVar31, &uParam7, &uVar11, &Var4, &vVar16, &cVar24, &iVar32, uParam5, 0);
			func_80(&iParam12, &Var5, &cVar17, &cVar25, &iVar33, &uParam8, &uVar12, &Var6, &vVar18, &cVar26, &iVar34, uParam5, 0);
			func_80(&iParam13, &Var7, &cVar19, &cVar27, &iVar35, &uParam9, &uVar13, &Var8, &vVar20, &cVar28, &iVar36, uParam5, 0);
			func_80(&iParam14, &Var9, &cVar21, &cVar29, &iVar37, &uParam10, &uVar14, &Var10, &vVar22, &cVar30, &iVar38, uParam5, 0);
			if (bParam15)
			{
				if (bVar1)
				{
					func_110(iParam11, &Var3, &Var4, &cVar15, &cVar23, iVar31, &vVar16, &cVar24, iVar32);
				}
			}
			else
			{
				func_110(iParam11, &Var3, &Var4, &cVar15, &cVar23, iVar31, &vVar16, &cVar24, iVar32);
			}
			if (bParam16)
			{
				if (bVar1)
				{
					func_110(iParam12, &Var5, &Var6, &cVar17, &cVar25, iVar33, &vVar18, &cVar26, iVar34);
				}
			}
			else
			{
				func_110(iParam12, &Var5, &Var6, &cVar17, &cVar25, iVar33, &vVar18, &cVar26, iVar34);
			}
			if (bParam17)
			{
				if (bVar1)
				{
					func_110(iParam13, &Var7, &Var8, &cVar19, &cVar27, iVar35, &vVar20, &cVar28, iVar36);
				}
			}
			else
			{
				func_110(iParam13, &Var7, &Var8, &cVar19, &cVar27, iVar35, &vVar20, &cVar28, iVar36);
			}
			if (bParam18)
			{
				if (bVar1)
				{
					func_110(iParam14, &Var9, &Var10, &cVar21, &cVar29, iVar37, &vVar22, &cVar30, iVar38);
				}
			}
			else
			{
				func_110(iParam14, &Var9, &Var10, &cVar21, &cVar29, iVar37, &vVar22, &cVar30, iVar38);
			}
		}
		func_45();
	}
}

void func_110(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, char* sParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		unk_0x0D3BE1DE0262A012(sParam3, false);
		if (unk_0x27117E2CDD4D67C3(sParam3))
		{
			func_88(uParam1, iParam5);
			func_69(sParam3, sParam4, uParam1, 1, 0, 4, 0);
		}
	}
	if (((((iParam0 == 27 || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		unk_0xA402F6C87C08815C(2, &iVar0, &iVar1, &iVar2, &uVar3);
		unk_0xC1032CAC14DE468A(*uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, iVar0, iVar1, iVar2, 153, 0);
	}
	if ((((((((((((((iParam0 == 18 || iParam0 == 19) || iParam0 == 20) || iParam0 == 21) || iParam0 == 22) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32)
	{
		if (!unk_0xEA6BC48857E0AC4C(sParam6))
		{
			unk_0x0D3BE1DE0262A012(sParam6, false);
			if (unk_0x27117E2CDD4D67C3(sParam6))
			{
				func_88(uParam2, iParam8);
				func_69(sParam6, sParam7, uParam2, 1, 0, 4, 0);
			}
		}
	}
}

void func_111(int iParam0)
{
	func_15(&(Global_150976.f_152[iParam0 /*2*/]));
	func_15(&(Global_150976.f_167[iParam0 /*2*/]));
}

void func_112(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, bool bParam13, int iParam14, int iParam15)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_27(10, iParam0))
	{
		uVar2 = 4;
		func_113(iParam0, &uVar0, &uVar1, &uVar2, iParam1, iParam2, 1, sParam3, iParam4, iParam7, bParam6, iParam5, uParam8, iParam9, iParam10, sParam11, sParam12, bParam13, iParam14, iParam15);
	}
}

void func_113(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, bool bParam17, int iParam18, int iParam19)
{
	struct<9> Var0;
	bool bVar1;
	int iVar2;
	struct<9> Var3;
	
	Global_150976++;
	if (func_107())
	{
		if (iParam13 == 2)
		{
		}
		func_98(10, iParam0);
		if (func_89())
		{
			func_142(uParam1, 0);
		}
		else if (bParam17)
		{
			func_105(uParam1, 0);
		}
		else if (bParam10)
		{
			func_141(uParam1, 3);
		}
		else
		{
			func_105(uParam1, 0);
		}
		if (Global_150976 == 1)
		{
			func_97(iParam6);
		}
		func_135(uParam2, uParam3, &Var0, iParam6, uParam1);
		func_100(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_133())));
		if (iParam11 == 0)
		{
			func_132(iParam0);
		}
		if (iParam14 == 0)
		{
			func_131(iParam0);
		}
		if (func_64(iParam11, &(Global_150976.f_128[iParam0 /*2*/]), &(Global_150976.f_13D[iParam0 /*2*/])))
		{
			bVar1 = true;
		}
		else
		{
			bVar1 = false;
		}
		unk_0x0D3BE1DE0262A012("TimerBars", false);
		if (unk_0x27117E2CDD4D67C3("TimerBars"))
		{
			iVar2 = func_77();
			unk_0xD9ACBBA59FD5A09E(iVar2);
			Var0 = *uParam2;
			Var0.f_1 = uParam2->f_1;
			Var0 = (Var0 + 0.079f);
			Var0.f_1 = (Var0.f_1 + 0.008f);
			Var0.f_2 = (Var0.f_2 + 0.157f);
			Var0.f_3 = (Var0.f_3 + 0.036f);
			Var0.f_4 += 255;
			Var0.f_5 += 255;
			Var0.f_6 += 255;
			Var0.f_7 = 140;
			if (func_89())
			{
				Var0 = (Var0 + -0.025f);
				Var0.f_2 = (Var0.f_2 + 0.05f);
			}
			Global_150976.f_18CE = (Global_150976.f_18CE + Var0.f_3);
			if (iParam14 > 0)
			{
				Var3 = { Var0 };
				if (func_244(&(Global_150976.f_35F[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_130(Global_150976.f_35F[iParam0 /*2*/], 1250, 0))
					{
						Global_150976.f_374[iParam0] = (Global_150976.f_374[iParam0] - 17);
					}
					Var3.f_7 = Global_150976.f_374[iParam0];
					func_88(&Var3, iParam8);
					func_69("TimerBars", "ALL_WHITE_bg", &Var3, 1, 0, iVar2, 0);
				}
			}
			else
			{
				Global_150976.f_374[iParam0] = 255;
				func_129(&(Global_150976.f_35F[iParam0 /*2*/]), 0, 0);
			}
			func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar2, 0);
			func_123(&Var0, iParam18);
			if (func_89())
			{
				if (bParam10)
				{
					if (unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.012f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.008f);
				}
			}
			else if (bParam10)
			{
				uParam2->f_1 = (uParam2->f_1 + (-0.005f + 0.001f));
			}
			iVar2 = func_77();
			unk_0xD9ACBBA59FD5A09E(iVar2);
			if (bParam17)
			{
				func_122(uParam1, iParam8);
				func_68(uParam1, 0);
				func_58(uParam2, uParam1, sParam7, "", iParam19, 2);
			}
			else if (bParam10 == 1)
			{
				func_122(uParam1, iParam8);
				func_68(uParam1, 0);
				func_58(uParam2, uParam1, sParam7, "", iParam19, 2);
			}
			else
			{
				func_68(uParam1, 0);
				if (iParam9 == 4294967295)
				{
					func_120(uParam2, uParam1, sParam7, 0, 1);
				}
				else
				{
					func_55(uParam2, uParam1, sParam7, iParam9, 2);
				}
			}
			iVar2 = func_77();
			unk_0xD9ACBBA59FD5A09E(iVar2);
			if (bVar1)
			{
				func_116(iParam4, iParam5, uParam3, iParam8, uParam12, iVar2);
				func_114(sParam15, uParam3, iVar2, sParam16);
			}
			func_45();
		}
	}
}

void func_114(char* sParam0, var uParam1, int iParam2, char* sParam3)
{
	struct<9> Var0[1];
	
	Var0[0 /*9*/] = 0f;
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = -0.015f;
	Var0[0 /*9*/].f_3 = -0.025f;
	unk_0x0D3BE1DE0262A012(sParam3, false);
	if (unk_0x27117E2CDD4D67C3(sParam3))
	{
		func_115(uParam1[0 /*9*/], &(Var0[0 /*9*/]));
		func_88(uParam1[0 /*9*/], 1);
		unk_0xD9ACBBA59FD5A09E(iParam2);
		(uParam1[0 /*9*/])->f_7 = 255;
		func_69(sParam3, sParam0, uParam1[0 /*9*/], 0, 0, iParam2, 0);
		unk_0xD9ACBBA59FD5A09E(iParam2);
	}
}

void func_115(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 + *uParam1);
	uParam0->f_1 = (uParam0->f_1 + uParam1->f_1);
	uParam0->f_2 = (uParam0->f_2 + uParam1->f_2);
	uParam0->f_3 = (uParam0->f_3 + uParam1->f_3);
	uParam0->f_4 = (uParam0->f_4 + uParam1->f_4);
	uParam0->f_5 = (uParam0->f_5 + uParam1->f_5);
	uParam0->f_6 = (uParam0->f_6 + uParam1->f_6);
	uParam0->f_7 = (uParam0->f_7 + uParam1->f_7);
}

void func_116(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5)
{
	struct<9> Var0[2];
	float fVar1;
	
	Var0[0 /*9*/] = 0.003f;
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.011f;
	Var0[0 /*9*/].f_3 = 0.059f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.011f;
	Var0[1 /*9*/].f_3 = 0.059f;
	unk_0x0D3BE1DE0262A012("TimerBars", false);
	if (unk_0x27117E2CDD4D67C3("TimerBars"))
	{
		func_115(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_115(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_88(uParam2[1 /*9*/], iParam3);
		func_88(uParam2[3 /*9*/], iParam3);
		fVar1 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		unk_0xD9ACBBA59FD5A09E(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_88(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_117(*(uParam2[0 /*9*/]), fVar1, uParam2[1 /*9*/], 1, 1, uParam4);
		unk_0xD9ACBBA59FD5A09E(iParam5);
		func_69("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		unk_0xD9ACBBA59FD5A09E(iParam5);
	}
}

void func_117(struct<9> Param0, float fParam1, var uParam2, int iParam3, int iParam4, var uParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = Param0.f_2;
	fVar1 = 0f;
	fVar2 = func_119(Param0);
	fVar3 = fParam1;
	if (fParam1 < 0f)
	{
		fVar3 = 0f;
	}
	if (fParam1 > 100f)
	{
		fVar3 = 100f;
	}
	if (fParam1 > 95f && fParam1 < 100f)
	{
		fVar3 = 96f;
	}
	if (iParam4 == 0)
	{
		fVar4 = ((fVar1 - fVar0) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar0;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		fVar2 = Param0;
		fVar8 = func_118(Param0);
		fVar9 = (fVar8 - (fVar7 / 2f));
	}
	else
	{
		fVar4 = ((fVar0 - fVar1) / 100f);
		fVar5 = fVar3;
		fVar6 = 0f;
		fVar7 = ((fVar4 * fVar5) + fVar6);
		if (fParam1 >= 100f)
		{
			fVar7 = Param0.f_2;
		}
		fVar8 = Param0;
		fVar4 = ((fVar8 - fVar2) / 100f);
		fVar5 = fVar3;
		fVar6 = fVar2;
		fVar9 = ((fVar4 * fVar5) + fVar6);
	}
	*uParam2 = fVar9;
	uParam2->f_1 = Param0.f_1;
	uParam2->f_2 = fVar7;
	if (iParam3 == 1)
	{
		uParam2->f_3 = Param0.f_3;
	}
	uParam2->f_8 = Param0.f_8;
}

float func_118(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (vParam0.z / 2f);
	fVar1 = vParam0.x;
	fVar1 = (fVar1 + fVar0);
	fVar1 = (fVar1 - 0.002f);
	return fVar1;
}

float func_119(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (vParam0.z / 2f);
	fVar1 = vParam0.x;
	fVar1 = (fVar1 - fVar0);
	return fVar1;
}

void func_120(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_57(sVar0))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			unk_0xFF72A133B792782E(iParam4);
			unk_0xAAE406A7DA443B93(iParam3);
			func_121(func_48(*uParam0), func_47(uParam0->f_1), sVar0, 0);
		}
	}
}

void func_121(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam3);
}

void func_122(var uParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	unk_0xA402F6C87C08815C(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_123(var uParam0, int iParam1)
{
	struct<8> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	if (iParam1 == 0)
	{
		return;
	}
	Var0 = 0.951f;
	Var0.f_1 = uParam0->f_1;
	Var0.f_2 = 0.002f;
	Var0.f_3 = uParam0->f_3;
	unk_0xA402F6C87C08815C(iParam1, &uVar1, &uVar2, &uVar3, &uVar4);
	Var0.f_4 = uVar1;
	Var0.f_5 = uVar2;
	Var0.f_6 = uVar3;
	Var0.f_7 = uVar4;
	func_124(Var0, 0, 0);
}

void func_124(struct<8> Param0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam1)
	{
		case 2:
			func_128(&Var0);
			break;
		
		case 1:
			func_127(&Var0);
			break;
		
		case 3:
			func_126(&Var0);
			break;
		
		case 4:
			func_125(&Var0);
			break;
	}
	if (func_49())
	{
		if (iParam2 == 1)
		{
			unk_0xC1032CAC14DE468A(func_48(Var0), func_47(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			unk_0xC1032CAC14DE468A(func_48(Var0), func_47(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_125(var uParam0)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_126(var uParam0)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_127(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_128(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_129(var uParam0, bool bParam1, bool bParam2)
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

int func_130(int iParam0, var uParam1, int iParam2, bool bParam3)
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

void func_131(int iParam0)
{
	func_15(&(Global_150976.f_2F6[iParam0 /*2*/]));
	func_15(&(Global_150976.f_30B[iParam0 /*2*/]));
}

void func_132(int iParam0)
{
	func_15(&(Global_150976.f_128[iParam0 /*2*/]));
	func_15(&(Global_150976.f_13D[iParam0 /*2*/]));
	Global_150976.f_46F.f_CD[iParam0] = 4294967295;
}

float func_133()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	fVar0 = unk_0x33D480CCE15C991A(0);
	unk_0xE5AC5CA7914F5BAE(&iVar1, &iVar2);
	fVar3 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar2));
	fVar0 = func_134(fVar0, fVar3);
	if (fVar3 > 3.5f && fVar0 > 1.7f)
	{
		return 1.4f;
	}
	if (fVar0 > 1.7f)
	{
		return 1f;
	}
	else if (fVar0 > 1.5f)
	{
		return 1.2f;
	}
	else if (fVar0 > 1.3f)
	{
		return 1.3f;
	}
	return 1.4f;
}

float func_134(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_135(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	float fVar0;
	
	fVar0 = func_140(0, 1);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_95(iParam3);
	uParam0->f_1 = (uParam0->f_1 + func_94(uParam4));
	func_136(uParam1, iParam3, -1f, -1f);
	func_92(iParam3, -fVar0);
	func_106(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_136(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_139(fParam2, fParam3))
	{
		fVar0 = (func_138() + func_95(iParam1));
		fVar1 = func_137();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.062f;
	(uParam0[0 /*9*/])->f_3 = 0.016f;
	(uParam0[0 /*9*/])->f_4 = 255;
	(uParam0[0 /*9*/])->f_5 = 255;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.069f;
	(uParam0[1 /*9*/])->f_3 = 0.011f;
	(uParam0[1 /*9*/])->f_4 = 255;
	(uParam0[1 /*9*/])->f_5 = 255;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.069f;
	(uParam0[2 /*9*/])->f_3 = 0.009f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 120;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.069f;
	(uParam0[3 /*9*/])->f_3 = 0.008f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 90;
}

float func_137()
{
	float fVar0;
	
	fVar0 = (((((0.919f - 0.081f) + 0.028f) + 0.05f) - 0.001f) - 0.002f);
	return fVar0;
}

float func_138()
{
	float fVar0;
	
	fVar0 = ((((0.013f - 0.002f) + 0.001f) + 0.001f) - 0.001f);
	return fVar0;
}

int func_139(float fParam0, float fParam1)
{
	if (fParam0 == -1f && fParam1 == -1f)
	{
		return 0;
	}
	return 1;
}

float func_140(int iParam0, bool bParam1)
{
	float fVar0;
	
	fVar0 = ((0.025f + 0.006f) + 0.0009f);
	if (iParam0 == 1)
	{
		fVar0 = (fVar0 + 0.008f);
	}
	if (bParam1)
	{
		fVar0 = (fVar0 + 0.008f);
	}
	return fVar0;
}

void func_141(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.355f + 0.092f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 6;
}

void func_142(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.508f - 0.03f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 20;
}

void func_143(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_27(9, iParam0))
	{
		func_144(iParam0, &uVar0, &uVar1, 1, iParam1, iParam2);
	}
}

void func_144(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	var uVar5;
	
	Global_150976++;
	if (func_107())
	{
		func_148();
		unk_0xA402F6C87C08815C(iParam5, &uVar0, &uVar1, &uVar2, &uVar3);
		func_147(uParam1, 3, uVar0, uVar1, uVar2);
		if (func_89())
		{
			uParam1->f_1 = 2f;
			uParam1->f_2 = 2.7f;
		}
		if (Global_150976 == 1)
		{
			func_97(iParam3);
		}
		fVar4 = 0.131f;
		if (unk_0xB3260A60545D3F11() == 8)
		{
			fVar4 = 0.0872f;
		}
		else if (unk_0xB3260A60545D3F11() == 10)
		{
			fVar4 = 0.095f;
		}
		*uParam2 = 0.795f;
		uParam2->f_1 = ((func_95(iParam3) + func_93(uParam1)) - fVar4);
		func_99(uParam1);
		func_68(uParam1, 0);
		func_98(9, iParam0);
		func_146(&uVar5, iParam4);
		func_120(uParam2, uParam1, func_145(&uVar5), 0, 1);
		func_45();
	}
}

var func_145(var uParam0)
{
	return uParam0;
}

void func_146(var uParam0, int iParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "RACE_POS_", 16);
	StringIntConCat(&Var0, iParam1, 16);
	*uParam0 = { Var0 };
}

void func_147(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam0 = 6;
	uParam0->f_1 = 3f;
	uParam0->f_2 = 3.7f;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	uParam0->f_5 = uParam4;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 11;
}

void func_148()
{
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(6);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
}

void func_149(int iParam0, char* sParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_27(8, iParam0))
	{
		uVar2 = 2;
		func_150(iParam0, &uVar0, &uVar1, &uVar2, 1, sParam1, iParam3, uParam2, uParam4, uParam5, uParam6);
	}
}

void func_150(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, char* sParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	struct<9> Var0;
	struct<8> Var1;
	
	Global_150976++;
	if (func_107())
	{
		func_106(&Var1, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_105(uParam1, 0);
		func_100(uParam1);
		func_98(8, iParam0);
		if (Global_150976 == 1)
		{
			func_97(iParam4);
		}
		func_151(uParam2, iParam4, uParam1, &Var0);
		unk_0x0D3BE1DE0262A012("TimerBars", false);
		unk_0x0D3BE1DE0262A012("Hunting", false);
		if (unk_0x27117E2CDD4D67C3("TimerBars") && unk_0x27117E2CDD4D67C3("Hunting"))
		{
			Var1 = *uParam2;
			Var1.f_1 = uParam2->f_1;
			Var1 = (Var1 + 0.079f);
			Var1.f_1 = (Var1.f_1 + 0.008f);
			Var1.f_2 = (Var1.f_2 + 0.157f);
			Var1.f_3 = (Var1.f_3 + 0.036f);
			Var1.f_4 += 255;
			Var1.f_5 += 255;
			Var1.f_6 += 255;
			Var1.f_7 = 140;
			if (func_89())
			{
				Var1 = (Var1 + -0.025f);
				Var1.f_2 = (Var1.f_2 + 0.05f);
			}
			Global_150976.f_18CE = (Global_150976.f_18CE + Var1.f_3);
			func_69("TimerBars", "ALL_BLACK_bg", &Var1, 1, 0, 4, 0);
			Var0.f_4 = uParam8;
			Var0.f_5 = uParam9;
			Var0.f_6 = uParam10;
			Var0.f_7 = 255;
			Var0.f_8 = uParam7;
			func_69("Hunting", "HuntingWindArrow_32", &Var0, 1, 0, 4, 0);
			uParam1->f_3 = uParam8;
			uParam1->f_4 = uParam9;
			uParam1->f_5 = uParam10;
			uParam1->f_6 = 255;
			func_68(uParam1, 0);
			uParam7 = uParam7;
			(*uParam3)[0 /*9*/] = (*uParam3)[0 /*9*/];
			func_55(uParam2, uParam1, sParam5, iParam6, 2);
			func_45();
		}
	}
}

void func_151(var uParam0, int iParam1, var uParam2, var uParam3)
{
	float fVar0;
	
	fVar0 = func_140(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_95(iParam1);
	uParam0->f_1 = (uParam0->f_1 + func_94(uParam2));
	func_92(iParam1, -fVar0);
	uParam0->f_1 = (uParam0->f_1 + func_94(uParam2));
	*uParam3 = 0.9375f;
	uParam3->f_1 = (uParam0->f_1 + 0.009f);
	uParam3->f_2 = 0.02f;
	uParam3->f_3 = 0.02f;
}

void func_152(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, float fParam17, float fParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, bool bParam46, int iParam47, int iParam48, int iParam49, int iParam50, int iParam51, int iParam52, int iParam53, int iParam54, int iParam55)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(2, iParam0))
	{
		uVar2 = 9;
		if (iParam1 < 9)
		{
			func_153(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, iParam3, iParam4, sParam2, iParam5, uParam6, uParam7, uParam8, uParam9, uParam10, uParam11, uParam12, uParam13, iParam14, iParam15, bParam16, fParam17, fParam18, uParam19, uParam20, uParam21, uParam22, uParam23, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, iParam35, iParam36, iParam37, iParam38, iParam39, iParam40, iParam41, iParam42, iParam43, iParam44, iParam45, bParam46, iParam47, iParam48, iParam49, iParam50, iParam51, iParam52, iParam53, iParam54, iParam55);
		}
	}
}

void func_153(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, int iParam20, bool bParam21, float fParam22, float fParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45, int iParam46, int iParam47, int iParam48, int iParam49, int iParam50, bool bParam51, int iParam52, int iParam53, int iParam54, int iParam55, int iParam56, int iParam57, int iParam58, int iParam59, int iParam60)
{
	struct<9> Var0;
	bool bVar1;
	int iVar2;
	struct<9> Var3;
	
	Global_150976++;
	if (func_107())
	{
		if (iParam40 == 2)
		{
		}
		func_98(2, iParam0);
		if (Global_150976 == 1)
		{
			func_97(iParam6);
		}
		func_160(uParam2, uParam3, &Var0, uParam4, iParam6, fParam22, fParam23, uParam1);
		if (func_89())
		{
			func_142(uParam1, 0);
		}
		else if (bParam51)
		{
			func_105(uParam1, 0);
		}
		else if (bParam21)
		{
			func_141(uParam1, 3);
		}
		else
		{
			func_105(uParam1, 0);
		}
		func_100(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_133())));
		if (iParam19 == 0)
		{
			func_159(iParam0);
		}
		if (iParam41 == 0)
		{
			func_158(iParam0);
		}
		iVar2 = func_77();
		unk_0xD9ACBBA59FD5A09E(iVar2);
		unk_0x0D3BE1DE0262A012("TimerBars", false);
		if (unk_0x27117E2CDD4D67C3("TimerBars"))
		{
			if (func_64(iParam19, &(Global_150976.f_D4[iParam0 /*2*/]), &(Global_150976.f_E9[iParam0 /*2*/])))
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			if (!func_139(fParam22, fParam23))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				Var0 = (Var0 + 0.079f);
				Var0.f_1 = (Var0.f_1 + 0.012f);
				Var0.f_2 = (Var0.f_2 + 0.157f);
				Var0.f_3 = (Var0.f_3 + 0.028f);
				Var0.f_4 += 255;
				Var0.f_5 += 255;
				Var0.f_6 += 255;
				Var0.f_7 = 140;
				if (func_89())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_150976.f_18CE = (Global_150976.f_18CE + Var0.f_3);
				if (iParam41 > 0)
				{
					Var3 = { Var0 };
					if (func_244(&(Global_150976.f_3FF[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_130(Global_150976.f_3FF[iParam0 /*2*/], 1250, 0))
						{
							Global_150976.f_414[iParam0] = (Global_150976.f_414[iParam0] - 17);
						}
						Var3.f_7 = Global_150976.f_414[iParam0];
						func_88(&Var3, iParam7);
						func_69("TimerBars", "ALL_WHITE_bg", &Var3, 1, 0, iVar2, 0);
					}
				}
				else
				{
					Global_150976.f_414[iParam0] = 255;
					func_129(&(Global_150976.f_3FF[iParam0 /*2*/]), 0, 0);
				}
				func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar2, 0);
			}
			func_123(&Var0, iParam52);
			iVar2 = func_77();
			unk_0xD9ACBBA59FD5A09E(iVar2);
			func_122(uParam1, iParam42);
			if (unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 12)
			{
				uParam2->f_1 = (uParam2->f_1 + -0.009f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + -0.003f);
			}
			if (func_89())
			{
				if (unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.007f);
				}
			}
			if (func_89() == 0)
			{
				if (bParam51)
				{
					uParam2->f_1 = (uParam2->f_1 + 0.003f);
				}
				else if (bParam21)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.002f);
				}
			}
			else if (bParam21)
			{
				uParam2->f_1 = (uParam2->f_1 + 0.007f);
			}
			else
			{
				uParam2->f_1 = (uParam2->f_1 + 0.003f);
			}
			if (!func_139(fParam22, fParam23))
			{
				func_68(uParam1, 0);
				if (bParam51)
				{
					func_58(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (bParam21 == 1)
				{
					func_58(uParam2, uParam1, sParam9, "", iParam42, 2);
				}
				else if (iParam20 == 4294967295)
				{
					func_120(uParam2, uParam1, sParam9, 0, 1);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 - -0.003f);
					func_55(uParam2, uParam1, sParam9, iParam20, 2);
				}
			}
			if (bVar1)
			{
				func_154(iParam5, uParam3, iParam7, iParam8, iParam10, uParam11, uParam12, uParam13, uParam14, uParam15, uParam16, uParam17, uParam18, uParam24, uParam25, uParam26, uParam27, uParam28, uParam29, uParam30, uParam31, uParam32, uParam33, uParam34, uParam35, uParam36, uParam37, uParam38, uParam39, iVar2, iParam43, iParam44, iParam45, iParam46, iParam47, iParam48, iParam49, iParam50, iParam53, iParam54, iParam55, iParam56, iParam57, iParam58, iParam59, iParam60);
			}
			func_45();
		}
	}
}

void func_154(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39, int iParam40, int iParam41, int iParam42, int iParam43, int iParam44, int iParam45)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<9> Var5;
	bool bVar6;
	
	unk_0x0D3BE1DE0262A012("TimerBars", false);
	unk_0x0D3BE1DE0262A012("Cross", false);
	if (unk_0x27117E2CDD4D67C3("TimerBars") && unk_0x27117E2CDD4D67C3("Cross"))
	{
		fVar3 = -0.0094f;
		iVar4 = 0;
		while (iVar4 <= (iParam0 - 1))
		{
			(*uParam1)[iVar4 /*9*/] = ((*uParam1)[iVar4 /*9*/] + (fVar3 * IntToFloat(iVar4)));
			if (func_157(iVar4, iParam4))
			{
				switch (iVar4)
				{
					case 0:
						bVar0 = uParam5;
						iVar1 = uParam13;
						iVar2 = uParam21;
						break;
					
					case 1:
						bVar0 = uParam6;
						iVar1 = uParam14;
						iVar2 = uParam22;
						break;
					
					case 2:
						bVar0 = uParam7;
						iVar1 = uParam15;
						iVar2 = uParam23;
						break;
					
					case 3:
						bVar0 = uParam8;
						iVar1 = uParam16;
						iVar2 = uParam24;
						break;
					
					case 4:
						bVar0 = uParam9;
						iVar1 = uParam17;
						iVar2 = uParam25;
						break;
					
					case 5:
						bVar0 = uParam10;
						iVar1 = uParam18;
						iVar2 = uParam26;
						break;
					
					case 6:
						bVar0 = uParam11;
						iVar1 = uParam19;
						iVar2 = uParam27;
						break;
					
					case 7:
						bVar0 = uParam12;
						iVar1 = uParam20;
						iVar2 = uParam28;
						break;
				}
				bVar6 = false;
				if (iVar2 == 2)
				{
					bVar6 = true;
					iVar2 = 1;
				}
				Var5 = { func_156(*(uParam1[iVar4 /*9*/]), bVar0, iParam2, iParam3, iVar1, iVar2) };
				if (bVar6)
				{
					Var5.f_7 = 51;
				}
				func_69("TimerBars", "Circle_checkpoints", &Var5, 0, 0, iParam29, 0);
				if (func_155(iVar4, iParam30, iParam31, iParam32, iParam33, iParam34, iParam35, iParam36, iParam37))
				{
					switch (iVar4)
					{
						case 0:
							func_88(uParam1[iVar4 /*9*/], iParam38);
							break;
						
						case 1:
							func_88(uParam1[iVar4 /*9*/], iParam39);
							break;
						
						case 2:
							func_88(uParam1[iVar4 /*9*/], iParam40);
							break;
						
						case 3:
							func_88(uParam1[iVar4 /*9*/], iParam41);
							break;
						
						case 4:
							func_88(uParam1[iVar4 /*9*/], iParam42);
							break;
						
						case 5:
							func_88(uParam1[iVar4 /*9*/], iParam43);
							break;
						
						case 6:
							func_88(uParam1[iVar4 /*9*/], iParam44);
							break;
						
						case 7:
							func_88(uParam1[iVar4 /*9*/], iParam45);
							break;
					}
					func_69("Cross", "Circle_checkpoints_Cross", uParam1[iVar4 /*9*/], 0, 0, iParam29, 0);
				}
			}
			iVar4++;
		}
	}
}

int func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (iParam0 == 0 && iParam1 == 1)
	{
		return 1;
	}
	if (iParam0 == 1 && iParam2 == 1)
	{
		return 1;
	}
	if (iParam0 == 2 && iParam3 == 1)
	{
		return 1;
	}
	if (iParam0 == 3 && iParam4 == 1)
	{
		return 1;
	}
	if (iParam0 == 4 && iParam5 == 1)
	{
		return 1;
	}
	if (iParam0 == 5 && iParam6 == 1)
	{
		return 1;
	}
	if (iParam0 == 6 && iParam7 == 1)
	{
		return 1;
	}
	if (iParam0 == 7 && iParam8 == 1)
	{
		return 1;
	}
	return 0;
}

struct<9> func_156(struct<9> Param0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<9> Var0;
	
	Var0 = { Param0 };
	if (iParam4 == 0)
	{
		if (bParam1)
		{
			func_88(&Var0, iParam2);
		}
		else
		{
			func_88(&Var0, iParam3);
		}
	}
	else if (bParam1)
	{
		func_88(&Var0, iParam4);
	}
	else
	{
		func_88(&Var0, iParam5);
	}
	if (bParam1 == 0)
	{
	}
	return Var0;
}

int func_157(int iParam0, int iParam1)
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	if (iParam0 > iParam1)
	{
		return 0;
	}
	return 1;
}

void func_158(int iParam0)
{
	func_15(&(Global_150976.f_2A2[iParam0 /*2*/]));
	func_15(&(Global_150976.f_2B7[iParam0 /*2*/]));
}

void func_159(int iParam0)
{
	func_15(&(Global_150976.f_D4[iParam0 /*2*/]));
	func_15(&(Global_150976.f_E9[iParam0 /*2*/]));
}

void func_160(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, float fParam5, float fParam6, var uParam7)
{
	float fVar0;
	
	fVar0 = func_140(0, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_95(iParam4);
	uParam0->f_1 = (uParam0->f_1 + func_94(uParam7));
	func_162(uParam1, iParam4, fParam5, fParam6);
	func_161(uParam3);
	if (!func_139(fParam5, fParam6))
	{
		func_92(iParam4, -fVar0);
	}
	func_106(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_161(var uParam0)
{
	*uParam0 = 0.851f;
	uParam0->f_1 = 0.075f;
	uParam0->f_2 = 0.001f;
	uParam0->f_3 = 0.009f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 250;
}

void func_162(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_139(fParam2, fParam3))
	{
		fVar0 = (func_138() + func_95(iParam1));
		fVar1 = func_163();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
}

float func_163()
{
	float fVar0;
	
	fVar0 = ((((((((0.919f - 0.081f) + 0.004f) - 0.006f) + 0.05f) - 0.001f) - 0.005f) + 0.065f) - 0.0005f);
	return fVar0;
}

void func_164(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17, bool bParam18, int iParam19, int iParam20, bool bParam21, int iParam22, bool bParam23, bool bParam24, int iParam25)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(6, iParam0))
	{
		func_165(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, iParam8, fParam9, iParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, bParam18, iParam19, iParam20, bParam21, iParam22, bParam23, bParam24, iParam25, 0, 0, 4294967295);
	}
}

void func_165(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, bool bParam11, char* sParam12, int iParam13, float fParam14, int iParam15, int iParam16, int iParam17, bool bParam18, int iParam19, bool bParam20, int iParam21, int iParam22, bool bParam23, int iParam24, int iParam25, bool bParam26, int iParam27, bool bParam28, bool bParam29, int iParam30, bool bParam31, int iParam32, int iParam33)
{
	struct<8> Var0;
	struct<9> Var1;
	struct<9> Var2;
	struct<9> Var3;
	bool bVar4;
	int iVar5;
	struct<9> Var6;
	bool bVar7;
	float fVar8;
	float fVar9;
	struct<8> Var10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<8> Var15;
	struct<8> Var16;
	int iVar17;
	char* sVar18;
	char* sVar19;
	int iVar20;
	char* sVar21;
	char* sVar22;
	int iVar23;
	
	Global_150976++;
	if (func_107())
	{
		func_106(&Var0, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_106(&Var1, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_106(&Var2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		func_106(&Var3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
		if (func_89())
		{
			if (bParam23)
			{
				func_173(uParam1, 0);
			}
			else if (bParam11)
			{
				func_141(uParam1, 3);
			}
			else
			{
				func_173(uParam1, 0);
			}
		}
		else if (bParam23)
		{
			func_105(uParam1, 0);
		}
		else if (bParam11)
		{
			func_141(uParam1, 3);
		}
		else
		{
			func_105(uParam1, 0);
		}
		if (Global_258C16 && bParam11)
		{
			if (func_89())
			{
				func_173(uParam1, 0);
			}
			else
			{
				func_105(uParam1, 0);
			}
		}
		if (iParam5 < 1000000)
		{
			if ((unk_0xB3260A60545D3F11() == 8 && fParam14 >= 100f) && unk_0x7F8A39872A07D2CE("AMCH_KMHN", sParam12))
			{
				func_104(uParam2, 0, 0);
			}
			else if (((unk_0xB3260A60545D3F11() == 8 || unk_0xB3260A60545D3F11() == 9) || unk_0xB3260A60545D3F11() == 12) && ((iParam5 > 999 || iParam19 > 999) || fParam14 > 1000f))
			{
				func_104(uParam2, 0, 0);
			}
			else if (iParam19 > 99)
			{
				func_103(uParam2, 0, 0);
			}
			else
			{
				func_102(uParam2, 0, 0);
			}
		}
		else if (unk_0xB3260A60545D3F11() == 8 && (unk_0x7F8A39872A07D2CE("HUD_CASH", sParam12) || unk_0x7F8A39872A07D2CE("HUD_CASH_NEG", sParam12)))
		{
			func_104(uParam2, 0, 0);
		}
		else
		{
			func_103(uParam2, 0, 0);
		}
		func_100(uParam1);
		func_99(uParam2);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_133())));
		func_98(6, iParam0);
		if (Global_150976 == 1)
		{
			func_97(iParam6);
		}
		func_91(uParam2, uParam3, uParam4, iParam6, uParam1);
		if (iParam22 == 1)
		{
			iParam17 = 2;
			iParam8 = 2;
		}
		func_90(uParam2, iParam8);
		if (iParam9 == 0)
		{
			func_172(iParam0);
		}
		if (iParam16 == 0)
		{
			func_171(iParam0);
		}
		unk_0x0D3BE1DE0262A012("TimerBars", false);
		if (unk_0x27117E2CDD4D67C3("TimerBars"))
		{
			iVar5 = func_77();
			unk_0xD9ACBBA59FD5A09E(iVar5);
			if (func_64(iParam9, &(Global_150976.f_56[iParam0 /*2*/]), &(Global_150976.f_6B[iParam0 /*2*/])))
			{
				bVar4 = true;
			}
			else
			{
				bVar4 = false;
			}
			Var3 = *uParam3;
			Var3.f_1 = uParam3->f_1;
			Var0 = *uParam3;
			Var0.f_1 = (uParam3->f_1 + 0.001f);
			if (iParam22 == 1)
			{
				Var3 = (Var3 + 0.079f);
				Var3.f_1 = (Var3.f_1 + 0.002f);
				Var3.f_2 = (Var3.f_2 + 0.157f);
				Var3.f_3 = (Var3.f_3 + 0.049f);
				Var3.f_4 += 255;
				Var3.f_5 += 255;
				Var3.f_6 += 255;
				Var3.f_7 = 140;
			}
			else if (iParam5 < 1000000)
			{
				Var3 = (Var3 + 0.079f);
				Var3.f_1 = (Var3.f_1 + 0.008f);
				Var3.f_2 = (Var3.f_2 + 0.157f);
				Var3.f_3 = (Var3.f_3 + 0.036f);
				Var3.f_4 += 255;
				Var3.f_5 += 255;
				Var3.f_6 += 255;
				Var3.f_7 = 140;
			}
			else
			{
				Var3 = (Var3 + 0.079f);
				Var3.f_1 = (Var3.f_1 + 0.01f);
				Var3.f_2 = (Var3.f_2 + 0.157f);
				Var3.f_3 = (Var3.f_3 + 0.033f);
				Var3.f_4 += 255;
				Var3.f_5 += 255;
				Var3.f_6 += 255;
				Var3.f_7 = 140;
			}
			if (func_89())
			{
				Var3 = (Var3 + -0.025f);
				Var3.f_2 = (Var3.f_2 + 0.05f);
			}
			Global_150976.f_18CE = (Global_150976.f_18CE + Var3.f_3);
			if (iParam16 > 0)
			{
				Var6 = { Var3 };
				if (func_244(&(Global_150976.f_43F[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_130(Global_150976.f_43F[iParam0 /*2*/], 1250, 0))
					{
						Global_150976.f_454[iParam0] = (Global_150976.f_454[iParam0] - 17);
					}
					Var6.f_7 = Global_150976.f_454[iParam0];
					if (iParam15 == 2)
					{
						func_88(&Var6, 6);
					}
					else if (iParam15 == 3)
					{
						func_88(&Var6, 18);
					}
					else
					{
						func_88(&Var6, iParam8);
					}
					func_69("TimerBars", "ALL_WHITE_bg", &Var6, 1, 0, iVar5, 0);
				}
			}
			else
			{
				Global_150976.f_454[iParam0] = 255;
				func_129(&(Global_150976.f_43F[iParam0 /*2*/]), 0, 0);
			}
			if (iParam22 == 1)
			{
				func_69("TimerBars", "ALL_WHITE_bg", &Var3, 1, 0, iVar5, 0);
			}
			else
			{
				func_69("TimerBars", "ALL_BLACK_bg", &Var3, 1, 0, iVar5, 0);
			}
			func_123(&Var3, iParam24);
			iVar5 = func_77();
			unk_0xD9ACBBA59FD5A09E(iVar5);
			func_122(uParam1, iParam17);
			bVar7 = true;
			if (Global_258C16)
			{
				bVar7 = false;
			}
			if (Global_258C17 == 1)
			{
				bVar7 = true;
			}
			func_68(uParam1, 0);
			if (func_89())
			{
				if (bParam11)
				{
					if (unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 12)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.004f);
					}
				}
				else if (func_89())
				{
					if (unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 12)
					{
						uParam3->f_1 = (uParam3->f_1 + -0.012f);
						uParam4->f_1 = (uParam4->f_1 + -0.004f);
					}
					else
					{
						uParam3->f_1 = (uParam3->f_1 + -0.008f);
					}
				}
			}
			else if (bParam23)
			{
				uParam3->f_1 = (uParam3->f_1 + 0f);
			}
			else if (bParam11 && Global_258C16 == 0)
			{
				uParam3->f_1 = (uParam3->f_1 + (-0.002f - 0.004f));
			}
			if (iParam22 == 1)
			{
				uParam3->f_1 = (uParam3->f_1 - 0.007f);
				uParam4->f_1 = (uParam4->f_1 - 0.007f);
			}
			if (iParam21 == 2 && unk_0xEA6BC48857E0AC4C(sParam7))
			{
				sParam7 = "HUD_ROCKET";
			}
			else if (iParam21 == 4)
			{
				sParam7 = "HUD_BOOST";
			}
			else if (iParam21 == 1)
			{
				sParam7 = "HUD_SPIKES";
			}
			uParam1->f_6 = iParam25;
			uParam2->f_6 = iParam25;
			if (bParam26)
			{
				uParam2->f_6 = 0;
			}
			if (bParam28)
			{
				if (bVar4)
				{
					func_170(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, bVar7);
				}
			}
			else
			{
				func_170(uParam1, uParam3, sParam7, iParam17, iParam8, iParam10, bParam11, bVar7);
			}
			if (bParam31)
			{
				if (iParam33 > 0)
				{
					if (!func_66(&(Global_150976.f_34A[iParam0 /*2*/])))
					{
						func_65(&(Global_150976.f_34A[iParam0 /*2*/]), 0, 0);
					}
					else if (func_244(&(Global_150976.f_34A[iParam0 /*2*/]), iParam33, 0))
					{
						func_129(&(Global_150976.f_34A[iParam0 /*2*/]), 0, 0);
					}
					func_167(uParam2, iParam8, iParam32, iParam33, Global_150976.f_34A[iParam0 /*2*/]);
				}
			}
			if (iParam22 == 1)
			{
				Var1 = uParam2->f_9;
				Var1.f_1 = (uParam4->f_1 - 0.0175f);
				Var2 = uParam2->f_9;
				Var2.f_1 = (uParam4->f_1 + 0.0175f);
				unk_0x0D3BE1DE0262A012("MPArrow", false);
				if (unk_0x27117E2CDD4D67C3("MPArrow"))
				{
					Var1 = (Var1 + 0.0095f);
					Var1 = (Var1 - 0.015f);
					Var1.f_1 = (Var1.f_1 + 0.019f);
					Var1.f_2 = (Var1.f_2 + 0.01f);
					Var1.f_3 = (Var1.f_3 + 0.01f);
					Var1.f_4 = Var1.f_4;
					Var1.f_5 = Var1.f_5;
					Var1.f_6 = Var1.f_6;
					Var1.f_7 = (Var1.f_7 - 50);
					Var1.f_8 = -90f;
					func_69("MPArrow", "MP_ArrowXLarge", &Var1, 1, 0, iVar5, 0);
					Var2 = (Var2 + 0.0095f);
					Var2 = (Var2 - 0.015f);
					Var2.f_1 = (Var2.f_1 + 0.019f);
					Var2.f_2 = (Var2.f_2 + 0.01f);
					Var2.f_3 = (Var2.f_3 + 0.01f);
					Var2.f_4 = Var2.f_4;
					Var2.f_5 = Var2.f_5;
					Var2.f_6 = Var2.f_6;
					Var2.f_7 = (Var2.f_7 - 50);
					Var2.f_8 = 90f;
					func_69("MPArrow", "MP_ArrowXLarge", &Var2, 1, 0, iVar5, 0);
				}
			}
			if (bParam29)
			{
				fVar8 = (func_138() + func_95(iParam6));
				fVar9 = func_137();
				if (func_89())
				{
					Var10 = (fVar9 - 0.061f);
				}
				else
				{
					Var10 = (fVar9 - 0.0365f);
				}
				Var10.f_1 = (fVar8 + 0.057f);
				Var10.f_2 = (Var3.f_2 - 0.004f);
				Var10.f_3 = 0.01f;
				Var10.f_4 = 255;
				Var10.f_5 = 255;
				Var10.f_6 = 255;
				Var10.f_7 = 255;
				func_88(&Var10, iParam30);
				func_69("TimerBars", "DamagebarFill_128", &Var10, 0, 0, iVar5, 0);
			}
			if (bParam18)
			{
				unk_0x0D3BE1DE0262A012("CommonMenu", false);
				if (unk_0x27117E2CDD4D67C3("CommonMenu"))
				{
					fVar11 = 0f;
					if (bParam11 == 1)
					{
						unk_0xBBA442527B4BB1A6("STRING");
						unk_0xD06AC7C87A34A6AD(sParam7);
						fVar12 = unk_0x79E367314AFBB5CA(1);
					}
					else
					{
						unk_0xBBA442527B4BB1A6(sParam7);
						if (iParam10 != 4294967295)
						{
							unk_0x6D99DF8263D35CE5(iParam10);
							unk_0x6D99DF8263D35CE5(iParam10);
						}
						fVar12 = unk_0x79E367314AFBB5CA(1);
					}
					if (unk_0xB3260A60545D3F11() == 8 && bParam11 == 0)
					{
						fVar13 = (0.153f - 0.072f);
						fVar14 = -0.457f;
					}
					else if (unk_0xB3260A60545D3F11() == 10 && bParam11 == 0)
					{
						fVar13 = ((0.153f - 0.01f) - 0.06f);
						fVar14 = -0.457f;
					}
					else if (unk_0xB3260A60545D3F11() == 9 && bParam11 == 0)
					{
						fVar13 = ((0.153f - 0.012f) - 0.06f);
						fVar14 = -0.457f;
					}
					else if (unk_0xB3260A60545D3F11() == 12 && bParam11 == 0)
					{
						fVar13 = ((0.153f - 0.012f) - 0.06f);
						fVar14 = -0.457f;
					}
					else
					{
						fVar13 = ((0.153f - 0.037f) - 0.036f);
						fVar14 = (-0.457f + 0.194f);
					}
					fVar13 = (fVar13 + 0.03f);
					if (Global_150976.f_46A)
					{
						fVar13 = (fVar13 + -0.03f);
					}
					if (unk_0x0EFF6B4415DAF4A1() && !unk_0x0D71AFA59EF5104F())
					{
						fVar13 = (fVar13 + -0.015f);
					}
					if (Global_150976.f_46B && Global_150976.f_46A == 0)
					{
						fVar13 = (fVar13 + (-0.015f - 0.003f));
					}
					fVar11 = ((fVar14 * fVar12) + fVar13);
					Var0 = (Var0 + fVar11);
					Var0 = (Var0 - 0.015f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.022f);
					Var0.f_3 = (Var0.f_3 + 0.04f);
					Var0.f_4 += 194;
					Var0.f_5 += 80;
					Var0.f_6 += 80;
					Var0.f_7 = (Var0.f_7 - 50);
					func_69("CommonMenu", "MP_AlertTriangle", &Var0, 1, 0, iVar5, 0);
				}
			}
			if (bVar4)
			{
				if (iParam21 != 0)
				{
					func_166(uParam2);
					Var15 = ((*uParam4 + 0.145f) + 0.001f);
					if (func_89())
					{
						Var15.f_1 = ((uParam4->f_1 + 0.016f) - 0.006f);
					}
					else
					{
						Var15.f_1 = (uParam4->f_1 + 0.016f);
					}
					Var15.f_2 = (0.016f + 0.003f);
					Var15.f_3 = (0.032f + 0.004f);
					Var15.f_7 = iParam25;
					func_88(&Var15, 1);
					Var16 = ((*uParam4 + 0.145f) + 0.001f);
					if (func_89())
					{
						Var16.f_1 = ((uParam4->f_1 + 0.016f) - 0.006f);
					}
					else
					{
						Var16.f_1 = (uParam4->f_1 + 0.016f);
					}
					Var16.f_2 = (0.016f + 0.003f);
					Var16.f_3 = (0.032f + 0.004f);
					Var16.f_7 = 255;
					func_88(&Var16, 1);
					if (bParam26)
					{
						Var15.f_7 = 0;
					}
					sVar18 = "";
					iVar20 = 1;
					sVar21 = "";
					iVar23 = 1;
					switch (iParam21)
					{
						case 5:
							Var15.f_3 = (Var15.f_3 + -0.009f);
							Var15.f_2 = (Var15.f_2 + -0.002f);
							if (func_89())
							{
								Var15.f_1 = (Var15.f_1 + 0.0055f);
							}
							else
							{
								Var15.f_1 = (Var15.f_1 + 0.0025f);
							}
							sVar21 = "MPRPSymbol";
							sVar22 = "RP";
							break;
						
						case 2:
							sVar21 = "TimerBars";
							sVar22 = "Rockets";
							break;
						
						case 3:
							sVar21 = "MpSpecialRace";
							sVar22 = "HOMING_ROCKET";
							break;
						
						case 1:
							sVar21 = "TimerBars";
							sVar22 = "Spikes";
							break;
						
						case 4:
							sVar21 = "TimerBars";
							sVar22 = "Boost";
							break;
						
						case 6:
							sVar21 = "CrossTheLine";
							sVar22 = "Timer_LargeTick_32";
							iVar23 = 18;
							break;
						
						case 7:
							sVar21 = "CrossTheLine";
							sVar22 = "Timer_LargeCross_32";
							iVar23 = 6;
							break;
						
						case 8:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Beast";
							iVar23 = 118;
							break;
						
						case 9:
							sVar21 = "MPSpecialRace";
							sVar22 = "MACHINE_GUN";
							break;
						
						case 10:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Random";
							iVar23 = 118;
							break;
						
						case 11:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Slow_Time";
							break;
						
						case 12:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Swap";
							iVar23 = 118;
							break;
						
						case 13:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Testosterone";
							iVar23 = 118;
							break;
						
						case 14:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Thermal";
							iVar23 = 118;
							break;
						
						case 15:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Weed";
							iVar23 = 118;
							break;
						
						case 16:
							sVar21 = "TimerBar_Icons";
							sVar22 = "Pickup_Hidden";
							iVar23 = 118;
							break;
						
						case 17:
						case 18:
							if (iParam27 != func_61())
							{
								iVar17 = func_81(iParam27);
								if (iVar17 != 0)
								{
									sVar21 = unk_0x5283D58F79627134(iVar17);
									sVar22 = unk_0x5283D58F79627134(iVar17);
								}
							}
							if (func_89())
							{
								Var15.f_1 = ((uParam4->f_1 + 0.016f) - 0.0005f);
							}
							else
							{
								Var15.f_1 = (uParam4->f_1 + 0.0185f);
							}
							Var15.f_2 = (0.016f + 0.004f);
							Var15.f_3 = (0.032f + 0.002f);
							if (iParam21 == 18)
							{
								if (func_89())
								{
									Var16.f_1 = (uParam4->f_1 + 0.016f);
								}
								else
								{
									Var16.f_1 = (uParam4->f_1 + 0.019f);
								}
								Var16.f_2 = (0.016f + 0.004f);
								Var16.f_3 = (0.032f + 0.002f);
								sVar18 = "timerbar_sr";
								sVar19 = "timer_cross";
								iVar20 = iParam17;
								Var15.f_7 = 127;
							}
							break;
					}
					if (!unk_0xEA6BC48857E0AC4C(sVar21))
					{
						unk_0x0D3BE1DE0262A012(sVar21, false);
						if (unk_0x27117E2CDD4D67C3(sVar21))
						{
							func_88(&Var15, iVar23);
							func_69(sVar21, sVar22, &Var15, 1, 0, 4, 0);
						}
					}
					if (iParam21 == 18)
					{
						if (!unk_0xEA6BC48857E0AC4C(sVar18))
						{
							unk_0x0D3BE1DE0262A012(sVar18, false);
							if (unk_0x27117E2CDD4D67C3(sVar18))
							{
								func_88(&Var16, iVar20);
								func_69(sVar18, sVar19, &Var16, 1, 0, 4, 0);
							}
						}
					}
				}
				func_68(uParam2, 0);
				iVar5 = func_77();
				unk_0xD9ACBBA59FD5A09E(iVar5);
				if ((iParam21 == 0 || iParam21 == 5) || iParam21 == 9)
				{
					if (bParam20)
					{
						func_58(uParam4, uParam2, "???", "", 1, 2);
					}
					else if (iParam21 == 5)
					{
						if (iParam13 == 0)
						{
							func_55(uParam4, uParam2, "HUD_KSMULTI", iParam5, 2);
						}
						else
						{
							func_53(uParam4, uParam2, "HUD_KSMULTI", fParam14, Global_2591F5, 2);
						}
					}
					else if (func_57(sParam12))
					{
						if (iParam19 == 0)
						{
							if (iParam13 == 0)
							{
								func_55(uParam4, uParam2, "NUMBER", iParam5, 2);
							}
							else
							{
								func_53(uParam4, uParam2, "NUMBER", fParam14, Global_2591F5, 2);
							}
						}
						else
						{
							func_51(uParam4, uParam2, "TIMER_DASHES", iParam5, iParam19, 2, 0);
						}
					}
					else if (unk_0x7F8A39872A07D2CE("HUD_CASH", sParam12) || unk_0x7F8A39872A07D2CE("HUD_CASH_S", sParam12))
					{
						sParam12 = "HUD_CASH_S";
						*uParam2 = 5;
						func_68(uParam2, 0);
						func_46(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (unk_0x7F8A39872A07D2CE("HUD_CASH_NEG", sParam12) || unk_0x7F8A39872A07D2CE("HUD_CASH_NEG_S", sParam12))
					{
						*uParam2 = 5;
						func_68(uParam2, 0);
						sParam12 = "HUD_CASH_NEG_S";
						func_46(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else if (iParam13 == 0)
					{
						func_55(uParam4, uParam2, sParam12, iParam5, 2);
					}
					else
					{
						func_53(uParam4, uParam2, sParam12, fParam14, Global_2591F5, 2);
					}
				}
			}
			func_45();
		}
	}
}

void func_166(var uParam0)
{
	uParam0->f_9 = (((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) - 0.002f) - 0.001f);
}

void func_167(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
	float fVar9;
	
	iVar8 = func_169(&uParam4, 0, 0);
	if ((iParam3 / 2) > iVar8)
	{
		fVar9 = (SYSTEM::TO_FLOAT((iVar8 / 2)) / SYSTEM::TO_FLOAT((iParam3 / 2)));
		unk_0xA402F6C87C08815C(iParam1, &iVar0, &iVar1, &iVar2, &iVar3);
		unk_0xA402F6C87C08815C(iParam2, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	else
	{
		fVar9 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iParam3));
		unk_0xA402F6C87C08815C(iParam2, &iVar0, &iVar1, &iVar2, &iVar3);
		unk_0xA402F6C87C08815C(iParam1, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	uParam0->f_3 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(iVar4), fVar9));
	uParam0->f_4 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iVar5), fVar9));
	uParam0->f_5 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar6), fVar9));
	uParam0->f_6 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar7), fVar9));
}

float func_168(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_169(var uParam0, bool bParam1, bool bParam2)
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

void func_170(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 == 1)
	{
		if (bParam7)
		{
			func_58(uParam1, uParam0, sParam2, "", iParam3, 2);
		}
		else
		{
			func_58(uParam1, uParam0, sParam2, "", iParam4, 2);
		}
	}
	else if (iParam5 == 4294967295)
	{
		func_120(uParam1, uParam0, sParam2, 0, 1);
	}
	else
	{
		uParam1->f_1 = (uParam1->f_1 + (-0.003f - 0.001f));
		func_55(uParam1, uParam0, sParam2, iParam5, 2);
	}
}

void func_171(int iParam0)
{
	func_15(&(Global_150976.f_224[iParam0 /*2*/]));
	func_15(&(Global_150976.f_239[iParam0 /*2*/]));
}

void func_172(int iParam0)
{
	func_15(&(Global_150976.f_56[iParam0 /*2*/]));
	func_15(&(Global_150976.f_6B[iParam0 /*2*/]));
}

void func_173(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = (0.416f + 0.089f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 23;
}

void func_174(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, var uParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21, int iParam22, int iParam23, int iParam24, bool bParam25, float fParam26, float fParam27, bool bParam28, int iParam29, float fParam30, bool bParam31, int iParam32, int iParam33)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_27(0, iParam0))
	{
		uVar2 = 4;
		func_175(iParam0, &uVar0, &uVar1, &uVar2, iParam1, iParam2, 1, sParam3, iParam4, iParam9, bParam8, iParam5, fParam6, fParam7, uParam10, iParam11, iParam12, bParam13, iParam14, bParam15, iParam16, iParam17, iParam18, bParam19, iParam20, bParam21, iParam22, iParam23, iParam24, bParam25, fParam26, fParam27, bParam28, iParam29, fParam30, bParam31, iParam32, iParam33);
	}
}

void func_175(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, float fParam12, float fParam13, var uParam14, int iParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, int iParam20, int iParam21, int iParam22, bool bParam23, int iParam24, bool bParam25, int iParam26, int iParam27, int iParam28, bool bParam29, float fParam30, float fParam31, bool bParam32, int iParam33, float fParam34, bool bParam35, int iParam36, int iParam37)
{
	struct<9> Var0;
	bool bVar1;
	int iVar2;
	struct<9> Var3;
	float fVar4;
	float fVar5;
	struct<8> Var6;
	
	Global_150976++;
	if (func_107())
	{
		if (iParam15 == 2)
		{
		}
		func_98(0, iParam0);
		if (func_89())
		{
			if (bParam17)
			{
				func_182(uParam1, 0);
			}
			else
			{
				func_142(uParam1, 0);
			}
		}
		else if (bParam19)
		{
			func_105(uParam1, 0);
		}
		else if (bParam10)
		{
			func_141(uParam1, 3);
		}
		else if (bParam17)
		{
			func_181(uParam1, 0);
		}
		else
		{
			func_105(uParam1, 0);
		}
		if (Global_150976 == 1)
		{
			func_97(iParam6);
		}
		func_180(uParam2, uParam3, &Var0, iParam6, fParam12, fParam13, uParam1, bParam17);
		func_100(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_133())));
		if (iParam11 == 0)
		{
			func_132(iParam0);
		}
		if (iParam16 == 0)
		{
			func_131(iParam0);
		}
		if (func_64(iParam11, &(Global_150976.f_128[iParam0 /*2*/]), &(Global_150976.f_13D[iParam0 /*2*/])))
		{
			bVar1 = true;
		}
		else
		{
			bVar1 = false;
		}
		unk_0x0D3BE1DE0262A012("TimerBars", false);
		if (unk_0x27117E2CDD4D67C3("TimerBars"))
		{
			iVar2 = func_77();
			unk_0xD9ACBBA59FD5A09E(iVar2);
			if (!func_139(fParam12, fParam13))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (bParam17)
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_89())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_150976.f_18CE = (Global_150976.f_18CE + Var0.f_3);
				if (iParam16 > 0)
				{
					Var3 = { Var0 };
					if (func_244(&(Global_150976.f_35F[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_130(Global_150976.f_35F[iParam0 /*2*/], 1250, 0))
						{
							Global_150976.f_374[iParam0] = (Global_150976.f_374[iParam0] - 17);
						}
						Var3.f_7 = Global_150976.f_374[iParam0];
						func_88(&Var3, iParam8);
						func_69("TimerBars", "ALL_WHITE_bg", &Var3, 1, 0, iVar2, 0);
					}
				}
				else
				{
					Global_150976.f_374[iParam0] = 255;
					func_129(&(Global_150976.f_35F[iParam0 /*2*/]), 0, 0);
				}
				func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar2, 0);
			}
			func_123(&Var0, iParam21);
			if (func_89())
			{
				if (bParam17)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.01f);
				}
				else if (bParam10)
				{
					if (unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (bParam17 == 0)
				{
					if (unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 12)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.009f);
					}
					else
					{
						uParam2->f_1 = (uParam2->f_1 + -0.003f);
					}
				}
				else if (unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.012f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.008f);
				}
			}
			else if (bParam17)
			{
				uParam2->f_1 = (uParam2->f_1 + ((-0.01f + 0.0022f) + 0.001f));
			}
			else if (bParam10)
			{
				uParam2->f_1 = (uParam2->f_1 + (-0.005f + 0.001f));
				uParam2->f_1 = (uParam2->f_1 + -0.002f);
			}
			iVar2 = func_77();
			unk_0xD9ACBBA59FD5A09E(iVar2);
			if (!func_139(fParam12, fParam13))
			{
				if (bParam19)
				{
					func_122(uParam1, iParam8);
					func_68(uParam1, 0);
					func_58(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else if (bParam10 == 1)
				{
					func_122(uParam1, iParam8);
					func_68(uParam1, 0);
					func_58(uParam2, uParam1, sParam7, "", iParam22, 2);
				}
				else
				{
					func_122(uParam1, iParam22);
					func_68(uParam1, 0);
					if (bParam29)
					{
						func_179(uParam2, uParam1, sParam7, 0, 1, iParam4, iParam5);
					}
					else if (iParam9 == 4294967295)
					{
						func_120(uParam2, uParam1, sParam7, 0, 1);
					}
					else
					{
						func_55(uParam2, uParam1, sParam7, iParam9, 2);
					}
				}
			}
			if (bParam23)
			{
				if (!func_139(fParam12, fParam13))
				{
					fVar4 = (func_138() + func_95(iParam6));
					fVar5 = func_137();
				}
				else
				{
					fVar4 = fParam13;
					fVar5 = fParam12;
				}
				Var6.f_1 = (fVar4 + 0.0486f);
				Var6 = (fVar5 - 0.0505f);
				Var6.f_2 = 0.18f;
				Var6.f_3 = 0.01f;
				Var6.f_4 = 255;
				Var6.f_5 = 255;
				Var6.f_6 = 255;
				Var6.f_7 = 255;
				func_88(&Var6, iParam24);
				func_69("TimerBars", "TPBar", &Var6, 0, 0, iVar2, 0);
			}
			iVar2 = func_77();
			unk_0xD9ACBBA59FD5A09E(iVar2);
			if (bVar1)
			{
				if (bParam17)
				{
					func_178(iParam4, iParam5, uParam3, iParam8, uParam14, iVar2, iParam20, &(Global_150976.f_320[iParam0 /*2*/]), &(Global_150976.f_335[iParam0 /*2*/]), fParam30, fParam31, iParam27, iParam28, bParam32, iParam33, fParam34, bParam35, iParam36, iParam37);
				}
				else
				{
					func_176(iParam4, iParam5, uParam3, iParam8, uParam14, iVar2, &(Global_150976.f_320[iParam0 /*2*/]), &(Global_150976.f_335[iParam0 /*2*/]), iParam18, iParam20, bParam25, iParam26, fParam30, fParam31, iParam27, iParam28, bParam32, iParam33, fParam34, bParam35, iParam36, iParam37);
				}
			}
			func_45();
		}
	}
}

void func_176(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, var uParam7, int iParam8, int iParam9, bool bParam10, int iParam11, float fParam12, float fParam13, int iParam14, int iParam15, bool bParam16, int iParam17, float fParam18, bool bParam19, int iParam20, int iParam21)
{
	struct<9> Var0[2];
	float fVar1;
	struct<9> Var2;
	char* sVar3;
	
	Var0[0 /*9*/].f_1 = 0f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.004f;
	Var0[1 /*9*/] = 0f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.004f;
	unk_0x0D3BE1DE0262A012("TimerBars", false);
	if (iParam9 != 0)
	{
		unk_0x0D3BE1DE0262A012("timerbar_lines", false);
	}
	if (unk_0x27117E2CDD4D67C3("TimerBars"))
	{
		func_115(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_115(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_88(uParam2[1 /*9*/], iParam3);
		if (bParam10)
		{
			func_88(uParam2[3 /*9*/], 3);
		}
		else
		{
			func_88(uParam2[3 /*9*/], iParam3);
		}
		if (iParam11 != 0 && iParam0 < iParam11)
		{
			func_88(uParam2[1 /*9*/], 6);
		}
		if (iParam15 > 0)
		{
			if (!func_66(uParam6))
			{
				func_65(uParam6, 0, 0);
			}
			else if (func_244(uParam6, iParam15, 0))
			{
				func_129(uParam6, 0, 0);
			}
			func_177(uParam2[1 /*9*/], iParam3, iParam14, iParam15, *uParam6);
		}
		fVar1 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		if (fParam12 != -1f && fParam13 != -1f)
		{
			fVar1 = ((fParam12 / fParam13) * 100f);
		}
		else if (fParam12 != -1f && fParam13 == -1f)
		{
			fVar1 = ((fParam12 / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		}
		else if (fParam12 == -1f && fParam13 != -1f)
		{
			fVar1 = ((SYSTEM::TO_FLOAT(iParam0) / fParam13) * 100f);
		}
		unk_0xD9ACBBA59FD5A09E(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		if (bParam10)
		{
			func_88(uParam2[3 /*9*/], 3);
		}
		else
		{
			func_88(uParam2[3 /*9*/], iParam3);
		}
		(uParam2[3 /*9*/])->f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_117(*(uParam2[0 /*9*/]), fVar1, uParam2[1 /*9*/], 1, 1, uParam4);
		unk_0xD9ACBBA59FD5A09E(iParam5);
		func_69("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (bParam16)
		{
			Var2 = { *(uParam2[1 /*9*/]) };
			func_117(*(uParam2[0 /*9*/]), fParam18, &Var2, 1, 1, uParam4);
			func_88(&Var2, iParam17);
			Var2.f_7 = 255;
			if (iParam21 > 0)
			{
				if (!func_66(uParam7))
				{
					func_65(uParam7, 0, 0);
				}
				else if (func_244(uParam7, iParam21, 0))
				{
					func_129(uParam7, 0, 0);
				}
				func_177(&Var2, iParam17, iParam20, iParam21, *uParam7);
			}
			if (bParam19)
			{
				if (fVar1 <= fParam18)
				{
					Var2.f_7 = 100;
				}
			}
			unk_0xD9ACBBA59FD5A09E(iParam5);
			func_69("TimerBars", "DamageBarFill_128", &Var2, 0, 0, iParam5, 0);
		}
		if (iParam9 != 0)
		{
			unk_0x0D3BE1DE0262A012("timerbar_lines", false);
			if (unk_0x27117E2CDD4D67C3("timerbar_lines"))
			{
				if (iParam9 != 10)
				{
					sVar3 = "LineMarker90_128";
					switch (iParam9)
					{
						case 1:
							sVar3 = "LineMarker10_128";
							break;
						
						case 2:
							sVar3 = "LineMarker20_128";
							break;
						
						case 3:
							sVar3 = "LineMarker30_128";
							break;
						
						case 4:
							sVar3 = "LineMarker40_128";
							break;
						
						case 5:
							sVar3 = "LineMarker50_128";
							break;
						
						case 6:
							sVar3 = "LineMarker60_128";
							break;
						
						case 7:
							sVar3 = "LineMarker70_128";
							break;
						
						case 8:
							sVar3 = "LineMarker80_128";
							break;
						
						case 9:
							sVar3 = "LineMarker90_128";
							break;
					}
					(uParam2[3 /*9*/])->f_7 = 255;
					func_88(uParam2[3 /*9*/], 2);
					func_69("timerbar_lines", sVar3, uParam2[3 /*9*/], 0, 0, iParam5, 0);
				}
				else
				{
					(uParam2[3 /*9*/])->f_7 = 255;
					func_88(uParam2[3 /*9*/], 2);
					func_69("timerbar_lines", "LineMarker20_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_69("timerbar_lines", "LineMarker40_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_69("timerbar_lines", "LineMarker60_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
					func_69("timerbar_lines", "LineMarker80_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
				}
			}
		}
		unk_0xD9ACBBA59FD5A09E(iParam5);
		if (iParam8 > 0 && fVar1 >= IntToFloat(iParam8))
		{
			func_88(uParam2[1 /*9*/], 6);
			func_117(*(uParam2[0 /*9*/]), SYSTEM::TO_FLOAT(iParam8), uParam2[1 /*9*/], 1, 1, uParam4);
			unk_0xD9ACBBA59FD5A09E(iParam5);
			func_69("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
			unk_0xD9ACBBA59FD5A09E(iParam5);
		}
		unk_0xD9ACBBA59FD5A09E(iParam5);
	}
}

void func_177(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
	float fVar9;
	
	iVar8 = func_169(&uParam4, 0, 0);
	if ((iParam3 / 2) > iVar8)
	{
		fVar9 = (SYSTEM::TO_FLOAT((iVar8 / 2)) / SYSTEM::TO_FLOAT((iParam3 / 2)));
		unk_0xA402F6C87C08815C(iParam1, &iVar0, &iVar1, &iVar2, &iVar3);
		unk_0xA402F6C87C08815C(iParam2, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	else
	{
		fVar9 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iParam3));
		unk_0xA402F6C87C08815C(iParam2, &iVar0, &iVar1, &iVar2, &iVar3);
		unk_0xA402F6C87C08815C(iParam1, &iVar4, &iVar5, &iVar6, &iVar7);
	}
	uParam0->f_4 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(iVar4), fVar9));
	uParam0->f_5 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(iVar5), fVar9));
	uParam0->f_6 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar6), fVar9));
	uParam0->f_7 = SYSTEM::FLOOR(func_168(SYSTEM::TO_FLOAT(iVar3), SYSTEM::TO_FLOAT(iVar7), fVar9));
}

void func_178(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6, var uParam7, var uParam8, float fParam9, float fParam10, int iParam11, int iParam12, bool bParam13, int iParam14, float fParam15, bool bParam16, int iParam17, int iParam18)
{
	struct<9> Var0[2];
	float fVar1;
	struct<9> Var2;
	char* sVar3;
	
	Var0[0 /*9*/].f_1 = -0.004f;
	Var0[0 /*9*/].f_2 = 0.007f;
	Var0[0 /*9*/].f_3 = 0.016f;
	Var0[1 /*9*/].f_2 = 0.007f;
	Var0[1 /*9*/].f_3 = 0.016f;
	unk_0x0D3BE1DE0262A012("TimerBars", false);
	if (iParam6 != 0)
	{
		unk_0x0D3BE1DE0262A012("timerbar_lines", false);
	}
	if (unk_0x27117E2CDD4D67C3("TimerBars"))
	{
		func_115(uParam2[0 /*9*/], &(Var0[0 /*9*/]));
		func_115(uParam2[1 /*9*/], &(Var0[1 /*9*/]));
		*(uParam2[3 /*9*/]) = { *(uParam2[0 /*9*/]) };
		func_88(uParam2[1 /*9*/], iParam3);
		func_88(uParam2[3 /*9*/], iParam3);
		if (iParam12 > 0)
		{
			if (!func_66(uParam7))
			{
				func_65(uParam7, 0, 0);
			}
			else if (func_244(uParam7, iParam12, 0))
			{
				func_129(uParam7, 0, 0);
			}
			func_177(uParam2[1 /*9*/], iParam3, iParam11, iParam12, *uParam7);
		}
		fVar1 = ((SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		if (fParam9 != -1f && fParam10 != -1f)
		{
			fVar1 = ((fParam9 / fParam10) * 100f);
		}
		else if (fParam9 != -1f && fParam10 == -1f)
		{
			fVar1 = ((fParam9 / SYSTEM::TO_FLOAT(iParam1)) * 100f);
		}
		else if (fParam9 == -1f && fParam10 != -1f)
		{
			fVar1 = ((SYSTEM::TO_FLOAT(iParam0) / fParam10) * 100f);
		}
		unk_0xD9ACBBA59FD5A09E(iParam5);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		func_88(uParam2[3 /*9*/], iParam3);
		(uParam2[3 /*9*/])->f_7 = 51;
		func_69("TimerBars", "DamageBarFill_128", uParam2[3 /*9*/], 0, 0, iParam5, 0);
		(uParam2[3 /*9*/])->f_7 = 255;
		func_117(*(uParam2[0 /*9*/]), fVar1, uParam2[1 /*9*/], 1, 1, uParam4);
		unk_0xD9ACBBA59FD5A09E(iParam5);
		func_69("TimerBars", "DamageBarFill_128", uParam2[1 /*9*/], 0, 0, iParam5, 0);
		if (bParam13)
		{
			Var2 = { *(uParam2[1 /*9*/]) };
			func_117(*(uParam2[0 /*9*/]), fParam15, &Var2, 1, 1, uParam4);
			func_88(&Var2, iParam14);
			Var2.f_7 = 255;
			if (iParam18 > 0)
			{
				if (!func_66(uParam8))
				{
					func_65(uParam8, 0, 0);
				}
				else if (func_244(uParam8, iParam18, 0))
				{
					func_129(uParam8, 0, 0);
				}
				func_177(&Var2, iParam14, iParam17, iParam18, *uParam8);
			}
			if (bParam16)
			{
				if (fVar1 <= fParam15)
				{
					Var2.f_7 = 100;
				}
			}
			unk_0xD9ACBBA59FD5A09E(iParam5);
			func_69("TimerBars", "DamageBarFill_128", &Var2, 0, 0, iParam5, 0);
		}
		if (iParam6 != 0)
		{
			unk_0x0D3BE1DE0262A012("timerbar_lines", false);
			if (unk_0x27117E2CDD4D67C3("timerbar_lines"))
			{
				sVar3 = "LineMarker90_128";
				switch (iParam6)
				{
					case 1:
						sVar3 = "LineMarker10_128";
						break;
					
					case 2:
						sVar3 = "LineMarker20_128";
						break;
					
					case 3:
						sVar3 = "LineMarker30_128";
						break;
					
					case 4:
						sVar3 = "LineMarker40_128";
						break;
					
					case 5:
						sVar3 = "LineMarker50_128";
						break;
					
					case 6:
						sVar3 = "LineMarker60_128";
						break;
					
					case 7:
						sVar3 = "LineMarker70_128";
						break;
					
					case 8:
						sVar3 = "LineMarker80_128";
						break;
					
					case 9:
						sVar3 = "LineMarker90_128";
						break;
				}
				(uParam2[1 /*9*/])->f_7 = 255;
				func_88(uParam2[1 /*9*/], 2);
				func_69("timerbar_lines", sVar3, uParam2[1 /*9*/], 0, 0, iParam5, 0);
			}
		}
		unk_0xD9ACBBA59FD5A09E(iParam5);
		unk_0xD9ACBBA59FD5A09E(iParam5);
	}
}

void func_179(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	sVar0 = sParam2;
	if (!func_57(sVar0))
	{
		if (func_49())
		{
			func_68(uParam1, 0);
			unk_0xFF72A133B792782E(iParam4);
			unk_0xAAE406A7DA443B93(iParam3);
			func_52(func_48(*uParam0), func_47(uParam0->f_1), sVar0, iParam5, iParam6);
		}
	}
}

void func_180(var uParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7)
{
	float fVar0;
	
	fVar0 = func_140(bParam7, 0);
	*uParam0 = 0.795f;
	uParam0->f_1 = func_95(iParam3);
	uParam0->f_1 = (uParam0->f_1 + func_94(uParam6));
	func_136(uParam1, iParam3, fParam4, fParam5);
	if (!func_139(fParam4, fParam5))
	{
		func_92(iParam3, -fVar0);
	}
	func_106(uParam2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_181(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) - 0.106f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 21;
}

void func_182(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.508f - 0.03f) + 0.086f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 20;
}

void func_183(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, int iParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (func_27(1, iParam0))
	{
		uVar2 = 11;
		func_184(iParam0, &uVar0, &uVar1, &uVar2, &uVar5, &uVar3, &uVar4, iParam1, iParam2, 1, sParam3, iParam4, iParam5, bParam6, iParam7, fParam8, fParam9, iParam10, iParam11, 1, iParam12, iParam13, iParam14, iParam15, iParam16, iParam17, iParam18, iParam19, iParam20, iParam21);
	}
}

void func_184(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, bool bParam13, int iParam14, float fParam15, float fParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29)
{
	struct<9> Var0;
	struct<2> Var1;
	vector3 vVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	struct<9> Var6;
	
	Global_150976++;
	if (func_107())
	{
		if (iParam17 == 2)
		{
		}
		func_98(1, iParam0);
		if (func_89())
		{
			func_142(uParam1, 0);
		}
		else if (bParam13)
		{
			func_141(uParam1, 3);
		}
		else
		{
			func_105(uParam1, 0);
		}
		func_105(&vVar2, 0);
		vVar2.z = (vVar2.z + (0.166f + 0.095f));
		if (Global_150976 == 1)
		{
			func_97(iParam9);
		}
		func_192(uParam5, 0, 0);
		func_99(uParam5);
		func_68(uParam5, 0);
		iVar4 = 0;
		if (iParam20 > 0)
		{
			iVar4 = 1;
		}
		func_190(iParam8, uParam2, uParam3, &Var0, uParam6, uParam5, uParam4, iParam9, fParam15, fParam16, uParam1, iVar4);
		Var1 = *uParam2;
		Var1.f_1 = uParam2->f_1;
		Var1.f_1 = (Var1.f_1 + (-0.006f - 0.007f));
		func_100(uParam1);
		uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_133())));
		func_189(&vVar2);
		if (iParam14 == 0)
		{
			func_188(iParam0);
		}
		if (iParam18 == 0)
		{
			func_187(iParam0);
		}
		unk_0x0D3BE1DE0262A012("TimerBars", false);
		if (unk_0x27117E2CDD4D67C3("TimerBars"))
		{
			iVar5 = func_77();
			unk_0xD9ACBBA59FD5A09E(iVar5);
			if (func_64(iParam14, &(Global_150976.f_FE[iParam0 /*2*/]), &(Global_150976.f_113[iParam0 /*2*/])))
			{
				bVar3 = true;
			}
			else
			{
				bVar3 = false;
			}
			if (!func_139(fParam15, fParam16))
			{
				Var0 = *uParam2;
				Var0.f_1 = uParam2->f_1;
				if (iParam8 < 9 && iParam20 == 0)
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.012f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.028f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				else
				{
					Var0 = (Var0 + 0.079f);
					Var0.f_1 = (Var0.f_1 + 0.008f);
					Var0.f_2 = (Var0.f_2 + 0.157f);
					Var0.f_3 = (Var0.f_3 + 0.036f);
					Var0.f_4 += 255;
					Var0.f_5 += 255;
					Var0.f_6 += 255;
					Var0.f_7 = 140;
				}
				if (func_89())
				{
					Var0 = (Var0 + -0.025f);
					Var0.f_2 = (Var0.f_2 + 0.05f);
				}
				Global_150976.f_18CE = (Global_150976.f_18CE + Var0.f_3);
				if ((iParam7 == iParam8 && iParam7 > 0) || iParam18 > 0)
				{
					Var6 = { Var0 };
					if (func_244(&(Global_150976.f_41F[iParam0 /*2*/]), 2000, 0) == 0)
					{
						if (func_130(Global_150976.f_41F[iParam0 /*2*/], 1250, 0))
						{
							Global_150976.f_434[iParam0] = (Global_150976.f_434[iParam0] - 17);
						}
						Var6.f_7 = Global_150976.f_434[iParam0];
						func_88(&Var6, iParam11);
						func_69("TimerBars", "ALL_WHITE_bg", &Var6, 1, 0, iVar5, 0);
					}
				}
				else
				{
					Global_150976.f_434[iParam0] = 255;
					func_129(&(Global_150976.f_41F[iParam0 /*2*/]), 0, 0);
				}
				func_69("TimerBars", "ALL_BLACK_bg", &Var0, 1, 0, iVar5, 0);
			}
			func_123(&Var0, iParam29);
			if (bParam13)
			{
				if (unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
					if (func_89() == 0)
					{
						uParam2->f_1 = (uParam2->f_1 + -0.002f);
					}
				}
			}
			else if (func_89())
			{
				if (unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 12)
				{
					uParam2->f_1 = (uParam2->f_1 + -0.009f);
				}
				else
				{
					uParam2->f_1 = (uParam2->f_1 + -0.003f);
				}
			}
			iVar5 = func_77();
			unk_0xD9ACBBA59FD5A09E(iVar5);
			if (!func_139(fParam15, fParam16))
			{
				func_68(uParam1, 0);
				if (bParam13 == 1)
				{
					func_58(uParam2, uParam1, sParam10, "", 1, 2);
				}
				else if (iParam12 == 4294967295)
				{
					func_120(uParam2, uParam1, sParam10, 0, 1);
				}
				else
				{
					func_55(uParam2, uParam1, sParam10, iParam12, 2);
				}
			}
			if (iParam20 > 0)
			{
				func_55(&Var1, &vVar2, "HUD_MULTSMAL", iParam20, 2);
			}
			if (bVar3)
			{
				func_185(iParam7, iParam8, uParam3, uParam5, uParam6, iParam11, iVar5, bParam19, iParam21, iParam22, iParam23, iParam24, iParam25, iParam26, iParam27, iParam28);
			}
			func_45();
		}
	}
}

void func_185(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	float fVar0;
	int iVar1;
	char* sVar2;
	
	if (iParam1 < 9)
	{
		fVar0 = -0.0094f;
		unk_0x0D3BE1DE0262A012("TimerBars", false);
		if (unk_0x27117E2CDD4D67C3("TimerBars"))
		{
			iVar1 = 0;
			while (iVar1 <= (iParam1 - 1))
			{
				(*uParam2)[iVar1 /*9*/] = ((*uParam2)[iVar1 /*9*/] + (fVar0 * IntToFloat(iVar1)));
				if ((iParam1 - iVar1) > iParam0)
				{
					func_88(uParam2[iVar1 /*9*/], iParam5);
					(uParam2[iVar1 /*9*/])->f_7 = 51;
					func_69("TimerBars", "Circle_checkpoints_Outline", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
				}
				else
				{
					func_88(uParam2[iVar1 /*9*/], iParam5);
					func_69("TimerBars", "Circle_checkpoints", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					if (func_155(iVar1, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15))
					{
						func_88(uParam2[iVar1 /*9*/], 2);
						func_69("Cross", "Circle_checkpoints_Cross", uParam2[iVar1 /*9*/], 0, 0, iParam6, 0);
					}
				}
				iVar1++;
			}
		}
	}
	else if (iParam5 == 1)
	{
		func_51(uParam4, uParam3, "TIMER_DASHES", iParam0, iParam1, 2, 0);
	}
	else
	{
		func_186(uParam3);
		if (bParam7)
		{
			unk_0x0D3BE1DE0262A012("TimerBars", false);
			if (unk_0x27117E2CDD4D67C3("TimerBars"))
			{
				(*uParam2)[0 /*9*/] = ((*uParam2)[0 /*9*/] + (0.058f - 0.06f));
				(uParam2[0 /*9*/])->f_1 = ((uParam2[0 /*9*/])->f_1 + -0.005f);
				(uParam2[0 /*9*/])->f_2 = ((uParam2[0 /*9*/])->f_2 + ((0.003f - 0.005f) + 0.002f));
				(uParam2[0 /*9*/])->f_3 = ((uParam2[0 /*9*/])->f_3 + (0.009f - 0.01f));
				func_88(uParam2[0 /*9*/], iParam5);
				func_69("TimerBars", "Circle_checkpoints_Big", uParam2[0 /*9*/], 0, 0, iParam6, 0);
			}
		}
		sVar2 = "TIMER_DASHES";
		if ((bParam7 == 1 && iParam0 > 99) && iParam1 > 99)
		{
			sVar2 = "TIMER_DASHES";
		}
		func_51(uParam4, uParam3, sVar2, iParam0, iParam1, 2, 0);
	}
}

void func_186(var uParam0)
{
	uParam0->f_9 = (((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f);
}

void func_187(int iParam0)
{
	func_15(&(Global_150976.f_2CC[iParam0 /*2*/]));
	func_15(&(Global_150976.f_2E1[iParam0 /*2*/]));
}

void func_188(int iParam0)
{
	func_15(&(Global_150976.f_FE[iParam0 /*2*/]));
	func_15(&(Global_150976.f_113[iParam0 /*2*/]));
	Global_150976.f_6A4.f_CD[iParam0] = 4294967295;
}

void func_189(var uParam0)
{
	float fVar0;
	
	fVar0 = (((((0.88f - 0.062f) + 0.026f) + 0.027f) + 0.037f) + 0.003f);
	uParam0->f_9 = fVar0;
}

void func_190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, float fParam8, float fParam9, var uParam10, int iParam11)
{
	float fVar0;
	
	fVar0 = func_96(uParam5);
	if (iParam0 < 9)
	{
		fVar0 = func_140(iParam11, 0);
	}
	*uParam1 = 0.795f;
	uParam1->f_1 = func_95(iParam7);
	uParam1->f_1 = (uParam1->f_1 + func_94(uParam10));
	*uParam4 = 0.795f;
	uParam4->f_1 = (uParam1->f_1 + func_93(uParam5));
	func_191(uParam2, iParam7, fParam8, fParam9);
	func_161(uParam6);
	if (!func_139(fParam8, fParam9))
	{
		func_92(iParam7, -fVar0);
	}
	func_106(uParam3, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
}

void func_191(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	
	if (!func_139(fParam2, fParam3))
	{
		fVar0 = (func_138() + func_95(iParam1));
		fVar1 = func_163();
	}
	else
	{
		fVar0 = fParam3;
		fVar1 = fParam2;
	}
	(*uParam0)[0 /*9*/] = fVar1;
	(uParam0[0 /*9*/])->f_1 = fVar0;
	(uParam0[0 /*9*/])->f_2 = 0.012f;
	(uParam0[0 /*9*/])->f_3 = 0.023f;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_6 = 0;
	(uParam0[0 /*9*/])->f_7 = 250;
	(*uParam0)[1 /*9*/] = fVar1;
	(uParam0[1 /*9*/])->f_1 = fVar0;
	(uParam0[1 /*9*/])->f_2 = 0.012f;
	(uParam0[1 /*9*/])->f_3 = 0.023f;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_6 = 0;
	(uParam0[1 /*9*/])->f_7 = 250;
	(*uParam0)[2 /*9*/] = fVar1;
	(uParam0[2 /*9*/])->f_1 = fVar0;
	(uParam0[2 /*9*/])->f_2 = 0.012f;
	(uParam0[2 /*9*/])->f_3 = 0.023f;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_6 = 0;
	(uParam0[2 /*9*/])->f_7 = 250;
	(*uParam0)[3 /*9*/] = fVar1;
	(uParam0[3 /*9*/])->f_1 = fVar0;
	(uParam0[3 /*9*/])->f_2 = 0.012f;
	(uParam0[3 /*9*/])->f_3 = 0.023f;
	(uParam0[3 /*9*/])->f_4 = 0;
	(uParam0[3 /*9*/])->f_5 = 0;
	(uParam0[3 /*9*/])->f_6 = 0;
	(uParam0[3 /*9*/])->f_7 = 250;
	(*uParam0)[4 /*9*/] = fVar1;
	(uParam0[4 /*9*/])->f_1 = fVar0;
	(uParam0[4 /*9*/])->f_2 = 0.012f;
	(uParam0[4 /*9*/])->f_3 = 0.023f;
	(uParam0[4 /*9*/])->f_4 = 0;
	(uParam0[4 /*9*/])->f_5 = 0;
	(uParam0[4 /*9*/])->f_6 = 0;
	(uParam0[4 /*9*/])->f_7 = 250;
	(*uParam0)[5 /*9*/] = fVar1;
	(uParam0[5 /*9*/])->f_1 = fVar0;
	(uParam0[5 /*9*/])->f_2 = 0.012f;
	(uParam0[5 /*9*/])->f_3 = 0.023f;
	(uParam0[5 /*9*/])->f_4 = 0;
	(uParam0[5 /*9*/])->f_5 = 0;
	(uParam0[5 /*9*/])->f_6 = 0;
	(uParam0[5 /*9*/])->f_7 = 250;
	(*uParam0)[6 /*9*/] = fVar1;
	(uParam0[6 /*9*/])->f_1 = fVar0;
	(uParam0[6 /*9*/])->f_2 = 0.012f;
	(uParam0[6 /*9*/])->f_3 = 0.023f;
	(uParam0[6 /*9*/])->f_4 = 0;
	(uParam0[6 /*9*/])->f_5 = 0;
	(uParam0[6 /*9*/])->f_6 = 0;
	(uParam0[6 /*9*/])->f_7 = 250;
	(*uParam0)[7 /*9*/] = fVar1;
	(uParam0[7 /*9*/])->f_1 = fVar0;
	(uParam0[7 /*9*/])->f_2 = 0.012f;
	(uParam0[7 /*9*/])->f_3 = 0.023f;
	(uParam0[7 /*9*/])->f_4 = 0;
	(uParam0[7 /*9*/])->f_5 = 0;
	(uParam0[7 /*9*/])->f_6 = 0;
	(uParam0[7 /*9*/])->f_7 = 250;
	(*uParam0)[8 /*9*/] = fVar1;
	(uParam0[8 /*9*/])->f_1 = fVar0;
	(uParam0[8 /*9*/])->f_2 = 0.012f;
	(uParam0[8 /*9*/])->f_3 = 0.023f;
	(uParam0[8 /*9*/])->f_4 = 0;
	(uParam0[8 /*9*/])->f_5 = 0;
	(uParam0[8 /*9*/])->f_6 = 0;
	(uParam0[8 /*9*/])->f_7 = 250;
	(*uParam0)[9 /*9*/] = fVar1;
	(uParam0[9 /*9*/])->f_1 = fVar0;
	(uParam0[9 /*9*/])->f_2 = 0.012f;
	(uParam0[9 /*9*/])->f_3 = 0.023f;
	(uParam0[9 /*9*/])->f_4 = 0;
	(uParam0[9 /*9*/])->f_5 = 0;
	(uParam0[9 /*9*/])->f_6 = 0;
	(uParam0[9 /*9*/])->f_7 = 250;
}

void func_192(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 9;
}

void func_193(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(5, iParam0))
	{
		func_165(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam10, 0, iParam2, 0, 0, 0, 0, iParam11, 255, 0, 0, 0, 0, 1, 0, 0, 4294967295);
	}
}

void func_194(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, int iParam14, bool bParam15)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(4, iParam0))
	{
		func_165(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, sParam3, iParam4, iParam5, iParam6, bParam7, "", 0, 0f, iParam8, iParam9, iParam12, bParam10, iParam2, 0, 0, 0, bParam11, iParam13, iParam14, 0, 0, bParam15, 0, 1, 0, 0, 4294967295);
	}
}

void func_195(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, int iParam15)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_27(3, iParam0))
	{
		func_165(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, iParam1, 1, sParam2, iParam3, iParam4, iParam5, bParam6, sParam7, 0, 0f, iParam10, iParam11, iParam8, 0, 0, bParam9, 0, 0, 0, iParam12, 255, 0, 0, 0, 0, 1, bParam13, iParam14, iParam15);
	}
}

void func_196(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, int iParam16, bool bParam17)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (func_27(7, iParam0))
	{
		func_197(iParam0, &uVar0, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5, iParam1, 1, iParam3, iParam4, sParam2, iParam6, iParam5, iParam7, iParam8, bParam9, iParam10, iParam11, bParam12, iParam13, bParam14, iParam15, iParam16, bParam17);
	}
}

void func_197(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, int iParam18, bool bParam19, int iParam20, bool bParam21, int iParam22, int iParam23, bool bParam24)
{
	var uVar0;
	var uVar1;
	struct<9> Var2;
	bool bVar3;
	int iVar4;
	struct<8> Var5;
	struct<9> Var6;
	
	Global_150976++;
	if (iParam17 == 2)
	{
	}
	func_106(&Var2, 0f, 0f, 0f, 0f, 0, 0, 0, 255, 0);
	func_98(7, iParam0);
	if (bParam21)
	{
		func_105(uParam1, 0);
	}
	else if (bParam16)
	{
		func_141(uParam1, 3);
	}
	else if (func_89())
	{
		func_173(uParam1, 0);
	}
	else
	{
		func_105(uParam1, 0);
	}
	func_211(&uVar0, 0);
	switch (iParam13)
	{
		case 1:
		case 0:
		case 5:
			if (bParam19)
			{
				func_210(uParam3, 0);
				func_192(uParam2, 0, 0);
			}
			else
			{
				func_210(uParam3, 0);
				func_192(uParam2, 0, 5);
			}
			func_99(uParam2);
			func_99(uParam3);
			break;
		
		case 2:
			func_192(uParam2, 0, 0);
			func_99(&uVar0);
			func_99(uParam3);
			func_209(uParam2);
			break;
		
		case 3:
			func_192(uParam2, 0, 0);
			func_99(&uVar0);
			func_99(uParam3);
			func_209(uParam2);
			break;
		
		case 4:
			func_192(uParam3, 0, 0);
			if (bParam19)
			{
				func_192(uParam2, 0, 0);
			}
			else
			{
				func_192(uParam2, 0, 5);
			}
			func_99(uParam2);
			func_99(uParam3);
			break;
	}
	func_100(uParam1);
	if (Global_150976.f_46A == 0 && Global_150976.f_46B == 0)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = (uParam1->f_9 + -0.016f);
			if (func_89())
			{
				uParam1->f_9 = (uParam1->f_9 + -0.008f);
			}
		}
	}
	else if (Global_150976.f_46A == 0 && Global_150976.f_46B == 1)
	{
		if (iParam13 == 1)
		{
			uParam1->f_9 = (uParam1->f_9 + 0f);
			if (func_89())
			{
				uParam1->f_9 = (uParam1->f_9 + -0.009f);
			}
		}
	}
	if (Global_150976 == 1)
	{
		func_97(iParam8);
	}
	func_208(uParam2, uParam4, uParam5, uParam6, iParam8, uParam1, &uVar0, &uVar1);
	uParam1->f_9 = (uParam1->f_9 + (0.03f * (1f - func_133())));
	func_90(uParam2, iParam12);
	if (iParam14 == 0)
	{
		func_207(iParam0);
	}
	if (iParam18 == 0)
	{
		func_206(iParam0);
	}
	unk_0x0D3BE1DE0262A012("TimerBars", false);
	if (unk_0x27117E2CDD4D67C3("TimerBars"))
	{
		iVar4 = func_77();
		unk_0xD9ACBBA59FD5A09E(iVar4);
		if (func_64(iParam14, &(Global_150976.f_AA[iParam0 /*2*/]), &(Global_150976.f_BF[iParam0 /*2*/])))
		{
			bVar3 = true;
		}
		else
		{
			bVar3 = false;
		}
		Var2 = *uParam4;
		Var2.f_1 = uParam4->f_1;
		if (Global_150976.f_463 == 1)
		{
			Var2 = (Var2 + -0.113f);
		}
		switch (iParam13)
		{
			case 1:
			case 0:
			case 5:
				Var2 = (Var2 + 0.079f);
				Var2.f_1 = (Var2.f_1 + 0.008f);
				Var2.f_2 = (Var2.f_2 + 0.157f);
				Var2.f_3 = (Var2.f_3 + 0.036f);
				Var2.f_4 += 255;
				Var2.f_5 += 255;
				Var2.f_6 += 255;
				Var2.f_7 = 140;
				break;
			
			case 2:
				Var2 = (Var2 + 0.079f);
				Var2.f_1 = (Var2.f_1 + 0.008f);
				Var2.f_2 = (Var2.f_2 + 0.157f);
				Var2.f_3 = (Var2.f_3 + 0.036f);
				Var2.f_4 += 255;
				Var2.f_5 += 255;
				Var2.f_6 += 255;
				Var2.f_7 = 140;
				break;
			
			case 3:
				Var2 = (Var2 + 0.079f);
				Var2.f_1 = (Var2.f_1 + 0.008f);
				Var2.f_2 = (Var2.f_2 + 0.157f);
				Var2.f_3 = (Var2.f_3 + 0.036f);
				Var2.f_4 += 255;
				Var2.f_5 += 255;
				Var2.f_6 += 255;
				Var2.f_7 = 140;
				break;
			
			case 4:
				Var2 = (Var2 + 0.079f);
				Var2.f_1 = (Var2.f_1 + 0.008f);
				Var2.f_2 = (Var2.f_2 + 0.157f);
				Var2.f_3 = (Var2.f_3 + 0.036f);
				Var2.f_4 += 255;
				Var2.f_5 += 255;
				Var2.f_6 += 255;
				Var2.f_7 = 140;
				break;
		}
		Var5 = ((*uParam5 + 0.145f) + 0.001f);
		if (func_89())
		{
			Var5.f_1 = ((uParam5->f_1 + 0.019f) - 0.006f);
		}
		else
		{
			Var5.f_1 = (uParam5->f_1 + 0.019f);
		}
		Var5.f_2 = (0.016f + 0.003f);
		Var5.f_3 = (0.032f + 0.004f);
		Var5.f_7 = 255;
		func_88(&Var5, 1);
		Var5 = (uParam1->f_9 - ((uParam2->f_9 - uParam1->f_9) / 8f));
		if (func_89())
		{
			Var5 = (Var5 - 0.003f);
		}
		switch (iParam23)
		{
			case 5:
				Var5.f_3 = (Var5.f_3 + -0.009f);
				Var5.f_2 = (Var5.f_2 + -0.002f);
				if (func_89())
				{
					Var5.f_1 = (Var5.f_1 + 0.0055f);
				}
				else
				{
					Var5.f_1 = (Var5.f_1 + 0.0025f);
				}
				unk_0x0D3BE1DE0262A012("MPRPSymbol", false);
				if (unk_0x27117E2CDD4D67C3("MPRPSymbol"))
				{
					func_69("MPRPSymbol", "RP", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 2:
				unk_0x0D3BE1DE0262A012("TimerBars", false);
				if (unk_0x27117E2CDD4D67C3("TimerBars"))
				{
					func_69("TimerBars", "Rockets", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 1:
				unk_0x0D3BE1DE0262A012("TimerBars", false);
				if (unk_0x27117E2CDD4D67C3("TimerBars"))
				{
					func_69("TimerBars", "Spikes", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 4:
				unk_0x0D3BE1DE0262A012("TimerBars", false);
				if (unk_0x27117E2CDD4D67C3("TimerBars"))
				{
					func_69("TimerBars", "Boost", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 6:
				unk_0x0D3BE1DE0262A012("CrossTheLine", false);
				if (unk_0x27117E2CDD4D67C3("CrossTheLine"))
				{
					func_88(&Var5, 18);
					func_69("CrossTheLine", "Timer_LargeTick_32", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 7:
				unk_0x0D3BE1DE0262A012("CrossTheLine", false);
				if (unk_0x27117E2CDD4D67C3("CrossTheLine"))
				{
					func_88(&Var5, 6);
					func_69("CrossTheLine", "Timer_LargeCross_32", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 8:
				unk_0x0D3BE1DE0262A012("TimerBar_Icons", false);
				if (unk_0x27117E2CDD4D67C3("TimerBar_Icons"))
				{
					func_88(&Var5, 118);
					func_69("TimerBar_Icons", "Pickup_Beast", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 9:
				unk_0x0D3BE1DE0262A012("TimerBar_Icons", false);
				if (unk_0x27117E2CDD4D67C3("TimerBar_Icons"))
				{
					func_88(&Var5, 118);
					func_69("TimerBar_Icons", "Pickup_B_Time", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 10:
				unk_0x0D3BE1DE0262A012("TimerBar_Icons", false);
				if (unk_0x27117E2CDD4D67C3("TimerBar_Icons"))
				{
					func_88(&Var5, 118);
					func_69("TimerBar_Icons", "Pickup_Random", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 11:
				unk_0x0D3BE1DE0262A012("TimerBar_Icons", false);
				if (unk_0x27117E2CDD4D67C3("TimerBar_Icons"))
				{
					func_88(&Var5, 118);
					func_69("TimerBar_Icons", "Pickup_Slow_Time", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 12:
				unk_0x0D3BE1DE0262A012("TimerBar_Icons", false);
				if (unk_0x27117E2CDD4D67C3("TimerBar_Icons"))
				{
					func_88(&Var5, 118);
					func_69("TimerBar_Icons", "Pickup_Swap", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 13:
				unk_0x0D3BE1DE0262A012("TimerBar_Icons", false);
				if (unk_0x27117E2CDD4D67C3("TimerBar_Icons"))
				{
					func_88(&Var5, 118);
					func_69("TimerBar_Icons", "Pickup_Testosterone", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 14:
				unk_0x0D3BE1DE0262A012("TimerBar_Icons", false);
				if (unk_0x27117E2CDD4D67C3("TimerBar_Icons"))
				{
					func_88(&Var5, 118);
					func_69("TimerBar_Icons", "Pickup_Thermal", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 15:
				unk_0x0D3BE1DE0262A012("TimerBar_Icons", false);
				if (unk_0x27117E2CDD4D67C3("TimerBar_Icons"))
				{
					func_88(&Var5, 118);
					func_69("TimerBar_Icons", "Pickup_Weed", &Var5, 1, 0, 4, 0);
				}
				break;
			
			case 16:
				unk_0x0D3BE1DE0262A012("TimerBar_Icons", false);
				if (unk_0x27117E2CDD4D67C3("TimerBar_Icons"))
				{
					func_88(&Var5, 118);
					func_69("TimerBar_Icons", "Pickup_Hidden", &Var5, 1, 0, 4, 0);
				}
				break;
		}
		if (func_89())
		{
			Var2 = (Var2 + -0.025f);
			Var2.f_2 = (Var2.f_2 + 0.05f);
		}
		Global_150976.f_18CE = (Global_150976.f_18CE + Var2.f_3);
		if (Global_150976.f_463 == 0)
		{
			if (iParam18 > 0)
			{
				Var6 = { Var2 };
				if (func_244(&(Global_150976.f_3DF[iParam0 /*2*/]), 2000, 0) == 0)
				{
					if (func_130(Global_150976.f_3DF[iParam0 /*2*/], 1250, 0))
					{
						Global_150976.f_3F4[iParam0] = (Global_150976.f_3F4[iParam0] - 17);
					}
					Var6.f_7 = Global_150976.f_3F4[iParam0];
					if (iParam17 == 2)
					{
						func_88(&Var6, 6);
					}
					else if (iParam17 == 3)
					{
						func_88(&Var6, 18);
					}
					else
					{
						func_88(&Var6, iParam12);
					}
					func_69("TimerBars", "ALL_WHITE_bg", &Var6, 1, 0, iVar4, 0);
				}
			}
			else
			{
				Global_150976.f_3F4[iParam0] = 255;
				func_129(&(Global_150976.f_3DF[iParam0 /*2*/]), 0, 0);
			}
			func_69("TimerBars", "ALL_BLACK_bg", &Var2, 1, 0, iVar4, 0);
		}
		func_123(&Var2, iParam22);
		if (bParam16)
		{
			if (unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 12)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.004f);
			}
		}
		else if (func_89())
		{
			if (unk_0xB3260A60545D3F11() == 9 || unk_0xB3260A60545D3F11() == 12)
			{
				uParam4->f_1 = (uParam4->f_1 + -0.012f);
			}
			else
			{
				uParam4->f_1 = (uParam4->f_1 + -0.008f);
			}
		}
		iVar4 = func_77();
		unk_0xD9ACBBA59FD5A09E(iVar4);
		func_90(uParam1, iParam20);
		if (Global_150976.f_463 == 0)
		{
			func_68(uParam1, 0);
			if (func_57(sParam11) == 0)
			{
				if (bParam21 == 1)
				{
					func_58(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (bParam16 == 1)
				{
					*uParam1 = 4;
					func_58(uParam4, uParam1, sParam11, "", iParam20, 2);
				}
				else if (iParam15 == 4294967295)
				{
					func_120(uParam4, uParam1, sParam11, 0, 1);
				}
				else
				{
					func_55(uParam4, uParam1, sParam11, iParam15, 2);
				}
			}
		}
		if (bVar3)
		{
			if (iParam9 == 0)
			{
				func_205(iParam0);
			}
			if (iParam9 != 0 && func_244(&(Global_150976.f_11D2.f_150[iParam0 /*2*/]), 4000, 0) == 0)
			{
				if (iParam13 != 4)
				{
					if (iParam9 > 0)
					{
						func_204(uParam3);
						func_203(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
						func_202(uParam3);
					}
					else
					{
						func_201(uParam3);
						func_203(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
						func_202(uParam3);
					}
				}
				else if (iParam9 > 0)
				{
					func_201(uParam3);
					func_203(uParam6, uParam3, iParam9, 66, "TIMER_POS", 0, 1);
					func_202(uParam3);
				}
				else
				{
					func_204(uParam3);
					func_203(uParam6, uParam3, iParam9, 66, "STRING", 0, 1);
					func_202(uParam3);
				}
			}
			else
			{
				if (iParam10 != 0)
				{
					if (iParam10 == 1)
					{
						func_200(uParam2);
					}
					else if (iParam10 == 2)
					{
						func_199(uParam2);
					}
					else if (iParam10 == 3)
					{
						func_198(uParam2);
					}
				}
				if (Global_150976.f_463 == 1)
				{
					uParam2->f_7 = 0;
					unk_0xD9ACBBA59FD5A09E(7);
				}
				func_68(uParam2, 0);
				switch (iParam13)
				{
					case 1:
						if (bParam19)
						{
							func_58(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							if (bParam24)
							{
								func_203(uParam5, uParam2, iParam7, 2627, "", 0, 1);
							}
							else
							{
								func_203(uParam5, uParam2, iParam7, 2567, "", 0, 1);
							}
						}
						break;
					
					case 0:
						if (bParam19)
						{
							func_58(uParam5, uParam2, "--:--", "", 1, 2);
						}
						else
						{
							*uParam5 = (*uParam5 + 0.117f);
							func_203(uParam5, uParam2, iParam7, 6, "", 0, 1);
						}
						break;
					
					case 2:
						*uParam5 = (*uParam5 + 0.12f);
						func_203(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_120(&uVar1, &uVar0, "TIMER_AM_O", 0, 1);
						break;
					
					case 3:
						*uParam5 = (*uParam5 + 0.12f);
						func_203(uParam5, uParam2, iParam7, 6, "", 0, 1);
						func_120(&uVar1, &uVar0, "TIMER_PM_O", 0, 1);
						break;
					
					case 4:
						*uParam5 = (*uParam5 + 0.12f);
						if (bParam19)
						{
							func_58(uParam5, uParam2, "--:--:--", "", 1, 2);
						}
						else
						{
							func_203(uParam5, uParam2, iParam7, 2567, "", 0, 1);
						}
						break;
					
					case 5:
						*uParam5 = (*uParam5 + 0.117f);
						func_203(uParam5, uParam2, iParam7, 2, "", 0, 1);
						break;
					}
				}
		}
		func_45();
	}
}

void func_198(var uParam0)
{
	func_122(uParam0, 109);
}

void func_199(var uParam0)
{
	func_122(uParam0, 108);
}

void func_200(var uParam0)
{
	func_122(uParam0, 107);
}

void func_201(var uParam0)
{
	func_122(uParam0, 6);
}

void func_202(var uParam0)
{
	func_122(uParam0, 1);
}

void func_203(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	char* sVar0;
	
	if (func_49())
	{
		func_68(uParam1, 0);
		unk_0xFF72A133B792782E(iParam6);
		unk_0xAAE406A7DA443B93(iParam5);
		if (func_57(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		unk_0x070005E852D4C0E9(sVar0);
		unk_0x164431059FF80580(iParam2, iParam3);
		unk_0xE0026608C37C7C41(func_48(*uParam0), func_47(uParam0->f_1), 0);
	}
}

void func_204(var uParam0)
{
	func_122(uParam0, 18);
}

void func_205(int iParam0)
{
	func_15(&(Global_150976.f_11D2.f_150[iParam0 /*2*/]));
}

void func_206(int iParam0)
{
	func_15(&(Global_150976.f_278[iParam0 /*2*/]));
	func_15(&(Global_150976.f_28D[iParam0 /*2*/]));
}

void func_207(int iParam0)
{
	func_15(&(Global_150976.f_AA[iParam0 /*2*/]));
	func_15(&(Global_150976.f_BF[iParam0 /*2*/]));
}

void func_208(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	float fVar0;
	
	fVar0 = func_96(uParam0);
	*uParam1 = 0.795f;
	uParam1->f_1 = func_95(iParam4);
	uParam1->f_1 = (uParam1->f_1 + func_94(uParam5));
	*uParam2 = 0.795f;
	uParam2->f_1 = (uParam1->f_1 + func_93(uParam0));
	*uParam7 = 0.795f;
	uParam7->f_1 = (uParam1->f_1 + func_93(uParam6));
	*uParam3 = *uParam2;
	uParam3->f_1 = uParam2->f_1;
	func_92(iParam4, -fVar0);
}

void func_209(var uParam0)
{
	uParam0->f_9 = ((((((((0.95f - 0.047f) + 0.001f) + 0.047f) - 0.002f) - 0.013f) + 0.014f) - 0.024f) + 0.005f);
}

void func_210(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 15;
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.5f + 0.004f) - 0.01f) - 0.11f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_A = 19;
}

int func_212(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_222(iParam0))
	{
		iVar1 = 2;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (Global_14F3D8[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_213(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 7:
			func_196(iParam1, Global_150976.f_11D2[iParam1], &(Global_150976.f_11D2.f_B[iParam1 /*16*/]), Global_150976.f_11D2.f_AC[iParam1], Global_150976.f_11D2.f_C2[iParam1], Global_150976.f_11D2.f_D8[iParam1], Global_150976.f_11D2.f_CD[iParam1], Global_150976.f_11D2.f_B7[iParam1], Global_150976.f_11D2.f_E3[iParam1], Global_150976.f_11D2.f_104[iParam1], Global_150976.f_11D2.f_13A[iParam1], Global_150976.f_11D2.f_145[iParam1], Global_150976.f_11D2.f_165[iParam1], Global_150976.f_11D2.f_EE[iParam1], Global_150976.f_11D2.f_10F[iParam1], Global_150976.f_11D2.f_170[iParam1], Global_150976.f_11D2.f_17B[iParam1], Global_150976.f_11D2.f_186[iParam1]);
			break;
		
		case 3:
			func_195(iParam1, Global_150976.f_ACC[iParam1], &(Global_150976.f_ACC.f_B[iParam1 /*16*/]), Global_150976.f_ACC.f_B7[iParam1], Global_150976.f_ACC.f_AC[iParam1], Global_150976.f_ACC.f_C2[iParam1], Global_150976.f_ACC.f_D8[iParam1], &(Global_150976.f_ACC.f_103[iParam1 /*16*/]), Global_150976.f_ACC.f_1A4[iParam1], Global_150976.f_ACC.f_1C5[iParam1], Global_150976.f_ACC.f_1AF[iParam1], Global_150976.f_ACC.f_1BA[iParam1], Global_150976.f_ACC.f_1D0[iParam1], Global_150976.f_ACC.f_1DB[iParam1], Global_150976.f_ACC.f_1E6[iParam1], Global_150976.f_ACC.f_1F1[iParam1]);
			break;
		
		case 4:
			func_194(iParam1, Global_150976.f_CC8[iParam1], Global_150976.f_CC8.f_AC[iParam1], &(Global_150976.f_CC8.f_B[iParam1 /*16*/]), Global_150976.f_CC8.f_C2[iParam1], Global_150976.f_CC8.f_B7[iParam1], Global_150976.f_CC8.f_CD[iParam1], Global_150976.f_CC8.f_E3[iParam1], Global_150976.f_CC8.f_10E[iParam1], Global_150976.f_CC8.f_119[iParam1], Global_150976.f_CC8.f_124[iParam1], Global_150976.f_CC8.f_12F[iParam1], Global_150976.f_CC8.f_13A[iParam1], Global_150976.f_CC8.f_145[iParam1], Global_150976.f_CC8.f_150[iParam1], Global_150976.f_CC8.f_15B[iParam1]);
			break;
		
		case 5:
			func_193(iParam1, Global_150976.f_E2E[iParam1], Global_150976.f_E2E.f_AC[iParam1], &(Global_150976.f_E2E.f_B[iParam1 /*16*/]), Global_150976.f_E2E.f_C2[iParam1], Global_150976.f_E2E.f_B7[iParam1], Global_150976.f_E2E.f_CD[iParam1], Global_150976.f_E2E.f_E3[iParam1], Global_150976.f_E2E.f_10E[iParam1], Global_150976.f_E2E.f_119[iParam1], Global_150976.f_E2E.f_124[iParam1], Global_150976.f_E2E.f_12F[iParam1]);
			break;
		
		case 1:
			func_183(iParam1, Global_150976.f_6A4[iParam1], Global_150976.f_6A4.f_B[iParam1], &(Global_150976.f_6A4.f_16[iParam1 /*16*/]), Global_150976.f_6A4.f_C2[iParam1], Global_150976.f_6A4.f_CD[iParam1], Global_150976.f_6A4.f_102[iParam1], Global_150976.f_6A4.f_B7[iParam1], Global_150976.f_6A4.f_E3[iParam1 /*3*/], Global_150976.f_6A4.f_E3[iParam1 /*3*/].f_1, Global_150976.f_6A4.f_138[iParam1], Global_150976.f_6A4.f_143[iParam1], Global_150976.f_6A4.f_10D[iParam1], Global_26DB8D[iParam1], Global_26DB98[iParam1], Global_26DBA3[iParam1], Global_26DBAE[iParam1], Global_26DBB9[iParam1], Global_26DBC4[iParam1], Global_26DBCF[iParam1], Global_26DBDA[iParam1], Global_150976.f_6A4.f_14E[iParam1]);
			break;
		
		case 0:
			func_174(iParam1, Global_150976.f_46F[iParam1], Global_150976.f_46F.f_B[iParam1], &(Global_150976.f_46F.f_16[iParam1 /*16*/]), Global_150976.f_46F.f_C2[iParam1], Global_150976.f_46F.f_B7[iParam1], Global_150976.f_46F.f_E3[iParam1 /*3*/], Global_150976.f_46F.f_E3[iParam1 /*3*/].f_1, Global_150976.f_46F.f_102[iParam1], Global_150976.f_46F.f_CD[iParam1], Global_150976.f_46F.f_10D[iParam1], Global_150976.f_46F.f_138[iParam1], Global_150976.f_46F.f_143[iParam1], Global_150976.f_46F.f_14E[iParam1], Global_150976.f_46F.f_159[iParam1], Global_150976.f_46F.f_164[iParam1], Global_150976.f_46F.f_16F[iParam1], Global_150976.f_46F.f_17A[iParam1], Global_150976.f_46F.f_185[iParam1], Global_150976.f_46F.f_190[iParam1], Global_150976.f_46F.f_19B[iParam1], Global_150976.f_46F.f_1A6[iParam1], Global_150976.f_46F.f_1B1[iParam1], Global_150976.f_46F.f_1BC[iParam1], Global_150976.f_46F.f_1C7[iParam1], Global_150976.f_46F.f_1D2[iParam1], Global_150976.f_46F.f_1DD[iParam1], Global_150976.f_46F.f_1E8[iParam1], Global_150976.f_46F.f_1F3[iParam1], Global_150976.f_46F.f_1FE[iParam1], Global_150976.f_46F.f_209[iParam1], Global_150976.f_46F.f_214[iParam1], Global_150976.f_46F.f_21F[iParam1], Global_150976.f_46F.f_22A[iParam1]);
			break;
		
		case 6:
			func_164(iParam1, Global_150976.f_F68[iParam1], &(Global_150976.f_F68.f_B[iParam1 /*16*/]), Global_150976.f_F68.f_B7[iParam1], Global_150976.f_F68.f_AC[iParam1], Global_150976.f_F68.f_C2[iParam1], Global_150976.f_F68.f_10F[iParam1], &(Global_150976.f_F68.f_11A[iParam1 /*16*/]), Global_150976.f_F68.f_1BB[iParam1], Global_150976.f_F68.f_1C6[iParam1], Global_150976.f_F68.f_1F1[iParam1], Global_150976.f_F68.f_1FC[iParam1], Global_150976.f_F68.f_CD[iParam1], Global_150976.f_F68.f_D8[iParam1], Global_150976.f_F68.f_E3[iParam1], Global_150976.f_F68.f_EE[iParam1], Global_150976.f_F68.f_F9[iParam1], Global_150976.f_F68.f_207[iParam1], Global_150976.f_F68.f_212[iParam1], Global_150976.f_F68.f_21D[iParam1], Global_150976.f_F68.f_228[iParam1], Global_150976.f_F68.f_233[iParam1], Global_150976.f_F68.f_23E[iParam1], Global_150976.f_F68.f_249[iParam1], Global_150976.f_F68.f_254[iParam1], Global_150976.f_F68.f_25F[iParam1]);
			break;
		
		case 2:
			func_152(iParam1, Global_150976.f_7FD[iParam1], &(Global_150976.f_7FD.f_63[iParam1 /*16*/]), Global_150976.f_7FD.f_11A[iParam1], Global_150976.f_7FD.f_125[iParam1], Global_150976.f_7FD.f_104[iParam1], Global_150976.f_7FD.f_B[iParam1], Global_150976.f_7FD.f_16[iParam1], Global_150976.f_7FD.f_21[iParam1], Global_150976.f_7FD.f_2C[iParam1], Global_150976.f_7FD.f_37[iParam1], Global_150976.f_7FD.f_42[iParam1], Global_150976.f_7FD.f_4D[iParam1], Global_150976.f_7FD.f_58[iParam1], Global_150976.f_7FD.f_10F[iParam1], Global_150976.f_7FD.f_130[iParam1], Global_150976.f_7FD.f_165[iParam1], Global_150976.f_7FD.f_146[iParam1 /*3*/], Global_150976.f_7FD.f_146[iParam1 /*3*/].f_1, Global_150976.f_7FD.f_170[iParam1], Global_150976.f_7FD.f_17B[iParam1], Global_150976.f_7FD.f_186[iParam1], Global_150976.f_7FD.f_191[iParam1], Global_150976.f_7FD.f_19C[iParam1], Global_150976.f_7FD.f_1A7[iParam1], Global_150976.f_7FD.f_1B2[iParam1], Global_150976.f_7FD.f_1BD[iParam1], Global_150976.f_7FD.f_1C8[iParam1], Global_150976.f_7FD.f_1D3[iParam1], Global_150976.f_7FD.f_1DE[iParam1], Global_150976.f_7FD.f_1E9[iParam1], Global_150976.f_7FD.f_1F4[iParam1], Global_150976.f_7FD.f_1FF[iParam1], Global_150976.f_7FD.f_20A[iParam1], Global_150976.f_7FD.f_215[iParam1], Global_150976.f_7FD.f_24B[iParam1], Global_150976.f_7FD.f_256[iParam1], Global_150976.f_7FD.f_220[iParam1], Global_26DBE5[iParam1], Global_26DBF0[iParam1], Global_26DBFB[iParam1], Global_26DC06[iParam1], Global_26DC11[iParam1], Global_26DC1C[iParam1], Global_26DC27[iParam1], Global_26DC32[iParam1], Global_150976.f_7FD.f_261[iParam1], Global_150976.f_7FD.f_26C[iParam1], Global_150976.f_7FD.f_277[iParam1], Global_150976.f_7FD.f_282[iParam1], Global_150976.f_7FD.f_28D[iParam1], Global_150976.f_7FD.f_298[iParam1], Global_150976.f_7FD.f_2A3[iParam1], Global_150976.f_7FD.f_2AE[iParam1], Global_150976.f_7FD.f_2B9[iParam1], Global_150976.f_7FD.f_2C4[iParam1]);
			break;
		
		case 8:
			func_149(iParam1, &(Global_150976.f_1363.f_B[iParam1 /*16*/]), Global_150976.f_1363[iParam1], Global_150976.f_1363.f_AC[iParam1], Global_150976.f_1363.f_B7[iParam1], Global_150976.f_1363.f_C2[iParam1], Global_150976.f_1363.f_CD[iParam1]);
			break;
		
		case 9:
			func_143(iParam1, Global_150976.f_1446[iParam1], Global_150976.f_1446.f_B[iParam1]);
			break;
		
		case 10:
			func_112(iParam1, Global_150976.f_1467.f_6[iParam1], Global_150976.f_1467.f_11[iParam1], &(Global_150976.f_1467.f_1C[iParam1 /*16*/]), Global_150976.f_1467.f_C8[iParam1], Global_150976.f_1467.f_BD[iParam1], Global_150976.f_1467.f_E9[iParam1], Global_150976.f_1467.f_D3[iParam1], Global_150976.f_1467.f_F4[iParam1], Global_150976.f_1467.f_11F[iParam1], Global_150976.f_1467.f_12A[iParam1], &(Global_150976.f_1467.f_135[iParam1 /*16*/]), &(Global_150976.f_1467), Global_150976.f_1467.f_1D6[iParam1], Global_150976.f_1467.f_1E1[iParam1], Global_150976.f_1467.f_1EC[iParam1]);
			break;
		
		case 11:
			func_108(iParam1, Global_150976.f_165E[iParam1], Global_150976.f_165E.f_B[iParam1], Global_150976.f_165E.f_16[iParam1], Global_150976.f_165E.f_21[iParam1], Global_150976.f_165E.f_2C[iParam1], Global_150976.f_165E.f_37[iParam1], Global_150976.f_165E.f_42[iParam1], Global_150976.f_165E.f_4D[iParam1], Global_150976.f_165E.f_58[iParam1], Global_150976.f_165E.f_6E[iParam1], Global_150976.f_165E.f_79[iParam1], Global_150976.f_165E.f_84[iParam1], Global_150976.f_165E.f_8F[iParam1], Global_150976.f_165E.f_9A[iParam1]);
			break;
		
		case 12:
			func_43(iParam1, Global_150976.f_1703[iParam1], Global_150976.f_1703.f_16[iParam1], &(Global_150976.f_1703.f_21[iParam1 /*6*/]), Global_150976.f_1703.f_5E[iParam1], Global_150976.f_1703.f_B[iParam1], Global_150976.f_1703.f_69[iParam1], Global_150976.f_1703.f_74[iParam1], Global_150976.f_1703.f_7F[iParam1], Global_150976.f_1703.f_8A[iParam1], Global_150976.f_1703.f_95[iParam1], Global_150976.f_1703.f_A0[iParam1], Global_150976.f_1703.f_AB[iParam1], Global_150976.f_1703.f_B6[iParam1], Global_150976.f_1703.f_C1[iParam1], Global_150976.f_1703.f_CC[iParam1], Global_150976.f_1703.f_D7[iParam1], Global_150976.f_1703.f_E2[iParam1], Global_150976.f_1703.f_F8[iParam1], Global_150976.f_1703.f_103[iParam1], Global_150976.f_1703.f_10E[iParam1], Global_150976.f_1703.f_119[iParam1], Global_150976.f_1703.f_124[iParam1], Global_150976.f_1703.f_12F[iParam1], Global_150976.f_1703.f_13A[iParam1], Global_150976.f_1703.f_145[iParam1], Global_150976.f_1703.f_150[iParam1], Global_150976.f_1703.f_15B[iParam1], Global_150976.f_1703.f_166[iParam1], Global_150976.f_1703.f_171[iParam1], Global_150976.f_1703.f_17C[iParam1], Global_150976.f_1703.f_187[iParam1]);
			break;
	}
}

void func_214(bool bParam0)
{
	if (func_215())
	{
		if (bParam0)
		{
			unk_0x5DD950F92F816F03(1);
		}
		else
		{
			unk_0x5DD950F92F816F03(0);
		}
	}
}

int func_215()
{
	if (func_216(unk_0xD803B885F5E47A62()))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	switch (func_217(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 41:
		case 36:
		case 39:
		case 42:
			return 0;
		
		default:
	}
	return 1;
}

int func_217(int iParam0)
{
	return Global_184507[iParam0 /*876*/].f_C4;
}

int func_218(int iParam0)
{
	if (Global_25920E == 1)
	{
		return 0;
	}
	if (func_221() == 0)
	{
		if (unk_0x798A3F1296751F46())
		{
			return 0;
		}
	}
	if ((iParam0 != 1 && Global_150976.f_464 == 0) && Global_150976.f_465 == 0)
	{
		if (func_219())
		{
			return 0;
		}
	}
	return 1;
}

int func_219()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 3)
	{
		return 1;
	}
	if (func_220())
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

int func_220()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_221()
{
	return Global_7830;
}

bool func_222(int iParam0)
{
	return (iParam0 > 4294967295 && iParam0 < 13);
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 4294967295:
			return 4294967295;
		
		case 7:
			return 0;
		
		case 3:
			return 1;
		
		case 4:
			return 2;
		
		case 5:
			return 3;
		
		case 1:
			return 4;
		
		case 0:
			return 5;
		
		case 6:
			return 6;
		
		case 2:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return 4294967295;
}

int func_224(int iParam0)
{
	if (func_225(iParam0))
	{
		return Global_14F3D8[iParam0];
	}
	return 4294967295;
}

bool func_225(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 2);
}

int func_226(int iParam0)
{
	if (func_225(iParam0))
	{
		return Global_14F3D8[iParam0] != 4294967295;
	}
	return 0;
}

int func_227()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_150976.f_18A3[iVar0] != Global_150976.f_1895[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	if (Global_150976.f_18CD)
	{
		Global_150976.f_18CD = 0;
		return 1;
	}
	return 0;
}

void func_228()
{
	Global_150976.f_18CD = 1;
}

int func_229(int iParam0)
{
	if (func_231(iParam0, 0))
	{
		return 1;
	}
	if (func_230())
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

bool func_230()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 3);
}

bool func_231(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_232(4294967295, 0) == 8;
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

int func_232(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_233();
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

int func_233()
{
	return Global_1407E9;
}

int func_234()
{
	if (Global_14066F)
	{
		return 0;
	}
	if (Global_12061)
	{
		return 0;
	}
	if (unk_0x0D4F176B6F8362D9())
	{
		return 0;
	}
	if (Global_197EBE.f_4)
	{
		return 0;
	}
	if (Global_150976.f_467 || Global_150976.f_468)
	{
		if (Global_150976.f_469 == 0)
		{
			if (func_238(unk_0x16F2683693E537C9()))
			{
				func_237();
			}
		}
		return 1;
	}
	if (func_50())
	{
		if (Global_150976.f_469 == 0)
		{
			if (func_238(unk_0x16F2683693E537C9()))
			{
				func_237();
			}
		}
		return 1;
	}
	if (Global_2594C5)
	{
		return 0;
	}
	if (Global_14136A)
	{
		return 0;
	}
	if (func_236())
	{
		if (Global_150976.f_469 == 0)
		{
			if (func_238(unk_0x16F2683693E537C9()))
			{
				func_237();
			}
		}
		return 1;
	}
	if (Global_56C3.f_4 && func_216(unk_0xD803B885F5E47A62()) == 0)
	{
		return 0;
	}
	if (unk_0x991B1F0980C62628())
	{
		return 0;
	}
	if (Global_150976.f_469 == 0)
	{
		if (func_238(unk_0x16F2683693E537C9()))
		{
			func_237();
		}
	}
	if (func_235(8, 4294967295))
	{
		return 0;
	}
	if (unk_0xC787E372FB58A714() == 0)
	{
		return 0;
	}
	if (func_221() == 0)
	{
		if (Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_DE != 99)
		{
			if (((unk_0xB7DDF77EF860941D() == 0 && Global_180601 == 0) && !unk_0xEAE0D21A50E6C7F4(Global_2537E2.f_766.f_2F4, 11)) && Global_184507[unk_0xD803B885F5E47A62() /*876*/] != 0)
			{
				return 0;
			}
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_240006, 11))
	{
		return 0;
	}
	return 1;
}

bool func_235(int iParam0, int iParam1)
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

int func_236()
{
	if (Global_193788)
	{
		return 1;
	}
	return 0;
}

void func_237()
{
	Global_150976.f_469 = 1;
}

int func_238(int iParam0)
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

void func_239()
{
	int iVar0;
	
	if (func_242(2))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (func_28(2, iVar0) && func_27(2, iVar0))
			{
				func_15(&(Global_150976.f_7FD.f_22B[iVar0 /*2*/]));
			}
			else if (func_244(&(Global_150976.f_7FD.f_22B[iVar0 /*2*/]), Global_150976.f_7FD.f_240[iVar0], 0) == 0)
			{
				Global_150976.f_1 = 1;
				func_241(2, iVar0);
			}
			else
			{
				func_240(2, iVar0);
			}
			iVar0++;
		}
	}
}

void func_240(int iParam0, int iParam1)
{
	unk_0x0674E58A79778E99(&(Global_150976.f_18BF[iParam0]), iParam1);
}

void func_241(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

int func_242(int iParam0)
{
	if (Global_150976.f_18BF[iParam0] > 0)
	{
		return 1;
	}
	return 0;
}

void func_243(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

int func_244(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_65(uParam0, bParam2, 0);
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

