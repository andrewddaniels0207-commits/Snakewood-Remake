# 1 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 2 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_Frlg_MapScripts::
# 3 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 2 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 4 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RocketHideout_B4F_OnLoad
# 5 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 7 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 8 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_OnLoad::
# 9 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 6 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 10 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setvar NUM_DOOR_GRUNTS_DEFEATED, 0
# 11 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 7 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 12 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
# 13 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 8 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 14 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
# 15 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 9 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 16 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	compare NUM_DOOR_GRUNTS_DEFEATED, 2
# 17 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto_if_ne RocketHideout_B4F_OnLoad_2
# 18 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_OnLoad_1:
# 19 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	end
# 20 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 21 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_OnLoad_2:
# 22 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 10 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 23 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	call RocketHideout_B4F_EventScript_SetBarrier
# 24 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto RocketHideout_B4F_OnLoad_1
# 25 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 26 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 27 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_CountGruntDefeated::
# 28 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 16 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 29 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	addvar NUM_DOOR_GRUNTS_DEFEATED, 1
# 30 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	return
# 31 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 32 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 33 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_Giovanni::
# 34 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 21 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 35 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	lock
# 36 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 22 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 37 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	faceplayer
# 38 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 23 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 39 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 0
# 40 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 24 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 41 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	message RocketHideout_B4F_Text_GiovanniIntro
# 42 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 25 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 43 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	waitmessage
# 44 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 26 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 45 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
# 46 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 27 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 47 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	waitbuttonpress
# 48 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 28 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 49 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI, RocketHideout_B4F_Text_GiovanniDefeat
# 50 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 29 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 51 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	msgbox RocketHideout_B4F_Text_GiovanniPostBattle
# 52 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 30 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 53 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 54 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 31 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 55 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	closemessage
# 56 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 32 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 57 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	removeobject LOCALID_HIDEOUT_GIOVANNI
# 58 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 33 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 59 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	addobject LOCALID_SILPH_SCOPE
# 60 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 34 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 61 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SILPH_SCOPE
# 62 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 35 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 63 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setflag FLAG_HIDE_CELADON_ROCKETS
# 64 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 36 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 65 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 66 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 37 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 67 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 68 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 38 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 69 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	release
# 70 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	end
# 71 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 72 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 73 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_SilphScope::
# 74 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 43 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 75 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	lock
# 76 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 44 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 77 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	faceplayer
# 78 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 45 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 79 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	removeobject LOCALID_SILPH_SCOPE
# 80 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 46 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 81 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	giveitem ITEM_SILPH_SCOPE
# 82 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 47 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 83 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 84 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto_if_eq RocketHideout_B4F_EventScript_SilphScope_2
# 85 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_SilphScope_1:
# 86 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 50 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 87 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	release
# 88 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	end
# 89 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 90 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_SilphScope_2:
# 91 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 48 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 92 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto EventScript_BagIsFull
# 93 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto RocketHideout_B4F_EventScript_SilphScope_1
# 94 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 95 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 96 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_Grunt1::
# 97 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 55 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 98 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_18, RocketHideout_B4F_Text_Grunt1Intro, RocketHideout_B4F_Text_Grunt1Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt1
# 99 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 56 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 100 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt1PostBattle
# 101 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 57 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 102 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	release
# 103 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	end
# 104 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 105 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 106 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt1::
# 107 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 62 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 108 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt1PostBattle
# 109 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 63 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 110 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	addobject LOCALID_LIFT_KEY
# 111 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 64 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 112 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	clearflag FLAG_HIDE_LIFT_KEY
# 113 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 65 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 114 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	release
# 115 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	end
# 116 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 117 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 118 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_LiftKey::
# 119 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 70 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 120 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	lock
# 121 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 71 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 122 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	faceplayer
# 123 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 72 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 124 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setflag FLAG_CAN_USE_ROCKET_HIDEOUT_LIFT
# 125 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 73 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 126 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	removeobject LOCALID_LIFT_KEY
# 127 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 74 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 128 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	giveitem ITEM_LIFT_KEY
# 129 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 75 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 130 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 131 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto_if_eq RocketHideout_B4F_EventScript_LiftKey_2
# 132 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_LiftKey_1:
# 133 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 78 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 134 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	release
# 135 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	end
# 136 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 137 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_LiftKey_2:
# 138 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 76 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 139 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto EventScript_BagIsFull
# 140 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto RocketHideout_B4F_EventScript_LiftKey_1
# 141 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 142 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 143 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_Grunt2::
# 144 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 83 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 145 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_Text_Grunt2Intro, RocketHideout_B4F_Text_Grunt2Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt2
# 146 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 84 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 147 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 148 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	end
# 149 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 150 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 151 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt2::
# 152 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 89 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 153 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setvar NUM_DOOR_GRUNTS_DEFEATED, 0
# 154 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 90 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 155 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
# 156 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 91 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 157 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
# 158 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 92 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 159 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	compare NUM_DOOR_GRUNTS_DEFEATED, 2
# 160 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto_if_eq RocketHideout_B4F_EventScript_DefeatedGrunt2_2
# 161 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt2_1:
# 162 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 95 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 163 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	compare NUM_DOOR_GRUNTS_DEFEATED, 2
# 164 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto_if_eq RocketHideout_B4F_EventScript_DefeatedGrunt2_5
# 165 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt2_4:
# 166 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 98 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 167 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	release
# 168 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	end
# 169 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 170 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt2_2:
# 171 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 93 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 172 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	call RocketHideout_B4F_EventScript_RemoveBarrier
# 173 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto RocketHideout_B4F_EventScript_DefeatedGrunt2_1
# 174 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 175 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt2_5:
# 176 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 96 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 177 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	call RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval
# 178 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto RocketHideout_B4F_EventScript_DefeatedGrunt2_4
# 179 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 180 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 181 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_Grunt3::
# 182 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 103 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 183 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_Text_Grunt3Intro, RocketHideout_B4F_Text_Grunt3Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt3
# 184 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 104 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 185 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 186 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	end
# 187 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 188 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 189 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt3::
# 190 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 109 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 191 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setvar NUM_DOOR_GRUNTS_DEFEATED, 0
# 192 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 110 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 193 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
# 194 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 111 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 195 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
# 196 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 112 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 197 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	compare NUM_DOOR_GRUNTS_DEFEATED, 2
# 198 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto_if_eq RocketHideout_B4F_EventScript_DefeatedGrunt3_2
# 199 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt3_1:
# 200 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 115 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 201 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	compare NUM_DOOR_GRUNTS_DEFEATED, 2
# 202 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto_if_eq RocketHideout_B4F_EventScript_DefeatedGrunt3_5
# 203 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt3_4:
# 204 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 118 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 205 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	release
# 206 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	end
# 207 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 208 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt3_2:
# 209 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 113 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 210 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	call RocketHideout_B4F_EventScript_RemoveBarrier
# 211 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto RocketHideout_B4F_EventScript_DefeatedGrunt3_1
# 212 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 213 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt3_5:
# 214 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 116 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 215 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	call RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval
# 216 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	goto RocketHideout_B4F_EventScript_DefeatedGrunt3_4
# 217 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 218 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 219 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval::
# 220 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 123 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 221 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	playse SE_UNLOCK
# 222 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 124 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 223 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	special DrawWholeMapView
# 224 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 125 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 225 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	waitse
# 226 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	return
# 227 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 228 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 229 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_SetBarrier::
# 230 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 130 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 231 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 17, 12, METATILE_SilphCo_HideoutBarrier_TopLeft_Floor, 1
# 232 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 131 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 233 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 18, 12, METATILE_SilphCo_HideoutBarrier_TopRight_Floor, 1
# 234 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 132 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 235 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 17, 13, METATILE_SilphCo_HideoutBarrier_BottomLeft, 1
# 236 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 133 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 237 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 18, 13, METATILE_SilphCo_HideoutBarrier_BottomRight, 1
# 238 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 134 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 239 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 17, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 240 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 135 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 241 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 18, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 242 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	return
# 243 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 244 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 245 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_EventScript_RemoveBarrier::
# 246 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 140 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 247 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 17, 12, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 248 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 141 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 249 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 18, 12, METATILE_SilphCo_HideoutFloor, 0
# 250 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 142 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 251 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 17, 13, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 252 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 143 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 253 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 18, 13, METATILE_SilphCo_HideoutFloor, 0
# 254 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 144 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 255 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 17, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 256 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 145 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 257 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	setmetatile 18, 14, METATILE_SilphCo_HideoutFloor, 0
# 258 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	return
# 259 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 260 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 261 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_Text_GiovanniIntro::
# 262 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 149 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 263 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "So! I must say, I am impressed you\n"
# 264 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "got here.\p"
# 265 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "TEAM ROCKET captures POKéMON from\n"
# 266 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "around the world.\p"
# 267 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "They're important tools for keeping\n"
# 268 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "our criminal enterprise going.\p"
# 269 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "I am the leader, GIOVANNI!\p"
# 270 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "For your insolence, you will feel a\n"
# 271 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "world of pain!$"
# 272 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 273 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_Text_GiovanniDefeat::
# 274 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 161 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 275 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "WHAT!\n"
# 276 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "This can't be!$"
# 277 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 278 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_Text_GiovanniPostBattle::
# 279 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 166 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 280 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "I see that you raise POKéMON with\n"
# 281 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "utmost care.\p"
# 282 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "A child like you would never\n"
# 283 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "understand what I hope to achieve.\p"
# 284 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "I shall step aside this time!\p"
# 285 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "I hope we meet again…$"
# 286 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 287 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_Text_Grunt2Intro::
# 288 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 175 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 289 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "I know you!\n"
# 290 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "You ruined our plans at MT. MOON!$"
# 291 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 292 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_Text_Grunt2Defeat::
# 293 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 180 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 294 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "Burned again!$"
# 295 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 296 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_Text_Grunt2PostBattle::
# 297 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 184 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 298 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "Do you have something against TEAM\n"
# 299 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "ROCKET?$"
# 300 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 301 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_Text_Grunt3Intro::
# 302 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 189 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 303 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "How can you not see the beauty of\n"
# 304 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "our evil?$"
# 305 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 306 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_Text_Grunt3Defeat::
# 307 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 194 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 308 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "Ayaya!$"
# 309 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 310 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_Text_Grunt3PostBattle::
# 311 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 198 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 312 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "BOSS!\n"
# 313 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "I'm sorry I failed you!$"
# 314 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 315 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_Text_Grunt1Intro::
# 316 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 203 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 317 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "The elevator doesn't work?\n"
# 318 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "Who has the LIFT KEY?$"
# 319 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 320 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_Text_Grunt1Defeat::
# 321 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 208 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 322 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "No!$"
# 323 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"

# 324 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
RocketHideout_B4F_Text_Grunt1PostBattle::
# 325 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 212 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
# 326 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "Oh, no!\n"
# 327 "data/maps/RocketHideout_B4F_Frlg/scripts.pory"
	.string "I dropped the LIFT KEY!$"
