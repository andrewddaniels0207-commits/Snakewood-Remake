# 1 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 2 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 4 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_Port_OnTransition
# 5 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 7 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 8 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_OnTransition::
# 9 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 6 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 10 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	clearflag FLAG_SYS_PC_STORAGE_DISABLED
# 11 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 7 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 12 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	setflag FLAG_SEVII_DETOUR_FINISHED
# 13 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	end
# 14 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 15 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 16 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_Woman::
# 17 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 12 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 18 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	lock
# 19 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 13 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 20 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 14 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 22 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2
# 23 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	goto_if_ge ThreeIsland_Port_EventScript_Woman_2
# 24 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_Woman_1:
# 25 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 17 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 26 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_THREE_ISLAND, 4
# 27 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	goto_if_ge ThreeIsland_Port_EventScript_Woman_5
# 28 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_Woman_4:
# 29 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 20 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 30 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_IllCallThePolice
# 31 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 21 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 32 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	release
# 33 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	end
# 34 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 35 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_Woman_2:
# 36 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 15 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 37 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	goto ThreeIsland_Port_EventScript_WomanLostelleFound
# 38 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	goto ThreeIsland_Port_EventScript_Woman_1
# 39 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 40 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_Woman_5:
# 41 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 18 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 42 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	goto ThreeIsland_Port_EventScript_WomanBikersGone
# 43 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	goto ThreeIsland_Port_EventScript_Woman_4
# 44 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 45 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 46 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_WomanLostelleFound::
# 47 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 26 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 48 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_EverythingTurnedOutForBest
# 49 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 27 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 50 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	release
# 51 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	end
# 52 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 53 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 54 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_WomanBikersGone::
# 55 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 32 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 56 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_ThankGoodnessBikersGone
# 57 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 33 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 58 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	release
# 59 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	end
# 60 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 61 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 62 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_Biker1::
# 63 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 38 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 64 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_WereKantoRiderFederation, MSGBOX_NPC
# 65 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	end
# 66 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 67 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 68 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_EventScript_Biker2::
# 69 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 43 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 70 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	lock
# 71 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 44 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 72 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	msgbox ThreeIsland_Port_Text_ForkOverMoney
# 73 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 45 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 74 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	release
# 75 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	end
# 76 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 77 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 78 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_Text_WereKantoRiderFederation::
# 79 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 49 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 80 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "We're the KANTO RIDER FEDERATION!\n"
# 81 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Vroom! Vavavavooom! Vroom!\p"
# 82 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "My bike's wimpy, so I have to\n"
# 83 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "make exhaust noises myself!$"
# 84 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 85 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_Text_ForkOverMoney::
# 86 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 56 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 87 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Hey, hey, lady!\n"
# 88 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Fork over some spending money!$"
# 89 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 90 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_Text_IllCallThePolice::
# 91 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 61 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 92 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Aiyeeh!\p"
# 93 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Wh-who are you?!\n"
# 94 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "I… I'll call the police!$"
# 95 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 96 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_Text_ThankGoodnessBikersGone::
# 97 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 67 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 98 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Those BIKERS…\n"
# 99 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Are they gone?\p"
# 100 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Oh, thank goodness!\n"
# 101 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "They certainly had me terrified!$"
# 102 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"

# 103 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
ThreeIsland_Port_Text_EverythingTurnedOutForBest::
# 104 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 74 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
# 105 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Those BIKERS ran off, and\n"
# 106 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "LOSTELLE was found safe.\p"
# 107 "data/maps/ThreeIsland_Port_Frlg/scripts.pory"
	.string "Everything turned out for the best!$"
