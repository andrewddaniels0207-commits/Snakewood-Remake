# 1 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 2 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Frlg_MapScripts::
# 3 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 2 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 4 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_IcefallCave_Back_OnTransition
# 5 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 7 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 8 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_OnTransition::
# 9 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 6 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 10 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1
# 11 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	goto_if_eq FourIsland_IcefallCave_Back_OnTransition_2
# 12 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_OnTransition_1:
# 13 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	end
# 14 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 15 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_OnTransition_2:
# 16 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 7 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 17 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	call FourIsland_IcefallCave_Back_EventScript_HideLorelei
# 18 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	goto FourIsland_IcefallCave_Back_OnTransition_1
# 19 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 20 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 21 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_HideLorelei::
# 22 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 13 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 23 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	setflag FLAG_HIDE_ICEFALL_CAVE_LORELEI
# 24 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	return
# 25 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 26 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 27 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene::
# 28 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 18 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 29 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	lockall
# 30 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 19 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 31 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 32 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 20 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 33 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiKeepHandsOffMons
# 34 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 21 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 35 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
# 36 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 22 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 37 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 38 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 23 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 39 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 40 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 24 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 41 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ShutItLadyLeaveUsBe
# 42 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 25 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 43 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	closemessage
# 44 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 26 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 45 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	playse SE_PIN
# 46 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 27 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 47 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_ExclamationMark
# 48 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 28 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 49 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 50 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 29 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 51 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterDown
# 52 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 30 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 53 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 54 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 31 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 55 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_Delay48
# 56 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 32 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 57 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 58 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 33 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 59 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 60 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 34 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 61 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiPlayerHelpMeKickPoachersOut
# 62 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 35 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 63 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	closemessage
# 64 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 36 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 65 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterRight
# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 37 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 38 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 69 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay 18
# 70 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 39 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 71 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, Common_Movement_WalkInPlaceFasterDown
# 72 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 40 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 73 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 74 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 41 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 75 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay 35
# 76 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 42 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 77 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei
# 78 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 43 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 79 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiToRockets
# 80 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 44 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 81 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerToRockets
# 82 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 45 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 83 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 84 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 46 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 85 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET2, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
# 86 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 47 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 87 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 88 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 48 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 89 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 90 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 49 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 91 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 92 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 50 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 93 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_GruntIntro
# 94 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 51 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 95 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ICEFALL_ROCKET3
# 96 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 52 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 97 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_45, FourIsland_IcefallCave_Back_Text_GruntDefeat
# 98 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 53 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 99 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp
# 100 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 54 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 101 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 102 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 55 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 103 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 104 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 56 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 105 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiWhereHaveYouTakenMons
# 106 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 57 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 107 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 108 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 58 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 109 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_NotTellingYouThat
# 110 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 59 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 111 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 112 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 60 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 113 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	message FourIsland_IcefallCave_Back_Text_LoreleiWellDeepFreezeYou
# 114 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 61 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 115 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmessage
# 116 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 62 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 117 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitse
# 118 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 63 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 119 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
# 120 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 64 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 121 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitbuttonpress
# 122 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 65 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 123 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmoncry
# 124 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 66 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 125 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat
# 126 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 67 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 127 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 128 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 68 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 129 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 130 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 69 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 131 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_OkayRocketWareHouseFiveIsland
# 132 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 70 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 133 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	closemessage
# 134 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 71 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 135 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit
# 136 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 72 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 137 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit
# 138 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 73 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 139 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1Exit
# 140 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 74 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 141 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET2, FourIsland_IcefallCave_Back_Movement_Rocket2Exit
# 142 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 75 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 143 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3Exit
# 144 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 76 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 145 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 146 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 77 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 147 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET1
# 148 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 78 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 149 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET2
# 150 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 79 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 151 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	removeobject LOCALID_ICEFALL_ROCKET3
# 152 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 80 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 153 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay 50
# 154 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 81 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 155 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_ICEFALL_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer
# 156 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 82 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 157 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 158 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 83 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 159 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 160 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 84 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 161 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	waitmovement 0
# 162 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 85 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 163 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 164 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 86 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 165 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful
# 166 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 87 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 167 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	setflag FLAG_HIDE_RUIN_VALLEY_SCIENTIST
# 168 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 88 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 169 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	clearflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 170 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 89 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 171 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1
# 172 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 90 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 173 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	releaseall
# 174 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	end
# 175 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 176 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 177 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 94 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 178 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_PlayerToRockets:
# 179 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 95 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 180 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_up
# 181 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 96 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 182 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_up
# 183 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 97 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 184 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_right
# 185 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 98 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 186 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_up
# 187 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 99 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 188 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 189 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 190 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 102 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 191 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit:
# 192 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 103 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 193 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 194 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 104 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 195 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_faster_left
# 196 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 105 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 197 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 198 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 106 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 199 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 200 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 107 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 201 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_faster_down
# 202 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 108 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 203 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 204 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 205 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 111 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 206 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown:
# 207 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 112 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 208 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_down
# 209 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 113 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 210 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 211 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 212 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedPushRight::
# 213 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 117 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 214 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	lock_facing_direction
# 215 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 118 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 216 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_right
# 217 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 119 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 218 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	unlock_facing_direction
# 219 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 120 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 220 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 221 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	return
# 222 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 223 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 224 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat::
# 225 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 124 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 226 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_fast_down
# 227 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 125 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 228 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 229 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	return
# 230 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 231 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 232 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 128 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 233 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket1Exit:
# 234 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 129 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 235 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_right
# 236 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 130 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 237 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_down
# 238 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 131 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 239 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 240 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 132 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 241 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 242 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 133 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 243 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 244 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 134 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 245 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 246 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 135 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 247 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 248 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 136 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 249 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 250 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 137 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 251 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 252 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 138 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 253 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 254 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 255 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 141 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 256 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket2Exit:
# 257 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 142 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 258 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 259 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 143 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 260 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_left
# 261 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 144 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 262 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_down
# 263 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 145 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 264 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 265 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 146 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 266 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 267 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 147 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 268 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 269 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 148 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 270 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 271 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 149 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 272 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 273 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 150 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 274 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 275 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 151 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 276 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 277 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 152 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 278 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 279 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 280 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 155 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 281 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket3Exit:
# 282 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 156 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 283 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 284 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 157 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 285 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_down
# 286 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 158 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 287 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 288 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 159 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 289 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_down
# 290 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 160 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 291 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_right
# 292 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 161 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 293 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_right
# 294 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 162 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 295 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 296 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 163 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 297 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 298 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 164 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 299 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 300 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 165 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 301 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 302 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 166 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 303 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_fast_down
# 304 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 167 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 305 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 306 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 307 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 170 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 308 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei:
# 309 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 171 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 310 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 311 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 172 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 312 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_8
# 313 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 173 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 314 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_faster_right
# 315 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 174 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 316 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 317 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 318 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 177 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 319 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedWalkLeft:
# 320 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 178 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 321 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_left
# 322 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 179 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 323 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_left
# 324 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 180 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 325 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 326 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 327 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 183 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 328 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiToRockets:
# 329 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 184 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 330 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_left
# 331 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 185 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 332 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_up
# 333 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 186 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 334 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 335 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 336 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 189 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 337 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp:
# 338 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 190 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 339 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_up
# 340 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 191 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 341 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 342 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 343 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 194 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 344 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit:
# 345 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 195 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 346 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_8
# 347 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 196 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 348 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_faster_right
# 349 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 197 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 350 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 351 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 198 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 352 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	delay_16
# 353 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 199 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 354 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_in_place_faster_down
# 355 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 200 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 356 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 357 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 358 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 203 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 359 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer:
# 360 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 204 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 361 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	walk_right
# 362 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 205 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 363 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	step_end
# 364 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 365 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_Lorelei::
# 366 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 209 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 367 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful, MSGBOX_NPC
# 368 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	end
# 369 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 370 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 371 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_LoreleiKeepHandsOffMons::
# 372 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 213 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 373 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "LORELEI: Keep your filthy hands\n"
# 374 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "off the POKéMON in the cave!\p"
# 375 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Do as I say, or you'll have me to\n"
# 376 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "answer to!$"
# 377 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 378 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_ShutItLadyLeaveUsBe::
# 379 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 220 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 380 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Aww, shut it, lady, and leave\n"
# 381 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "us be.\p"
# 382 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Don't let your glasses get all\n"
# 383 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "steamed up!$"
# 384 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 385 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_LoreleiPlayerHelpMeKickPoachersOut::
# 386 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 227 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 387 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "LORELEI: {PLAYER}?!\n"
# 388 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "What are you doing here?\p"
# 389 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "No, we can catch up later.\n"
# 390 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Right now, I need your help.\p"
# 391 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Help me kick these poachers out\n"
# 392 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "before they do anything else.\p"
# 393 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "They've been catching POKéMON\n"
# 394 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "here, then selling them off!\p"
# 395 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Are you ready?\n"
# 396 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "You take that one, please!$"
# 397 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 398 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_GruntIntro::
# 399 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 240 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 400 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "W-what?!\p"
# 401 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Who says we can't do what we want\n"
# 402 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "with the POKéMON we catch?$"
# 403 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 404 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_GruntDefeat::
# 405 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 246 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 406 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "We didn't plan on this!$"
# 407 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 408 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_LoreleiWhereHaveYouTakenMons::
# 409 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 250 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 410 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "LORELEI: Humph.\n"
# 411 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "So despicably weak.\p"
# 412 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "You!\n"
# 413 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Tell me!\p"
# 414 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Where have you taken the captured\n"
# 415 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "POKéMON?\p"
# 416 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "I'm smashing your ring once and\n"
# 417 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "for all!$"
# 418 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 419 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_NotTellingYouThat::
# 420 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 261 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 421 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "N-no way!\n"
# 422 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "I'm not telling you that!$"
# 423 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 424 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_LoreleiWellDeepFreezeYou::
# 425 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 266 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 426 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "LORELEI: If you won't confess,\n"
# 427 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "we'll deep-freeze you.\p"
# 428 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "My LAPRAS is furious for what\n"
# 429 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "you've done to its friends.\p"
# 430 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Go, LAPRAS!\n"
# 431 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "ICE BEAM…$"
# 432 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 433 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_OkayRocketWareHouseFiveIsland::
# 434 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 275 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 435 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Wawaah! Okay!\n"
# 436 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "I'll talk!\p"
# 437 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "The POKéMON are in the ROCKET\n"
# 438 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "WAREHOUSE on FIVE ISLAND.\p"
# 439 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "There! I said it!\n"
# 440 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "We'll be going now!\p"
# 441 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "…But I doubt you'll ever make it\n"
# 442 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "into the ROCKET WAREHOUSE!\p"
# 443 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "Heheheheh!$"
# 444 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"

# 445 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful::
# 446 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 287 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
# 447 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 448 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "But this is awful…\p"
# 449 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "I was born and raised here on\n"
# 450 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "these islands.\p"
# 451 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "I had no idea that those horrible\n"
# 452 "data/maps/FourIsland_IcefallCave_Back_Frlg/scripts.pory"
	.string "criminals were loose here…$"
