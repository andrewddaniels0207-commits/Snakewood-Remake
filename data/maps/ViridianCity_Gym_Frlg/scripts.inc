# 1 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Frlg_MapScripts::
# 3 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 6 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Giovanni::
# 7 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 4 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 8 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 9 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 5 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 10 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_GIOVANNI, ViridianCity_Gym_Text_GiovanniIntro, ViridianCity_Gym_Text_GiovanniDefeat, ViridianCity_Gym_EventScript_DefeatedGiovanni, NO_MUSIC
# 11 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 6 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 12 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM26_FROM_GIOVANNI, ViridianCity_Gym_EventScript_Giovanni_2
# 13 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Giovanni_1:
# 14 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 9 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 15 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GiovanniPostBattle
# 16 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 10 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 17 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	closemessage
# 18 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 11 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 19 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	fadescreen FADE_TO_BLACK
# 20 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 12 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 21 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	removeobject LOCALID_VIRIDIAN_GIOVANNI
# 22 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 13 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 23 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 24 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 14 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 25 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	release
# 26 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 27 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 28 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Giovanni_2:
# 29 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 7 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 30 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto ViridianCity_Gym_EventScript_GiveTM26
# 31 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto ViridianCity_Gym_EventScript_Giovanni_1
# 32 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 33 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 34 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_DefeatedGiovanni::
# 35 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 19 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 36 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 3
# 37 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 20 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 38 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setflag FLAG_HIDE_MISC_KANTO_ROCKETS
# 39 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 21 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 40 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LEADER_GIOVANNI
# 41 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 22 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 42 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE08_GET
# 43 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 23 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 44 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 3
# 45 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 24 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 46 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 8
# 47 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 25 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 48 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto ViridianCity_Gym_EventScript_GiveTM26
# 49 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 50 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 51 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 52 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GiveTM26::
# 53 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 30 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 54 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis
# 55 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 31 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 56 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM26
# 57 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 32 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 58 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 59 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto_if_eq ViridianCity_Gym_EventScript_GiveTM26_2
# 60 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GiveTM26_1:
# 61 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 35 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 62 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	giveitem_msg ViridianCity_Gym_Text_ReceivedTM26FromGiovanni, ITEM_TM26
# 63 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 36 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 64 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM26_FROM_GIOVANNI
# 65 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 37 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 66 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainTM26
# 67 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 38 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 68 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	release
# 69 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 70 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 71 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GiveTM26_2:
# 72 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 33 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 73 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto ViridianCity_Gym_EventScript_NoRoomForTM26
# 74 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto ViridianCity_Gym_EventScript_GiveTM26_1
# 75 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 76 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 77 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_NoRoomForTM26::
# 78 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 43 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 79 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_YouDoNotHaveSpace
# 80 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 44 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 81 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	release
# 82 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 83 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 84 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 85 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Jason::
# 86 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 49 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 87 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_JASON, ViridianCity_Gym_Text_JasonIntro, ViridianCity_Gym_Text_JasonDefeat
# 88 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 50 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 89 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 91 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 92 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 93 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Cole::
# 94 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 55 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 95 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_TAMER_COLE, ViridianCity_Gym_Text_ColeIntro, ViridianCity_Gym_Text_ColeDefeat
# 96 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 56 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 97 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 99 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 100 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 101 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Atsushi::
# 102 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 61 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 103 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_ATSUSHI, ViridianCity_Gym_Text_AtsushiIntro, ViridianCity_Gym_Text_AtsushiDefeat
# 104 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 62 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 105 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 107 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 108 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 109 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Kiyo::
# 110 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 67 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 111 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KIYO, ViridianCity_Gym_Text_KiyoIntro, ViridianCity_Gym_Text_KiyoDefeat
# 112 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 68 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 113 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 115 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 116 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 117 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Takashi::
# 118 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 73 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 119 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_TAKASHI, ViridianCity_Gym_Text_TakashiIntro, ViridianCity_Gym_Text_TakashiDefeat
# 120 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 74 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 121 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 123 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 124 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 125 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Samuel::
# 126 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 79 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 127 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_SAMUEL, ViridianCity_Gym_Text_SamuelIntro, ViridianCity_Gym_Text_SamuelDefeat
# 128 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 80 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 129 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 131 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 132 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 133 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Yuji::
# 134 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 85 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 135 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_YUJI, ViridianCity_Gym_Text_YujiIntro, ViridianCity_Gym_Text_YujiDefeat
# 136 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 86 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 137 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 139 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 140 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 141 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_Warren::
# 142 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 91 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 143 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_WARREN, ViridianCity_Gym_Text_WarrenIntro, ViridianCity_Gym_Text_WarrenDefeat
# 144 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 92 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 145 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
# 146 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 147 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 148 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 149 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GymGuy::
# 150 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 97 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 151 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	lock
# 152 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 98 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 153 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	faceplayer
# 154 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 99 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 155 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LEADER_GIOVANNI, ViridianCity_Gym_EventScript_GymGuy_2
# 156 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GymGuy_1:
# 157 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 102 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 158 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyAdvice
# 159 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 103 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 160 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	release
# 161 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 162 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 163 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GymGuy_2:
# 164 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 100 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 165 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto ViridianCity_Gym_EventScript_GymGuyPostVictory
# 166 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto ViridianCity_Gym_EventScript_GymGuy_1
# 167 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 168 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 169 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GymGuyPostVictory::
# 170 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 108 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 171 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 4
# 172 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 109 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 173 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyPostVictory
# 174 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 110 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 175 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	release
# 176 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 177 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 178 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 179 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GymStatue::
# 180 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 115 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 181 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	lockall
# 182 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 116 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 183 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, ViridianCity_Gym_EventScript_GymStatue_2
# 184 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GymStatue_1:
# 185 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 119 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 186 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatue
# 187 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 120 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 188 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	releaseall
# 189 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 190 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 191 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GymStatue_2:
# 192 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 117 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 193 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto ViridianCity_Gym_EventScript_GymStatuePostVictory
# 194 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	goto ViridianCity_Gym_EventScript_GymStatue_1
# 195 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 196 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 197 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_EventScript_GymStatuePostVictory::
# 198 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 125 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 199 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
# 200 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 126 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 201 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	releaseall
# 202 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	end
# 203 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 204 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 205 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GiovanniIntro::
# 206 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 130 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 207 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Fwahahaha!\n"
# 208 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Welcome to my hideout!\p"
# 209 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "It shall be so until I can restore\n"
# 210 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "TEAM ROCKET to its former glory.\p"
# 211 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "But, you have found me again.\n"
# 212 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "So be it.\l"
# 213 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "This time, I'm not holding back!\p"
# 214 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Once more, you shall face\n"
# 215 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "GIOVANNI, the greatest TRAINER!{PLAY_BGM}{MUS_RG_ENCOUNTER_ROCKET}$"
# 216 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 217 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GiovanniDefeat::
# 218 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 142 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 219 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Ha!\n"
# 220 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "That was a truly intense fight.\l"
# 221 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You have won!\p"
# 222 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "As proof, here is the EARTHBADGE!\n"
# 223 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"
# 224 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 225 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GiovanniPostBattle::
# 226 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 150 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 227 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Having lost in this fashion, \n"
# 228 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I can't face my followers.\l"
# 229 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I have betrayed their trust.\p"
# 230 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "As of today, TEAM ROCKET is\n"
# 231 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "finished forever!\p"
# 232 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "As for myself, I shall dedicate\n"
# 233 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "my life to training again.\p"
# 234 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Let us meet again someday!\n"
# 235 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Farewell!$"
# 236 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 237 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis::
# 238 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 162 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 239 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "The EARTHBADGE makes POKéMON of\n"
# 240 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "any level obey without question.\p"
# 241 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "It is evidence of your mastery as\n"
# 242 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "a POKéMON TRAINER.\p"
# 243 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "With it, you can challenge the\n"
# 244 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "POKéMON LEAGUE.\p"
# 245 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Also, take this TM.\p"
# 246 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Consider it a gift for your POKéMON\n"
# 247 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "LEAGUE challenge.$"
# 248 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 249 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_ReceivedTM26FromGiovanni::
# 250 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 174 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 251 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM26\n"
# 252 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "from GIOVANNI.$"
# 253 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 254 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_ExplainTM26::
# 255 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 179 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 256 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "TM26 contains EARTHQUAKE.\p"
# 257 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "It is a powerful attack that causes\n"
# 258 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "a massive tremor.\p"
# 259 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I made it when I ran the GYM here,\n"
# 260 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "far too long ago… $"
# 261 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 262 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_YouDoNotHaveSpace::
# 263 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 187 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 264 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You do not have space for this!$"
# 265 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 266 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_YujiIntro::
# 267 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 191 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 268 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Heh!\n"
# 269 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You must be running out of steam\l"
# 270 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "by now!$"
# 271 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 272 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_YujiDefeat::
# 273 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 197 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 274 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I ran out of gas!$"
# 275 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 276 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_YujiPostBattle::
# 277 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 201 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 278 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You'll need power to keep up with\n"
# 279 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "our GYM LEADER.$"
# 280 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 281 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_AtsushiIntro::
# 282 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 206 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 283 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Rrrroar!\n"
# 284 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I'm working myself into a rage!$"
# 285 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 286 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_AtsushiDefeat::
# 287 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 211 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 288 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Wargh!$"
# 289 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 290 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_AtsushiPostBattle::
# 291 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 215 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 292 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I'm still not worthy!$"
# 293 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 294 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_JasonIntro::
# 295 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 219 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 296 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "POKéMON and I, we make wonderful\n"
# 297 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "music together!$"
# 298 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 299 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_JasonDefeat::
# 300 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 224 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 301 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You are in perfect harmony!$"
# 302 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 303 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_JasonPostBattle::
# 304 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 228 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 305 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Do you know the identity of our\n"
# 306 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "GYM LEADER?$"
# 307 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 308 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_KiyoIntro::
# 309 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 233 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 310 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Karate is the ultimate form of\n"
# 311 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "martial arts!$"
# 312 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 313 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_KiyoDefeat::
# 314 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 238 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 315 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Aiyah!$"
# 316 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 317 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_KiyoPostBattle::
# 318 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 242 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 319 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "If my POKéMON were as good at\n"
# 320 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "karate as I…$"
# 321 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 322 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_WarrenIntro::
# 323 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 247 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 324 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "The truly talented win with style.$"
# 325 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 326 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_WarrenDefeat::
# 327 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 251 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 328 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I lost my grip!$"
# 329 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 330 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_WarrenPostBattle::
# 331 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 255 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 332 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "The LEADER will scold me for\n"
# 333 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "losing this way…$"
# 334 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 335 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_TakashiIntro::
# 336 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 260 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 337 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I'm the KARATE KING!\n"
# 338 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Your fate rests with me!$"
# 339 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 340 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_TakashiDefeat::
# 341 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 265 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 342 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Ayah!$"
# 343 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 344 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_TakashiPostBattle::
# 345 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 269 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 346 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "The POKéMON LEAGUE?\n"
# 347 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You? Don't get cocky!$"
# 348 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 349 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_ColeIntro::
# 350 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 274 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 351 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Your POKéMON will cower at the\n"
# 352 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "crack of my whip!$"
# 353 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 354 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_ColeDefeat::
# 355 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 279 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 356 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Yowch!\n"
# 357 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Whiplash!$"
# 358 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 359 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_ColePostBattle::
# 360 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 284 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 361 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Wait!\n"
# 362 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I was just careless!$"
# 363 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 364 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_SamuelIntro::
# 365 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 289 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 366 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "VIRIDIAN GYM was closed for a\n"
# 367 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "long time.\p"
# 368 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "But now, our LEADER is back!$"
# 369 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 370 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_SamuelDefeat::
# 371 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 295 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 372 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "I was beaten?$"
# 373 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 374 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_SamuelPostBattle::
# 375 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 299 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 376 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "You can go on to the POKéMON\n"
# 377 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "LEAGUE only by defeating our GYM\l"
# 378 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "LEADER!$"
# 379 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 380 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GymGuyAdvice::
# 381 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 305 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 382 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 383 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 384 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Even I don't know the VIRIDIAN\n"
# 385 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "LEADER's identity.\p"
# 386 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "But one thing's certain.\n"
# 387 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "This will be the toughest of all\l"
# 388 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "the GYM LEADERS.\p"
# 389 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Also, I heard that the TRAINERS\n"
# 390 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "here like GROUND-type POKéMON.$"
# 391 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 392 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GymGuyPostVictory::
# 393 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 317 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 394 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "Blow me away! GIOVANNI was the\n"
# 395 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "GYM LEADER of VIRIDIAN?$"
# 396 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 397 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GymStatue::
# 398 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 322 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 399 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "VIRIDIAN POKéMON GYM\n"
# 400 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "LEADER: ?\p"
# 401 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 402 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 403 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"

# 404 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
ViridianCity_Gym_Text_GymStatuePlayerWon::
# 405 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 329 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
# 406 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "VIRIDIAN POKéMON GYM\n"
# 407 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "LEADER: GIOVANNI\p"
# 408 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 409 "data/maps/ViridianCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
