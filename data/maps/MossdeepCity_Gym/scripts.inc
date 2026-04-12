# 1 "data/maps/MossdeepCity_Gym/scripts.pory"

# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MapScripts::
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
# 5 "data/maps/MossdeepCity_Gym/scripts.pory"
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
# 6 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_OnLoad
# 7 "data/maps/MossdeepCity_Gym/scripts.pory"
	.byte 0
# 8 "data/maps/MossdeepCity_Gym/scripts.pory"

# 9 "data/maps/MossdeepCity_Gym/scripts.pory"

# 10 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnTransition::
# 11 "data/maps/MossdeepCity_Gym/scripts.pory"
# 7 "data/maps/MossdeepCity_Gym/scripts.pory"
# 12 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 13 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_Gym/scripts.pory"

# 15 "data/maps/MossdeepCity_Gym/scripts.pory"

# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnLoad::
# 17 "data/maps/MossdeepCity_Gym/scripts.pory"
# 12 "data/maps/MossdeepCity_Gym/scripts.pory"
# 18 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_OnLoad_2
# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnLoad_1:
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
# 15 "data/maps/MossdeepCity_Gym/scripts.pory"
# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 23 "data/maps/MossdeepCity_Gym/scripts.pory"

# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnLoad_2:
# 25 "data/maps/MossdeepCity_Gym/scripts.pory"
# 13 "data/maps/MossdeepCity_Gym/scripts.pory"
# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_SetSwitch1Metatiles
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_OnLoad_1
# 28 "data/maps/MossdeepCity_Gym/scripts.pory"

# 29 "data/maps/MossdeepCity_Gym/scripts.pory"

# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch2::
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_CheckSwitch2_2
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch2_1:
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"
# 23 "data/maps/MossdeepCity_Gym/scripts.pory"
# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"

# 38 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch2_2:
# 39 "data/maps/MossdeepCity_Gym/scripts.pory"
# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2_1
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"

# 43 "data/maps/MossdeepCity_Gym/scripts.pory"

# 44 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch3::
# 45 "data/maps/MossdeepCity_Gym/scripts.pory"
# 28 "data/maps/MossdeepCity_Gym/scripts.pory"
# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_CheckSwitch3_2
# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch3_1:
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 51 "data/maps/MossdeepCity_Gym/scripts.pory"

# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch3_2:
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
# 55 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3_1
# 56 "data/maps/MossdeepCity_Gym/scripts.pory"

# 57 "data/maps/MossdeepCity_Gym/scripts.pory"

# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch4::
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_CheckSwitch4_2
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch4_1:
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"

# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch4_2:
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4_1
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"

# 69 "data/maps/MossdeepCity_Gym/scripts.pory"

# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles::
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
# 45 "data/maps/MossdeepCity_Gym/scripts.pory"
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"

# 79 "data/maps/MossdeepCity_Gym/scripts.pory"

# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch2Metatiles::
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
# 51 "data/maps/MossdeepCity_Gym/scripts.pory"
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"

# 89 "data/maps/MossdeepCity_Gym/scripts.pory"

# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch3Metatiles::
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"

# 99 "data/maps/MossdeepCity_Gym/scripts.pory"

# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch4Metatiles::
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"

# 107 "data/maps/MossdeepCity_Gym/scripts.pory"

# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza::
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_2
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza_1:
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_TateAndLiza_5
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza_4:
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"

# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza_2:
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematch
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLiza_1
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"

# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza_5:
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GiveCalmMind2
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLiza_4
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"

# 136 "data/maps/MossdeepCity_Gym/scripts.pory"

# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_UNKNOWN_0x393
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 1
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"

# 198 "data/maps/MossdeepCity_Gym/scripts.pory"

# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2::
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq MossdeepCity_Gym_EventScript_GiveCalmMind2_2
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2_1:
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"

# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2_2:
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GiveCalmMind2_1
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"

# 219 "data/maps/MossdeepCity_Gym/scripts.pory"

# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind::
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq MossdeepCity_Gym_EventScript_GiveCalmMind_2
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind_1:
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_CALM_MIND
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"

# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind_2:
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto Common_EventScript_BagIsFull
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GiveCalmMind_1
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"

# 238 "data/maps/MossdeepCity_Gym/scripts.pory"

# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"

# 246 "data/maps/MossdeepCity_Gym/scripts.pory"

# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1::
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_Switch1_2
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1_1:
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"

# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1_2:
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ClearSwitch1
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_Switch1_1
# 271 "data/maps/MossdeepCity_Gym/scripts.pory"

# 272 "data/maps/MossdeepCity_Gym/scripts.pory"

# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"

# 282 "data/maps/MossdeepCity_Gym/scripts.pory"

# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1::
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"

# 298 "data/maps/MossdeepCity_Gym/scripts.pory"

# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2::
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_Switch2_2
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2_1:
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"

# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2_2:
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ClearSwitch2
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_Switch2_1
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"

# 324 "data/maps/MossdeepCity_Gym/scripts.pory"

# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2::
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"

# 340 "data/maps/MossdeepCity_Gym/scripts.pory"

# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3::
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_Switch3_2
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3_1:
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"

# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3_2:
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ClearSwitch3
# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_Switch3_1
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"

# 366 "data/maps/MossdeepCity_Gym/scripts.pory"

# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3::
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"

# 382 "data/maps/MossdeepCity_Gym/scripts.pory"

# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4::
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_Switch4_2
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4_1:
# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"

# 403 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4_2:
# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_ClearSwitch4
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_Switch4_1
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"

# 408 "data/maps/MossdeepCity_Gym/scripts.pory"

# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4::
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"

# 424 "data/maps/MossdeepCity_Gym/scripts.pory"

# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance::
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"

# 436 "data/maps/MossdeepCity_Gym/scripts.pory"

# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston::
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"

# 444 "data/maps/MossdeepCity_Gym/scripts.pory"

# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil::
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"

# 452 "data/maps/MossdeepCity_Gym/scripts.pory"

# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake::
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"

# 460 "data/maps/MossdeepCity_Gym/scripts.pory"

# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah::
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 467 "data/maps/MossdeepCity_Gym/scripts.pory"

# 468 "data/maps/MossdeepCity_Gym/scripts.pory"

# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha::
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"

# 476 "data/maps/MossdeepCity_Gym/scripts.pory"

# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura::
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"

# 484 "data/maps/MossdeepCity_Gym/scripts.pory"

# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia::
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 491 "data/maps/MossdeepCity_Gym/scripts.pory"

# 492 "data/maps/MossdeepCity_Gym/scripts.pory"

# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate::
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"

# 500 "data/maps/MossdeepCity_Gym/scripts.pory"

# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey::
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"

# 508 "data/maps/MossdeepCity_Gym/scripts.pory"

# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford::
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 515 "data/maps/MossdeepCity_Gym/scripts.pory"

# 516 "data/maps/MossdeepCity_Gym/scripts.pory"

# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas::
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
# 521 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 522 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"

# 524 "data/maps/MossdeepCity_Gym/scripts.pory"

# 525 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen::
# 526 "data/maps/MossdeepCity_Gym/scripts.pory"
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 531 "data/maps/MossdeepCity_Gym/scripts.pory"

# 532 "data/maps/MossdeepCity_Gym/scripts.pory"

# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide::
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 536 "data/maps/MossdeepCity_Gym/scripts.pory"
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"
# 539 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuide_2
# 540 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide_1:
# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
# 544 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"

# 547 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide_2:
# 548 "data/maps/MossdeepCity_Gym/scripts.pory"
# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymGuide_1
# 551 "data/maps/MossdeepCity_Gym/scripts.pory"

# 552 "data/maps/MossdeepCity_Gym/scripts.pory"

# 553 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory::
# 554 "data/maps/MossdeepCity_Gym/scripts.pory"
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"
# 555 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 556 "data/maps/MossdeepCity_Gym/scripts.pory"
# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
# 557 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 558 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"

# 560 "data/maps/MossdeepCity_Gym/scripts.pory"

# 561 "data/maps/MossdeepCity_Gym/scripts.pory"
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
# 563 "data/maps/MossdeepCity_Gym/scripts.pory"
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
# 564 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
# 566 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 567 "data/maps/MossdeepCity_Gym/scripts.pory"
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
# 568 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 569 "data/maps/MossdeepCity_Gym/scripts.pory"

# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue::
# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_LeftGymStatue_2
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue_1:
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"
# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"

# 580 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue_2:
# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatueCertified
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_LeftGymStatue_1
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"

# 585 "data/maps/MossdeepCity_Gym/scripts.pory"

# 586 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue::
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 589 "data/maps/MossdeepCity_Gym/scripts.pory"
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
# 590 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_RightGymStatue_2
# 591 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue_1:
# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"

# 596 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue_2:
# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatueCertified
# 599 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_RightGymStatue_1
# 600 "data/maps/MossdeepCity_Gym/scripts.pory"

# 601 "data/maps/MossdeepCity_Gym/scripts.pory"

# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified::
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 605 "data/maps/MossdeepCity_Gym/scripts.pory"
# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 608 "data/maps/MossdeepCity_Gym/scripts.pory"

# 609 "data/maps/MossdeepCity_Gym/scripts.pory"

# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue::
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"
# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 613 "data/maps/MossdeepCity_Gym/scripts.pory"
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
# 614 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"

# 617 "data/maps/MossdeepCity_Gym/scripts.pory"

# 618 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch::
# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 625 "data/maps/MossdeepCity_Gym/scripts.pory"
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"
# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"
# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
# 628 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 629 "data/maps/MossdeepCity_Gym/scripts.pory"
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
# 630 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 633 "data/maps/MossdeepCity_Gym/scripts.pory"
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 635 "data/maps/MossdeepCity_Gym/scripts.pory"
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"
# 636 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 638 "data/maps/MossdeepCity_Gym/scripts.pory"

# 639 "data/maps/MossdeepCity_Gym/scripts.pory"

# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch::
# 641 "data/maps/MossdeepCity_Gym/scripts.pory"
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 643 "data/maps/MossdeepCity_Gym/scripts.pory"
# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
# 644 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 647 "data/maps/MossdeepCity_Gym/scripts.pory"
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
# 650 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 651 "data/maps/MossdeepCity_Gym/scripts.pory"
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"
# 652 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 653 "data/maps/MossdeepCity_Gym/scripts.pory"
# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
# 654 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 655 "data/maps/MossdeepCity_Gym/scripts.pory"
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
# 656 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 657 "data/maps/MossdeepCity_Gym/scripts.pory"
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
# 658 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"

# 661 "data/maps/MossdeepCity_Gym/scripts.pory"

# 662 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch::
# 663 "data/maps/MossdeepCity_Gym/scripts.pory"
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
# 664 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 665 "data/maps/MossdeepCity_Gym/scripts.pory"
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
# 666 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 667 "data/maps/MossdeepCity_Gym/scripts.pory"
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"
# 668 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 669 "data/maps/MossdeepCity_Gym/scripts.pory"
# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
# 670 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 671 "data/maps/MossdeepCity_Gym/scripts.pory"
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
# 672 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 673 "data/maps/MossdeepCity_Gym/scripts.pory"
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
# 674 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 675 "data/maps/MossdeepCity_Gym/scripts.pory"
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
# 676 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 677 "data/maps/MossdeepCity_Gym/scripts.pory"
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"
# 678 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 679 "data/maps/MossdeepCity_Gym/scripts.pory"
# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
# 680 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 681 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 682 "data/maps/MossdeepCity_Gym/scripts.pory"

# 683 "data/maps/MossdeepCity_Gym/scripts.pory"

# 684 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
# 685 "data/maps/MossdeepCity_Gym/scripts.pory"
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
# 686 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 687 "data/maps/MossdeepCity_Gym/scripts.pory"
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
# 688 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 689 "data/maps/MossdeepCity_Gym/scripts.pory"
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"
# 690 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 691 "data/maps/MossdeepCity_Gym/scripts.pory"
# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
# 692 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 693 "data/maps/MossdeepCity_Gym/scripts.pory"
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
# 694 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 695 "data/maps/MossdeepCity_Gym/scripts.pory"
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
# 696 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 697 "data/maps/MossdeepCity_Gym/scripts.pory"
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
# 698 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 699 "data/maps/MossdeepCity_Gym/scripts.pory"
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"
# 700 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 701 "data/maps/MossdeepCity_Gym/scripts.pory"
# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
# 702 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 703 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 704 "data/maps/MossdeepCity_Gym/scripts.pory"

# 705 "data/maps/MossdeepCity_Gym/scripts.pory"

# 706 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch::
# 707 "data/maps/MossdeepCity_Gym/scripts.pory"
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"
# 708 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 709 "data/maps/MossdeepCity_Gym/scripts.pory"
# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
# 710 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 711 "data/maps/MossdeepCity_Gym/scripts.pory"
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
# 712 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 713 "data/maps/MossdeepCity_Gym/scripts.pory"
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
# 714 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 715 "data/maps/MossdeepCity_Gym/scripts.pory"
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"
# 716 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 717 "data/maps/MossdeepCity_Gym/scripts.pory"
# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
# 718 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 719 "data/maps/MossdeepCity_Gym/scripts.pory"
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"
# 720 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 721 "data/maps/MossdeepCity_Gym/scripts.pory"
# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
# 722 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 723 "data/maps/MossdeepCity_Gym/scripts.pory"
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
# 724 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 725 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 726 "data/maps/MossdeepCity_Gym/scripts.pory"

# 727 "data/maps/MossdeepCity_Gym/scripts.pory"

# 728 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice::
# 729 "data/maps/MossdeepCity_Gym/scripts.pory"
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"
# 730 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-bound\n"
# 731 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 732 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The GYM LEADERS here use\n"
# 733 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "PSYCHIC-type POKéMON.\p"
# 734 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 735 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "FIGHTING- or POISON-type POKéMON,\l"
# 736 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 737 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 738 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 739 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 740 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 741 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON. Go for it!$"
# 742 "data/maps/MossdeepCity_Gym/scripts.pory"

# 743 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory::
# 744 "data/maps/MossdeepCity_Gym/scripts.pory"
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
# 745 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 746 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great TRAINER!$"
# 747 "data/maps/MossdeepCity_Gym/scripts.pory"

# 748 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro::
# 749 "data/maps/MossdeepCity_Gym/scripts.pory"
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
# 750 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 751 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 752 "data/maps/MossdeepCity_Gym/scripts.pory"

# 753 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat::
# 754 "data/maps/MossdeepCity_Gym/scripts.pory"
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
# 755 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 756 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 757 "data/maps/MossdeepCity_Gym/scripts.pory"

# 758 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle::
# 759 "data/maps/MossdeepCity_Gym/scripts.pory"
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
# 760 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 761 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 762 "data/maps/MossdeepCity_Gym/scripts.pory"

# 763 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro::
# 764 "data/maps/MossdeepCity_Gym/scripts.pory"
# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
# 765 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 766 "data/maps/MossdeepCity_Gym/scripts.pory"

# 767 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat::
# 768 "data/maps/MossdeepCity_Gym/scripts.pory"
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
# 769 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 770 "data/maps/MossdeepCity_Gym/scripts.pory"

# 771 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle::
# 772 "data/maps/MossdeepCity_Gym/scripts.pory"
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
# 773 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 774 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our GYM LEADERS are them!\p"
# 775 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 776 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 777 "data/maps/MossdeepCity_Gym/scripts.pory"

# 778 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro::
# 779 "data/maps/MossdeepCity_Gym/scripts.pory"
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
# 780 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a POKé\n"
# 781 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "BALL telekinetically!\p"
# 782 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 783 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 784 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 785 "data/maps/MossdeepCity_Gym/scripts.pory"

# 786 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat::
# 787 "data/maps/MossdeepCity_Gym/scripts.pory"
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"
# 788 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My POKéMON battling skills are out\n"
# 789 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 790 "data/maps/MossdeepCity_Gym/scripts.pory"

# 791 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle::
# 792 "data/maps/MossdeepCity_Gym/scripts.pory"
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
# 793 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A POKé BALL was too heavy to lift\n"
# 794 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 795 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 796 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 797 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 798 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 799 "data/maps/MossdeepCity_Gym/scripts.pory"

# 800 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro::
# 801 "data/maps/MossdeepCity_Gym/scripts.pory"
# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
# 802 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 803 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 804 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 805 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 806 "data/maps/MossdeepCity_Gym/scripts.pory"

# 807 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat::
# 808 "data/maps/MossdeepCity_Gym/scripts.pory"
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
# 809 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 810 "data/maps/MossdeepCity_Gym/scripts.pory"

# 811 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle::
# 812 "data/maps/MossdeepCity_Gym/scripts.pory"
# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
# 813 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 814 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 815 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 816 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 817 "data/maps/MossdeepCity_Gym/scripts.pory"

# 818 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro::
# 819 "data/maps/MossdeepCity_Gym/scripts.pory"
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
# 820 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 821 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 822 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 823 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 824 "data/maps/MossdeepCity_Gym/scripts.pory"

# 825 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat::
# 826 "data/maps/MossdeepCity_Gym/scripts.pory"
# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
# 827 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 828 "data/maps/MossdeepCity_Gym/scripts.pory"

# 829 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle::
# 830 "data/maps/MossdeepCity_Gym/scripts.pory"
# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
# 831 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 832 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our GYM LEADERS…\p"
# 833 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 834 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 835 "data/maps/MossdeepCity_Gym/scripts.pory"

# 836 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro::
# 837 "data/maps/MossdeepCity_Gym/scripts.pory"
# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
# 838 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 839 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 840 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 841 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 842 "data/maps/MossdeepCity_Gym/scripts.pory"

# 843 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat::
# 844 "data/maps/MossdeepCity_Gym/scripts.pory"
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"
# 845 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 846 "data/maps/MossdeepCity_Gym/scripts.pory"

# 847 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle::
# 848 "data/maps/MossdeepCity_Gym/scripts.pory"
# 563 "data/maps/MossdeepCity_Gym/scripts.pory"
# 849 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 850 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 851 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 852 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 853 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 854 "data/maps/MossdeepCity_Gym/scripts.pory"

# 855 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro::
# 856 "data/maps/MossdeepCity_Gym/scripts.pory"
# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
# 857 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 858 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 859 "data/maps/MossdeepCity_Gym/scripts.pory"

# 860 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat::
# 861 "data/maps/MossdeepCity_Gym/scripts.pory"
# 576 "data/maps/MossdeepCity_Gym/scripts.pory"
# 862 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 863 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 864 "data/maps/MossdeepCity_Gym/scripts.pory"

# 865 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle::
# 866 "data/maps/MossdeepCity_Gym/scripts.pory"
# 581 "data/maps/MossdeepCity_Gym/scripts.pory"
# 867 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 868 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 869 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 870 "data/maps/MossdeepCity_Gym/scripts.pory"

# 871 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro::
# 872 "data/maps/MossdeepCity_Gym/scripts.pory"
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
# 873 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 874 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 875 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the PSYCHIC type can be.$"
# 876 "data/maps/MossdeepCity_Gym/scripts.pory"

# 877 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat::
# 878 "data/maps/MossdeepCity_Gym/scripts.pory"
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
# 879 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 880 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 881 "data/maps/MossdeepCity_Gym/scripts.pory"

# 882 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle::
# 883 "data/maps/MossdeepCity_Gym/scripts.pory"
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"
# 884 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 885 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 886 "data/maps/MossdeepCity_Gym/scripts.pory"

# 887 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro::
# 888 "data/maps/MossdeepCity_Gym/scripts.pory"
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
# 889 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 890 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 891 "data/maps/MossdeepCity_Gym/scripts.pory"

# 892 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat::
# 893 "data/maps/MossdeepCity_Gym/scripts.pory"
# 608 "data/maps/MossdeepCity_Gym/scripts.pory"
# 894 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 895 "data/maps/MossdeepCity_Gym/scripts.pory"

# 896 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle::
# 897 "data/maps/MossdeepCity_Gym/scripts.pory"
# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
# 898 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 899 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 900 "data/maps/MossdeepCity_Gym/scripts.pory"

# 901 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro::
# 902 "data/maps/MossdeepCity_Gym/scripts.pory"
# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
# 903 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 904 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 905 "data/maps/MossdeepCity_Gym/scripts.pory"

# 906 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat::
# 907 "data/maps/MossdeepCity_Gym/scripts.pory"
# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
# 908 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 909 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 910 "data/maps/MossdeepCity_Gym/scripts.pory"

# 911 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle::
# 912 "data/maps/MossdeepCity_Gym/scripts.pory"
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"
# 913 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 914 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 915 "data/maps/MossdeepCity_Gym/scripts.pory"

# 916 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro::
# 917 "data/maps/MossdeepCity_Gym/scripts.pory"
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
# 918 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 919 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 920 "data/maps/MossdeepCity_Gym/scripts.pory"

# 921 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat::
# 922 "data/maps/MossdeepCity_Gym/scripts.pory"
# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
# 923 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 924 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 925 "data/maps/MossdeepCity_Gym/scripts.pory"

# 926 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle::
# 927 "data/maps/MossdeepCity_Gym/scripts.pory"
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
# 928 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 929 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the PSYCHIC type!\p"
# 930 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 931 "data/maps/MossdeepCity_Gym/scripts.pory"

# 932 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro::
# 933 "data/maps/MossdeepCity_Gym/scripts.pory"
# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
# 934 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 935 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "POKéMON hard-battling power!$"
# 936 "data/maps/MossdeepCity_Gym/scripts.pory"

# 937 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat::
# 938 "data/maps/MossdeepCity_Gym/scripts.pory"
# 653 "data/maps/MossdeepCity_Gym/scripts.pory"
# 939 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 940 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 941 "data/maps/MossdeepCity_Gym/scripts.pory"

# 942 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle::
# 943 "data/maps/MossdeepCity_Gym/scripts.pory"
# 658 "data/maps/MossdeepCity_Gym/scripts.pory"
# 944 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 945 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible POKéMON power next.$"
# 946 "data/maps/MossdeepCity_Gym/scripts.pory"

# 947 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro::
# 948 "data/maps/MossdeepCity_Gym/scripts.pory"
# 663 "data/maps/MossdeepCity_Gym/scripts.pory"
# 949 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 950 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Fufufu… Were you surprised?\p"
# 951 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That there are two GYM LEADERS?\n"
# 952 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 953 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We're twins!\n"
# 954 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We're twins!\p"
# 955 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We don't need to talk because…\n"
# 956 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We can each determine what…\p"
# 957 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The other is thinking…\n"
# 958 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: All in our minds!\p"
# 959 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: This combination of ours…\n"
# 960 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Can you beat it?$"
# 961 "data/maps/MossdeepCity_Gym/scripts.pory"

# 962 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat::
# 963 "data/maps/MossdeepCity_Gym/scripts.pory"
# 678 "data/maps/MossdeepCity_Gym/scripts.pory"
# 964 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: What?! Our combination…\n"
# 965 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Was shattered!\p"
# 966 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It can't be helped. You've won…\n"
# 967 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: So, in recognition, take this.$"
# 968 "data/maps/MossdeepCity_Gym/scripts.pory"

# 969 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge::
# 970 "data/maps/MossdeepCity_Gym/scripts.pory"
# 685 "data/maps/MossdeepCity_Gym/scripts.pory"
# 971 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the MIND BADGE\n"
# 972 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from TATE and LIZA.$"
# 973 "data/maps/MossdeepCity_Gym/scripts.pory"

# 974 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis::
# 975 "data/maps/MossdeepCity_Gym/scripts.pory"
# 690 "data/maps/MossdeepCity_Gym/scripts.pory"
# 976 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: The MIND BADGE enhances the\n"
# 977 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "SP. ATK and SP. DEF of POKéMON.\p"
# 978 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It also lets you use the HM move\n"
# 979 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "DIVE outside of battle.\p"
# 980 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You should also take this, too.$"
# 981 "data/maps/MossdeepCity_Gym/scripts.pory"

# 982 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind::
# 983 "data/maps/MossdeepCity_Gym/scripts.pory"
# 698 "data/maps/MossdeepCity_Gym/scripts.pory"
# 984 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: That TM04 contains…\n"
# 985 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: CALM MIND!\p"
# 986 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It raises SP. ATK and…\n"
# 987 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It raises SP. DEF!\p"
# 988 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: It's a move that's perfect…\n"
# 989 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For PSYCHIC POKéMON!\p"
# 990 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 991 "data/maps/MossdeepCity_Gym/scripts.pory"

# 992 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza::
# 993 "data/maps/MossdeepCity_Gym/scripts.pory"
# 708 "data/maps/MossdeepCity_Gym/scripts.pory"
# 994 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered GYM LEADERS TATE & LIZA\n"
# 995 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 996 "data/maps/MossdeepCity_Gym/scripts.pory"

# 997 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle::
# 998 "data/maps/MossdeepCity_Gym/scripts.pory"
# 713 "data/maps/MossdeepCity_Gym/scripts.pory"
# 999 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Looks like the bond between you\n"
# 1000 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your POKéMON is far stronger than\l"
# 1001 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 1002 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You will become even stronger!\n"
# 1003 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 1004 "data/maps/MossdeepCity_Gym/scripts.pory"

# 1005 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons::
# 1006 "data/maps/MossdeepCity_Gym/scripts.pory"
# 721 "data/maps/MossdeepCity_Gym/scripts.pory"
# 1007 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Hehehe… Were you surprised?\p"
# 1008 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: That there are two GYM LEADERS?\p"
# 1009 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Oops, you have only one…\n"
# 1010 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON that can battle.\p"
# 1011 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We can't battle that way!\p"
# 1012 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: If you want to challenge us,\n"
# 1013 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more POKéMON.$"
# 1014 "data/maps/MossdeepCity_Gym/scripts.pory"

# 1015 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue::
# 1016 "data/maps/MossdeepCity_Gym/scripts.pory"
# 731 "data/maps/MossdeepCity_Gym/scripts.pory"
# 1017 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM$"
# 1018 "data/maps/MossdeepCity_Gym/scripts.pory"

# 1019 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified::
# 1020 "data/maps/MossdeepCity_Gym/scripts.pory"
# 735 "data/maps/MossdeepCity_Gym/scripts.pory"
# 1021 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "MOSSDEEP CITY POKéMON GYM\p"
# 1022 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA AND TATE'S CERTIFIED TRAINERS:\n"
# 1023 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1024 "data/maps/MossdeepCity_Gym/scripts.pory"

# 1025 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch::
# 1026 "data/maps/MossdeepCity_Gym/scripts.pory"
# 741 "data/maps/MossdeepCity_Gym/scripts.pory"
# 1027 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: POKéMON…\n"
# 1028 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: POKéMON…\p"
# 1029 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: By changing the party's mix…\n"
# 1030 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: The battle style changes.\p"
# 1031 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But me…\n"
# 1032 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: But me…\p"
# 1033 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: I'll always be with LIZA!\n"
# 1034 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: I'll always be with TATE!\p"
# 1035 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: Our combination…\n"
# 1036 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: We'll show you again and again!$"
# 1037 "data/maps/MossdeepCity_Gym/scripts.pory"

# 1038 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat::
# 1039 "data/maps/MossdeepCity_Gym/scripts.pory"
# 754 "data/maps/MossdeepCity_Gym/scripts.pory"
# 1040 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You and your POKéMON…\n"
# 1041 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: It's as if you were siblings!$"
# 1042 "data/maps/MossdeepCity_Gym/scripts.pory"

# 1043 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch::
# 1044 "data/maps/MossdeepCity_Gym/scripts.pory"
# 759 "data/maps/MossdeepCity_Gym/scripts.pory"
# 1045 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You can knock us down,\n"
# 1046 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 1047 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Because the two of us,\n"
# 1048 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 1049 "data/maps/MossdeepCity_Gym/scripts.pory"

# 1050 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons::
# 1051 "data/maps/MossdeepCity_Gym/scripts.pory"
# 766 "data/maps/MossdeepCity_Gym/scripts.pory"
# 1052 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You're back again…\n"
# 1053 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You're back again…\p"
# 1054 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: To give us a rematch.\n"
# 1055 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: To give us a rematch.\p"
# 1056 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: But…\n"
# 1057 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: For our match…\p"
# 1058 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: You brought just one POKéMON!\n"
# 1059 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: You brought just one POKéMON!\p"
# 1060 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "TATE: We need you to bring at least…\n"
# 1061 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "LIZA: Two POKéMON when you come back.$"
