Route2_EastBuilding_Frlg_MapScripts::
	.byte 0


Route2_EastBuilding_EventScript_Aide::
# 4 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	lock
# 5 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	faceplayer
# 6 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	call Route2_EastBuilding_EventScript_GetAideRequestInfo
# 7 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HM05, Route2_EastBuilding_EventScript_Aide_2
Route2_EastBuilding_EventScript_Aide_1:
# 10 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_GiveHM05IfSeen10Mons, MSGBOX_YESNO
# 11 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route2_EastBuilding_EventScript_Aide_5
Route2_EastBuilding_EventScript_Aide_4:
# 14 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 15 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 16 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 17 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	call Route2_EastBuilding_EventScript_GetAideRequestInfo
# 18 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	compare VAR_0x8006, REQUIRED_SEEN_MONS
	goto_if_lt Route2_EastBuilding_EventScript_Aide_8
Route2_EastBuilding_EventScript_Aide_7:
# 21 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_GreatHereYouGo
# 22 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	checkitemspace ITEM_HM05
# 23 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route2_EastBuilding_EventScript_Aide_11
Route2_EastBuilding_EventScript_Aide_10:
# 26 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	giveitem_msg Route2_EastBuilding_Text_ReceivedHM05FromAide, ITEM_HM05
# 27 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	setflag FLAG_GOT_HM05
# 28 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_ExplainHM05
# 29 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	release
	end

Route2_EastBuilding_EventScript_Aide_2:
# 8 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto Route2_EastBuilding_EventScript_AlreadyGotHM05
	goto Route2_EastBuilding_EventScript_Aide_1

Route2_EastBuilding_EventScript_Aide_5:
# 12 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto Aide_EventScript_DeclineCheckMons
	goto Route2_EastBuilding_EventScript_Aide_4

Route2_EastBuilding_EventScript_Aide_8:
# 19 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto Aide_EventScript_HaventCaughtEnough
	goto Route2_EastBuilding_EventScript_Aide_7

Route2_EastBuilding_EventScript_Aide_11:
# 24 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	goto Aide_EventScript_NoRoomForItem
	goto Route2_EastBuilding_EventScript_Aide_10


Route2_EastBuilding_EventScript_AlreadyGotHM05::
# 34 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_ExplainHM05
# 35 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	release
	end


Route2_EastBuilding_EventScript_GetAideRequestInfo::
# 40 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_SEEN_MONS
# 41 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_HM05
	return


Route2_EastBuilding_EventScript_Rocker::
# 46 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	msgbox Route2_EastBuilding_Text_CanGetThroughRockTunnel, MSGBOX_NPC
	end


Route2_EastBuilding_Text_GiveHM05IfSeen10Mons::
# 50 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Hi! Remember me?\n"
	.string "I'm one of PROF. OAK's AIDES.\p"
	.string "If your POKéDEX has complete data\n"
	.string "on ten species, I'm supposed to\l"
	.string "give you a reward.\p"
	.string "PROF. OAK entrusted me with\n"
	.string "HM05 for you.\p"
	.string "So, {PLAYER}, let me ask you.\p"
	.string "Have you gathered data on at least\n"
	.string "ten kinds of POKéMON?$"

Route2_EastBuilding_Text_GreatHereYouGo::
# 63 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Great! You have caught or owned\n"
	.string "{STR_VAR_3} kinds of POKéMON!\p"
	.string "Congratulations!\n"
	.string "Here you go!$"

Route2_EastBuilding_Text_ReceivedHM05FromAide::
# 70 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "{PLAYER} received HM05\n"
	.string "from the AIDE.$"

Route2_EastBuilding_Text_ExplainHM05::
# 75 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "HM05 contains the hidden move\n"
	.string "FLASH.\p"
	.string "FLASH lights up even the darkest\n"
	.string "of caves and dungeons.$"

Route2_EastBuilding_Text_CanGetThroughRockTunnel::
# 82 "data/maps/Route2_EastBuilding_Frlg/scripts.pory"
	.string "Once a POKéMON learns FLASH, you\n"
	.string "can get through ROCK TUNNEL.$"
