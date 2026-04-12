FiveIsland_ResortGorgeous_Frlg_MapScripts::
# 2 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FiveIsland_ResortGorgeous_OnWarp
# 3 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FiveIsland_ResortGorgeous_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FiveIsland_ResortGorgeous_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene
	.2byte 0


# 8 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"

# 9 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_OnWarp:
# 10 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 1, FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth
# 11 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.2byte 0

FiveIsland_ResortGorgeous_EventScript_TurnPlayerNorth::
# 16 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	end


FiveIsland_ResortGorgeous_EventScript_SelphyReturnHomeScene::
# 21 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	lockall
# 22 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 23 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow
# 24 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	closemessage
# 25 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, Common_Movement_WalkInPlaceFasterUp
# 26 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	waitmovement 0
# 27 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	opendoor 39, 8
# 28 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	waitdooranim
# 29 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	applymovement LOCALID_RESORT_GORGEOUS_SELPHY, FiveIsland_ResortGorgeous_Movement_SelphyEnterHome
# 30 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	waitmovement 0
# 31 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	closedoor 39, 8
# 32 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	waitdooranim
# 33 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	removeobject LOCALID_RESORT_GORGEOUS_SELPHY
# 34 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	clearflag FLAG_HIDE_RESORT_GORGEOUS_INSIDE_SELPHY
# 35 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_FIVE_ISLAND_RESORT_GORGEOUS, 2
# 36 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	releaseall
	end


# 40 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
FiveIsland_ResortGorgeous_Movement_SelphyEnterHome:
# 41 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	walk_up
# 42 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	set_invisible
# 43 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	step_end

FiveIsland_ResortGorgeous_EventScript_SelphysHouseSign::
# 47 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	msgbox FiveIsland_ResortGorgeous_Text_SelphysHouse, MSGBOX_SIGN
	end


FiveIsland_ResortGorgeous_Text_DaisyIntro::
# 51 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "With these hands, I will create\n"
	.string "my victory!$"

FiveIsland_ResortGorgeous_Text_DaisyDefeat::
# 56 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "The shame of this…\n"
	.string "I'm red-faced…$"

FiveIsland_ResortGorgeous_Text_DaisyPostBattle::
# 61 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Uh-oh, my paint tubes have\n"
	.string "scattered everywhere!$"

FiveIsland_ResortGorgeous_Text_CelinaIntro::
# 66 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Excuse me!\n"
	.string "I'm trying to paint.\l"
	.string "Please keep out of my sight!$"

FiveIsland_ResortGorgeous_Text_CelinaDefeat::
# 72 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "This loss…\n"
	.string "I feel like I'm whiting out…$"

FiveIsland_ResortGorgeous_Text_CelinaPostBattle::
# 77 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "GILLIAN?\n"
	.string "Please tilt your head slightly…\l"
	.string "There! That's the look I want!$"

FiveIsland_ResortGorgeous_Text_RaynaIntro::
# 83 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Hmm…\n"
	.string "The angle, it is not quite there…$"

FiveIsland_ResortGorgeous_Text_RaynaDefeat::
# 88 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Oh…\n"
	.string "My feelings, they are blue…$"

FiveIsland_ResortGorgeous_Text_RaynaPostBattle::
# 93 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "The sky and the sea…\n"
	.string "They are so fickle.\p"
	.string "Their changing expressions make\n"
	.string "them difficult to capture.$"

FiveIsland_ResortGorgeous_Text_JackiIntro::
# 100 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I am visiting my friend's retreat,\n"
	.string "if you must know.$"

FiveIsland_ResortGorgeous_Text_JackiDefeat::
# 105 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Oh, my, so strong.$"

FiveIsland_ResortGorgeous_Text_JackiPostBattle::
# 109 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I find it pleasurable to leisurely\n"
	.string "battle in the gentle sea breeze.$"

FiveIsland_ResortGorgeous_Text_GillianIntro::
# 114 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I'm thinking of having a pool\n"
	.string "made specially for POKéMON.$"

FiveIsland_ResortGorgeous_Text_GillianDefeat::
# 119 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Oh, my goodness gracious!$"

FiveIsland_ResortGorgeous_Text_GillianPostBattle::
# 123 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "A pool would be nice, but I must\n"
	.string "say, a sun-room may be sublime.$"

FiveIsland_ResortGorgeous_Text_DestinIntro::
# 128 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I'm a good runner.\n"
	.string "I'm really fast!$"

FiveIsland_ResortGorgeous_Text_DestinDefeat::
# 133 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Oops!\n"
	.string "I rushed things!$"

FiveIsland_ResortGorgeous_Text_DestinPostBattle::
# 138 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "When I run with the wind, it feels\n"
	.string "like I could fly!$"

FiveIsland_ResortGorgeous_Text_TobyIntro::
# 143 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "I say, this marine life here at\n"
	.string "this resort agrees with me.$"

FiveIsland_ResortGorgeous_Text_TobyDefeat::
# 148 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "That's a shocker!\n"
	.string "You must be joking.$"

FiveIsland_ResortGorgeous_Text_TobyPostBattle::
# 153 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "Getting so serious over this…\n"
	.string "How nonsensical.$"

FiveIsland_ResortGorgeous_Text_SelphyThanksYouMayGoNow::
# 158 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "SELPHY: Thank you.\p"
	.string "You may go now.$"

FiveIsland_ResortGorgeous_Text_SelphysHouse::
# 163 "data/maps/FiveIsland_ResortGorgeous_Frlg/scripts.pory"
	.string "SELPHY'S HOUSE$"
