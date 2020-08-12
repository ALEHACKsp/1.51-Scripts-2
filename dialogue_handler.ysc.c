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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	vector3 vLocal_38[24] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	vector3 vLocal_42[24] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	vector3 vLocal_55[24] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	char* sLocal_59 = NULL;
	vector3 vLocal_60[24] = "";
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	char* sLocal_66 = NULL;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	vector3 vLocal_70[24] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	char* sLocal_74 = NULL;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_96[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	unk_0xB57F88F0123F4C38();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 1))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1CBC, 20))
			{
				if (unk_0x1EE04CEA36EF313B())
				{
					if (Global_4C12)
					{
						func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_4BE5)
						{
							func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x0674E58A79778E99(&Global_1CBD, 1);
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_4CD7, 0))
		{
			if (!func_118())
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_4CD7, 1))
				{
					unk_0x5D96D8530B3D0904(&Global_4CD7, 1);
					if (unk_0x8CD06866876216F2())
					{
						iLocal_89 = unk_0x2B6E0A53779D29EA();
					}
					else
					{
						iLocal_85 = unk_0x1C0640BA9A7327B3();
					}
				}
				if (unk_0x8CD06866876216F2())
				{
					iLocal_91 = unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iLocal_89);
				}
				else
				{
					iLocal_86 = unk_0x1C0640BA9A7327B3();
					iLocal_91 = (iLocal_86 - iLocal_85);
				}
				if (iLocal_91 < 3000)
				{
					if (func_111(&Global_4F23, &Global_518B, &Global_513B, Global_5148, Global_551E, Global_551F, 0))
					{
						Global_4CD7 = 0;
					}
				}
				else
				{
					Global_4CD7 = 0;
				}
			}
		}
		if (((!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_11, 4)) && !func_110()) && unk_0x8A22C4C08282BF26(3209042640) == 0)
		{
			if (Global_5145 != 0)
			{
				if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0)
				{
					func_109();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_105();
		}
		switch (Global_5145)
		{
			case 0:
				break;
			
			case 1:
				if (Global_514B)
				{
					if (Global_5141 == 0)
					{
						func_103();
					}
					else
					{
						func_102();
						func_103();
					}
				}
				else if (Global_5141 == 0)
				{
					func_92();
				}
				else
				{
					func_102();
					func_74();
				}
				break;
			
			case 2:
				func_68();
				break;
			
			case 3:
				func_64();
				break;
			
			case 4:
				if (Global_514B)
				{
					if (Global_514D)
					{
						func_63();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_514F = 0;
	Global_4C1D = 0;
	func_2();
}

void func_2()
{
	Global_280001 = 0;
	Global_280002 = 0;
	Global_5150 = 0;
	Global_5151 = 0;
	Global_5152 = 0;
	Global_5153 = 0;
	Global_4E7E.f_A1 = 4294967197;
	Global_4E7E.f_A2 = { 0f, 0f, 0f };
	Global_5149 = 0;
	Global_514A = 0;
	Global_5174 = 0;
	Global_5175 = 0;
	Global_5178 = 0;
	Global_517A = 0;
	Global_5179 = 0;
	Global_517C = 0;
	Global_517B = 0;
	Global_553E = 0;
	Global_517E = 0;
	if (Global_4C1E.f_1 == 10)
	{
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 11))
	{
		func_3();
	}
	Global_514B = 0;
	Global_514C = 0;
	Global_514D = 0;
	Global_514E = 0;
	Global_5524 = 0;
	Global_5523 = 0;
	Global_552A = 0;
	Global_5529 = 0;
	Global_5526 = 0;
	Global_5525 = 0;
	Global_5527 = 0;
	Global_5528 = 0;
	Global_5141 = 0;
	Global_5142 = 0;
	Global_5143 = 0;
	Global_5144 = 0;
	Global_5247 = 0;
	Global_5542 = 5000;
	Global_4C0D = 0;
	unk_0x0674E58A79778E99(&Global_1CBC, 20);
	unk_0x0674E58A79778E99(&Global_1CBC, 24);
	unk_0x0674E58A79778E99(&Global_1CBD, 23);
	unk_0x0674E58A79778E99(&Global_1CBE, 0);
	unk_0x0674E58A79778E99(&Global_1CBD, 9);
	unk_0x0674E58A79778E99(&Global_1CBD, 31);
	unk_0x0674E58A79778E99(&Global_1CBD, 17);
	unk_0x0674E58A79778E99(&Global_1CBE, 5);
	Global_551D = 0;
	Global_551C = 0;
	if (unk_0x25037C66EB32B076())
	{
		Global_5145 = 4;
	}
	else
	{
		Global_5145 = 0;
		Global_5538 = 0;
		Global_5543 = unk_0x1C0640BA9A7327B3();
	}
}

void func_3()
{
	if (!Global_12B4E)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 11))
			{
				if (!Global_4BE5)
				{
					unk_0x8D4C354BB8991817(unk_0x16F2683693E537C9(), 0, 1);
				}
				if (Global_12B4E)
				{
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 244, true);
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 243, true);
					unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 242, true);
				}
				unk_0x0674E58A79778E99(&Global_1CBC, 11);
			}
		}
	}
}

void func_4()
{
	Global_514F = 0;
	Global_4C1D = 0;
	func_2();
}

void func_5()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xBADF5264209B7544(unk_0x16F2683693E537C9()))
		{
			if (Global_517D == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_5525 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_5538 == 1)
			{
				unk_0xFD81FDD5AE805B89(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_5538 == 0)
		{
			unk_0x8BD0DC8EEFDC56D8();
			iLocal_31 = 0;
		}
	}
	else if (Global_5527 > 0)
	{
		iLocal_37 = unk_0x1C0640BA9A7327B3();
		if ((iLocal_37 - iLocal_36) > Global_5527)
		{
			unk_0x871665896C890C7F();
			Global_5525 = 0;
		}
	}
	if (Global_5538 == 0)
	{
		if (!unk_0x25037C66EB32B076())
		{
			Global_5145 = 6;
		}
	}
}

void func_6()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_5538 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_5145 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x1EE04CEA36EF313B())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_1CBC, 11))
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if (Global_12B4E == 0)
					{
						func_61();
					}
				}
			}
		}
		else if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x0E0E6175453415CB(unk_0x16F2683693E537C9()))
			{
				if (Global_12B4E == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_12B4E == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_5538 == 1)
		{
			if (Global_5539 == 1)
			{
				unk_0xFD81FDD5AE805B89(1);
				iLocal_31 = 1;
				Global_5539 = 0;
			}
		}
	}
	else if (Global_5538 == 0)
	{
		if (Global_5539 == 1)
		{
			unk_0x8BD0DC8EEFDC56D8();
			iLocal_31 = 0;
			Global_5539 = 0;
		}
	}
	if (Global_517A == 0)
	{
		if (!Global_5152)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_1CBD, 31))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_1CBD, 27))
				{
					if (func_54())
					{
						if (Global_4C1E.f_1 > 6)
						{
							unk_0x5D96D8530B3D0904(&Global_1CBD, 24);
							unk_0x5D96D8530B3D0904(&Global_1CBD, 27);
							unk_0x0674E58A79778E99(&Global_1CBD, 26);
							unk_0x0674E58A79778E99(&Global_1CBD, 25);
						}
					}
				}
			}
		}
	}
	if (unk_0x1EE04CEA36EF313B() == 0 && Global_5152 == 0)
	{
		if (Global_517A == 1)
		{
			unk_0x5D96D8530B3D0904(&Global_1CBD, 23);
		}
		else
		{
			unk_0x0674E58A79778E99(&Global_1CBD, 23);
		}
		if (Global_517E)
		{
			if (Global_517A == 0)
			{
				Global_4FC8 = { Global_517F };
				Global_5191 = { Global_5185 };
				Global_514F = 0;
				Global_553E = 6;
				func_53();
				return;
			}
		}
		if (!Global_517C)
		{
			while (Global_517A == 1)
			{
				SYSTEM::WAIT(0);
				if (Global_4C1E.f_1 < 6)
				{
					Global_517A = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						if (Global_517C)
						{
							iLocal_30 = 1;
							Global_553C = 1;
							func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_51D3, &(Global_706[Global_1A0F /*29*/].f_7), &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_3), 0);
							func_51(Global_4C0B, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
							if (Global_4C12)
							{
								func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								unk_0x5D96D8530B3D0904(&Global_1CBC, 17);
								func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								unk_0x5D96D8530B3D0904(&Global_1CBC, 17);
								func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_553A = 1;
							if (func_50(Global_1A0F, Global_4C1E) == 0)
							{
								func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_51D3, "CELL_300", &(Global_75[Global_1A0F /*10*/].f_4), "CELL_195", 0);
								func_51(Global_4C0B, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
							}
							else
							{
								func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_51D3, &(Global_706[Global_1A0F /*29*/].f_7), &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_3), 0);
								func_51(Global_4C0B, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
							}
							if (Global_4C12)
							{
								func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							unk_0x0674E58A79778E99(&Global_1CBC, 17);
						}
					}
					if (func_49(2, Global_4BFF, 0))
					{
						func_47();
						Global_4BD4 = 0.19f;
						Global_517A = 0;
						func_45();
						if (Global_517C)
						{
							Global_4FC8 = { Global_51CD };
							Global_553E = 5;
						}
						else if (Global_5143 > 0)
						{
							Global_5247 = 1;
							Global_5145 = 0;
							Global_5542 = 0;
							if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_551D + 1)
								{
									uLocal_94[iVar0] = func_44(&(Global_5248[iVar0 /*6*/]));
									uLocal_95[iVar0] = func_44(&(Global_53B2[iVar0 /*6*/]));
									iVar0++;
								}
								func_43(Global_551D, &Global_4E7E, Global_1A0F, &Global_5191, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_5143 == 2)
							{
								func_25(&Global_4E7E, Global_1A0F, &Global_5191, &(Global_51DF[0 /*6*/]), &(Global_5213[0 /*6*/]), &(Global_51DF[1 /*6*/]), &(Global_5213[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_553E = 1;
							Global_553A = 0;
							Global_553C = 0;
							Global_514F = 0;
							func_23();
							return;
						}
						else
						{
							Global_4FC8 = { Global_51A3 };
							Global_553E = 1;
						}
						Global_553A = 0;
						Global_553C = 0;
						Global_514F = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_4C00, 0) || unk_0xEAE0D21A50E6C7F4(Global_1CBC, 24))
					{
						func_47();
						Global_4BD4 = 0.19f;
						Global_517A = 0;
						func_45();
						if (Global_517C)
						{
							Global_4FC8 = { Global_51C7 };
							Global_553E = 4;
						}
						else if (Global_5143 > 0)
						{
							Global_5247 = 1;
							Global_5145 = 0;
							Global_5542 = 0;
							if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_551C + 1)
								{
									uLocal_96[iVar1] = func_44(&(Global_52FD[iVar1 /*6*/]));
									uLocal_97[iVar1] = func_44(&(Global_5467[iVar1 /*6*/]));
									iVar1++;
								}
								func_43(Global_551C, &Global_4E7E, Global_1A0F, &Global_5191, &uLocal_96, &uLocal_97, 9, 0, 0, 0, 0);
							}
							else if (Global_5143 == 2)
							{
								func_25(&Global_4E7E, Global_1A0F, &Global_5191, &(Global_51EC[0 /*6*/]), &(Global_5220[0 /*6*/]), &(Global_51EC[1 /*6*/]), &(Global_5220[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_553E = 2;
							Global_553A = 0;
							Global_553C = 0;
							Global_514F = 0;
							func_23();
							return;
						}
						else
						{
							Global_4FC8 = { Global_51A9 };
							Global_553E = 2;
						}
						Global_553A = 0;
						Global_553C = 0;
						Global_514F = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_4C02, 0))
					{
						if (Global_517C)
						{
							Global_4BD4 = 0.19f;
							Global_517A = 0;
							func_45();
							func_47();
							Global_4FC8 = { Global_51C1 };
							Global_553E = 3;
							Global_553A = 0;
							Global_553C = 0;
							Global_514F = 0;
							func_23();
							func_53();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_517A)
			{
				SYSTEM::WAIT(0);
				if (Global_4C1E.f_1 < 6)
				{
					Global_517A = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_52();
						func_51(Global_4C0B, "SET_DATA_SLOT_EMPTY", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_51(Global_4C0B, "DISPLAY_VIEW", 18f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_22(Global_4C0B, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_4C12)
						{
							func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x0674E58A79778E99(&Global_1CBC, 17);
						iLocal_98 = 0;
						iLocal_30 = 1;
					}
					func_16();
					if (func_49(2, Global_4BFF, 0))
					{
						func_47();
						Global_517A = 0;
						func_45();
						unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
						iLocal_99 = unk_0x7A8BB56B212464AC();
						while (!unk_0xC95D7AEEDEF4946B(iLocal_99))
						{
							SYSTEM::WAIT(0);
						}
						iVar2 = unk_0xA52833FE33F41C53(iLocal_99);
						switch (iVar2)
						{
							case 0:
								Global_4FC8 = { Global_51C7 };
								Global_553E = 4;
								break;
							
							case 1:
								Global_4FC8 = { Global_51C1 };
								Global_553E = 3;
								break;
							
							case 2:
								Global_4FC8 = { Global_51CD };
								Global_553E = 5;
								break;
						}
						Global_553A = 0;
						Global_553C = 0;
						Global_514F = 0;
						func_23();
						func_53();
						return;
					}
					if (func_49(2, Global_4C00, 0))
					{
						Global_517A = 0;
						func_45();
					}
				}
			}
		}
		if (Global_5146 == 0)
		{
			unk_0x5CEB4DB888A62073(false);
			SYSTEM::SETTIMERA(0);
			while (SYSTEM::TIMERA() < 900 && Global_4C1E.f_1 == 9)
			{
				SYSTEM::WAIT(0);
			}
			Global_5145 = 6;
		}
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Hang_Up", &Global_4C13, true);
		func_15();
		Global_4C1E.f_1 = Global_4C20;
		func_8();
	}
	else if (Global_4CD0 == 0)
	{
		if (func_49(2, Global_4BFE, 0))
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 20))
					{
					}
					else
					{
						Global_4C08 = 1;
						func_45();
						unk_0x5CEB4DB888A62073(false);
						Global_5176 = 1;
						Global_5177 = 1;
						Global_5145 = 6;
						func_15();
						Global_4C1E.f_1 = Global_4C20;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
{
	vector3 vVar0[24];
	
	if (Global_4C0D == 1)
	{
		return;
	}
	if (Global_4C1E.f_1 < 4)
	{
		return;
	}
	while (!unk_0x83D8570832F172A7(Global_4C0B))
	{
		if (Global_12B4E)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_4C1E.f_1)
	{
		case 6:
			func_51(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_13(Global_1F19);
			if (Global_1F19 == 1)
			{
				func_51(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 3212836864, 3212836864, 3212836864);
				Global_4C0A = Global_4C22;
			}
			else
			{
				func_51(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C23), 3212836864, 3212836864, 3212836864);
				Global_4C0A = Global_4C23;
			}
			if (Global_4C12)
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_4CD2 == 0)
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0674E58A79778E99(&Global_1CBC, 17);
			}
			else if (Global_12B4E)
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0674E58A79778E99(&Global_1CBC, 17);
			}
			else
			{
				if (Global_4CD1 == 1)
				{
					if (Global_4C12)
					{
						func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4C12)
				{
					func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x5D96D8530B3D0904(&Global_1CBC, 17);
			}
			if (Global_12B4E)
			{
				func_11();
				unk_0x0674E58A79778E99(&Global_1CBE, 9);
				func_51(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 3212836864, 3212836864, 3212836864);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_51(Global_4C0B, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_1CBC, 17);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 20))
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_4C12)
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_4BE5)
				{
					func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_4C1D == 1)
			{
				func_10();
				func_51(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(4);
					unk_0x3CAEA85DA607305E(0);
					unk_0x3CAEA85DA607305E(2);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					unk_0x7E60D21B163E9D56();
				}
				else if (func_50(Global_1A0F, Global_4C1E) == 0)
				{
					func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), "CELL_217", &(Global_706[Global_1A0F /*29*/].f_3), 0);
				}
				func_51(Global_4C0B, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
			else if (Global_5145 == 4 || Global_5145 == 3)
			{
				func_51(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				func_10();
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(4);
					unk_0x3CAEA85DA607305E(0);
					unk_0x3CAEA85DA607305E(2);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					if (Global_5247)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_50(Global_1A0F, Global_4C1E) == 0)
					{
						func_51(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_51(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), &cVar0, &(Global_706[Global_1A0F /*29*/].f_3), 0);
					}
				}
				func_51(Global_4C0B, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
			func_23();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_10()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (Global_4C1E == 0)
		{
			switch (Global_1B416.f_36DE[Global_4C1E /*20*/].f_6)
			{
				case 1:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0);
					break;
				
				case 2:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 1);
					break;
				
				case 3:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 2);
					break;
				
				case 4:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 3);
					break;
				
				case 5:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 4);
					break;
				
				case 6:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 5);
					break;
				
				case 7:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_4C1E == 1)
		{
			switch (Global_1B416.f_36DE[Global_4C1E /*20*/].f_6)
			{
				case 1:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 6);
					break;
				
				case 2:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0);
					break;
				
				case 3:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 1);
					break;
				
				case 4:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 2);
					break;
				
				case 5:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 3);
					break;
				
				case 6:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 4);
					break;
				
				case 7:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_4C1E == 2)
		{
			switch (Global_1B416.f_36DE[Global_4C1E /*20*/].f_6)
			{
				case 1:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 5);
					break;
				
				case 2:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 6);
					break;
				
				case 3:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 1);
					break;
				
				case 4:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0);
					break;
				
				case 5:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 2);
					break;
				
				case 6:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 3);
					break;
				
				case 7:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_4C1E == 3)
		{
			switch (Global_4127D9)
			{
				case 1:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 0);
					break;
				
				case 2:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 1);
					break;
				
				case 3:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 2);
					break;
				
				case 4:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 3);
					break;
				
				case 5:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 4);
					break;
				
				case 6:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 5);
					break;
				
				case 7:
					unk_0xB70BA516AA87BA2D(unk_0xD803B885F5E47A62(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11()
{
	if (Global_12B4E)
	{
		if (func_12() == 0)
		{
			return;
		}
		func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x5D96D8530B3D0904(&Global_1CBC, 17);
	}
}

int func_12()
{
	return 0;
}

void func_13(int iParam0)
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
		if (func_14(14))
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
								func_9(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 14)
								{
									func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0);
								func_9(&(Global_1CC3[iVar1 /*15*/]));
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
								func_9(&(Global_1CC3[iVar1 /*15*/]));
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
								func_9(&(Global_1CC3[iVar1 /*15*/]));
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
								func_9(&(Global_1CC3[iVar1 /*15*/]));
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
								func_9(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18D301.f_1;
								func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_14(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_15()
{
	if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
	{
		return;
	}
	switch (Global_4C20)
	{
		case 5:
			Global_4C20 = 6;
			break;
		
		case 6:
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 5))
			{
				Global_4C20 = 6;
				unk_0x0674E58A79778E99(&Global_1CBD, 5);
			}
			else
			{
				Global_4C20 = 3;
			}
			break;
		
		case 7:
			Global_4C20 = 3;
			break;
		
		case 3:
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 5))
			{
				Global_4C20 = 6;
				unk_0x0674E58A79778E99(&Global_1CBD, 5);
			}
			else
			{
				Global_4C20 = 3;
			}
			break;
		
		default:
			Global_4C20 = 3;
			break;
	}
}

void func_16()
{
	if (iLocal_98)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_98 = 0;
		}
	}
	if (iLocal_98 == 0)
	{
		if (func_49(2, Global_4C06, 0) || unk_0xBFC0798A6E3417F9(2, 181))
		{
			func_20();
			iLocal_98 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_49(2, Global_4C07, 0) || unk_0xBFC0798A6E3417F9(2, 180))
		{
			func_17();
			iLocal_98 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_17()
{
	func_51(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x4D7F4CC43D4D0DE3(4294967295, "Menu_Navigate", &Global_4C13, true);
	func_18();
}

void func_18()
{
	if (func_19())
	{
		if (Global_4CD5 == 0)
		{
			unk_0x5A963FB0365294C8(2);
		}
		else
		{
			unk_0x5A963FB0365294C8(1);
		}
	}
}

int func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_12B4E)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4127DB || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_20()
{
	func_51(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x4D7F4CC43D4D0DE3(4294967295, "Menu_Navigate", &Global_4C13, true);
	func_21();
}

void func_21()
{
	if (func_19())
	{
		if (Global_4CD5 == 0)
		{
			unk_0x5A963FB0365294C8(1);
		}
		else
		{
			unk_0x5A963FB0365294C8(2);
		}
	}
}

void func_22(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_9(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_9(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_9(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_9(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_9(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_23()
{
	if (unk_0x83D8570832F172A7(Global_4C0B))
	{
		func_24();
		if (Global_4C1D == 1)
		{
			if (Global_4C12)
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_5174)
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 20))
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_4C12)
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_1CBC, 17);
		}
		else
		{
			func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_1CBC, 17);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 20))
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_4C12)
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_4BE5)
				{
					func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_24()
{
	if (Global_12B4E)
	{
		func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0674E58A79778E99(&Global_1CBC, 17);
	}
}

int func_25(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_42(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_41();
	if (iParam8 == 1)
	{
		Global_5151 = 1;
	}
	else
	{
		Global_5151 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_39(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_26(&uVar0, &uVar1, iParam7, bParam11);
}

int func_26(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_5146 = 0;
	if (Global_5145 == 0 || Global_5147 == 2)
	{
		if (Global_5145 != 0)
		{
			if (iParam2 > Global_5147)
			{
				if (bParam3 == 0)
				{
					unk_0x5CEB4DB888A62073(false);
					Global_4C1E.f_1 = 3;
					Global_5145 = 0;
					Global_5146 = 1;
					Global_517A = 0;
					Global_5141 = 0;
					Global_5142 = 0;
				}
				else
				{
					func_109();
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
		if (func_38(8, 4294967295))
		{
			return 0;
		}
		Global_5191 = { Global_518B };
		func_37();
		Global_4E7E = { Global_4F23 };
		Global_514B = Global_514C;
		Global_5152 = Global_5153;
		Global_280002 = Global_280001;
		Global_5154 = { Global_5164 };
		Global_514D = Global_514E;
		Global_5523 = Global_5524;
		Global_552B = { Global_5531 };
		Global_5529 = Global_552A;
		Global_5525 = Global_5526;
		Global_5527 = Global_5528;
		Global_4FC8.f_170 = Global_5520;
		Global_4FC8.f_171 = Global_5521;
		Global_4FC8.f_172 = Global_5522;
		Global_5141 = Global_5142;
		Global_5143 = Global_5144;
		if (Global_5247 == 0)
		{
			Global_51DF[0 /*6*/] = { Global_51F9[0 /*6*/] };
			Global_51DF[1 /*6*/] = { Global_51F9[1 /*6*/] };
			Global_5213[0 /*6*/] = { Global_522D[0 /*6*/] };
			Global_5213[1 /*6*/] = { Global_522D[1 /*6*/] };
			Global_51EC[0 /*6*/] = { Global_5206[0 /*6*/] };
			Global_51EC[1 /*6*/] = { Global_5206[1 /*6*/] };
			Global_5220[0 /*6*/] = { Global_523A[0 /*6*/] };
			Global_5220[1 /*6*/] = { Global_523A[1 /*6*/] };
		}
		if (Global_514B)
		{
			unk_0x0674E58A79778E99(&Global_1CBC, 20);
			unk_0x0674E58A79778E99(&Global_1CBD, 17);
			unk_0x0674E58A79778E99(&Global_1CBE, 0);
			if (bParam3)
			{
				func_30();
				if (Global_1FE1[Global_4C1E /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam2 == 13)
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
				if (func_29())
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
					if (Global_5247 == 0)
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
			}
			if (func_28())
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
			}
			func_27();
			Global_514F = bParam3;
		}
		Global_5147 = iParam2;
		if (Global_5141 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_5141)
			{
				StringCopy(&(Global_4FC8.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_4FC8.f_BB[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_4CD7 = 0;
		func_53();
		return 1;
	}
	if (Global_5145 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_5147 || iParam2 == Global_5147)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_109();
	}
	return 0;
}

void func_27()
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

int func_28()
{
	if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_29()
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

void func_30()
{
	if (func_14(14))
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
		Global_4C1E = func_31();
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

var func_31()
{
	func_32();
	return Global_1B416.f_936.f_21B.f_10E1;
}

void func_32()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_35(Global_1B416.f_936.f_21B.f_10E1) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_34(unk_0x16F2683693E537C9());
			if (func_33(iVar0) && (!func_14(14) || Global_1AFFD))
			{
				if (Global_1B416.f_936.f_21B.f_10E1 != iVar0 && func_33(Global_1B416.f_936.f_21B.f_10E1))
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

bool func_33(int iParam0)
{
	return iParam0 < 3;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)
{
	if (func_33(iParam0))
	{
		return func_36(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_36(int iParam0)
{
	return Global_706[iParam0 /*29*/];
}

void func_37()
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

bool func_38(int iParam0, int iParam1)
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

void func_39(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_40(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_40(var uParam0)
{
	Global_5142 = uParam0;
	Global_514C = 1;
	Global_5153 = 0;
	Global_514E = 0;
	Global_5524 = 0;
	Global_552A = 0;
	Global_280001 = 0;
}

void func_41()
{
	Global_5175 = 0;
	Global_514C = 1;
	Global_5153 = 0;
	Global_514E = 0;
	Global_5524 = 0;
	Global_5526 = 0;
	Global_5153 = 0;
	Global_552A = 0;
	Global_514A = 0;
	Global_5179 = 0;
	Global_517B = 0;
	Global_280001 = 0;
}

void func_42(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_43(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_42(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_41();
	if (iParam7 == 1)
	{
		Global_5151 = 1;
	}
	else
	{
		Global_5151 = 0;
	}
	func_40(uParam0);
	return func_26(uParam4, uParam5, iParam6, bParam10);
}

var func_44(var uParam0)
{
	return uParam0;
}

void func_45()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Menu_Accept", &Global_4C13, true);
		func_46();
	}
}

void func_46()
{
	if (func_19())
	{
		unk_0x5A963FB0365294C8(5);
	}
}

void func_47()
{
	if (func_48())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				if (!Global_4BE5)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Global_1CBC, 11))
					{
						func_61();
					}
				}
			}
		}
	}
}

int func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		if (Global_4C1E.f_1 == 10 || Global_4C1E.f_1 == 9)
		{
			if (Global_4BE5 == 0)
			{
				if (Global_1A0F != 128)
				{
					if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
					{
						if (Global_5145 != 2)
						{
						}
					}
				}
			}
		}
		if (func_14(14))
		{
			return 0;
		}
		if (unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
		{
			return 0;
		}
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (!unk_0x00295B14470935CE())
			{
				if (unk_0x70EED0761B82965E(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x5EB102898326C705(unk_0x16F2683693E537C9()) || unk_0xBADF5264209B7544(unk_0x16F2683693E537C9())) || unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62())) || unk_0x4FB00DDF9C0D8114(unk_0x16F2683693E537C9()))
		{
			return 0;
		}
		if (Global_1B05E)
		{
			return 0;
		}
	}
	if (Global_12B4E)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x00295B14470935CE()))
	{
		iVar2 = 1;
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar3 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if ((((((((unk_0x7D8B2A8F9EA82DB7(unk_0x134B62B726CEC8E6(iVar3)) || unk_0xAD09C9A4B56FA133(unk_0x134B62B726CEC8E6(iVar3))) || unk_0xD1CC995EE5EB1EC1(unk_0x134B62B726CEC8E6(iVar3))) || unk_0x134B62B726CEC8E6(iVar3) == joaat("seashark")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("seashark2")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("rhino")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("submersible")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("submersible2")) || unk_0x134B62B726CEC8E6(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4127DB || iVar2 == 1)
	{
		if (unk_0x8A22C4C08282BF26(joaat("apptrackify")) > 0 || Global_1B416.f_36DE.f_59)
		{
			if (unk_0x8A22C4C08282BF26(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xBFC0798A6E3417F9(iParam0, iParam1) || (iParam2 == 1 && unk_0xD245978525608929(iParam0, iParam1)))
	{
		if (unk_0x0EFF6B4415DAF4A1())
		{
			if (unk_0xDAC65F45B0B2D176() == 0 || (unk_0x4FD68D5821EE3E19() && unk_0x91E3F625EF57450D(2)))
			{
				return 0;
			}
		}
		if (unk_0x798A3F1296751F46() || unk_0xE57E602827E07C9D())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

void func_51(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_52()
{
	if (func_48())
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				if (!Global_4BE5)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_53()
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

int func_54()
{
	if (unk_0x8CD06866876216F2())
	{
		iLocal_91 = unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iLocal_90);
	}
	else
	{
		iLocal_88 = unk_0x1C0640BA9A7327B3();
		iLocal_91 = (iLocal_88 - iLocal_87);
	}
	return 0;
}

void func_55(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_58())
		{
			func_56(1, 1);
		}
		else
		{
			func_56(0, 0);
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
	if (!func_28())
	{
		Global_4C1E.f_1 = 3;
	}
}

void func_56(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_57(0))
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

int func_57(int iParam0)
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

bool func_58()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 5);
}

bool func_59()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 19);
}

void func_60()
{
	if (func_49(2, Global_4C07, 0))
	{
		if (Global_5538 == 0)
		{
			if (Global_514B)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBD, 17))
				{
				}
				else
				{
					unk_0x5CFF55224BEC1BDF();
				}
			}
		}
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_62() && unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_12B4E)
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && iVar1 == 0)
		{
			iVar2 = unk_0x98F1B512A2CC07C5(unk_0x16F2683693E537C9(), 0);
			if (Global_12B4E)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0xDCCE25EA1C1D1F76(unk_0x16F2683693E537C9()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0xDCCE25EA1C1D1F76(unk_0x16F2683693E537C9()))
			{
				iVar0 = 1;
			}
			if (!Global_4BE5)
			{
				if (Global_1A0F != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
						{
							if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
							{
							}
							else
							{
								if (Global_12B4E)
								{
									unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 244, false);
									unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 243, false);
									unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 242, false);
								}
								unk_0x5D96D8530B3D0904(&Global_1CBC, 11);
								unk_0x8D4C354BB8991817(unk_0x16F2683693E537C9(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_62()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x5A0033B025D45F1B();
	iVar1 = unk_0xA4FD7964FEE91ED8(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_63()
{
	if (Global_12B4E == 0)
	{
		func_60();
	}
	if (iLocal_33 == 1)
	{
		func_55(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_553A = 1;
		if (func_50(Global_1A0F, Global_4C1E) == 0)
		{
			func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_51D3, "CELL_300", "CELL_195", "CELL_195", 0);
			func_51(Global_4C0B, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
		}
		else
		{
			func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(4), -1f, -1f, &Global_51D3, &(Global_706[Global_1A0F /*29*/].f_7), &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_3), 0);
			func_51(Global_4C0B, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
		}
		Global_4BD4 = 0.2f;
		if (Global_4C12)
		{
			func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0674E58A79778E99(&Global_1CBC, 17);
	}
	if (Global_517A == 1)
	{
		if (Global_4C1E.f_1 < 6)
		{
			Global_517A = 0;
		}
		else
		{
			if (Global_4BE2 == 0)
			{
				if (func_49(2, Global_4BFF, 0))
				{
					Global_4BD4 = 0.19f;
					Global_517A = 0;
					func_45();
					Global_553F = 1;
					iLocal_32 = 1;
				}
			}
			if (func_49(2, Global_4C00, 0))
			{
				Global_4BD4 = 0.19f;
				Global_517A = 0;
				func_45();
				Global_553F = 2;
			}
		}
	}
	else if (Global_553F == 2)
	{
		if (Global_5146 == 0)
		{
			unk_0x5CEB4DB888A62073(false);
			Global_5145 = 6;
		}
		func_15();
		Global_4C1E.f_1 = Global_4C20;
		func_8();
	}
	else if (!unk_0x1EE04CEA36EF313B())
	{
		iLocal_32 = 0;
		unk_0x5CEB4DB888A62073(false);
		Global_5145 = 6;
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Hang_Up", &Global_4C13, true);
		func_15();
		Global_4C1E.f_1 = Global_4C20;
		func_8();
	}
}

void func_64()
{
	if (Global_4CD8 == 1)
	{
		if (unk_0x1EE04CEA36EF313B())
		{
			if (unk_0x44BE52A7BCBABEE2())
			{
				Global_4CD8 = 0;
			}
		}
		if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			Global_4CD8 = 0;
			unk_0x5CEB4DB888A62073(false);
			Global_5145 = 6;
		}
	}
	if (SYSTEM::TIMERB() > iLocal_35)
	{
		if (Global_4CD8 == 1)
		{
			Global_4CD8 = 0;
		}
	}
	if (SYSTEM::TIMERA() < Global_5542 || Global_4CD8 == 1)
	{
		if (func_49(2, Global_4BFE, 0))
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 20))
					{
					}
					else
					{
						Global_4C08 = 1;
						func_45();
						unk_0x5CEB4DB888A62073(false);
						Global_5176 = 1;
						Global_5145 = 6;
						unk_0x0674E58A79778E99(&Global_1CBC, 27);
						if (!Global_5150)
						{
							unk_0x5D96D8530B3D0904(&Global_1CBD, 5);
						}
						func_15();
						Global_4C1E.f_1 = Global_4C20;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 27);
		Global_5145 = 4;
		Global_517E = 0;
		func_67();
		func_66();
		if (!Global_5152)
		{
			if (Global_553E == 0)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_1CBE, 5))
				{
					unk_0x871665896C890C7F();
				}
				unk_0x0674E58A79778E99(&Global_1CBE, 5);
			}
			else
			{
				unk_0x807CD22F2C5F12E8(Global_4FC8.f_170, Global_4FC8.f_171);
			}
		}
		func_65();
	}
}

void func_65()
{
	if (unk_0x8CD06866876216F2())
	{
		iLocal_90 = unk_0x2B6E0A53779D29EA();
	}
	else
	{
		iLocal_87 = unk_0x1C0640BA9A7327B3();
	}
}

void func_66()
{
	if (Global_5152)
	{
		if (Global_12B4E)
		{
			if (unk_0x83D8570832F172A7(Global_4C0B))
			{
				if (!unk_0x0EFF6B4415DAF4A1())
				{
					func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					unk_0x5D96D8530B3D0904(&(Global_26B66F.f_6C4), 15);
				}
			}
		}
	}
}

void func_67()
{
	if (unk_0x83D8570832F172A7(Global_4C0B))
	{
		if (!Global_514D)
		{
			func_119(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_119(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_1CBC, 17);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 20))
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_4C12)
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_4BE5)
				{
					func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_119(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_5152)
			{
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(4);
				unk_0x3CAEA85DA607305E(0);
				unk_0x3CAEA85DA607305E(2);
				unk_0x7ACC3006A87F8B39("CELL_CONDFON");
				unk_0xD06AC7C87A34A6AD(&Global_5154);
				unk_0x779B34565F4D71B1();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				unk_0x7E60D21B163E9D56();
			}
			else if (func_50(Global_1A0F, Global_4C1E) == 0)
			{
				func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_119(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), "CELL_219", &(Global_706[Global_1A0F /*29*/].f_3), 0);
			}
		}
		func_51(Global_4C0B, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
	}
}

void func_68()
{
	if (unk_0x8CD06866876216F2())
	{
		iLocal_92 = unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iLocal_78);
		iLocal_93 = unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iLocal_81);
	}
	else
	{
		iLocal_77 = unk_0x1C0640BA9A7327B3();
		iLocal_92 = (iLocal_77 - iLocal_76);
		iLocal_80 = unk_0x1C0640BA9A7327B3();
		iLocal_93 = (iLocal_80 - iLocal_79);
	}
	if (Global_5174 == 1)
	{
		if (func_48())
		{
			if (iLocal_92 > 4000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 14))
				{
					if (unk_0x83D8570832F172A7(Global_4C0B))
					{
						func_45();
						Global_4C1D = 2;
						func_67();
						func_66();
					}
				}
			}
		}
		else if (iLocal_92 > 2000)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 14))
			{
				if (unk_0x83D8570832F172A7(Global_4C0B))
				{
					func_45();
					Global_4C1D = 2;
					func_67();
					func_66();
				}
			}
		}
	}
	if (iLocal_93 > 10000)
	{
		Global_4C1D = 3;
	}
	if (Global_4C1D == 2)
	{
		iLocal_30 = 0;
		Global_5145 = 4;
		func_61();
		Global_517E = 0;
		func_67();
		func_66();
		if (!Global_5152)
		{
			if (Global_553E == 0)
			{
				unk_0x871665896C890C7F();
			}
			else
			{
				unk_0x807CD22F2C5F12E8(Global_4FC8.f_170, Global_4FC8.f_171);
			}
		}
		func_65();
		Global_553D = 0;
	}
	if (Global_5174 == 0)
	{
		if (Global_4C1D == 3)
		{
			if (Global_5152)
			{
				func_70();
				func_55(0);
			}
			else
			{
				func_69();
				Global_553D = 1;
				unk_0x5CEB4DB888A62073(false);
				Global_5145 = 6;
				func_15();
				Global_4C1E.f_1 = Global_4C20;
				func_8();
			}
		}
	}
	else if (Global_4C1D == 3)
	{
	}
}

void func_69()
{
}

void func_70()
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
		else if (func_73(Global_26D039.f_14))
		{
			if (unk_0x04A104F429E6CBB0(&(Global_26D039.f_14)))
			{
				if (!unk_0xD9AF1D6157682D28(&(Global_26D039.f_14)))
				{
					func_71();
				}
			}
		}
		else
		{
			func_71();
		}
	}
	else
	{
		func_71();
	}
	if (Global_26D039.f_25)
	{
		func_55(0);
	}
	Global_26D039.f_25 = 0;
	Global_26D039.f_3 = 0;
}

void func_71()
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
	func_72(&(Global_26D039.f_14));
}

void func_72(var uParam0)
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

bool func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x83F946529771616E(&uParam0, 13);
}

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_75 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_75 < Global_5141)
	{
		func_91();
		func_90();
		func_89();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_42 = { Global_4FC8.f_6[iLocal_75 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_4CD9[iVar2 /*6*/] = { Global_4FC8.f_6[iLocal_75 /*6*/] };
			StringConCat(&(Global_4CD9[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_4CD9[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_4CD9[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (unk_0xEF07223F00EBE9C9(&cLocal_38))
			{
				StringCopy(&cLocal_46, unk_0x19C9F30A7697B43C(&cLocal_38), 64);
				iVar3 = func_88(iVar13);
				iVar4 = func_87(iVar13);
				uVar5 = func_85(iVar13);
				uLocal_67 = func_84();
				uLocal_68 = func_83();
				uLocal_69 = func_82();
				uVar6 = func_81(iVar13);
				uVar7 = func_80(iVar13);
				uVar8 = func_79(iVar13);
				uVar12 = func_78(iVar13);
				uVar9 = func_77(iVar13);
				uVar10 = func_76(iVar13);
				uVar11 = func_75(iVar13);
				if (unk_0xEF07223F00EBE9C9(&(Global_4CD9[iVar2 /*6*/])))
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_4CD9[iVar2 /*6*/]), &(Global_4FC8.f_BB[iLocal_75 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						unk_0x76C580A465887CCA(iVar3, &cLocal_46, &(Global_4CD9[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (unk_0xEF07223F00EBE9C9(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0x19C9F30A7697B43C(&cLocal_42), 64);
				iVar3 = func_88(0);
				iVar4 = func_87(0);
				uVar5 = func_85(0);
				uLocal_67 = func_84();
				uLocal_68 = func_83();
				uLocal_69 = func_82();
				uVar6 = func_81(0);
				uVar7 = func_80(0);
				uVar8 = func_79(0);
				uVar12 = func_78(0);
				uVar9 = func_77(0);
				uVar10 = func_76(0);
				uVar11 = func_75(0);
				unk_0x76C580A465887CCA(iVar3, &cLocal_46, &(Global_4FC8.f_6[iLocal_75 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_4CD9[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_4CD9[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_75++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_514B == 0)
	{
		unk_0x3EEE48172FD56471(uLocal_68);
		unk_0x28C8907966BB0A0C(uLocal_69);
		unk_0xD9BF6EB05EEE865F(Global_4FC8.f_170, Global_4FC8.f_171, Global_4FC8.f_172, uLocal_67);
		Global_5145 = 4;
	}
}

int func_75(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_70), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (unk_0x7F8A39872A07D2CE(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_76(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_70), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (unk_0x7F8A39872A07D2CE(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_70), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (unk_0x7F8A39872A07D2CE(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_70), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (unk_0x7F8A39872A07D2CE(sVar0, "0"))
	{
		return 1;
	}
	if (unk_0x7F8A39872A07D2CE(sVar0, "1"))
	{
		return 1;
	}
	if (unk_0x7F8A39872A07D2CE(sVar0, "2"))
	{
		return 2;
	}
	if (unk_0x7F8A39872A07D2CE(sVar0, "3"))
	{
		return 3;
	}
	if (unk_0x7F8A39872A07D2CE(sVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_79(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_70), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (unk_0x7F8A39872A07D2CE(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_70), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (unk_0x7F8A39872A07D2CE(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_70), iParam0 * 7, iParam0 * 7 + 1);
	if (unk_0x7F8A39872A07D2CE(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82()
{
	char* sVar0;
	
	sVar0 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_60), 2, 3);
	if (unk_0x7F8A39872A07D2CE(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_83()
{
	char* sVar0;
	
	sVar0 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_60), 1, 2);
	if (unk_0x7F8A39872A07D2CE(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_84()
{
	char* sVar0;
	
	sVar0 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_60), 0, 1);
	if (unk_0x7F8A39872A07D2CE(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_85(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_55), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_86(sVar0);
}

int func_86(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "z"))
	{
		return 4294967295;
	}
	return 4294967295;
}

int func_87(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_55), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_86(sVar0);
}

int func_88(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_55), iParam0 * 3, iParam0 * 3 + 1);
	return func_86(sVar0);
}

void func_89()
{
	cLocal_70 = { Global_4FC8.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0xEF07223F00EBE9C9(&cLocal_70))
	{
		sLocal_74 = unk_0x19C9F30A7697B43C(&cLocal_70);
		if (unk_0x2EBF5002C6B6A06C(sLocal_74))
		{
		}
	}
}

void func_90()
{
	cLocal_60 = { Global_4FC8.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0xEF07223F00EBE9C9(&cLocal_60))
	{
		sLocal_64 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_60), 0, 1);
		if (unk_0x2EBF5002C6B6A06C(sLocal_64))
		{
		}
		sLocal_65 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_60), 1, 2);
		if (unk_0x2EBF5002C6B6A06C(sLocal_65))
		{
		}
		sLocal_66 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_60), 2, 3);
		if (unk_0x2EBF5002C6B6A06C(sLocal_66))
		{
		}
	}
}

void func_91()
{
	cLocal_55 = { Global_4FC8.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0xEF07223F00EBE9C9(&cLocal_55))
	{
		sLocal_59 = unk_0x19C9F30A7697B43C(&cLocal_55);
		if (unk_0x2EBF5002C6B6A06C(sLocal_59))
		{
		}
	}
}

void func_92()
{
	func_93();
	unk_0x3EEE48172FD56471(uLocal_68);
	unk_0x28C8907966BB0A0C(uLocal_69);
	if (Global_5525)
	{
		unk_0x810A743FEA9C279F(Global_4FC8.f_170, Global_4FC8.f_171, Global_4FC8.f_172, uLocal_67);
		iLocal_36 = unk_0x1C0640BA9A7327B3();
	}
	else
	{
		unk_0xD9BF6EB05EEE865F(Global_4FC8.f_170, Global_4FC8.f_171, Global_4FC8.f_172, uLocal_67);
	}
	Global_5145 = 4;
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (unk_0x203AA5AD695C335D(&Global_5191))
	{
		if (unk_0x7F8A39872A07D2CE(&Global_5191, "CT_AUD"))
		{
			Global_280002 = 1;
		}
		iVar13 = 0;
		if (unk_0x33A494591F2C1975() || unk_0xDC30EF462887322E())
		{
			if (Global_1801E4 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_12B4E || func_101())
		{
			if (Global_1801E4 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_99())
		{
			iVar14 = 1;
		}
		if (func_98(unk_0x12AB0310C2281427(&Global_5191)))
		{
			iVar14 = 0;
			Global_280002 = 0;
			iVar13 = 1;
		}
		if (((Global_5147 < 5 || Global_5147 == 10) || Global_5147 == 12) || Global_5147 == 13)
		{
			if ((iVar14 == 1 || Global_280002 == 1) || iVar13 == 2)
			{
				unk_0xD7992BEF7A9D109E(&Global_5191, 7);
				while (!unk_0x67C1D9E5B91B2E37(7))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				unk_0x23249A21DED9ADF1(&Global_5191, 15);
				while (!unk_0x67C1D9E5B91B2E37(15))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_280002 == 1) || iVar13 == 2)
		{
			unk_0xD7992BEF7A9D109E(&Global_5191, 6);
			while (!unk_0x67C1D9E5B91B2E37(6))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			unk_0x23249A21DED9ADF1(&Global_5191, 14);
			while (!unk_0x67C1D9E5B91B2E37(14))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	unk_0x354A7938830469D2();
	func_97();
	func_96();
	func_95();
	func_94();
	Global_5537 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_42 = { Global_4FC8 };
		StringConCat(&cLocal_42, "A", 24);
		Global_4CD9[iVar2 /*6*/] = { Global_4FC8 };
		StringConCat(&(Global_4CD9[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_4CD9[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_4CD9[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (unk_0xEF07223F00EBE9C9(&cLocal_38))
		{
			StringCopy(&cLocal_46, unk_0x19C9F30A7697B43C(&cLocal_38), 64);
			iVar3 = func_88(iVar2);
			if (iVar3 == 9)
			{
				if (Global_412781 == 0)
				{
				}
			}
			iVar4 = func_87(iVar2);
			uVar5 = func_85(iVar2);
			uLocal_67 = func_84();
			uLocal_68 = func_83();
			uLocal_69 = func_82();
			uVar6 = func_81(iVar2);
			uVar7 = func_80(iVar2);
			uVar8 = func_79(iVar2);
			uVar12 = func_78(iVar2);
			uVar9 = func_77(iVar2);
			uVar10 = func_76(iVar2);
			uVar11 = func_75(iVar2);
			if (unk_0xEF07223F00EBE9C9(&(Global_4CD9[iVar2 /*6*/])))
			{
				if (Global_5523 == 0 && Global_5529 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x76C580A465887CCA(iVar3, &cLocal_46, &(Global_4CD9[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (unk_0x7F8A39872A07D2CE(&(Global_4CD9[iVar2 /*6*/]), &Global_552B))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					unk_0x76C580A465887CCA(iVar3, &cLocal_46, &(Global_4CD9[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_5537 = iVar2;
					if (Global_5529 == 1)
					{
						Global_5529 = 0;
					}
				}
			}
			else if (Global_5529 == 0 && Global_5523 == 0)
			{
				unk_0x76C580A465887CCA(iVar3, &cLocal_46, &cLocal_46, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (unk_0xEF07223F00EBE9C9(&cLocal_42))
			{
				StringCopy(&cLocal_46, unk_0x19C9F30A7697B43C(&cLocal_42), 64);
				iVar3 = func_88(iVar2);
				iVar4 = func_87(iVar2);
				uVar5 = func_85(iVar2);
				uLocal_67 = func_84();
				uLocal_68 = func_83();
				uLocal_69 = func_82();
				uVar6 = func_81(iVar2);
				uVar7 = func_80(iVar2);
				uVar8 = func_79(iVar2);
				uVar12 = func_78(iVar2);
				uVar9 = func_77(iVar2);
				uVar10 = func_76(iVar2);
				uVar11 = func_75(iVar2);
				unk_0x76C580A465887CCA(iVar3, &cLocal_46, &Global_4FC8, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_4E7E[iVar0 /*10*/].f_7 == 1)
		{
			if (unk_0xC844350D5D58C99A(Global_4E7E[iVar0 /*10*/]) || Global_4E7E[iVar0 /*10*/] == 0)
			{
				unk_0x0AB209C11DAA269B(iVar0, Global_4E7E[iVar0 /*10*/], &(Global_4E7E[iVar0 /*10*/].f_1));
			}
			if (Global_4E7E.f_A1 == iVar0)
			{
				if ((Global_4E7E.f_A2 != 0f && Global_4E7E.f_A2.f_1 != 0f) && Global_4E7E.f_A2.f_2 != 0f)
				{
					SYSTEM::WAIT(0);
					unk_0x0E605A18BDCE8A6D(Global_4E7E.f_A1, Global_4E7E.f_A2);
				}
			}
		}
		iVar0++;
	}
	if (Global_412781 == 1)
	{
		Global_412781 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4126CC[iVar0 /*9*/].f_7 == 1)
			{
				if (unk_0xC844350D5D58C99A(Global_4126CC[iVar0 /*9*/]) || Global_4126CC[iVar0 /*9*/] == 0)
				{
					unk_0x0AB209C11DAA269B(Global_4126CC[iVar0 /*9*/].f_8, Global_4126CC[iVar0 /*9*/], &(Global_4126CC[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_95()
{
	cLocal_70 = { Global_4FC8 };
	StringConCat(&cLocal_70, "LF", 24);
	if (unk_0xEF07223F00EBE9C9(&cLocal_70))
	{
		sLocal_74 = unk_0x19C9F30A7697B43C(&cLocal_70);
		if (unk_0x2EBF5002C6B6A06C(sLocal_74))
		{
		}
	}
}

void func_96()
{
	cLocal_60 = { Global_4FC8 };
	StringConCat(&cLocal_60, "IF", 24);
	if (unk_0xEF07223F00EBE9C9(&cLocal_60))
	{
		sLocal_64 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_60), 0, 1);
		if (unk_0x2EBF5002C6B6A06C(sLocal_64))
		{
		}
		sLocal_65 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_60), 1, 2);
		if (unk_0x2EBF5002C6B6A06C(sLocal_65))
		{
		}
		sLocal_66 = unk_0xA739D71DFFCCC22C(unk_0x19C9F30A7697B43C(&cLocal_60), 2, 3);
		if (unk_0x2EBF5002C6B6A06C(sLocal_66))
		{
		}
	}
}

void func_97()
{
	cLocal_55 = { Global_4FC8 };
	StringConCat(&cLocal_55, "SL", 24);
	if (unk_0xEF07223F00EBE9C9(&cLocal_55))
	{
		sLocal_59 = unk_0x19C9F30A7697B43C(&cLocal_55);
		if (unk_0x2EBF5002C6B6A06C(sLocal_59))
		{
		}
	}
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 2983435581:
		case 3905238264:
		case 2230526984:
		case 1151576899:
		case 3933974410:
		case 677852396:
		case 1017913414:
		case 1994430427:
		case 1430620518:
		case 1883599394:
		case 1146168957:
		case 785850502:
		case 1566303118:
		case 1220013368:
		case 71115730:
		case 4043113159:
		case 4051914968:
		case 2877249189:
		case 3943383246:
		case 1854373416:
		case 2541132202:
		case 3941018485:
		case 2411344370:
		case 4248224431:
		case 1260190997:
		case 1080008561:
		case 1151572586:
		case 964109535:
		case 3858056843:
		case 659972380:
		case 2120484290:
		case 1439733926:
		case 26437732:
		case 303339033:
		case 2088730730:
		case 2523469160:
		case 2301918294:
		case 2924151779:
		case 3027015765:
		case 60077066:
		case 1821448936:
		case 2043251532:
		case 1314391445:
		case 3027020759:
		case 1507036282:
		case 214936528:
		case 1071832486:
		case 379745124:
		case 409276020:
		case 3799881763:
		case 3911255984:
		case 2485681243:
		case 4065905873:
		case 1399593776:
		case 2702778705:
		case 2119072113:
		case 2289245343:
		case 3855541244:
		case 101634771:
		case 4287199792:
		case 2718169666:
		case 3738000079:
		case 510894735:
		case 4198193098:
		case 1931750438:
		case 962651001:
		case 3489151493:
		case 2898493000:
		case 188331744:
		case 3627821566:
		case 1027410289:
		case 4104900460:
		case 5422313:
		case 3703213100:
		case 1414208944:
		case 3637763303:
		case 365230037:
		case 2786176562:
		case 1751613877:
		case 502358067:
		case 3593093778:
		case 3907110732:
		case 3952024695:
		case 3844940526:
		case 2173353443:
		case 1192484316:
		case 3455239662:
		case 700260812:
		case 3161110184:
			return 1;
		
		default:
	}
	return 0;
}

int func_99()
{
	if (Global_28006E)
	{
		if (func_14(0))
		{
			if (Global_300000 || func_100(0))
			{
				return 1;
			}
		}
	}
	if (Global_28006D)
	{
		if (func_14(0))
		{
			if (Global_380000 || func_100(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_100(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_12C46, 0);
}

var func_101()
{
	return Global_140856;
}

void func_102()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0x33A494591F2C1975() || unk_0xDC30EF462887322E())
	{
		if (Global_1801E4 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_12B4E)
	{
		if (Global_1801E4 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_99())
	{
		iVar1 = 1;
	}
	if (unk_0x203AA5AD695C335D(&Global_5191))
	{
		if (unk_0x7F8A39872A07D2CE(&Global_5191, "CT_AUD"))
		{
			Global_280002 = 1;
		}
	}
	if (func_98(unk_0x12AB0310C2281427(&Global_5191)))
	{
		iVar1 = 0;
		Global_280002 = 0;
		iVar0 = 1;
	}
	if (((Global_5147 < 5 || Global_5147 == 10) || Global_5147 == 12) || Global_5147 == 13)
	{
		if ((iVar1 == 1 || Global_280002 == 1) || iVar0 == 2)
		{
			unk_0xD7992BEF7A9D109E(&Global_5191, 7);
			while (!unk_0x67C1D9E5B91B2E37(7))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			unk_0x23249A21DED9ADF1(&Global_5191, 15);
			while (!unk_0x67C1D9E5B91B2E37(15))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_280002 == 1) || iVar0 == 2)
	{
		unk_0xD7992BEF7A9D109E(&Global_5191, 6);
		while (!unk_0x67C1D9E5B91B2E37(6))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		unk_0x23249A21DED9ADF1(&Global_5191, 14);
		while (!unk_0x67C1D9E5B91B2E37(14))
		{
			SYSTEM::WAIT(0);
		}
	}
	unk_0x354A7938830469D2();
	func_94();
}

void func_103()
{
	while (Global_4C0D == 1 && unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		SYSTEM::WAIT(0);
	}
	Global_4C0D = 0;
	if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 20))
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 1);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBD, 1);
	}
	Global_4C0E = 0;
	if (Global_5141 == 0)
	{
		if (!Global_5152)
		{
			func_93();
		}
	}
	else
	{
		func_74();
	}
	Global_4CD8 = 0;
	if (Global_514F)
	{
		if (Global_553E == 0)
		{
			if (Global_5152 == 0)
			{
				iLocal_34 = 5000;
				unk_0x18D4904EFBCA423F(Global_4FC8.f_170, Global_4FC8.f_171);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_4CD8 = 1;
		SYSTEM::SETTIMERB(0);
		while ((Global_4CD8 == 1 && Global_5145 == 1) && SYSTEM::TIMERB() < iLocal_34)
		{
			SYSTEM::WAIT(0);
			if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				Global_4CD8 = 0;
				unk_0x5CEB4DB888A62073(false);
				Global_5145 = 6;
			}
			if (unk_0x1EE04CEA36EF313B())
			{
				if (unk_0x44BE52A7BCBABEE2())
				{
					Global_4CD8 = 0;
				}
			}
		}
		if (SYSTEM::TIMERB() > iLocal_34)
		{
		}
		if (Global_5145 != 1)
		{
		}
		if (Global_4CD8 == 0)
		{
		}
	}
	Global_4CD8 = 0;
	if (((Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0) || Global_5145 != 1) || Global_4BFC == 1)
	{
		unk_0x5CEB4DB888A62073(false);
		Global_5145 = 6;
	}
	else
	{
		if (Global_514D)
		{
			Global_553F = 0;
			iLocal_32 = 0;
		}
		if (Global_514F == 0)
		{
			if (Global_5178 == 0)
			{
				Global_4C20 = Global_4C1E.f_1;
				Global_5178 = 1;
			}
			iLocal_30 = 0;
			if (Global_553E == 0)
			{
				unk_0x18D4904EFBCA423F(Global_4FC8.f_170, Global_4FC8.f_171);
				SYSTEM::WAIT(0);
				Global_5145 = 3;
				Global_4CD8 = 1;
				SYSTEM::SETTIMERB(0);
				unk_0x5D96D8530B3D0904(&Global_1CBC, 27);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				Global_4CD8 = 0;
				Global_5145 = 4;
			}
			Global_4C1D = 0;
			if (Global_5150 == 1)
			{
				if (Global_4C1E.f_1 == 10)
				{
				}
				if (!Global_4C1E.f_1 == 9)
				{
					if (Global_4C1E.f_1 > 4)
					{
						if (Global_4C0D == 0)
						{
							Global_4C1E.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_4C1E.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_4C1E.f_1 == 4)
				{
					SYSTEM::WAIT(0);
					if (Global_4CD8 == 1)
					{
						if (unk_0x1EE04CEA36EF313B())
						{
							if (unk_0x44BE52A7BCBABEE2())
							{
								Global_4CD8 = 0;
							}
						}
					}
				}
				if (Global_4C1E.f_1 == 6)
				{
				}
				if (Global_4C1E.f_1 == 10)
				{
				}
				if (Global_4C1E.f_1 == 3)
				{
					unk_0x5CEB4DB888A62073(false);
					Global_5145 = 6;
					Global_4C0E = 1;
					return;
				}
				Global_4C1E.f_1 = 9;
				func_8();
			}
			if (unk_0x8CD06866876216F2())
			{
				iLocal_84 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				iLocal_82 = unk_0x1C0640BA9A7327B3();
			}
			while (Global_4C1E.f_1 != 9 && Global_4C0D == 0)
			{
				SYSTEM::WAIT(0);
				if (Global_4CD8 == 1)
				{
					if (unk_0x1EE04CEA36EF313B())
					{
						if (unk_0x44BE52A7BCBABEE2())
						{
							Global_4CD8 = 0;
						}
					}
				}
				if (unk_0x8CD06866876216F2())
				{
					iLocal_91 = unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iLocal_84);
				}
				else
				{
					iLocal_83 = unk_0x1C0640BA9A7327B3();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 15000)
					{
						Global_553D = 1;
						Global_4C0D = 1;
					}
				}
			}
			if (!unk_0xEAE0D21A50E6C7F4(Global_1CBC, 11))
			{
				if (func_48() == 0)
				{
					func_61();
				}
			}
			if (Global_4C0D == 0)
			{
				if (!Global_553E == 0)
				{
					Global_517E = 0;
					func_67();
					func_66();
					if (!Global_5152)
					{
						if (Global_553E == 0)
						{
							unk_0x871665896C890C7F();
						}
						else
						{
							unk_0x807CD22F2C5F12E8(Global_4FC8.f_170, Global_4FC8.f_171);
						}
					}
					func_65();
				}
			}
			else
			{
				func_104();
				Global_4C0E = 1;
			}
		}
		else
		{
			Global_4C1D = 1;
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if (Global_4C1E.f_1 == 3)
					{
					}
				}
				else
				{
					unk_0x0674E58A79778E99(&Global_1CBD, 21);
				}
			}
			if (Global_5178 == 0)
			{
				Global_4C20 = Global_4C1E.f_1;
				Global_5178 = 1;
			}
			if (Global_4C1E.f_1 == 3)
			{
				Global_4C1E.f_1 = 4;
			}
			else
			{
				while (Global_4C1E.f_1 == 4)
				{
					SYSTEM::WAIT(0);
				}
				if (Global_4C1E.f_1 == 6)
				{
				}
				Global_4C1E.f_1 = 9;
				func_8();
			}
			if (unk_0x8CD06866876216F2())
			{
				iLocal_84 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				iLocal_82 = unk_0x1C0640BA9A7327B3();
			}
			while (Global_4C1E.f_1 != 9 && Global_4C0D == 0)
			{
				SYSTEM::WAIT(0);
				if (unk_0x8CD06866876216F2())
				{
					iLocal_91 = unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), iLocal_84);
				}
				else
				{
					iLocal_83 = unk_0x1C0640BA9A7327B3();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 20000)
					{
						Global_553D = 1;
						Global_4C0D = 1;
						unk_0x0674E58A79778E99(&Global_1CBD, 21);
					}
				}
			}
			if (Global_4C0D == 0)
			{
				Global_5145 = 2;
			}
			else
			{
				func_104();
				Global_4C0E = 1;
			}
			if (unk_0x8CD06866876216F2())
			{
				iLocal_78 = unk_0x2B6E0A53779D29EA();
				iLocal_81 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				iLocal_76 = unk_0x1C0640BA9A7327B3();
				iLocal_79 = unk_0x1C0640BA9A7327B3();
			}
		}
	}
}

void func_104()
{
	Global_4CD7 = 0;
	func_109();
}

void func_105()
{
	float fVar0;
	
	fVar0 = func_106(Global_4BEF[Global_4BE7 /*3*/], Global_4BE8[Global_4BE7 /*3*/], Global_4BF6, Global_4BD9, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_553B == 0)
		{
			unk_0xBFE31971E49FA500(true);
		}
		iLocal_32 = 0;
	}
}

float func_106(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4127DC == 0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 14) && Global_4C1E.f_1 < 4)
		{
			unk_0x1CFAC524932A967E(&Var0);
			if (Global_4BEF[Global_4BE7 /*3*/].f_1 == Var0.f_1)
			{
				Global_4127DC = 1;
			}
		}
	}
	if (func_48() && Global_4127DC == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x1C0640BA9A7327B3();
	}
	fVar1 = func_108((SYSTEM::TO_FLOAT((unk_0x1C0640BA9A7327B3() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = SYSTEM::SIN((fVar1 * 90f));
		}
		Global_4BD6 = { func_107(vParam0, vParam1, fVar2) };
		Global_4BD9 = { func_107(vParam2, vParam3, fVar2) };
	}
	else
	{
		Global_4BD6 = { vParam1 };
		Global_4BD9 = { vParam3 };
	}
	unk_0x39F06A2B18483C68(Global_4BD6);
	unk_0x44FE29702110D5C6(Global_4BD9, 0);
	return fVar1;
}

Vector3 func_107(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_108(float fParam0, float fParam1, float fParam2)
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

void func_109()
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

bool func_110()
{
	return unk_0xEAE0D21A50E6C7F4(Global_440000.f_372E4, 12);
}

bool func_111(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_42(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_112(sParam2, iParam3, 0);
}

int func_112(char* sParam0, int iParam1, bool bParam2)
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
					func_109();
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
		if (func_38(8, 4294967295))
		{
			return 0;
		}
		Global_5191 = { Global_518B };
		func_37();
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
				func_30();
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
				if (func_29())
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
			if (func_28())
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
			func_27();
			Global_514F = bParam2;
		}
		Global_5147 = iParam1;
		StringCopy(&Global_4FC8, sParam0, 24);
		Global_4CD7 = 0;
		func_53();
		func_113();
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
		func_109();
	}
	return 0;
}

void func_113()
{
	if (!func_114())
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

int func_114()
{
	if (!Global_40001.f_6DB6)
	{
		return 0;
	}
	if (!Global_12B4E)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_117())
	{
		return 0;
	}
	if (func_115(unk_0xD803B885F5E47A62()))
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

bool func_115(int iParam0)
{
	return func_116(iParam0, 20);
}

bool func_116(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_117()
{
	return 4294967295;
}

int func_118()
{
	if (Global_5145 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_119(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_9(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_9(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_9(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_9(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_9(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

