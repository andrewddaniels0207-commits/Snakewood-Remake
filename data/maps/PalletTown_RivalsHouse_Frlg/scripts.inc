# 1 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Frlg_MapScripts::
# 3 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 2 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 4 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_RivalsHouse_OnTransition
# 5 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 7 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 8 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_OnTransition::
# 9 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 6 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 10 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 11 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_lt PalletTown_RivalsHouse_OnTransition_2
# 12 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_OnTransition_1:
# 13 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 9 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 14 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 15 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_ge PalletTown_RivalsHouse_OnTransition_5
# 16 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_OnTransition_4:
# 17 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 18 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 19 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_OnTransition_2:
# 20 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 7 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 21 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	call PalletTown_RivalsHouse_EventScript_MoveDaisyToTable
# 22 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_OnTransition_1
# 23 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 24 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_OnTransition_5:
# 25 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 10 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 26 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	call PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap
# 27 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_OnTransition_4
# 28 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 29 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 30 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MoveDaisyToTable::
# 31 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 16 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 32 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_DAISY, MOVEMENT_TYPE_FACE_RIGHT
# 33 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 17 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 34 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setobjectxyperm LOCALID_DAISY, 5, 4
# 35 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	return
# 36 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 37 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 38 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap::
# 39 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 22 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 40 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setvar RECEIVED_TOWN_MAP, TRUE
# 41 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	return
# 42 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 43 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 44 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy::
# 45 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 27 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 46 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	lock
# 47 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 28 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 48 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	faceplayer
# 49 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 29 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 50 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	famechecker FAMECHECKER_DAISY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 51 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 30 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 52 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_RivalsHouse_EventScript_Daisy_2
# 53 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy_1:
# 54 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 33 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 55 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare RECEIVED_TOWN_MAP, TRUE
# 56 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_eq PalletTown_RivalsHouse_EventScript_Daisy_5
# 57 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy_4:
# 58 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 36 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 59 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 60 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_eq PalletTown_RivalsHouse_EventScript_Daisy_8
# 61 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy_7:
# 62 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 39 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 63 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 64 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_eq PalletTown_RivalsHouse_EventScript_Daisy_11
# 65 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy_10:
# 66 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 42 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 67 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 68 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_ge PalletTown_RivalsHouse_EventScript_Daisy_14
# 69 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy_13:
# 70 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 45 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 71 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HiBrothersAtLab
# 72 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 46 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 73 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	closemessage
# 74 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 47 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 75 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FaceOriginalDirection
# 76 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 48 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 77 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitmovement 0
# 78 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 49 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 79 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 80 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 81 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 82 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy_2:
# 83 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 31 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 84 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_GroomMon
# 85 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_Daisy_1
# 86 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 87 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy_5:
# 88 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 34 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 89 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest
# 90 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_Daisy_4
# 91 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 92 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy_8:
# 93 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 37 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 94 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_ExplainTownMap
# 95 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_Daisy_7
# 96 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 97 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy_11:
# 98 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 40 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 99 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_GiveTownMap
# 100 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_Daisy_10
# 101 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 102 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy_14:
# 103 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 43 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 104 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_HeardBattledRival
# 105 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_Daisy_13
# 106 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 107 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 108 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_HeardBattledRival::
# 109 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 54 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 110 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HeardYouBattledRival
# 111 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 55 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 112 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 113 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 114 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 115 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 116 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GroomMon::
# 117 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 60 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 118 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_MASSAGE_COOLDOWN_STEP_COUNTER, 500
# 119 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_lt PalletTown_RivalsHouse_EventScript_GroomMon_2
# 120 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GroomMon_1:
# 121 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 63 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 122 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LikeMeToGroomMon, MSGBOX_YESNO
# 123 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 64 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 124 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 125 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_eq PalletTown_RivalsHouse_EventScript_GroomMon_5
# 126 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GroomMon_4:
# 127 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 67 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 128 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_GroomWhichOne
# 129 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 68 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 130 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	special ChoosePartyMon
# 131 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 69 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 132 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitstate
# 133 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 70 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 134 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	lock
# 135 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 71 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 136 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	faceplayer
# 137 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 72 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 138 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
# 139 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_ge PalletTown_RivalsHouse_EventScript_GroomMon_8
# 140 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GroomMon_7:
# 141 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 75 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 142 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 143 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 76 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 144 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
# 145 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_eq PalletTown_RivalsHouse_EventScript_GroomMon_11
# 146 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GroomMon_10:
# 147 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 79 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 148 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LookingNiceInNoTime
# 149 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 80 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 150 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	closemessage
# 151 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 81 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 152 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 153 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 82 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 154 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	playfanfare MUS_HEAL
# 155 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 83 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 156 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitfanfare
# 157 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 84 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 158 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	special DaisyMassageServices
# 159 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 85 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 160 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 161 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 86 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 162 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	special BufferMonNickname
# 163 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 87 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 164 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ThereYouGoAllDone
# 165 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 88 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 166 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 167 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 168 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 169 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GroomMon_2:
# 170 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 61 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 171 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship
# 172 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_GroomMon_1
# 173 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 174 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GroomMon_5:
# 175 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 65 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 176 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 177 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_GroomMon_4
# 178 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 179 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GroomMon_8:
# 180 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 73 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 181 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 182 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_GroomMon_7
# 183 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 184 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GroomMon_11:
# 185 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 77 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 186 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_CantGroomEgg
# 187 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_GroomMon_10
# 188 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 189 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 190 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_CantGroomEgg::
# 191 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 93 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 192 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CantGroomAnEgg
# 193 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 94 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 194 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 195 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 196 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 197 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 198 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_DeclineGrooming::
# 199 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 99 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 200 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontNeedAnyGrooming
# 201 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 100 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 202 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 203 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 204 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 205 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 206 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_RateMonFriendship::
# 207 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 105 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 208 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_MayISeeFirstMon
# 209 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 106 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 210 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 211 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 107 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 212 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	switch VAR_RESULT
# 213 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 108 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 214 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 0, PalletTown_RivalsHouse_EventScript_RateMonFriendship_3
# 215 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 110 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 216 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 1, PalletTown_RivalsHouse_EventScript_RateMonFriendship_4
# 217 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 112 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 218 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 2, PalletTown_RivalsHouse_EventScript_RateMonFriendship_5
# 219 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 114 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 220 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 3, PalletTown_RivalsHouse_EventScript_RateMonFriendship_6
# 221 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 116 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 222 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 4, PalletTown_RivalsHouse_EventScript_RateMonFriendship_7
# 223 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 118 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 224 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 5, PalletTown_RivalsHouse_EventScript_RateMonFriendship_8
# 225 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 120 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 226 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	case 6, PalletTown_RivalsHouse_EventScript_RateMonFriendship_9
# 227 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_RateMonFriendship_1:
# 228 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 229 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 230 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_RateMonFriendship_3:
# 231 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 109 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 232 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipLowest
# 233 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1
# 234 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 235 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_RateMonFriendship_4:
# 236 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 111 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 237 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipLower
# 238 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1
# 239 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 240 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_RateMonFriendship_5:
# 241 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 113 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 242 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipLow
# 243 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1
# 244 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 245 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_RateMonFriendship_6:
# 246 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 115 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 247 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipMid
# 248 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1
# 249 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 250 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_RateMonFriendship_7:
# 251 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 117 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 252 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipHigh
# 253 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1
# 254 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 255 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_RateMonFriendship_8:
# 256 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 119 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 257 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipHigher
# 258 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1
# 259 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 260 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_RateMonFriendship_9:
# 261 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 121 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 262 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_MonFriendshipHighest
# 263 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_RateMonFriendship_1
# 264 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 265 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 266 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipLowest::
# 267 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 127 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 268 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch
# 269 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 128 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 270 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 271 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 272 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 273 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 274 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipLower::
# 275 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 133 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 276 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou
# 277 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 134 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 278 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 279 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 280 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 281 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 282 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipLow::
# 283 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 139 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 284 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet
# 285 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 140 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 286 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 287 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 288 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 289 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 290 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipMid::
# 291 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 145 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 292 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsWarmingUpToYou
# 293 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 146 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 294 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 295 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 296 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 297 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 298 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipHigh::
# 299 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 151 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 300 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsQuiteFriendly
# 301 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 152 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 302 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 303 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 304 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 305 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 306 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipHigher::
# 307 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 157 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 308 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItLooksVeryHappy
# 309 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 158 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 310 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 311 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 312 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 313 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 314 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipHighest::
# 315 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 163 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 316 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CouldntLoveYouMore
# 317 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 164 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 318 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 319 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 320 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 321 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 322 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest::
# 323 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 169 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 324 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_PleaseGiveMonsRest
# 325 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 170 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 326 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 327 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 328 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 329 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 330 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GiveTownMap::
# 331 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 175 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 332 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp
# 333 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 176 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 334 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	closemessage
# 335 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 177 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 336 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	checkitemspace ITEM_TOWN_MAP
# 337 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 178 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 338 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 339 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto_if_eq PalletTown_RivalsHouse_EventScript_GiveTownMap_2
# 340 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GiveTownMap_1:
# 341 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 181 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 342 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_WalkInPlaceFasterRight
# 343 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 182 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 344 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitmovement 0
# 345 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 183 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 346 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	removeobject LOCALID_TOWN_MAP
# 347 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 184 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 348 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 349 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 185 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 350 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	delay 15
# 351 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 186 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 352 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FacePlayer
# 353 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 187 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 354 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	waitmovement 0
# 355 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 188 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 356 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	delay 12
# 357 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 189 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 358 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	giveitem_msg PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy, ITEM_TOWN_MAP, 1, MUS_RG_OBTAIN_KEY_ITEM
# 359 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 190 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 360 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 361 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 362 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 363 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_GiveTownMap_2:
# 364 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 179 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 365 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_NoRoomForTownMap
# 366 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	goto PalletTown_RivalsHouse_EventScript_GiveTownMap_1
# 367 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 368 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 369 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_NoRoomForTownMap::
# 370 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 195 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 371 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontHaveSpaceForThis
# 372 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 196 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 373 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 374 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 375 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 376 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 377 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_ExplainTownMap::
# 378 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 201 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 379 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ExplainTownMap
# 380 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 202 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 381 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	release
# 382 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 383 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 384 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 385 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_TownMap::
# 386 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 207 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 387 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsBigMapOfKanto, MSGBOX_NPC
# 388 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 389 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 390 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 391 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Bookshelf::
# 392 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 212 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 393 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks, MSGBOX_SIGN
# 394 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 395 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 396 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 397 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_EventScript_Picture::
# 398 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 217 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 399 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy, MSGBOX_SIGN
# 400 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	end
# 401 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 402 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 403 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_HiBrothersAtLab::
# 404 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 221 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 405 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Hi, {PLAYER}!\p"
# 406 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "My brother, {RIVAL}, is out at\n"
# 407 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Grandpa's LAB.$"
# 408 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 409 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_HeardYouBattledRival::
# 410 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 227 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 411 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: {PLAYER}, I heard you had\n"
# 412 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "a battle against {RIVAL}.\p"
# 413 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "I wish I'd seen that!$"
# 414 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 415 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp::
# 416 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 233 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 417 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Grandpa asked you to run an\n"
# 418 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "errand?\p"
# 419 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Gee, that's lazy of him.\n"
# 420 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Here, this will help you.$"
# 421 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 422 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy::
# 423 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 240 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 424 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{PLAYER} received a TOWN MAP\n"
# 425 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "from DAISY.$"
# 426 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 427 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_DontHaveSpaceForThis::
# 428 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 245 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 429 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "You don't have space for this in\n"
# 430 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "your BAG.$"
# 431 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 432 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ExplainTownMap::
# 433 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 250 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 434 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "You can use the TOWN MAP to find\n"
# 435 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "out where you are, or check the\l"
# 436 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "names of places.$"
# 437 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 438 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_PleaseGiveMonsRest::
# 439 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 256 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 440 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Just like people, POKéMON\n"
# 441 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "are living things.\p"
# 442 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "When they get tired, please give\n"
# 443 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "them a rest.$"
# 444 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 445 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ItsBigMapOfKanto::
# 446 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 263 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 447 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's a big map of the KANTO region.\n"
# 448 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Now this would be useful!$"
# 449 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 450 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks::
# 451 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 268 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 452 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "The shelves are crammed full of\n"
# 453 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "books on POKéMON.$"
# 454 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 455 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_LikeMeToGroomMon::
# 456 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 273 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 457 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Hi, {PLAYER}!\n"
# 458 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Good timing.\p"
# 459 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "I'm about to have some tea.\n"
# 460 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Would you like to join me?\p"
# 461 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Oh, but look.\n"
# 462 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Your POKéMON are a little dirty.\p"
# 463 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Would you like me to groom one?$"
# 464 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 465 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_DontNeedAnyGrooming::
# 466 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 283 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 467 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "You don't need any grooming done?\n"
# 468 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Okay, we'll just have tea.$"
# 469 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 470 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_GroomWhichOne::
# 471 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 288 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 472 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Which one should I groom?$"
# 473 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 474 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_LookingNiceInNoTime::
# 475 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 292 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 476 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Okay, I'll get it looking\n"
# 477 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "nice in no time.$"
# 478 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 479 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ThereYouGoAllDone::
# 480 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 297 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 481 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{COLOR DARK_GRAY}{STR_VAR_1} looks dreamily content…\p"
# 482 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{COLOR RED}DAISY: There you go! All done.\n"
# 483 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{STR_VAR_1} looks dreamily content…\p"
# 484 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{FONT_FEMALE}DAISY: There you go! All done.\n"
# 485 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "See? Doesn't it look nice?\p"
# 486 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Giggle…\n"
# 487 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's such a cute POKéMON.$"
# 488 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 489 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_CantGroomAnEgg::
# 490 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 307 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 491 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Oh, sorry. I honestly can't\n"
# 492 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "groom an EGG.$"
# 493 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 494 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_MayISeeFirstMon::
# 495 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 312 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 496 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "DAISY: Your POKéMON grow to love\n"
# 497 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "you if you raise them with love.\p"
# 498 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "For example, {PLAYER}, may I see\n"
# 499 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "your first POKéMON?$"
# 500 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 501 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_CouldntLoveYouMore::
# 502 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 319 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 503 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It couldn't possibly love you\n"
# 504 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "any more than it does now.\p"
# 505 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Your POKéMON is happy beyond\n"
# 506 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "words.$"
# 507 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 508 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ItLooksVeryHappy::
# 509 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 326 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 510 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It looks very happy.\p"
# 511 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "I wish {RIVAL} could see this and\n"
# 512 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "learn something from it.$"
# 513 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 514 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ItsQuiteFriendly::
# 515 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 332 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 516 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's quite friendly with you.\n"
# 517 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Keep being good to it!$"
# 518 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 519 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_ItsWarmingUpToYou::
# 520 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 337 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 521 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's warming up to you.\n"
# 522 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Trust must be growing between you.$"
# 523 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 524 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet::
# 525 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 342 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 526 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "It's not quite familiar with you\n"
# 527 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "yet.\p"
# 528 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "POKéMON are all quite wary when\n"
# 529 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "you first get them.$"
# 530 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 531 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou::
# 532 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 349 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 533 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "{PLAYER}, I don't like the way it\n"
# 534 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "glares at you.\p"
# 535 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Could you try being a little nicer\n"
# 536 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "to it?$"
# 537 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 538 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch::
# 539 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 356 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 540 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "…Um, it's not easy for me to say\n"
# 541 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "this, but…\p"
# 542 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "Is there some reason why your\n"
# 543 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "POKéMON would hate you so much?$"
# 544 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"

# 545 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy::
# 546 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 363 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
# 547 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "“The lovely and sweet\n"
# 548 "data/maps/PalletTown_RivalsHouse_Frlg/scripts.pory"
	.string "CLEFAIRY”$"
