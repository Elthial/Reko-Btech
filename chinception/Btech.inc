// Main functions
[[reko::address("207F:2D82")]] void Main();
[[reko::address("0D27:0044")]] unsigned char Setup_Game(); //int A, int B, int C, int D, int E
[[reko::address("0800:50C8")]] void Start_Game();
[[reko::address("0800:0000")]] void Main_Game_Loop(int AttractMode);
[[reko::address("0800:476D")]] void DOS_Disk_IO_Play_Music();

[[reko::address("0800:2C50")]] void Game_Pause_Menu();
[[reko::address("1431:000A")]] void Heal_Characters(int Bool_HealedByParty);
[[reko::address("0800:378D")]] void Inspect_Characters();
[[reko::address("0800:3BD0")]] void Menu_Change_Game_Settings();
[[reko::address("0800:3D40")]] void Show_Overhead_Map();
[[reko::address("135D:0327")]] void OverHead_Map_Function();
[[reko::address("1CD3:0004")]] void Citadel_Building_Dialogs(int wArg04);
[[reko::address("0800:35D3")]] void Save_Game();
[[reko::address("0800:32B3")]] void Load_Game();

// Text functions
[[reko::address("1E56:03F5")]] void Display_Text_From_Memory(char * __far TextPtr);
[[reko::address("0800:2867")]] void Display_Text_Assign_Item(char * __far TextPtr, int wArg08, int wArg0A);
[[reko::address("0800:2A69")]] void Display_Text_Add_Plural();
[[reko::address("0800:2A7E")]] void Display_Text_051D_Variable(); 
[[reko::address("1F3D:0053")]] void Display_Text_Dynamic_Value(int Value);
[[reko::address("1CD3:1809")]] void Display_Text_Shop_Cannot_Afford_Text();
[[reko::address("1CD3:181E")]] void Display_Text_4FA0_Value();
[[reko::address("0FDC:19E1")]] void Display_nothing_this_time_Text();
[[reko::address("1631:1DAB")]] void Display_Text_From_Memory_IF_11832(char * __far TextPtr);
[[reko::address("1CD3:17EA")]] void Display_Text_From_Memory_ScreenRetrace_KeyboardInput(int * __far TextPtr);
[[reko::address("1E56:0B5E")]] int Display_Menu_Chocies_And_Check(int wArg04);
[[reko::address("1631:02E4")]] void Display_Text_Human(int wArg04);
[[reko::address("1467:0B98")]] void Display_Text_Mech_Names();
[[reko::address("1631:1FDF")]] void Display_Text_CBill_Balance();
[[reko::address("0D27:000A")]] static void Print(char * __far Text);

// Graphics functions
[[reko::address("0DAB:0C8F")]] void Set_Video_Mode();
[[reko::address("0DAB:0D12")]] void Set_Video_Mode_to_Text_Mode();
[[reko::address("0800:4621")]] void Load_And_Draw_BTTLTECH_ICN();
[[reko::address("0800:46A7")]] void Load_And_Draw_BTTITLE_CMP();
[[reko::address("0800:320B")]] void Load_And_Draw_ANIMATE_ICN();
[[reko::address("0800:4CAC")]] void Draw_Sidebar_4CAC(int wArg04);
[[reko::address("1CD3:17C6")]] void A_Draw_Message_Box();

[[reko::address("0800:48B7")]] void Scene_Mech_Startup(int wArg00, int wArg04, int wArg06);
[[reko::address("1E56:0004")]] void Draw_Menu_CGA_VGA_Gtaphical_Operation(int A);
[[reko::address("1E56:0281")]] void Menu_Memory_Variables(unsigned Index);
[[reko::address("1E56:0388")]] void Draw_Menu_Boarder_Graphics();
[[reko::address("0800:1AFD")]] void Display_Animation_Mech_Startup();

[[reko::address("1F3D:031C")]] void EGA_320x200_XY_minmax(unsigned minX, unsigned minY, unsigned maxX, unsigned maxY, unsigned wArg0C);
[[reko::address("1F3D:0006")]] void Wait_For_N_Vertical_Retraces(unsigned NumberOfRetraces);
[[reko::address("207F:0BA7")]] void BIOS_Set_CGA_Palette(char Palette);
[[reko::address("207F:2CE1")]] void SaveVideoMode_246C_B764(int ptr);
[[reko::address("207F:0260")]] void Write_Image_To_VGA_Memory(int * __far Image, int VGA_Memory);         
[[reko::address("207F:0B40")]] void Wait_For_Retrace(unsigned char ContinueDuringVertical);
[[reko::address("207F:0B73")]] char BIOS_Set_Video_Mode(char VideoMode);  
[[reko::address("0800:2A93")]] void Graphics_Operations_2A93();
[[reko::address("1F3D:0086")]] void Graphics_Operations_0086(int * __far Ptr, int wArg08, unsigned wArg0A, int wArg0c, unsigned wArg0E);	   
[[reko::address("1F3D:01FB")]] void Graphic_Operations_01FB(unsigned char wArg04, int wArg06, char wArg08, int wArg0A, int wArg0C);	  
[[reko::address("0800:19F3")]] int Do_Palette_RCL_19F3();
[[reko::address("1F3D:0525")]] void Set_Palette_registers(int * __far Ptr);
[[reko::address("207F:00D1")]] void CGA_Copy_To_Memory(int * __far Ptr);

[[reko::address("1F3D:049D")]] void Process_Graphics_File_In_Memory(int * __far PtrSource, int * __far PtrDestination); 

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
[[reko::address("1FC5:047B")]] void Sound_Ptr_Operation_047B(int wArg04, int wArg06);
[[reko::address("1FC5:04F1")]] void Sound_Freq_Loop(int wArg04, int wArg06, int wArg08);
[[reko::address("1FC5:059A")]] void Sound_Operation_059A(int wArg94, int wArg06, int wArg08, int wArg0A);
[[reko::address("1FC5:0643")]] void Sound_Operation_0643(int wArg04, int wArg06, int wArg08, int wArg0A, int wArg0C);
[[reko::address("1FC5:0747")]] void Sound_Streaming_1(int wArg04, int wArg06, int wArg08, int wArg0A, int wArg0C);
[[reko::address("1FC5:07DA")]] void Sound_Streaming_2(int wArg04, int wArg06, int wArg08, int wArg0A, int wArg0C);
[[reko::address("204B:02E4")]] void Tandy_1000_PC_Speakers(int Value);
[[reko::address("207F:0030")]] void PC_Speaker_ON_ptr_freq(short freq);

// Input functions
[[reko::address("1E56:0D1D")]] int Keyboard_Big_Switch_statement(int keypress);
[[reko::address("1F3D:05BC")]] char Keyboard_operations(int wArg04, int wArg06);
[[reko::address("1F3D:002F")]] int Bool_stdin_status_002F();
[[reko::address("1F3D:0259")]] int Keyboard_Get_ASCII_Hex_Input();
[[reko::address("207F:0B8A")]] int Keyboard_GetKey();
[[reko::address("0800:2A2B")]] void Check_For_Input();
[[reko::address("0DAB:0B95")]] void Interrupts_And_Retrace();
[[reko::address("0800:1A13")]] bool Keyboard_space_key_pressed_Display_Yes_No(int Display_03EE); //bool or unsigned?

// DOS functions
[[reko::address("207F:2EA4")]] void DOS_IOCTL_GET_DEVICE_INFO();
[[reko::address("207F:3C82")]] void DOS_Set_Interrupt_Vector( int * __far PtrOffset ); 
[[reko::address("207F:2E50")]] void DOS_Set_Interrupt_Vector_Partial_ASM();
[[reko::address("207F:2F72")]] void DOS_set_interrupt_vector();
[[reko::address("207F:2E3B")]] void DOS_Interrupts_Preamble_2E3B();
[[reko::address("207F:2E76")]] void DOS_Interrupt_Vector_Post_2E76();
[[reko::address("207F:32A0")]] int DOS_memory_resize_perhaps(int *ax);
[[reko::address("207F:0213")]] void DOS_DirectConsoleOutput(char Character);    
[[reko::address("0800:2913")]] void Request_Diskette_In_Drive(unsigned Drive);
[[reko::address("207F:014C")]] void DOS_SetDrive(char Drive);      
[[reko::address("0800:28CC")]] void Set_Default_Disk_Drive(int Drive);
// DOS Write
[[reko::address("207F:2FB2")]] void DOS_write_file_if_Func_Ptr();
[[reko::address("207F:366A")]] int DOS_write_memory_to_save_file(int wArg04, int *ptrArg05, int wArg0A);
[[reko::address("207F:377A")]] int DOS_Return_file_write_ptr_377A(int ds_bx);
[[reko::address("207F:3000")]] bool Return_Bool_DOS_Write_function();
[[reko::address("207F:3275")]] int DOS_write_file(int wArg04);    
[[reko::address("207F:324A")]] int DOS_write_struct(int wArg04);
// DOS Load
[[reko::address("207F:33D0")]] unsigned DOS_Load_File(int * __far FileName, unsigned char Bitflag);
[[reko::address("0800:2DA8")]] void DOS_Load_Multiple_Files(int wArg04, int wArg06);
[[reko::address("1F3D:0814")]] void DOS_Load_File_to_memory(int * __far Filename, int * __far BufferForData, int FileHandle);
[[reko::address("1F3D:063B")]] void Load_File_To_Memory(int * __far FileName, int * __far Memory);
[[reko::address("207F:356F")]] int DOS_Load_File_Check(int cx);
[[reko::address("0FDC:1D30")]] void Load_Indexed_Files(int Index);
// DOS File Read
[[reko::address("207F:3356")]] void DOS_set_file_position(int FileHandle, int B, int C, int D); // Needs work
[[reko::address("207F:3580")]] void DOS_read_file_handler(int FileHandle, int * __far BufferForData, unsigned BytesToRead);
// DOS Close / Terminate
[[reko::address("207F:3336")]] void DOS_close_file(int FileHandle);
[[reko::address("207F:2F14")]] void DOS_Terminate(unsigned char wArg04); 









// Data functions
[[reko::address("0800:29F5")]] int Create_Struct_From_Memory(); //previously unsigned. Better?
[[reko::address("207F:1D8C")]] void Set_Vars_026E_0270(int * __far Ptr);
[[reko::address("207F:0572")]] void VGA_Carry_Left_Operations(int * __far PtrSource, int * __far PtrDestination, unsigned BytesToRead);
[[reko::address("207F:0A76")]] void Copy_From__Memory_Source_to_Dest(int * __far PtrSource, int * __far PtrDestination, unsigned BytesToRead);

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
[[reko::address("1AE8:000C")]] void Combat_Mechanics(int IsCombat);
[[reko::address("183B:000A")]] void Combat_Parent_000A(int wArg04);

// Confirm valid
[[reko::address("0800:2A4F")]] void Press_A_Key();



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
[[reko::address("207F:3BB6")]] void fn207F_3BB6(int * __far Ptr, char * __far TextPtr);
[[reko::address("0800:051B")]] void Graphical_Operations_051B();
[[reko::address("0800:0E4B")]] void Graphical_Operations_0E4B();

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

[[reko::address("11B8:0002")]] void Mechlube_Repair_Mech();
[[reko::address("11B8:080A")]] void Mechlube_Modify_Mech();
[[reko::address("11B8:0925")]] void Mechlube_Upgrade_Mech(unsigned bx);
[[reko::address("11B8:0D58")]] void Teammate_Mech_Assign(int wArg04);
[[reko::address("11B8:1762")]] void Mechlube_Buy_Ammo();
[[reko::address("135D:0004")]] void Draw_STARLEAG_ICN_AND_Game_Logic();
[[reko::address("135D:01E9")]] void StarLeague_Secret_Passageway_Discovered();

[[reko::address("135D:03AA")]] void StarLeague_Security_Terminal(int wArg04, int wArg06);
[[reko::address("135D:04AB")]] void Game_Progression_Flags(int wArg04, int wArg06);
[[reko::address("135D:055A")]] void StarLeague_Map_Room(int wArg04, int wArg06);
[[reko::address("135D:079C")]] void Draw_STARLEAG_ICN_Scene();
[[reko::address("135D:0980")]] void Map_Interactable_Menu_And_Sound();
[[reko::address("135D:0AB6")]] void StarLeague_Key_Codes(int wArg04, int wArg06, int wArg08);
[[reko::address("1467:0002")]] void Assign_Pilot_and_rider_to_Mechs(int wArg04);
[[reko::address("1467:08A8")]] void Copyright_Check_Mech_Quiz();

[[reko::address("1631:1DCC")]] void Countdown_or_Keyboard_Input();
[[reko::address("183B:24F0")]] unsigned Return_Bool_Options_Combat_Messages();
[[reko::address("183B:2556")]] unsigned Return_Bool_Options_See_Combat_Graphics();

[[reko::address("1E56:0004")]] void Draw_Menu_CGA_VGA_Graphical_Operation(int wArg04);
[[reko::address("1E56:01E7")]] void CGA_VGA_Graphical_Operation(int ptrArg04, int wArg08, int wArg0A, int wArg0C, int wArg0E, int wArg10);
[[reko::address("1F3D:002F")]] unsigned Return_Bool_stdin_status();
[[reko::address("1F3D:06C3")]] void Back_to_Game_Graphics_Operation();
[[reko::address("1F3D:086A")]] void Wait_For_50Hz_Then_Check_Input();

[[reko::address("207F:1DA8")]] void A_fn207F_1DA8();
[[reko::address("207F:245C")]] void VGA_Operation(int wArg04, int wArg06, int wArg05, int wArg0A, int wArg0C, unsigned wArg0E, int wArg10, unsigned wArg12);

[[reko::address("0800:4DC7")]] void Attract_Mode();

[[reko::address("0DAB:0D3D")]] void Combat_engaged();
[[reko::address("0DAB:174C")]] void Examine_Screen_Graphics(int wArg04, int wArg06, int wArg08, int wArg0A);
[[reko::address("0DAB:1858")]] void Examine_Screen_Graphics_2(int wArg04, int wArg06, int wArg08, int wArg0A);
[[reko::address("0FDC:05F7")]] unsigned A_fn0FDC_05F7(int *ptrArg04);
[[reko::address("0FDC:0629")]] void Mech_Mission_0629(int wArg04);
[[reko::address("0FDC:0D49")]] void Palette_Operations(int wArg04, int wArg06);
[[reko::address("0FDC:134B")]] void Graphical_Operations__134B();
[[reko::address("0FDC:13DE")]] void Weapon_inventory_13DE(int wArg04, int wArg06);
[[reko::address("0FDC:15E6")]] void Weapon_inventory_2_15E6(int wArg04);
[[reko::address("0FDC:1B41")]] void Mech_Mission_Function();
[[reko::address("0FDC:1C9B")]] void Mech_Mission_function_2();
[[reko::address("11B8:104E")]] void Building_Operation_104E();
[[reko::address("11B8:137F")]] void Mech_Mission_Operation_137f();
[[reko::address("11B8:1441")]] void Mech_Mission_Operation_1441();
[[reko::address("11B8:152F")]] void Building_Operation_152F();
[[reko::address("11B8:16B2")]] void Scene_Mech_Refuse_To_Start();
[[reko::address("135D:0913")]] void Map_Interactable_Play_Sound(int wArg04, int wArg06);
[[reko::address("1467:0D7E")]] void A_fn1467_0D7E();
[[reko::address("0800:4AA6")]] void EGA_Operations_4AA6(int wArg04, int wArg06);
[[reko::address("0800:4BC1")]] void EGA_Operation_4BC1(int wArg04, unsigned wArg06, int wArg08);
[[reko::address("1543:0C72")]] void While_Less_Than_26_Function(int bool_Arg);
[[reko::address("1543:0CDE")]] unsigned Money_Balance_Function();
[[reko::address("1631:0006")]] void A_fn1631_0006(int wArg04, int wArg06, int wArg08, int wArg0c, int BoolValue);
[[reko::address("1631:0C63")]] void A_fn1631_0C63(int * __far ptrArg04);
[[reko::address("1631:11AB")]] int Case_Statement_11AB(int wArg04, int wArg06);
[[reko::address("1631:15FA")]] int Return_bool_fn1631_15FA(int *ptrArg04, int LessThanCond);
[[reko::address("1631:163E")]] int A_fn1631_163E(int * __far ptr, int wArg08);
[[reko::address("1631:16AB")]] int Return_bool_fn1631_16AB(int wARg04, int wArg0A);
[[reko::address("1631:1B44")]] int A_fn1631_1B44(int wArg04, int wArg06);
[[reko::address("1631:1B8F")]] void A_fn1631_1B8F(int eqCond);
[[reko::address("1631:1BFE")]] int Return_bool_fn1631_1BFE(int wArg06, int wArg08, int wArg0A);
[[reko::address("183B:1482")]] void A_fn183B_1482(int wArg04);
[[reko::address("183B:22BC")]] void A_fn183B_22BC(int wArg04, int wArg06);
[[reko::address("183B:2474")]] void A_fn183B_2474(int wArg04);
[[reko::address("183B:27C9")]] void A_fn183B_27C9(unsigned char bARg04, unsigned char bArg06, unsigned char bArg08);
[[reko::address("1E56:07CB")]] void A_fn1E56_07CB(int ptrArg04, int wArg08);
[[reko::address("1E56:0A3B")]] void A_fn1E56_0A3B(int * __far ptr, int wArg08, int wArg0A, int wArg0C, int wArg0E);
[[reko::address("1E56:0AE5")]] void A_fn1E56_0AE5(int * __far ptr, int wArg08, int wArg0A, int wARg0C);
[[reko::address("1F3D:00D5")]] void Graphical_Operations_00D5(int * __far ptr, int wArg08, int wArg0A, unsigned char bArg0C, unsigned char bArg0E);
[[reko::address("207F:01D7")]] void Copy_Struct_Operation(int WhileEndCond, int SourceStruct);
[[reko::address("207F:0931")]] void A_fn207F_0931(int wArg04, int wArg06, int wArg08, int wArg0A, unsigned char bArg0C, unsigned char bArg0E, int wArg10);
[[reko::address("207F:0B26")]] unsigned CGA_Return_Vertical_Retrace_Status();
[[reko::address("207F:0BFB")]] unsigned char Struct_Loop_Operations_0BFB(int di);
[[reko::address("207F:1886")]] void A_fn207F_1886(unsigned char al);
[[reko::address("207F:1B71")]] void A_fn207F_1B71();
[[reko::address("207F:24D7")]] int VGA_24D7();
[[reko::address("207F:3026")]] void A_fn207F_3026();
[[reko::address("207F:31CE")]] int A_Memory_Function_31CE();
[[reko::address("1F3D:070A")]] void A_fn1F3D_070A(int wArg04, int wArg06, int wArg08, unsigned char bArg0a, unsigned char wArg0C);
[[reko::address("1631:03AB")]] void A_fn1631_03AB(int wArg04, int wArg06);
[[reko::address("1631:0BB5")]] unsigned A_fn1631_0BB5(int wArg04, int wArg06);
[[reko::address("207F:37DA")]] int A_fn207F_37DA(int wArg04);
[[reko::address("207F:3835")]] int Return_bool_fn207F_3835(int wArg04);
[[reko::address("207F:3874")]] bool Return_Bool_3874();
[[reko::address("207F:38E2")]] bool fn207F_38E2();
[[reko::address("207F:38FD")]] bool A_fn207F_38FD(int *ptrArg00);
[[reko::address("207F:3A3C")]] bool A_fn207F_3A3C(int *ax, int *es);
[[reko::address("207F:3BDC")]] int If_ds_5367_then_check_for_stdin_input();
[[reko::address("207F:3CD8")]] void Unused_Function_3CD8();
[[reko::address("207F:3E62")]] unsigned rotate_with_carry_do_while(unsigned wArg04, unsigned wArg06, unsigned wArg08, unsigned wArg0A);
[[reko::address("207F:1ECE")]] void a_fn207F_1ECE(int * __far ptr, int B);
[[reko::address("207F:1F04")]] void A_fn207F_1F04(int wArg04);
[[reko::address("207F:1F51")]] void A_fn207F_1F51(int wArg04);
[[reko::address("207F:1AF4")]] void A_fn207F_1AF4();
[[reko::address("207F:1B1A")]] void Struct_Copy_Operation_1B1A();
[[reko::address("207F:1B94")]] void Struct_Copy_Operation_1B94();
[[reko::address("207F:1BDF")]] void VGA_8_loop_1BDF();
[[reko::address("207F:00A9")]] void Sound_Freq_Countdown_Loop(int wArg04, int wArg06);
[[reko::address("1631:1057")]] void Display_Text_And_Menu_Options(int * __far Ptr);
[[reko::address("207F:1ACE")]] void A_fn207F_1ACE();
[[reko::address("207F:104E")]] void data_structure(int wArg04);
[[reko::address("207F:23EC")]] int fn207F_23EC(int wArg04, int wArg06, int * __far ptr);
[[reko::address("207F:39E0")]] void A_fn207F_39E0();
[[reko::address("207F:3A1A")]] void A_fn207F_3A1A();
[[reko::address("207F:3ACC")]] bool A_fn207F_3ACC();
[[reko::address("207F:3B22")]] void A_fn207F_3B22(int * __far ptr, int * __far ptr2);
[[reko::address("207F:3B68")]] void A_fn207F_3B68(int * __far ptr, int * __far ptr2);
[[reko::address("207F:3B9E")]] void A_fn207F_3B9E(int * __far ptr);
[[reko::address("207F:3BB6")]] void A_fn207F_3BB6(int wArg04, int * __far ptr, int wArg08);
[[reko::address("207F:3BD2")]] void CBill_Function(int A, int B, int * __far ptr); 

[[reko::address("207F:28A8")]] void CopyStructAToStructB(unsigned int SourceOffset, int SourceSegment, unsigned int DestinationOffset, int DestinationSegment);
[[reko::address("207F:200E")]] void Video_CGA_Variable_Operations_200E(int * __far Ptr, int wArg04, int wArg06, int wArg08, int wArg0A);
[[reko::address("207F:21A8")]] void Tandy_1000_Operation_21A8( int A, int * __far Ptr);
[[reko::address("207F:2209")]] void CGA_Operation_2209(int A, int * __far Ptr);
[[reko::address("207F:2251")]] void VGA_Graphics_Address_Register_2251(int A, int * __far Ptr);
[[reko::address("207F:22A5")]] void MCGA_Operation_22A5( int A, int * __far Ptr);
[[reko::address("207F:0A26")]] void CGA_Screen_Resolutions_Operations_0A26(int *__far Ptr1, int * __far Ptr2);
[[reko::address("207F:158C")]] void A_fn207F_158C();
[[reko::address("207F:05D0")]] void EGA_register_05D0(int wArg04, int wArg06, int wArg08, int wArg0A);
[[reko::address("207F:0163")]] void CGA_Struct_Operations_0163(int * __far Ptr1, int * __far Ptr2, int A, int B);
[[reko::address("207F:022A")]] void VGA_Set_Palette_Registers_in_out(unsigned char OutA, unsigned char OutB);
[[reko::address("1F3D:03EB")]] void EGA_operations_03EB(int wArg04, int wArg06, int wArg08, int wArg0A);
[[reko::address("183B:1774")]] void A_fn183B_1774(int wArg04, int wArg06);