# 1 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_Frlg_MapScripts::
# 3 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 2 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 4 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CeruleanCave_B1F_OnResume
# 5 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 3 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 6 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCave_B1F_OnTransition
# 7 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	.byte 0
# 8 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 9 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 10 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_OnResume::
# 11 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 7 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 12 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, CeruleanCave_B1F_OnResume_2
# 13 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_OnResume_1:
# 14 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	end
# 15 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 16 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_OnResume_2:
# 17 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 8 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 18 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	call CeruleanCave_B1F_EventScript_TryRemoveMewtwo
# 19 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto CeruleanCave_B1F_OnResume_1
# 20 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 21 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 22 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_TryRemoveMewtwo::
# 23 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 14 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 24 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 25 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 15 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 26 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 27 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_ne CeruleanCave_B1F_EventScript_TryRemoveMewtwo_2
# 28 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_TryRemoveMewtwo_1:
# 29 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 18 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 31 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	return
# 32 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 33 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_TryRemoveMewtwo_2:
# 34 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 16 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 35 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto Common_EventScript_NopReturn
# 36 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto CeruleanCave_B1F_EventScript_TryRemoveMewtwo_1
# 37 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 38 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 39 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_OnTransition::
# 40 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 23 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 41 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_unset FLAG_FOUGHT_MEWTWO, CeruleanCave_B1F_OnTransition_2
# 42 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_OnTransition_1:
# 43 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	end
# 44 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 45 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_OnTransition_2:
# 46 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 24 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 47 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	call CeruleanCave_B1F_EventScript_ShowMewtwo
# 48 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto CeruleanCave_B1F_OnTransition_1
# 49 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 50 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 51 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_ShowMewtwo::
# 52 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 53 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_MEWTWO
# 54 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	return
# 55 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 56 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 57 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_Mewtwo::
# 58 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 35 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 59 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	lock
# 60 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 36 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 61 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	faceplayer
# 62 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 37 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 63 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitse
# 64 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 38 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 65 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 66 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 39 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 67 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	message CeruleanCave_B1F_Text_Mew
# 68 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 40 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 69 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitmessage
# 70 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 41 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 71 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitmoncry
# 72 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 42 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 73 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	delay 20
# 74 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 43 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 75 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 76 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 44 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 77 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitbuttonpress
# 78 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 45 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 79 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setwildbattle SPECIES_MEWTWO, 70
# 80 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 46 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 81 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 82 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 47 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 83 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 84 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 48 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 85 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	waitstate
# 86 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 49 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 87 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 88 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 50 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 89 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 90 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 51 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 91 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 92 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_eq CeruleanCave_B1F_EventScript_Mewtwo_2
# 93 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_Mewtwo_1:
# 94 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 54 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 95 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 96 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_eq CeruleanCave_B1F_EventScript_Mewtwo_5
# 97 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_Mewtwo_4:
# 98 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 57 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 99 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 100 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto_if_eq CeruleanCave_B1F_EventScript_Mewtwo_8
# 101 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_Mewtwo_7:
# 102 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 60 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 103 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MEWTWO
# 104 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 61 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 105 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	release
# 106 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	end
# 107 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 108 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_Mewtwo_2:
# 109 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 52 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 110 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto CeruleanCave_B1F_EventScript_DefeatedMewtwo
# 111 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto CeruleanCave_B1F_EventScript_Mewtwo_1
# 112 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 113 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_Mewtwo_5:
# 114 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 55 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 115 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto CeruleanCave_B1F_EventScript_RanFromMewtwo
# 116 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto CeruleanCave_B1F_EventScript_Mewtwo_4
# 117 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 118 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_Mewtwo_8:
# 119 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 58 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 120 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto CeruleanCave_B1F_EventScript_RanFromMewtwo
# 121 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto CeruleanCave_B1F_EventScript_Mewtwo_7
# 122 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 123 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 124 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_DefeatedMewtwo::
# 125 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 66 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 126 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setflag FLAG_FOUGHT_MEWTWO
# 127 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 67 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 128 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto EventScript_RemoveStaticMon
# 129 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	end
# 130 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 131 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 132 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_EventScript_RanFromMewtwo::
# 133 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 72 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 134 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEWTWO
# 135 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 73 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 136 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	goto EventScript_MonFlewAway
# 137 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	end
# 138 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 139 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"

# 140 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
CeruleanCave_B1F_Text_Mew::
# 141 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 77 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
# 142 "data/maps/CeruleanCave_B1F_Frlg/scripts.pory"
	.string "Mew!$"
