# 1 "data/maps/FortreeCity_Gym/scripts.pory"

# 2 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_MapScripts::
# 3 "data/maps/FortreeCity_Gym/scripts.pory"
# 2 "data/maps/FortreeCity_Gym/scripts.pory"
# 4 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
# 5 "data/maps/FortreeCity_Gym/scripts.pory"
# 3 "data/maps/FortreeCity_Gym/scripts.pory"
# 6 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
# 7 "data/maps/FortreeCity_Gym/scripts.pory"
	.byte 0
# 8 "data/maps/FortreeCity_Gym/scripts.pory"

# 9 "data/maps/FortreeCity_Gym/scripts.pory"

# 10 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnTransition::
# 11 "data/maps/FortreeCity_Gym/scripts.pory"
# 7 "data/maps/FortreeCity_Gym/scripts.pory"
# 12 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
# 13 "data/maps/FortreeCity_Gym/scripts.pory"
# 8 "data/maps/FortreeCity_Gym/scripts.pory"
# 14 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 15 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 16 "data/maps/FortreeCity_Gym/scripts.pory"

# 17 "data/maps/FortreeCity_Gym/scripts.pory"

# 18 "data/maps/FortreeCity_Gym/scripts.pory"
# 12 "data/maps/FortreeCity_Gym/scripts.pory"
# 19 "data/maps/FortreeCity_Gym/scripts.pory"

# 20 "data/maps/FortreeCity_Gym/scripts.pory"
# 13 "data/maps/FortreeCity_Gym/scripts.pory"
# 21 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnWarp:
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
# 14 "data/maps/FortreeCity_Gym/scripts.pory"
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
# 24 "data/maps/FortreeCity_Gym/scripts.pory"
# 15 "data/maps/FortreeCity_Gym/scripts.pory"
# 25 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
# 16 "data/maps/FortreeCity_Gym/scripts.pory"
# 27 "data/maps/FortreeCity_Gym/scripts.pory"

# 28 "data/maps/FortreeCity_Gym/scripts.pory"
# 17 "data/maps/FortreeCity_Gym/scripts.pory"
# 29 "data/maps/FortreeCity_Gym/scripts.pory"
	@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
# 30 "data/maps/FortreeCity_Gym/scripts.pory"

# 31 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates::
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
# 21 "data/maps/FortreeCity_Gym/scripts.pory"
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 35 "data/maps/FortreeCity_Gym/scripts.pory"

# 36 "data/maps/FortreeCity_Gym/scripts.pory"

# 37 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona::
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
# 28 "data/maps/FortreeCity_Gym/scripts.pory"
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq FortreeCity_Gym_EventScript_Winona_2
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona_1:
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
# 31 "data/maps/FortreeCity_Gym/scripts.pory"
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_Winona_5
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona_4:
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 54 "data/maps/FortreeCity_Gym/scripts.pory"

# 55 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona_2:
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
# 29 "data/maps/FortreeCity_Gym/scripts.pory"
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaRematch
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_Winona_1
# 59 "data/maps/FortreeCity_Gym/scripts.pory"

# 60 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona_5:
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GiveAerialAce2
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_Winona_4
# 64 "data/maps/FortreeCity_Gym/scripts.pory"

# 65 "data/maps/FortreeCity_Gym/scripts.pory"

# 66 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated::
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 93 "data/maps/FortreeCity_Gym/scripts.pory"
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 108 "data/maps/FortreeCity_Gym/scripts.pory"

# 109 "data/maps/FortreeCity_Gym/scripts.pory"

# 110 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2::
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq FortreeCity_Gym_EventScript_GiveAerialAce2_2
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2_1:
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 121 "data/maps/FortreeCity_Gym/scripts.pory"
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 124 "data/maps/FortreeCity_Gym/scripts.pory"

# 125 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2_2:
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GiveAerialAce2_1
# 129 "data/maps/FortreeCity_Gym/scripts.pory"

# 130 "data/maps/FortreeCity_Gym/scripts.pory"

# 131 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce::
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM_AERIAL_ACE
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq FortreeCity_Gym_EventScript_GiveAerialAce_2
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce_1:
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 140 "data/maps/FortreeCity_Gym/scripts.pory"
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 143 "data/maps/FortreeCity_Gym/scripts.pory"

# 144 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce_2:
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
	goto Common_EventScript_BagIsFull
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GiveAerialAce_1
# 148 "data/maps/FortreeCity_Gym/scripts.pory"

# 149 "data/maps/FortreeCity_Gym/scripts.pory"

# 150 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch::
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 156 "data/maps/FortreeCity_Gym/scripts.pory"

# 157 "data/maps/FortreeCity_Gym/scripts.pory"

# 158 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared::
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 164 "data/maps/FortreeCity_Gym/scripts.pory"

# 165 "data/maps/FortreeCity_Gym/scripts.pory"

# 166 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo::
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 172 "data/maps/FortreeCity_Gym/scripts.pory"

# 173 "data/maps/FortreeCity_Gym/scripts.pory"

# 174 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
# 178 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 180 "data/maps/FortreeCity_Gym/scripts.pory"

# 181 "data/maps/FortreeCity_Gym/scripts.pory"

# 182 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley::
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 185 "data/maps/FortreeCity_Gym/scripts.pory"
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 188 "data/maps/FortreeCity_Gym/scripts.pory"

# 189 "data/maps/FortreeCity_Gym/scripts.pory"

# 190 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto::
# 191 "data/maps/FortreeCity_Gym/scripts.pory"
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
# 192 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 193 "data/maps/FortreeCity_Gym/scripts.pory"
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 196 "data/maps/FortreeCity_Gym/scripts.pory"

# 197 "data/maps/FortreeCity_Gym/scripts.pory"

# 198 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius::
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
# 121 "data/maps/FortreeCity_Gym/scripts.pory"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 201 "data/maps/FortreeCity_Gym/scripts.pory"
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
# 202 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 204 "data/maps/FortreeCity_Gym/scripts.pory"

# 205 "data/maps/FortreeCity_Gym/scripts.pory"

# 206 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide::
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
# 208 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 209 "data/maps/FortreeCity_Gym/scripts.pory"
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
# 210 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 211 "data/maps/FortreeCity_Gym/scripts.pory"
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuide_2
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide_1:
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 216 "data/maps/FortreeCity_Gym/scripts.pory"
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
# 217 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 218 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 219 "data/maps/FortreeCity_Gym/scripts.pory"

# 220 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide_2:
# 221 "data/maps/FortreeCity_Gym/scripts.pory"
# 130 "data/maps/FortreeCity_Gym/scripts.pory"
# 222 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymGuidePostVictory
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymGuide_1
# 224 "data/maps/FortreeCity_Gym/scripts.pory"

# 225 "data/maps/FortreeCity_Gym/scripts.pory"

# 226 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory::
# 227 "data/maps/FortreeCity_Gym/scripts.pory"
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
# 228 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 229 "data/maps/FortreeCity_Gym/scripts.pory"
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 231 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 232 "data/maps/FortreeCity_Gym/scripts.pory"

# 233 "data/maps/FortreeCity_Gym/scripts.pory"

# 234 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue::
# 235 "data/maps/FortreeCity_Gym/scripts.pory"
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
# 236 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 237 "data/maps/FortreeCity_Gym/scripts.pory"
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_LeftGymStatue_2
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue_1:
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
# 241 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 242 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 243 "data/maps/FortreeCity_Gym/scripts.pory"

# 244 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue_2:
# 245 "data/maps/FortreeCity_Gym/scripts.pory"
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
# 246 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatueCertified
# 247 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_LeftGymStatue_1
# 248 "data/maps/FortreeCity_Gym/scripts.pory"

# 249 "data/maps/FortreeCity_Gym/scripts.pory"

# 250 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue::
# 251 "data/maps/FortreeCity_Gym/scripts.pory"
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
# 254 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_RightGymStatue_2
# 255 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue_1:
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 258 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 259 "data/maps/FortreeCity_Gym/scripts.pory"

# 260 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue_2:
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatueCertified
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_RightGymStatue_1
# 264 "data/maps/FortreeCity_Gym/scripts.pory"

# 265 "data/maps/FortreeCity_Gym/scripts.pory"

# 266 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified::
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 271 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 272 "data/maps/FortreeCity_Gym/scripts.pory"

# 273 "data/maps/FortreeCity_Gym/scripts.pory"

# 274 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue::
# 275 "data/maps/FortreeCity_Gym/scripts.pory"
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
# 276 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 277 "data/maps/FortreeCity_Gym/scripts.pory"
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
# 278 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 279 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 280 "data/maps/FortreeCity_Gym/scripts.pory"

# 281 "data/maps/FortreeCity_Gym/scripts.pory"

# 282 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice::
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, CHAMPION-\n"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE GYM LEADER WINONA is\n"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of FLYING-type POKéMON.\p"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this GYM,\n"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 292 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 293 "data/maps/FortreeCity_Gym/scripts.pory"

# 294 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory::
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
# 185 "data/maps/FortreeCity_Gym/scripts.pory"
# 296 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 297 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 298 "data/maps/FortreeCity_Gym/scripts.pory"

# 299 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro::
# 300 "data/maps/FortreeCity_Gym/scripts.pory"
# 190 "data/maps/FortreeCity_Gym/scripts.pory"
# 301 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "BIRD POKéMON!$"
# 303 "data/maps/FortreeCity_Gym/scripts.pory"

# 304 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat::
# 305 "data/maps/FortreeCity_Gym/scripts.pory"
# 195 "data/maps/FortreeCity_Gym/scripts.pory"
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"

# 309 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle::
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"
# 311 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A TRAINER has to be smart to keep\n"
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our LEADER?$"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"

# 316 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro::
# 317 "data/maps/FortreeCity_Gym/scripts.pory"
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of BIRD POKéMON aspire\n"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this GYM.\p"
# 320 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the FORTREE GYM,\n"
# 321 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 322 "data/maps/FortreeCity_Gym/scripts.pory"

# 323 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat::
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 326 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 327 "data/maps/FortreeCity_Gym/scripts.pory"

# 328 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle::
# 329 "data/maps/FortreeCity_Gym/scripts.pory"
# 219 "data/maps/FortreeCity_Gym/scripts.pory"
# 330 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 331 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough TRAINERS.\p"
# 332 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 333 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"

# 335 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro::
# 336 "data/maps/FortreeCity_Gym/scripts.pory"
# 226 "data/maps/FortreeCity_Gym/scripts.pory"
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for WINONA, our GYM\n"
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "LEADER, to deal with you!\p"
# 339 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 340 "data/maps/FortreeCity_Gym/scripts.pory"

# 341 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat::
# 342 "data/maps/FortreeCity_Gym/scripts.pory"
# 232 "data/maps/FortreeCity_Gym/scripts.pory"
# 343 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA, I…\n"
# 344 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 345 "data/maps/FortreeCity_Gym/scripts.pory"

# 346 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle::
# 347 "data/maps/FortreeCity_Gym/scripts.pory"
# 237 "data/maps/FortreeCity_Gym/scripts.pory"
# 348 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA is cute and she's strong.\n"
# 349 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate LEADER!\p"
# 350 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 351 "data/maps/FortreeCity_Gym/scripts.pory"

# 352 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro::
# 353 "data/maps/FortreeCity_Gym/scripts.pory"
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
# 354 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA taught me personally!\n"
# 355 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 356 "data/maps/FortreeCity_Gym/scripts.pory"

# 357 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat::
# 358 "data/maps/FortreeCity_Gym/scripts.pory"
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 360 "data/maps/FortreeCity_Gym/scripts.pory"

# 361 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle::
# 362 "data/maps/FortreeCity_Gym/scripts.pory"
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
# 363 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to WINONA, the people of\n"
# 364 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE can live without fear.$"
# 365 "data/maps/FortreeCity_Gym/scripts.pory"

# 366 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro::
# 367 "data/maps/FortreeCity_Gym/scripts.pory"
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
# 368 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When WINONA takes to battle, her face\n"
# 369 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 370 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 371 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 372 "data/maps/FortreeCity_Gym/scripts.pory"

# 373 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat::
# 374 "data/maps/FortreeCity_Gym/scripts.pory"
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
# 375 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 376 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 377 "data/maps/FortreeCity_Gym/scripts.pory"

# 378 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle::
# 379 "data/maps/FortreeCity_Gym/scripts.pory"
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
# 380 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 381 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at WINONA\l"
# 382 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 383 "data/maps/FortreeCity_Gym/scripts.pory"

# 384 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro::
# 385 "data/maps/FortreeCity_Gym/scripts.pory"
# 275 "data/maps/FortreeCity_Gym/scripts.pory"
# 386 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 387 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of FLYING-type POKéMON.\p"
# 388 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 389 "data/maps/FortreeCity_Gym/scripts.pory"

# 390 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat::
# 391 "data/maps/FortreeCity_Gym/scripts.pory"
# 281 "data/maps/FortreeCity_Gym/scripts.pory"
# 392 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 393 "data/maps/FortreeCity_Gym/scripts.pory"

# 394 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle::
# 395 "data/maps/FortreeCity_Gym/scripts.pory"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
# 396 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 397 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our LEADER\l"
# 398 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA's POKéMON are all business.$"
# 399 "data/maps/FortreeCity_Gym/scripts.pory"

# 400 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro::
# 401 "data/maps/FortreeCity_Gym/scripts.pory"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
# 402 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am WINONA. I am the LEADER of\n"
# 403 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the FORTREE POKéMON GYM.\p"
# 404 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with BIRD POKéMON\n"
# 405 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 406 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However grueling the battle, we have\n"
# 407 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "triumphed with grace…\p"
# 408 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the elegant choreography\n"
# 409 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of BIRD POKéMON and I!$"
# 410 "data/maps/FortreeCity_Gym/scripts.pory"

# 411 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat::
# 412 "data/maps/FortreeCity_Gym/scripts.pory"
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
# 413 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a TRAINER\n"
# 414 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command POKéMON with more grace\l"
# 415 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 416 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 417 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this GYM BADGE.$"
# 418 "data/maps/FortreeCity_Gym/scripts.pory"

# 419 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge::
# 420 "data/maps/FortreeCity_Gym/scripts.pory"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"
# 421 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the FEATHER BADGE\n"
# 422 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from WINONA.$"
# 423 "data/maps/FortreeCity_Gym/scripts.pory"

# 424 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis::
# 425 "data/maps/FortreeCity_Gym/scripts.pory"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
# 426 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "With the FEATHER BADGE, all POKéMON up\n"
# 427 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to LV 70, even those received through\l"
# 428 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "trades, will obey your every command.\p"
# 429 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You will also be able to use\n"
# 430 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the HM move FLY outside of battle.\p"
# 431 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "And this…\n"
# 432 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a gift from me.$"
# 433 "data/maps/FortreeCity_Gym/scripts.pory"

# 434 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce::
# 435 "data/maps/FortreeCity_Gym/scripts.pory"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
# 436 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM40 contains AERIAL ACE.\p"
# 437 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Its speed…\n"
# 438 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No POKéMON should be able to avoid it.\p"
# 439 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 440 "data/maps/FortreeCity_Gym/scripts.pory"

# 441 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona::
# 442 "data/maps/FortreeCity_Gym/scripts.pory"
# 332 "data/maps/FortreeCity_Gym/scripts.pory"
# 443 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered GYM LEADER WINONA\n"
# 444 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 445 "data/maps/FortreeCity_Gym/scripts.pory"

# 446 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle::
# 447 "data/maps/FortreeCity_Gym/scripts.pory"
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
# 448 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 449 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to BIRD POKéMON.$"
# 450 "data/maps/FortreeCity_Gym/scripts.pory"

# 451 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue::
# 452 "data/maps/FortreeCity_Gym/scripts.pory"
# 342 "data/maps/FortreeCity_Gym/scripts.pory"
# 453 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM$"
# 454 "data/maps/FortreeCity_Gym/scripts.pory"

# 455 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified::
# 456 "data/maps/FortreeCity_Gym/scripts.pory"
# 346 "data/maps/FortreeCity_Gym/scripts.pory"
# 457 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\p"
# 458 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA'S CERTIFIED TRAINERS:\n"
# 459 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 460 "data/maps/FortreeCity_Gym/scripts.pory"

# 461 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch::
# 462 "data/maps/FortreeCity_Gym/scripts.pory"
# 352 "data/maps/FortreeCity_Gym/scripts.pory"
# 463 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 464 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 465 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 466 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 467 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 468 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 469 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 470 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 471 "data/maps/FortreeCity_Gym/scripts.pory"

# 472 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat::
# 473 "data/maps/FortreeCity_Gym/scripts.pory"
# 363 "data/maps/FortreeCity_Gym/scripts.pory"
# 474 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 475 "data/maps/FortreeCity_Gym/scripts.pory"

# 476 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch::
# 477 "data/maps/FortreeCity_Gym/scripts.pory"
# 367 "data/maps/FortreeCity_Gym/scripts.pory"
# 478 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: Even though I have lost,\n"
# 479 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 480 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 481 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 482 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 483 "data/maps/FortreeCity_Gym/scripts.pory"

# 484 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons::
# 485 "data/maps/FortreeCity_Gym/scripts.pory"
# 375 "data/maps/FortreeCity_Gym/scripts.pory"
# 486 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "WINONA: We humans can never escape\n"
# 487 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 488 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 489 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 490 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 491 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning CHAMPION.\p"
# 492 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 493 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 494 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 495 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "POKéMON with you?\p"
# 496 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two POKéMON\n"
# 497 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"
