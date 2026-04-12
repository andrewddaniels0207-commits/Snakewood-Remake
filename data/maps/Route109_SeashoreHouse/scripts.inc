# 1 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 2 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_MapScripts::
# 3 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 2 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 4 "data/maps/Route109_SeashoreHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_OnTransition
# 5 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.byte 0
# 6 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 7 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 8 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_OnTransition::
# 9 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 6 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 10 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
# 11 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 12 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 13 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 14 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Owner::
# 15 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 11 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 16 "data/maps/Route109_SeashoreHouse/scripts.pory"
	lock
# 17 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 12 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 18 "data/maps/Route109_SeashoreHouse/scripts.pory"
	faceplayer
# 19 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 13 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 20 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_6_SODA_POP, Route109_SeashoreHouse_EventScript_Owner_2
# 21 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Owner_1:
# 22 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 16 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 23 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_SEASHORE_HOUSE, Route109_SeashoreHouse_EventScript_Owner_5
# 24 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Owner_4:
# 25 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 19 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 26 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_Owner_8
# 27 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Owner_7:
# 28 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 22 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 29 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SeashoreHouseIntro, MSGBOX_DEFAULT
# 30 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 23 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 31 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 32 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 24 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 33 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 34 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 35 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 36 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Owner_2:
# 37 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 14 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 38 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop
# 39 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_Owner_1
# 40 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 41 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Owner_5:
# 42 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 17 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 43 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers
# 44 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_Owner_4
# 45 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 46 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Owner_8:
# 47 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 20 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 48 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction
# 49 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_Owner_7
# 50 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 51 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 52 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction::
# 53 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 29 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 54 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
# 55 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 30 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 56 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 57 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 58 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 59 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 60 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_DefeatedTrainers::
# 61 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 35 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 62 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles, MSGBOX_DEFAULT
# 63 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 36 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 64 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP, 6
# 65 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 37 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 66 "data/maps/Route109_SeashoreHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 67 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq Route109_SeashoreHouse_EventScript_DefeatedTrainers_2
# 68 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_DefeatedTrainers_1:
# 69 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 40 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 70 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_RECEIVED_6_SODA_POP
# 71 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 41 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 72 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 73 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 74 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 75 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_DefeatedTrainers_2:
# 76 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 38 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 77 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_BagFull
# 78 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_DefeatedTrainers_1
# 79 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 80 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 81 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BagFull::
# 82 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 46 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 83 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_BagFull, MSGBOX_DEFAULT
# 84 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 47 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 85 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 87 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 88 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 89 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop::
# 90 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 52 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 91 "data/maps/Route109_SeashoreHouse/scripts.pory"
	showmoneybox 0, 0
# 92 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 53 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 93 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_WantToBuySodaPop, MSGBOX_YESNO
# 94 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 54 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 95 "data/maps/Route109_SeashoreHouse/scripts.pory"
	compare VAR_RESULT, YES
# 96 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop_2
# 97 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop_1:
# 98 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 57 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 99 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_ThatsTooBad, MSGBOX_DEFAULT
# 100 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 58 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 101 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 102 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 59 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 103 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 104 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 105 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 106 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop_2:
# 107 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 55 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 108 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_BuySodaPop
# 109 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop_1
# 110 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 111 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 112 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BuySodaPop::
# 113 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 64 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 114 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkmoney 300
# 115 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 65 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 116 "data/maps/Route109_SeashoreHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 117 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq Route109_SeashoreHouse_EventScript_BuySodaPop_2
# 118 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BuySodaPop_1:
# 119 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 68 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 120 "data/maps/Route109_SeashoreHouse/scripts.pory"
	checkitemspace ITEM_SODA_POP
# 121 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 69 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 122 "data/maps/Route109_SeashoreHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 123 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_eq Route109_SeashoreHouse_EventScript_BuySodaPop_5
# 124 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BuySodaPop_4:
# 125 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 72 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 126 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_HereYouGo, MSGBOX_DEFAULT
# 127 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 73 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 128 "data/maps/Route109_SeashoreHouse/scripts.pory"
	removemoney 300
# 129 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 74 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 130 "data/maps/Route109_SeashoreHouse/scripts.pory"
	updatemoneybox
# 131 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 75 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 132 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 133 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 76 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 134 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP
# 135 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 77 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 136 "data/maps/Route109_SeashoreHouse/scripts.pory"
	giveitem ITEM_SODA_POP
# 137 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 78 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 138 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 139 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 79 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 140 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 141 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 142 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 143 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BuySodaPop_2:
# 144 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 66 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 145 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_NotEnoughMoney
# 146 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_BuySodaPop_1
# 147 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 148 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_BuySodaPop_5:
# 149 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 70 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 150 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_NotEnoughSpace
# 151 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto Route109_SeashoreHouse_EventScript_BuySodaPop_4
# 152 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 153 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 154 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughMoney::
# 155 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 84 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 156 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_NotEnoughMoney, MSGBOX_DEFAULT
# 157 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 85 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 158 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 159 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 86 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 160 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 161 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 162 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 163 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 164 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_NotEnoughSpace::
# 165 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 91 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 166 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 167 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 92 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 168 "data/maps/Route109_SeashoreHouse/scripts.pory"
	hidemoneybox
# 169 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 93 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 170 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 171 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 172 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 173 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 174 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Dwayne::
# 175 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 98 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 176 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 177 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 99 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 178 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 179 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 180 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 181 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 182 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Johanna::
# 183 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 104 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 184 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 185 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 105 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 186 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 188 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 189 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 190 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_Simon::
# 191 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 110 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 192 "data/maps/Route109_SeashoreHouse/scripts.pory"
	trainerbattle_single TRAINER_SIMON, Route109_SeashoreHouse_Text_SimonIntro, Route109_SeashoreHouse_Text_SimonDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
# 193 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 111 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 194 "data/maps/Route109_SeashoreHouse/scripts.pory"
	msgbox Route109_SeashoreHouse_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 196 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 197 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 198 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
# 199 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 116 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 200 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_DWAYNE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 201 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 117 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 202 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_JOHANNA, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 203 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 118 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 204 "data/maps/Route109_SeashoreHouse/scripts.pory"
	goto_if_not_defeated TRAINER_SIMON, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
# 205 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 119 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 206 "data/maps/Route109_SeashoreHouse/scripts.pory"
	setflag FLAG_DEFEATED_SEASHORE_HOUSE
# 207 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 120 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 208 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 209 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 210 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 211 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 212 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
# 213 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 125 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 214 "data/maps/Route109_SeashoreHouse/scripts.pory"
	release
# 215 "data/maps/Route109_SeashoreHouse/scripts.pory"
	end
# 216 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 217 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 218 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SeashoreHouseIntro::
# 219 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 129 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 220 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm the owner of the SEASHORE HOUSE.\n"
# 221 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "But you can call me MR. SEA!\p"
# 222 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "What I love above all is to see hot\n"
# 223 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "POKéMON battles.\p"
# 224 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Let me see that your heart burns hot!\p"
# 225 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If you can defeat all the TRAINERS\n"
# 226 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "here, I'll reward your efforts.$"
# 227 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 228 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ShowMeSomeHotMatches::
# 229 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 139 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 230 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Show me some hot matches!\p"
# 231 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I run this SEASHORE HOUSE just for\n"
# 232 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "that reason alone!$"
# 233 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 234 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles::
# 235 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 145 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 236 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You're scorching hot!\n"
# 237 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Those battles blazed!\l"
# 238 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm more than just satisfied!\p"
# 239 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "As thanks for showing me your hot\n"
# 240 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "streak, I want you to take these.\p"
# 241 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "It's half a dozen bottles of SODA POP!$"
# 242 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 243 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_BagFull::
# 244 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 154 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 245 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Oh, but hey, your BAG's jammed full.\n"
# 246 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'll hang on to these for you.$"
# 247 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 248 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_WantToBuySodaPop::
# 249 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 159 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 250 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Want to buy some SODA POP?\n"
# 251 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "POKéMON love it!\p"
# 252 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Just ¥300 a bottle!\n"
# 253 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Buy some!$"
# 254 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 255 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_HereYouGo::
# 256 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 166 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 257 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Here you go!$"
# 258 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 259 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_NotEnoughMoney::
# 260 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 170 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 261 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "You don't have the money.$"
# 262 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 263 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_ThatsTooBad::
# 264 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 174 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 265 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "No?\n"
# 266 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That's too bad.$"
# 267 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 268 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneIntro::
# 269 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 179 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 270 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If you're looking for a battle in the\n"
# 271 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "SEASHORE HOUSE, you'll find no\l"
# 272 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "hotter TRAINER than me, matey!$"
# 273 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 274 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwayneDefeated::
# 275 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 185 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 276 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That was a hot battle!\n"
# 277 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I can accept that loss, matey!$"
# 278 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 279 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_DwaynePostBattle::
# 280 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 190 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 281 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Whenever I'm in SLATEPORT, I enjoy\n"
# 282 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "hot battles and ice-cold SODA POP!$"
# 283 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 284 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaIntro::
# 285 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 195 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 286 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Boring battles aren't worth the effort.\p"
# 287 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Fiery hot battles are what toughen up\n"
# 288 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "TRAINERS and POKéMON!$"
# 289 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 290 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaDefeated::
# 291 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 201 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 292 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "That's hot!$"
# 293 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 294 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_JohannaPostBattle::
# 295 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 205 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 296 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Whew, I'm all thirsty.\n"
# 297 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "Maybe I'll have a SODA POP.$"
# 298 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 299 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonIntro::
# 300 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 210 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 301 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "I'm going to show you how great\n"
# 302 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "my POKéMON are, but don't cry!$"
# 303 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 304 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonDefeated::
# 305 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 215 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 306 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "…I lost, but I won't cry…$"
# 307 "data/maps/Route109_SeashoreHouse/scripts.pory"

# 308 "data/maps/Route109_SeashoreHouse/scripts.pory"
Route109_SeashoreHouse_Text_SimonPostBattle::
# 309 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 219 "data/maps/Route109_SeashoreHouse/scripts.pory"
# 310 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "If one of my POKéMON knew the move\n"
# 311 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "for carrying me across water on its\l"
# 312 "data/maps/Route109_SeashoreHouse/scripts.pory"
	.string "back, I could get rid of this inner tube.$"
