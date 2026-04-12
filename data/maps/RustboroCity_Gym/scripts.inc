# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"

# 6 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
# 4 "data/maps/RustboroCity_Gym/scripts.pory"
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
# 5 "data/maps/RustboroCity_Gym/scripts.pory"
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_2
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne_1:
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_Roxanne_5
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne_4:
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 23 "data/maps/RustboroCity_Gym/scripts.pory"

# 24 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne_2:
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RoxanneRematch
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_Roxanne_1
# 28 "data/maps/RustboroCity_Gym/scripts.pory"

# 29 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne_5:
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_Roxanne_4
# 33 "data/maps/RustboroCity_Gym/scripts.pory"

# 34 "data/maps/RustboroCity_Gym/scripts.pory"

# 35 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq RustboroCity_Gym_EventScript_RoxanneDefeated_2
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated_1:
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 63 "data/maps/RustboroCity_Gym/scripts.pory"

# 64 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated_2:
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_ReadyPetalburgGymForBattle
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RoxanneDefeated_1
# 68 "data/maps/RustboroCity_Gym/scripts.pory"

# 69 "data/maps/RustboroCity_Gym/scripts.pory"

# 70 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq RustboroCity_Gym_EventScript_GiveRockTomb_2
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb_1:
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 84 "data/maps/RustboroCity_Gym/scripts.pory"

# 85 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb_2:
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb_1
# 89 "data/maps/RustboroCity_Gym/scripts.pory"

# 90 "data/maps/RustboroCity_Gym/scripts.pory"

# 91 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 97 "data/maps/RustboroCity_Gym/scripts.pory"

# 98 "data/maps/RustboroCity_Gym/scripts.pory"

# 99 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 105 "data/maps/RustboroCity_Gym/scripts.pory"

# 106 "data/maps/RustboroCity_Gym/scripts.pory"

# 107 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 113 "data/maps/RustboroCity_Gym/scripts.pory"

# 114 "data/maps/RustboroCity_Gym/scripts.pory"

# 115 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 121 "data/maps/RustboroCity_Gym/scripts.pory"

# 122 "data/maps/RustboroCity_Gym/scripts.pory"

# 123 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuide_2
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide_1:
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 136 "data/maps/RustboroCity_Gym/scripts.pory"

# 137 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide_2:
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymGuidePostVictory
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymGuide_1
# 141 "data/maps/RustboroCity_Gym/scripts.pory"

# 142 "data/maps/RustboroCity_Gym/scripts.pory"

# 143 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 149 "data/maps/RustboroCity_Gym/scripts.pory"

# 150 "data/maps/RustboroCity_Gym/scripts.pory"

# 151 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_LeftGymStatue_2
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue_1:
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 160 "data/maps/RustboroCity_Gym/scripts.pory"

# 161 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue_2:
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatueCertified
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_LeftGymStatue_1
# 165 "data/maps/RustboroCity_Gym/scripts.pory"

# 166 "data/maps/RustboroCity_Gym/scripts.pory"

# 167 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
# 171 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_RightGymStatue_2
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue_1:
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 176 "data/maps/RustboroCity_Gym/scripts.pory"

# 177 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue_2:
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatueCertified
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RightGymStatue_1
# 181 "data/maps/RustboroCity_Gym/scripts.pory"

# 182 "data/maps/RustboroCity_Gym/scripts.pory"

# 183 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 189 "data/maps/RustboroCity_Gym/scripts.pory"

# 190 "data/maps/RustboroCity_Gym/scripts.pory"

# 191 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 197 "data/maps/RustboroCity_Gym/scripts.pory"

# 198 "data/maps/RustboroCity_Gym/scripts.pory"

# 199 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 225 "data/maps/RustboroCity_Gym/scripts.pory"

# 226 "data/maps/RustboroCity_Gym/scripts.pory"

# 227 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice::
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON CHAMPIONSHIP together!\p"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But GYM LEADERS aren't pushovers!\p"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE, the GYM LEADER, is a user\n"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type POKéMON.\p"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the GYM LEADER.\p"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"

# 250 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory::
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"

# 263 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro::
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"

# 268 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat::
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"

# 272 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle::
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"

# 277 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro::
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ROXANNE!$"
# 281 "data/maps/RustboroCity_Gym/scripts.pory"

# 282 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat::
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"

# 286 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle::
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE is stronger than me by\n"
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 291 "data/maps/RustboroCity_Gym/scripts.pory"

# 292 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro::
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK POKéMON need room to\n"
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 298 "data/maps/RustboroCity_Gym/scripts.pory"

# 299 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat::
# 300 "data/maps/RustboroCity_Gym/scripts.pory"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 303 "data/maps/RustboroCity_Gym/scripts.pory"

# 304 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle::
# 305 "data/maps/RustboroCity_Gym/scripts.pory"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
# 306 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 309 "data/maps/RustboroCity_Gym/scripts.pory"

# 310 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro::
# 311 "data/maps/RustboroCity_Gym/scripts.pory"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
# 313 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON GYM LEADER.\p"
# 314 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a GYM LEADER so that I might\n"
# 315 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the POKéMON\l"
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINER'S SCHOOL in battle.\p"
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 318 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which POKéMON?$"
# 319 "data/maps/RustboroCity_Gym/scripts.pory"

# 320 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat::
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
# 322 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 323 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 324 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 325 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 326 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 327 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE's rules state\n"
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 329 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a GYM LEADER.\p"
# 330 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official POKéMON\n"
# 331 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 332 "data/maps/RustboroCity_Gym/scripts.pory"

# 333 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge::
# 334 "data/maps/RustboroCity_Gym/scripts.pory"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
# 335 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 336 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ROXANNE.$"
# 337 "data/maps/RustboroCity_Gym/scripts.pory"

# 338 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis::
# 339 "data/maps/RustboroCity_Gym/scripts.pory"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
# 340 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE heightens the ATTACK\n"
# 341 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "power of your POKéMON.\p"
# 342 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It also enables them to use the HM move\n"
# 343 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "CUT outside of battle.\p"
# 344 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 345 "data/maps/RustboroCity_Gym/scripts.pory"

# 346 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb::
# 347 "data/maps/RustboroCity_Gym/scripts.pory"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
# 348 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 350 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 351 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 352 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 353 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 354 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Remember, a TM can be used only once,\n"
# 355 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so think before you use it.$"
# 356 "data/maps/RustboroCity_Gym/scripts.pory"

# 357 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle::
# 358 "data/maps/RustboroCity_Gym/scripts.pory"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
# 359 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 360 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 361 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 362 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 363 "data/maps/RustboroCity_Gym/scripts.pory"

# 364 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue::
# 365 "data/maps/RustboroCity_Gym/scripts.pory"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
# 366 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM$"
# 367 "data/maps/RustboroCity_Gym/scripts.pory"

# 368 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified::
# 369 "data/maps/RustboroCity_Gym/scripts.pory"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
# 370 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\p"
# 371 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
# 372 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 373 "data/maps/RustboroCity_Gym/scripts.pory"

# 374 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall::
# 375 "data/maps/RustboroCity_Gym/scripts.pory"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"
# 376 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 377 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 378 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 379 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 380 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 381 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 382 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 383 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 384 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 385 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 386 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 387 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 388 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 389 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 390 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 391 "data/maps/RustboroCity_Gym/scripts.pory"

# 392 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne::
# 393 "data/maps/RustboroCity_Gym/scripts.pory"
# 298 "data/maps/RustboroCity_Gym/scripts.pory"
# 394 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 395 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 396 "data/maps/RustboroCity_Gym/scripts.pory"

# 397 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch::
# 398 "data/maps/RustboroCity_Gym/scripts.pory"
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
# 399 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 400 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 401 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 402 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 403 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 404 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 405 "data/maps/RustboroCity_Gym/scripts.pory"

# 406 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat::
# 407 "data/maps/RustboroCity_Gym/scripts.pory"
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
# 408 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 409 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 410 "data/maps/RustboroCity_Gym/scripts.pory"

# 411 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch::
# 412 "data/maps/RustboroCity_Gym/scripts.pory"
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
# 413 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 414 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 415 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 416 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 417 "data/maps/RustboroCity_Gym/scripts.pory"

# 418 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons::
# 419 "data/maps/RustboroCity_Gym/scripts.pory"
# 324 "data/maps/RustboroCity_Gym/scripts.pory"
# 420 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 421 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 422 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 423 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 424 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 425 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 426 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 427 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 428 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 429 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "POKéMON.$"
