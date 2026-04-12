# 1 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 2 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Frlg_MapScripts::
# 3 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 2 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 4 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_B2F_OnTransition
# 5 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 7 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 8 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_OnTransition::
# 9 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 6 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 10 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_FOSSIL_FROM_MT_MOON, MtMoon_B2F_OnTransition_2
# 11 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_OnTransition_1:
# 12 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 13 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 14 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_OnTransition_2:
# 15 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 7 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 16 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	call MtMoon_B2F_EventScript_ShowFossils
# 17 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto MtMoon_B2F_OnTransition_1
# 18 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 19 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 20 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_ShowFossils::
# 21 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 13 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 22 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_DOME_FOSSIL
# 23 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 14 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 24 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_HELIX_FOSSIL
# 25 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	return
# 26 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 27 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 28 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_MiguelTrigger::
# 29 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 19 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 30 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	lockall
# 31 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 20 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 32 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	applymovement LOCALID_MIGUEL, Common_Movement_WalkInPlaceFasterRight
# 33 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 21 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 34 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmovement 0
# 35 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 22 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 36 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	call MtMoon_B2F_EventScript_BattleMiguel
# 37 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 23 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 38 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	releaseall
# 39 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 40 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 41 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 42 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_Miguel::
# 43 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 28 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 44 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	lock
# 45 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 29 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 46 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	faceplayer
# 47 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 30 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 48 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto_if_set FLAG_GOT_FOSSIL_FROM_MT_MOON, MtMoon_B2F_EventScript_Miguel_2
# 49 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_Miguel_1:
# 50 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 33 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 51 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto_if_defeated TRAINER_SUPER_NERD_MIGUEL, MtMoon_B2F_EventScript_MiguelGoPickFossil
# 52 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 34 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 53 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	call MtMoon_B2F_EventScript_BattleMiguel
# 54 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 35 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 55 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	release
# 56 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 57 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 58 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_Miguel_2:
# 59 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 31 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 60 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto MtMoon_B2F_EventScript_MiguelFossilPicked
# 61 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto MtMoon_B2F_EventScript_Miguel_1
# 62 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 63 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 64 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_BattleMiguel::
# 65 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 40 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 66 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 67 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 41 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 68 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	message MtMoon_B2F_Text_MiguelIntro
# 69 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 42 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 70 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmessage
# 71 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 43 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 72 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_GYM_LEADER, 0
# 73 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 44 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 74 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitbuttonpress
# 75 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 45 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 76 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_MIGUEL
# 77 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 46 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 78 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_MIGUEL, MtMoon_B2F_Text_MiguelDefeat
# 79 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 47 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 80 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_MT_MOON_B2F, 1
# 81 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 48 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 82 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_WellEachTakeAFossil
# 83 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	return
# 84 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 85 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 86 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_MiguelFossilPicked::
# 87 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 53 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 88 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_LabOnCinnabarRegeneratesFossils
# 89 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 54 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 90 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	release
# 91 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 92 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 93 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 94 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_MiguelGoPickFossil::
# 95 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 59 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 96 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_WellEachTakeAFossil
# 97 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 60 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 98 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	release
# 99 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 100 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 101 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 102 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_DomeFossil::
# 103 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 65 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 104 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	lock
# 105 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 66 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 106 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	faceplayer
# 107 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 67 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 108 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_YouWantDomeFossil, MSGBOX_YESNO
# 109 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 68 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 110 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 111 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto_if_eq MtMoon_B2F_EventScript_DomeFossil_2
# 112 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_DomeFossil_1:
# 113 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 71 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 114 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	removeobject LOCALID_DOME_FOSSIL
# 115 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 72 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 116 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	giveitem_msg MtMoon_B2F_Text_ObtainedDomeFossil, ITEM_DOME_FOSSIL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 117 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 73 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 118 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	closemessage
# 119 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 74 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 120 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	delay 10
# 121 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 75 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 122 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	applymovement LOCALID_MIGUEL, MtMoon_B2F_Movement_MiguelToHelixFossil
# 123 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 76 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 124 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmovement 0
# 125 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 77 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 126 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_MIGUEL
# 127 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 78 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 128 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 129 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 79 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 130 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 131 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 80 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 132 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	message MtMoon_B2F_Text_ThenThisFossilIsMine
# 133 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 81 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 134 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmessage
# 135 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 82 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 136 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitfanfare
# 137 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 83 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 138 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	removeobject LOCALID_HELIX_FOSSIL
# 139 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 84 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 140 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setflag FLAG_GOT_DOME_FOSSIL
# 141 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 85 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 142 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
# 143 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 86 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 144 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	release
# 145 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 146 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 147 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_DomeFossil_2:
# 148 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 69 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 149 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto MtMoon_B2F_EventScript_DontTakeFossil
# 150 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto MtMoon_B2F_EventScript_DomeFossil_1
# 151 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 152 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 153 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 90 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 154 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Movement_MiguelToHelixFossil:
# 155 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 91 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 156 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_right
# 157 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 92 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 158 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 159 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 93 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 160 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 161 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 94 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 162 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 163 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 95 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 164 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	step_end
# 165 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 166 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_HelixFossil::
# 167 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 99 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 168 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	lock
# 169 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 100 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 170 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	faceplayer
# 171 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 101 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 172 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_YouWantHelixFossil, MSGBOX_YESNO
# 173 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 102 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 174 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 175 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto_if_eq MtMoon_B2F_EventScript_HelixFossil_2
# 176 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_HelixFossil_1:
# 177 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 105 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 178 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	removeobject LOCALID_HELIX_FOSSIL
# 179 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 106 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 180 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	giveitem_msg MtMoon_B2F_Text_ObtainedHelixFossil, ITEM_HELIX_FOSSIL, 1, MUS_RG_OBTAIN_KEY_ITEM
# 181 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 107 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 182 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	closemessage
# 183 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 108 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 184 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	delay 10
# 185 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 109 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 186 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	applymovement LOCALID_MIGUEL, MtMoon_B2F_Movement_MiguelToDomeFossil
# 187 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 110 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 188 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmovement 0
# 189 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 111 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 190 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	copyobjectxytoperm LOCALID_MIGUEL
# 191 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 112 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 192 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 193 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 113 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 194 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 195 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 114 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 196 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	message MtMoon_B2F_Text_ThenThisFossilIsMine
# 197 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 115 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 198 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitmessage
# 199 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 116 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 200 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	waitfanfare
# 201 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 117 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 202 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	removeobject LOCALID_DOME_FOSSIL
# 203 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 118 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 204 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setflag FLAG_GOT_HELIX_FOSSIL
# 205 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 119 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 206 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	setflag FLAG_GOT_FOSSIL_FROM_MT_MOON
# 207 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 120 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 208 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	release
# 209 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 210 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 211 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_HelixFossil_2:
# 212 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 103 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 213 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto MtMoon_B2F_EventScript_DontTakeFossil
# 214 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	goto MtMoon_B2F_EventScript_HelixFossil_1
# 215 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 216 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 217 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_DontTakeFossil::
# 218 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 125 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 219 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	release
# 220 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 221 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 222 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 223 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 129 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 224 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Movement_MiguelToDomeFossil:
# 225 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 130 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 226 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 227 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 131 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 228 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 229 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 132 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 230 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	walk_up
# 231 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 133 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 232 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	step_end
# 233 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 234 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_Grunt1::
# 235 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 137 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 236 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT, MtMoon_B2F_Text_Grunt1Intro, MtMoon_B2F_Text_Grunt1Defeat
# 237 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 138 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 238 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 239 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 240 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 241 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 242 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_Grunt2::
# 243 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 143 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 244 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_2, MtMoon_B2F_Text_Grunt2Intro, MtMoon_B2F_Text_Grunt2Defeat
# 245 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 144 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 246 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 247 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 248 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 249 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 250 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_Grunt3::
# 251 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 149 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 252 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_3, MtMoon_B2F_Text_Grunt3Intro, MtMoon_B2F_Text_Grunt3Defeat
# 253 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 150 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 254 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 255 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 256 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 257 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 258 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_EventScript_Grunt4::
# 259 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 155 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 260 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_4, MtMoon_B2F_Text_Grunt4Intro, MtMoon_B2F_Text_Grunt4Defeat
# 261 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 156 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 262 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	msgbox MtMoon_B2F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	end
# 264 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 265 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 266 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_MiguelIntro::
# 267 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 160 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 268 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Hey, stop!\p"
# 269 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "I found these fossils!\n"
# 270 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "They're both mine!$"
# 271 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 272 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_MiguelDefeat::
# 273 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 166 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 274 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Okay!\n"
# 275 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "I'll share!$"
# 276 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 277 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_WellEachTakeAFossil::
# 278 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 171 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 279 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We'll each take a fossil!\n"
# 280 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "No being greedy!$"
# 281 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 282 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_ThenThisFossilIsMine::
# 283 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 176 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 284 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "All right.\n"
# 285 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Then this fossil is mine!$"
# 286 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 287 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_LabOnCinnabarRegeneratesFossils::
# 288 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 181 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 289 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Far away, on CINNABAR ISLAND,\n"
# 290 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "there's a POKéMON LAB.\p"
# 291 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "They do research on regenerating\n"
# 292 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "fossils.$"
# 293 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 294 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt1Intro::
# 295 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 188 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 296 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We, TEAM ROCKET, shall find the\n"
# 297 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "fossils!\p"
# 298 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Reviving POKéMON from them will\n"
# 299 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "earn us huge riches!$"
# 300 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 301 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt1Defeat::
# 302 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 195 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 303 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Urgh!\n"
# 304 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Now I'm mad!$"
# 305 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 306 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt1PostBattle::
# 307 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 200 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 308 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "You made me mad!\n"
# 309 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "TEAM ROCKET will blacklist you!$"
# 310 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 311 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt2Intro::
# 312 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 205 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 313 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We, TEAM ROCKET, are POKéMON\n"
# 314 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "gangsters!\l"
# 315 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We strike fear with our strength!$"
# 316 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 317 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt2Defeat::
# 318 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 211 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 319 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "I blew it!$"
# 320 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 321 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt2PostBattle::
# 322 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 215 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 323 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Darn it all!\n"
# 324 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "My associates won't stand for this!$"
# 325 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 326 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt3Intro::
# 327 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 220 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 328 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "We're pulling a big job here!\n"
# 329 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Get lost, kid!$"
# 330 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 331 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt3Defeat::
# 332 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 225 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 333 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "So, you are good…$"
# 334 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 335 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt3PostBattle::
# 336 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 229 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 337 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "If you find a fossil, give it to me\n"
# 338 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "and scram!$"
# 339 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 340 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt4Intro::
# 341 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 234 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 342 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Little kids shouldn't be messing\n"
# 343 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "around with grown-ups!\p"
# 344 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "It could be bad news!$"
# 345 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 346 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt4Defeat::
# 347 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 240 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 348 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "I'm steamed!$"
# 349 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 350 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_Grunt4PostBattle::
# 351 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 244 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 352 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "POKéMON lived here long before\n"
# 353 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "people came.$"
# 354 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 355 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_YouWantDomeFossil::
# 356 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 249 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 357 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Do you want the DOME FOSSIL?$"
# 358 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 359 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_YouWantHelixFossil::
# 360 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 253 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 361 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Do you want the HELIX FOSSIL?$"
# 362 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 363 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_ObtainedHelixFossil::
# 364 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 257 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 365 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Obtained the HELIX FOSSIL!$"
# 366 "data/maps/MtMoon_B2F_Frlg/scripts.pory"

# 367 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
MtMoon_B2F_Text_ObtainedDomeFossil::
# 368 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 261 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
# 369 "data/maps/MtMoon_B2F_Frlg/scripts.pory"
	.string "Obtained the DOME FOSSIL!$"
