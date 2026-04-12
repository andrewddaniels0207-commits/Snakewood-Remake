# 1 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Frlg_MapScripts::
# 3 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 6 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Brock::
# 7 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 4 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 8 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 9 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 5 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 10 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Text_BrockIntro, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
# 11 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 6 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 12 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_Brock_2
# 13 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Brock_1:
# 14 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 9 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 15 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockPostBattle
# 16 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 10 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 17 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 18 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 19 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 20 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Brock_2:
# 21 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 7 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 22 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GiveTM39
# 23 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_Brock_1
# 24 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 25 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 26 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_DefeatedBrock::
# 27 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 15 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 28 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 1
# 29 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 16 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 30 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_BROCK
# 31 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 17 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 32 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE01_GET
# 33 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 18 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 34 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 1
# 35 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 19 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 36 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 37 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 20 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 38 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY
# 39 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 21 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 40 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 1
# 41 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 22 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 42 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GiveTM39
# 43 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 44 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 45 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 46 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GiveTM39::
# 47 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 27 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 48 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_TakeThisWithYou
# 49 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 28 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 50 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM39
# 51 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 29 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 52 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 53 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_eq PewterCity_Gym_EventScript_GiveTM39_2
# 54 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GiveTM39_1:
# 55 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 32 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 56 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	giveitem_msg PewterCity_Gym_Text_ReceivedTM39FromBrock, ITEM_TM39
# 57 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 33 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 58 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM39_FROM_BROCK
# 59 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 34 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 60 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_ExplainTM39
# 61 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 35 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 62 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 63 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 64 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 65 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GiveTM39_2:
# 66 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 30 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 67 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_NoRoomForTM39
# 68 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GiveTM39_1
# 69 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 70 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 71 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_NoRoomForTM39::
# 72 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 40 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 73 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_DontHaveRoomForThis
# 74 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 41 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 75 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 76 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 77 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 78 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 79 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Liam::
# 80 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 46 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 81 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_LIAM, PewterCity_Gym_Text_LiamIntro, PewterCity_Gym_Text_LiamDefeat
# 82 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 47 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 83 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 85 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 86 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 87 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuy::
# 88 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 52 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 89 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	lock
# 90 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 53 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 91 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	faceplayer
# 92 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 54 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 93 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_EventScript_GymGuy_2
# 94 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuy_1:
# 95 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 57 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 96 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_LetMeTakeYouToTheTop, MSGBOX_YESNO
# 97 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 58 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 98 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
# 99 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_eq PewterCity_Gym_EventScript_GymGuy_5
# 100 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuy_4:
# 101 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 61 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 102 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, NO
# 103 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_eq PewterCity_Gym_EventScript_GymGuy_8
# 104 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuy_7:
# 105 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 106 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 107 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuy_2:
# 108 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 55 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 109 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyPostVictory
# 110 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuy_1
# 111 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 112 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuy_5:
# 113 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 59 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 114 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyTakeMeToTop
# 115 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuy_4
# 116 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 117 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuy_8:
# 118 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 62 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 119 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop
# 120 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuy_7
# 121 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 122 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 123 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyPostVictory::
# 124 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 68 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 125 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_YoureChampMaterial
# 126 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 69 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 127 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 128 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 129 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 130 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 131 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyTakeMeToTop::
# 132 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 74 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 133 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_LetsGetHappening
# 134 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 75 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 135 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
# 136 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 137 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 138 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 139 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop::
# 140 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 80 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 141 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_ItsFreeLetsGetHappening
# 142 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 81 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 143 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
# 144 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 145 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 146 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 147 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyAdvice::
# 148 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 86 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 149 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_TryDifferentPartyOrders
# 150 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 87 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 151 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 152 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 153 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 154 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 155 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymStatue::
# 156 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 92 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 157 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	lockall
# 158 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 93 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 159 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PewterCity_Gym_EventScript_GymStatue_2
# 160 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymStatue_1:
# 161 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 96 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 162 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatue
# 163 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 97 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 164 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	releaseall
# 165 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 166 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 167 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymStatue_2:
# 168 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 94 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 169 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymStatuePostVictory
# 170 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymStatue_1
# 171 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 172 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 173 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymStatuePostVictory::
# 174 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 102 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 175 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
# 176 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 103 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 177 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	releaseall
# 178 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 179 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 180 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 181 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockIntro::
# 182 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 107 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 183 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So, you're here. I'm BROCK.\n"
# 184 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I'm PEWTER's GYM LEADER.\p"
# 185 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "My rock-hard willpower is evident\n"
# 186 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "even in my POKéMON.\p"
# 187 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "My POKéMON are all rock hard, and\n"
# 188 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "have true-grit determination.\p"
# 189 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "That's right - my POKéMON are all\n"
# 190 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "the ROCK type!\p"
# 191 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Fuhaha! You're going to challenge\n"
# 192 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "me knowing that you'll lose?\p"
# 193 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "That's the TRAINER's honor that\n"
# 194 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "compels you to challenge me.\p"
# 195 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Fine, then!\n"
# 196 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Show me your best!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 197 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 198 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockDefeat::
# 199 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 124 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 200 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I took you for granted, and so\n"
# 201 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I lost.\p"
# 202 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "As proof of your victory, I confer\n"
# 203 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "on you this…the official POKéMON\l"
# 204 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEAGUE BOULDERBADGE.\p"
# 205 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{PLAYER} received the BOULDERBADGE\n"
# 206 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from BROCK!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
# 207 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{FONT_MALE}Just having the BOULDERBADGE makes\n"
# 208 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "your POKéMON more powerful.\p"
# 209 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It also enables the use of the\n"
# 210 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "move FLASH outside of battle.\p"
# 211 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Of course, a POKéMON must know the\n"
# 212 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "move FLASH to use it.$"
# 213 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 214 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_TakeThisWithYou::
# 215 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 140 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 216 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Wait!\n"
# 217 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Take this with you.$"
# 218 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 219 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ReceivedTM39FromBrock::
# 220 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 145 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 221 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM39\n"
# 222 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from BROCK.$"
# 223 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 224 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ExplainTM39::
# 225 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 150 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 226 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "A TM, Technical Machine, contains a\n"
# 227 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "technique for POKéMON.\p"
# 228 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Using a TM teaches the move it\n"
# 229 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "contains to a POKéMON.\p"
# 230 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "A TM is good for only one use.\p"
# 231 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So, when you use one, pick the\n"
# 232 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "POKéMON carefully.\p"
# 233 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Anyways…\n"
# 234 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "TM39 contains ROCK TOMB.\p"
# 235 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It hurls boulders at the foe and\n"
# 236 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "lowers its SPEED.$"
# 237 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 238 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockPostBattle::
# 239 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 164 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 240 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "There are all kinds of TRAINERS in\n"
# 241 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "this huge world of ours.\p"
# 242 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You appear to be very gifted as a\n"
# 243 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "POKéMON TRAINER.\p"
# 244 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So let me make a suggestion.\p"
# 245 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Go to the GYM in CERULEAN and test\n"
# 246 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "your abilities.$"
# 247 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 248 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_DontHaveRoomForThis::
# 249 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 174 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 250 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You don't have room for this.$"
# 251 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 252 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamIntro::
# 253 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 178 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 254 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Stop right there, kid!\p"
# 255 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're ten thousand light-years \n"
# 256 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from facing BROCK!$"
# 257 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 258 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamDefeat::
# 259 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 184 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 260 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Darn!\p"
# 261 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Light-years isn't time…\n"
# 262 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It measures distance!$"
# 263 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 264 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamPostBattle::
# 265 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 190 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 266 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're pretty hot.\n"
# 267 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "…But not as hot as BROCK!$"
# 268 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 269 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LetMeTakeYouToTheTop::
# 270 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 195 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 271 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Hiya!\n"
# 272 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Do you want to dream big?\p"
# 273 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Do you dare to dream of becoming\n"
# 274 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "the POKéMON champ?\p"
# 275 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I'm no TRAINER, but I can advise\n"
# 276 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "you on how to win.\p"
# 277 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let me take you to the top!$"
# 278 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 279 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LetsGetHappening::
# 280 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 205 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 281 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "All right!\n"
# 282 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let's get happening!$"
# 283 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 284 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_TryDifferentPartyOrders::
# 285 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 210 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 286 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "The first POKéMON out in a match is\n"
# 287 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "at the left of the POKéMON LIST.\p"
# 288 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "By changing the order of POKéMON,\n"
# 289 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "you may gain an advantage.\p"
# 290 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Try different orders to suit your\n"
# 291 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "opponent's party.$"
# 292 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 293 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ItsFreeLetsGetHappening::
# 294 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 219 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 295 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It's a free service!\n"
# 296 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let's get happening!$"
# 297 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 298 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_YoureChampMaterial::
# 299 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 224 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 300 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Just as I thought!\n"
# 301 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're POKéMON champ material!$"
# 302 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 303 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_GymStatue::
# 304 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 229 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 305 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "PEWTER POKéMON GYM\n"
# 306 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEADER: BROCK\p"
# 307 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 308 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 309 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 310 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_GymStatuePlayerWon::
# 311 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 236 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
# 312 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "PEWTER POKéMON GYM\n"
# 313 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEADER: BROCK\p"
# 314 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 315 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
