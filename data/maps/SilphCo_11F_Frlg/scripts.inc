# 1 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 2 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Frlg_MapScripts::
# 3 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 2 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 4 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_11F_OnLoad
# 5 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 7 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 8 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_OnLoad::
# 9 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 6 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 10 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto_if_unset FLAG_SILPH_11F_DOOR, SilphCo_11F_OnLoad_2
# 11 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_OnLoad_1:
# 12 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 13 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 14 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_OnLoad_2:
# 15 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 7 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call EventScript_Close11FDoor
# 17 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_OnLoad_1
# 18 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 19 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 20 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_President::
# 21 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 13 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 22 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	lock
# 23 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 14 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 24 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	faceplayer
# 25 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 15 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 26 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_MASTER_BALL_FROM_SILPH, SilphCo_11F_EventScript_President_2
# 27 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_President_1:
# 28 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 18 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 29 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	checkplayergender
# 30 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 19 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 31 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	compare VAR_RESULT, MALE
# 32 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto_if_eq SilphCo_11F_EventScript_President_5
# 33 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_President_4:
# 34 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 22 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 35 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	compare VAR_RESULT, FEMALE
# 36 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto_if_eq SilphCo_11F_EventScript_President_8
# 37 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_President_7:
# 38 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 25 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 39 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	checkitemspace ITEM_MASTER_BALL
# 40 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 26 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 41 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 42 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto_if_eq SilphCo_11F_EventScript_President_11
# 43 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_President_10:
# 44 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 29 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 45 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	giveitem_msg SilphCo_11F_Text_ObtainedMasterBallFromPresident, ITEM_MASTER_BALL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 46 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 30 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 47 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 48 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 31 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 49 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setflag FLAG_GOT_MASTER_BALL_FROM_SILPH
# 50 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 32 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 51 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	release
# 52 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 53 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 54 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_President_2:
# 55 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 16 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 56 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_AlreadyGotMasterBall
# 57 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_President_1
# 58 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 59 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_President_5:
# 60 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 20 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 61 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call SilphCo_11F_EventScript_PresidentThanksMale
# 62 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_President_4
# 63 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 64 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_President_8:
# 65 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 23 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 66 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call SilphCo_11F_EventScript_PresidentThanksFemale
# 67 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_President_7
# 68 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 69 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_President_11:
# 70 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 27 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 71 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_NoRoomForMasterBall
# 72 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_President_10
# 73 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 74 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 75 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksMale::
# 76 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 37 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 77 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearBoy
# 78 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	return
# 79 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 80 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 81 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksFemale::
# 82 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 42 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 83 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearGirl
# 84 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	return
# 85 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 86 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 87 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_NoRoomForMasterBall::
# 88 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 47 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 89 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_YouHaveNoRoomForThis
# 90 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 48 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 91 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	release
# 92 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 93 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 94 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 95 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_AlreadyGotMasterBall::
# 96 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 53 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 97 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 98 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 54 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 99 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	release
# 100 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 101 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 102 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 103 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_Secretary::
# 104 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 59 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 105 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForRescuingUs, MSGBOX_NPC
# 106 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 107 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 108 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 109 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerLeft::
# 110 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 64 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 111 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	lockall
# 112 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 65 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 113 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 114 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 66 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 115 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 116 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 117 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 118 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 119 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerRight::
# 120 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 71 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 121 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	lockall
# 122 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 72 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 123 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 124 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 73 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 125 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 126 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 127 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 128 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 129 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni::
# 130 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 78 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 131 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 132 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 79 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 133 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, Common_Movement_WalkInPlaceFasterDown
# 134 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 80 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 135 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	waitmovement 0
# 136 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 81 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 137 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay 25
# 138 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 82 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 139 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniIntro
# 140 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 83 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 141 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	closemessage
# 142 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 84 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 143 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
# 144 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto_if_eq SilphCo_11F_EventScript_BattleGiovanni_2
# 145 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni_1:
# 146 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 87 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 147 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
# 148 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto_if_eq SilphCo_11F_EventScript_BattleGiovanni_5
# 149 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni_4:
# 150 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 90 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 151 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SILPH_CO_GIOVANNI
# 152 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 91 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 153 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI_2, SilphCo_11F_Text_GiovanniDefeat
# 154 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 92 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 155 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniPostBattle
# 156 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 93 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 157 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	closemessage
# 158 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 94 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 159 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 160 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 95 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 161 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_GIOVANNI
# 162 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 96 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 163 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_11F_GRUNT1
# 164 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 97 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 165 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_CO_11F_GRUNT2
# 166 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 98 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 167 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 168 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 99 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 169 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_11F, 1
# 170 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 100 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 171 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	setflag FLAG_HIDE_SAFFRON_ROCKETS
# 172 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 101 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 173 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CIVILIANS
# 174 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 102 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 175 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	releaseall
# 176 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 177 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 178 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni_2:
# 179 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 85 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 180 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call SilphCo_11F_EventScript_GiovanniApproachLeft
# 181 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni_1
# 182 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 183 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni_5:
# 184 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 88 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 185 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	call SilphCo_11F_EventScript_GiovanniApproachRight
# 186 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni_4
# 187 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 188 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 189 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachLeft::
# 190 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 107 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 191 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachLeft
# 192 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 108 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 193 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, SilphCo_11F_Movement_PlayerFaceGiovanni
# 194 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 109 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 195 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	waitmovement 0
# 196 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	return
# 197 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 198 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 199 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachRight::
# 200 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 114 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 201 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachRight
# 202 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 115 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 203 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	waitmovement 0
# 204 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	return
# 205 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 206 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 207 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 119 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 208 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachLeft:
# 209 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 120 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 210 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 211 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 121 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 212 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 213 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 122 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 214 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 215 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 123 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 216 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 217 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 124 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 218 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_in_place_faster_left
# 219 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 125 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 220 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	step_end
# 221 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 222 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 128 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 223 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachRight:
# 224 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 129 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 225 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 226 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 130 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 227 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 228 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 131 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 229 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_down
# 230 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 132 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 231 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	step_end
# 232 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 233 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 135 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 234 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Movement_PlayerFaceGiovanni:
# 235 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 136 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 236 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_16
# 237 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 137 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 238 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_16
# 239 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 138 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 240 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_16
# 241 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 139 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 242 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_8
# 243 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 140 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 244 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	delay_4
# 245 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 141 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 246 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	walk_in_place_faster_right
# 247 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 142 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 248 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	step_end
# 249 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 250 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_Monitor::
# 251 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 146 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 252 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_MonitorHasMonsOnIt, MSGBOX_SIGN
# 253 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 254 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 255 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 256 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_FloorSign::
# 257 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 151 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 258 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_FloorSign, MSGBOX_SIGN
# 259 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 260 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 261 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 262 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_Grunt1::
# 263 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 156 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 264 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_40, SilphCo_11F_Text_Grunt1Intro, SilphCo_11F_Text_Grunt1Defeat
# 265 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 157 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 266 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 267 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 268 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 269 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 270 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_EventScript_Grunt2::
# 271 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 162 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 272 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_41, SilphCo_11F_Text_Grunt2Intro, SilphCo_11F_Text_Grunt2Defeat
# 273 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 163 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 274 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 275 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	end
# 276 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 277 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 278 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_ThanksForSavingMeDearBoy::
# 279 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 167 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 280 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "PRESIDENT: Oh, dear boy!\n"
# 281 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Thank you for saving SILPH.\p"
# 282 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "I will never forget you saved us in\n"
# 283 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "our moment of peril.\p"
# 284 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "I have to thank you in some way.\p"
# 285 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Because I am rich, I can give you\n"
# 286 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "anything.\p"
# 287 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Here, maybe this will do.$"
# 288 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 289 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_ThanksForSavingMeDearGirl::
# 290 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 178 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 291 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "PRESIDENT: Oh, dear girl!\n"
# 292 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Thank you for saving SILPH.\p"
# 293 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "I will never forget you saved us in\n"
# 294 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "our moment of peril.\p"
# 295 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "I have to thank you in some way.\p"
# 296 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Because I am rich, I can give you\n"
# 297 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "anything.\p"
# 298 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Here, maybe this will do.$"
# 299 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 300 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_ObtainedMasterBallFromPresident::
# 301 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 189 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 302 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "{PLAYER} obtained a MASTER BALL\n"
# 303 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "from the PRESIDENT!$"
# 304 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 305 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_ThatsOurSecretPrototype::
# 306 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 194 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 307 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "PRESIDENT: You can't buy that\n"
# 308 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "anywhere.\p"
# 309 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "It's our secret prototype MASTER\n"
# 310 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "BALL.\p"
# 311 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "It will catch any POKéMON without\n"
# 312 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "fail!\p"
# 313 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "You should be quiet about using it,\n"
# 314 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "though.$"
# 315 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 316 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_YouHaveNoRoomForThis::
# 317 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 205 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 318 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "You have no room for this.$"
# 319 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 320 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_ThanksForRescuingUs::
# 321 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 209 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 322 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "SECRETARY: Thank you for rescuing\n"
# 323 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "all of us.\p"
# 324 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "We, from the PRESIDENT down,\n"
# 325 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "are indebted to you.$"
# 326 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 327 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_GiovanniIntro::
# 328 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 216 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 329 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Ah, {PLAYER}!\n"
# 330 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "So we meet again!\p"
# 331 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "The PRESIDENT and I are discussing\n"
# 332 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "a vital business proposition.\p"
# 333 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Keep your nose out of grown-up\n"
# 334 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "matters…\p"
# 335 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Or, experience a world of pain!$"
# 336 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 337 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_GiovanniDefeat::
# 338 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 226 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 339 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Arrgh!!\n"
# 340 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "I lost again!?$"
# 341 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 342 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_GiovanniPostBattle::
# 343 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 231 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 344 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Blast it all!\n"
# 345 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "You ruined our plans for SILPH!\p"
# 346 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "But, TEAM ROCKET will never fall!\p"
# 347 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "{PLAYER}! Never forget that all\n"
# 348 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "POKéMON exist for TEAM ROCKET!\p"
# 349 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "I must go, but I shall return!$"
# 350 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 351 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_Grunt2Intro::
# 352 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 240 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 353 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Stop right there!\n"
# 354 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Don't you move!$"
# 355 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 356 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_Grunt2Defeat::
# 357 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 245 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 358 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Don't…\n"
# 359 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Please!$"
# 360 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 361 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_Grunt2PostBattle::
# 362 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 250 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 363 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "So, you want to see my BOSS?$"
# 364 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 365 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_Grunt1Intro::
# 366 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 254 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 367 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Halt! Do you have an appointment\n"
# 368 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "with my BOSS?$"
# 369 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 370 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_Grunt1Defeat::
# 371 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 259 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 372 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Gaah!\n"
# 373 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Demolished!$"
# 374 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 375 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_Grunt1PostBattle::
# 376 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 264 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 377 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "Watch your step…\n"
# 378 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "My BOSS likes his POKéMON tough!$"
# 379 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 380 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_MonitorHasMonsOnIt::
# 381 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 269 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 382 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "The monitor has POKéMON on it!$"
# 383 "data/maps/SilphCo_11F_Frlg/scripts.pory"

# 384 "data/maps/SilphCo_11F_Frlg/scripts.pory"
SilphCo_11F_Text_FloorSign::
# 385 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 273 "data/maps/SilphCo_11F_Frlg/scripts.pory"
# 386 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "SILPH CO. HEAD OFFICE\n"
# 387 "data/maps/SilphCo_11F_Frlg/scripts.pory"
	.string "11F$"
