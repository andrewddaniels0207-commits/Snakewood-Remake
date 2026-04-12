# 1 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Frlg_MapScripts::
# 3 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 6 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Erika::
# 7 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 4 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 8 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 9 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 5 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 10 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_ERIKA, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 11 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 6 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 12 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM19_FROM_ERIKA, CeladonCity_Gym_EventScript_Erika_2
# 13 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Erika_1:
# 14 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 9 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 15 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 4
# 16 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 10 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 17 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_ErikaPostBattle
# 18 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 11 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 19 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	release
# 20 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 21 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 22 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Erika_2:
# 23 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 7 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 24 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto CeladonCity_Gym_EventScript_GiveTM19
# 25 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto CeladonCity_Gym_EventScript_Erika_1
# 26 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 27 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 28 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_DefeatedErika::
# 29 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 16 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 30 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 1
# 31 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 17 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 32 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS
# 33 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 18 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 34 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_ERIKA
# 35 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 19 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 36 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE04_GET
# 37 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 20 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 38 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 4
# 39 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 21 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 40 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto CeladonCity_Gym_EventScript_GiveTM19
# 41 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 42 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 43 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 44 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_GiveTM19::
# 45 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 26 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 46 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis
# 47 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 27 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 48 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM19
# 49 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 28 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 50 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 51 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto_if_eq CeladonCity_Gym_EventScript_GiveTM19_2
# 52 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_GiveTM19_1:
# 53 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 31 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 54 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	giveitem_msg CeladonCity_Gym_Text_ReceivedTM19FromErika, ITEM_TM19
# 55 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 32 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 56 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM19_FROM_ERIKA
# 57 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 33 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 58 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainTM19
# 59 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 34 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 60 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	release
# 61 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 62 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 63 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_GiveTM19_2:
# 64 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 29 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 65 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto CeladonCity_Gym_EventScript_NoRoomForTM19
# 66 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto CeladonCity_Gym_EventScript_GiveTM19_1
# 67 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 68 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 69 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_NoRoomForTM19::
# 70 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 39 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 71 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_ShouldMakeRoomForThis
# 72 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 40 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 73 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	release
# 74 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 75 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 76 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 77 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Kay::
# 78 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 45 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 79 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_KAY, CeladonCity_Gym_Text_KayIntro, CeladonCity_Gym_Text_KayDefeat
# 80 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 46 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 81 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_KayPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 83 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 84 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 85 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Lisa::
# 86 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 51 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 87 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LASS_LISA, CeladonCity_Gym_Text_LisaIntro, CeladonCity_Gym_Text_LisaDefeat
# 88 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 52 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 89 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 2
# 90 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 53 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 91 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 93 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 94 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 95 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Tina::
# 96 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 58 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 97 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_TINA, CeladonCity_Gym_Text_TinaIntro, CeladonCity_Gym_Text_TinaDefeat
# 98 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 59 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 99 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_TinaPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 101 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 102 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 103 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Bridget::
# 104 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 64 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 105 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_BRIDGET, CeladonCity_Gym_Text_BridgetIntro, CeladonCity_Gym_Text_BridgetDefeat
# 106 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 65 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 107 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 109 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 110 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 111 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Tamia::
# 112 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 70 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 113 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_TAMIA, CeladonCity_Gym_Text_TamiaIntro, CeladonCity_Gym_Text_TamiaDefeat
# 114 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 71 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 115 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 3
# 116 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 72 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 117 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_TamiaPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 119 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 120 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 121 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Lori::
# 122 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 77 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 123 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_LORI, CeladonCity_Gym_Text_LoriIntro, CeladonCity_Gym_Text_LoriDefeat
# 124 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 78 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 125 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_LoriPostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 127 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 128 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 129 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_Mary::
# 130 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 83 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 131 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_MARY, CeladonCity_Gym_Text_MaryIntro, CeladonCity_Gym_Text_MaryDefeat
# 132 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 84 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 133 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 135 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 136 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 137 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_GymStatue::
# 138 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 89 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 139 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	lockall
# 140 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 90 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 141 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, CeladonCity_Gym_EventScript_GymStatue_2
# 142 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_GymStatue_1:
# 143 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 93 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 144 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatue
# 145 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 94 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 146 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	releaseall
# 147 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 148 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 149 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_GymStatue_2:
# 150 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 91 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 151 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto CeladonCity_Gym_EventScript_GymStatuePostVictory
# 152 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	goto CeladonCity_Gym_EventScript_GymStatue_1
# 153 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 154 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 155 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_EventScript_GymStatuePostVictory::
# 156 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 99 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 157 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
# 158 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 100 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 159 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	releaseall
# 160 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	end
# 161 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 162 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 163 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ErikaIntro::
# 164 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 104 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 165 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Hello…\n"
# 166 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Lovely weather, isn't it?\l"
# 167 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "It's so pleasant…\p"
# 168 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "…Oh, dear…\n"
# 169 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I must have dozed off. Welcome.\p"
# 170 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "My name is ERIKA.\n"
# 171 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I am the LEADER of CELADON GYM.\p"
# 172 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I am a student of the art of\n"
# 173 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "flower arranging.\p"
# 174 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "My POKéMON are solely of the\n"
# 175 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "GRASS type.\p"
# 176 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "…Oh, I'm sorry, I had no idea that\n"
# 177 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "you wished to challenge me.\p"
# 178 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Very well, but I shall not lose.{PLAY_BGM MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 179 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 180 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ErikaDefeat::
# 181 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 121 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 182 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
# 183 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I concede defeat.\l"
# 184 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You are remarkably strong.\p"
# 185 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I must confer on you the\n"
# 186 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "RAINBOWBADGE.$"
# 187 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 188 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ErikaPostBattle::
# 189 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 129 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 190 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You are cataloging POKéMON?\n"
# 191 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I must say I'm impressed.\p"
# 192 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I would never collect POKéMON if\n"
# 193 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "they were unattractive.$"
# 194 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 195 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis::
# 196 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 136 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 197 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "The RAINBOWBADGE will make\n"
# 198 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 50 obey.\p"
# 199 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "It also allows POKéMON to use\n"
# 200 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "STRENGTH in and out of battle.\p"
# 201 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Please also take this with you.$"
# 202 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 203 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ReceivedTM19FromErika::
# 204 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 144 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 205 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM19\n"
# 206 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "from ERIKA.$"
# 207 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 208 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ExplainTM19::
# 209 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 149 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 210 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "TM19 contains GIGA DRAIN.\p"
# 211 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Half the damage it inflicts is\n"
# 212 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "drained to heal your POKéMON.\p"
# 213 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Wouldn't you agree that it's a\n"
# 214 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "wonderful move?$"
# 215 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 216 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_ShouldMakeRoomForThis::
# 217 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 157 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 218 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You should make room for this.$"
# 219 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 220 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_KayIntro::
# 221 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 161 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 222 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I should tell you about this GYM.\p"
# 223 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Only real ladies are allowed in\n"
# 224 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "here!$"
# 225 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 226 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_KayDefeat::
# 227 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 167 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 228 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You're too rough!$"
# 229 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 230 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_KayPostBattle::
# 231 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 171 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 232 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Bleaah!\n"
# 233 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I hope ERIKA wipes you out!$"
# 234 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 235 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_BridgetIntro::
# 236 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 176 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 237 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh, welcome.\n"
# 238 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I was getting bored.$"
# 239 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 240 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_BridgetDefeat::
# 241 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 181 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 242 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "My makeup!$"
# 243 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 244 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_BridgetPostBattle::
# 245 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 185 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 246 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "GRASS-type POKéMON are tough\n"
# 247 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "against the WATER type.\p"
# 248 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "They also have an edge on ROCK-\n"
# 249 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "and GROUND-type POKéMON.$"
# 250 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 251 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TinaIntro::
# 252 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 192 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 253 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "…Weren't you peeking in here\n"
# 254 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "earlier?$"
# 255 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 256 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TinaDefeat::
# 257 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 197 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 258 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You're an eye-opener!$"
# 259 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 260 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TinaPostBattle::
# 261 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 201 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 262 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh, you were looking at ERIKA…\n"
# 263 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You weren't looking at me…$"
# 264 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 265 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TamiaIntro::
# 266 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 206 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 267 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Look, look!\n"
# 268 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "See my POKéMON!\p"
# 269 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I like the GRASS type.\n"
# 270 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I like how they're easy to raise.$"
# 271 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 272 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TamiaDefeat::
# 273 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 213 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 274 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "No!$"
# 275 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 276 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_TamiaPostBattle::
# 277 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 217 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 278 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "We only use GRASS-type POKéMON at\n"
# 279 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "our GYM.\p"
# 280 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Why? We also use them for making\n"
# 281 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "flower arrangements!$"
# 282 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 283 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LisaIntro::
# 284 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 224 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 285 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh, hey!\p"
# 286 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "We don't like BUG- or FIRE-type\n"
# 287 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "POKéMON in here!$"
# 288 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 289 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LisaDefeat::
# 290 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 230 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 291 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
# 292 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You!$"
# 293 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 294 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LisaPostBattle::
# 295 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 235 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 296 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Our LEADER ERIKA might be quiet,\n"
# 297 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "but she's famous around here.$"
# 298 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 299 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LoriIntro::
# 300 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 240 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 301 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Pleased to meet you.\n"
# 302 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "My hobby is POKéMON training.$"
# 303 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 304 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LoriDefeat::
# 305 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 245 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 306 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
# 307 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Splendid!$"
# 308 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 309 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_LoriPostBattle::
# 310 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 250 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 311 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I have a blind date coming up.\n"
# 312 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I have to learn to be polite,\l"
# 313 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "especially if I have to battle.$"
# 314 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 315 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_MaryIntro::
# 316 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 256 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 317 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Welcome to CELADON GYM!\p"
# 318 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "You'd better not underestimate\n"
# 319 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "the nice ladies here.$"
# 320 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 321 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_MaryDefeat::
# 322 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 262 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 323 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
# 324 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Beaten!$"
# 325 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 326 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_MaryPostBattle::
# 327 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 267 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 328 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "I didn't bring my best POKéMON.\n"
# 329 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "Wait until next time!$"
# 330 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 331 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_GymStatue::
# 332 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 272 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 333 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "CELADON POKéMON GYM\n"
# 334 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "LEADER: ERIKA\p"
# 335 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 336 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 337 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"

# 338 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
CeladonCity_Gym_Text_GymStatuePlayerWon::
# 339 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 279 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
# 340 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "CELADON POKéMON GYM\n"
# 341 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "LEADER: ERIKA\p"
# 342 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 343 "data/maps/CeladonCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
