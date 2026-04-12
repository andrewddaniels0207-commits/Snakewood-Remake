# 1 "data/maps/MossdeepCity_House2/scripts.pory"

# 2 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_MapScripts::
# 3 "data/maps/MossdeepCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_House2/scripts.pory"

# 5 "data/maps/MossdeepCity_House2/scripts.pory"

# 6 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_Man::
# 7 "data/maps/MossdeepCity_House2/scripts.pory"
# 4 "data/maps/MossdeepCity_House2/scripts.pory"
# 8 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree, MSGBOX_NPC
# 9 "data/maps/MossdeepCity_House2/scripts.pory"
	end
# 10 "data/maps/MossdeepCity_House2/scripts.pory"

# 11 "data/maps/MossdeepCity_House2/scripts.pory"

# 12 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_Twin::
# 13 "data/maps/MossdeepCity_House2/scripts.pory"
# 9 "data/maps/MossdeepCity_House2/scripts.pory"
# 14 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth, MSGBOX_NPC
# 15 "data/maps/MossdeepCity_House2/scripts.pory"
	end
# 16 "data/maps/MossdeepCity_House2/scripts.pory"

# 17 "data/maps/MossdeepCity_House2/scripts.pory"

# 18 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_Wingull::
# 19 "data/maps/MossdeepCity_House2/scripts.pory"
# 14 "data/maps/MossdeepCity_House2/scripts.pory"
# 20 "data/maps/MossdeepCity_House2/scripts.pory"
	lock
# 21 "data/maps/MossdeepCity_House2/scripts.pory"
# 15 "data/maps/MossdeepCity_House2/scripts.pory"
# 22 "data/maps/MossdeepCity_House2/scripts.pory"
	faceplayer
# 23 "data/maps/MossdeepCity_House2/scripts.pory"
# 16 "data/maps/MossdeepCity_House2/scripts.pory"
# 24 "data/maps/MossdeepCity_House2/scripts.pory"
	waitse
# 25 "data/maps/MossdeepCity_House2/scripts.pory"
# 17 "data/maps/MossdeepCity_House2/scripts.pory"
# 26 "data/maps/MossdeepCity_House2/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 27 "data/maps/MossdeepCity_House2/scripts.pory"
# 18 "data/maps/MossdeepCity_House2/scripts.pory"
# 28 "data/maps/MossdeepCity_House2/scripts.pory"
	msgbox MossdeepCity_House2_Text_Wingull, MSGBOX_DEFAULT
# 29 "data/maps/MossdeepCity_House2/scripts.pory"
# 19 "data/maps/MossdeepCity_House2/scripts.pory"
# 30 "data/maps/MossdeepCity_House2/scripts.pory"
	waitmoncry
# 31 "data/maps/MossdeepCity_House2/scripts.pory"
# 20 "data/maps/MossdeepCity_House2/scripts.pory"
# 32 "data/maps/MossdeepCity_House2/scripts.pory"
	closemessage
# 33 "data/maps/MossdeepCity_House2/scripts.pory"
# 21 "data/maps/MossdeepCity_House2/scripts.pory"
# 34 "data/maps/MossdeepCity_House2/scripts.pory"
	setflag FLAG_WINGULL_DELIVERED_MAIL
# 35 "data/maps/MossdeepCity_House2/scripts.pory"
# 22 "data/maps/MossdeepCity_House2/scripts.pory"
# 36 "data/maps/MossdeepCity_House2/scripts.pory"
	clearflag FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL
# 37 "data/maps/MossdeepCity_House2/scripts.pory"
# 23 "data/maps/MossdeepCity_House2/scripts.pory"
# 38 "data/maps/MossdeepCity_House2/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 39 "data/maps/MossdeepCity_House2/scripts.pory"
	goto_if_eq MossdeepCity_House2_EventScript_Wingull_2
# 40 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_Wingull_1:
# 41 "data/maps/MossdeepCity_House2/scripts.pory"
# 26 "data/maps/MossdeepCity_House2/scripts.pory"
# 42 "data/maps/MossdeepCity_House2/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 43 "data/maps/MossdeepCity_House2/scripts.pory"
	goto_if_eq MossdeepCity_House2_EventScript_Wingull_5
# 44 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_Wingull_4:
# 45 "data/maps/MossdeepCity_House2/scripts.pory"
# 29 "data/maps/MossdeepCity_House2/scripts.pory"
# 46 "data/maps/MossdeepCity_House2/scripts.pory"
	removeobject LOCALID_MOSSDEEP_HOUSE_WINGULL
# 47 "data/maps/MossdeepCity_House2/scripts.pory"
# 30 "data/maps/MossdeepCity_House2/scripts.pory"
# 48 "data/maps/MossdeepCity_House2/scripts.pory"
	release
# 49 "data/maps/MossdeepCity_House2/scripts.pory"
	end
# 50 "data/maps/MossdeepCity_House2/scripts.pory"

# 51 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_Wingull_2:
# 52 "data/maps/MossdeepCity_House2/scripts.pory"
# 24 "data/maps/MossdeepCity_House2/scripts.pory"
# 53 "data/maps/MossdeepCity_House2/scripts.pory"
	call MossdeepCity_House2_EventScript_WingullExitNorth
# 54 "data/maps/MossdeepCity_House2/scripts.pory"
	goto MossdeepCity_House2_EventScript_Wingull_1
# 55 "data/maps/MossdeepCity_House2/scripts.pory"

# 56 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_Wingull_5:
# 57 "data/maps/MossdeepCity_House2/scripts.pory"
# 27 "data/maps/MossdeepCity_House2/scripts.pory"
# 58 "data/maps/MossdeepCity_House2/scripts.pory"
	call MossdeepCity_House2_EventScript_WingullExitWest
# 59 "data/maps/MossdeepCity_House2/scripts.pory"
	goto MossdeepCity_House2_EventScript_Wingull_4
# 60 "data/maps/MossdeepCity_House2/scripts.pory"

# 61 "data/maps/MossdeepCity_House2/scripts.pory"

# 62 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_WingullExitNorth::
# 63 "data/maps/MossdeepCity_House2/scripts.pory"
# 35 "data/maps/MossdeepCity_House2/scripts.pory"
# 64 "data/maps/MossdeepCity_House2/scripts.pory"
	applymovement LOCALID_MOSSDEEP_HOUSE_WINGULL, MossdeepCity_House2_Movement_WingullExitNorth
# 65 "data/maps/MossdeepCity_House2/scripts.pory"
# 36 "data/maps/MossdeepCity_House2/scripts.pory"
# 66 "data/maps/MossdeepCity_House2/scripts.pory"
	waitmovement 0
# 67 "data/maps/MossdeepCity_House2/scripts.pory"
	return
# 68 "data/maps/MossdeepCity_House2/scripts.pory"

# 69 "data/maps/MossdeepCity_House2/scripts.pory"

# 70 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_EventScript_WingullExitWest::
# 71 "data/maps/MossdeepCity_House2/scripts.pory"
# 41 "data/maps/MossdeepCity_House2/scripts.pory"
# 72 "data/maps/MossdeepCity_House2/scripts.pory"
	applymovement LOCALID_MOSSDEEP_HOUSE_WINGULL, MossdeepCity_House2_Movement_WingullExitEast
# 73 "data/maps/MossdeepCity_House2/scripts.pory"
# 42 "data/maps/MossdeepCity_House2/scripts.pory"
# 74 "data/maps/MossdeepCity_House2/scripts.pory"
	waitmovement 0
# 75 "data/maps/MossdeepCity_House2/scripts.pory"
	return
# 76 "data/maps/MossdeepCity_House2/scripts.pory"

# 77 "data/maps/MossdeepCity_House2/scripts.pory"

# 78 "data/maps/MossdeepCity_House2/scripts.pory"
# 46 "data/maps/MossdeepCity_House2/scripts.pory"
# 79 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_Movement_WingullExitNorth:
# 80 "data/maps/MossdeepCity_House2/scripts.pory"
# 47 "data/maps/MossdeepCity_House2/scripts.pory"
# 81 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_right
# 82 "data/maps/MossdeepCity_House2/scripts.pory"
# 48 "data/maps/MossdeepCity_House2/scripts.pory"
# 83 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_down
# 84 "data/maps/MossdeepCity_House2/scripts.pory"
# 49 "data/maps/MossdeepCity_House2/scripts.pory"
# 85 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_down
# 86 "data/maps/MossdeepCity_House2/scripts.pory"
# 50 "data/maps/MossdeepCity_House2/scripts.pory"
# 87 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_left
# 88 "data/maps/MossdeepCity_House2/scripts.pory"
# 51 "data/maps/MossdeepCity_House2/scripts.pory"
# 89 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_down
# 90 "data/maps/MossdeepCity_House2/scripts.pory"
# 52 "data/maps/MossdeepCity_House2/scripts.pory"
# 91 "data/maps/MossdeepCity_House2/scripts.pory"
	delay_8
# 92 "data/maps/MossdeepCity_House2/scripts.pory"
# 53 "data/maps/MossdeepCity_House2/scripts.pory"
# 93 "data/maps/MossdeepCity_House2/scripts.pory"
	step_end
# 94 "data/maps/MossdeepCity_House2/scripts.pory"

# 95 "data/maps/MossdeepCity_House2/scripts.pory"
# 56 "data/maps/MossdeepCity_House2/scripts.pory"
# 96 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_Movement_WingullExitEast:
# 97 "data/maps/MossdeepCity_House2/scripts.pory"
# 57 "data/maps/MossdeepCity_House2/scripts.pory"
# 98 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_down
# 99 "data/maps/MossdeepCity_House2/scripts.pory"
# 58 "data/maps/MossdeepCity_House2/scripts.pory"
# 100 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_down
# 101 "data/maps/MossdeepCity_House2/scripts.pory"
# 59 "data/maps/MossdeepCity_House2/scripts.pory"
# 102 "data/maps/MossdeepCity_House2/scripts.pory"
	walk_fast_down
# 103 "data/maps/MossdeepCity_House2/scripts.pory"
# 60 "data/maps/MossdeepCity_House2/scripts.pory"
# 104 "data/maps/MossdeepCity_House2/scripts.pory"
	delay_8
# 105 "data/maps/MossdeepCity_House2/scripts.pory"
# 61 "data/maps/MossdeepCity_House2/scripts.pory"
# 106 "data/maps/MossdeepCity_House2/scripts.pory"
	step_end
# 107 "data/maps/MossdeepCity_House2/scripts.pory"

# 108 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_Text_SisterMailsBoyfriendInFortree::
# 109 "data/maps/MossdeepCity_House2/scripts.pory"
# 64 "data/maps/MossdeepCity_House2/scripts.pory"
# 110 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "My little sister exchanges MAIL with\n"
# 111 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "her boyfriend in FORTREE.\p"
# 112 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "I don't envy her one bit at all.$"
# 113 "data/maps/MossdeepCity_House2/scripts.pory"

# 114 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_Text_PokemonCarriesMailBackAndForth::
# 115 "data/maps/MossdeepCity_House2/scripts.pory"
# 70 "data/maps/MossdeepCity_House2/scripts.pory"
# 116 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "Even though I can't see my friend in\n"
# 117 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "FORTREE, my POKéMON carries MAIL\l"
# 118 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "back and forth for us.\p"
# 119 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "I'm not lonesome, even though we're\n"
# 120 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "apart.$"
# 121 "data/maps/MossdeepCity_House2/scripts.pory"

# 122 "data/maps/MossdeepCity_House2/scripts.pory"
MossdeepCity_House2_Text_Wingull::
# 123 "data/maps/MossdeepCity_House2/scripts.pory"
# 78 "data/maps/MossdeepCity_House2/scripts.pory"
# 124 "data/maps/MossdeepCity_House2/scripts.pory"
	.string "WINGULL: Pihyoh!$"
