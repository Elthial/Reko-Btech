 
typedef struct Infantry
{
	unsigned char Name;
    unsigned char Body;
    unsigned char Dexterity;
    unsigned char Charisma;
    unsigned char Skill_BowsAndBlade;
    unsigned char Skill_Pistol;
    unsigned char Skill_Rifle;
    unsigned char Skill_Gunnery;
    unsigned char Skill_Piloting;
    unsigned char Skill_Tech;
    unsigned char Skill_Medical;  
    unsigned char Weapon;
    unsigned char Piloting;
    unsigned char ArmourType;
    unsigned char ArmourValue;
    unsigned char Health;
    unsigned char Riding;
} Infantry;

typedef struct Mech 
{
		unsigned char Name[16];
		unsigned char Tonnage;
		unsigned char CurrentArmour[11];
		unsigned char CurrentStructure[8];
		unsigned char CurrentActuators[4];
		unsigned char EngineHeatsinks;
		unsigned char CurrentAmmo[10];
		unsigned char WalkMove;
		unsigned char JumpMove;
		unsigned char Critical_L_Arm[7];
		unsigned char Critical_L_Torso[7];
		unsigned char Critical_R_Arm[7];
		unsigned char Critical_R_Torso[7];
		unsigned char Critical_L_Leg[2];
		unsigned char Critical_R_Leg[2];
		unsigned char Critical_C_Torso[2];
		unsigned char Critical_Head;
		unsigned char Maxrmour[11];
		unsigned char MaxStructure[8];
		unsigned char MaxActuators[4];
		unsigned char MaxAmmo[10];
		unsigned char Unknown_00;
		unsigned char Unknown_01;
		unsigned char Unknown_02;
		unsigned char Unknown_03;
} Mech;

typedef struct Weapon
{
	unsigned char Name[11];
	unsigned char Damage;
	unsigned char UnknownValue00;
	unsigned char Heat;
	unsigned char UnknownValue01;
	unsigned char UnknownValue02;
	unsigned char SkillType;
} Weapon;


//------------------------------------------------------------------
//Infantry Variables
//------------------------------------------------------------------
//Crescent Hawk Members
[[reko::address("3092:C614")]] Infantry AllInfantry[16]; //C614 <-- Whole array
//[[reko::address("3092:C614")]] Infantry CrescentHawk00_Jason; //SAVE_Offset: 0x0001;
//[[reko::address("3092:C625")]] Infantry CrescentHawk01_Rex;   //SAVE_Offset: 0x0012;
//[[reko::address("3092:C636")]] Infantry CrescentHawk02;       //SAVE_Offset: 0x0023;
//[[reko::address("3092:C647")]] Infantry CrescentHawk03;       //SAVE_Offset: 0x0034;
//[[reko::address("3092:C658")]] Infantry CrescentHawk04;       //SAVE_Offset: 0x0045;
//[[reko::address("3092:C669")]] Infantry CrescentHawk05;       //SAVE_Offset: 0x0056;
//[[reko::address("3092:C67A")]] Infantry CrescentHawk06;       //SAVE_Offset: 0x0067;
//[[reko::address("3092:C68B")]] Infantry CrescentHawk07;       //SAVE_Offset: 0x0078;

//Enemy Infantry
//[[reko::address("3092:C69C")]] Infantry Enemy00;              //SAVE_Offset: 0x0089;
//[[reko::address("3092:C6AD")]] Infantry Enemy01;              //SAVE_Offset: 0x009A;
//[[reko::address("3092:C6BE")]] Infantry Enemy02;              //SAVE_Offset: 0x00AB;
//[[reko::address("3092:C6CF")]] Infantry Enemy03;              //SAVE_Offset: 0x00BC;
//[[reko::address("3092:C6E0")]] Infantry Enemy04;              //SAVE_Offset: 0x00CD;
//[[reko::address("3092:C6F1")]] Infantry Enemy05;              //SAVE_Offset: 0x00DE;
//[[reko::address("3092:C702")]] Infantry Enemy06;              //SAVE_Offset: 0x00EF;
//[[reko::address("3092:C713")]] Infantry Enemy07;              //SAVE_Offset: 0x0100;

//------------------------------------------------------------------
//Mech Variables
//------------------------------------------------------------------
//Crescent Hawk
[[reko::address("3092:C724")]] Mech Mechs[8]; //C724 <-- whole array
//[[reko::address("3092:C724")]] Mech CrescentHawkMech00; //SAVE_Offset: 0x0111;
//[[reko::address("3092:C7A1")]] Mech CrescentHawkMech01; //SAVE_Offset: 0x018E;
//[[reko::address("3092:C81E")]] Mech CrescentHawkMech02; //SAVE_Offset: 0x020B;
//[[reko::address("3092:C89B")]] Mech CrescentHawkMech03; //SAVE_Offset: 0x0288; 

//Enemy Mechs
//[[reko::address("3092:C918")]] Mech EnemyMech00; //SAVE_Offset: 0x0305;
//[[reko::address("3092:C995")]] Mech EnemyMech01; //SAVE_Offset: 0x0382;
//[[reko::address("3092:CA12")]] Mech EnemyMech02; //SAVE_Offset: 0x03FF;
//[[reko::address("3092:CA8F")]] Mech EnemyMech03; //SAVE_Offset: 0x047C; 

//Mech Reference Stats
[[reko::address("2FE8:02F0")]] Mech LOCUST;      //Reference Stats
[[reko::address("2FE8:036D")]] Mech WASP;        //Reference Stats
[[reko::address("2FE8:03EA")]] Mech STINGER;     //Reference Stats
[[reko::address("2FE8:0467")]] Mech COMMANDO;    //Reference Stats
[[reko::address("2FE8:04E4")]] Mech CHAMELEON;   //Reference Stats
[[reko::address("2FE8:0561")]] Mech JENNER;      //Reference Stats
[[reko::address("2FE8:05DE")]] Mech Spectator;   //Reference Stats - Arena Floating Camera
[[reko::address("2FE8:065B")]] Mech URBANMECH;   //Reference Stats

//Weapon Reference Stats
[[reko::address("3EDB:2ED8")]] Weapon Weapons[32];   //Reference Stats
//[[reko::address("3EDB:2ED8")]] Weapon Cludgel;       //Reference Stats
//[[reko::address("3EDB:2EE9")]] Weapon Knife;         //Reference Stats
//[[reko::address("3EDB:2EFA")]] Weapon Sword;         //Reference Stats
//[[reko::address("3EDB:2F0B")]] Weapon Vibroblade;    //Reference Stats
//[[reko::address("3EDB:2F1C")]] Weapon Shortbow;      //Reference Stats
//[[reko::address("3EDB:2F2D")]] Weapon Longbow;       //Reference Stats
//[[reko::address("3EDB:2F3E")]] Weapon Crossbow;      //Reference Stats
//[[reko::address("3EDB:2F4F")]] Weapon Pistol;        //Reference Stats
//[[reko::address("3EDB:2F60")]] Weapon Rifle;         //Reference Stats
//[[reko::address("3EDB:2F71")]] Weapon MachineGun;    //Reference Stats
//[[reko::address("3EDB:2F82")]] Weapon SRMissile;     //Reference Stats
//[[reko::address("3EDB:2F93")]] Weapon Inferno;       //Reference Stats
//[[reko::address("3EDB:2FA4")]] Weapon LaserPistl;    //Reference Stats
//[[reko::address("3EDB:2FB5")]] Weapon LaserRifle;    //Reference Stats
//[[reko::address("3EDB:2FC6")]] Weapon Flamer;        //Reference Stats
//[[reko::address("3EDB:2FD7")]] Weapon SmallLaser;    //Reference Stats
//[[reko::address("3EDB:2FE8")]] Weapon MedLaser;      //Reference Stats
//[[reko::address("3EDB:2FF9")]] Weapon LargeLaser;    //Reference Stats
//[[reko::address("3EDB:300A")]] Weapon PPC;           //Reference Stats
//[[reko::address("3EDB:301B")]] Weapon AutoCann2;     //Reference Stats
//[[reko::address("3EDB:302C")]] Weapon AutoCann5;     //Reference Stats
//[[reko::address("3EDB:303D")]] Weapon AutoCan10;     //Reference Stats
//[[reko::address("3EDB:304E")]] Weapon AutoCan20;     //Reference Stats
//[[reko::address("3EDB:305F")]] Weapon MachineGun;    //Reference Stats
//[[reko::address("3EDB:3070")]] Weapon Flamer;        //Reference Stats
//[[reko::address("3EDB:3081")]] Weapon LRMissile5;    //Reference Stats
//[[reko::address("3EDB:3092")]] Weapon LRMissil10;    //Reference Stats
//[[reko::address("3EDB:30A3")]] Weapon LRMissil15;    //Reference Stats
//[[reko::address("3EDB:30B4")]] Weapon LRMissil20;    //Reference Stats
//[[reko::address("3EDB:30C5")]] Weapon SMRissile2;    //Reference Stats
//[[reko::address("3EDB:30D6")]] Weapon SRMissile4;    //Reference Stats
//[[reko::address("3EDB:30E7")]] Weapon SRMissile6;    //Reference Stats
//[[reko::address("3EDB:30F8")]] Weapon Kick;          //Reference Stats



//Game Variables
[[reko::address("3092:CB0C")]] unsigned short Map_FogOfWar_Visibility[2048]; //SAVE_Offset: 0x0F45;    
[[reko::address("246C:A44B")]] unsigned short CrescentHawk_MapPositionX; //SAVE_Offset: 0x0F45;  //tA44B
[[reko::address("246C:A44D")]] unsigned short CrescentHawk_MapPositionY; //SAVE_Offset: 0x0F47;  //tA44D

[[reko::address("3EDB:4FBA")]] unsigned char GraphicsAdapter;
[[reko::address("3EDB:52E5")]] int DOS_Interrupt;
[[reko::address("3EDB:52F9")]] int DOS_Version;
[[reko::address("246C:B764")]] unsigned char Video_Mode;

[[reko::address("3092:D30C")]] unsigned char PrimaryBoolList[64]; // D30C

[[reko::address("3092:4004")]] unsigned short CharacterPosX_Mech[8];  
[[reko::address("3092:400C")]] unsigned short CharacterPosX_OnFoot[8];
[[reko::address("3092:4014")]] unsigned short EnemyPosX_Mech[8]; 
//[[reko::address("3092:4020")]] unsigned short CharacterPosX_Mech_UrbanMech01; //w4020 <-- Arena Escape - part of EnemyPosX_Mech[7]
//[[reko::address("3092:4022")]] unsigned short CharacterPosX_Mech_UrbanMech02; //w4022 <-- Arena Escape - part of EnemyPosX_Mech[8]	
[[reko::address("3092:CB0C")]] unsigned char MapPosX[12]; 

[[reko::address("3092:4036")]] unsigned short CharacterPosY_Mech[8];	
[[reko::address("3092:403E")]] unsigned short CharacterPosY_OnFoot[8]; 
[[reko::address("3092:4046")]] unsigned short EnemyPosY_Mech[8]; 
//[[reko::address("3092:w4052")]] unsigned short CharacterPosY_Mech_UrbanMech01; // w4052 <-- Arena Escape # - part of EnemyPosY_Mech[7]
//[[reko::address("3092:w4054")]] unsigned short CharacterPosY_Mech_UrbanMech02; // w4054 <-- Arena Escape # - part of EnemyPosY_Mech[8]	
[[reko::address("3092:4056")]] unsigned char MapPosY[12]; 

[[reko::address("3092:406A")]] unsigned short Character_OnMap[8];
[[reko::address("3092:4072")]] unsigned short OnMap_Infantry[8];
[[reko::address("3092:407A")]] unsigned short OnMap_EnemyCharacter[8]; 
//[[reko::address("3092:4088")]] unsigned short OnMap_UrbanMech01; //w = Visible / On Map? - part of OnMap_EnemyCharacter[8]
//[[reko::address("3092:4086")]] unsigned short OnMap_UrbanMech02; //w = Visible / On Map? - part of OnMap_EnemyCharacter[7]

[[reko::address("3092:4564")]] unsigned short MapInteractable_PosX[16];
[[reko::address("3092:4596")]] unsigned short MapInteractable_PosY[16];


[[reko::address("3EDB:0EAE")]] unsigned long SalvagedComponentsFromSkill[3]; //3EDB:0EAE " and heat sinks."; //3EDB:0EBE ", heat sinks and weapons." //3EDB:0ED7 ", heat sinks, weapons and structure."

//--------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------
//Functions
//--------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------

//Game Structure
[[reko::address("0800:50C8")]] void Start_Game();
[[reko::address("0D27:0044")]] void Setup_Game(); 
[[reko::address("0800:4DC7")]] void Load_Game_Map_Data();
[[reko::address("0DAB:0B5E")]] unsigned char Return_Bool_Allow_Computer_Control_Dialog();
[[reko::address("0FDC:1D30")]] void Load_Indexed_BLD_Files(unsigned char BLD_FileIndex);

//Memory
[[reko::address("207F:2FDC")]] [[reko::characteristics({alloca:true})]] [[reko::returns(register,"sp")]] char *alloca([[reko::arg(register,"ax")]] unsigned ax );
[[reko::address("1F3D:05BC")]] void Debug_MemoryErrors_For_Sprite_Load(unsigned long); //Remove this arg , unsigned char ValueAlwaysZero
[[reko::address("1E56:0AE5")]] void Create_TileSet_Array(unsigned long * __far MemoryLocation, unsigned short XStart, unsigned short  YStart, unsigned char ArraySize);
[[reko::address("1E56:0A3B")]] void TileSet_Memory_Operation(unsigned long * DisplayPtr, unsigned long ArrayPtr_08, unsigned short XStart_0C, unsigned short YStart_0E); //args changed
[[reko::address("207F:0313")]] void DrawCall_Read_EGAMemory(unsigned short DestinationOffset, unsigned short DestinationSeg, unsigned short SourceOffset, unsigned short SourceSeg); //new func
[[reko::address("207F:0931")]] void CopyWordFromAToB(int * __far SourcePtr, int * __far DestinationPtr, unsigned char SourceRowCount, unsigned char SourceSpriteSize, int SourceRowPtrOffset); //Used for loading MechSnap sprites
[[reko::address("207F:28A8")]] void CopyStructAToStructB(unsigned short SourceOffset, unsigned short SourceSegment, unsigned short DestinationOffset, unsigned short DestinationSegment);
[[reko::address("207F:0A76")]] void Copy_From__Memory_Source_to_Dest(unsigned long* __far PtrSource, unsigned long* __far PtrDestination, unsigned short BytesToRead);


//Game UI
[[reko::address("1E56:0388")]] void Draw_Top_Graphic_Sidebar();
[[reko::address("1CD3:17C6")]] void Draw_Message_Box();
[[reko::address("0800:4CAC")]] void Draw_Health_and_C_Bills_Sidebar(unsigned char ShowBorders); 
[[reko::address("0800:2A4F")]] void Press_A_Key();
[[reko::address("0800:2C50")]] void Game_Pause_Menu();
[[reko::address("0800:3D40")]] void Show_Overhead_Map();
[[reko::address("135D:0327")]] void OverHead_Map_Function();
[[reko::address("0800:3BD0")]] void Menu_Change_Game_Settings();
[[reko::address("1E56:0B5E")]] unsigned char Display_Menu_Chocies_And_Check(unsigned char wArg04);
[[reko::address("0800:4D57")]] void Menu_Assign_Pilots();
[[reko::address("1631:032F")]] void Menu_Draw_MultiSelect(unsigned char wArg04);
[[reko::address("1E56:0281")]] void Menu_Memory_Variables(unsigned Index);
[[reko::address("0800:378D")]] void Inspect_Characters();
[[reko::address("0800:2A2B")]] void Check_For_Input();
[[reko::address("1F3D:002F")]] unsigned char Pending_Input();
[[reko::address("1F3D:086A")]] void Wait_For_50Hz_Then_Check_Input();
[[reko::address("0800:1A13")]] unsigned char Keyboard_space_key_pressed_Display_Yes_No(unsigned char Display_03EE); 
[[reko::address("0800:4BC1")]] void BDCStatsBar(unsigned char BaseStatValue, unsigned char XPos, unsigned char YPos);
[[reko::address("0DAB:1AFE")]] void Examine_Screen_BTSTATS_CMP(unsigned char MechTargetId);
[[reko::address("183B:24F0")]] unsigned char SettingsMenu_CombatMessages();
[[reko::address("183B:2556")]] unsigned char SettingsMenu_SeeCombatGraphics_bool();
[[reko::address("1E56:0D1D")]] char Keyboard_Convert_To_MoveCommands(char keypress);
[[reko::address("1F3D:0259")]] char Keyboard_Get_ASCII_Hex_Input();
[[reko::address("1E56:0004")]] void Draw_Menu_CGA_VGA_Graphical_Operation(unsigned char wArg04);

//Graphics Functions
[[reko::address("1F3D:063B")]] void Load_File_To_Memory(unsigned long FileName, unsigned long Memory); 
[[reko::address("0800:4621")]] void Load_And_Draw_BTTLTECH_ICN();
[[reko::address("0800:46A7")]] void Load_And_Draw_BTTITLE_CMP();
[[reko::address("0800:320B")]] void Load_And_Draw_ANIMATE_ICN();
[[reko::address("1F3D:06C3")]] void Back_to_Game_Graphics_Operation();
[[reko::address("207F:245C")]] void EGA_DrawBox_Operation(unsigned long * __far VGAMemory, unsigned long * __far Ptr2, unsigned short X0, unsigned short Y0, unsigned short X1, unsigned short Y1);
[[reko::address("0800:1AFD")]] void Draw_Animation_Scene();
[[reko::address("207F:1FBE")]] void Graphics_Set_Screen_To_Black();
[[reko::address("207F:1E37")]] void DrawCall_EGA_MCGA_Animations();
[[reko::address("1F3D:049D")]] void Decompress_File_Into_Memory(unsigned long * __far CompressedByteArray, unsigned long * __far GraphicByteArray); 
[[reko::address("207F:022A")]] void EGA_Set_Palette_Registers_in_out(unsigned char OutA, unsigned char OutB); 
[[reko::address("207F:0B26")]] unsigned short Return_Vertical_Retrace_Status();
[[reko::address("207F:0B73")]] unsigned char BIOS_Set_Video_Mode(unsigned char VideoMode);  
[[reko::address("0DAB:0C8F")]] void Set_Video_Mode();
[[reko::address("0DAB:0D12")]] void Set_Video_Mode_to_Text_Mode();
[[reko::address("207F:2CE1")]] void Store_VideoMode(unsigned char GraphicsAdapter);
[[reko::address("207F:1D8C")]] void Store_PtrFileToMemoryBlock(unsigned long * __far PtrFileToMemoryBlock);
[[reko::address("1F3D:0525")]] void Set_Palette_registers(unsigned char Offset);
[[reko::address("207F:0B40")]] void Wait_For_Retrace(unsigned char ContinueDuringVertical);
[[reko::address("207F:275C")]] void DrawCall_SingleTile(unsigned long* Tile, unsigned short PosX, unsigned short PosY);
[[reko::address("1E56:01E7")]] void DrawCall_LineOfTiles(unsigned long* TileIndex, unsigned short TileId, unsigned short PosX, unsigned short PosY, unsigned short TotalLength, unsigned short IsXAxis); 
[[reko::address("1F3D:0006")]] void Wait_For_N_Vertical_Retraces(unsigned char NumberOfRetraces);
[[reko::address("207F:0260")]] void DrawCall_Image_To_VGA_Memory(unsigned long* __far Image, unsigned short VGA_Memory);    
[[reko::address("1F3D:0086")]] void Draw_GraphicsFile_In_Memory(unsigned long * Ptr, unsigned short wArg08, unsigned short wArg0A, unsigned short wArg0c, unsigned short wArg0E);	
[[reko::address("207F:2B87")]] unsigned char DrawCall_Combat_Menu(unsigned short Horizonal_StatsLine_Offset_04, unsigned short Vertical_StatsLine_Offset_06, unsigned short wArg08, unsigned char bArg0A);
[[reko::address("207F:0A9F")]] void DrawCall_EGA_Combat(unsigned short wArg04, unsigned short wArg06, unsigned short wArg08);
[[reko::address("207F:1C83")]] void EGA_Copy_A400_Memory_Word_Or_Byte_To_Destination(unsigned short EGAMemoryOffset, unsigned short* DestinationOffSetPtr, unsigned short DestinationSegPtr, unsigned short Seg246C);
[[reko::address("207F:1BDF")]] void EGA_MemoryCopy_Byte_1BDF(unsigned short GraphicsMemoryOffset, unsigned short* DestinationOffsetPtr, unsigned short* DestinationSegPtr);
[[reko::address("207F:1B71")]] void EGA_Copy_A400_Memory_Word_Or_Byte_To_Destination_1B71(unsigned short GraphicsMemoryOffset, unsigned short* DestinationOffsetPtr, unsigned short DestinationSegPtr, unsigned short Seg246C);


//Text Functions
[[reko::address("1F3D:00D5")]] void Draw_EGA_Text_To_Screen(unsigned int * __far Textptr, unsigned char Horizonal_StatsLine_Offset, unsigned char Vertical_StatsLine_Offset, unsigned char EGAColour_Font, unsigned char EGAColour_Background);
[[reko::address("207F:2127")]] void Set_EGAColours_Font_And_Background(unsigned char EGAColour_Font, unsigned char EGAColour_Background);
[[reko::address("207F:2251")]] void DrawCall_EGA_Text_To_ScreenLocation(unsigned char ScreenOffset, unsigned int* TextPtr);
[[reko::address("1631:1DAB")]] void Combat_CombatMessageVerbosityFilter(char * __far CombatMessage);
[[reko::address("1631:1FDF")]] void Display_Text_CBill_Balance();
[[reko::address("1631:1B8F")]] void Combat_DisplayText_ArmourHitLocation(unsigned char ArmourLocation);
[[reko::address("1631:02E4")]] void Display_Text_Human_Health(unsigned char Scan_TargetId);
[[reko::address("1467:0B98")]] void Display_Text_Mech_Names();
[[reko::address("0800:2A69")]] void Combat_Display_Text_Add_Plural();
[[reko::address("0800:2A7E")]] void Combat_Display_Text_051D_Variable(); 
[[reko::address("0FDC:19E1")]] void Citadel_Display_nothing_this_time_Text();
[[reko::address("1CD3:181E")]] void Display_Text_4FA0_Value();
[[reko::address("1CD3:1809")]] void Display_Text_Shop_Cannot_Afford_Text();
[[reko::address("1F3D:0053")]] void Display_Text_Dynamic_Value(unsigned short Value);
[[reko::address("0800:2867")]] void Display_Text_Assign_Item(unsigned int* Textptr, unsigned short Horizonal_StatsLine_Offset, unsigned short Vertical_StatsLine_Offset);
[[reko::address("1CD3:17EA")]] void Display_Text_From_Memory_ScreenRetrace_KeyboardInput(int * __far TextPtr);
[[reko::address("0800:28A2")]] void Set_Text_To_EGAColour_Green_w37WE();
[[reko::address("207F:3B22")]] void Append_Text_To_Memory(unsigned long * __far TextPtr, unsigned long * __far AppendTextPtr);  //Port replace with SB
[[reko::address("207F:3B68")]] void Append_Large_Text_To_Memory(unsigned long * __far TextPtr, unsigned long * __far AppendTextPtr); //Port replace with SB
[[reko::address("135D:02A8")]] void Display_StarLeague_Cache_Dialog_Window();
[[reko::address("135D:02D2")]] void StarLeague_HyperPulse_Power_Dialog_Window(unsigned short CharacterPosX_04, unsigned short CharacterPosY_06);
[[reko::address("207F:3B9E")]] void Loop_Until_TextPtr_Null(unsigned long TextPtr);
[[reko::address("1E56:07CB")]] void Display_TextBox(unsigned long ptrArg04, unsigned short wArg08);


// Line Drawing Functions
[[reko::address("1F3D:031C")]] void Draw_EGA_Line(short x0, short y0, short x1, short y1, unsigned char EGAColour);
[[reko::address("207F:05D0")]] void Draw_Vertical_EGA_Line(unsigned short x0, unsigned short y0, unsigned short y1, unsigned char EGAColour);
[[reko::address("207F:0780")]] void DrawCall_Horizonal_Line(unsigned short y0, unsigned short x0, unsigned short EGAColour, unsigned char EGAColour2);
[[reko::address("1F3D:03EB")]] void Draw_Horizonal_EGA_Line(unsigned short y0, unsigned short x0, unsigned short x1, unsigned char EGAColour);
[[reko::address("1F3D:01FB")]] void Draw_Horizontal_EGA_Line_With__Optional_Tandy(unsigned short x0, unsigned short y0, unsigned short x1, unsigned short y1, unsigned char EGAColour);	  

//Game Logic


[[reko::address("0DAB:174C")]] void Examine_Screen_EngineHeatSinks(unsigned char Horizontal_StatLine_Position, unsigned char Vertical_StatLine_Position, unsigned char CriticalHitPoints, unsigned char DamagedCriticalComponents);
[[reko::address("0DAB:1858")]] void Examine_Screen_CriticalComponents(unsigned char Horizontal_StatLine_Position, unsigned char Vertical_StatLine_Position, unsigned char CriticalHitPoints, unsigned char DamagedCriticalComponents);
[[reko::address("0800:17BB")]] void CharacterPos_Compare(unsigned int PosX, unsigned int PosY);
[[reko::address("0FDC:134B")]] void Assign_A44B_A44D_CharPos_Before_Graphics();
[[reko::address("11B8:16B2")]] void Scene_Mech_Refuse_To_Start();
[[reko::address("183B:2474")]] void Combat_Infantry_Movement(unsigned char CharacterId);
[[reko::address("183B:22BC")]] void Combat_Mech_Movement(unsigned char MechId, unsigned char SelectedMovementMode);
[[reko::address("1631:03AB")]] void Combat_Computer_Control(int wArg04, int wArg06);
[[reko::address("1631:0C63")]] void Combat_Mech_HeatLevels(int * __far ptrArg04);
[[reko::address("1543:0A35")]] void Combat_Mech_Eject_0A35(unsigned char MechLanceId);
[[reko::address("183B:28DB")]] unsigned char Combat_MovementPointsRemaining_28DB();
[[reko::address("183B:27C9")]] void Draw_TerrainDamage_and_Wrecks(unsigned char Sprite, unsigned char PosX, unsigned char PosY);
[[reko::address("1631:0F24")]] void Combat_Calculate_RangeBracket(unsigned char TargetId, unsigned char CharacterId);
[[reko::address("1631:0BB5")]] unsigned short Combat_Operation_0BB5(int wArg04, int wArg06);
[[reko::address("0800:29F5")]] unsigned int Return_50_CBills();
[[reko::address("1631:1057")]] void Combat_Weapon_Display_Text_And_Menu_Options(int * __far Ptr);
[[reko::address("207F:1ECE")]] void Combat_1ECE(unsigned long * ptr, unsigned char B);
[[reko::address("1631:10A2")]] unsigned char Combat_GetAmmoForSelectedWeapon_10A2(unsigned char MechLanceId, unsigned char SelectedWeaponId);
[[reko::address("1631:1122")]] unsigned char Combat_StructureHit_1122(unsigned char HitLocation);
[[reko::address("1631:11AB")]] void Combat_Case_Statement_11AB(unsigned short wArg04, unsigned short wArg06);
[[reko::address("1631:163E")]] int Combat_fn1631_163E(int * __far ptr, int wArg08);
[[reko::address("1631:16AB")]] unsigned char Return_bool_fn1631_16AB(unsigned char TargetId, unsigned char wArg0A);
[[reko::address("1631:1DCC")]] void GameSpeed_RateControl();
[[reko::address("1AE8:1E46")]] void Combat_Random_CreateFire(unsigned short EntityId, unsigned short PosX, unsigned short PosY);
[[reko::address("1631:1DF8")]] void Combat_CompassPos_1DF8(unsigned short PosX, unsigned short PosY, unsigned short CharacterPosX_Mech, unsigned short CharacterPosY_Mech);
[[reko::address("1631:1EA2")]] void Combat_AudioVisual_1EA2(unsigned short PosX_04, unsigned short PosY_06);
[[reko::address("1631:1F09")]] void Combat_AudioVisual_MechPositioning_And_GraphicsMemory_1F09(unsigned int* dwArg04);
[[reko::address("1631:1F73")]] void Draw_Combat_Sprites_1F73(unsigned short SpriteId04, unsigned short PosX_06, unsigned short PosY_08);
[[reko::address("1631:1B44")]] unsigned char Combat_Check_Mech_Actuator_Status(unsigned char MechLanceId, unsigned char MechComponent);
[[reko::address("1467:0D7E")]] void Combat_Reset_40B4_To_Zero();
[[reko::address("135D:0288")]] void StarLeague_Cache_PhoenixHawk();
[[reko::address("135D:04AB")]] void HPGTransmitter(unsigned short CharacterPosX_04, unsigned short CharacterPosY_06);
[[reko::address("1631:0006")]] void Position_0006(unsigned short wArg04, unsigned short EnemyMech_PosX_06, unsigned short EnemyMech_PosY_08, unsigned short wArg0c, unsigned short BoolValue);
[[reko::address("1431:000A")]] void Heal_Characters(unsigned char MedicalEquipmentLevel);
[[reko::address("0800:4AA6")]] void CharacterStatsBlock(unsigned char CharacterId, unsigned char wArg06);
[[reko::address("0800:2A93")]] void CharacterPosition_2A93();
[[reko::address("0800:051B")]] void Draw_Infantry_And_Mechs();
[[reko::address("207F:1314")]] void PosXY_OffsetGrid(unsigned short PosX, unsigned short PosY); 
[[reko::address("207F:0971")]] unsigned char Get_Target_Compass_Direction(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1);
[[reko::address("11B8:080A")]] void Mechlube_Modify_Mech();
[[reko::address("11B8:0925")]] void Mechlube_Upgrade_Mech();
[[reko::address("135D:03AA")]] void StarLeague_Security_Terminal(unsigned short CharacterPosX, unsigned short CharacterPosY);
[[reko::address("183B:2591")]] void Scan_Enemies(unsigned char NumCombatantsOnField);
[[reko::address("11B8:0D58")]] void Teammate_Mech_Assign(unsigned char wArg04);
[[reko::address("11B8:104E")]] void KuritaParty_RexJoinsFight(); 
[[reko::address("1543:0C72")]] void While_Less_Than_26_Function(unsigned char bool_Arg);
[[reko::address("0FDC:0D49")]] void Mission_GenerateEnemies(unsigned char MissionNumber, unsigned char wArg06);
[[reko::address("0FDC:1B41")]] void Mech_Mission_Function();
[[reko::address("0FDC:1C9B")]] void Mech_Mission_function_2();
[[reko::address("11B8:137F")]] void Mech_Mission_Operation_137f();
[[reko::address("11B8:1441")]] void Mech_Mission_Operation_1441();
[[reko::address("0DAB:094B")]] void Loot_Enemy_Soldiers_Dialog(); 
[[reko::address("0DAB:18E8")]] void Scan_Human_Teammate_suspicious(unsigned char ScanTargetId, unsigned char wArg06, unsigned char wArg08);
[[reko::address("135D:0980")]] void Cache_StarMap_CorrectPassword();
[[reko::address("135D:0AB6")]] void StarLeague_Key_Codes(unsigned char PosX, unsigned char PosY, unsigned char CacheOpenedId_wArg08);
[[reko::address("135D:0913")]] void Map_Interactable_Play_Sound(unsigned short CharacterPos_X, unsigned short CharacterPos_Y);
[[reko::address("1631:15FA")]] unsigned short MechId_Random_Count_15FA(unsigned char MechId_04, unsigned char LessThanCond);
[[reko::address("11B8:152F")]] void Jail_Mission_Jason_Only_Character();
[[reko::address("0FDC:0008")]] void Interact_with_BLD(unsigned char Indexed_BLDFile); 
[[reko::address("0800:186F")]] void Combat_PositionBracketing_186F(unsigned short PosX, unsigned short PosY);
[[reko::address("0800:191B")]] void Combat_PositionBracketing_191B(unsigned short PosX4, unsigned short PosY);
[[reko::address("183B:273D")]] unsigned char Salvage_Armour_If_wArg06(unsigned char MechId, unsigned char ComponentOffset);
[[reko::address("0800:1C12")]] unsigned char Map_Interactables_Building_Or_Items(unsigned short CurrentPosX, unsigned short CurrentPosY);
[[reko::address("207F:17C5")]] void PosX_Function();
[[reko::address("207F:16E3")]] void PosX_Function02();
[[reko::address("207F:158C")]] void PosY_Function();
[[reko::address("207F:163B")]] void PosY_Function02();
[[reko::address("207F:0BFB")]] void Map_Pos_Struct_Loop_Operations_0BFB(unsigned short wArg04); 
[[reko::address("183B:2AA3")]] void Combat_Character_Pos_Grid(unsigned char PosX, unsigned char PosY);
[[reko::address("207F:13D9")]] unsigned char PosXY_GridSegment(unsigned char bPosX, unsigned char bPosY); 
[[reko::address("0800:218F")]] void Character_Movement_On_Map(unsigned char IncomingValue);
[[reko::address("207F:1DF8")]] void Combat_CharPosition_Assign_t09ED_to_t09F1();
[[reko::address("1543:07CB")]] void Combat_Select_Weapon_Target_UI(unsigned char FriendlyMechId_04, unsigned char WeaponId_06, unsigned char wArg08);
[[reko::address("183B:1C1F")]] void Combat_Select_Movement_Plan_For_Turn(unsigned char TargetMechId, unsigned char SelectedMovementMode);
[[reko::address("183B:2231")]] void Combat_Kick_Target(unsigned char FriendlyAttackingMechId);
[[reko::address("183B:14C3")]] unsigned char Combat_UI_Menu_Logic();

//Random funcs
[[reko::address("0800:19F3")]] unsigned char Rand_Dice_D6();
[[reko::address("0800:19DD")]] unsigned char Rand_Dice_Two_D6();

//Tinyland / overhead map
[[reko::address("0800:45C2")]] void TinyLand_Graphics_45C2(int wArg04);
[[reko::address("207F:1F51")]] void TinyLand_Struct_1F51(unsigned long wArg04);
[[reko::address("0800:3FAE")]] void Overhead_Map_Draw_3FAE(unsigned short Character_PosX, unsigned short Character_PosY); //CHECK ASM


// Math functions
[[reko::address("207F:3C6C")]] static char abs(unsigned char x);

// Decoding functions
[[reko::address("207F:22F8")]] unsigned long Format01_Decode(unsigned long * __far CompressedByteArray, unsigned long * __far DecodedBuffer);
[[reko::address("207F:2368")]] unsigned long Format02_Decode(unsigned long * __far CompressedByteArray, unsigned long * __far DecodedBuffer);
[[reko::address("207F:23EC")]] unsigned long Animation_Decode(unsigned long * __far CompressedByteArray, unsigned long * __far DecodedBuffer);






//Items that need work


//Graphics_Operations_0086 <-- Explore this 
//MechSnap has confused Args <-- work out? Tiles vs offsets



[[reko::address("183B:000A")]] void Combat_Parent_000A(int wArg04); //Starts breaking internally. Work on subfunctions first
// VGA_CGA_Graphics_Operations_18EF
//Graphical_Operation_0E4B();


// Return_Bool_Allow_Computer_Control_Dialog()
// A_fn183B_1482
// Combat_UI_14C3

// PosXY_OffsetGrid
//  Combat_Mechanics
//Draw_TerrainDamage_and_Wrecks

// Keyboard_Get_ASCII_Hex_Input
// Combat_Operation_0BB5



// Draw_Menu_CGA_VGA_Graphical_Operation


// VGA_CGA_Graphics_Operations_18EF
//Display_Text_From_Memory_ScreenRetrace_KeyboardInput

[[reko::address("183B:2835")]] void Combat_Load_9Grid_Map_2835();

[[reko::address("207F:18EF")]] void Copy_Data_To_GraphicsMemory(); //TROUBLE func



//Needs review - 54 funcs
[[reko::address("0FDC:19F6")]] unsigned long Increment_ptrArg04_by_1_19F6(unsigned long ptrArg04); //check args after large switch

[[reko::address("0DAB:04F9")]] void Salvage_Mechs_Dialog(); //<--- Has a bug [Bp -2h] https://github.com/uxmal/reko/issues/1188
[[reko::address("0800:0E4B")]] void Graphical_Operations_0E4B(); //<--- Has a bug [Bp -2h] https://github.com/uxmal/reko/issues/1188
[[reko::address("1631:1BFE")]] unsigned char Combat_Return_bool_fn1631_1BFE(unsigned short wArg04, unsigned short wArg06, unsigned short wArg08, unsigned short wArg0A); //<-- Recheck after reko reload / added new args. 
[[reko::address("183B:193B")]] void Combat_Calculate_Movement(unsigned char TargetId); //Needs ASM walk through to confirm code. Likely bad decompile
[[reko::address("0DAB:0002")]] void Salvage_Armour_Dialog(); // <-- Has ptr bug in later sections
[[reko::address("0800:476D")]] void DOS_Disk_IO_Play_Music(); //Needs a review on empty do: Check ASM
[[reko::address("1E56:03F5")]] void Display_Text_From_Memory(unsigned short wArg04, unsigned short wArg06); //Had wrong number of args
[[reko::address("0800:48B7")]] void Display_Animation_Scene(unsigned char AnimationScene, unsigned char DiskNumber); //CHECK ASM for ptr values. Easy win
[[reko::address("135D:0004")]] void Draw_STARLEAG_ICN_AND_Game_Logic(); //Review later half again. Easy win
[[reko::address("0FDC:1A26")]] void Select_Mech_For_Training(); //Needs ASM Check on strange ptr set
[[reko::address("135D:055A")]] void StarLeague_Map_Room(unsigned char CharacterPos_X, unsigned char CharacterPos_Y); //Needs ASM check on loop variables
[[reko::address("1F3D:070A")]] void Extract_Sprites_From_MECHSHAP(unsigned short Index, unsigned short TilesWidth, unsigned short VerticalOffset, unsigned short TilesHeight, unsigned short HorizontalOffset); 
[[reko::address("0DAB:0D3D")]] void Combat_engaged();
[[reko::address("0DAB:1467")]] void Scan_Humans(int ScanTarget, int wArg08);
[[reko::address("0800:0000")]] void Main_Game_Loop(unsigned char Disable_Input);
[[reko::address("0800:240B")]] void Combat_MemoryPtr_Copy_240B(); //CHECK ASM variable values incorrect
[[reko::address("1AE8:12C7")]] void Combat_AudioVisual_Effects(unsigned char ShooterId_04, unsigned char CombatantId, unsigned char WeaponId_Used, unsigned char PosOffset_0A,  unsigned char Bool_NonMissile_0C, unsigned char CombatId_Dead_0E, unsigned char MechIsDestroyed_10, unsigned char Dead_CharacterId_12, word16 Bool_OnFoot_14, unsigned int* MemoryFarPtr_16);

[[reko::address("1AE8:000C")]] void Combat_Mechanics(int IsCombat);
[[reko::address("135D:079C")]] void Draw_STARLEAG_ICN_Scene(); //CHECK ASM for variables true value
[[reko::address("207F:0377")]] void DrawCall_EGA_CharacterPos_0377(unsigned short EGA_Mem_Offset_04, unsigned short EGA_Mem_Seg_06, unsigned short OffsetPtr_wArg08, unsigned short SegPtr_wArg0A, unsigned char PosX, unsigned char PosY);
[[reko::address("0FDC:15E6")]] void Change_Weapon_After_Battle(unsigned char SelectedWeapon); //Fp - issue
[[reko::address("1E56:0004")]] void Draw_Menu_CGA_VGA_Graphical_Operation(int wArg04); //Code doesn't match Reko. Needs complete review
[[reko::address("11B8:0002")]] void Mechlube_Repair_Mech(); //Fp - Issue
[[reko::address("207F:24D7")]] void DrawCall_EGA_24D7(); //Entire procedure needs analysis
[[reko::address("0800:32B3")]] void Load_Game();  //fp -4 issue from: DOS_read_file_handler(ax_76, fp - 4, 0x01);
[[reko::address("0800:35D3")]] void Save_Game(); // fp-4 issues from  DOS_write_memory_to_save_file
[[reko::address("135D:01E9")]] void StarLeague_Secret_Passageway_Discovered(); //Variable set inside loop needs reviewing
[[reko::address("0DAB:0B95")]] void Interrupts_And_Retrace(); //Odd loops. Check ASM. Graphics function
[[reko::address("1467:0002")]] void Assign_Pilot_and_rider_to_Mechs(int wArg04); //fp - 26 issue
[[reko::address("0FDC:0629")]] void Mech_Mission_0629(int wArg04); //fp - 0x0E issue. ASM comments in func
[[reko::address("0800:1732")]] void Select_As_Target_Variable_1732(unsigned char TargetId); //review -- CHECK ASM
[[reko::address("0800:231D")]] void Cycle_Through_Characters_231D(unsigned KeyPress);  //review
[[reko::address("0FDC:05F7")]] unsigned ASM_Func_05F7(int *ptrArg04); //Needs ASM CHECK
[[reko::address("207F:0BC0")]] unsigned char Rand_0x00_to_0xFF(); // CHECK ASM and write to understand
[[reko::address("207F:1F04")]] void Overhead_Map_1F04(int wArg04); //review
[[reko::address("207F:0D07")]] void Map_Pos_0D07(); //Needs review, check args
[[reko::address("207F:0D79")]] void Map_Pos_0D79(); //Needs review, check args
[[reko::address("207F:0DF8")]] void Map_Pos_0DF8(); //Needs review, check args
[[reko::address("207F:104E")]] void Map_data_structure(unsigned short wArg04); 
[[reko::address("0800:2DA8")]] void DOS_Load_Map_Files(int wArg04, int MapFileNum); //CHECK ASM for read file values
[[reko::address("1543:0CDE")]] void Money_Balance_Function(); //CHECK ASM - Last loop has problem
[[reko::address("0FDC:13DE")]] void Weapon_inventory_13DE(unsigned char WeaponId, unsigned short wArg06);  //fp - 18 issue
[[reko::address("0800:24C2")]] void CharacterPos_24C2();
[[reko::address("207F:0572")]] void VGA_Inline_ASM_Loop(unsigned long* __far PtrSource, unsigned long* __far PtrDestination, unsigned short BytesToRead); //Needs Review / ASM rewrite
[[reko::address("11B8:1762")]] void Mechlube_Buy_Ammo(); //fp issue
[[reko::address("0FDC:17B9")]] void Citadel_Building_Greetings(); //fp -0A issue
[[reko::address("1CD3:0004")]] void Citadel_Building_Dialogs(unsigned char CaseOption); //Review this and all sub functions	
[[reko::address("183B:1482")]] void Combat_Computer_Control_1482(unsigned char TargetMechId); //review
[[reko::address("207F:05BF")]] void EGA_Animation_Bitshift(); //Inline ASM func? //LODSB instruct = Load byte at address DS:(E)SI into AL 
[[reko::address("207F:18D8")]] void Struct_Copy_Operation_18D8(); //No call args but needs si / di? Reko registers?
[[reko::address("0FDC:01C0")]] void Large_Switch_Statement(unsigned long ptrArg04); //sp and fp problems - memset values missing // broken case statement

[[reko::address("1543:0004")]] void Combat_Weapon_UI_0004(unsigned char TargetId); //fp - issues - 1543:0018 C6 42 E0 00 mov byte ptr [bp+si-20h],0h
[[reko::address("183B:1774")]] void Combat_MovementTarget_unknown_1774(unsigned char TargetId, unsigned char Bool_06); //fp - issue - Draw_EGA_Text_To_Screen(fp - 16, (uint8) v27_177, (uint8) v28_180, 0x0F, 0x00);
[[reko::address("207F:1AF4")]] void EGA_ptr_Operations_1AF4();//(unsigned long* ptrArg04, unsigned long* ptrRrg08);
[[reko::address("207F:1ACE")]] void Graphic_Memory_To_Destination_1ACE(); //unsigned short dh, unsigned short* DestinationOffsetPtr, unsigned short DestinationSegPtr, unsigned short Seg246C); //Need args review - No push for call but seems like args?
[[reko::address("207F:1AA8")]] void Graphic_Memory_To_Destination(); //(unsigned short dh, unsigned short* DestinationOffsetPtr, unsigned short* DestinationSegPtr, unsigned short Seg246C); //Need args review - No push for call but seems like args?


//ASM
[[reko::address("207F:3BD2")]] void CBill_Text_Formatting(unsigned long * Money_ptr, unsigned long * StringBuilder_ptr); 		
[[reko::address("207F:3BB6")]] void A_fn207F_3BB6(unsigned short wArg04, unsigned short wArg06, unsigned short wArg08, unsigned short wArg0A); //ASM function
//[[reko::address("207F:3C15")]] void ASM_fn207F_3C15(unsigned short ax, unsigned short cx, unsigned short dx, unsigned short bl, unsigned short di, unsigned short * ds); //ASM no call function - Arg hell

//All Same function? //ASM?
//[[reko::address("207F:3C15")]] void ASM_Function_3C15(); 
//[[reko::address("207F:3BB6")]] void A_fn207F_3BB6(int wArg04, int * __far ptr, int wArg08);
																																													 


//[[reko::address("207F:1DA8")]] void Map_fn207F_1DA8(); //Immediately contains Map_fn207F_1886() 
//[[reko::address("207F:1886")]] void Map_fn207F_1886(); // <-- Doesn't have normal calls
//[[reko::address("207F:11BB")]] void Map_fn207F_11BB(unsigned short wArg04, unsigned short wArg06); // <-- Calls have MOV; Check new arg with reload
//[[reko::address("207F:12BA")]] void Map_fn207F_12BA(); //ASM function?
//[[reko::address("207F:12F2")]] void Map_Struct_Internal_Ops_12F2(); //ASM function?
//[[reko::address("207F:12D9")]] void Map_Struct_internal_Ops_12D9(); //ASM function?
//[[reko::address("207F:1303")]] void Map_Struct_Internal_Ops_1303(); //ASM function?
																																													 



//----------------------------------
//Non-Port code

[[reko::address("1467:08A8")]] void Copyright_Check_Mech_Quiz(); //fp - issue plus loop cmp wrong //Already disabled
[[reko::address("207F:3CD8")]] void Unused_Function_3CD8(); //No calls to this
[[reko::address("204B:00F5")]] void Unused_Function_00F5(); //No calls to this
[[reko::address("204B:00DE")]] void Unused_Function_00DE(); //No calls to this

[[reko::address("207F:3E62")]] void rotate_with_carry_do_while(unsigned long wArg04, unsigned long wArg06);
[[reko::address("207F:3D44")]] void rotate_with_carry_do_while_parent(unsigned long wArg04, unsigned long wArg06);

[[reko::address("207F:3D6C")]] void rotate_with_carry_loop_parent(unsigned long ptrArg04, unsigned char bArg08);
[[reko::address("207F:3EC4")]] void rotate_with_carry_loop_and_return(unsigned long ptrArg04, unsigned char bArg08); //ASM function

[[reko::address("207F:3D1C")]] void ComStar_Stocks_multiplication(unsigned long* Stocks, unsigned long* wArg08); //  ComStar_Stocks_multiplication <--- Causes ss->sp deref issue 
[[reko::address("207F:3E2E")]] unsigned long If_Arg_multiplication_return_func(unsigned long* wArg04, unsigned long* wArg08); 
[[reko::address("207F:3D92")]] unsigned short Arg_less_than_zero_else_do_while_rotate_with_carry(unsigned long wArg04, unsigned long wArg08);


//Non-EGA  - Minimum car about these // <-- Wrong Graphics adapter etc
[[reko::address("207F:2CF7")]] void CGA_Palette_Operation();
[[reko::address("207F:28EB")]] void Non_EGA_VGA_Operations_28EB(unsigned short wArg04, unsigned short wArg06, unsigned short wArg08, unsigned short wArg0A, unsigned char wArg0C, unsigned char wArg0E);
[[reko::address("207F:1D3A")]] void MCGA_1D3A();
[[reko::address("207F:1CB8")]] void NON_MCGA_Graphics_1CB8();
[[reko::address("207F:2B45")]] void Tandy_Set_Palette_Registers(int * __far Ptr);
[[reko::address("207F:0FEE")]] void MCGA_Set_Palette_Registers();
[[reko::address("207F:0BA7")]] void BIOS_Set_CGA_Palette(char Palette);   
[[reko::address("207F:1B94")]] void Non_EGA_MemoryCopy_1B94(unsigned short* SourceSegPtr, unsigned short* SourceOffset, unsigned short* DestinationOffsetPtr, unsigned short* DestinationSegPtr, unsigned short Seg246C);
[[reko::address("207F:1BFC")]] void Non_EGA_MemoryCopy_1BFC(unsigned short* SourceSegPtr, unsigned short* SourceOffset, unsigned short* DestinationOffsetPtr, unsigned short* DestinationSegPtr, unsigned short Seg246C);
[[reko::address("207F:1B1A")]] void Non_EGA_MemoryCopy_1B1A(unsigned short* SourceSegPtr, unsigned short* SourceOffset, unsigned short* DestinationOffsetPtr, unsigned short* DestinationSegPtr, unsigned short Seg246C);
[[reko::address("207F:00D1")]] void CGA_Copy_To_Memory(unsigned long * __far Ptr_CGAMemory);
[[reko::address("207F:01D7")]] void CGA_Copy_Struct_Operation(int WhileEndCond, int SourceStruct); //Arg are likely single long _far ptr
[[reko::address("207F:0163")]] void CGA_Struct_Operations_0163(int * __far Ptr1, int * __far Ptr2, int A, int B);
[[reko::address("207F:22A5")]] void MCGA_Operation_22A5( int A, int * __far Ptr);
[[reko::address("207F:0A26")]] void CGA_Screen_Resolutions_Operations_0A26(int *__far Ptr1, int * __far Ptr2);
[[reko::address("207F:2209")]] void CGA_Operation_2209(int A, int * __far Ptr);
[[reko::address("207F:21A8")]] void Tandy_1000_Operation_21A8( int A, int * __far Ptr);
[[reko::address("207F:200E")]] void CGA_Variable_Operations_200E(int * __far Ptr, int wArg04, int wArg06, int wArg08, int wArg0A);
[[reko::address("207F:2D64")]] void CGA_Palette_Bitshifting(); //no args calls - unsigned long * __far Ptr, unsigned short B

//DOS
[[reko::address("207F:3BDC")]] unsigned short Check_Input_For_Character();
[[reko::address("207F:0213")]] void DOS_DirectConsoleOutput(char Character);  
[[reko::address("0D27:000A")]] static void Print(char * __far Text); //Print to DOS_DirectConsoleOutput
[[reko::address("1F3D:0814")]] void DOS_Load_File_to_memory(unsigned long * __far Filename, unsigned long * __far BufferForData, unsigned short BytesToRead);
[[reko::address("0800:28CC")]] void Set_Default_Disk_Drive(unsigned char Drive);
[[reko::address("0800:2913")]] void Request_Diskette_In_Drive(unsigned char Drive); 
[[reko::address("207F:014C")]] void DOS_SetDrive(unsigned char Drive);   
[[reko::address("204B:033C")]] unsigned char DOS_Music_If_XOR_0x0186_Is_ZERO(); 
[[reko::address("207F:0B8A")]] char Keyboard_GetKey();
[[reko::address("207F:1F9C")]] void Interrupt_flag_sti();
[[reko::address("207F:1FAD")]] void Interrupt_flag_cli();

// fn207F_32F5 - DOS ASM
// fn207F_32F7 - DOS ASM
// fn207F_3308 - DOS ASM
// fn207F_376F - DOS ASM


//DOS Functions - Memory
[[reko::address("207F:2D82")]] void Main(); // DOS Memory extender?
[[reko::address("207F:3026")]] void DOS_Operation_3026(); //Pre-setup game. Memory or device interrupts. Whatever
[[reko::address("207F:31CE")]] int DOS_Memory_Function_31CE();

//DOS Functions - Write
[[reko::address("207F:2FB2")]] void DOS_write_file_if_Func_Ptr();
[[reko::address("207F:3275")]] int DOS_write_file(int wArg04);    
[[reko::address("207F:366A")]] void DOS_write_memory_to_save_file(); //changed args: int DOS_write_memory_to_save_file(int wArg04, int *ptrArg05, int wArg0A);
[[reko::address("207F:37B4")]] unsigned char Dos_Write_Memory_Operation_37B4(unsigned short ds);   // added ds arg
[[reko::address("207F:324A")]] unsigned short DOS_write_struct(unsigned short wArg04);
[[reko::address("207F:377A")]] int DOS_Write_Return_file_ptr_377A(int ds_bx); //JMP function. No Args
[[reko::address("207F:371E")]] void DOS_write_save_file();
[[reko::address("207F:3777")]] void DOS_set_file_position_self_references();   //ASM recursive function, no args, jmp call

[[reko::address("207F:2EA4")]] void DOS_IOCTL_GET_DEVICE_INFO();
[[reko::address("207F:3C82")]] void DOS_Set_Interrupt_Vector( int * __far PtrOffset ); 
[[reko::address("207F:2E50")]] void DOS_Set_Interrupt_Vector_Partial_ASM();
[[reko::address("207F:2F72")]] void DOS_set_interrupt_vector();
[[reko::address("207F:2E3B")]] void DOS_Interrupts_Preamble_2E3B();
[[reko::address("207F:2E76")]] void DOS_Interrupt_Vector_Post_2E76();
[[reko::address("207F:32A0")]] int DOS_memory_resize_perhaps(int *ax);
[[reko::address("207F:2F9F")]] int DOS_SI_Transfer_to_DI();

// DOS File Read
[[reko::address("207F:33D0")]] unsigned Get_FileHandle(int * __far FileName, unsigned int Bitflag); //fp - 6
[[reko::address("207F:3356")]] void DOS_set_file_position(int FileHandle, int B, int C, int D); // Needs work
[[reko::address("207F:3580")]] void DOS_read_file_handler(int FileHandle, int * __far BufferForData, unsigned BytesToRead);
[[reko::address("207F:356F")]] unsigned short DOS_Load_File_Check(unsigned short cx); //Changed arg: int DOS_Load_File_Check(int cx);

// DOS Close / Terminate
[[reko::address("207F:3336")]] void DOS_close_file(int FileHandle);
[[reko::address("207F:2F14")]] void DOS_Terminate(unsigned char wArg04); 
[[reko::address("207F:3000")]] void DOS_Terminate_DOS_Write_function();


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
[[reko::address("0800:19BF")]] void Play_Sound_Toggle_On_ds_w015C(unsigned char Sound);
[[reko::address("1FC5:047B")]] void Sound_Ptr_Operation_047B(int wArg04, int wArg06);
[[reko::address("1FC5:04F1")]] void Sound_Freq_Loop(int wArg04, int wArg06, int wArg08);
[[reko::address("1FC5:059A")]] void Sound_Operation_059A(int wArg94, int wArg06, int wArg08, int wArg0A);
[[reko::address("1FC5:0643")]] void Sound_Operation_0643(int wArg04, int wArg06, int wArg08, int wArg0A, int wArg0C);
[[reko::address("1FC5:0747")]] void Sound_Streaming_1(int wArg04, int wArg06, int wArg08, int wArg0A, int wArg0C);
[[reko::address("1FC5:07DA")]] void Sound_Streaming_2(int wArg04, int wArg06, int wArg08, int wArg0A, int wArg0C);
[[reko::address("204B:02E4")]] void Tandy_1000_PC_Speakers(int Value);
[[reko::address("207F:0030")]] void PC_Speaker_ON_ptr_freq(short freq);
[[reko::address("207F:00A9")]] void Sound_Freq_Countdown_Loop(int wArg04, int wArg06);
[[reko::address("1FC5:02A3")]] void Sound_Operation_02A3();
[[reko::address("1FC5:02EB")]] void Sound_Operation_02EB();
[[reko::address("1FC5:0345")]] void Sound_Operation_0345();
[[reko::address("1FC5:03A8")]] void Sound_Operation_03A8();
[[reko::address("1FC5:040B")]] void Sound_Operation_040B();
[[reko::address("1FC5:06F6")]] void Sound_Ptr_Multiply_06F6(unsigned short wArg04, unsigned short wArg06); //ASM function
[[reko::address("204B:0160")]] void Tandy_SoundCard_Output(); //No calls to this
[[reko::address("204B:0179")]] void PC_Speaker_Set_Value_0179(); //No calls to this
[[reko::address("204B:01B8")]] void Tandy_Soundcard_Operations_01B8(); //No calls to this
[[reko::address("207F:001C")]] void Timer_8253_5();
[[reko::address("207F:00A9")]] void Sound_Freq_Countdown_Loop_00A9(unsigned short wArg04, unsigned short wArg06);
[[reko::address("207F:08A1")]] void Tandy_1000_DrawCall_Line(unsigned char x0, unsigned char y0, unsigned char xLength, unsigned char yLength, unsigned char EGAColour);




//Debug Memory functions??? <-- Handles memory reshuffling?
[[reko::address("207F:3835")]] int Debug_Memory_3835(unsigned short MemorySize_04); //fp -8 issue
[[reko::address("207F:38FD")]] void Debug_Memory_38FD(); // bool A_fn207F_38FD(int *ptrArg00);
[[reko::address("207F:39E0")]] void Debug_Memory_39E0();
[[reko::address("207F:38E2")]] void Debug_Memory_38E2();//unsigned char Debug_Memory_38E2(unsigned short ptrArg02)
[[reko::address("207F:3874")]] void Debug_Memory_3874();  //bool Return_Bool_3874();
[[reko::address("207F:37DA")]] unsigned short Debug_Memory_37DA(unsigned short wArg04);  //int A_fn207F_37DA(int wArg04);
[[reko::address("207F:3A3C")]] unsigned char Debug_Memory_3A3C(unsigned short * ax, unsigned short* es); //bool A_fn207F_3A3C(int *ax, int *es);
[[reko::address("207F:3A1A")]] void Debug_Memory_3A1A();
[[reko::address("207F:3A1A")]] void Debug_Memory_3A1A();
[[reko::address("207F:3A5E")]] unsigned char Debug_Memory_3A5E(unsigned short wArg04, unsigned short wArg06, unsigned short wArg08, unsigned short wArg0A, unsigned short wArg0C);
[[reko::address("207F:3ACC")]] unsigned char Debug_Memory__3ACC();


