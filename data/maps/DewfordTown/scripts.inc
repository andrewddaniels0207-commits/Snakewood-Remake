# 1 "data/maps/DewfordTown/scripts.pory"

# 2 "data/maps/DewfordTown/scripts.pory"
DewfordTown_MapScripts::
# 3 "data/maps/DewfordTown/scripts.pory"
# 2 "data/maps/DewfordTown/scripts.pory"
# 4 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
# 5 "data/maps/DewfordTown/scripts.pory"
	.byte 0
# 6 "data/maps/DewfordTown/scripts.pory"

# 7 "data/maps/DewfordTown/scripts.pory"

# 8 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnTransition::
# 9 "data/maps/DewfordTown/scripts.pory"
# 6 "data/maps/DewfordTown/scripts.pory"
# 10 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 11 "data/maps/DewfordTown/scripts.pory"
	end
# 12 "data/maps/DewfordTown/scripts.pory"

# 13 "data/maps/DewfordTown/scripts.pory"

# 14 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney::
# 15 "data/maps/DewfordTown/scripts.pory"
# 11 "data/maps/DewfordTown/scripts.pory"
# 16 "data/maps/DewfordTown/scripts.pory"
	lock
# 17 "data/maps/DewfordTown/scripts.pory"
# 12 "data/maps/DewfordTown/scripts.pory"
# 18 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 19 "data/maps/DewfordTown/scripts.pory"
# 13 "data/maps/DewfordTown/scripts.pory"
# 20 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_Briney_2
# 21 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney_1:
# 22 "data/maps/DewfordTown/scripts.pory"
# 16 "data/maps/DewfordTown/scripts.pory"
# 23 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_WhereAreWeBound
# 24 "data/maps/DewfordTown/scripts.pory"
# 17 "data/maps/DewfordTown/scripts.pory"
# 25 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 26 "data/maps/DewfordTown/scripts.pory"
# 18 "data/maps/DewfordTown/scripts.pory"
# 27 "data/maps/DewfordTown/scripts.pory"
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
# 28 "data/maps/DewfordTown/scripts.pory"
# 19 "data/maps/DewfordTown/scripts.pory"
# 29 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/DewfordTown/scripts.pory"
# 20 "data/maps/DewfordTown/scripts.pory"
# 31 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_EventScript_Briney_6
# 32 "data/maps/DewfordTown/scripts.pory"
# 22 "data/maps/DewfordTown/scripts.pory"
# 33 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordTown_EventScript_Briney_7
# 34 "data/maps/DewfordTown/scripts.pory"
# 24 "data/maps/DewfordTown/scripts.pory"
# 35 "data/maps/DewfordTown/scripts.pory"
	case 2, DewfordTown_EventScript_Briney_8
# 36 "data/maps/DewfordTown/scripts.pory"
# 26 "data/maps/DewfordTown/scripts.pory"
# 37 "data/maps/DewfordTown/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_EventScript_Briney_9
# 38 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney_4:
# 39 "data/maps/DewfordTown/scripts.pory"
	end
# 40 "data/maps/DewfordTown/scripts.pory"

# 41 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney_2:
# 42 "data/maps/DewfordTown/scripts.pory"
# 14 "data/maps/DewfordTown/scripts.pory"
# 43 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_ReturnToPetalburgPrompt
# 44 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_Briney_1
# 45 "data/maps/DewfordTown/scripts.pory"

# 46 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney_6:
# 47 "data/maps/DewfordTown/scripts.pory"
# 21 "data/maps/DewfordTown/scripts.pory"
# 48 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_ChoosePetalburg
# 49 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_Briney_4
# 50 "data/maps/DewfordTown/scripts.pory"

# 51 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney_7:
# 52 "data/maps/DewfordTown/scripts.pory"
# 23 "data/maps/DewfordTown/scripts.pory"
# 53 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_ChooseSlateport
# 54 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_Briney_4
# 55 "data/maps/DewfordTown/scripts.pory"

# 56 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney_8:
# 57 "data/maps/DewfordTown/scripts.pory"
# 25 "data/maps/DewfordTown/scripts.pory"
# 58 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_CancelSailSelect
# 59 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_Briney_4
# 60 "data/maps/DewfordTown/scripts.pory"

# 61 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney_9:
# 62 "data/maps/DewfordTown/scripts.pory"
# 27 "data/maps/DewfordTown/scripts.pory"
# 63 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_CancelSailSelect
# 64 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_Briney_4
# 65 "data/maps/DewfordTown/scripts.pory"

# 66 "data/maps/DewfordTown/scripts.pory"

# 67 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChoosePetalburg::
# 68 "data/maps/DewfordTown/scripts.pory"
# 33 "data/maps/DewfordTown/scripts.pory"
# 69 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
# 70 "data/maps/DewfordTown/scripts.pory"
# 34 "data/maps/DewfordTown/scripts.pory"
# 71 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 72 "data/maps/DewfordTown/scripts.pory"
# 35 "data/maps/DewfordTown/scripts.pory"
# 73 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 74 "data/maps/DewfordTown/scripts.pory"
# 36 "data/maps/DewfordTown/scripts.pory"
# 75 "data/maps/DewfordTown/scripts.pory"
	release
# 76 "data/maps/DewfordTown/scripts.pory"
	end
# 77 "data/maps/DewfordTown/scripts.pory"

# 78 "data/maps/DewfordTown/scripts.pory"

# 79 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChooseSlateport::
# 80 "data/maps/DewfordTown/scripts.pory"
# 41 "data/maps/DewfordTown/scripts.pory"
# 81 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
# 82 "data/maps/DewfordTown/scripts.pory"
# 42 "data/maps/DewfordTown/scripts.pory"
# 83 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 84 "data/maps/DewfordTown/scripts.pory"
# 43 "data/maps/DewfordTown/scripts.pory"
# 85 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport
# 86 "data/maps/DewfordTown/scripts.pory"
# 44 "data/maps/DewfordTown/scripts.pory"
# 87 "data/maps/DewfordTown/scripts.pory"
	release
# 88 "data/maps/DewfordTown/scripts.pory"
	end
# 89 "data/maps/DewfordTown/scripts.pory"

# 90 "data/maps/DewfordTown/scripts.pory"

# 91 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelSailSelect::
# 92 "data/maps/DewfordTown/scripts.pory"
# 49 "data/maps/DewfordTown/scripts.pory"
# 93 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
# 94 "data/maps/DewfordTown/scripts.pory"
# 50 "data/maps/DewfordTown/scripts.pory"
# 95 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 96 "data/maps/DewfordTown/scripts.pory"
# 51 "data/maps/DewfordTown/scripts.pory"
# 97 "data/maps/DewfordTown/scripts.pory"
	release
# 98 "data/maps/DewfordTown/scripts.pory"
	end
# 99 "data/maps/DewfordTown/scripts.pory"

# 100 "data/maps/DewfordTown/scripts.pory"

# 101 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt::
# 102 "data/maps/DewfordTown/scripts.pory"
# 56 "data/maps/DewfordTown/scripts.pory"
# 103 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
# 104 "data/maps/DewfordTown/scripts.pory"
# 57 "data/maps/DewfordTown/scripts.pory"
# 105 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, YES
# 106 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq DewfordTown_EventScript_ReturnToPetalburgPrompt_2
# 107 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt_1:
# 108 "data/maps/DewfordTown/scripts.pory"
# 60 "data/maps/DewfordTown/scripts.pory"
# 109 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
# 110 "data/maps/DewfordTown/scripts.pory"
# 61 "data/maps/DewfordTown/scripts.pory"
# 111 "data/maps/DewfordTown/scripts.pory"
	release
# 112 "data/maps/DewfordTown/scripts.pory"
	end
# 113 "data/maps/DewfordTown/scripts.pory"

# 114 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt_2:
# 115 "data/maps/DewfordTown/scripts.pory"
# 58 "data/maps/DewfordTown/scripts.pory"
# 116 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailBackToPetalburg
# 117 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_ReturnToPetalburgPrompt_1
# 118 "data/maps/DewfordTown/scripts.pory"

# 119 "data/maps/DewfordTown/scripts.pory"

# 120 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailBackToPetalburg::
# 121 "data/maps/DewfordTown/scripts.pory"
# 66 "data/maps/DewfordTown/scripts.pory"
# 122 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
# 123 "data/maps/DewfordTown/scripts.pory"
# 67 "data/maps/DewfordTown/scripts.pory"
# 124 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 125 "data/maps/DewfordTown/scripts.pory"
# 68 "data/maps/DewfordTown/scripts.pory"
# 126 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 127 "data/maps/DewfordTown/scripts.pory"
	end
# 128 "data/maps/DewfordTown/scripts.pory"

# 129 "data/maps/DewfordTown/scripts.pory"

# 130 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Woman::
# 131 "data/maps/DewfordTown/scripts.pory"
# 73 "data/maps/DewfordTown/scripts.pory"
# 132 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
# 133 "data/maps/DewfordTown/scripts.pory"
	end
# 134 "data/maps/DewfordTown/scripts.pory"

# 135 "data/maps/DewfordTown/scripts.pory"

# 136 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TownSign::
# 137 "data/maps/DewfordTown/scripts.pory"
# 78 "data/maps/DewfordTown/scripts.pory"
# 138 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
# 139 "data/maps/DewfordTown/scripts.pory"
	end
# 140 "data/maps/DewfordTown/scripts.pory"

# 141 "data/maps/DewfordTown/scripts.pory"

# 142 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GymSign::
# 143 "data/maps/DewfordTown/scripts.pory"
# 83 "data/maps/DewfordTown/scripts.pory"
# 144 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
# 145 "data/maps/DewfordTown/scripts.pory"
	end
# 146 "data/maps/DewfordTown/scripts.pory"

# 147 "data/maps/DewfordTown/scripts.pory"

# 148 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HallSign::
# 149 "data/maps/DewfordTown/scripts.pory"
# 88 "data/maps/DewfordTown/scripts.pory"
# 150 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
# 151 "data/maps/DewfordTown/scripts.pory"
	end
# 152 "data/maps/DewfordTown/scripts.pory"

# 153 "data/maps/DewfordTown/scripts.pory"

# 154 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman::
# 155 "data/maps/DewfordTown/scripts.pory"
# 93 "data/maps/DewfordTown/scripts.pory"
# 156 "data/maps/DewfordTown/scripts.pory"
	lock
# 157 "data/maps/DewfordTown/scripts.pory"
# 94 "data/maps/DewfordTown/scripts.pory"
# 158 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 159 "data/maps/DewfordTown/scripts.pory"
# 95 "data/maps/DewfordTown/scripts.pory"
# 160 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_OldRodFisherman_2
# 161 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman_1:
# 162 "data/maps/DewfordTown/scripts.pory"
# 98 "data/maps/DewfordTown/scripts.pory"
# 163 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
# 164 "data/maps/DewfordTown/scripts.pory"
# 99 "data/maps/DewfordTown/scripts.pory"
# 165 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, YES
# 166 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq DewfordTown_EventScript_OldRodFisherman_5
# 167 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman_4:
# 168 "data/maps/DewfordTown/scripts.pory"
# 102 "data/maps/DewfordTown/scripts.pory"
# 169 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, NO
# 170 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq DewfordTown_EventScript_OldRodFisherman_8
# 171 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman_7:
# 172 "data/maps/DewfordTown/scripts.pory"
	end
# 173 "data/maps/DewfordTown/scripts.pory"

# 174 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman_2:
# 175 "data/maps/DewfordTown/scripts.pory"
# 96 "data/maps/DewfordTown/scripts.pory"
# 176 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_HowsFishing
# 177 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_OldRodFisherman_1
# 178 "data/maps/DewfordTown/scripts.pory"

# 179 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman_5:
# 180 "data/maps/DewfordTown/scripts.pory"
# 100 "data/maps/DewfordTown/scripts.pory"
# 181 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_GiveOldRod
# 182 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_OldRodFisherman_4
# 183 "data/maps/DewfordTown/scripts.pory"

# 184 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman_8:
# 185 "data/maps/DewfordTown/scripts.pory"
# 103 "data/maps/DewfordTown/scripts.pory"
# 186 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_NotGettingItchToFish
# 187 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_OldRodFisherman_7
# 188 "data/maps/DewfordTown/scripts.pory"

# 189 "data/maps/DewfordTown/scripts.pory"

# 190 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveOldRod::
# 191 "data/maps/DewfordTown/scripts.pory"
# 109 "data/maps/DewfordTown/scripts.pory"
# 192 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 193 "data/maps/DewfordTown/scripts.pory"
# 110 "data/maps/DewfordTown/scripts.pory"
# 194 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 195 "data/maps/DewfordTown/scripts.pory"
# 111 "data/maps/DewfordTown/scripts.pory"
# 196 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, FALSE
# 197 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq DewfordTown_EventScript_GiveOldRod_2
# 198 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveOldRod_1:
# 199 "data/maps/DewfordTown/scripts.pory"
# 114 "data/maps/DewfordTown/scripts.pory"
# 200 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 201 "data/maps/DewfordTown/scripts.pory"
# 115 "data/maps/DewfordTown/scripts.pory"
# 202 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 203 "data/maps/DewfordTown/scripts.pory"
# 116 "data/maps/DewfordTown/scripts.pory"
# 204 "data/maps/DewfordTown/scripts.pory"
	release
# 205 "data/maps/DewfordTown/scripts.pory"
	end
# 206 "data/maps/DewfordTown/scripts.pory"

# 207 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveOldRod_2:
# 208 "data/maps/DewfordTown/scripts.pory"
# 112 "data/maps/DewfordTown/scripts.pory"
# 209 "data/maps/DewfordTown/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 210 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_GiveOldRod_1
# 211 "data/maps/DewfordTown/scripts.pory"

# 212 "data/maps/DewfordTown/scripts.pory"

# 213 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NotGettingItchToFish::
# 214 "data/maps/DewfordTown/scripts.pory"
# 121 "data/maps/DewfordTown/scripts.pory"
# 215 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 216 "data/maps/DewfordTown/scripts.pory"
# 122 "data/maps/DewfordTown/scripts.pory"
# 217 "data/maps/DewfordTown/scripts.pory"
	release
# 218 "data/maps/DewfordTown/scripts.pory"
	end
# 219 "data/maps/DewfordTown/scripts.pory"

# 220 "data/maps/DewfordTown/scripts.pory"

# 221 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing::
# 222 "data/maps/DewfordTown/scripts.pory"
# 127 "data/maps/DewfordTown/scripts.pory"
# 223 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_HowsYourFishing
# 224 "data/maps/DewfordTown/scripts.pory"
# 128 "data/maps/DewfordTown/scripts.pory"
# 225 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 226 "data/maps/DewfordTown/scripts.pory"
# 129 "data/maps/DewfordTown/scripts.pory"
# 227 "data/maps/DewfordTown/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 228 "data/maps/DewfordTown/scripts.pory"
# 130 "data/maps/DewfordTown/scripts.pory"
# 229 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, 0
# 230 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq DewfordTown_EventScript_HowsFishing_2
# 231 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing_1:
# 232 "data/maps/DewfordTown/scripts.pory"
# 133 "data/maps/DewfordTown/scripts.pory"
# 233 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, 1
# 234 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq DewfordTown_EventScript_HowsFishing_5
# 235 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing_4:
# 236 "data/maps/DewfordTown/scripts.pory"
	end
# 237 "data/maps/DewfordTown/scripts.pory"

# 238 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing_2:
# 239 "data/maps/DewfordTown/scripts.pory"
# 131 "data/maps/DewfordTown/scripts.pory"
# 240 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_FishingExcellent
# 241 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_HowsFishing_1
# 242 "data/maps/DewfordTown/scripts.pory"

# 243 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing_5:
# 244 "data/maps/DewfordTown/scripts.pory"
# 134 "data/maps/DewfordTown/scripts.pory"
# 245 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_FishingNotSoGood
# 246 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_HowsFishing_4
# 247 "data/maps/DewfordTown/scripts.pory"

# 248 "data/maps/DewfordTown/scripts.pory"

# 249 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingExcellent::
# 250 "data/maps/DewfordTown/scripts.pory"
# 140 "data/maps/DewfordTown/scripts.pory"
# 251 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 252 "data/maps/DewfordTown/scripts.pory"
# 141 "data/maps/DewfordTown/scripts.pory"
# 253 "data/maps/DewfordTown/scripts.pory"
	release
# 254 "data/maps/DewfordTown/scripts.pory"
	end
# 255 "data/maps/DewfordTown/scripts.pory"

# 256 "data/maps/DewfordTown/scripts.pory"

# 257 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingNotSoGood::
# 258 "data/maps/DewfordTown/scripts.pory"
# 146 "data/maps/DewfordTown/scripts.pory"
# 259 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
# 260 "data/maps/DewfordTown/scripts.pory"
# 147 "data/maps/DewfordTown/scripts.pory"
# 261 "data/maps/DewfordTown/scripts.pory"
	release
# 262 "data/maps/DewfordTown/scripts.pory"
	end
# 263 "data/maps/DewfordTown/scripts.pory"

# 264 "data/maps/DewfordTown/scripts.pory"

# 265 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg::
# 266 "data/maps/DewfordTown/scripts.pory"
# 152 "data/maps/DewfordTown/scripts.pory"
# 267 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 268 "data/maps/DewfordTown/scripts.pory"
# 153 "data/maps/DewfordTown/scripts.pory"
# 269 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 270 "data/maps/DewfordTown/scripts.pory"
# 154 "data/maps/DewfordTown/scripts.pory"
# 271 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN, 0
# 272 "data/maps/DewfordTown/scripts.pory"
# 155 "data/maps/DewfordTown/scripts.pory"
# 273 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, DewfordTown_Movement_BrineyBoardBoat
# 274 "data/maps/DewfordTown/scripts.pory"
# 156 "data/maps/DewfordTown/scripts.pory"
# 275 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 276 "data/maps/DewfordTown/scripts.pory"
# 157 "data/maps/DewfordTown/scripts.pory"
# 277 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_DEWFORD_BRINEY
# 278 "data/maps/DewfordTown/scripts.pory"
# 158 "data/maps/DewfordTown/scripts.pory"
# 279 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 280 "data/maps/DewfordTown/scripts.pory"
# 159 "data/maps/DewfordTown/scripts.pory"
# 281 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 282 "data/maps/DewfordTown/scripts.pory"
# 160 "data/maps/DewfordTown/scripts.pory"
# 283 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 284 "data/maps/DewfordTown/scripts.pory"
# 161 "data/maps/DewfordTown/scripts.pory"
# 285 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 286 "data/maps/DewfordTown/scripts.pory"
# 162 "data/maps/DewfordTown/scripts.pory"
# 287 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BOAT, DewfordTown_Movement_SailToPetalburg
# 288 "data/maps/DewfordTown/scripts.pory"
# 163 "data/maps/DewfordTown/scripts.pory"
# 289 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_SailToPetalburg
# 290 "data/maps/DewfordTown/scripts.pory"
# 164 "data/maps/DewfordTown/scripts.pory"
# 291 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 292 "data/maps/DewfordTown/scripts.pory"
# 165 "data/maps/DewfordTown/scripts.pory"
# 293 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE104
# 294 "data/maps/DewfordTown/scripts.pory"
# 166 "data/maps/DewfordTown/scripts.pory"
# 295 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 296 "data/maps/DewfordTown/scripts.pory"
# 167 "data/maps/DewfordTown/scripts.pory"
# 297 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
# 298 "data/maps/DewfordTown/scripts.pory"
# 168 "data/maps/DewfordTown/scripts.pory"
# 299 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 300 "data/maps/DewfordTown/scripts.pory"
# 169 "data/maps/DewfordTown/scripts.pory"
# 301 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE104
# 302 "data/maps/DewfordTown/scripts.pory"
# 170 "data/maps/DewfordTown/scripts.pory"
# 303 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 304 "data/maps/DewfordTown/scripts.pory"
# 171 "data/maps/DewfordTown/scripts.pory"
# 305 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 306 "data/maps/DewfordTown/scripts.pory"
# 172 "data/maps/DewfordTown/scripts.pory"
# 307 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 308 "data/maps/DewfordTown/scripts.pory"
# 173 "data/maps/DewfordTown/scripts.pory"
# 309 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 310 "data/maps/DewfordTown/scripts.pory"
# 174 "data/maps/DewfordTown/scripts.pory"
# 311 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_DEWFORD_BOAT, MAP_DEWFORD_TOWN
# 312 "data/maps/DewfordTown/scripts.pory"
# 175 "data/maps/DewfordTown/scripts.pory"
# 313 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 314 "data/maps/DewfordTown/scripts.pory"
# 176 "data/maps/DewfordTown/scripts.pory"
# 315 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 316 "data/maps/DewfordTown/scripts.pory"
# 177 "data/maps/DewfordTown/scripts.pory"
# 317 "data/maps/DewfordTown/scripts.pory"
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
# 318 "data/maps/DewfordTown/scripts.pory"
# 178 "data/maps/DewfordTown/scripts.pory"
# 319 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 320 "data/maps/DewfordTown/scripts.pory"
# 179 "data/maps/DewfordTown/scripts.pory"
# 321 "data/maps/DewfordTown/scripts.pory"
	waitstate
# 322 "data/maps/DewfordTown/scripts.pory"
# 180 "data/maps/DewfordTown/scripts.pory"
# 323 "data/maps/DewfordTown/scripts.pory"
	release
# 324 "data/maps/DewfordTown/scripts.pory"
	end
# 325 "data/maps/DewfordTown/scripts.pory"

# 326 "data/maps/DewfordTown/scripts.pory"

# 327 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport::
# 328 "data/maps/DewfordTown/scripts.pory"
# 185 "data/maps/DewfordTown/scripts.pory"
# 329 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 330 "data/maps/DewfordTown/scripts.pory"
# 186 "data/maps/DewfordTown/scripts.pory"
# 331 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_DEWFORD_BRINEY, MAP_DEWFORD_TOWN, 0
# 332 "data/maps/DewfordTown/scripts.pory"
# 187 "data/maps/DewfordTown/scripts.pory"
# 333 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN, 1
# 334 "data/maps/DewfordTown/scripts.pory"
# 188 "data/maps/DewfordTown/scripts.pory"
# 335 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BRINEY, DewfordTown_Movement_BrineyBoardBoat
# 336 "data/maps/DewfordTown/scripts.pory"
# 189 "data/maps/DewfordTown/scripts.pory"
# 337 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 338 "data/maps/DewfordTown/scripts.pory"
# 190 "data/maps/DewfordTown/scripts.pory"
# 339 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_DEWFORD_BRINEY
# 340 "data/maps/DewfordTown/scripts.pory"
# 191 "data/maps/DewfordTown/scripts.pory"
# 341 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 342 "data/maps/DewfordTown/scripts.pory"
# 192 "data/maps/DewfordTown/scripts.pory"
# 343 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 344 "data/maps/DewfordTown/scripts.pory"
# 193 "data/maps/DewfordTown/scripts.pory"
# 345 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 346 "data/maps/DewfordTown/scripts.pory"
# 194 "data/maps/DewfordTown/scripts.pory"
# 347 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 348 "data/maps/DewfordTown/scripts.pory"
# 195 "data/maps/DewfordTown/scripts.pory"
# 349 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_DEWFORD_BOAT, DewfordTown_Movement_SailToSlateport
# 350 "data/maps/DewfordTown/scripts.pory"
# 196 "data/maps/DewfordTown/scripts.pory"
# 351 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_SailToSlateport
# 352 "data/maps/DewfordTown/scripts.pory"
# 197 "data/maps/DewfordTown/scripts.pory"
# 353 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 354 "data/maps/DewfordTown/scripts.pory"
# 198 "data/maps/DewfordTown/scripts.pory"
# 355 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 356 "data/maps/DewfordTown/scripts.pory"
# 199 "data/maps/DewfordTown/scripts.pory"
# 357 "data/maps/DewfordTown/scripts.pory"
	showobjectat LOCALID_PLAYER, MAP_ROUTE109
# 358 "data/maps/DewfordTown/scripts.pory"
# 200 "data/maps/DewfordTown/scripts.pory"
# 359 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
# 360 "data/maps/DewfordTown/scripts.pory"
# 201 "data/maps/DewfordTown/scripts.pory"
# 361 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 362 "data/maps/DewfordTown/scripts.pory"
# 202 "data/maps/DewfordTown/scripts.pory"
# 363 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_ROUTE109_BRINEY, 21, 26
# 364 "data/maps/DewfordTown/scripts.pory"
# 203 "data/maps/DewfordTown/scripts.pory"
# 365 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_ROUTE109_BRINEY
# 366 "data/maps/DewfordTown/scripts.pory"
# 204 "data/maps/DewfordTown/scripts.pory"
# 367 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109, 0
# 368 "data/maps/DewfordTown/scripts.pory"
# 205 "data/maps/DewfordTown/scripts.pory"
# 369 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_ROUTE109_BRINEY, DewfordTown_Movement_BrineyExitBoat
# 370 "data/maps/DewfordTown/scripts.pory"
# 206 "data/maps/DewfordTown/scripts.pory"
# 371 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 372 "data/maps/DewfordTown/scripts.pory"
# 207 "data/maps/DewfordTown/scripts.pory"
# 373 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 374 "data/maps/DewfordTown/scripts.pory"
# 208 "data/maps/DewfordTown/scripts.pory"
# 375 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_ROUTE109_BOAT
# 376 "data/maps/DewfordTown/scripts.pory"
# 209 "data/maps/DewfordTown/scripts.pory"
# 377 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 378 "data/maps/DewfordTown/scripts.pory"
# 210 "data/maps/DewfordTown/scripts.pory"
# 379 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 380 "data/maps/DewfordTown/scripts.pory"
# 211 "data/maps/DewfordTown/scripts.pory"
# 381 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_DEWFORD_BOAT, MAP_DEWFORD_TOWN
# 382 "data/maps/DewfordTown/scripts.pory"
# 212 "data/maps/DewfordTown/scripts.pory"
# 383 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_SailToSlateport_2
# 384 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport_1:
# 385 "data/maps/DewfordTown/scripts.pory"
# 215 "data/maps/DewfordTown/scripts.pory"
# 386 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_SailToSlateport_5
# 387 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport_4:
# 388 "data/maps/DewfordTown/scripts.pory"
# 218 "data/maps/DewfordTown/scripts.pory"
# 389 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 390 "data/maps/DewfordTown/scripts.pory"
# 219 "data/maps/DewfordTown/scripts.pory"
# 391 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 392 "data/maps/DewfordTown/scripts.pory"
# 220 "data/maps/DewfordTown/scripts.pory"
# 393 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_PLAYER, MAP_DEWFORD_TOWN
# 394 "data/maps/DewfordTown/scripts.pory"
# 221 "data/maps/DewfordTown/scripts.pory"
# 395 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_ROUTE109_BRINEY, MAP_ROUTE109
# 396 "data/maps/DewfordTown/scripts.pory"
# 222 "data/maps/DewfordTown/scripts.pory"
# 397 "data/maps/DewfordTown/scripts.pory"
	copyobjectxytoperm LOCALID_ROUTE109_BRINEY
# 398 "data/maps/DewfordTown/scripts.pory"
# 223 "data/maps/DewfordTown/scripts.pory"
# 399 "data/maps/DewfordTown/scripts.pory"
	release
# 400 "data/maps/DewfordTown/scripts.pory"
	end
# 401 "data/maps/DewfordTown/scripts.pory"

# 402 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport_2:
# 403 "data/maps/DewfordTown/scripts.pory"
# 213 "data/maps/DewfordTown/scripts.pory"
# 404 "data/maps/DewfordTown/scripts.pory"
	call DewfordTown_EventScript_LandedSlateportDeliverGoods
# 405 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport_1
# 406 "data/maps/DewfordTown/scripts.pory"

# 407 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport_5:
# 408 "data/maps/DewfordTown/scripts.pory"
# 216 "data/maps/DewfordTown/scripts.pory"
# 409 "data/maps/DewfordTown/scripts.pory"
	call DewfordTown_EventScript_LandedSlateport
# 410 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport_4
# 411 "data/maps/DewfordTown/scripts.pory"

# 412 "data/maps/DewfordTown/scripts.pory"

# 413 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateportDeliverGoods::
# 414 "data/maps/DewfordTown/scripts.pory"
# 228 "data/maps/DewfordTown/scripts.pory"
# 415 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
# 416 "data/maps/DewfordTown/scripts.pory"
	return
# 417 "data/maps/DewfordTown/scripts.pory"

# 418 "data/maps/DewfordTown/scripts.pory"

# 419 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateport::
# 420 "data/maps/DewfordTown/scripts.pory"
# 233 "data/maps/DewfordTown/scripts.pory"
# 421 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
# 422 "data/maps/DewfordTown/scripts.pory"
	return
# 423 "data/maps/DewfordTown/scripts.pory"

# 424 "data/maps/DewfordTown/scripts.pory"

# 425 "data/maps/DewfordTown/scripts.pory"
# 237 "data/maps/DewfordTown/scripts.pory"
# 426 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToPetalburg:
# 427 "data/maps/DewfordTown/scripts.pory"
# 238 "data/maps/DewfordTown/scripts.pory"
# 428 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 429 "data/maps/DewfordTown/scripts.pory"
# 239 "data/maps/DewfordTown/scripts.pory"
# 430 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 431 "data/maps/DewfordTown/scripts.pory"
# 240 "data/maps/DewfordTown/scripts.pory"
# 432 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 433 "data/maps/DewfordTown/scripts.pory"
# 241 "data/maps/DewfordTown/scripts.pory"
# 434 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 435 "data/maps/DewfordTown/scripts.pory"
# 242 "data/maps/DewfordTown/scripts.pory"
# 436 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 437 "data/maps/DewfordTown/scripts.pory"
# 243 "data/maps/DewfordTown/scripts.pory"
# 438 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 439 "data/maps/DewfordTown/scripts.pory"
# 244 "data/maps/DewfordTown/scripts.pory"
# 440 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 441 "data/maps/DewfordTown/scripts.pory"
# 245 "data/maps/DewfordTown/scripts.pory"
# 442 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 443 "data/maps/DewfordTown/scripts.pory"
# 246 "data/maps/DewfordTown/scripts.pory"
# 444 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 445 "data/maps/DewfordTown/scripts.pory"
# 247 "data/maps/DewfordTown/scripts.pory"
# 446 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 447 "data/maps/DewfordTown/scripts.pory"
# 248 "data/maps/DewfordTown/scripts.pory"
# 448 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 449 "data/maps/DewfordTown/scripts.pory"
# 249 "data/maps/DewfordTown/scripts.pory"
# 450 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 451 "data/maps/DewfordTown/scripts.pory"
# 250 "data/maps/DewfordTown/scripts.pory"
# 452 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 453 "data/maps/DewfordTown/scripts.pory"
# 251 "data/maps/DewfordTown/scripts.pory"
# 454 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 455 "data/maps/DewfordTown/scripts.pory"
# 252 "data/maps/DewfordTown/scripts.pory"
# 456 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 457 "data/maps/DewfordTown/scripts.pory"
# 253 "data/maps/DewfordTown/scripts.pory"
# 458 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 459 "data/maps/DewfordTown/scripts.pory"
# 254 "data/maps/DewfordTown/scripts.pory"
# 460 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 461 "data/maps/DewfordTown/scripts.pory"
# 255 "data/maps/DewfordTown/scripts.pory"
# 462 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 463 "data/maps/DewfordTown/scripts.pory"
# 256 "data/maps/DewfordTown/scripts.pory"
# 464 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 465 "data/maps/DewfordTown/scripts.pory"
# 257 "data/maps/DewfordTown/scripts.pory"
# 466 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 467 "data/maps/DewfordTown/scripts.pory"
# 258 "data/maps/DewfordTown/scripts.pory"
# 468 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 469 "data/maps/DewfordTown/scripts.pory"
# 259 "data/maps/DewfordTown/scripts.pory"
# 470 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 471 "data/maps/DewfordTown/scripts.pory"
# 260 "data/maps/DewfordTown/scripts.pory"
# 472 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 473 "data/maps/DewfordTown/scripts.pory"
# 261 "data/maps/DewfordTown/scripts.pory"
# 474 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 475 "data/maps/DewfordTown/scripts.pory"
# 262 "data/maps/DewfordTown/scripts.pory"
# 476 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 477 "data/maps/DewfordTown/scripts.pory"
# 263 "data/maps/DewfordTown/scripts.pory"
# 478 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 479 "data/maps/DewfordTown/scripts.pory"
# 264 "data/maps/DewfordTown/scripts.pory"
# 480 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 481 "data/maps/DewfordTown/scripts.pory"
# 265 "data/maps/DewfordTown/scripts.pory"
# 482 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 483 "data/maps/DewfordTown/scripts.pory"
# 266 "data/maps/DewfordTown/scripts.pory"
# 484 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 485 "data/maps/DewfordTown/scripts.pory"
# 267 "data/maps/DewfordTown/scripts.pory"
# 486 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 487 "data/maps/DewfordTown/scripts.pory"
# 268 "data/maps/DewfordTown/scripts.pory"
# 488 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 489 "data/maps/DewfordTown/scripts.pory"
# 269 "data/maps/DewfordTown/scripts.pory"
# 490 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 491 "data/maps/DewfordTown/scripts.pory"
# 270 "data/maps/DewfordTown/scripts.pory"
# 492 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 493 "data/maps/DewfordTown/scripts.pory"
# 271 "data/maps/DewfordTown/scripts.pory"
# 494 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 495 "data/maps/DewfordTown/scripts.pory"
# 272 "data/maps/DewfordTown/scripts.pory"
# 496 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 497 "data/maps/DewfordTown/scripts.pory"
# 273 "data/maps/DewfordTown/scripts.pory"
# 498 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 499 "data/maps/DewfordTown/scripts.pory"
# 274 "data/maps/DewfordTown/scripts.pory"
# 500 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 501 "data/maps/DewfordTown/scripts.pory"
# 275 "data/maps/DewfordTown/scripts.pory"
# 502 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 503 "data/maps/DewfordTown/scripts.pory"
# 276 "data/maps/DewfordTown/scripts.pory"
# 504 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 505 "data/maps/DewfordTown/scripts.pory"
# 277 "data/maps/DewfordTown/scripts.pory"
# 506 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 507 "data/maps/DewfordTown/scripts.pory"
# 278 "data/maps/DewfordTown/scripts.pory"
# 508 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 509 "data/maps/DewfordTown/scripts.pory"
# 279 "data/maps/DewfordTown/scripts.pory"
# 510 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 511 "data/maps/DewfordTown/scripts.pory"
# 280 "data/maps/DewfordTown/scripts.pory"
# 512 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 513 "data/maps/DewfordTown/scripts.pory"
# 281 "data/maps/DewfordTown/scripts.pory"
# 514 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 515 "data/maps/DewfordTown/scripts.pory"
# 282 "data/maps/DewfordTown/scripts.pory"
# 516 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 517 "data/maps/DewfordTown/scripts.pory"
# 283 "data/maps/DewfordTown/scripts.pory"
# 518 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 519 "data/maps/DewfordTown/scripts.pory"
# 284 "data/maps/DewfordTown/scripts.pory"
# 520 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 521 "data/maps/DewfordTown/scripts.pory"
# 285 "data/maps/DewfordTown/scripts.pory"
# 522 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 523 "data/maps/DewfordTown/scripts.pory"
# 286 "data/maps/DewfordTown/scripts.pory"
# 524 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 525 "data/maps/DewfordTown/scripts.pory"
# 287 "data/maps/DewfordTown/scripts.pory"
# 526 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 527 "data/maps/DewfordTown/scripts.pory"
# 288 "data/maps/DewfordTown/scripts.pory"
# 528 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 529 "data/maps/DewfordTown/scripts.pory"
# 289 "data/maps/DewfordTown/scripts.pory"
# 530 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 531 "data/maps/DewfordTown/scripts.pory"
# 290 "data/maps/DewfordTown/scripts.pory"
# 532 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 533 "data/maps/DewfordTown/scripts.pory"
# 291 "data/maps/DewfordTown/scripts.pory"
# 534 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 535 "data/maps/DewfordTown/scripts.pory"
# 292 "data/maps/DewfordTown/scripts.pory"
# 536 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 537 "data/maps/DewfordTown/scripts.pory"
# 293 "data/maps/DewfordTown/scripts.pory"
# 538 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 539 "data/maps/DewfordTown/scripts.pory"
# 294 "data/maps/DewfordTown/scripts.pory"
# 540 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 541 "data/maps/DewfordTown/scripts.pory"
# 295 "data/maps/DewfordTown/scripts.pory"
# 542 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 543 "data/maps/DewfordTown/scripts.pory"
# 296 "data/maps/DewfordTown/scripts.pory"
# 544 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 545 "data/maps/DewfordTown/scripts.pory"
# 297 "data/maps/DewfordTown/scripts.pory"
# 546 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 547 "data/maps/DewfordTown/scripts.pory"
# 298 "data/maps/DewfordTown/scripts.pory"
# 548 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 549 "data/maps/DewfordTown/scripts.pory"
# 299 "data/maps/DewfordTown/scripts.pory"
# 550 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 551 "data/maps/DewfordTown/scripts.pory"
# 300 "data/maps/DewfordTown/scripts.pory"
# 552 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 553 "data/maps/DewfordTown/scripts.pory"
# 301 "data/maps/DewfordTown/scripts.pory"
# 554 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 555 "data/maps/DewfordTown/scripts.pory"
# 302 "data/maps/DewfordTown/scripts.pory"
# 556 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 557 "data/maps/DewfordTown/scripts.pory"
# 303 "data/maps/DewfordTown/scripts.pory"
# 558 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 559 "data/maps/DewfordTown/scripts.pory"
# 304 "data/maps/DewfordTown/scripts.pory"
# 560 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 561 "data/maps/DewfordTown/scripts.pory"
# 305 "data/maps/DewfordTown/scripts.pory"
# 562 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 563 "data/maps/DewfordTown/scripts.pory"
# 306 "data/maps/DewfordTown/scripts.pory"
# 564 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 565 "data/maps/DewfordTown/scripts.pory"
# 307 "data/maps/DewfordTown/scripts.pory"
# 566 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 567 "data/maps/DewfordTown/scripts.pory"
# 308 "data/maps/DewfordTown/scripts.pory"
# 568 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 569 "data/maps/DewfordTown/scripts.pory"
# 309 "data/maps/DewfordTown/scripts.pory"
# 570 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 571 "data/maps/DewfordTown/scripts.pory"
# 310 "data/maps/DewfordTown/scripts.pory"
# 572 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 573 "data/maps/DewfordTown/scripts.pory"
# 311 "data/maps/DewfordTown/scripts.pory"
# 574 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 575 "data/maps/DewfordTown/scripts.pory"
# 312 "data/maps/DewfordTown/scripts.pory"
# 576 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 577 "data/maps/DewfordTown/scripts.pory"
# 313 "data/maps/DewfordTown/scripts.pory"
# 578 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 579 "data/maps/DewfordTown/scripts.pory"
# 314 "data/maps/DewfordTown/scripts.pory"
# 580 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 581 "data/maps/DewfordTown/scripts.pory"
# 315 "data/maps/DewfordTown/scripts.pory"
# 582 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 583 "data/maps/DewfordTown/scripts.pory"
# 316 "data/maps/DewfordTown/scripts.pory"
# 584 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 585 "data/maps/DewfordTown/scripts.pory"
# 317 "data/maps/DewfordTown/scripts.pory"
# 586 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 587 "data/maps/DewfordTown/scripts.pory"
# 318 "data/maps/DewfordTown/scripts.pory"
# 588 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 589 "data/maps/DewfordTown/scripts.pory"
# 319 "data/maps/DewfordTown/scripts.pory"
# 590 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 591 "data/maps/DewfordTown/scripts.pory"
# 320 "data/maps/DewfordTown/scripts.pory"
# 592 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 593 "data/maps/DewfordTown/scripts.pory"
# 321 "data/maps/DewfordTown/scripts.pory"
# 594 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 595 "data/maps/DewfordTown/scripts.pory"
# 322 "data/maps/DewfordTown/scripts.pory"
# 596 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 597 "data/maps/DewfordTown/scripts.pory"
# 323 "data/maps/DewfordTown/scripts.pory"
# 598 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 599 "data/maps/DewfordTown/scripts.pory"
# 324 "data/maps/DewfordTown/scripts.pory"
# 600 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 601 "data/maps/DewfordTown/scripts.pory"
# 325 "data/maps/DewfordTown/scripts.pory"
# 602 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 603 "data/maps/DewfordTown/scripts.pory"
# 326 "data/maps/DewfordTown/scripts.pory"
# 604 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 605 "data/maps/DewfordTown/scripts.pory"
# 327 "data/maps/DewfordTown/scripts.pory"
# 606 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 607 "data/maps/DewfordTown/scripts.pory"
# 328 "data/maps/DewfordTown/scripts.pory"
# 608 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 609 "data/maps/DewfordTown/scripts.pory"
# 329 "data/maps/DewfordTown/scripts.pory"
# 610 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 611 "data/maps/DewfordTown/scripts.pory"
# 330 "data/maps/DewfordTown/scripts.pory"
# 612 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 613 "data/maps/DewfordTown/scripts.pory"
# 331 "data/maps/DewfordTown/scripts.pory"
# 614 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 615 "data/maps/DewfordTown/scripts.pory"
# 332 "data/maps/DewfordTown/scripts.pory"
# 616 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 617 "data/maps/DewfordTown/scripts.pory"
# 333 "data/maps/DewfordTown/scripts.pory"
# 618 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 619 "data/maps/DewfordTown/scripts.pory"
# 334 "data/maps/DewfordTown/scripts.pory"
# 620 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 621 "data/maps/DewfordTown/scripts.pory"
# 335 "data/maps/DewfordTown/scripts.pory"
# 622 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 623 "data/maps/DewfordTown/scripts.pory"
# 336 "data/maps/DewfordTown/scripts.pory"
# 624 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 625 "data/maps/DewfordTown/scripts.pory"
# 337 "data/maps/DewfordTown/scripts.pory"
# 626 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 627 "data/maps/DewfordTown/scripts.pory"
# 338 "data/maps/DewfordTown/scripts.pory"
# 628 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 629 "data/maps/DewfordTown/scripts.pory"
# 339 "data/maps/DewfordTown/scripts.pory"
# 630 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 631 "data/maps/DewfordTown/scripts.pory"
# 340 "data/maps/DewfordTown/scripts.pory"
# 632 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 633 "data/maps/DewfordTown/scripts.pory"
# 341 "data/maps/DewfordTown/scripts.pory"
# 634 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 635 "data/maps/DewfordTown/scripts.pory"
# 342 "data/maps/DewfordTown/scripts.pory"
# 636 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 637 "data/maps/DewfordTown/scripts.pory"
# 343 "data/maps/DewfordTown/scripts.pory"
# 638 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 639 "data/maps/DewfordTown/scripts.pory"
# 344 "data/maps/DewfordTown/scripts.pory"
# 640 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 641 "data/maps/DewfordTown/scripts.pory"
# 345 "data/maps/DewfordTown/scripts.pory"
# 642 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 643 "data/maps/DewfordTown/scripts.pory"
# 346 "data/maps/DewfordTown/scripts.pory"
# 644 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 645 "data/maps/DewfordTown/scripts.pory"
# 347 "data/maps/DewfordTown/scripts.pory"
# 646 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 647 "data/maps/DewfordTown/scripts.pory"
# 348 "data/maps/DewfordTown/scripts.pory"
# 648 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 649 "data/maps/DewfordTown/scripts.pory"
# 349 "data/maps/DewfordTown/scripts.pory"
# 650 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 651 "data/maps/DewfordTown/scripts.pory"
# 350 "data/maps/DewfordTown/scripts.pory"
# 652 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 653 "data/maps/DewfordTown/scripts.pory"
# 351 "data/maps/DewfordTown/scripts.pory"
# 654 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 655 "data/maps/DewfordTown/scripts.pory"
# 352 "data/maps/DewfordTown/scripts.pory"
# 656 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 657 "data/maps/DewfordTown/scripts.pory"
# 353 "data/maps/DewfordTown/scripts.pory"
# 658 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 659 "data/maps/DewfordTown/scripts.pory"
# 354 "data/maps/DewfordTown/scripts.pory"
# 660 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 661 "data/maps/DewfordTown/scripts.pory"
# 355 "data/maps/DewfordTown/scripts.pory"
# 662 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 663 "data/maps/DewfordTown/scripts.pory"
# 356 "data/maps/DewfordTown/scripts.pory"
# 664 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 665 "data/maps/DewfordTown/scripts.pory"
# 357 "data/maps/DewfordTown/scripts.pory"
# 666 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 667 "data/maps/DewfordTown/scripts.pory"
# 358 "data/maps/DewfordTown/scripts.pory"
# 668 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 669 "data/maps/DewfordTown/scripts.pory"
# 359 "data/maps/DewfordTown/scripts.pory"
# 670 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 671 "data/maps/DewfordTown/scripts.pory"
# 360 "data/maps/DewfordTown/scripts.pory"
# 672 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 673 "data/maps/DewfordTown/scripts.pory"
# 361 "data/maps/DewfordTown/scripts.pory"
# 674 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 675 "data/maps/DewfordTown/scripts.pory"
# 362 "data/maps/DewfordTown/scripts.pory"
# 676 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 677 "data/maps/DewfordTown/scripts.pory"
# 363 "data/maps/DewfordTown/scripts.pory"
# 678 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 679 "data/maps/DewfordTown/scripts.pory"
# 364 "data/maps/DewfordTown/scripts.pory"
# 680 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 681 "data/maps/DewfordTown/scripts.pory"
# 365 "data/maps/DewfordTown/scripts.pory"
# 682 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 683 "data/maps/DewfordTown/scripts.pory"
# 366 "data/maps/DewfordTown/scripts.pory"
# 684 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 685 "data/maps/DewfordTown/scripts.pory"
# 367 "data/maps/DewfordTown/scripts.pory"
# 686 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 687 "data/maps/DewfordTown/scripts.pory"
# 368 "data/maps/DewfordTown/scripts.pory"
# 688 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 689 "data/maps/DewfordTown/scripts.pory"
# 369 "data/maps/DewfordTown/scripts.pory"
# 690 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 691 "data/maps/DewfordTown/scripts.pory"
# 370 "data/maps/DewfordTown/scripts.pory"
# 692 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 693 "data/maps/DewfordTown/scripts.pory"
# 371 "data/maps/DewfordTown/scripts.pory"
# 694 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 695 "data/maps/DewfordTown/scripts.pory"
# 372 "data/maps/DewfordTown/scripts.pory"
# 696 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 697 "data/maps/DewfordTown/scripts.pory"
# 373 "data/maps/DewfordTown/scripts.pory"
# 698 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 699 "data/maps/DewfordTown/scripts.pory"
# 374 "data/maps/DewfordTown/scripts.pory"
# 700 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 701 "data/maps/DewfordTown/scripts.pory"
# 375 "data/maps/DewfordTown/scripts.pory"
# 702 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 703 "data/maps/DewfordTown/scripts.pory"
# 376 "data/maps/DewfordTown/scripts.pory"
# 704 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 705 "data/maps/DewfordTown/scripts.pory"
# 377 "data/maps/DewfordTown/scripts.pory"
# 706 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 707 "data/maps/DewfordTown/scripts.pory"
# 378 "data/maps/DewfordTown/scripts.pory"
# 708 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 709 "data/maps/DewfordTown/scripts.pory"
# 379 "data/maps/DewfordTown/scripts.pory"
# 710 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 711 "data/maps/DewfordTown/scripts.pory"
# 380 "data/maps/DewfordTown/scripts.pory"
# 712 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 713 "data/maps/DewfordTown/scripts.pory"
# 381 "data/maps/DewfordTown/scripts.pory"
# 714 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 715 "data/maps/DewfordTown/scripts.pory"
# 382 "data/maps/DewfordTown/scripts.pory"
# 716 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 717 "data/maps/DewfordTown/scripts.pory"
# 383 "data/maps/DewfordTown/scripts.pory"
# 718 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 719 "data/maps/DewfordTown/scripts.pory"
# 384 "data/maps/DewfordTown/scripts.pory"
# 720 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 721 "data/maps/DewfordTown/scripts.pory"
# 385 "data/maps/DewfordTown/scripts.pory"
# 722 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 723 "data/maps/DewfordTown/scripts.pory"
# 386 "data/maps/DewfordTown/scripts.pory"
# 724 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 725 "data/maps/DewfordTown/scripts.pory"
# 387 "data/maps/DewfordTown/scripts.pory"
# 726 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 727 "data/maps/DewfordTown/scripts.pory"
# 388 "data/maps/DewfordTown/scripts.pory"
# 728 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 729 "data/maps/DewfordTown/scripts.pory"
# 389 "data/maps/DewfordTown/scripts.pory"
# 730 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 731 "data/maps/DewfordTown/scripts.pory"
# 390 "data/maps/DewfordTown/scripts.pory"
# 732 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 733 "data/maps/DewfordTown/scripts.pory"
# 391 "data/maps/DewfordTown/scripts.pory"
# 734 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 735 "data/maps/DewfordTown/scripts.pory"
# 392 "data/maps/DewfordTown/scripts.pory"
# 736 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 737 "data/maps/DewfordTown/scripts.pory"
# 393 "data/maps/DewfordTown/scripts.pory"
# 738 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 739 "data/maps/DewfordTown/scripts.pory"
# 394 "data/maps/DewfordTown/scripts.pory"
# 740 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 741 "data/maps/DewfordTown/scripts.pory"
# 395 "data/maps/DewfordTown/scripts.pory"
# 742 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 743 "data/maps/DewfordTown/scripts.pory"
# 396 "data/maps/DewfordTown/scripts.pory"
# 744 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 745 "data/maps/DewfordTown/scripts.pory"
# 397 "data/maps/DewfordTown/scripts.pory"
# 746 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 747 "data/maps/DewfordTown/scripts.pory"
# 398 "data/maps/DewfordTown/scripts.pory"
# 748 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 749 "data/maps/DewfordTown/scripts.pory"
# 399 "data/maps/DewfordTown/scripts.pory"
# 750 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 751 "data/maps/DewfordTown/scripts.pory"
# 400 "data/maps/DewfordTown/scripts.pory"
# 752 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 753 "data/maps/DewfordTown/scripts.pory"
# 401 "data/maps/DewfordTown/scripts.pory"
# 754 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 755 "data/maps/DewfordTown/scripts.pory"
# 402 "data/maps/DewfordTown/scripts.pory"
# 756 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 757 "data/maps/DewfordTown/scripts.pory"
# 403 "data/maps/DewfordTown/scripts.pory"
# 758 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 759 "data/maps/DewfordTown/scripts.pory"
# 404 "data/maps/DewfordTown/scripts.pory"
# 760 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 761 "data/maps/DewfordTown/scripts.pory"
# 405 "data/maps/DewfordTown/scripts.pory"
# 762 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 763 "data/maps/DewfordTown/scripts.pory"
# 406 "data/maps/DewfordTown/scripts.pory"
# 764 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 765 "data/maps/DewfordTown/scripts.pory"
# 407 "data/maps/DewfordTown/scripts.pory"
# 766 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 767 "data/maps/DewfordTown/scripts.pory"
# 408 "data/maps/DewfordTown/scripts.pory"
# 768 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 769 "data/maps/DewfordTown/scripts.pory"
# 409 "data/maps/DewfordTown/scripts.pory"
# 770 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 771 "data/maps/DewfordTown/scripts.pory"
# 410 "data/maps/DewfordTown/scripts.pory"
# 772 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 773 "data/maps/DewfordTown/scripts.pory"
# 411 "data/maps/DewfordTown/scripts.pory"
# 774 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 775 "data/maps/DewfordTown/scripts.pory"
# 412 "data/maps/DewfordTown/scripts.pory"
# 776 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 777 "data/maps/DewfordTown/scripts.pory"
# 413 "data/maps/DewfordTown/scripts.pory"
# 778 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 779 "data/maps/DewfordTown/scripts.pory"
# 414 "data/maps/DewfordTown/scripts.pory"
# 780 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 781 "data/maps/DewfordTown/scripts.pory"
# 415 "data/maps/DewfordTown/scripts.pory"
# 782 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 783 "data/maps/DewfordTown/scripts.pory"
# 416 "data/maps/DewfordTown/scripts.pory"
# 784 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 785 "data/maps/DewfordTown/scripts.pory"
# 417 "data/maps/DewfordTown/scripts.pory"
# 786 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 787 "data/maps/DewfordTown/scripts.pory"
# 418 "data/maps/DewfordTown/scripts.pory"
# 788 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 789 "data/maps/DewfordTown/scripts.pory"
# 419 "data/maps/DewfordTown/scripts.pory"
# 790 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 791 "data/maps/DewfordTown/scripts.pory"
# 420 "data/maps/DewfordTown/scripts.pory"
# 792 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 793 "data/maps/DewfordTown/scripts.pory"
# 421 "data/maps/DewfordTown/scripts.pory"
# 794 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 795 "data/maps/DewfordTown/scripts.pory"
# 422 "data/maps/DewfordTown/scripts.pory"
# 796 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 797 "data/maps/DewfordTown/scripts.pory"
# 423 "data/maps/DewfordTown/scripts.pory"
# 798 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 799 "data/maps/DewfordTown/scripts.pory"
# 424 "data/maps/DewfordTown/scripts.pory"
# 800 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 801 "data/maps/DewfordTown/scripts.pory"
# 425 "data/maps/DewfordTown/scripts.pory"
# 802 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 803 "data/maps/DewfordTown/scripts.pory"
# 426 "data/maps/DewfordTown/scripts.pory"
# 804 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 805 "data/maps/DewfordTown/scripts.pory"
# 427 "data/maps/DewfordTown/scripts.pory"
# 806 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 807 "data/maps/DewfordTown/scripts.pory"
# 428 "data/maps/DewfordTown/scripts.pory"
# 808 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 809 "data/maps/DewfordTown/scripts.pory"
# 429 "data/maps/DewfordTown/scripts.pory"
# 810 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 811 "data/maps/DewfordTown/scripts.pory"
# 430 "data/maps/DewfordTown/scripts.pory"
# 812 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 813 "data/maps/DewfordTown/scripts.pory"
# 431 "data/maps/DewfordTown/scripts.pory"
# 814 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 815 "data/maps/DewfordTown/scripts.pory"
# 432 "data/maps/DewfordTown/scripts.pory"
# 816 "data/maps/DewfordTown/scripts.pory"
	step_end
# 817 "data/maps/DewfordTown/scripts.pory"

# 818 "data/maps/DewfordTown/scripts.pory"
# 435 "data/maps/DewfordTown/scripts.pory"
# 819 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToSlateport:
# 820 "data/maps/DewfordTown/scripts.pory"
# 436 "data/maps/DewfordTown/scripts.pory"
# 821 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 822 "data/maps/DewfordTown/scripts.pory"
# 437 "data/maps/DewfordTown/scripts.pory"
# 823 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 824 "data/maps/DewfordTown/scripts.pory"
# 438 "data/maps/DewfordTown/scripts.pory"
# 825 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 826 "data/maps/DewfordTown/scripts.pory"
# 439 "data/maps/DewfordTown/scripts.pory"
# 827 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 828 "data/maps/DewfordTown/scripts.pory"
# 440 "data/maps/DewfordTown/scripts.pory"
# 829 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 830 "data/maps/DewfordTown/scripts.pory"
# 441 "data/maps/DewfordTown/scripts.pory"
# 831 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 832 "data/maps/DewfordTown/scripts.pory"
# 442 "data/maps/DewfordTown/scripts.pory"
# 833 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 834 "data/maps/DewfordTown/scripts.pory"
# 443 "data/maps/DewfordTown/scripts.pory"
# 835 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 836 "data/maps/DewfordTown/scripts.pory"
# 444 "data/maps/DewfordTown/scripts.pory"
# 837 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/DewfordTown/scripts.pory"
# 445 "data/maps/DewfordTown/scripts.pory"
# 839 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 840 "data/maps/DewfordTown/scripts.pory"
# 446 "data/maps/DewfordTown/scripts.pory"
# 841 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 842 "data/maps/DewfordTown/scripts.pory"
# 447 "data/maps/DewfordTown/scripts.pory"
# 843 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 844 "data/maps/DewfordTown/scripts.pory"
# 448 "data/maps/DewfordTown/scripts.pory"
# 845 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 846 "data/maps/DewfordTown/scripts.pory"
# 449 "data/maps/DewfordTown/scripts.pory"
# 847 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 848 "data/maps/DewfordTown/scripts.pory"
# 450 "data/maps/DewfordTown/scripts.pory"
# 849 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 850 "data/maps/DewfordTown/scripts.pory"
# 451 "data/maps/DewfordTown/scripts.pory"
# 851 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 852 "data/maps/DewfordTown/scripts.pory"
# 452 "data/maps/DewfordTown/scripts.pory"
# 853 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 854 "data/maps/DewfordTown/scripts.pory"
# 453 "data/maps/DewfordTown/scripts.pory"
# 855 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 856 "data/maps/DewfordTown/scripts.pory"
# 454 "data/maps/DewfordTown/scripts.pory"
# 857 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 858 "data/maps/DewfordTown/scripts.pory"
# 455 "data/maps/DewfordTown/scripts.pory"
# 859 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 860 "data/maps/DewfordTown/scripts.pory"
# 456 "data/maps/DewfordTown/scripts.pory"
# 861 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 862 "data/maps/DewfordTown/scripts.pory"
# 457 "data/maps/DewfordTown/scripts.pory"
# 863 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 864 "data/maps/DewfordTown/scripts.pory"
# 458 "data/maps/DewfordTown/scripts.pory"
# 865 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 866 "data/maps/DewfordTown/scripts.pory"
# 459 "data/maps/DewfordTown/scripts.pory"
# 867 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 868 "data/maps/DewfordTown/scripts.pory"
# 460 "data/maps/DewfordTown/scripts.pory"
# 869 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 870 "data/maps/DewfordTown/scripts.pory"
# 461 "data/maps/DewfordTown/scripts.pory"
# 871 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 872 "data/maps/DewfordTown/scripts.pory"
# 462 "data/maps/DewfordTown/scripts.pory"
# 873 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 874 "data/maps/DewfordTown/scripts.pory"
# 463 "data/maps/DewfordTown/scripts.pory"
# 875 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 876 "data/maps/DewfordTown/scripts.pory"
# 464 "data/maps/DewfordTown/scripts.pory"
# 877 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 878 "data/maps/DewfordTown/scripts.pory"
# 465 "data/maps/DewfordTown/scripts.pory"
# 879 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 880 "data/maps/DewfordTown/scripts.pory"
# 466 "data/maps/DewfordTown/scripts.pory"
# 881 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 882 "data/maps/DewfordTown/scripts.pory"
# 467 "data/maps/DewfordTown/scripts.pory"
# 883 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 884 "data/maps/DewfordTown/scripts.pory"
# 468 "data/maps/DewfordTown/scripts.pory"
# 885 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 886 "data/maps/DewfordTown/scripts.pory"
# 469 "data/maps/DewfordTown/scripts.pory"
# 887 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 888 "data/maps/DewfordTown/scripts.pory"
# 470 "data/maps/DewfordTown/scripts.pory"
# 889 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 890 "data/maps/DewfordTown/scripts.pory"
# 471 "data/maps/DewfordTown/scripts.pory"
# 891 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 892 "data/maps/DewfordTown/scripts.pory"
# 472 "data/maps/DewfordTown/scripts.pory"
# 893 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 894 "data/maps/DewfordTown/scripts.pory"
# 473 "data/maps/DewfordTown/scripts.pory"
# 895 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 896 "data/maps/DewfordTown/scripts.pory"
# 474 "data/maps/DewfordTown/scripts.pory"
# 897 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 898 "data/maps/DewfordTown/scripts.pory"
# 475 "data/maps/DewfordTown/scripts.pory"
# 899 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 900 "data/maps/DewfordTown/scripts.pory"
# 476 "data/maps/DewfordTown/scripts.pory"
# 901 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 902 "data/maps/DewfordTown/scripts.pory"
# 477 "data/maps/DewfordTown/scripts.pory"
# 903 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 904 "data/maps/DewfordTown/scripts.pory"
# 478 "data/maps/DewfordTown/scripts.pory"
# 905 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 906 "data/maps/DewfordTown/scripts.pory"
# 479 "data/maps/DewfordTown/scripts.pory"
# 907 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 908 "data/maps/DewfordTown/scripts.pory"
# 480 "data/maps/DewfordTown/scripts.pory"
# 909 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 910 "data/maps/DewfordTown/scripts.pory"
# 481 "data/maps/DewfordTown/scripts.pory"
# 911 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 912 "data/maps/DewfordTown/scripts.pory"
# 482 "data/maps/DewfordTown/scripts.pory"
# 913 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 914 "data/maps/DewfordTown/scripts.pory"
# 483 "data/maps/DewfordTown/scripts.pory"
# 915 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 916 "data/maps/DewfordTown/scripts.pory"
# 484 "data/maps/DewfordTown/scripts.pory"
# 917 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 918 "data/maps/DewfordTown/scripts.pory"
# 485 "data/maps/DewfordTown/scripts.pory"
# 919 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 920 "data/maps/DewfordTown/scripts.pory"
# 486 "data/maps/DewfordTown/scripts.pory"
# 921 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 922 "data/maps/DewfordTown/scripts.pory"
# 487 "data/maps/DewfordTown/scripts.pory"
# 923 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 924 "data/maps/DewfordTown/scripts.pory"
# 488 "data/maps/DewfordTown/scripts.pory"
# 925 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 926 "data/maps/DewfordTown/scripts.pory"
# 489 "data/maps/DewfordTown/scripts.pory"
# 927 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 928 "data/maps/DewfordTown/scripts.pory"
# 490 "data/maps/DewfordTown/scripts.pory"
# 929 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 930 "data/maps/DewfordTown/scripts.pory"
# 491 "data/maps/DewfordTown/scripts.pory"
# 931 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 932 "data/maps/DewfordTown/scripts.pory"
# 492 "data/maps/DewfordTown/scripts.pory"
# 933 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 934 "data/maps/DewfordTown/scripts.pory"
# 493 "data/maps/DewfordTown/scripts.pory"
# 935 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 936 "data/maps/DewfordTown/scripts.pory"
# 494 "data/maps/DewfordTown/scripts.pory"
# 937 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 938 "data/maps/DewfordTown/scripts.pory"
# 495 "data/maps/DewfordTown/scripts.pory"
# 939 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 940 "data/maps/DewfordTown/scripts.pory"
# 496 "data/maps/DewfordTown/scripts.pory"
# 941 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 942 "data/maps/DewfordTown/scripts.pory"
# 497 "data/maps/DewfordTown/scripts.pory"
# 943 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 944 "data/maps/DewfordTown/scripts.pory"
# 498 "data/maps/DewfordTown/scripts.pory"
# 945 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 946 "data/maps/DewfordTown/scripts.pory"
# 499 "data/maps/DewfordTown/scripts.pory"
# 947 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 948 "data/maps/DewfordTown/scripts.pory"
# 500 "data/maps/DewfordTown/scripts.pory"
# 949 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 950 "data/maps/DewfordTown/scripts.pory"
# 501 "data/maps/DewfordTown/scripts.pory"
# 951 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 952 "data/maps/DewfordTown/scripts.pory"
# 502 "data/maps/DewfordTown/scripts.pory"
# 953 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 954 "data/maps/DewfordTown/scripts.pory"
# 503 "data/maps/DewfordTown/scripts.pory"
# 955 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 956 "data/maps/DewfordTown/scripts.pory"
# 504 "data/maps/DewfordTown/scripts.pory"
# 957 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 958 "data/maps/DewfordTown/scripts.pory"
# 505 "data/maps/DewfordTown/scripts.pory"
# 959 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 960 "data/maps/DewfordTown/scripts.pory"
# 506 "data/maps/DewfordTown/scripts.pory"
# 961 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 962 "data/maps/DewfordTown/scripts.pory"
# 507 "data/maps/DewfordTown/scripts.pory"
# 963 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 964 "data/maps/DewfordTown/scripts.pory"
# 508 "data/maps/DewfordTown/scripts.pory"
# 965 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 966 "data/maps/DewfordTown/scripts.pory"
# 509 "data/maps/DewfordTown/scripts.pory"
# 967 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 968 "data/maps/DewfordTown/scripts.pory"
# 510 "data/maps/DewfordTown/scripts.pory"
# 969 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 970 "data/maps/DewfordTown/scripts.pory"
# 511 "data/maps/DewfordTown/scripts.pory"
# 971 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 972 "data/maps/DewfordTown/scripts.pory"
# 512 "data/maps/DewfordTown/scripts.pory"
# 973 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 974 "data/maps/DewfordTown/scripts.pory"
# 513 "data/maps/DewfordTown/scripts.pory"
# 975 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 976 "data/maps/DewfordTown/scripts.pory"
# 514 "data/maps/DewfordTown/scripts.pory"
# 977 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 978 "data/maps/DewfordTown/scripts.pory"
# 515 "data/maps/DewfordTown/scripts.pory"
# 979 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 980 "data/maps/DewfordTown/scripts.pory"
# 516 "data/maps/DewfordTown/scripts.pory"
# 981 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 982 "data/maps/DewfordTown/scripts.pory"
# 517 "data/maps/DewfordTown/scripts.pory"
# 983 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 984 "data/maps/DewfordTown/scripts.pory"
# 518 "data/maps/DewfordTown/scripts.pory"
# 985 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 986 "data/maps/DewfordTown/scripts.pory"
# 519 "data/maps/DewfordTown/scripts.pory"
# 987 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 988 "data/maps/DewfordTown/scripts.pory"
# 520 "data/maps/DewfordTown/scripts.pory"
# 989 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 990 "data/maps/DewfordTown/scripts.pory"
# 521 "data/maps/DewfordTown/scripts.pory"
# 991 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 992 "data/maps/DewfordTown/scripts.pory"
# 522 "data/maps/DewfordTown/scripts.pory"
# 993 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 994 "data/maps/DewfordTown/scripts.pory"
# 523 "data/maps/DewfordTown/scripts.pory"
# 995 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 996 "data/maps/DewfordTown/scripts.pory"
# 524 "data/maps/DewfordTown/scripts.pory"
# 997 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 998 "data/maps/DewfordTown/scripts.pory"
# 525 "data/maps/DewfordTown/scripts.pory"
# 999 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1000 "data/maps/DewfordTown/scripts.pory"
# 526 "data/maps/DewfordTown/scripts.pory"
# 1001 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1002 "data/maps/DewfordTown/scripts.pory"
# 527 "data/maps/DewfordTown/scripts.pory"
# 1003 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1004 "data/maps/DewfordTown/scripts.pory"
# 528 "data/maps/DewfordTown/scripts.pory"
# 1005 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1006 "data/maps/DewfordTown/scripts.pory"
# 529 "data/maps/DewfordTown/scripts.pory"
# 1007 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1008 "data/maps/DewfordTown/scripts.pory"
# 530 "data/maps/DewfordTown/scripts.pory"
# 1009 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1010 "data/maps/DewfordTown/scripts.pory"
# 531 "data/maps/DewfordTown/scripts.pory"
# 1011 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1012 "data/maps/DewfordTown/scripts.pory"
# 532 "data/maps/DewfordTown/scripts.pory"
# 1013 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1014 "data/maps/DewfordTown/scripts.pory"
# 533 "data/maps/DewfordTown/scripts.pory"
# 1015 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1016 "data/maps/DewfordTown/scripts.pory"
# 534 "data/maps/DewfordTown/scripts.pory"
# 1017 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1018 "data/maps/DewfordTown/scripts.pory"
# 535 "data/maps/DewfordTown/scripts.pory"
# 1019 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1020 "data/maps/DewfordTown/scripts.pory"
# 536 "data/maps/DewfordTown/scripts.pory"
# 1021 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1022 "data/maps/DewfordTown/scripts.pory"
# 537 "data/maps/DewfordTown/scripts.pory"
# 1023 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1024 "data/maps/DewfordTown/scripts.pory"
# 538 "data/maps/DewfordTown/scripts.pory"
# 1025 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1026 "data/maps/DewfordTown/scripts.pory"
# 539 "data/maps/DewfordTown/scripts.pory"
# 1027 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1028 "data/maps/DewfordTown/scripts.pory"
# 540 "data/maps/DewfordTown/scripts.pory"
# 1029 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1030 "data/maps/DewfordTown/scripts.pory"
# 541 "data/maps/DewfordTown/scripts.pory"
# 1031 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1032 "data/maps/DewfordTown/scripts.pory"
# 542 "data/maps/DewfordTown/scripts.pory"
# 1033 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1034 "data/maps/DewfordTown/scripts.pory"
# 543 "data/maps/DewfordTown/scripts.pory"
# 1035 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1036 "data/maps/DewfordTown/scripts.pory"
# 544 "data/maps/DewfordTown/scripts.pory"
# 1037 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1038 "data/maps/DewfordTown/scripts.pory"
# 545 "data/maps/DewfordTown/scripts.pory"
# 1039 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1040 "data/maps/DewfordTown/scripts.pory"
# 546 "data/maps/DewfordTown/scripts.pory"
# 1041 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1042 "data/maps/DewfordTown/scripts.pory"
# 547 "data/maps/DewfordTown/scripts.pory"
# 1043 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1044 "data/maps/DewfordTown/scripts.pory"
# 548 "data/maps/DewfordTown/scripts.pory"
# 1045 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1046 "data/maps/DewfordTown/scripts.pory"
# 549 "data/maps/DewfordTown/scripts.pory"
# 1047 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1048 "data/maps/DewfordTown/scripts.pory"
# 550 "data/maps/DewfordTown/scripts.pory"
# 1049 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1050 "data/maps/DewfordTown/scripts.pory"
# 551 "data/maps/DewfordTown/scripts.pory"
# 1051 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1052 "data/maps/DewfordTown/scripts.pory"
# 552 "data/maps/DewfordTown/scripts.pory"
# 1053 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1054 "data/maps/DewfordTown/scripts.pory"
# 553 "data/maps/DewfordTown/scripts.pory"
# 1055 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1056 "data/maps/DewfordTown/scripts.pory"
# 554 "data/maps/DewfordTown/scripts.pory"
# 1057 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1058 "data/maps/DewfordTown/scripts.pory"
# 555 "data/maps/DewfordTown/scripts.pory"
# 1059 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1060 "data/maps/DewfordTown/scripts.pory"
# 556 "data/maps/DewfordTown/scripts.pory"
# 1061 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1062 "data/maps/DewfordTown/scripts.pory"
# 557 "data/maps/DewfordTown/scripts.pory"
# 1063 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1064 "data/maps/DewfordTown/scripts.pory"
# 558 "data/maps/DewfordTown/scripts.pory"
# 1065 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1066 "data/maps/DewfordTown/scripts.pory"
# 559 "data/maps/DewfordTown/scripts.pory"
# 1067 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1068 "data/maps/DewfordTown/scripts.pory"
# 560 "data/maps/DewfordTown/scripts.pory"
# 1069 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1070 "data/maps/DewfordTown/scripts.pory"
# 561 "data/maps/DewfordTown/scripts.pory"
# 1071 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1072 "data/maps/DewfordTown/scripts.pory"
# 562 "data/maps/DewfordTown/scripts.pory"
# 1073 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1074 "data/maps/DewfordTown/scripts.pory"
# 563 "data/maps/DewfordTown/scripts.pory"
# 1075 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1076 "data/maps/DewfordTown/scripts.pory"
# 564 "data/maps/DewfordTown/scripts.pory"
# 1077 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1078 "data/maps/DewfordTown/scripts.pory"
# 565 "data/maps/DewfordTown/scripts.pory"
# 1079 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1080 "data/maps/DewfordTown/scripts.pory"
# 566 "data/maps/DewfordTown/scripts.pory"
# 1081 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1082 "data/maps/DewfordTown/scripts.pory"
# 567 "data/maps/DewfordTown/scripts.pory"
# 1083 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1084 "data/maps/DewfordTown/scripts.pory"
# 568 "data/maps/DewfordTown/scripts.pory"
# 1085 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1086 "data/maps/DewfordTown/scripts.pory"
# 569 "data/maps/DewfordTown/scripts.pory"
# 1087 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1088 "data/maps/DewfordTown/scripts.pory"
# 570 "data/maps/DewfordTown/scripts.pory"
# 1089 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1090 "data/maps/DewfordTown/scripts.pory"
# 571 "data/maps/DewfordTown/scripts.pory"
# 1091 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1092 "data/maps/DewfordTown/scripts.pory"
# 572 "data/maps/DewfordTown/scripts.pory"
# 1093 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1094 "data/maps/DewfordTown/scripts.pory"
# 573 "data/maps/DewfordTown/scripts.pory"
# 1095 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1096 "data/maps/DewfordTown/scripts.pory"
# 574 "data/maps/DewfordTown/scripts.pory"
# 1097 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1098 "data/maps/DewfordTown/scripts.pory"
# 575 "data/maps/DewfordTown/scripts.pory"
# 1099 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1100 "data/maps/DewfordTown/scripts.pory"
# 576 "data/maps/DewfordTown/scripts.pory"
# 1101 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1102 "data/maps/DewfordTown/scripts.pory"
# 577 "data/maps/DewfordTown/scripts.pory"
# 1103 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1104 "data/maps/DewfordTown/scripts.pory"
# 578 "data/maps/DewfordTown/scripts.pory"
# 1105 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1106 "data/maps/DewfordTown/scripts.pory"
# 579 "data/maps/DewfordTown/scripts.pory"
# 1107 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1108 "data/maps/DewfordTown/scripts.pory"
# 580 "data/maps/DewfordTown/scripts.pory"
# 1109 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1110 "data/maps/DewfordTown/scripts.pory"
# 581 "data/maps/DewfordTown/scripts.pory"
# 1111 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1112 "data/maps/DewfordTown/scripts.pory"
# 582 "data/maps/DewfordTown/scripts.pory"
# 1113 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 1114 "data/maps/DewfordTown/scripts.pory"
# 583 "data/maps/DewfordTown/scripts.pory"
# 1115 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 1116 "data/maps/DewfordTown/scripts.pory"
# 584 "data/maps/DewfordTown/scripts.pory"
# 1117 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 1118 "data/maps/DewfordTown/scripts.pory"
# 585 "data/maps/DewfordTown/scripts.pory"
# 1119 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1120 "data/maps/DewfordTown/scripts.pory"
# 586 "data/maps/DewfordTown/scripts.pory"
# 1121 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1122 "data/maps/DewfordTown/scripts.pory"
# 587 "data/maps/DewfordTown/scripts.pory"
# 1123 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1124 "data/maps/DewfordTown/scripts.pory"
# 588 "data/maps/DewfordTown/scripts.pory"
# 1125 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1126 "data/maps/DewfordTown/scripts.pory"
# 589 "data/maps/DewfordTown/scripts.pory"
# 1127 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1128 "data/maps/DewfordTown/scripts.pory"
# 590 "data/maps/DewfordTown/scripts.pory"
# 1129 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1130 "data/maps/DewfordTown/scripts.pory"
# 591 "data/maps/DewfordTown/scripts.pory"
# 1131 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1132 "data/maps/DewfordTown/scripts.pory"
# 592 "data/maps/DewfordTown/scripts.pory"
# 1133 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1134 "data/maps/DewfordTown/scripts.pory"
# 593 "data/maps/DewfordTown/scripts.pory"
# 1135 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1136 "data/maps/DewfordTown/scripts.pory"
# 594 "data/maps/DewfordTown/scripts.pory"
# 1137 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1138 "data/maps/DewfordTown/scripts.pory"
# 595 "data/maps/DewfordTown/scripts.pory"
# 1139 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1140 "data/maps/DewfordTown/scripts.pory"
# 596 "data/maps/DewfordTown/scripts.pory"
# 1141 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 1142 "data/maps/DewfordTown/scripts.pory"
# 597 "data/maps/DewfordTown/scripts.pory"
# 1143 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1144 "data/maps/DewfordTown/scripts.pory"
# 598 "data/maps/DewfordTown/scripts.pory"
# 1145 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1146 "data/maps/DewfordTown/scripts.pory"
# 599 "data/maps/DewfordTown/scripts.pory"
# 1147 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1148 "data/maps/DewfordTown/scripts.pory"
# 600 "data/maps/DewfordTown/scripts.pory"
# 1149 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1150 "data/maps/DewfordTown/scripts.pory"
# 601 "data/maps/DewfordTown/scripts.pory"
# 1151 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1152 "data/maps/DewfordTown/scripts.pory"
# 602 "data/maps/DewfordTown/scripts.pory"
# 1153 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1154 "data/maps/DewfordTown/scripts.pory"
# 603 "data/maps/DewfordTown/scripts.pory"
# 1155 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1156 "data/maps/DewfordTown/scripts.pory"
# 604 "data/maps/DewfordTown/scripts.pory"
# 1157 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1158 "data/maps/DewfordTown/scripts.pory"
# 605 "data/maps/DewfordTown/scripts.pory"
# 1159 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1160 "data/maps/DewfordTown/scripts.pory"
# 606 "data/maps/DewfordTown/scripts.pory"
# 1161 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 1162 "data/maps/DewfordTown/scripts.pory"
# 607 "data/maps/DewfordTown/scripts.pory"
# 1163 "data/maps/DewfordTown/scripts.pory"
	step_end
# 1164 "data/maps/DewfordTown/scripts.pory"

# 1165 "data/maps/DewfordTown/scripts.pory"
# 610 "data/maps/DewfordTown/scripts.pory"
# 1166 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerBoardBoat:
# 1167 "data/maps/DewfordTown/scripts.pory"
# 611 "data/maps/DewfordTown/scripts.pory"
# 1168 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 1169 "data/maps/DewfordTown/scripts.pory"
# 612 "data/maps/DewfordTown/scripts.pory"
# 1170 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1171 "data/maps/DewfordTown/scripts.pory"
# 613 "data/maps/DewfordTown/scripts.pory"
# 1172 "data/maps/DewfordTown/scripts.pory"
	step_end
# 1173 "data/maps/DewfordTown/scripts.pory"

# 1174 "data/maps/DewfordTown/scripts.pory"
# 616 "data/maps/DewfordTown/scripts.pory"
# 1175 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatPetalburg:
# 1176 "data/maps/DewfordTown/scripts.pory"
# 617 "data/maps/DewfordTown/scripts.pory"
# 1177 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1178 "data/maps/DewfordTown/scripts.pory"
# 618 "data/maps/DewfordTown/scripts.pory"
# 1179 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1180 "data/maps/DewfordTown/scripts.pory"
# 619 "data/maps/DewfordTown/scripts.pory"
# 1181 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1182 "data/maps/DewfordTown/scripts.pory"
# 620 "data/maps/DewfordTown/scripts.pory"
# 1183 "data/maps/DewfordTown/scripts.pory"
	step_end
# 1184 "data/maps/DewfordTown/scripts.pory"

# 1185 "data/maps/DewfordTown/scripts.pory"
# 623 "data/maps/DewfordTown/scripts.pory"
# 1186 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatSlateport:
# 1187 "data/maps/DewfordTown/scripts.pory"
# 624 "data/maps/DewfordTown/scripts.pory"
# 1188 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1189 "data/maps/DewfordTown/scripts.pory"
# 625 "data/maps/DewfordTown/scripts.pory"
# 1190 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1191 "data/maps/DewfordTown/scripts.pory"
# 626 "data/maps/DewfordTown/scripts.pory"
# 1192 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1193 "data/maps/DewfordTown/scripts.pory"
# 627 "data/maps/DewfordTown/scripts.pory"
# 1194 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 1195 "data/maps/DewfordTown/scripts.pory"
# 628 "data/maps/DewfordTown/scripts.pory"
# 1196 "data/maps/DewfordTown/scripts.pory"
	step_end
# 1197 "data/maps/DewfordTown/scripts.pory"

# 1198 "data/maps/DewfordTown/scripts.pory"
# 631 "data/maps/DewfordTown/scripts.pory"
# 1199 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyBoardBoat:
# 1200 "data/maps/DewfordTown/scripts.pory"
# 632 "data/maps/DewfordTown/scripts.pory"
# 1201 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1202 "data/maps/DewfordTown/scripts.pory"
# 633 "data/maps/DewfordTown/scripts.pory"
# 1203 "data/maps/DewfordTown/scripts.pory"
	step_end
# 1204 "data/maps/DewfordTown/scripts.pory"

# 1205 "data/maps/DewfordTown/scripts.pory"
# 636 "data/maps/DewfordTown/scripts.pory"
# 1206 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyExitBoat:
# 1207 "data/maps/DewfordTown/scripts.pory"
# 637 "data/maps/DewfordTown/scripts.pory"
# 1208 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1209 "data/maps/DewfordTown/scripts.pory"
# 638 "data/maps/DewfordTown/scripts.pory"
# 1210 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1211 "data/maps/DewfordTown/scripts.pory"
# 639 "data/maps/DewfordTown/scripts.pory"
# 1212 "data/maps/DewfordTown/scripts.pory"
	step_end
# 1213 "data/maps/DewfordTown/scripts.pory"

# 1214 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy::
# 1215 "data/maps/DewfordTown/scripts.pory"
# 643 "data/maps/DewfordTown/scripts.pory"
# 1216 "data/maps/DewfordTown/scripts.pory"
	lock
# 1217 "data/maps/DewfordTown/scripts.pory"
# 644 "data/maps/DewfordTown/scripts.pory"
# 1218 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1219 "data/maps/DewfordTown/scripts.pory"
# 645 "data/maps/DewfordTown/scripts.pory"
# 1220 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 1221 "data/maps/DewfordTown/scripts.pory"
# 646 "data/maps/DewfordTown/scripts.pory"
# 1222 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 1223 "data/maps/DewfordTown/scripts.pory"
# 647 "data/maps/DewfordTown/scripts.pory"
# 1224 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, YES
# 1225 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq DewfordTown_EventScript_TrendyPhraseBoy_2
# 1226 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy_1:
# 1227 "data/maps/DewfordTown/scripts.pory"
# 650 "data/maps/DewfordTown/scripts.pory"
# 1228 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, NO
# 1229 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq DewfordTown_EventScript_TrendyPhraseBoy_5
# 1230 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy_4:
# 1231 "data/maps/DewfordTown/scripts.pory"
	end
# 1232 "data/maps/DewfordTown/scripts.pory"

# 1233 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy_2:
# 1234 "data/maps/DewfordTown/scripts.pory"
# 648 "data/maps/DewfordTown/scripts.pory"
# 1235 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_ConfirmTrendyPhrase
# 1236 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_TrendyPhraseBoy_1
# 1237 "data/maps/DewfordTown/scripts.pory"

# 1238 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy_5:
# 1239 "data/maps/DewfordTown/scripts.pory"
# 651 "data/maps/DewfordTown/scripts.pory"
# 1240 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_RejectTrendyPhrase
# 1241 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_TrendyPhraseBoy_4
# 1242 "data/maps/DewfordTown/scripts.pory"

# 1243 "data/maps/DewfordTown/scripts.pory"

# 1244 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ConfirmTrendyPhrase::
# 1245 "data/maps/DewfordTown/scripts.pory"
# 657 "data/maps/DewfordTown/scripts.pory"
# 1246 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 1247 "data/maps/DewfordTown/scripts.pory"
# 658 "data/maps/DewfordTown/scripts.pory"
# 1248 "data/maps/DewfordTown/scripts.pory"
	release
# 1249 "data/maps/DewfordTown/scripts.pory"
	end
# 1250 "data/maps/DewfordTown/scripts.pory"

# 1251 "data/maps/DewfordTown/scripts.pory"

# 1252 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase::
# 1253 "data/maps/DewfordTown/scripts.pory"
# 663 "data/maps/DewfordTown/scripts.pory"
# 1254 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 1255 "data/maps/DewfordTown/scripts.pory"
# 664 "data/maps/DewfordTown/scripts.pory"
# 1256 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 1257 "data/maps/DewfordTown/scripts.pory"
# 665 "data/maps/DewfordTown/scripts.pory"
# 1258 "data/maps/DewfordTown/scripts.pory"
	call Common_ShowEasyChatScreen
# 1259 "data/maps/DewfordTown/scripts.pory"
# 666 "data/maps/DewfordTown/scripts.pory"
# 1260 "data/maps/DewfordTown/scripts.pory"
	lock
# 1261 "data/maps/DewfordTown/scripts.pory"
# 667 "data/maps/DewfordTown/scripts.pory"
# 1262 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1263 "data/maps/DewfordTown/scripts.pory"
# 668 "data/maps/DewfordTown/scripts.pory"
# 1264 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, TRUE
# 1265 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq DewfordTown_EventScript_RejectTrendyPhrase_2
# 1266 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase_1:
# 1267 "data/maps/DewfordTown/scripts.pory"
# 671 "data/maps/DewfordTown/scripts.pory"
# 1268 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, FALSE
# 1269 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq DewfordTown_EventScript_RejectTrendyPhrase_5
# 1270 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase_4:
# 1271 "data/maps/DewfordTown/scripts.pory"
	end
# 1272 "data/maps/DewfordTown/scripts.pory"

# 1273 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase_2:
# 1274 "data/maps/DewfordTown/scripts.pory"
# 669 "data/maps/DewfordTown/scripts.pory"
# 1275 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_GiveNewTrendyPhrase
# 1276 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_RejectTrendyPhrase_1
# 1277 "data/maps/DewfordTown/scripts.pory"

# 1278 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase_5:
# 1279 "data/maps/DewfordTown/scripts.pory"
# 672 "data/maps/DewfordTown/scripts.pory"
# 1280 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_CancelNewTrendyPhrase
# 1281 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_RejectTrendyPhrase_4
# 1282 "data/maps/DewfordTown/scripts.pory"

# 1283 "data/maps/DewfordTown/scripts.pory"

# 1284 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase::
# 1285 "data/maps/DewfordTown/scripts.pory"
# 678 "data/maps/DewfordTown/scripts.pory"
# 1286 "data/maps/DewfordTown/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 1287 "data/maps/DewfordTown/scripts.pory"
# 679 "data/maps/DewfordTown/scripts.pory"
# 1288 "data/maps/DewfordTown/scripts.pory"
	compare VAR_0x8004, FALSE
# 1289 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq DewfordTown_EventScript_GiveNewTrendyPhrase_2
# 1290 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase_1:
# 1291 "data/maps/DewfordTown/scripts.pory"
# 682 "data/maps/DewfordTown/scripts.pory"
# 1292 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
# 1293 "data/maps/DewfordTown/scripts.pory"
# 683 "data/maps/DewfordTown/scripts.pory"
# 1294 "data/maps/DewfordTown/scripts.pory"
	release
# 1295 "data/maps/DewfordTown/scripts.pory"
	end
# 1296 "data/maps/DewfordTown/scripts.pory"

# 1297 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase_2:
# 1298 "data/maps/DewfordTown/scripts.pory"
# 680 "data/maps/DewfordTown/scripts.pory"
# 1299 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_PhraseNotTrendyEnough
# 1300 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_GiveNewTrendyPhrase_1
# 1301 "data/maps/DewfordTown/scripts.pory"

# 1302 "data/maps/DewfordTown/scripts.pory"

# 1303 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelNewTrendyPhrase::
# 1304 "data/maps/DewfordTown/scripts.pory"
# 688 "data/maps/DewfordTown/scripts.pory"
# 1305 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
# 1306 "data/maps/DewfordTown/scripts.pory"
# 689 "data/maps/DewfordTown/scripts.pory"
# 1307 "data/maps/DewfordTown/scripts.pory"
	release
# 1308 "data/maps/DewfordTown/scripts.pory"
	end
# 1309 "data/maps/DewfordTown/scripts.pory"

# 1310 "data/maps/DewfordTown/scripts.pory"

# 1311 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PhraseNotTrendyEnough::
# 1312 "data/maps/DewfordTown/scripts.pory"
# 694 "data/maps/DewfordTown/scripts.pory"
# 1313 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
# 1314 "data/maps/DewfordTown/scripts.pory"
# 695 "data/maps/DewfordTown/scripts.pory"
# 1315 "data/maps/DewfordTown/scripts.pory"
	release
# 1316 "data/maps/DewfordTown/scripts.pory"
	end
# 1317 "data/maps/DewfordTown/scripts.pory"

# 1318 "data/maps/DewfordTown/scripts.pory"

# 1319 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TinyIslandCommunity::
# 1320 "data/maps/DewfordTown/scripts.pory"
# 699 "data/maps/DewfordTown/scripts.pory"
# 1321 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD is a tiny island community.\n"
# 1322 "data/maps/DewfordTown/scripts.pory"
	.string "If something gets trendy here,\l"
# 1323 "data/maps/DewfordTown/scripts.pory"
	.string "everyone picks up on it right away.$"
# 1324 "data/maps/DewfordTown/scripts.pory"

# 1325 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TownSign::
# 1326 "data/maps/DewfordTown/scripts.pory"
# 705 "data/maps/DewfordTown/scripts.pory"
# 1327 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD TOWN\n"
# 1328 "data/maps/DewfordTown/scripts.pory"
	.string "“A tiny island in the blue sea.”$"
# 1329 "data/maps/DewfordTown/scripts.pory"

# 1330 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GymSign::
# 1331 "data/maps/DewfordTown/scripts.pory"
# 710 "data/maps/DewfordTown/scripts.pory"
# 1332 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\n"
# 1333 "data/maps/DewfordTown/scripts.pory"
	.string "LEADER: BRAWLY\l"
# 1334 "data/maps/DewfordTown/scripts.pory"
	.string "“A big wave in fighting!”$"
# 1335 "data/maps/DewfordTown/scripts.pory"

# 1336 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HallSign::
# 1337 "data/maps/DewfordTown/scripts.pory"
# 716 "data/maps/DewfordTown/scripts.pory"
# 1338 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD HALL\n"
# 1339 "data/maps/DewfordTown/scripts.pory"
	.string "“Everyone's information exchange!”$"
# 1340 "data/maps/DewfordTown/scripts.pory"

# 1341 "data/maps/DewfordTown/scripts.pory"
Route104_Text_LandedInDewfordDeliverLetter::
# 1342 "data/maps/DewfordTown/scripts.pory"
# 721 "data/maps/DewfordTown/scripts.pory"
# 1343 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 1344 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD.\p"
# 1345 "data/maps/DewfordTown/scripts.pory"
	.string "I suppose you're off to deliver that\n"
# 1346 "data/maps/DewfordTown/scripts.pory"
	.string "LETTER to, who was it now, STEVEN!$"
# 1347 "data/maps/DewfordTown/scripts.pory"

# 1348 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SetSailBackToPetalburg::
# 1349 "data/maps/DewfordTown/scripts.pory"
# 728 "data/maps/DewfordTown/scripts.pory"
# 1350 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Have you delivered your\n"
# 1351 "data/maps/DewfordTown/scripts.pory"
	.string "LETTER?\p"
# 1352 "data/maps/DewfordTown/scripts.pory"
	.string "Or were you meaning to sail back to\n"
# 1353 "data/maps/DewfordTown/scripts.pory"
	.string "PETALBURG?$"
# 1354 "data/maps/DewfordTown/scripts.pory"

# 1355 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail2::
# 1356 "data/maps/DewfordTown/scripts.pory"
# 735 "data/maps/DewfordTown/scripts.pory"
# 1357 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG it is, then!\p"
# 1358 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 1359 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 1360 "data/maps/DewfordTown/scripts.pory"

# 1361 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GoDeliverIllBeWaiting::
# 1362 "data/maps/DewfordTown/scripts.pory"
# 741 "data/maps/DewfordTown/scripts.pory"
# 1363 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
# 1364 "data/maps/DewfordTown/scripts.pory"
	.string "the LETTER. I'll be waiting.$"
# 1365 "data/maps/DewfordTown/scripts.pory"

# 1366 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineyLandedInDewford::
# 1367 "data/maps/DewfordTown/scripts.pory"
# 746 "data/maps/DewfordTown/scripts.pory"
# 1368 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 1369 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD!\p"
# 1370 "data/maps/DewfordTown/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 1371 "data/maps/DewfordTown/scripts.pory"
	.string "you want to set sail again!$"
# 1372 "data/maps/DewfordTown/scripts.pory"

# 1373 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_WhereAreWeBound::
# 1374 "data/maps/DewfordTown/scripts.pory"
# 753 "data/maps/DewfordTown/scripts.pory"
# 1375 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 1376 "data/maps/DewfordTown/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 1377 "data/maps/DewfordTown/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 1378 "data/maps/DewfordTown/scripts.pory"

# 1379 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail::
# 1380 "data/maps/DewfordTown/scripts.pory"
# 759 "data/maps/DewfordTown/scripts.pory"
# 1381 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG, is it?\p"
# 1382 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 1383 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 1384 "data/maps/DewfordTown/scripts.pory"

# 1385 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SlateportWereSettingSail::
# 1386 "data/maps/DewfordTown/scripts.pory"
# 765 "data/maps/DewfordTown/scripts.pory"
# 1387 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: SLATEPORT, is it?\p"
# 1388 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 1389 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 1390 "data/maps/DewfordTown/scripts.pory"

# 1391 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_JustTellMeWhenYouNeedToSetSail::
# 1392 "data/maps/DewfordTown/scripts.pory"
# 771 "data/maps/DewfordTown/scripts.pory"
# 1393 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\n"
# 1394 "data/maps/DewfordTown/scripts.pory"
	.string "you need to set sail again!$"
# 1395 "data/maps/DewfordTown/scripts.pory"

# 1396 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GettingItchToFish::
# 1397 "data/maps/DewfordTown/scripts.pory"
# 776 "data/maps/DewfordTown/scripts.pory"
# 1398 "data/maps/DewfordTown/scripts.pory"
	.string "This is a renowned fishing spot.\n"
# 1399 "data/maps/DewfordTown/scripts.pory"
	.string "Are you getting the itch to fish?$"
# 1400 "data/maps/DewfordTown/scripts.pory"

# 1401 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GiveYouOneOfMyRods::
# 1402 "data/maps/DewfordTown/scripts.pory"
# 781 "data/maps/DewfordTown/scripts.pory"
# 1403 "data/maps/DewfordTown/scripts.pory"
	.string "I hear you, and I like what\n"
# 1404 "data/maps/DewfordTown/scripts.pory"
	.string "you're saying!\p"
# 1405 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you one of my fishing RODS.$"
# 1406 "data/maps/DewfordTown/scripts.pory"

# 1407 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThrowInFishingAdvice::
# 1408 "data/maps/DewfordTown/scripts.pory"
# 787 "data/maps/DewfordTown/scripts.pory"
# 1409 "data/maps/DewfordTown/scripts.pory"
	.string "And, as an added bonus, I'll even throw\n"
# 1410 "data/maps/DewfordTown/scripts.pory"
	.string "in a little fishing advice!\p"
# 1411 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 1412 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 1413 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 1414 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull on the ROD.\p"
# 1415 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 1416 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 1417 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 1418 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 1419 "data/maps/DewfordTown/scripts.pory"

# 1420 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThatsTooBadThen::
# 1421 "data/maps/DewfordTown/scripts.pory"
# 800 "data/maps/DewfordTown/scripts.pory"
# 1422 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, is that so?\n"
# 1423 "data/maps/DewfordTown/scripts.pory"
	.string "That's too bad, then.$"
# 1424 "data/maps/DewfordTown/scripts.pory"

# 1425 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HowsYourFishing::
# 1426 "data/maps/DewfordTown/scripts.pory"
# 805 "data/maps/DewfordTown/scripts.pory"
# 1427 "data/maps/DewfordTown/scripts.pory"
	.string "Yo!\n"
# 1428 "data/maps/DewfordTown/scripts.pory"
	.string "How's your fishing?$"
# 1429 "data/maps/DewfordTown/scripts.pory"

# 1430 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GreatHaulInSomeBigOnes::
# 1431 "data/maps/DewfordTown/scripts.pory"
# 810 "data/maps/DewfordTown/scripts.pory"
# 1432 "data/maps/DewfordTown/scripts.pory"
	.string "Is that right! That's great!\n"
# 1433 "data/maps/DewfordTown/scripts.pory"
	.string "Haul in some big ones!$"
# 1434 "data/maps/DewfordTown/scripts.pory"

# 1435 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_FishingAdvice::
# 1436 "data/maps/DewfordTown/scripts.pory"
# 815 "data/maps/DewfordTown/scripts.pory"
# 1437 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
# 1438 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you a little fishing advice.\p"
# 1439 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 1440 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 1441 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 1442 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull the ROD.\p"
# 1443 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 1444 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 1445 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 1446 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 1447 "data/maps/DewfordTown/scripts.pory"

# 1448 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XIsTheBiggestHappeningThingRight::
# 1449 "data/maps/DewfordTown/scripts.pory"
# 828 "data/maps/DewfordTown/scripts.pory"
# 1450 "data/maps/DewfordTown/scripts.pory"
	.string "I like what's hip, happening, and trendy.\n"
# 1451 "data/maps/DewfordTown/scripts.pory"
	.string "I'm always checking it out.\p"
# 1452 "data/maps/DewfordTown/scripts.pory"
	.string "Listen, have you heard about this new\n"
# 1453 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”?\p"
# 1454 "data/maps/DewfordTown/scripts.pory"
	.string "That's right!\n"
# 1455 "data/maps/DewfordTown/scripts.pory"
	.string "Of course you know!\p"
# 1456 "data/maps/DewfordTown/scripts.pory"
	.string "I mean, sheesh,\n"
# 1457 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 1458 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hottest thing in cool!\p"
# 1459 "data/maps/DewfordTown/scripts.pory"
	.string "Wherever you're from,\n"
# 1460 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 1461 "data/maps/DewfordTown/scripts.pory"
	.string "is the biggest happening thing, right?$"
# 1462 "data/maps/DewfordTown/scripts.pory"

# 1463 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TellMeWhatsNewAndIn::
# 1464 "data/maps/DewfordTown/scripts.pory"
# 843 "data/maps/DewfordTown/scripts.pory"
# 1465 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 1466 "data/maps/DewfordTown/scripts.pory"
	.string "It's not the hip and happening thing?\p"
# 1467 "data/maps/DewfordTown/scripts.pory"
	.string "Well, hey, you have to tell me,\n"
# 1468 "data/maps/DewfordTown/scripts.pory"
	.string "what's new and what's “in”?$"
# 1469 "data/maps/DewfordTown/scripts.pory"

# 1470 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_OfCourseIKnowAboutThat::
# 1471 "data/maps/DewfordTown/scripts.pory"
# 850 "data/maps/DewfordTown/scripts.pory"
# 1472 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 1473 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”?\p"
# 1474 "data/maps/DewfordTown/scripts.pory"
	.string "… …\p"
# 1475 "data/maps/DewfordTown/scripts.pory"
	.string "…Uh… Yeah! That's right!\n"
# 1476 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, I knew that! Knew it all along!\p"
# 1477 "data/maps/DewfordTown/scripts.pory"
	.string "Of course I know about that!\n"
# 1478 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” right?\p"
# 1479 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, that's it, it's there!\n"
# 1480 "data/maps/DewfordTown/scripts.pory"
	.string "Isn't “{STR_VAR_2}”\l"
# 1481 "data/maps/DewfordTown/scripts.pory"
	.string "the coolest, or what?\p"
# 1482 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hippest thing in hip.\n"
# 1483 "data/maps/DewfordTown/scripts.pory"
	.string "You think I'd not know about it?\p"
# 1484 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\n"
# 1485 "data/maps/DewfordTown/scripts.pory"
	.string "It's, like, so five minutes ago.\p"
# 1486 "data/maps/DewfordTown/scripts.pory"
	.string "Now, “{STR_VAR_2}” is\n"
# 1487 "data/maps/DewfordTown/scripts.pory"
	.string "what's vital and in tune with the times!$"
# 1488 "data/maps/DewfordTown/scripts.pory"

# 1489 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XHuhIThinkYIsCool::
# 1490 "data/maps/DewfordTown/scripts.pory"
# 869 "data/maps/DewfordTown/scripts.pory"
# 1491 "data/maps/DewfordTown/scripts.pory"
	.string "Hmm…\n"
# 1492 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” huh?\p"
# 1493 "data/maps/DewfordTown/scripts.pory"
	.string "But personally, I think\n"
# 1494 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 1495 "data/maps/DewfordTown/scripts.pory"
	.string "is what's real in cool.$"
# 1496 "data/maps/DewfordTown/scripts.pory"

# 1497 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HearOfAnyTrendsComeShareWithMe::
# 1498 "data/maps/DewfordTown/scripts.pory"
# 877 "data/maps/DewfordTown/scripts.pory"
# 1499 "data/maps/DewfordTown/scripts.pory"
	.string "Well, if you hear of any happening new\n"
# 1500 "data/maps/DewfordTown/scripts.pory"
	.string "trends, come share them with me, okay?$"
# 1501 "data/maps/DewfordTown/scripts.pory"

# 1502 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_YeahDefinitionOfInRightNow::
# 1503 "data/maps/DewfordTown/scripts.pory"
# 882 "data/maps/DewfordTown/scripts.pory"
# 1504 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, absolutely right!\p"
# 1505 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}” is the\n"
# 1506 "data/maps/DewfordTown/scripts.pory"
	.string "definition of “in” right now.$"
