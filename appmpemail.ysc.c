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
	int iLocal_19[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	struct<16> Local_34 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_35[59];
	struct<16> Local_36[59];
	int iLocal_37 = 0;
	vector3 vLocal_38 = { 0f, 0f, 0f };
	vector3 vLocal_39 = { 0f, 0f, 0f };
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<314> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	unk_0xB57F88F0123F4C38();
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0)
	{
		func_61();
	}
	func_60();
	Global_556F = 0;
	Global_1B416.f_36DE[Global_4C1E /*20*/].f_12 = 0;
	Global_4CCF = 0;
	func_59();
	func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 8f, 3212836864, 3212836864, 3212836864, 3212836864);
	func_53();
	func_51();
	if (Global_4C1E.f_1 > 3)
	{
		Global_4C1E.f_1 = 7;
	}
	iLocal_31 = unk_0x1C0640BA9A7327B3();
	Global_4C22 = 0;
	unk_0x1CFAC524932A967E(&vLocal_39);
	vLocal_38 = { vLocal_39 };
	vLocal_38.x = (vLocal_38.x - 10f);
	vLocal_38.y = (vLocal_38.y + 20f);
	Global_554E = 0;
	Global_554F = 1;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_554F == 0 && Global_554E == 1)
		{
			func_50();
		}
		if (Global_554F == 1 && Global_554E == 0)
		{
			func_45();
		}
		if (iLocal_30 == 0)
		{
			iLocal_32 = unk_0x1C0640BA9A7327B3();
			if ((iLocal_32 - iLocal_31) > 500)
			{
				iLocal_30 = 1;
			}
		}
		if ((Global_4C1E.f_1 != 9 && Global_554F == 0) && Global_554E == 0)
		{
			switch (Global_4C1E.f_1)
			{
				case 7:
					if (Global_556F == 0)
					{
						if (Global_26DD73 == 0)
						{
							func_44();
							func_37();
						}
					}
					break;
				
				case 8:
					if (Global_556F == 1)
					{
						func_11();
						func_5();
					}
					break;
				
				default:
					break;
			}
			if (Global_556F == 0)
			{
				if (func_4())
				{
					Global_554E = 1;
				}
			}
			else if (func_3(2, Global_4BFE, 0) || unk_0xEAE0D21A50E6C7F4(Global_1CBD, 12))
			{
				if (unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/]), "CELL_FINV"))
				{
				}
				else
				{
					SYSTEM::WAIT(0);
					unk_0x0674E58A79778E99(&Global_1CBD, 12);
					func_2();
					Global_4C08 = 1;
					Global_556F = 0;
					if (Global_4C1E.f_1 > 3)
					{
						Global_4C1E.f_1 = 7;
					}
					if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0)
					{
						func_61();
					}
					func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 8f, 3212836864, 3212836864, 3212836864, 3212836864);
					func_53();
					func_51();
					if (Global_4121D4[iLocal_24 /*104*/].f_1D > 0)
					{
						if (Global_4121D4[iLocal_24 /*104*/].f_1F == 1)
						{
							Global_4121D4[iLocal_24 /*104*/].f_1D = 4;
							Global_4121D4[iLocal_24 /*104*/].f_18 = 1;
						}
						else
						{
							Global_4121D4[iLocal_24 /*104*/].f_18 = 1;
						}
					}
				}
			}
		}
		if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0)
		{
			func_61();
		}
		if (func_1())
		{
			func_61();
		}
	}
}

int func_1()
{
	if (((Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 3) || Global_4C1E.f_1 == 0) || Global_4BE6 == 1)
	{
		Global_4C11 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Menu_Back", &Global_4C13, true);
	}
}

int func_3(int iParam0, int iParam1, int iParam2)
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

int func_4()
{
	if (Global_1F1A == 1 || Global_4C1E.f_1 < 7)
	{
		Global_4C11 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		if (func_3(2, 181, 0))
		{
			func_9();
		}
		if (func_3(2, 180, 0))
		{
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_4C06, 0))
		{
			func_9();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_4C07, 0))
		{
			func_6();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_6()
{
	func_58(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x4D7F4CC43D4D0DE3(4294967295, "Menu_Navigate", &Global_4C13, true);
	func_7();
}

void func_7()
{
	if (func_8())
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

int func_8()
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

void func_9()
{
	func_58(Global_4C0B, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), 3212836864, 3212836864, 3212836864, 3212836864);
	unk_0x4D7F4CC43D4D0DE3(4294967295, "Menu_Navigate", &Global_4C13, true);
	func_10();
}

void func_10()
{
	if (func_8())
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

void func_11()
{
	func_12();
}

void func_12()
{
	if (Global_4121D4[iLocal_24 /*104*/].f_18 == 1)
	{
		if (Global_4C08 == 0)
		{
			if (unk_0x06F8112AA79C53D9(2, Global_4C01))
			{
				func_2();
				Global_4C08 = 1;
				func_30();
				if (Global_4121D4[iLocal_24 /*104*/].f_1B == 1)
				{
					Global_4121D4[iLocal_24 /*104*/].f_63[0] = 0;
					Global_4121D4[iLocal_24 /*104*/].f_63[1] = 0;
					Global_4121D4[iLocal_24 /*104*/].f_63[2] = 0;
				}
				else
				{
					Global_4121D4[iLocal_24 /*104*/].f_63[Global_4C1E] = 0;
				}
				if (func_29(iLocal_24))
				{
				}
				else
				{
					Global_4121D4[iLocal_24 /*104*/].f_18 = 0;
					Global_4121D4[iLocal_24 /*104*/].f_1C = 0;
				}
				unk_0xD59AE843FA2C6B40(Global_4121D4[iLocal_24 /*104*/].f_10);
				func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 8f, 3212836864, 3212836864, 3212836864, 3212836864);
				func_53();
				if (iLocal_22 > 0)
				{
					iLocal_22 = (iLocal_22 - 1);
				}
				func_51();
				if (Global_4C1E.f_1 > 3)
				{
					Global_4C1E.f_1 = 7;
					Global_556F = 0;
				}
			}
		}
	}
	else if (Global_4C08 == 0)
	{
		if (unk_0x06F8112AA79C53D9(2, Global_4C02))
		{
			if (iLocal_26 == 1)
			{
				if (Global_4C1E.f_1 > 3)
				{
					StringCopy(&Global_12051, unk_0x19C9F30A7697B43C(&Global_5556), 64);
					if (unk_0x7F8A39872A07D2CE(&Global_12051, "HARDCODED_4207156"))
					{
						Global_4C1E.f_1 = 3;
						Global_19D9C2 = 1;
					}
					else
					{
						Global_120D2 = 7;
						unk_0x5D96D8530B3D0904(&Global_1CBD, 10);
						Global_4C1E.f_1 = 6;
					}
				}
				func_61();
			}
		}
	}
	if (Global_4121D4[iLocal_24 /*104*/].f_1F == 1)
	{
		if (Global_4C08 == 0)
		{
			if (func_3(2, Global_4C02, 0))
			{
				func_27();
				Global_4C08 = 1;
				Global_4121D4[iLocal_24 /*104*/].f_1D = 2;
				Global_4121D4[iLocal_24 /*104*/].f_18 = 1;
				Global_4121D4[iLocal_24 /*104*/].f_1F = 0;
				unk_0x0674E58A79778E99(&Global_1CBC, 17);
				Global_556F = 0;
				if (Global_4C1E.f_1 > 3)
				{
					Global_4C1E.f_1 = 7;
				}
				func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 8f, 3212836864, 3212836864, 3212836864, 3212836864);
				func_53();
				func_51();
			}
		}
	}
	if (Global_4C08 == 0 && iLocal_30 == 1)
	{
		if (func_3(2, Global_4BFF, 0))
		{
			Global_4C08 = 1;
			if (Global_4121D4[iLocal_24 /*104*/].f_1D > 0)
			{
				func_27();
				Global_4121D4[iLocal_24 /*104*/].f_1D = 3;
				Global_4121D4[iLocal_24 /*104*/].f_18 = 1;
				Global_556F = 0;
				if (Global_4C1E.f_1 > 3)
				{
					Global_4C1E.f_1 = 7;
				}
				func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 8f, 3212836864, 3212836864, 3212836864, 3212836864);
				func_53();
				func_51();
			}
			else if (Global_4121D4[iLocal_24 /*104*/].f_1E == 1)
			{
				func_27();
				Global_1A0F = 144;
				if (Global_4C1E.f_1 > 3)
				{
					Global_4C1E.f_1 = 10;
					func_25();
				}
				func_24("appContacts");
				Global_4C1C = SYSTEM::START_NEW_SCRIPT("appContacts", 4000);
				unk_0x5E8C29AE121DF1C7("appContacts");
				Global_1A0F = Global_4121D4[iLocal_24 /*104*/].f_11;
				if (func_23(Global_1A0F, Global_4C1E) == 0)
				{
					func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), "CELL_211", &(Global_706[Global_1A0F /*29*/].f_3), 0);
				}
				func_13();
				func_61();
			}
		}
	}
}

void func_13()
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
			func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_20(Global_1F19);
			if (Global_1F19 == 1)
			{
				func_58(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 3212836864, 3212836864, 3212836864);
				Global_4C0A = Global_4C22;
			}
			else
			{
				func_58(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C23), 3212836864, 3212836864, 3212836864);
				Global_4C0A = Global_4C23;
			}
			if (Global_4C12)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_4CD2 == 0)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0674E58A79778E99(&Global_1CBC, 17);
			}
			else if (Global_12B4E)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0674E58A79778E99(&Global_1CBC, 17);
			}
			else
			{
				if (Global_4CD1 == 1)
				{
					if (Global_4C12)
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4C12)
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x5D96D8530B3D0904(&Global_1CBC, 17);
			}
			if (Global_12B4E)
			{
				func_18();
				unk_0x0674E58A79778E99(&Global_1CBE, 9);
				func_58(Global_4C0B, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_4C22), 3212836864, 3212836864, 3212836864);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_58(Global_4C0B, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_1CBC, 17);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 20))
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_4C12)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_4BE5)
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_4C1D == 1)
			{
				func_17();
				func_58(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(4);
					unk_0x3CAEA85DA607305E(0);
					unk_0x3CAEA85DA607305E(2);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_16("CELL_300");
					func_16("CELL_217");
					func_16("CELL_217");
					unk_0x7E60D21B163E9D56();
				}
				else if (func_23(Global_1A0F, Global_4C1E) == 0)
				{
					func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), "CELL_217", &(Global_706[Global_1A0F /*29*/].f_3), 0);
				}
				func_58(Global_4C0B, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
			else if (Global_5145 == 4 || Global_5145 == 3)
			{
				func_58(Global_4C0B, "SET_THEME", SYSTEM::TO_FLOAT(Global_1B416.f_36DE[Global_4C1E /*20*/].f_6), 3212836864, 3212836864, 3212836864, 3212836864);
				func_17();
				if (Global_5152)
				{
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(4);
					unk_0x3CAEA85DA607305E(0);
					unk_0x3CAEA85DA607305E(2);
					unk_0x7ACC3006A87F8B39("CELL_CONDFON");
					unk_0xD06AC7C87A34A6AD(&Global_5154);
					unk_0x779B34565F4D71B1();
					func_16("CELL_300");
					func_16("CELL_219");
					func_16("CELL_219");
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
					if (func_23(Global_1A0F, Global_4C1E) == 0)
					{
						func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_75[Global_1A0F /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_58(Global_4C0B, "SET_DATA_SLOT_EMPTY", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
						func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_706[Global_1A0F /*29*/].f_3), &(Global_706[Global_1A0F /*29*/].f_7), &cVar0, &(Global_706[Global_1A0F /*29*/].f_3), 0);
					}
				}
				func_58(Global_4C0B, "DISPLAY_VIEW", 4f, 3212836864, 3212836864, 3212836864, 3212836864);
			}
			func_14();
			break;
		
		default:
			break;
	}
}

void func_14()
{
	if (unk_0x83D8570832F172A7(Global_4C0B))
	{
		func_15();
		if (Global_4C1D == 1)
		{
			if (Global_4C12)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_5174)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 20))
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_4C12)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_1CBC, 17);
		}
		else
		{
			func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_1CBC, 17);
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 20))
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_4C12)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_4BE5)
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_15()
{
	if (Global_12B4E)
	{
		func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x0674E58A79778E99(&Global_1CBC, 17);
	}
}

void func_16(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_17()
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

void func_18()
{
	if (Global_12B4E)
	{
		if (func_19() == 0)
		{
			return;
		}
		func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x5D96D8530B3D0904(&Global_1CBC, 17);
	}
}

int func_19()
{
	return 0;
}

void func_20(int iParam0)
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
		if (func_21(14))
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
								func_16(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(iVar2);
								unk_0x7E60D21B163E9D56();
							}
							if (Global_258C03)
							{
								if (iVar1 == 14)
								{
									func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_5571), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_556C), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
								unk_0x3CAEA85DA607305E(1);
								unk_0x3CAEA85DA607305E(iVar0);
								unk_0x3CAEA85DA607305E(Global_1CC3[iVar1 /*15*/].f_A);
								unk_0x3CAEA85DA607305E(0);
								func_16(&(Global_1CC3[iVar1 /*15*/]));
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
								func_16(&(Global_1CC3[iVar1 /*15*/]));
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
								func_16(&(Global_1CC3[iVar1 /*15*/]));
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
								func_16(&(Global_1CC3[iVar1 /*15*/]));
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
								func_16(&(Global_1CC3[iVar1 /*15*/]));
								unk_0x3CAEA85DA607305E(42);
								unk_0x7E60D21B163E9D56();
							}
							else if (Global_1CC3[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18D301.f_1;
								func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_22(Global_4C0B, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_1CC3[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_1CC3[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_21(int iParam0)
{
	return Global_A1D7 == iParam0;
}

void func_22(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_16(sParam7);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam8))
	{
		func_16(sParam8);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam9))
	{
		func_16(sParam9);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam10))
	{
		func_16(sParam10);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam11))
	{
		func_16(sParam11);
	}
	unk_0x7E60D21B163E9D56();
}

int func_23(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_706[iParam0 /*29*/].f_18[iParam1];
}

void func_24(char* sParam0)
{
	unk_0x92DCE5C81176D2B4(sParam0);
	while (!unk_0x1FBF08B001C4788A(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		if (func_26() && unk_0xC379FAA7E9DFE7A4(unk_0x16F2683693E537C9(), 0))
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

int func_26()
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

void func_27()
{
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0x4D7F4CC43D4D0DE3(4294967295, "Menu_Accept", &Global_4C13, true);
		func_28();
	}
}

void func_28()
{
	if (func_8())
	{
		unk_0x5A963FB0365294C8(5);
	}
}

int func_29(int iParam0)
{
	if ((Global_1B416.f_3738[iParam0 /*104*/].f_63[0] == 1 || Global_1B416.f_3738[iParam0 /*104*/].f_63[1] == 1) || Global_1B416.f_3738[iParam0 /*104*/].f_63[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	if (func_21(14))
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
			if (func_33(iVar0) && (!func_21(14) || Global_1AFFD))
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
	struct<16> Var0;
	
	if (Global_4C08 == 0)
	{
		if ((func_3(2, Global_4BFF, 0) || Global_4126B6 == 1) || Global_5569 == 1)
		{
			if (Global_4126B6 == 0 && Global_5569 == 0)
			{
				func_27();
			}
			Global_4C08 = 1;
			iLocal_30 = 0;
			func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_1CBC, 17);
			iLocal_24 = iLocal_19[iLocal_22];
			if (iLocal_22 == iLocal_21 || iLocal_22 > iLocal_21)
			{
				if (Global_4C1E.f_1 > 3)
				{
					Global_4C1E.f_1 = 8;
					Global_556F = 1;
					iLocal_23 = iLocal_22;
					unk_0x113A2E2F6779EEA3(iLocal_19[iLocal_22], &Local_45);
				}
				SYSTEM::SETTIMERB(0);
				iLocal_28 = 0;
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
				iLocal_33 = unk_0x7A8BB56B212464AC();
				while (!unk_0xC95D7AEEDEF4946B(iLocal_33) && iLocal_28 == 0)
				{
					SYSTEM::WAIT(0);
					if (SYSTEM::TIMERB() > 2000)
					{
						iLocal_28 = 1;
					}
				}
				func_42();
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(9);
				unk_0x3CAEA85DA607305E(0);
				func_16("CELL_1");
				unk_0x7ACC3006A87F8B39("CELL_TO_FIELD");
				unk_0xD06AC7C87A34A6AD(unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()));
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39("CELL_FROM_FIELD");
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_2));
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39("CELL_EMAIL_BCON");
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[0 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[1 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[2 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[3 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[4 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[5 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[6 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[7 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[8 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_38[9 /*16*/]));
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39("CELL_2000");
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_2));
				unk_0x779B34565F4D71B1();
				switch (Local_45.f_139)
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						unk_0x024BC5F58A72410C("EmailAds_Dock_Tease");
						unk_0x1200CC973A2399C8(true);
						break;
					
					case 3:
						unk_0x024BC5F58A72410C("EmailAds_Warstock");
						unk_0x1200CC973A2399C8(true);
						break;
					
					case 4:
						unk_0x024BC5F58A72410C("EmailAds_Legendary_Motorsport");
						unk_0x1200CC973A2399C8(true);
						break;
					
					case 5:
						unk_0x024BC5F58A72410C("EmailAds_LS_Customs");
						unk_0x1200CC973A2399C8(true);
						break;
					
					case 6:
						unk_0x024BC5F58A72410C("EmailAds_Elitas_Travel");
						unk_0x1200CC973A2399C8(true);
						break;
					
					case 7:
						unk_0x024BC5F58A72410C("EmailAds_LS_Tourist_Info");
						unk_0x1200CC973A2399C8(true);
						break;
					
					case 8:
						unk_0x024BC5F58A72410C("emailads_dynasty8");
						unk_0x1200CC973A2399C8(true);
						break;
					
					case 9:
						unk_0x024BC5F58A72410C("emailads_bennys");
						unk_0x1200CC973A2399C8(true);
						break;
					
					case 10:
						unk_0x024BC5F58A72410C("emailads_ammunation");
						unk_0x1200CC973A2399C8(true);
						break;
					
					case 11:
						unk_0x024BC5F58A72410C("emailads_SSSA");
						unk_0x1200CC973A2399C8(true);
						break;
					
					case 12:
						unk_0x024BC5F58A72410C("emailads_maze_bank");
						unk_0x1200CC973A2399C8(true);
						break;
					
					case 13:
						unk_0x024BC5F58A72410C("emailads_shark");
						unk_0x1200CC973A2399C8(true);
						break;
					
					case 14:
						unk_0x024BC5F58A72410C("emailads_RP");
						unk_0x1200CC973A2399C8(true);
						break;
				}
				unk_0x7E60D21B163E9D56();
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				func_58(Global_4C0B, "DISPLAY_VIEW", 9f, 3212836864, 3212836864, 3212836864, 3212836864);
				if (iLocal_22 == iLocal_21)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_4126C5, 25))
					{
						unk_0x0674E58A79778E99(&Global_4126C5, 25);
					}
					if (Global_4121D3 > 0)
					{
						func_39(9980, iLocal_40, 4294967295, 1, 0);
						if (Global_4121D3 > 0)
						{
							Global_4121D3 = 0;
						}
					}
				}
				return;
			}
			if (Global_4121D4[iLocal_24 /*104*/].f_18 != 0)
			{
				if (Global_4C1E.f_1 > 3)
				{
					Global_4C1E.f_1 = 8;
				}
				if (Global_4126B6 == 1 || Global_5569 == 1)
				{
					iLocal_24 = iLocal_19[0];
					iLocal_23 = 0;
					if (Global_4126B6 == 1)
					{
					}
					Global_5569 = 0;
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_28 = 0;
					unk_0x7E60C62A7CE58FC8(Global_4C0B, "GET_CURRENT_SELECTION");
					iLocal_33 = unk_0x7A8BB56B212464AC();
					while (!unk_0xC95D7AEEDEF4946B(iLocal_33) && iLocal_28 == 0)
					{
						SYSTEM::WAIT(0);
						if (SYSTEM::TIMERB() > 2000)
						{
							iLocal_28 = 1;
						}
					}
					if (iLocal_28 == 1)
					{
						iLocal_29 = 0;
					}
					else
					{
						iLocal_29 = unk_0xA52833FE33F41C53(iLocal_33);
					}
					if (iLocal_29 < 0)
					{
						iLocal_29 = 0;
					}
					iLocal_24 = iLocal_19[iLocal_22];
					iLocal_23 = iLocal_22;
				}
				Global_4121D4[iLocal_24 /*104*/].f_1C = 1;
				iLocal_26 = 0;
				StringCopy(&Global_5556, "NO_HYPERLINK", 64);
				Var0 = { Global_4121D4[iLocal_24 /*104*/] };
				StringConCat(&Var0, "_LINK", 64);
				if (unk_0xEF07223F00EBE9C9(&Var0))
				{
					Global_5556 = { Var0 };
					iLocal_26 = 1;
					if (Global_4C12)
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, "CELL_267", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 16f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					unk_0x5D96D8530B3D0904(&Global_1CBC, 17);
					Global_4121D4[iLocal_24 /*104*/].f_1A = 1;
					Global_4121D4[iLocal_24 /*104*/].f_18 = 2;
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_1A == 0)
				{
					Global_4121D4[iLocal_24 /*104*/].f_18 = 1;
				}
				func_42();
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(9);
				unk_0x3CAEA85DA607305E(0);
				func_16("CELL_1");
				unk_0x7ACC3006A87F8B39("CELL_TO_FIELD");
				unk_0xD06AC7C87A34A6AD(unk_0x6E524813889AECF8(unk_0xD803B885F5E47A62()));
				unk_0x779B34565F4D71B1();
				if (Global_4121D4[iLocal_24 /*104*/].f_11 == 145)
				{
					unk_0x7ACC3006A87F8B39("CELL_FROM_FIELD");
					unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_32));
					unk_0x779B34565F4D71B1();
				}
				else
				{
					unk_0x7ACC3006A87F8B39("CELL_FROM_FIELD");
					unk_0x6B012227B3921E18(&(Global_706[Global_4121D4[iLocal_24 /*104*/].f_11 /*29*/].f_3));
					unk_0x779B34565F4D71B1();
				}
				switch (Global_4121D4[iLocal_24 /*104*/].f_20)
				{
					case 0:
						func_16(&(Global_4121D4[iLocal_24 /*104*/]));
						break;
					
					case 1:
						unk_0x7ACC3006A87F8B39(&(Global_4121D4[iLocal_24 /*104*/]));
						unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_21));
						if (Global_4121D4[iLocal_24 /*104*/].f_42 == 1 && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/].f_43), "NULL"))
						{
							unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_43));
						}
						if ((Global_4121D4[iLocal_24 /*104*/].f_42 == 2 && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/].f_43), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/].f_53), "NULL"))
						{
							if (unk_0xEF07223F00EBE9C9(&(Global_4121D4[iLocal_24 /*104*/].f_43)))
							{
								unk_0x6B012227B3921E18(&(Global_4121D4[iLocal_24 /*104*/].f_43));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_43));
							}
							if (unk_0xEF07223F00EBE9C9(&(Global_4121D4[iLocal_24 /*104*/].f_53)))
							{
								unk_0x6B012227B3921E18(&(Global_4121D4[iLocal_24 /*104*/].f_53));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_53));
							}
						}
						unk_0x779B34565F4D71B1();
						break;
					
					case 2:
						unk_0x7ACC3006A87F8B39(&(Global_4121D4[iLocal_24 /*104*/]));
						unk_0x6D99DF8263D35CE5(Global_4121D4[iLocal_24 /*104*/].f_31);
						unk_0x779B34565F4D71B1();
						break;
					
					case 3:
						unk_0x7ACC3006A87F8B39(&(Global_4121D4[iLocal_24 /*104*/]));
						unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_21));
						unk_0x6D99DF8263D35CE5(Global_4121D4[iLocal_24 /*104*/].f_31);
						if (Global_4121D4[iLocal_24 /*104*/].f_42 == 1 && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/].f_43), "NULL"))
						{
							unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_43));
						}
						if ((Global_4121D4[iLocal_24 /*104*/].f_42 == 2 && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/].f_43), "NULL")) && !unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/].f_53), "NULL"))
						{
							if (unk_0xEF07223F00EBE9C9(&(Global_4121D4[iLocal_24 /*104*/].f_43)))
							{
								unk_0x6B012227B3921E18(&(Global_4121D4[iLocal_24 /*104*/].f_43));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_43));
							}
							if (unk_0xEF07223F00EBE9C9(&(Global_4121D4[iLocal_24 /*104*/].f_53)))
							{
								unk_0x6B012227B3921E18(&(Global_4121D4[iLocal_24 /*104*/].f_53));
							}
							else
							{
								unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_53));
							}
						}
						unk_0x779B34565F4D71B1();
						break;
					
					case 4:
						func_38(iLocal_24);
						break;
					
					case 5:
						func_38(iLocal_24);
						break;
					
					case 6:
						func_38(iLocal_24);
						break;
					
					case 7:
						func_38(iLocal_24);
						break;
					
					case 8:
						func_38(iLocal_24);
						break;
					
					case 9:
						func_38(iLocal_24);
						break;
					
					case 10:
						func_38(iLocal_24);
						break;
					
					case 11:
						func_38(iLocal_24);
						break;
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_11 == 145)
				{
					unk_0x7ACC3006A87F8B39("CELL_2000");
					unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iLocal_24 /*104*/].f_32));
					unk_0x779B34565F4D71B1();
				}
				else
				{
					func_16(&(Global_706[Global_4121D4[iLocal_24 /*104*/].f_11 /*29*/].f_3));
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_11 == 149)
				{
					unk_0x024BC5F58A72410C("emailads_maze_bank");
					unk_0x1200CC973A2399C8(true);
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_11 == 140)
				{
					unk_0x024BC5F58A72410C("EmailAds_Warstock");
					unk_0x1200CC973A2399C8(true);
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_11 == 155)
				{
					unk_0x024BC5F58A72410C("emailads_arena");
					unk_0x1200CC973A2399C8(true);
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_11 == 160)
				{
					unk_0x024BC5F58A72410C("emailads_diamond");
					unk_0x1200CC973A2399C8(true);
				}
				unk_0x7E60D21B163E9D56();
				Global_556F = 1;
				func_58(Global_4C0B, "DISPLAY_VIEW", 9f, 3212836864, 3212836864, 3212836864, 3212836864);
				unk_0xD59AE843FA2C6B40(Global_4121D4[iLocal_24 /*104*/].f_10);
				if (Global_4121D4[iLocal_24 /*104*/].f_1D > 0)
				{
					if (Global_4C12)
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4121D4[iLocal_24 /*104*/].f_1E == 1)
				{
					if (Global_4C12)
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_1D > 0)
				{
					if (unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/]), "CELL_FINV"))
					{
						if (Global_4C12)
						{
							func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 0f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else if (Global_4C12)
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
					}
					else
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_4C12)
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				if (Global_4121D4[iLocal_24 /*104*/].f_18 == 2)
				{
					if (Global_4121D4[iLocal_24 /*104*/].f_1F == 1)
					{
						iLocal_26 = 0;
						if (Global_4C12)
						{
							func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, "CELL_264", 0, 0, 0, 0);
						}
						else
						{
							func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 11f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						unk_0x5D96D8530B3D0904(&Global_1CBC, 17);
					}
					else if (iLocal_26 == 0)
					{
						func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						unk_0x0674E58A79778E99(&Global_1CBC, 17);
					}
				}
				else if (Global_4C12)
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, "CELL_216", 0, 0, 0, 0);
					unk_0x5D96D8530B3D0904(&Global_1CBC, 17);
				}
				else
				{
					func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 1f, 12f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x5D96D8530B3D0904(&Global_1CBC, 17);
				}
				Global_1B416.f_36DE[Global_4C1E /*20*/].f_12 = 0;
				Global_4126B6 = 0;
			}
			else
			{
				Global_1B416.f_36DE[Global_4C1E /*20*/].f_12 = 0;
				Global_4126B6 = 0;
			}
		}
		if (Global_26DD73 == 0)
		{
			if (Global_12B4E)
			{
			}
		}
	}
}

void func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (Global_1B416.f_3738[iParam0 /*104*/].f_31)
	{
		case 1:
			unk_0x7ACC3006A87F8B39("CELL_CL01");
			break;
		
		case 2:
			unk_0x7ACC3006A87F8B39("CELL_CL02");
			break;
		
		case 3:
			unk_0x7ACC3006A87F8B39("CELL_CL03");
			break;
		
		case 4:
			unk_0x7ACC3006A87F8B39("CELL_CL04");
			break;
		
		case 5:
			unk_0x7ACC3006A87F8B39("CELL_CL05");
			break;
		
		case 6:
			unk_0x7ACC3006A87F8B39("CELL_CL06");
			break;
		
		case 7:
			unk_0x7ACC3006A87F8B39("CELL_CL07");
			break;
		
		case 8:
			unk_0x7ACC3006A87F8B39("CELL_CL08");
			break;
		
		case 9:
			unk_0x7ACC3006A87F8B39("CELL_CL09");
			break;
	}
	unk_0x6B012227B3921E18(&(Global_1B416.f_3738[iParam0 /*104*/]));
	while (iVar0 < Global_1B416.f_3738[iParam0 /*104*/].f_31)
	{
		switch (Global_1B416.f_3738[iParam0 /*104*/].f_20)
		{
			case 4:
				unk_0x6B012227B3921E18(&(Global_26B66F.f_67E[iVar0 /*4*/]));
				break;
			
			case 5:
				unk_0x6B012227B3921E18(&(Global_195C42[iVar0 /*4*/]));
				break;
			
			case 6:
				unk_0x6B012227B3921E18(&(Global_195C6B[iVar0 /*4*/]));
				break;
			
			case 7:
				unk_0x6B012227B3921E18(&(Global_195C80[iVar0 /*4*/]));
				break;
			
			case 8:
				unk_0x6B012227B3921E18(&(Global_195C91[iVar0 /*4*/]));
				break;
			
			case 9:
				unk_0x6B012227B3921E18(&(Global_195C9E[iVar0 /*4*/]));
				break;
			
			case 10:
				unk_0x6B012227B3921E18(&(Global_195CAB[iVar0 /*4*/]));
				break;
			
			case 11:
				unk_0x6B012227B3921E18(&(Global_195CB8[iVar0 /*4*/]));
				break;
		}
		iVar0++;
	}
	unk_0x779B34565F4D71B1();
}

void func_39(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26E2D2[iParam0 /*3*/][func_40(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_41();
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

int func_41()
{
	return Global_1407E9;
}

void func_42()
{
	int iVar0;
	
	if (iLocal_37)
	{
		unk_0xF5A41F3D3B38EFE3(&Local_34);
	}
	iLocal_37 = 0;
	if (Global_4121D4[iLocal_24 /*104*/].f_18 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 59)
		{
			if (unk_0x7F8A39872A07D2CE(&(Global_4121D4[iLocal_24 /*104*/]), &(Local_35[iVar0 /*6*/])))
			{
				if (func_43(&(Local_35[iVar0 /*6*/])))
				{
					StringCopy(&Local_34, "BAT_CASE_", 64);
					StringIntConCat(&Local_34, Global_19D9BA, 64);
				}
				else
				{
					Local_34 = { Local_36[iVar0 /*16*/] };
				}
				iLocal_37 = 1;
				unk_0x0D3BE1DE0262A012(&Local_34, false);
				while (!unk_0x27117E2CDD4D67C3(&Local_34))
				{
					SYSTEM::WAIT(100);
				}
			}
			iVar0++;
		}
	}
}

int func_43(char* sParam0)
{
	switch (unk_0x12AB0310C2281427(sParam0))
	{
		case 368818696:
		case 4052429723:
		case 293851599:
		case 1276417163:
		case 3599914826:
		case 4022632231:
		case 1286719131:
		case 2877700800:
		case 3825023008:
		case 3607531075:
		case 1989355620:
		case 549480519:
		case 1944388503:
		case 3360325808:
		case 3566402475:
		case 1522380948:
		case 3038198727:
		case 3974478407:
		case 3755529902:
		case 2493031075:
			return 1;
		
		default:
	}
	return 0;
}

void func_44()
{
	if (iLocal_27)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_27 = 0;
		}
	}
	if (unk_0x91E3F625EF57450D(2))
	{
		if (func_3(2, 181, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
		}
		if (func_3(2, 180, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
		}
	}
	if (iLocal_27 == 0)
	{
		if (func_3(2, Global_4C06, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
				func_9();
			}
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_3(2, Global_4C07, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_20)
			{
				iLocal_22 = 0;
			}
			func_6();
			iLocal_27 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_45()
{
	float fVar0;
	
	fVar0 = func_46(vLocal_39, vLocal_38, Global_4BF6, -90f, 0f, 90f, 350f, 0);
	unk_0x2BF9F8AAD637763A((500f + (75f * fVar0)));
	if (fVar0 >= 1f)
	{
		Global_554F = 0;
		iLocal_18 = 0;
	}
}

float func_46(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)
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
	if (func_49() && Global_4127DC == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = unk_0x1C0640BA9A7327B3();
	}
	fVar1 = func_48((SYSTEM::TO_FLOAT((unk_0x1C0640BA9A7327B3() - iLocal_18)) / fParam4), 0f, 1f);
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
		Global_4BD6 = { func_47(vParam0, vParam1, fVar2) };
		Global_4BD9 = { func_47(vParam2, vParam3, fVar2) };
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

Vector3 func_47(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_48(float fParam0, float fParam1, float fParam2)
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

int func_49()
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
		if (func_21(14))
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

void func_50()
{
	float fVar0;
	
	fVar0 = func_46(vLocal_38, vLocal_39, -90f, 0f, 90f, Global_4BF6, 350f, 0);
	unk_0x2BF9F8AAD637763A((500f + (75f * (1f - fVar0))));
	if (fVar0 >= 1f)
	{
		Global_554E = 0;
		func_61();
		iLocal_18 = 0;
	}
}

void func_51()
{
	if (Global_4126B6 == 0)
	{
		if (iLocal_23 < 0)
		{
			iLocal_23 = 0;
		}
		func_52(Global_4C0B, "SET_HEADER", "CELL_INBOX", 0, 0, 0, 0);
		func_58(Global_4C0B, "DISPLAY_VIEW", 8f, SYSTEM::TO_FLOAT(iLocal_23), 3212836864, 3212836864, 3212836864);
		if (Global_4C12)
		{
			if (iLocal_20 > 0)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_214", 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			if (iLocal_20 > 0)
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else
			{
				func_22(Global_4C0B, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_22(Global_4C0B, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_12B4E)
		{
			func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_1CBC, 17);
		}
		else
		{
			func_22(Global_4C0B, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x0674E58A79778E99(&Global_1CBC, 17);
		}
	}
	else
	{
		iLocal_23 = 0;
	}
}

void func_52(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x7E60C62A7CE58FC8(iParam0, sParam1);
	func_16(sParam2);
	if (!unk_0xEA6BC48857E0AC4C(sParam3))
	{
		func_16(sParam3);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam4))
	{
		func_16(sParam4);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam5))
	{
		func_16(sParam5);
	}
	if (!unk_0xEA6BC48857E0AC4C(sParam6))
	{
		func_16(sParam6);
	}
	unk_0x7E60D21B163E9D56();
}

void func_53()
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<8> Var5;
	int iVar6;
	int iVar7[10];
	int iVar8;
	
	iLocal_20 = 0;
	iLocal_21 = 0;
	func_30();
	iVar1 = 0;
	iVar2 = 0;
	while (iVar1 < 11)
	{
		if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0)
		{
			func_61();
		}
		iVar3 = 0;
		iVar4 = 11;
		Global_4121D4[iVar4 /*104*/].f_12 = 4294967295;
		Global_4121D4[iVar4 /*104*/].f_12.f_1 = 0;
		Global_4121D4[iVar4 /*104*/].f_12.f_2 = 0;
		Global_4121D4[iVar4 /*104*/].f_12.f_3 = 0;
		Global_4121D4[iVar4 /*104*/].f_12.f_5 = 0;
		while (iVar3 < 12)
		{
			if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0)
			{
				func_61();
			}
			if (iVar0[iVar3] == 0)
			{
				if (Global_4121D4[iVar3 /*104*/].f_18 != 0)
				{
					if (Global_4121D4[iVar3 /*104*/].f_63[Global_4C1E] == 1)
					{
						if (func_57(Global_4121D4[iVar3 /*104*/].f_12, Global_4121D4[iVar4 /*104*/].f_12))
						{
							iVar4 = iVar3;
							if (Global_4121D4[iVar4 /*104*/].f_1C == 0)
							{
								iLocal_25 = 0;
							}
							else
							{
								iLocal_25 = 1;
							}
						}
					}
				}
			}
			iVar3++;
		}
		iLocal_19[iVar1] = iVar4;
		iVar0[iVar4] = 1;
		if (Global_4121D4[iVar4 /*104*/].f_18 != 0)
		{
			if (Global_4121D4[iVar4 /*104*/].f_63[Global_4C1E] == 1)
			{
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(8);
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x3CAEA85DA607305E(iLocal_25);
				unk_0x1200CC973A2399C8(false);
				if (Global_4121D4[iVar4 /*104*/].f_11 == 145)
				{
					unk_0x7ACC3006A87F8B39("CELL_2000");
					unk_0xD06AC7C87A34A6AD(&(Global_4121D4[iVar4 /*104*/].f_32));
					unk_0x779B34565F4D71B1();
				}
				else
				{
					func_16(&(Global_706[Global_4121D4[iVar4 /*104*/].f_11 /*29*/].f_3));
				}
				Var5 = { Global_4121D4[iVar4 /*104*/] };
				if (func_43(&(Global_4121D4[iVar4 /*104*/])))
				{
					iVar6 = func_54(7315, 4294967295, 4294967295);
					switch (iVar6)
					{
						case 0:
							StringCopy(&Var5, "BONEMAIL_TXT_SUB", 64);
							break;
						
						case 1:
							StringCopy(&Var5, "BONEMAIL2_TXT_SUB", 64);
							break;
						
						case 2:
							StringCopy(&Var5, "BONEMAIL3_TXT_SUB", 64);
							break;
						
						case 3:
							StringCopy(&Var5, "BONEMAIL4_TXT_SUB", 64);
							break;
						
						case 4:
							StringCopy(&Var5, "BONEMAIL5_TXT_SUB", 64);
							break;
					}
				}
				else
				{
					StringConCat(&Var5, "_SUB", 64);
				}
				func_16(&Var5);
				unk_0x7E60D21B163E9D56();
				iLocal_20++;
				iLocal_21++;
			}
		}
		iVar1++;
	}
	iVar1 = iLocal_20;
	iVar8 = 0;
	while (iVar1 < (iLocal_44 + iLocal_20))
	{
		iVar2 = 0;
		iVar8 = 0;
		while (iVar2 < iLocal_44 && iVar8 == 0)
		{
			unk_0x113A2E2F6779EEA3(iVar2, &Local_45);
			if (iVar7[iVar2] == 0)
			{
				unk_0x7E60C62A7CE58FC8(Global_4C0B, "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(8);
				unk_0x3CAEA85DA607305E(iVar1);
				if (iVar1 == 0)
				{
					if (Global_4121D3 == 0)
					{
						unk_0x3CAEA85DA607305E(1);
					}
					else
					{
						unk_0x3CAEA85DA607305E(0);
					}
				}
				else
				{
					unk_0x3CAEA85DA607305E(1);
				}
				unk_0x1200CC973A2399C8(false);
				unk_0x7ACC3006A87F8B39("CELL_2000");
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_2));
				unk_0x779B34565F4D71B1();
				unk_0x7ACC3006A87F8B39("CELL_EMAIL_SUBJ");
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_17[0 /*16*/]));
				unk_0xD06AC7C87A34A6AD(&(Local_45.f_17[1 /*16*/]));
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
				iVar7[iVar2] = 1;
				iLocal_19[iVar1] = iVar2;
				iVar8 = 1;
				iLocal_20++;
				if (iVar2 == 0)
				{
					iLocal_40 = Local_45.f_1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_41();
	}
	iVar0 = 0;
	iVar1 = func_56(iParam0, iParam1);
	iVar2 = func_55(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x6D37612C090B9DC5(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_55(int iParam0)
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

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_41();
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

int func_57(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_58(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_59()
{
	switch (unk_0xB3260A60545D3F11())
	{
		case 4294967295:
			unk_0xE22E533456FE806D("gta5mkt_en");
			break;
		
		case 0:
			unk_0xE22E533456FE806D("gta5mkt_en");
			break;
		
		case 1:
			unk_0xE22E533456FE806D("gta5mkt_fr");
			break;
		
		case 2:
			unk_0xE22E533456FE806D("gta5mkt_ge");
			break;
		
		case 3:
			unk_0xE22E533456FE806D("gta5mkt_it");
			break;
		
		case 4:
			unk_0xE22E533456FE806D("gta5mkt_sp");
			break;
		
		case 5:
			unk_0xE22E533456FE806D("gta5mkt_pt");
			break;
		
		case 6:
			unk_0xE22E533456FE806D("gta5mkt_pl");
			break;
		
		case 7:
			unk_0xE22E533456FE806D("gta5mkt_ru");
			break;
		
		case 8:
			unk_0xE22E533456FE806D("gta5mkt_ko");
			break;
		
		case 9:
			unk_0xE22E533456FE806D("gta5mkt_ch");
			break;
		
		case 10:
			unk_0xE22E533456FE806D("gta5mkt_ja");
			break;
		
		case 11:
			unk_0xE22E533456FE806D("gta5mkt_me");
			break;
		
		case 12:
			unk_0xE22E533456FE806D("gta5mkt_cn");
			break;
	}
	unk_0xF51E39152845129E(0, 6);
	SYSTEM::WAIT(0);
	iLocal_41 = 1;
	bLocal_42 = false;
	while (iLocal_41 && Global_4C1E.f_1 > 3)
	{
		SYSTEM::WAIT(0);
		iLocal_43 = unk_0x449444B0F7CC649C();
		if (func_4())
		{
			Global_4C1E.f_1 = 3;
			iLocal_41 = 0;
			bLocal_42 = false;
		}
		switch (iLocal_43)
		{
			case 3:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 0:
				iLocal_41 = 0;
				bLocal_42 = true;
				break;
			
			case 1:
				break;
			
			case 4:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
			
			case 2:
				iLocal_41 = 0;
				bLocal_42 = false;
				break;
		}
	}
	if (bLocal_42)
	{
		iLocal_44 = unk_0xD86624A40067B84F();
	}
	else
	{
		iLocal_44 = 0;
	}
}

void func_60()
{
	StringCopy(&(Local_35[0 /*6*/]), "SXT_JUL_1ST", 24);
	StringCopy(&(Local_36[0 /*16*/]), "05_a_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[1 /*6*/]), "SXT_JUL_2ND", 24);
	StringCopy(&(Local_36[1 /*16*/]), "05_b_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[2 /*6*/]), "SXT_JUL_NEED", 24);
	StringCopy(&(Local_36[2 /*16*/]), "05_c_sext_stripperJuliet", 64);
	StringCopy(&(Local_35[3 /*6*/]), "MAPEMAIL_TXT", 24);
	StringCopy(&(Local_36[3 /*16*/]), "NHP_PHOTO_19", 64);
	StringCopy(&(Local_35[4 /*6*/]), "SXT_NIK_2ND", 24);
	StringCopy(&(Local_36[4 /*16*/]), "06_b_sext_stripperNikki", 64);
	StringCopy(&(Local_35[5 /*6*/]), "SXT_NIK_NEED", 24);
	StringCopy(&(Local_36[5 /*16*/]), "06_c_sext_stripperNikki", 64);
	StringCopy(&(Local_35[6 /*6*/]), "SXT_SAP_1ST", 24);
	StringCopy(&(Local_36[6 /*16*/]), "08_a_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[7 /*6*/]), "SXT_SAP_2ND", 24);
	StringCopy(&(Local_36[7 /*16*/]), "08_b_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[8 /*6*/]), "SXT_SAP_NEED", 24);
	StringCopy(&(Local_36[8 /*16*/]), "08_c_sext_stripperSapphire", 64);
	StringCopy(&(Local_35[9 /*6*/]), "SXT_INF_1ST", 24);
	StringCopy(&(Local_36[9 /*16*/]), "04_a_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[10 /*6*/]), "SXT_INF_2ND", 24);
	StringCopy(&(Local_36[10 /*16*/]), "04_b_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[11 /*6*/]), "SXT_INF_NEED", 24);
	StringCopy(&(Local_36[11 /*16*/]), "04_c_sext_stripperInfernus", 64);
	StringCopy(&(Local_35[12 /*6*/]), "SXT_TXI_1ST", 24);
	StringCopy(&(Local_36[12 /*16*/]), "11_a_sext_taxiLiz", 64);
	StringCopy(&(Local_35[13 /*6*/]), "SXT_TXI_2ND", 24);
	StringCopy(&(Local_36[13 /*16*/]), "11_b_sext_taxiLiz", 64);
	StringCopy(&(Local_35[14 /*6*/]), "SXT_TXI_NEED", 24);
	StringCopy(&(Local_36[14 /*16*/]), "11_c_sext_taxiLiz", 64);
	StringCopy(&(Local_35[15 /*6*/]), "SXT_HCH_1ST", 24);
	StringCopy(&(Local_36[15 /*16*/]), "10_a_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[16 /*6*/]), "SXT_HCH_2ND", 24);
	StringCopy(&(Local_36[16 /*16*/]), "10_b_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[17 /*6*/]), "SXT_HCH_NEED", 24);
	StringCopy(&(Local_36[17 /*16*/]), "10_c_sext_hitcherGirl", 64);
	StringCopy(&(Local_35[18 /*6*/]), "SOL2_PASS", 24);
	StringCopy(&(Local_36[18 /*16*/]), "executiveproducer", 64);
	StringCopy(&(Local_35[19 /*6*/]), "MAPEMAIL_TXT1", 24);
	StringCopy(&(Local_36[19 /*16*/]), "NHP_PHOTO_18", 64);
	StringCopy(&(Local_35[20 /*6*/]), "MAPEMAIL_TXT2", 24);
	StringCopy(&(Local_36[20 /*16*/]), "NHP_PHOTO_11", 64);
	StringCopy(&(Local_35[21 /*6*/]), "MAPEMAIL_TXT3", 24);
	StringCopy(&(Local_36[21 /*16*/]), "NHP_PHOTO_13", 64);
	StringCopy(&(Local_35[22 /*6*/]), "MAPEMAIL_TXT4", 24);
	StringCopy(&(Local_36[22 /*16*/]), "NHP_PHOTO_5", 64);
	StringCopy(&(Local_35[23 /*6*/]), "MAPEMAIL_TXT5", 24);
	StringCopy(&(Local_36[23 /*16*/]), "NHP_PHOTO_12", 64);
	StringCopy(&(Local_35[24 /*6*/]), "MAPEMAIL_TXT6", 24);
	StringCopy(&(Local_36[24 /*16*/]), "NHP_PHOTO_3", 64);
	StringCopy(&(Local_35[25 /*6*/]), "MAPEMAIL_TXT7", 24);
	StringCopy(&(Local_36[25 /*16*/]), "NHP_PHOTO_1", 64);
	StringCopy(&(Local_35[26 /*6*/]), "MAPEMAIL_TXT8", 24);
	StringCopy(&(Local_36[26 /*16*/]), "NHP_PHOTO_10", 64);
	StringCopy(&(Local_35[27 /*6*/]), "MAPEMAIL_TXT9", 24);
	StringCopy(&(Local_36[27 /*16*/]), "NHP_PHOTO_6", 64);
	StringCopy(&(Local_35[28 /*6*/]), "MAPEMAIL_TXT10", 24);
	StringCopy(&(Local_36[28 /*16*/]), "NHP_PHOTO_20", 64);
	StringCopy(&(Local_35[29 /*6*/]), "MAPEMAIL_TXT11", 24);
	StringCopy(&(Local_36[29 /*16*/]), "NHP_PHOTO_7", 64);
	StringCopy(&(Local_35[30 /*6*/]), "MAPEMAIL_TXT12", 24);
	StringCopy(&(Local_36[30 /*16*/]), "NHP_PHOTO_14", 64);
	StringCopy(&(Local_35[31 /*6*/]), "MAPEMAIL_TXT13", 24);
	StringCopy(&(Local_36[31 /*16*/]), "NHP_PHOTO_4", 64);
	StringCopy(&(Local_35[32 /*6*/]), "MAPEMAIL_TXT14", 24);
	StringCopy(&(Local_36[32 /*16*/]), "NHP_PHOTO_17", 64);
	StringCopy(&(Local_35[33 /*6*/]), "MAPEMAIL_TXT15", 24);
	StringCopy(&(Local_36[33 /*16*/]), "NHP_PHOTO_2", 64);
	StringCopy(&(Local_35[34 /*6*/]), "MAPEMAIL_TXT16", 24);
	StringCopy(&(Local_36[34 /*16*/]), "NHP_PHOTO_15", 64);
	StringCopy(&(Local_35[35 /*6*/]), "MAPEMAIL_TXT17", 24);
	StringCopy(&(Local_36[35 /*16*/]), "NHP_PHOTO_8", 64);
	StringCopy(&(Local_35[36 /*6*/]), "MAPEMAIL_TXT18", 24);
	StringCopy(&(Local_36[36 /*16*/]), "NHP_PHOTO_9", 64);
	StringCopy(&(Local_35[37 /*6*/]), "MAPEMAIL_TXT19", 24);
	StringCopy(&(Local_36[37 /*16*/]), "NHP_PHOTO_16", 64);
	StringCopy(&(Local_35[38 /*6*/]), "MC_EMAIL_0", 24);
	StringCopy(&(Local_36[38 /*16*/]), "NHP_prep_mines", 64);
	StringCopy(&(Local_35[39 /*6*/]), "BONEPIC1_TXT", 24);
	StringCopy(&(Local_36[39 /*16*/]), "", 64);
	StringCopy(&(Local_35[40 /*6*/]), "BONEPIC2_TXT", 24);
	StringCopy(&(Local_36[40 /*16*/]), "", 64);
	StringCopy(&(Local_35[41 /*6*/]), "BONEPIC3_TXT", 24);
	StringCopy(&(Local_36[41 /*16*/]), "", 64);
	StringCopy(&(Local_35[42 /*6*/]), "BONEPIC4_TXT", 24);
	StringCopy(&(Local_36[42 /*16*/]), "", 64);
	StringCopy(&(Local_35[43 /*6*/]), "BONEPIC5_TXT", 24);
	StringCopy(&(Local_36[43 /*16*/]), "", 64);
	StringCopy(&(Local_35[44 /*6*/]), "BONEPIC6_TXT", 24);
	StringCopy(&(Local_36[44 /*16*/]), "", 64);
	StringCopy(&(Local_35[45 /*6*/]), "BONEPIC7_TXT", 24);
	StringCopy(&(Local_36[45 /*16*/]), "", 64);
	StringCopy(&(Local_35[46 /*6*/]), "BONEPIC8_TXT", 24);
	StringCopy(&(Local_36[46 /*16*/]), "", 64);
	StringCopy(&(Local_35[47 /*6*/]), "BONEPIC9_TXT", 24);
	StringCopy(&(Local_36[47 /*16*/]), "", 64);
	StringCopy(&(Local_35[48 /*6*/]), "BONEPIC10_TXT", 24);
	StringCopy(&(Local_36[48 /*16*/]), "", 64);
	StringCopy(&(Local_35[49 /*6*/]), "BONEPIC11_TXT", 24);
	StringCopy(&(Local_36[49 /*16*/]), "", 64);
	StringCopy(&(Local_35[50 /*6*/]), "BONEPIC12_TXT", 24);
	StringCopy(&(Local_36[50 /*16*/]), "", 64);
	StringCopy(&(Local_35[51 /*6*/]), "BONEPIC13_TXT", 24);
	StringCopy(&(Local_36[51 /*16*/]), "", 64);
	StringCopy(&(Local_35[52 /*6*/]), "BONEPIC14_TXT", 24);
	StringCopy(&(Local_36[52 /*16*/]), "", 64);
	StringCopy(&(Local_35[53 /*6*/]), "BONEPIC15_TXT", 24);
	StringCopy(&(Local_36[53 /*16*/]), "", 64);
	StringCopy(&(Local_35[54 /*6*/]), "BONEPIC16_TXT", 24);
	StringCopy(&(Local_36[54 /*16*/]), "", 64);
	StringCopy(&(Local_35[55 /*6*/]), "BONEPIC17_TXT", 24);
	StringCopy(&(Local_36[55 /*16*/]), "", 64);
	StringCopy(&(Local_35[56 /*6*/]), "BONEPIC18_TXT", 24);
	StringCopy(&(Local_36[56 /*16*/]), "", 64);
	StringCopy(&(Local_35[57 /*6*/]), "BONEPIC19_TXT", 24);
	StringCopy(&(Local_36[57 /*16*/]), "", 64);
	StringCopy(&(Local_35[58 /*6*/]), "BONEPIC20_TXT", 24);
	StringCopy(&(Local_36[58 /*16*/]), "", 64);
}

void func_61()
{
	if (func_49() == 0)
	{
		unk_0x39F06A2B18483C68(Global_4BEF[Global_4BE7 /*3*/]);
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) == 0)
	{
		func_62(0);
	}
	if (iLocal_37)
	{
		unk_0xF5A41F3D3B38EFE3(&Local_34);
	}
	Global_554F = 0;
	Global_554E = 0;
	unk_0x10FAF14A60A0DBE1();
}

void func_62(int iParam0)
{
	if (func_67())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_66())
		{
			func_64(1, 1);
		}
		else
		{
			func_64(0, 0);
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
	if (!func_63())
	{
		Global_4C1E.f_1 = 3;
	}
}

int func_63()
{
	if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_64(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_65(0))
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

int func_65(int iParam0)
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

bool func_66()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 5);
}

bool func_67()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 19);
}

