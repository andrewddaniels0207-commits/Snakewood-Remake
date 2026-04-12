# 1 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 2 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MapScripts::
# 3 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 5 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 6 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_ProfCozmo::
# 7 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 4 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 8 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 9 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 5 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 10 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 11 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 6 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 12 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_ProfCozmo_2
# 13 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_ProfCozmo_1:
# 14 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 9 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 15 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkitem ITEM_METEORITE
# 16 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 10 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 17 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 18 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq FallarborTown_CozmosHouse_EventScript_ProfCozmo_5
# 19 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_ProfCozmo_4:
# 20 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 13 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 21 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 22 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 14 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 23 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 24 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 25 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 26 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_ProfCozmo_2:
# 27 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 7 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 28 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_GaveMeteorite
# 29 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_ProfCozmo_1
# 30 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 31 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_ProfCozmo_5:
# 32 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 11 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 33 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite
# 34 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_ProfCozmo_4
# 35 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 36 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 37 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite::
# 38 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 19 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 39 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_2
# 40 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_1:
# 41 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 22 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 42 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_5
# 43 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_4:
# 44 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 25 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 45 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, NO
# 46 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_8
# 47 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_7:
# 48 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 28 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 49 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
# 50 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 29 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 51 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	giveitem ITEM_TM_RETURN
# 52 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 30 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 53 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 54 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_11
# 55 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_10:
# 56 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 33 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 57 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_0x8004, ITEM_METEORITE
# 58 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 34 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 59 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 60 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 35 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 61 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_RECEIVED_TM_RETURN
# 62 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 36 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 63 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
# 64 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 37 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 65 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 66 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 67 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 68 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_2:
# 69 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 20 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 70 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
# 71 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_1
# 72 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 73 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_5:
# 74 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 23 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 75 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call FallarborTown_CozmosHouse_EventScript_AskForMeteorite
# 76 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_4
# 77 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 78 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_8:
# 79 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 26 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 80 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite
# 81 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_7
# 82 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 83 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_11:
# 84 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 31 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 85 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 86 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite_10
# 87 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 88 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 89 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_NoticeMeteorite::
# 90 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 42 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 91 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 92 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 43 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 93 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
# 94 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	return
# 95 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 96 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 97 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_AskForMeteorite::
# 98 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 48 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 99 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
# 100 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	return
# 101 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 102 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 103 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite::
# 104 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 53 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 105 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 106 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 54 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 107 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
# 108 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 55 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 109 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 110 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 111 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 112 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 113 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_GaveMeteorite::
# 114 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 60 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 115 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
# 116 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 61 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 117 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 118 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 119 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 120 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 121 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife::
# 122 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 66 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 123 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 124 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 67 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 125 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 126 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 68 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 127 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_CozmosWife_2
# 128 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife_1:
# 129 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 71 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 130 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmosWife_5
# 131 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife_4:
# 132 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 74 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 133 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
# 134 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 75 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 135 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 136 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 137 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 138 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife_2:
# 139 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 69 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 140 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
# 141 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_CozmosWife_1
# 142 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 143 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife_5:
# 144 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 72 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 145 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_CozmoIsSad
# 146 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto FallarborTown_CozmosHouse_EventScript_CozmosWife_4
# 147 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 148 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 149 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
# 150 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 80 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 151 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
# 152 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 81 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 153 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 154 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 155 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 156 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 157 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
# 158 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 86 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 159 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
# 160 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 87 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 161 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 162 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 163 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 164 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 165 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow::
# 166 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 91 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 167 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Oh…\n"
# 168 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I never should have let myself be\l"
# 169 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "conned into telling TEAM MAGMA where\l"
# 170 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "you can find METEORITES…\p"
# 171 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "That METEORITE from METEOR FALLS…\n"
# 172 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "It's never going to be mine now…$"
# 173 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 174 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt::
# 175 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 100 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 176 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Oh!\n"
# 177 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Hah?\p"
# 178 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "That item…\p"
# 179 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Could it be?\p"
# 180 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Is it the METEORITE that TEAM MAGMA\n"
# 181 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "took from METEOR FALLS?\p"
# 182 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Please, may I have it?\p"
# 183 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I'm not asking for it for free.\n"
# 184 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "How about in exchange for this TM?$"
# 185 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 186 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_PleaseUseThisTM::
# 187 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 112 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 188 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: This TM, it represents\n"
# 189 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "my feeling of gratitude.\l"
# 190 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Please use it!$"
# 191 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 192 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch::
# 193 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 118 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 194 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Oh, I can't believe it.\n"
# 195 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "This is really, really great!\p"
# 196 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "This is really going to help my research!$"
# 197 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 198 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CrushedWithDisappointment::
# 199 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 124 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 200 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Oh, but…\n"
# 201 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I'm crushed with disappointment…$"
# 202 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 203 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MayIHaveMeteorite::
# 204 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 129 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 205 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Please, may I have that\n"
# 206 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "METEORITE?\p"
# 207 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I'm not asking for it for free.\n"
# 208 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "How about in exchange for this TM?$"
# 209 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 210 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls::
# 211 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 136 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 212 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO went off to METEOR FALLS\n"
# 213 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "on ROUTE 114 with some people from\l"
# 214 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "TEAM MAGMA.$"
# 215 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 216 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_FeelSorryForCozmo::
# 217 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 142 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 218 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Poor PROF. COZMO…\n"
# 219 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "He's so depressed… I feel sorry for him.$"
# 220 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 221 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoIsSoHappy::
# 222 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 147 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
# 223 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Look at PROF. COZMO…\n"
# 224 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "He's so happy! I think it's cute.$"
