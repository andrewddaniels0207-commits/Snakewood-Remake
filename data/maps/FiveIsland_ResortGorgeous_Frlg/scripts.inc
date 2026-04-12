# 1 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 2 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Frlg_MapScripts::
# 3 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 2 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 4 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FiveIsland_ResortGorgeous_OnWarp
# 5 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 3 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 6 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_ResortGorgeous_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 9 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 4 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 11 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene
# 12 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.2byte 0
# 13 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 14 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 15 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 8 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 16 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 17 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 9 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 18 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_OnWarp:
# 19 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 10 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 20 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth
# 21 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 11 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 22 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.2byte 0
# 23 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 24 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth::
# 25 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 16 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 26 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 27 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	end
# 28 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 29 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 30 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene::
# 31 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 21 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 32 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	lockall
# 33 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 22 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 34 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 35 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 23 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 36 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow
# 37 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 24 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 38 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	closemessage
# 39 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 25 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 40 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, Common_Movement_WalkInPlaceFasterUp
# 41 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 26 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 42 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	waitmovement 0
# 43 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 27 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 44 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	opendoor 39, 8
# 45 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 28 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 46 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	waitdooranim
# 47 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 29 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 48 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, FiveIsland_ResortGorgeous_Movement_SelphyEnterHome
# 49 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 30 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 50 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	waitmovement 0
# 51 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 31 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 52 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	closedoor 39, 8
# 53 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 32 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 54 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	waitdooranim
# 55 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 33 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 56 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	removeobject LOCALID_RESORT_GORGEOUS_SELPHY
# 57 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 34 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 58 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	clearflag FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY
# 59 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 35 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 60 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 2
# 61 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 36 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 62 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	releaseall
# 63 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	end
# 64 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 65 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 66 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 40 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 67 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Movement_SelphyEnterHome:
# 68 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 41 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 69 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	walk_up
# 70 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 42 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 71 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	set_invisible
# 72 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 43 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 73 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	step_end
# 74 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 75 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_EventScript_SelphysHouseSign::
# 76 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 47 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 77 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_Text_SelphysHouse, MSGBOX_SIGN
# 78 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	end
# 79 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 80 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 81 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_DaisyIntro::
# 82 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 51 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 83 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "With these hands, I will create\n"
# 84 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "my victory!$"
# 85 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 86 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_DaisyDefeat::
# 87 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 56 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 88 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "The shame of this…\n"
# 89 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I'm red-faced…$"
# 90 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 91 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_DaisyPostBattle::
# 92 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 61 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 93 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Uh-oh, my paint tubes have\n"
# 94 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "scattered everywhere!$"
# 95 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 96 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_CelinaIntro::
# 97 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 66 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 98 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Excuse me!\n"
# 99 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I'm trying to paint.\l"
# 100 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Please keep out of my sight!$"
# 101 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 102 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_CelinaDefeat::
# 103 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 72 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 104 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "This loss…\n"
# 105 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I feel like I'm whiting out…$"
# 106 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 107 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_CelinaPostBattle::
# 108 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 77 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 109 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "GILLIAN?\n"
# 110 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Please tilt your head slightly…\l"
# 111 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "There! That's the look I want!$"
# 112 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 113 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_RaynaIntro::
# 114 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 83 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 115 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Hmm…\n"
# 116 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "The angle, it is not quite there…$"
# 117 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 118 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_RaynaDefeat::
# 119 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 88 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 120 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Oh…\n"
# 121 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "My feelings, they are blue…$"
# 122 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 123 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_RaynaPostBattle::
# 124 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 93 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 125 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "The sky and the sea…\n"
# 126 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "They are so fickle.\p"
# 127 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Their changing expressions make\n"
# 128 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "them difficult to capture.$"
# 129 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 130 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_JackiIntro::
# 131 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 100 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 132 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I am visiting my friend's retreat,\n"
# 133 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "if you must know.$"
# 134 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 135 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_JackiDefeat::
# 136 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 105 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 137 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Oh, my, so strong.$"
# 138 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 139 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_JackiPostBattle::
# 140 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 109 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 141 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I find it pleasurable to leisurely\n"
# 142 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "battle in the gentle sea breeze.$"
# 143 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 144 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_GillianIntro::
# 145 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 114 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 146 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I'm thinking of having a pool\n"
# 147 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "made specially for POKéMON.$"
# 148 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 149 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_GillianDefeat::
# 150 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 119 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 151 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Oh, my goodness gracious!$"
# 152 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 153 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_GillianPostBattle::
# 154 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 123 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 155 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "A pool would be nice, but I must\n"
# 156 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "say, a sun-room may be sublime.$"
# 157 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 158 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_DestinIntro::
# 159 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 128 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 160 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I'm a good runner.\n"
# 161 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I'm really fast!$"
# 162 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 163 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_DestinDefeat::
# 164 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 133 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 165 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Oops!\n"
# 166 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I rushed things!$"
# 167 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 168 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_DestinPostBattle::
# 169 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 138 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 170 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "When I run with the wind, it feels\n"
# 171 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "like I could fly!$"
# 172 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 173 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_TobyIntro::
# 174 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 143 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 175 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I say, this marine life here at\n"
# 176 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "this resort agrees with me.$"
# 177 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 178 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_TobyDefeat::
# 179 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 148 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 180 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "That's a shocker!\n"
# 181 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "You must be joking.$"
# 182 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 183 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_TobyPostBattle::
# 184 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 153 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 185 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Getting so serious over this…\n"
# 186 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "How nonsensical.$"
# 187 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 188 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow::
# 189 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 158 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 190 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "SELPHY: Thank you.\p"
# 191 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "You may go now.$"
# 192 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 193 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Text_SelphysHouse::
# 194 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 163 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
# 195 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "SELPHY'S HOUSE$"
