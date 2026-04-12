# 1 "data/maps/NavelRock_Bottom/scripts.pory"

# 2 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_MapScripts::
# 3 "data/maps/NavelRock_Bottom/scripts.pory"
# 2 "data/maps/NavelRock_Bottom/scripts.pory"
# 4 "data/maps/NavelRock_Bottom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Bottom_OnTransition
# 5 "data/maps/NavelRock_Bottom/scripts.pory"
# 3 "data/maps/NavelRock_Bottom/scripts.pory"
# 6 "data/maps/NavelRock_Bottom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Bottom_OnResume
# 7 "data/maps/NavelRock_Bottom/scripts.pory"
	.byte 0
# 8 "data/maps/NavelRock_Bottom/scripts.pory"

# 9 "data/maps/NavelRock_Bottom/scripts.pory"

# 10 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_OnTransition::
# 11 "data/maps/NavelRock_Bottom/scripts.pory"
# 7 "data/maps/NavelRock_Bottom/scripts.pory"
# 12 "data/maps/NavelRock_Bottom/scripts.pory"
	goto_if_set FLAG_CAUGHT_LUGIA, NavelRock_Bottom_OnTransition_2
# 13 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_OnTransition_1:
# 14 "data/maps/NavelRock_Bottom/scripts.pory"
# 10 "data/maps/NavelRock_Bottom/scripts.pory"
# 15 "data/maps/NavelRock_Bottom/scripts.pory"
	goto_if_unset FLAG_CAUGHT_LUGIA, NavelRock_Bottom_OnTransition_5
# 16 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_OnTransition_4:
# 17 "data/maps/NavelRock_Bottom/scripts.pory"
	end
# 18 "data/maps/NavelRock_Bottom/scripts.pory"

# 19 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_OnTransition_2:
# 20 "data/maps/NavelRock_Bottom/scripts.pory"
# 8 "data/maps/NavelRock_Bottom/scripts.pory"
# 21 "data/maps/NavelRock_Bottom/scripts.pory"
	call NavelRock_Bottom_EventScript_HideLugia
# 22 "data/maps/NavelRock_Bottom/scripts.pory"
	goto NavelRock_Bottom_OnTransition_1
# 23 "data/maps/NavelRock_Bottom/scripts.pory"

# 24 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_OnTransition_5:
# 25 "data/maps/NavelRock_Bottom/scripts.pory"
# 11 "data/maps/NavelRock_Bottom/scripts.pory"
# 26 "data/maps/NavelRock_Bottom/scripts.pory"
	call NavelRock_Bottom_EventScript_TryShowLugia
# 27 "data/maps/NavelRock_Bottom/scripts.pory"
	goto NavelRock_Bottom_OnTransition_4
# 28 "data/maps/NavelRock_Bottom/scripts.pory"

# 29 "data/maps/NavelRock_Bottom/scripts.pory"

# 30 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_HideLugia::
# 31 "data/maps/NavelRock_Bottom/scripts.pory"
# 17 "data/maps/NavelRock_Bottom/scripts.pory"
# 32 "data/maps/NavelRock_Bottom/scripts.pory"
	setflag FLAG_HIDE_LUGIA
# 33 "data/maps/NavelRock_Bottom/scripts.pory"
	return
# 34 "data/maps/NavelRock_Bottom/scripts.pory"

# 35 "data/maps/NavelRock_Bottom/scripts.pory"

# 36 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_TryShowLugia::
# 37 "data/maps/NavelRock_Bottom/scripts.pory"
# 22 "data/maps/NavelRock_Bottom/scripts.pory"
# 38 "data/maps/NavelRock_Bottom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LUGIA, NavelRock_Bottom_EventScript_TryShowLugia_2
# 39 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_TryShowLugia_1:
# 40 "data/maps/NavelRock_Bottom/scripts.pory"
# 25 "data/maps/NavelRock_Bottom/scripts.pory"
# 41 "data/maps/NavelRock_Bottom/scripts.pory"
	clearflag FLAG_HIDE_LUGIA
# 42 "data/maps/NavelRock_Bottom/scripts.pory"
	return
# 43 "data/maps/NavelRock_Bottom/scripts.pory"

# 44 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_TryShowLugia_2:
# 45 "data/maps/NavelRock_Bottom/scripts.pory"
# 23 "data/maps/NavelRock_Bottom/scripts.pory"
# 46 "data/maps/NavelRock_Bottom/scripts.pory"
	goto Common_EventScript_NopReturn
# 47 "data/maps/NavelRock_Bottom/scripts.pory"
	goto NavelRock_Bottom_EventScript_TryShowLugia_1
# 48 "data/maps/NavelRock_Bottom/scripts.pory"

# 49 "data/maps/NavelRock_Bottom/scripts.pory"

# 50 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_OnResume::
# 51 "data/maps/NavelRock_Bottom/scripts.pory"
# 30 "data/maps/NavelRock_Bottom/scripts.pory"
# 52 "data/maps/NavelRock_Bottom/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, NavelRock_Bottom_OnResume_2
# 53 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_OnResume_1:
# 54 "data/maps/NavelRock_Bottom/scripts.pory"
	end
# 55 "data/maps/NavelRock_Bottom/scripts.pory"

# 56 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_OnResume_2:
# 57 "data/maps/NavelRock_Bottom/scripts.pory"
# 31 "data/maps/NavelRock_Bottom/scripts.pory"
# 58 "data/maps/NavelRock_Bottom/scripts.pory"
	call NavelRock_Bottom_EventScript_TryRemoveLugia
# 59 "data/maps/NavelRock_Bottom/scripts.pory"
	goto NavelRock_Bottom_OnResume_1
# 60 "data/maps/NavelRock_Bottom/scripts.pory"

# 61 "data/maps/NavelRock_Bottom/scripts.pory"

# 62 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_TryRemoveLugia::
# 63 "data/maps/NavelRock_Bottom/scripts.pory"
# 37 "data/maps/NavelRock_Bottom/scripts.pory"
# 64 "data/maps/NavelRock_Bottom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 65 "data/maps/NavelRock_Bottom/scripts.pory"
# 38 "data/maps/NavelRock_Bottom/scripts.pory"
# 66 "data/maps/NavelRock_Bottom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 67 "data/maps/NavelRock_Bottom/scripts.pory"
	goto_if_ne NavelRock_Bottom_EventScript_TryRemoveLugia_2
# 68 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_TryRemoveLugia_1:
# 69 "data/maps/NavelRock_Bottom/scripts.pory"
# 41 "data/maps/NavelRock_Bottom/scripts.pory"
# 70 "data/maps/NavelRock_Bottom/scripts.pory"
	removeobject LOCALID_NAVEL_ROCK_LUGIA
# 71 "data/maps/NavelRock_Bottom/scripts.pory"
	return
# 72 "data/maps/NavelRock_Bottom/scripts.pory"

# 73 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_TryRemoveLugia_2:
# 74 "data/maps/NavelRock_Bottom/scripts.pory"
# 39 "data/maps/NavelRock_Bottom/scripts.pory"
# 75 "data/maps/NavelRock_Bottom/scripts.pory"
	goto Common_EventScript_NopReturn
# 76 "data/maps/NavelRock_Bottom/scripts.pory"
	goto NavelRock_Bottom_EventScript_TryRemoveLugia_1
# 77 "data/maps/NavelRock_Bottom/scripts.pory"

# 78 "data/maps/NavelRock_Bottom/scripts.pory"

# 79 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_Lugia::
# 80 "data/maps/NavelRock_Bottom/scripts.pory"
# 46 "data/maps/NavelRock_Bottom/scripts.pory"
# 81 "data/maps/NavelRock_Bottom/scripts.pory"
	lock
# 82 "data/maps/NavelRock_Bottom/scripts.pory"
# 47 "data/maps/NavelRock_Bottom/scripts.pory"
# 83 "data/maps/NavelRock_Bottom/scripts.pory"
	faceplayer
# 84 "data/maps/NavelRock_Bottom/scripts.pory"
# 48 "data/maps/NavelRock_Bottom/scripts.pory"
# 85 "data/maps/NavelRock_Bottom/scripts.pory"
	waitse
# 86 "data/maps/NavelRock_Bottom/scripts.pory"
# 49 "data/maps/NavelRock_Bottom/scripts.pory"
# 87 "data/maps/NavelRock_Bottom/scripts.pory"
	delay 20
# 88 "data/maps/NavelRock_Bottom/scripts.pory"
# 50 "data/maps/NavelRock_Bottom/scripts.pory"
# 89 "data/maps/NavelRock_Bottom/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 90 "data/maps/NavelRock_Bottom/scripts.pory"
# 51 "data/maps/NavelRock_Bottom/scripts.pory"
# 91 "data/maps/NavelRock_Bottom/scripts.pory"
	setvar VAR_0x8004, 0
# 92 "data/maps/NavelRock_Bottom/scripts.pory"
# 52 "data/maps/NavelRock_Bottom/scripts.pory"
# 93 "data/maps/NavelRock_Bottom/scripts.pory"
	setvar VAR_0x8005, 3
# 94 "data/maps/NavelRock_Bottom/scripts.pory"
# 53 "data/maps/NavelRock_Bottom/scripts.pory"
# 95 "data/maps/NavelRock_Bottom/scripts.pory"
	setvar VAR_0x8006, 4
# 96 "data/maps/NavelRock_Bottom/scripts.pory"
# 54 "data/maps/NavelRock_Bottom/scripts.pory"
# 97 "data/maps/NavelRock_Bottom/scripts.pory"
	setvar VAR_0x8007, 2
# 98 "data/maps/NavelRock_Bottom/scripts.pory"
# 55 "data/maps/NavelRock_Bottom/scripts.pory"
# 99 "data/maps/NavelRock_Bottom/scripts.pory"
	special ShakeCamera
# 100 "data/maps/NavelRock_Bottom/scripts.pory"
# 56 "data/maps/NavelRock_Bottom/scripts.pory"
# 101 "data/maps/NavelRock_Bottom/scripts.pory"
	delay 30
# 102 "data/maps/NavelRock_Bottom/scripts.pory"
# 57 "data/maps/NavelRock_Bottom/scripts.pory"
# 103 "data/maps/NavelRock_Bottom/scripts.pory"
	playse SE_THUNDERSTORM_STOP
# 104 "data/maps/NavelRock_Bottom/scripts.pory"
# 58 "data/maps/NavelRock_Bottom/scripts.pory"
# 105 "data/maps/NavelRock_Bottom/scripts.pory"
	setvar VAR_0x8004, 0
# 106 "data/maps/NavelRock_Bottom/scripts.pory"
# 59 "data/maps/NavelRock_Bottom/scripts.pory"
# 107 "data/maps/NavelRock_Bottom/scripts.pory"
	setvar VAR_0x8005, 3
# 108 "data/maps/NavelRock_Bottom/scripts.pory"
# 60 "data/maps/NavelRock_Bottom/scripts.pory"
# 109 "data/maps/NavelRock_Bottom/scripts.pory"
	setvar VAR_0x8006, 4
# 110 "data/maps/NavelRock_Bottom/scripts.pory"
# 61 "data/maps/NavelRock_Bottom/scripts.pory"
# 111 "data/maps/NavelRock_Bottom/scripts.pory"
	setvar VAR_0x8007, 2
# 112 "data/maps/NavelRock_Bottom/scripts.pory"
# 62 "data/maps/NavelRock_Bottom/scripts.pory"
# 113 "data/maps/NavelRock_Bottom/scripts.pory"
	special ShakeCamera
# 114 "data/maps/NavelRock_Bottom/scripts.pory"
# 63 "data/maps/NavelRock_Bottom/scripts.pory"
# 115 "data/maps/NavelRock_Bottom/scripts.pory"
	delay 30
# 116 "data/maps/NavelRock_Bottom/scripts.pory"
# 64 "data/maps/NavelRock_Bottom/scripts.pory"
# 117 "data/maps/NavelRock_Bottom/scripts.pory"
	delay 50
# 118 "data/maps/NavelRock_Bottom/scripts.pory"
# 65 "data/maps/NavelRock_Bottom/scripts.pory"
# 119 "data/maps/NavelRock_Bottom/scripts.pory"
	waitse
# 120 "data/maps/NavelRock_Bottom/scripts.pory"
# 66 "data/maps/NavelRock_Bottom/scripts.pory"
# 121 "data/maps/NavelRock_Bottom/scripts.pory"
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
# 122 "data/maps/NavelRock_Bottom/scripts.pory"
# 67 "data/maps/NavelRock_Bottom/scripts.pory"
# 123 "data/maps/NavelRock_Bottom/scripts.pory"
	waitmoncry
# 124 "data/maps/NavelRock_Bottom/scripts.pory"
# 68 "data/maps/NavelRock_Bottom/scripts.pory"
# 125 "data/maps/NavelRock_Bottom/scripts.pory"
	delay 20
# 126 "data/maps/NavelRock_Bottom/scripts.pory"
# 69 "data/maps/NavelRock_Bottom/scripts.pory"
# 127 "data/maps/NavelRock_Bottom/scripts.pory"
	seteventmon SPECIES_LUGIA, 70
# 128 "data/maps/NavelRock_Bottom/scripts.pory"
# 70 "data/maps/NavelRock_Bottom/scripts.pory"
# 129 "data/maps/NavelRock_Bottom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 130 "data/maps/NavelRock_Bottom/scripts.pory"
# 71 "data/maps/NavelRock_Bottom/scripts.pory"
# 131 "data/maps/NavelRock_Bottom/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 132 "data/maps/NavelRock_Bottom/scripts.pory"
# 72 "data/maps/NavelRock_Bottom/scripts.pory"
# 133 "data/maps/NavelRock_Bottom/scripts.pory"
	waitstate
# 134 "data/maps/NavelRock_Bottom/scripts.pory"
# 73 "data/maps/NavelRock_Bottom/scripts.pory"
# 135 "data/maps/NavelRock_Bottom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 136 "data/maps/NavelRock_Bottom/scripts.pory"
# 74 "data/maps/NavelRock_Bottom/scripts.pory"
# 137 "data/maps/NavelRock_Bottom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 138 "data/maps/NavelRock_Bottom/scripts.pory"
# 75 "data/maps/NavelRock_Bottom/scripts.pory"
# 139 "data/maps/NavelRock_Bottom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 140 "data/maps/NavelRock_Bottom/scripts.pory"
	goto_if_eq NavelRock_Bottom_EventScript_Lugia_2
# 141 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_Lugia_1:
# 142 "data/maps/NavelRock_Bottom/scripts.pory"
# 78 "data/maps/NavelRock_Bottom/scripts.pory"
# 143 "data/maps/NavelRock_Bottom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 144 "data/maps/NavelRock_Bottom/scripts.pory"
	goto_if_eq NavelRock_Bottom_EventScript_Lugia_5
# 145 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_Lugia_4:
# 146 "data/maps/NavelRock_Bottom/scripts.pory"
# 81 "data/maps/NavelRock_Bottom/scripts.pory"
# 147 "data/maps/NavelRock_Bottom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 148 "data/maps/NavelRock_Bottom/scripts.pory"
	goto_if_eq NavelRock_Bottom_EventScript_Lugia_8
# 149 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_Lugia_7:
# 150 "data/maps/NavelRock_Bottom/scripts.pory"
# 84 "data/maps/NavelRock_Bottom/scripts.pory"
# 151 "data/maps/NavelRock_Bottom/scripts.pory"
	setflag FLAG_CAUGHT_LUGIA
# 152 "data/maps/NavelRock_Bottom/scripts.pory"
# 85 "data/maps/NavelRock_Bottom/scripts.pory"
# 153 "data/maps/NavelRock_Bottom/scripts.pory"
	release
# 154 "data/maps/NavelRock_Bottom/scripts.pory"
	end
# 155 "data/maps/NavelRock_Bottom/scripts.pory"

# 156 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_Lugia_2:
# 157 "data/maps/NavelRock_Bottom/scripts.pory"
# 76 "data/maps/NavelRock_Bottom/scripts.pory"
# 158 "data/maps/NavelRock_Bottom/scripts.pory"
	goto NavelRock_Bottom_EventScript_DefeatedLugia
# 159 "data/maps/NavelRock_Bottom/scripts.pory"
	goto NavelRock_Bottom_EventScript_Lugia_1
# 160 "data/maps/NavelRock_Bottom/scripts.pory"

# 161 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_Lugia_5:
# 162 "data/maps/NavelRock_Bottom/scripts.pory"
# 79 "data/maps/NavelRock_Bottom/scripts.pory"
# 163 "data/maps/NavelRock_Bottom/scripts.pory"
	goto NavelRock_Bottom_EventScript_RanFromLugia
# 164 "data/maps/NavelRock_Bottom/scripts.pory"
	goto NavelRock_Bottom_EventScript_Lugia_4
# 165 "data/maps/NavelRock_Bottom/scripts.pory"

# 166 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_Lugia_8:
# 167 "data/maps/NavelRock_Bottom/scripts.pory"
# 82 "data/maps/NavelRock_Bottom/scripts.pory"
# 168 "data/maps/NavelRock_Bottom/scripts.pory"
	goto NavelRock_Bottom_EventScript_RanFromLugia
# 169 "data/maps/NavelRock_Bottom/scripts.pory"
	goto NavelRock_Bottom_EventScript_Lugia_7
# 170 "data/maps/NavelRock_Bottom/scripts.pory"

# 171 "data/maps/NavelRock_Bottom/scripts.pory"

# 172 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_DefeatedLugia::
# 173 "data/maps/NavelRock_Bottom/scripts.pory"
# 90 "data/maps/NavelRock_Bottom/scripts.pory"
# 174 "data/maps/NavelRock_Bottom/scripts.pory"
	setflag FLAG_DEFEATED_LUGIA
# 175 "data/maps/NavelRock_Bottom/scripts.pory"
# 91 "data/maps/NavelRock_Bottom/scripts.pory"
# 176 "data/maps/NavelRock_Bottom/scripts.pory"
	setvar VAR_0x8004, SPECIES_LUGIA
# 177 "data/maps/NavelRock_Bottom/scripts.pory"
# 92 "data/maps/NavelRock_Bottom/scripts.pory"
# 178 "data/maps/NavelRock_Bottom/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 179 "data/maps/NavelRock_Bottom/scripts.pory"
	end
# 180 "data/maps/NavelRock_Bottom/scripts.pory"

# 181 "data/maps/NavelRock_Bottom/scripts.pory"

# 182 "data/maps/NavelRock_Bottom/scripts.pory"
NavelRock_Bottom_EventScript_RanFromLugia::
# 183 "data/maps/NavelRock_Bottom/scripts.pory"
# 97 "data/maps/NavelRock_Bottom/scripts.pory"
# 184 "data/maps/NavelRock_Bottom/scripts.pory"
	setvar VAR_0x8004, SPECIES_LUGIA
# 185 "data/maps/NavelRock_Bottom/scripts.pory"
# 98 "data/maps/NavelRock_Bottom/scripts.pory"
# 186 "data/maps/NavelRock_Bottom/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 187 "data/maps/NavelRock_Bottom/scripts.pory"
	end
