# 1 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 5 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 6 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_TriggerMasterBattleLeft::
# 7 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 4 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 8 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	lockall
# 9 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 5 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 10 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 11 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 6 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 12 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterLeft
# 13 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 7 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 14 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmovement 0
# 15 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 8 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 16 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	releaseall
# 17 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 18 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 19 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 20 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_TriggerMasterBattleRight::
# 21 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 13 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 22 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	lockall
# 23 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 14 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 24 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 25 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 15 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 26 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterRight
# 27 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 16 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 28 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmovement 0
# 29 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 17 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 30 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	releaseall
# 31 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 32 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 33 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 34 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonleeBall::
# 35 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 22 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 36 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	lock
# 37 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 23 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 38 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	faceplayer
# 39 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 24 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 40 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_HitmonleeBall_2
# 41 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonleeBall_1:
# 42 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 27 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 43 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	showmonpic SPECIES_HITMONLEE, 10, 3
# 44 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 28 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 45 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HITMONLEE
# 46 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 29 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 47 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
# 48 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 30 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 49 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmovement 0
# 50 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 31 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 51 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 52 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 32 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 53 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonlee, MSGBOX_YESNO
# 54 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 33 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 55 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 56 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 34 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 57 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 58 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_eq SaffronCity_Dojo_EventScript_HitmonleeBall_5
# 59 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonleeBall_4:
# 60 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 37 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 61 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	hidemonpic
# 62 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 38 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 63 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
# 64 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 65 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 66 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonleeBall_2:
# 67 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 25 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 68 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_AlreadyGotHitmon
# 69 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_HitmonleeBall_1
# 70 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 71 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonleeBall_5:
# 72 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 35 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 73 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_GiveHitmon
# 74 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_HitmonleeBall_4
# 75 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 76 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 77 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_AlreadyGotHitmon::
# 78 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 43 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 79 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_BetterNotGetGreedy
# 80 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 44 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 81 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
# 82 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 83 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 84 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 85 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonchanBall::
# 86 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 49 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 87 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	lock
# 88 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 50 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 89 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	faceplayer
# 90 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 51 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 91 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_HitmonchanBall_2
# 92 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonchanBall_1:
# 93 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 54 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 94 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	showmonpic SPECIES_HITMONCHAN, 10, 3
# 95 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 55 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 96 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HITMONCHAN
# 97 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 56 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 98 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
# 99 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 57 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 100 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmovement 0
# 101 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 58 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 102 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 103 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 59 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 104 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonchan, MSGBOX_YESNO
# 105 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 60 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 106 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call EventScript_RestorePrevTextColor
# 107 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 61 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 108 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 109 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_eq SaffronCity_Dojo_EventScript_HitmonchanBall_5
# 110 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonchanBall_4:
# 111 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 64 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 112 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	hidemonpic
# 113 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 65 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 114 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
# 115 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 116 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 117 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonchanBall_2:
# 118 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 52 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 119 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_AlreadyGotHitmon
# 120 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_HitmonchanBall_1
# 121 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 122 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonchanBall_5:
# 123 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 62 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 124 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_GiveHitmon
# 125 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_HitmonchanBall_4
# 126 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 127 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 128 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_GiveHitmon::
# 129 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 70 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 130 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	hidemonpic
# 131 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 71 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 132 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	givemon VAR_TEMP_1, 25
# 133 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 72 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 134 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, 0
# 135 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_eq SaffronCity_Dojo_EventScript_GiveHitmon_2
# 136 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_GiveHitmon_1:
# 137 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 75 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 138 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, 1
# 139 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_eq SaffronCity_Dojo_EventScript_GiveHitmon_5
# 140 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_GiveHitmon_4:
# 141 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 78 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 142 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, 2
# 143 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_eq SaffronCity_Dojo_EventScript_GiveHitmon_8
# 144 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_GiveHitmon_7:
# 145 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 81 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 146 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
# 147 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 148 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 149 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_GiveHitmon_2:
# 150 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 73 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 151 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_ReceivedHitmonParty
# 152 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_GiveHitmon_1
# 153 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 154 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_GiveHitmon_5:
# 155 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 76 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 156 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_ReceivedHitmonPC
# 157 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_GiveHitmon_4
# 158 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 159 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_GiveHitmon_8:
# 160 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 79 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 161 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 162 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_GiveHitmon_7
# 163 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 164 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 165 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_ReceivedHitmonParty::
# 166 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 86 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 167 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 168 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 87 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 169 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 170 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 88 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 171 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 172 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 89 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 173 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
# 174 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 90 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 175 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmessage
# 176 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 91 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 177 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitfanfare
# 178 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 92 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 179 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setflag FLAG_GOT_HITMON_FROM_DOJO
# 180 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 93 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 181 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 182 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 94 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 183 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 184 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_eq SaffronCity_Dojo_EventScript_ReceivedHitmonParty_2
# 185 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_ReceivedHitmonParty_1:
# 186 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 97 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 187 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 188 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 98 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 189 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 190 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 99 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 191 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
# 192 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 193 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 194 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_ReceivedHitmonParty_2:
# 195 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 95 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 196 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
# 197 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_ReceivedHitmonParty_1
# 198 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 199 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 200 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_ReceivedHitmonPC::
# 201 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 104 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 202 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 203 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 105 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 204 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 205 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 106 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 206 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 207 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 107 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 208 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
# 209 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 108 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 210 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitmessage
# 211 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 109 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 212 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	waitfanfare
# 213 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 110 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 214 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setflag FLAG_GOT_HITMON_FROM_DOJO
# 215 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 111 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 216 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 217 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 112 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 218 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 219 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_eq SaffronCity_Dojo_EventScript_ReceivedHitmonPC_2
# 220 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_ReceivedHitmonPC_1:
# 221 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 115 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 222 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 223 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 116 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 224 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_TransferredHitmonToPC
# 225 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 226 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 227 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_ReceivedHitmonPC_2:
# 228 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 113 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 229 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_TransferredHitmonToPC
# 230 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_ReceivedHitmonPC_1
# 231 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 232 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 233 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_TransferredHitmonToPC::
# 234 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 121 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 235 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
# 236 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 122 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 237 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
# 238 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 239 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 240 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 241 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_EndGiveMon::
# 242 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 127 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 243 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
# 244 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 245 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 246 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 247 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_Statue::
# 248 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 132 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 249 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_FightingDojo, MSGBOX_SIGN
# 250 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 251 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 252 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 253 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_LeftScroll::
# 254 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 137 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 255 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_EnemiesOnEverySide, MSGBOX_SIGN
# 256 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 257 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 258 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 259 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_RightScroll::
# 260 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 142 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 261 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_GoesAroundComesAround, MSGBOX_SIGN
# 262 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 263 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 264 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 265 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_Hitoshi::
# 266 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 147 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 267 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HITOSHI, SaffronCity_Dojo_Text_HitoshiIntro, SaffronCity_Dojo_Text_HitoshiDefeat
# 268 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 148 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 269 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
# 270 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 271 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 272 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 273 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_Hideki::
# 274 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 153 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 275 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HIDEKI, SaffronCity_Dojo_Text_HidekiIntro, SaffronCity_Dojo_Text_HidekiDefeat
# 276 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 154 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 277 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HidekiPostBattle, MSGBOX_AUTOCLOSE
# 278 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 279 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 280 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 281 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_Aaron::
# 282 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 159 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 283 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_AARON, SaffronCity_Dojo_Text_AaronIntro, SaffronCity_Dojo_Text_AaronDefeat
# 284 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 160 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 285 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
# 286 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 287 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 288 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 289 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_Mike::
# 290 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 165 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 291 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_MIKE, SaffronCity_Dojo_Text_MikeIntro, SaffronCity_Dojo_Text_MikeDefeat
# 292 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 166 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 293 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 295 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 296 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 297 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_MasterKoichi::
# 298 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 171 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 299 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KOICHI, SaffronCity_Dojo_Text_MasterKoichiIntro, SaffronCity_Dojo_Text_MasterKoichiDefeat, SaffronCity_Dojo_EventScript_DefeatedMasterKoichi
# 300 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 172 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 301 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_MasterKoichi_2
# 302 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_MasterKoichi_1:
# 303 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 175 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 304 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_ChoosePrizedFightingMon, MSGBOX_AUTOCLOSE
# 305 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 306 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 307 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_MasterKoichi_2:
# 308 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 173 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 309 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_MasterKoichiAlreadyGotHitmon
# 310 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	goto SaffronCity_Dojo_EventScript_MasterKoichi_1
# 311 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 312 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 313 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_MasterKoichiAlreadyGotHitmon::
# 314 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 180 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 315 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	msgbox SaffronCity_Dojo_Text_StayAndTrainWithUs
# 316 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 181 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 317 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
# 318 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 319 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 320 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 321 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_EventScript_DefeatedMasterKoichi::
# 322 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 186 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 323 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 324 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 187 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 325 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	release
# 326 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	end
# 327 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 328 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 329 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_MasterKoichiIntro::
# 330 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 191 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 331 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Grunt!\p"
# 332 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "I am the KARATE MASTER!\n"
# 333 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "I am the LEADER here!\p"
# 334 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "You wish to challenge us?\n"
# 335 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Expect no mercy!\p"
# 336 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Fwaaa!$"
# 337 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 338 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_MasterKoichiDefeat::
# 339 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 200 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 340 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Hwa!\n"
# 341 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Arrgh! Beaten!$"
# 342 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 343 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_ChoosePrizedFightingMon::
# 344 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 205 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 345 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Indeed, I have lost!\p"
# 346 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "But, I beseech you, do not take\n"
# 347 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "our emblem as your trophy!\p"
# 348 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "In return, I will give you a prized\n"
# 349 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "FIGHTING POKéMON!\p"
# 350 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Choose whichever one you like!$"
# 351 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 352 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_StayAndTrainWithUs::
# 353 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 214 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 354 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Grunt!\n"
# 355 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Stay and train at karate with us!$"
# 356 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 357 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_MikeIntro::
# 358 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 219 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 359 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Hoargh!\n"
# 360 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Take your shoes off!$"
# 361 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 362 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_MikeDefeat::
# 363 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 224 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 364 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "I give up!$"
# 365 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 366 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_MikePostBattle::
# 367 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 228 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 368 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "You wait 'til you see our MASTER!\n"
# 369 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "I'm a small fry compared to him!$"
# 370 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 371 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_HidekiIntro::
# 372 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 233 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 373 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "I hear you're good!\n"
# 374 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Show me!$"
# 375 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 376 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_HidekiDefeat::
# 377 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 238 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 378 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Judge!\n"
# 379 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "One point!$"
# 380 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 381 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_HidekiPostBattle::
# 382 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 243 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 383 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Our MASTER is a pro fighter.\n"
# 384 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Be prepared to lose!$"
# 385 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 386 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_AaronIntro::
# 387 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 248 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 388 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Hiyah!\n"
# 389 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "I have no fear for anything tough!\p"
# 390 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "I shatter boulders for training\n"
# 391 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "every day!$"
# 392 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 393 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_AaronDefeat::
# 394 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 255 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 395 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Yow!\n"
# 396 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Stubbed fingers!$"
# 397 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 398 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_AaronPostBattle::
# 399 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 260 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 400 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "The only thing that frightens us is\n"
# 401 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "psychic power!$"
# 402 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 403 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_HitoshiIntro::
# 404 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 265 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 405 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Hwaah!\p"
# 406 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "You're trespassing in our\n"
# 407 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "FIGHTING DOJO!$"
# 408 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 409 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_HitoshiDefeat::
# 410 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 271 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 411 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Oof!\n"
# 412 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "I give up!$"
# 413 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 414 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_HitoshiPostBattle::
# 415 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 276 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 416 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "The prime fighters across the land\n"
# 417 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "train here.$"
# 418 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 419 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_YouWantHitmonlee::
# 420 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 281 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 421 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "You want the hard-kicking\n"
# 422 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "HITMONLEE?$"
# 423 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 424 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster::
# 425 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 286 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 426 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 427 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "from the KARATE MASTER.$"
# 428 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 429 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_YouWantHitmonchan::
# 430 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 291 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 431 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "You want the piston-punching\n"
# 432 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "HITMONCHAN?$"
# 433 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 434 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster2::
# 435 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 296 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 436 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "{PLAYER}は　カラテ　だいおう　から\n"
# 437 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "{STR_VAR_1}を　もらった！$"
# 438 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 439 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_BetterNotGetGreedy::
# 440 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 301 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 441 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Better not get greedy…$"
# 442 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 443 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_EnemiesOnEverySide::
# 444 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 305 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 445 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "Enemies on every side!$"
# 446 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 447 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_GoesAroundComesAround::
# 448 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 309 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 449 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "What goes around comes around.$"
# 450 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"

# 451 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
SaffronCity_Dojo_Text_FightingDojo::
# 452 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 313 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
# 453 "data/maps/SaffronCity_Dojo_Frlg/scripts.pory"
	.string "FIGHTING DOJO$"
