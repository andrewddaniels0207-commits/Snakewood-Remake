ThreeIsland_Port_Frlg_MapScripts::
# 2 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_Port_OnTransition
	.byte 0


ThreeIsland_Port_OnTransition::
# 6 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	clearflag FLAG_SYS_PC_STORAGE_DISABLED
# 7 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	setflag FLAG_SEVII_DETOUR_FINISHED
	end


ThreeIsland_Port_EventScript_Woman::
# 12 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	lock
# 13 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	faceplayer
# 14 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2
	goto_if_ge ThreeIsland_Port_EventScript_Woman_2
ThreeIsland_Port_EventScript_Woman_1:
# 17 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_THREE_ISLAND, 4
	goto_if_ge ThreeIsland_Port_EventScript_Woman_5
ThreeIsland_Port_EventScript_Woman_4:
# 20 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_IllCallThePolice
# 21 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	release
	end

ThreeIsland_Port_EventScript_Woman_2:
# 15 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	goto ThreeIsland_Port_EventScript_WomanLostelleFound
	goto ThreeIsland_Port_EventScript_Woman_1

ThreeIsland_Port_EventScript_Woman_5:
# 18 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	goto ThreeIsland_Port_EventScript_WomanBikersGone
	goto ThreeIsland_Port_EventScript_Woman_4


ThreeIsland_Port_EventScript_WomanLostelleFound::
# 26 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_EverythingTurnedOutForBest
# 27 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	release
	end


ThreeIsland_Port_EventScript_WomanBikersGone::
# 32 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_ThankGoodnessBikersGone
# 33 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	release
	end


ThreeIsland_Port_EventScript_Biker1::
# 38 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_WereKantoRiderFederation, MSGBOX_NPC
	end


ThreeIsland_Port_EventScript_Biker2::
# 43 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	lock
# 44 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_ForkOverMoney
# 45 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	release
	end


ThreeIsland_Port_Text_WereKantoRiderFederation::
# 49 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "We're the KANTO RIDER FEDERATION!\n"
	.string "Vroom! Vavavavooom! Vroom!\p"
	.string "My bike's wimpy, so I have to\n"
	.string "make exhaust noises myself!$"

ThreeIsland_Port_Text_ForkOverMoney::
# 56 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Hey, hey, lady!\n"
	.string "Fork over some spending money!$"

ThreeIsland_Port_Text_IllCallThePolice::
# 61 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Aiyeeh!\p"
	.string "Wh-who are you?!\n"
	.string "I… I'll call the police!$"

ThreeIsland_Port_Text_ThankGoodnessBikersGone::
# 67 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Those BIKERS…\n"
	.string "Are they gone?\p"
	.string "Oh, thank goodness!\n"
	.string "They certainly had me terrified!$"

ThreeIsland_Port_Text_EverythingTurnedOutForBest::
# 74 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Those BIKERS ran off, and\n"
	.string "LOSTELLE was found safe.\p"
	.string "Everything turned out for the best!$"
