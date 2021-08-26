// Main functions
[[reko::address("207F:2D82")]] void Main();
[[reko::address("0D27:0044")]] unsigned char Setup_Game(); //int A, int B, int C, int D, int E
[[reko::address("0800:50C8")]] void Start_Game();
[[reko::address("0800:0000")]] void Main_Game_Loop(int AttractMode);
[[reko::address("0800:476D")]] void DOS_Disk_IO_Play_Music();

[[reko::address("0800:2C50")]] void Game_Pause_Menu(int wArg02, int wArg06);
[[reko::address("1431:000A")]] void Heal_Characters(int Bool_HealedByParty);
[[reko::address("0800:378D")]] void Inspect_Characters();
[[reko::address("0800:3BD0")]] void Menu_Change_Game_Settings();
[[reko::address("0800:3D40")]] void Show_Overhead_Map();

[[reko::address("0800:35D3")]] void Save_Game();

// Text functions
[[reko::address("1E56:03F5")]] void Display_Text_From_Memory(long * __far TextPtr);
[[reko::address("0800:2867")]] void Display_Text_Assign_Item(long TextPtr, int wArg08, int wArg0A);
[[reko::address("0800:2A69")]] void Display_Text_Add_Plural();
[[reko::address("0800:2A7E")]] void Display_Text_051D_Variable(); 
[[reko::address("1F3D:0053")]] void Display_Text_Dynamic_Value(int Value);
[[reko::address("1CD3:1809")]] void Display_Text_Shop_Cannot_Afford_Text();
[[reko::address("1CD3:181E")]] void Display_Text_4FA0_Value();
[[reko::address("0FDC:19E1")]] void Display_nothing_this_time_Text();
[[reko::address("1631:1DAB")]] void Display_Text_From_Memory_IF_11832(long TextPtr);
[[reko::address("1CD3:17EA")]] void Display_Text_From_Memory_ScreenRetrace_KeyboardInput(long TextPtr);
[[reko::address("1E56:0B5E")]] int Display_Menu_Chocies_And_Check(int wArg04);
[[reko::address("1631:1FDF")]] void Display_Text_CBill_Balance();
[[reko::address("0D27:000A")]] static void Print(char *string);

// Graphics functions
[[reko::address("0800:4621")]] void Load_And_Draw_BTTLTECH_ICN();
[[reko::address("0800:46A7")]] void Load_And_Draw_BTTITLE_CMP();
[[reko::address("0800:320B")]] void Load_And_Draw_ANIMATE_ICN();
[[reko::address("0800:4CAC")]] void Draw_Sidebar_4CAC(int wArg04);
[[reko::address("1CD3:17C6")]] void A_Draw_Message_Box();
[[reko::address("1CD3:0004")]] void Citadel_Building_Dialogs(int wArg04);
[[reko::address("0800:48B7")]] void Scene_Mech_Startup(int wArg00, int wArg04, int wArg06);
[[reko::address("1E56:0004")]] void Draw_Menu_CGA_VGA_Gtaphical_Operation(int A);
[[reko::address("1E56:0281")]] void Menu_Memory_Variables(unsigned Index);
[[reko::address("1E56:0388")]] void Draw_Menu_Boarder_Graphics();
[[reko::address("0800:1AFD")]] void Display_Animation_Mech_Startup();

[[reko::address("1F3D:031C")]] int EGA_320x200_XY_minmax(unsigned minX, unsigned minY, unsigned maxX, unsigned maxY, unsigned wArg0C);
[[reko::address("1F3D:0006")]] void Wait_For_N_Vertical_Retraces(unsigned NumberOfRetraces);
[[reko::address("207F:0BA7")]] void BIOS_Set_CGA_Palette(char Palette);
[[reko::address("207F:2CE1")]] void SaveVideoMode_246C_B764(int ptr);
[[reko::address("207F:0260")]] char VGA_Output_Register_03CE(int A, int B, int VGA_Register);         
[[reko::address("207F:0B40")]] void Wait_For_Retrace(unsigned char ContinueDuringVertical);
[[reko::address("207F:0B73")]] char BIOS_Set_Video_Mode(char VideoMode);  
[[reko::address("0800:2A93")]] void Graphics_Operations_2A93();
[[reko::address("1F3D:0086")]] void Graphics_Operations_0086(int wArg04, int wArg06, int wArg08, unsigned wArg0A, int wArg0c, unsigned wArg0E);	   
[[reko::address("1F3D:01FB")]] void Graphic_Operations_01FB(unsigned char wArg04, long wArg06, char wArg08, int wArg0A, int wArg0C);	  
[[reko::address("0800:19F3")]] int Do_Palette_RCL_19F3();

// Sound functions
[[reko::address("1FC5:046E")]] void A_Timer();
[[reko::address("204B:0139")]] void Timer_Frequency(unsigned freq);
[[reko::address("204B:0187")]] void Timer_Operations(int ax, unsigned freq);
[[reko::address("204B:00CF")]] unsigned Get_Timer_Countdown(unsigned Frequency);  
[[reko::address("204B:0048")]] void Programmable_Interval_Timer_Mode_And_Channel_0_Write_structure();
[[reko::address("204B:0091")]] void Programmable_Interval_Timer_Mode_And_Channel_0_Write();
[[reko::address("204B:00B2")]] void Programmable_Interval_Timer_Channel_2_Write();
[[reko::address("204B:02E4")]] void PC_Speakers_ptr_operations_02E4(int A); 
[[reko::address("204B:0306")]] void PC_Speakers_ptr_operations_2_0306(int A);
[[reko::address("204B:00BD")]] void PC_Speaker_ON();
[[reko::address("1FC5:04E4")]] void A_PC_Speaker_OFF();
[[reko::address("207F:0051")]] void PC_Speaker_OFF();
[[reko::address("207F:0067")]] void PC_speaker_OFF_2();
[[reko::address("204B:00C6")]] void PC_Speaker_00C6();
[[reko::address("207F:007D")]] void PC_Speaker_XOR_ptr_freq(int Freq);
[[reko::address("1FC5:0002")]] void Sound_Operations_0002(int wArg04);
[[reko::address("0800:19BF")]] void Play_Sound_Toggle_On_ds_w015C(unsigned Sound);

// Input functions
[[reko::address("1E56:0D1D")]] int Keyboard_Big_Switch_statement(int keypress);
[[reko::address("1F3D:05BC")]] char Keyboard_operations(int wArg04, int wArg06);
[[reko::address("1F3D:002F")]] int Bool_stdin_status_002F();
[[reko::address("1F3D:0259")]] int Keyboard_Get_ASCII_Hex_Input();
[[reko::address("207F:0B8A")]] int Keyboard_GetKey();
[[reko::address("0800:2A2B")]] void Check_For_Input();
[[reko::address("0DAB:0B95")]] void Interrupts_And_Retrace();
[[reko::address("0800:1A13")]] unsigned Keyboard_space_key_pressed_Display_Yes_No(int Display_03EE); //int as bool? 0x00 and 0x01 03FE 03EE

// DOS functions
[[reko::address("207F:2EA4")]] void DOS_IOCTL_GET_DEVICE_INFO();
[[reko::address("207F:2FB2")]] void DOS_write_file_if_Func_Ptr();
[[reko::address("1F3D:0814")]] void DOS_Load_File_to_memory(long * __far FileHandle, int ds, long dwArg08, char wArg0C);
[[reko::address("1F3D:063B")]] void Load_File_To_Memory(long * __far FileHandle, int DestinationOffset, int DestinationSegment);
[[reko::address("207F:33D0")]] unsigned DOS_Load_File(long * __far FileNamePtr, unsigned short Bitflag, unsigned BytesToRead);
[[reko::address("207F:2FB2")]] void DOS_write_file_if_Func_Ptr();
[[reko::address("207F:2E50")]] void DOS_Set_Interrupt_Vector_Partial_ASM();
[[reko::address("207F:2F14")]] void DOS_Terminate(unsigned char wArg04); 
[[reko::address("207F:2F72")]] void DOS_set_interrupt_vector();
[[reko::address("207F:3336")]] void DOS_close_file(int FileHandle);
[[reko::address("207F:3356")]] void DOS_set_file_position(int A, int B, int C);
[[reko::address("207F:3580")]] void DOS_read_file_handler(int FileHandle, long * __far BufferForData, unsigned BytesToRead, int D); //Seems to have an extra push?
[[reko::address("207F:3C82")]] void DOS_Set_Interrupt_Vector( int * __far PtrOffset ); //previously long, is int better?

// Data functions
[[reko::address("0800:29F5")]] int Create_Struct_From_Memory(); //previously unsigned. Better?
[[reko::address("207F:1D8C")]] void Set_Vars_026E_0270(int v026E, int v0270);

// Math functions
[[reko::address("207F:3C6C")]] static char abs(unsigned char x);

// Game Logic
[[reko::address("0800:1C12")]] int Map_Interactables_Building_Or_Items(int wArg04, int wArg06);
[[reko::address("0800:4D57")]] void Menu_Assign_Pilots();
[[reko::address("0800:4CAC")]] void Draw_Siderbar(int ShowBorders); //Valid, int as bool
[[reko::address("0FDC:17B9")]] void Citadel_Building_Greetings();
[[reko::address("0FDC:1A26")]] void Select_Mech_For_Training();
[[reko::address("135D:02A8")]] void Display_StarLeague_Cache_Dialog_Window();
[[reko::address("135D:02D2")]] void StarLeague_HyperPulse_Power_Dialog_Window(int wArg04, int wArg06);
[[reko::address("135D:0288")]] void Holodisk_Flag_Zero_0288();
[[reko::address("183B:2591")]] void Scan_Enemies(int PtrScanningMech);
[[reko::address("183B:273D")]] void Salvage_If_wArg06(int wArg04, int wArg06);

// Image
// void fn1F3D_049D(Eq_21 ds, int32 * ptrArg04, Eq_21 wArg08, Eq_21 wArg0A)
[[reko::address("1F3D:049D")]] void Process_Graphics_File_In_Memory(int ptrMemory, int wArg08, int wArg0A, int wArg0C); //dx, ax - dx, ax

// Confirm valid
[[reko::address("0800:2A4F")]] void Press_A_Key();
[[reko::address("207F:0213")]] void DOS_DirectConsoleOutput(char Character);    
[[reko::address("0800:2913")]] void Request_Diskette_In_Drive(unsigned Drive);
[[reko::address("207F:014C")]] void DOS_SetDrive(char Drive);      
[[reko::address("0800:28CC")]] void Set_Default_Disk_Drive(int Drive);
[[reko::address("207F:3275")]] int DOS_write_file(int wArg04);    
[[reko::address("207F:324A")]] int DOS_write_struct(int wArg04);


// Problem functions - Not translated correctly
[[reko::address("207F:2FDC")]] void Check_Memory_Size_2FDC( [[reko::arg(register,"ax")]] unsigned ax );
[[reko::address("207F:2F9F")]] int SI_Transfer_to_DI();
 
// Unorganised

[[reko::address("0800:28A2")]] void Set_Var_w37WE();
[[reko::address("0800:17BB")]] void Memory_CMP_17BB(int wArg04, int wArg06);
[[reko::address("0800:186F")]] void Arg_While_186F(int wArg04, int wArg06);
[[reko::address("0800:191B")]] void Arg_CMP_191B(unsigned wArg04, unsigned wArg06);
[[reko::address("204B:033C")]] int If_XOR_0x0186_Is_ZERO();      
[[reko::address("207F:37B4")]] int Memory_Operation_37B4();    
[[reko::address("207F:3BDC")]] short If_ds_5367_then_get_stdin_status();
[[reko::address("0800:051B")]] void A_fn0800_051B();
[[reko::address("0800:0E4B")]] void Graphical_Operation_0E4B();
[[reko::address("0800:1732")]] void A_fn0800_1732(int wArg04);
[[reko::address("0800:240B")]] void A_fn0800_240B();
[[reko::address("0800:24C2")]] int A_fn0800_24C2();
[[reko::address("207F:3BB6")]] void fn207F_3BB6(int wArg04, int *ptrArg, int wArg0A);
[[reko::address("0800:051B")]] void Graphical_Operations_051B();
[[reko::address("0800:0E4B")]] void Graphical_Operations_0E4B();
[[reko::address("0800:1A13")]] unsigned Return_Bool_Keyboard_space_key_pressed_Display_Yes_No(int Display_03EE);
[[reko::address("0800:218F")]] int A_fn0800_218F(unsigned KeyPress);
[[reko::address("0800:231D")]] void A_fn0800_231D(unsigned KeyPress);

[[reko::address("0800:3FAE")]] void A_fn0800_3FAE(int wArg04, int wArg06);
[[reko::address("0800:45C2")]] void A_fn0800_45C2(int wArg04);
[[reko::address("0800:48B7")]] void Scene_Mech_Startup(int wArg04, int wArg06);
[[reko::address("0DAB:0002")]] void Salvage_Armour_Dialog();
[[reko::address("0DAB:04F9")]] void Salvage_Mechs_Dialog();
[[reko::address("0DAB:094B")]] void Loot_Enemy_Soldiers_Dialog();
[[reko::address("0DAB:0B5E")]] unsigned Return_Bool_Allow_Computer_Control_Dialog();
[[reko::address("0DAB:1467")]] void Scan_Humans(int wArg08);
[[reko::address("0DAB:18E8")]] void Teammate_suspicious(int wArg04, int wArg06, int wArg08);
[[reko::address("0DAB:1AFE")]] void Examine_Screen_BTSTATS_CMP(int wArg04);
[[reko::address("0FDC:0008")]] void Fathers_Holodisk(int wArg04);
[[reko::address("0FDC:01C0")]] void Large_Switch_Statement(int ptrArg04);
[[reko::address("0FDC:1D30")]] void Load_Indexed_Files(int wArg04);
[[reko::address("11B8:0002")]] void Mechlube_Repair_Mech();
[[reko::address("11B8:080A")]] void Mechlube_Modify_Mech();
[[reko::address("11B8:0925")]] void Mechlube_Upgrade_Mech(unsigned bx);
[[reko::address("11B8:0D58")]] void Teammate_Mech_Assign(int wArg04);
[[reko::address("11B8:1762")]] void Mechlube_Buy_Ammo();
[[reko::address("135D:0004")]] void Draw_STARLEAG_ICN_AND_Game_Logic();
[[reko::address("135D:01E9")]] void StarLeague_Secret_Passageway_Discovered();
[[reko::address("135D:0327")]] void OverHead_Map_Function();
[[reko::address("135D:03AA")]] void StarLeague_Security_Terminal(int wArg04, int wArg06);
[[reko::address("135D:04AB")]] void Game_Progression_Flags(int wArg04, int wArg06);
[[reko::address("135D:055A")]] void StarLeague_Map_Room(int wArg04, int wArg06);
[[reko::address("135D:079C")]] void Draw_STARLEAG_ICN_Scene();
[[reko::address("135D:0980")]] void Map_Interactable_Menu_And_Sound();
[[reko::address("135D:0AB6")]] void StarLeague_Key_Codes(int wArg04, int wArg06, int wArg08);
[[reko::address("1467:0002")]] void Assign_Pilot_and_rider_to_Mechs(int wArg04);
[[reko::address("1467:08A8")]] void Copyright_Check_Mech_Quiz();
[[reko::address("1467:0B98")]] void Display_Text_Mech_Names();
[[reko::address("1631:1DCC")]] void Countdown_or_Keyboard_Input();
[[reko::address("183B:24F0")]] unsigned Return_Bool_Options_Combat_Messages();
[[reko::address("183B:2556")]] unsigned Return_Bool_Options_See_Combat_Graphics();
[[reko::address("1AE8:000C")]] void Combat_Mechanics(int IsCombat);
[[reko::address("1E56:0004")]] void Draw_Menu_CGA_VGA_Graphical_Operation(int wArg04);
[[reko::address("1E56:01E7")]] void CGA_VGA_Graphical_Operation(int ptrArg04, int wArg08, int wArg0A, int wArg0C, int wArg0E, int wArg10);
[[reko::address("1F3D:002F")]] unsigned Return_Bool_stdin_status();
[[reko::address("1F3D:06C3")]] void Back_to_Game_Graphics_Operation();
[[reko::address("1F3D:086A")]] void Wait_For_50Hz_Then_Check_Input();
[[reko::address("204B:02E4")]] void Tandy_1000_PC_Speakers(int Value);
[[reko::address("207F:0030")]] void PC_Speaker_ON_ptr_freq(short freq);
[[reko::address("207F:1DA8")]] void A_fn207F_1DA8();
[[reko::address("207F:245C")]] int VGA_Operation(int wArg04, int wArg06, int wArg05, int wArg0A, int wArg0C, unsigned wArg0E, int wArg10, unsigned wArg12);
