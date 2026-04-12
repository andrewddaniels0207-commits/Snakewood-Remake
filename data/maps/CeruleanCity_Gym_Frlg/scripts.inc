# 1 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Frlg_MapScripts::
# 3 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 6 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Misty::
# 7 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 4 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 8 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 9 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 5 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 10 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MISTY, CeruleanCity_Gym_Text_MistyIntro, CeruleanCity_Gym_Text_MistyDefeat, CeruleanCity_Gym_EventScript_MistyDefeated, NO_MUSIC
# 11 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 6 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 12 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_EventScript_Misty_2
# 13 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Misty_1:
# 14 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 9 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 15 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 16 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 10 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 17 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 18 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 19 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 20 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Misty_2:
# 21 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 7 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 22 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GiveTM03
# 23 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_Misty_1
# 24 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 25 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 26 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_MistyDefeated::
# 27 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 15 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 28 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, 1
# 29 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 16 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_MISTY
# 31 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 17 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 32 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE02_GET
# 33 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 18 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 34 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CERULEAN_CITY
# 35 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 19 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 36 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 2
# 37 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 20 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 38 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GiveTM03
# 39 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 40 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 41 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 42 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GiveTM03::
# 43 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 25 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 44 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainCascadeBadge
# 45 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 26 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 46 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM03
# 47 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 27 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 48 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 49 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_eq CeruleanCity_Gym_EventScript_GiveTM03_2
# 50 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GiveTM03_1:
# 51 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 30 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 52 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	giveitem_msg CeruleanCity_Gym_Text_ReceivedTM03FromMisty, ITEM_TM03
# 53 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 31 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 54 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM03_FROM_MISTY
# 55 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 32 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 56 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 57 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 33 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 58 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 59 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 60 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 61 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GiveTM03_2:
# 62 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 28 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 63 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_NoRoomForTM03
# 64 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GiveTM03_1
# 65 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 66 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 67 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_NoRoomForTM03::
# 68 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 38 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 69 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_BetterMakeRoomForThis
# 70 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 39 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 71 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 72 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 73 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 74 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 75 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Diana::
# 76 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 44 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 77 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DIANA, CeruleanCity_Gym_Text_DianaIntro, CeruleanCity_Gym_Text_DianaDefeat
# 78 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 45 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 79 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
# 80 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 81 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 82 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 83 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Luis::
# 84 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 50 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 85 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_LUIS, CeruleanCity_Gym_Text_LuisIntro, CeruleanCity_Gym_Text_LuisDefeat
# 86 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 51 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 87 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, 2
# 88 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 52 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 89 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 90 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 91 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 92 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 93 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuy::
# 94 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 57 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 95 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	lock
# 96 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 58 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 97 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	faceplayer
# 98 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 59 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 99 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_MISTY, CeruleanCity_Gym_EventScript_GymGuy_2
# 100 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuy_1:
# 101 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 62 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 102 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymGuyAdvice
# 103 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 63 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 104 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 105 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 106 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 107 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuy_2:
# 108 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 60 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 109 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GymGuyPostVictory
# 110 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GymGuy_1
# 111 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 112 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 113 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuyPostVictory::
# 114 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 68 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 115 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_WeMakePrettyGoodTeam
# 116 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 69 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 117 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 118 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 119 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 120 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 121 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatue::
# 122 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 74 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 123 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	lockall
# 124 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 75 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 125 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_EventScript_GymStatue_2
# 126 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatue_1:
# 127 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 78 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 128 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatue
# 129 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 79 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 130 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	releaseall
# 131 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 132 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 133 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatue_2:
# 134 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 76 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 135 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GymStatuePostVictory
# 136 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GymStatue_1
# 137 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 138 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 139 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatuePostVictory::
# 140 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 84 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 141 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatuePlayerWon
# 142 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 85 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 143 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	releaseall
# 144 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 145 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 146 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 147 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_MistyIntro::
# 148 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 89 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 149 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Hi, you're a new face!\p"
# 150 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Only those TRAINERS who have a\n"
# 151 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "policy about POKéMON can turn pro.\p"
# 152 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "What is your approach when you\n"
# 153 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "catch and train POKéMON?\p"
# 154 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "My policy is an all-out offensive\n"
# 155 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "with WATER-type POKéMON!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 156 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 157 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_ExplainTM03::
# 158 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 99 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 159 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "TM03 teaches WATER PULSE.\p"
# 160 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Use it on an aquatic POKéMON!$"
# 161 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 162 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_ExplainCascadeBadge::
# 163 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 104 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 164 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "The CASCADEBADGE makes all\n"
# 165 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "POKéMON up to Lv. 30 obey.\p"
# 166 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "That includes even outsiders you\n"
# 167 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "got in trades.\p"
# 168 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "There's more. You can now use CUT\n"
# 169 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "anytime, even out of battle.\p"
# 170 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can CUT down small trees to\n"
# 171 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "open new pathways.\p"
# 172 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can also have my favorite TM.$"
# 173 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 174 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_ReceivedTM03FromMisty::
# 175 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 116 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 176 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM03\n"
# 177 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "from MISTY.$"
# 178 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 179 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_BetterMakeRoomForThis::
# 180 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 121 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 181 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You better make room for this!$"
# 182 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 183 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_MistyDefeat::
# 184 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 125 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 185 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Wow!\n"
# 186 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You're too much!\p"
# 187 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "All right!\p"
# 188 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can have the CASCADEBADGE to\n"
# 189 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "show you beat me.$"
# 190 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 191 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_DianaIntro::
# 192 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 133 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 193 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "What? You?\n"
# 194 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "I'm more than good enough for you!\p"
# 195 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "MISTY won't have to be bothered.$"
# 196 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 197 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_DianaDefeat::
# 198 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 139 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 199 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You overwhelmed me!$"
# 200 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 201 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_DianaPostBattle::
# 202 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 143 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 203 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You have to face other TRAINERS\n"
# 204 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "to see how good you really are.$"
# 205 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 206 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_LuisIntro::
# 207 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 148 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 208 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Splash!\p"
# 209 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "I'm first up!\n"
# 210 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Let's do it!$"
# 211 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 212 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_LuisDefeat::
# 213 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 154 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 214 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "That can't be!$"
# 215 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 216 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_LuisPostBattle::
# 217 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 158 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 218 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "MISTY is a TRAINER who's going to\n"
# 219 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "keep improving.\p"
# 220 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "She won't lose to someone like you!$"
# 221 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 222 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_GymGuyAdvice::
# 223 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 164 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 224 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 225 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 226 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Let me give you some advice!\p"
# 227 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "The LEADER, MISTY, is a pro who\n"
# 228 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "uses WATER-type POKéMON.\p"
# 229 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can drain all their water with\n"
# 230 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "GRASS-type POKéMON.\p"
# 231 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Or, you might use ELECTRIC-type\n"
# 232 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "POKéMON and zap them!$"
# 233 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 234 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_WeMakePrettyGoodTeam::
# 235 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 176 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 236 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You beat MISTY!\n"
# 237 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "See, what'd I tell ya?\p"
# 238 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You and me, kid, we make a pretty\n"
# 239 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "darn-good team!$"
# 240 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 241 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_GymStatue::
# 242 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 183 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 243 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "CERULEAN POKéMON GYM\n"
# 244 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "LEADER: MISTY\p"
# 245 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 246 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 247 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 248 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_GymStatuePlayerWon::
# 249 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 190 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
# 250 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "CERULEAN POKéMON GYM\n"
# 251 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "LEADER: MISTY\p"
# 252 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 253 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
