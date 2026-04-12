# 1 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 2 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Frlg_MapScripts::
# 3 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.byte 0
# 4 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 5 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 6 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Sabrina::
# 7 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 4 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 8 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 9 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 5 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 10 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_SABRINA, SaffronCity_Gym_Text_SabrinaIntro, SaffronCity_Gym_Text_SabrinaDefeat, SaffronCity_Gym_EventScript_DefeatedSabrina, NO_MUSIC
# 11 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 6 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 12 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM04_FROM_SABRINA, SaffronCity_Gym_EventScript_Sabrina_2
# 13 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Sabrina_1:
# 14 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 9 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 15 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainTM04
# 16 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 10 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 17 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	release
# 18 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 19 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 20 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Sabrina_2:
# 21 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 7 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 22 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto SaffronCity_Gym_EventScript_GiveTM04
# 23 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto SaffronCity_Gym_EventScript_Sabrina_1
# 24 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 25 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 26 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_DefeatedSabrina::
# 27 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 15 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 28 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 2
# 29 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 16 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 30 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 3
# 31 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 17 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 32 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS
# 33 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 18 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 34 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_SABRINA
# 35 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 19 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 36 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE06_GET
# 37 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 20 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 38 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 6
# 39 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 21 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 40 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto SaffronCity_Gym_EventScript_GiveTM04
# 41 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 42 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 43 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 44 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GiveTM04::
# 45 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 26 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 46 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis
# 47 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 27 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 48 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM04
# 49 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 28 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 50 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
# 51 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto_if_eq SaffronCity_Gym_EventScript_GiveTM04_2
# 52 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GiveTM04_1:
# 53 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 31 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 54 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	giveitem_msg SaffronCity_Gym_Text_ReceivedTM04FromSabrina, ITEM_TM04
# 55 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 32 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 56 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM04_FROM_SABRINA
# 57 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 33 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 58 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle
# 59 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 34 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 60 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	release
# 61 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 62 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 63 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GiveTM04_2:
# 64 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 29 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 65 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto SaffronCity_Gym_EventScript_NoRoomForTM04
# 66 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto SaffronCity_Gym_EventScript_GiveTM04_1
# 67 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 68 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 69 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_NoRoomForTM04::
# 70 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 39 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 71 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_BagFullOfOtherItems
# 72 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 40 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 73 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	release
# 74 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 75 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 76 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 77 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Johan::
# 78 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 45 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 79 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_JOHAN, SaffronCity_Gym_Text_JohanIntro, SaffronCity_Gym_Text_JohanDefeat
# 80 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 46 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 81 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_JohanPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 83 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 84 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 85 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Tyron::
# 86 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 51 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 87 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_TYRON, SaffronCity_Gym_Text_TyronIntro, SaffronCity_Gym_Text_TyronDefeat
# 88 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 52 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 89 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 5
# 90 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 53 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 91 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 93 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 94 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 95 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Cameron::
# 96 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 58 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 97 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_CAMERON, SaffronCity_Gym_Text_CameronIntro, SaffronCity_Gym_Text_CameronDefeat
# 98 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 59 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 99 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 101 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 102 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 103 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Preston::
# 104 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 64 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 105 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_PRESTON, SaffronCity_Gym_Text_PrestonIntro, SaffronCity_Gym_Text_PrestonDefeat
# 106 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 65 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 107 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 109 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 110 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 111 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Amanda::
# 112 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 70 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 113 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_AMANDA, SaffronCity_Gym_Text_AmandaIntro, SaffronCity_Gym_Text_AmandaDefeat
# 114 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 71 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 115 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_AmandaPostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 117 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 118 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 119 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Stacy::
# 120 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 76 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 121 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_STACY, SaffronCity_Gym_Text_StacyIntro, SaffronCity_Gym_Text_StacyDefeat
# 122 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 77 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 123 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_StacyPostBattle, MSGBOX_AUTOCLOSE
# 124 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 125 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 126 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 127 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_Tasha::
# 128 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 82 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 129 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_TASHA, SaffronCity_Gym_Text_TashaIntro, SaffronCity_Gym_Text_TashaDefeat
# 130 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 83 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 131 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
# 132 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 133 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 134 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 135 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GymGuy::
# 136 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 88 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 137 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	lock
# 138 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 89 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 139 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	faceplayer
# 140 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 90 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 141 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, SaffronCity_Gym_EventScript_GymGuy_2
# 142 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GymGuy_1:
# 143 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 93 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 144 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyAdvice
# 145 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 94 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 146 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	release
# 147 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 148 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 149 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GymGuy_2:
# 150 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 91 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 151 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto SaffronCity_Gym_EventScript_GymGuyPostVictory
# 152 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto SaffronCity_Gym_EventScript_GymGuy_1
# 153 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 154 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 155 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GymGuyPostVictory::
# 156 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 99 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 157 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyPostVictory
# 158 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 100 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 159 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	release
# 160 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 161 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 162 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 163 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GymStatue::
# 164 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 105 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 165 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	lockall
# 166 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 106 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 167 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, SaffronCity_Gym_EventScript_GymStatue_2
# 168 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GymStatue_1:
# 169 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 109 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 170 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatue
# 171 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 110 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 172 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	releaseall
# 173 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 174 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 175 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GymStatue_2:
# 176 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 107 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 177 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto SaffronCity_Gym_EventScript_GymStatuePostVictory
# 178 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	goto SaffronCity_Gym_EventScript_GymStatue_1
# 179 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 180 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 181 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_EventScript_GymStatuePostVictory::
# 182 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 115 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 183 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatuePlayerWon
# 184 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 116 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 185 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	releaseall
# 186 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	end
# 187 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 188 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 189 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_SabrinaIntro::
# 190 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 120 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 191 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I had a vision of your arrival.\p"
# 192 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I have had psychic powers since\n"
# 193 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I was a child.\p"
# 194 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "It started when a spoon I\n"
# 195 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "carelessly tossed, bent.\p"
# 196 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I dislike battling, but if you wish,\n"
# 197 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I will show you my powers!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 198 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 199 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_SabrinaDefeat::
# 200 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 130 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 201 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "This loss shocks me!\n"
# 202 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "But, a loss is a loss.\p"
# 203 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I admit, I didn't work hard enough\n"
# 204 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "to win.\p"
# 205 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Your victory has earned you the\n"
# 206 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "MARSHBADGE.$"
# 207 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 208 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_SabrinaPostBattle::
# 209 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 139 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 210 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Psychic power isn't something that\n"
# 211 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "only a few people have.\p"
# 212 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Everyone has psychic power.\n"
# 213 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "People just don't realize it.$"
# 214 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 215 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis::
# 216 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 146 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 217 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "The MARSHBADGE makes POKéMON up\n"
# 218 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "to Lv. 70 obey you.\p"
# 219 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Stronger POKéMON will become wild,\n"
# 220 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "ignoring your orders in battle.\p"
# 221 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Just don't raise your POKéMON too\n"
# 222 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "much to avoid that problem.\p"
# 223 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Wait, please take this TM with you.$"
# 224 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 225 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_ReceivedTM04FromSabrina::
# 226 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 156 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 227 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM04 from\n"
# 228 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SABRINA.$"
# 229 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 230 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_ExplainTM04::
# 231 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 161 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 232 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "TM04 is CALM MIND.\p"
# 233 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "It makes the POKéMON concentrate\n"
# 234 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "to raise both SP. ATK and SP. DEF.$"
# 235 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 236 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_BagFullOfOtherItems::
# 237 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 167 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 238 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Your BAG is full of other items.$"
# 239 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 240 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_AmandaIntro::
# 241 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 171 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 242 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SABRINA is far younger than I,\n"
# 243 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "but she has earned my respect.$"
# 244 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 245 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_AmandaDefeat::
# 246 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 176 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 247 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Not good enough!$"
# 248 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 249 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_AmandaPostBattle::
# 250 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 180 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 251 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "In a battle of equals, the one\n"
# 252 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "with the stronger will wins.\p"
# 253 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "If you wish to beat SABRINA, focus\n"
# 254 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "and will yourself to victory.$"
# 255 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 256 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_JohanIntro::
# 257 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 187 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 258 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Does our unseen power scare you?$"
# 259 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 260 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_JohanDefeat::
# 261 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 191 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 262 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I never foresaw this!$"
# 263 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 264 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_JohanPostBattle::
# 265 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 195 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 266 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "PSYCHIC POKéMON fear only ghosts\n"
# 267 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "and bugs!$"
# 268 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 269 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_StacyIntro::
# 270 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 200 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 271 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "POKéMON take on the appearance of\n"
# 272 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "their TRAINERS.\p"
# 273 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Your POKéMON must be tough, then!$"
# 274 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 275 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_StacyDefeat::
# 276 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 206 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 277 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I knew it!$"
# 278 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 279 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_StacyPostBattle::
# 280 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 210 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 281 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I have much to learn still…\p"
# 282 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I must master PSYCHIC and teach it\n"
# 283 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "to my POKéMON…$"
# 284 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 285 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_TyronIntro::
# 286 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 216 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 287 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "You understand, don't you?\p"
# 288 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "That power alone isn't enough to\n"
# 289 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "win in the world of POKéMON?$"
# 290 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 291 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_TyronDefeat::
# 292 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 222 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 293 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I don't believe this!$"
# 294 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 295 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_TyronPostBattle::
# 296 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 226 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 297 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SABRINA just wiped out the KARATE\n"
# 298 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "MASTER next door.$"
# 299 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 300 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_TashaIntro::
# 301 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 231 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 302 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "You and I, our POKéMON shall\n"
# 303 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "battle!$"
# 304 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 305 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_TashaDefeat::
# 306 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 236 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 307 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I lost after all!$"
# 308 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 309 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_TashaPostBattle::
# 310 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 240 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 311 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "I knew that this was going to take\n"
# 312 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "place.$"
# 313 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 314 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_CameronIntro::
# 315 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 245 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 316 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SABRINA is young, but she's also\n"
# 317 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "our highly skilled LEADER.\p"
# 318 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "You won't reach her easily!$"
# 319 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 320 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_CameronDefeat::
# 321 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 251 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 322 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Ow!\n"
# 323 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Down and out!$"
# 324 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 325 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_CameronPostBattle::
# 326 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 256 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 327 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "There used to be two POKéMON GYMS\n"
# 328 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "in SAFFRON.\p"
# 329 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "The FIGHTING DOJO next door lost\n"
# 330 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "its GYM status, though.\p"
# 331 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "We simply creamed them when we\n"
# 332 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "decided to have just one GYM.$"
# 333 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 334 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_PrestonIntro::
# 335 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 265 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 336 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SAFFRON POKéMON GYM is famous for\n"
# 337 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "training psychics.\p"
# 338 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "You want to see SABRINA, don't\n"
# 339 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "you? I can tell!$"
# 340 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 341 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_PrestonDefeat::
# 342 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 272 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 343 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Arrrgh!$"
# 344 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 345 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_PrestonPostBattle::
# 346 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 276 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 347 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "That's right! I used telepathy to\n"
# 348 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "read your mind!$"
# 349 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 350 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_GymGuyAdvice::
# 351 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 281 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 352 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 353 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 354 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SABRINA's POKéMON use psychic\n"
# 355 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "power instead of force.\p"
# 356 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "FIGHTING POKéMON are especially\n"
# 357 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "weak against PSYCHIC POKéMON.\p"
# 358 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "They'll get destroyed before they\n"
# 359 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "can even aim a punch!$"
# 360 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 361 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_GymGuyPostVictory::
# 362 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 292 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 363 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "Psychic power, huh?\p"
# 364 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "If I had that, I'd make a bundle\n"
# 365 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "at the slots!$"
# 366 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 367 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_GymStatue::
# 368 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 298 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 369 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SAFFRON POKéMON GYM\n"
# 370 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "LEADER: SABRINA\p"
# 371 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 372 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 373 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"

# 374 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
SaffronCity_Gym_Text_GymStatuePlayerWon::
# 375 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 305 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
# 376 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "SAFFRON POKéMON GYM\n"
# 377 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "LEADER: SABRINA\p"
# 378 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 379 "data/maps/SaffronCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
