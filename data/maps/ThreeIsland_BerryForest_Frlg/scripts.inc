# 1 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 2 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Frlg_MapScripts::
# 3 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 2 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 4 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_BerryForest_OnTransition
# 5 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 7 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 8 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_OnTransition::
# 9 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 6 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 10 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST
# 11 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 7 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 12 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setescapewarp MAP_THREE_ISLAND_BOND_BRIDGE, 12, 6
# 13 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	end
# 14 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 15 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 16 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_EventScript_Lostelle::
# 17 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 12 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 18 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	lock
# 19 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 13 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 20 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	faceplayer
# 21 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 14 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 22 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HelpScaryPokemon
# 23 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 15 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 24 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	playse SE_PIN
# 25 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 16 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 26 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, Common_Movement_ExclamationMark
# 27 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 17 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 28 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitmovement 0
# 29 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 18 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 30 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, ThreeIsland_BerryForest_Movement_LostelleLookAround
# 31 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 19 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 32 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitmovement 0
# 33 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 20 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 34 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HereItComesAgain
# 35 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 21 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 36 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitse
# 37 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 22 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 38 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
# 39 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 23 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 40 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitmoncry
# 41 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 24 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 42 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setwildbattle SPECIES_HYPNO, 30
# 43 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 25 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 44 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	dowildbattle
# 45 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 26 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 46 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	applymovement LOCALID_BERRY_FOREST_LOSTELLE, Common_Movement_FacePlayer
# 47 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 27 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 48 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitmovement 0
# 49 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 28 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 50 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_ThankYouHaveThis
# 51 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 29 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 52 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 53 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 30 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 54 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 55 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	goto_if_eq ThreeIsland_BerryForest_EventScript_Lostelle_2
# 56 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_EventScript_Lostelle_1:
# 57 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 33 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 58 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	special GetPlayerBigGuyGirlString
# 59 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 34 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 60 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_LetsGoHome
# 61 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 35 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 62 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	closemessage
# 63 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 36 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 64 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setflag FLAG_RESCUED_LOSTELLE
# 65 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 37 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 66 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setflag FLAG_HIDE_LOSTELLE_IN_BERRY_FOREST
# 67 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 38 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 68 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2
# 69 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 39 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 70 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 71 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 40 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 72 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	warp MAP_TWO_ISLAND_JOYFUL_GAME_CORNER, 6, 6
# 73 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 41 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 74 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	waitstate
# 75 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 42 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 76 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	release
# 77 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	end
# 78 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 79 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_EventScript_Lostelle_2:
# 80 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 31 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 81 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	call ThreeIsland_BerryForest_EventScript_NoRoomForBerry
# 82 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	goto ThreeIsland_BerryForest_EventScript_Lostelle_1
# 83 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 84 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 85 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_EventScript_NoRoomForBerry::
# 86 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 47 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 87 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BerryPouchIsFull
# 88 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	return
# 89 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 90 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 91 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 51 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 92 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Movement_LostelleLookAround:
# 93 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 52 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 94 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	walk_in_place_faster_left
# 95 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 53 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 96 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	delay_16
# 97 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 54 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 98 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	walk_in_place_faster_right
# 99 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 55 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 100 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	delay_8
# 101 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 56 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 102 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	walk_in_place_faster_left
# 103 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 57 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 104 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	step_end
# 105 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 106 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_EventScript_WelcomeSign::
# 107 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 61 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 108 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_WelcomeToBerryForest, MSGBOX_SIGN
# 109 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	end
# 110 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 111 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 112 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_EventScript_BewareSign::
# 113 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 66 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 114 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons, MSGBOX_SIGN
# 115 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	end
# 116 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 117 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 118 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_HelpScaryPokemon::
# 119 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 70 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 120 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "LOSTELLE: Whimper… Sniff…\n"
# 121 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Oh! Please, help!\p"
# 122 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "A scary POKéMON appeared there\n"
# 123 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "a little while ago.\p"
# 124 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "It kept scaring.\n"
# 125 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "It made LOSTELLE scared.\p"
# 126 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "I'm too scared to move!\n"
# 127 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "But I want to go home…$"
# 128 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 129 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_HereItComesAgain::
# 130 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 81 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 131 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Oh! Here it comes again!\n"
# 132 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "No! Go away! It's scaring me!\p"
# 133 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Waaaaaaah!\n"
# 134 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "I want my daddy!$"
# 135 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 136 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_ThankYouHaveThis::
# 137 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 88 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 138 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Ohh! That was so scary!\n"
# 139 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Thank you!\p"
# 140 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "LOSTELLE came to pick some\n"
# 141 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "BERRIES.\p"
# 142 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "You can have this!$"
# 143 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 144 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_LetsGoHome::
# 145 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 96 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 146 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "What's your name?\p"
# 147 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "LOSTELLE's scared, so can I go\n"
# 148 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "with you to my daddy's house?\p"
# 149 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Okay!\n"
# 150 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Let's go home!$"
# 151 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 152 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_BerryPouchIsFull::
# 153 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 104 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 154 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Your BERRY POUCH is full.\n"
# 155 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "I guess you don't want this.$"
# 156 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 157 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_WelcomeToBerryForest::
# 158 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 109 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 159 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Welcome to the BERRY FOREST\p"
# 160 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Be friendly and share BERRIES with\n"
# 161 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "others and POKéMON.$"
# 162 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"

# 163 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons::
# 164 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 115 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
# 165 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "Beware of wild, BERRY-loving\n"
# 166 "data/maps/ThreeIsland_BerryForest_Frlg/scripts.pory"
	.string "POKéMON!$"
