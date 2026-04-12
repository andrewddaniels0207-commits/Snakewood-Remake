CinnabarIsland_Gym_Frlg_MapScripts::
# 2 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CinnabarIsland_Gym_OnLoad
	.byte 0


CinnabarIsland_Gym_OnLoad::
# 6 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_OnLoad_2
CinnabarIsland_Gym_OnLoad_1:
# 9 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_OnLoad_5
CinnabarIsland_Gym_OnLoad_4:
# 12 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_OnLoad_8
CinnabarIsland_Gym_OnLoad_7:
# 15 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_OnLoad_11
CinnabarIsland_Gym_OnLoad_10:
# 18 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_OnLoad_14
CinnabarIsland_Gym_OnLoad_13:
# 21 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_OnLoad_17
CinnabarIsland_Gym_OnLoad_16:
# 24 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_OnLoad_20
CinnabarIsland_Gym_OnLoad_19:
	end

CinnabarIsland_Gym_OnLoad_2:
# 7 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_OnLoadOpenAllDoors
	goto CinnabarIsland_Gym_OnLoad_1

CinnabarIsland_Gym_OnLoad_5:
# 10 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_OnLoadOpenDoor1
	goto CinnabarIsland_Gym_OnLoad_4

CinnabarIsland_Gym_OnLoad_8:
# 13 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_OnLoadOpenDoor2
	goto CinnabarIsland_Gym_OnLoad_7

CinnabarIsland_Gym_OnLoad_11:
# 16 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_OnLoadOpenDoor3
	goto CinnabarIsland_Gym_OnLoad_10

CinnabarIsland_Gym_OnLoad_14:
# 19 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_OnLoadOpenDoor4
	goto CinnabarIsland_Gym_OnLoad_13

CinnabarIsland_Gym_OnLoad_17:
# 22 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_OnLoadOpenDoor5
	goto CinnabarIsland_Gym_OnLoad_16

CinnabarIsland_Gym_OnLoad_20:
# 25 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_OnLoadOpenDoor6
	goto CinnabarIsland_Gym_OnLoad_19


CinnabarIsland_Gym_OnLoadOpenAllDoors::
# 31 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 32 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 33 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 34 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 35 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 36 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
	end


CinnabarIsland_Gym_OnLoadOpenDoor1::
# 41 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
	return


CinnabarIsland_Gym_OnLoadOpenDoor2::
# 46 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
	return


CinnabarIsland_Gym_OnLoadOpenDoor3::
# 51 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
	return


CinnabarIsland_Gym_OnLoadOpenDoor4::
# 56 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
	return


CinnabarIsland_Gym_OnLoadOpenDoor5::
# 61 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
	return


CinnabarIsland_Gym_OnLoadOpenDoor6::
# 66 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
	return


CinnabarIsland_Gym_EventScript_Blaine::
# 71 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 72 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE, CinnabarIsland_Gym_Text_BlaineIntro, CinnabarIsland_Gym_Text_BlaineDefeat, CinnabarIsland_Gym_EventScript_DefeatedBlaine, NO_MUSIC
# 73 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM38_FROM_BLAINE, CinnabarIsland_Gym_EventScript_Blaine_2
CinnabarIsland_Gym_EventScript_Blaine_1:
# 76 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlainePostBattle
# 77 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
	end

CinnabarIsland_Gym_EventScript_Blaine_2:
# 74 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38
	goto CinnabarIsland_Gym_EventScript_Blaine_1


CinnabarIsland_Gym_EventScript_DefeatedBlaine::
# 82 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 1
# 83 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_BLAINE
# 84 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE07_GET
# 85 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
# 86 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 1
# 87 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 88 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 7
# 89 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38
	end


CinnabarIsland_Gym_EventScript_GiveTM38::
# 94 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ExplainVolcanoBadge
# 95 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM38
# 96 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CinnabarIsland_Gym_EventScript_GiveTM38_2
CinnabarIsland_Gym_EventScript_GiveTM38_1:
# 99 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	giveitem_msg CinnabarIsland_Gym_Text_ReceivedTM38FromBlaine, ITEM_TM38
# 100 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM38_FROM_BLAINE
# 101 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_FireBlastIsUltimateFireMove
# 102 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
	end

CinnabarIsland_Gym_EventScript_GiveTM38_2:
# 97 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_NoRoomForTM38
	goto CinnabarIsland_Gym_EventScript_GiveTM38_1


CinnabarIsland_Gym_EventScript_NoRoomForTM38::
# 107 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_MakeSpaceForThis
# 108 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
	end


CinnabarIsland_Gym_EventScript_Erik::
# 113 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ERIK, CinnabarIsland_Gym_Text_ErikIntro, CinnabarIsland_Gym_Text_ErikDefeat
# 114 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_Avery::
# 119 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryIntro, CinnabarIsland_Gym_Text_AveryDefeat, CinnabarIsland_Gym_EventScript_DefeatedAvery
# 120 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedAvery::
# 125 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DefeatedAvery_2
CinnabarIsland_Gym_EventScript_DefeatedAvery_1:
# 128 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
	end

CinnabarIsland_Gym_EventScript_DefeatedAvery_2:
# 126 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer
	goto CinnabarIsland_Gym_EventScript_DefeatedAvery_1


CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer::
# 133 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
	return


CinnabarIsland_Gym_EventScript_Derek::
# 138 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekIntro, CinnabarIsland_Gym_Text_DerekDefeat, CinnabarIsland_Gym_EventScript_DefeatedDerek
# 139 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 2
# 140 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedDerek::
# 145 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DefeatedDerek_2
CinnabarIsland_Gym_EventScript_DefeatedDerek_1:
# 148 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
	end

CinnabarIsland_Gym_EventScript_DefeatedDerek_2:
# 146 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer
	goto CinnabarIsland_Gym_EventScript_DefeatedDerek_1


CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer::
# 153 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
	return


CinnabarIsland_Gym_EventScript_Zac::
# 158 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacIntro, CinnabarIsland_Gym_Text_ZacDefeat, CinnabarIsland_Gym_EventScript_DefeatedZac
# 159 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedZac::
# 164 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DefeatedZac_2
CinnabarIsland_Gym_EventScript_DefeatedZac_1:
# 167 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
	end

CinnabarIsland_Gym_EventScript_DefeatedZac_2:
# 165 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer
	goto CinnabarIsland_Gym_EventScript_DefeatedZac_1


CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer::
# 172 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
	return


CinnabarIsland_Gym_EventScript_Quinn::
# 177 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnIntro, CinnabarIsland_Gym_Text_QuinnDefeat, CinnabarIsland_Gym_EventScript_DefeatedQuinn
# 178 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedQuinn::
# 183 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DefeatedQuinn_2
CinnabarIsland_Gym_EventScript_DefeatedQuinn_1:
# 186 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
	end

CinnabarIsland_Gym_EventScript_DefeatedQuinn_2:
# 184 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer
	goto CinnabarIsland_Gym_EventScript_DefeatedQuinn_1


CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer::
# 191 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
	return


CinnabarIsland_Gym_EventScript_Ramon::
# 196 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonIntro, CinnabarIsland_Gym_Text_RamonDefeat, CinnabarIsland_Gym_EventScript_DefeatedRamon
# 197 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedRamon::
# 202 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DefeatedRamon_2
CinnabarIsland_Gym_EventScript_DefeatedRamon_1:
# 205 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
	end

CinnabarIsland_Gym_EventScript_DefeatedRamon_2:
# 203 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer
	goto CinnabarIsland_Gym_EventScript_DefeatedRamon_1


CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer::
# 210 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
	return


CinnabarIsland_Gym_EventScript_Dusty::
# 215 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyIntro, CinnabarIsland_Gym_Text_DustyDefeat, CinnabarIsland_Gym_EventScript_DefeatedDusty
# 216 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarIsland_Gym_EventScript_DefeatedDusty::
# 221 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DefeatedDusty_2
CinnabarIsland_Gym_EventScript_DefeatedDusty_1:
# 224 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
	end

CinnabarIsland_Gym_EventScript_DefeatedDusty_2:
# 222 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer
	goto CinnabarIsland_Gym_EventScript_DefeatedDusty_1


CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer::
# 229 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
	return


CinnabarIsland_Gym_EventScript_GymGuy::
# 234 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lock
# 235 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	faceplayer
# 236 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_EventScript_GymGuy_2
CinnabarIsland_Gym_EventScript_GymGuy_1:
# 239 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyAdvice
# 240 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
	end

CinnabarIsland_Gym_EventScript_GymGuy_2:
# 237 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GymGuyPostVictory
	goto CinnabarIsland_Gym_EventScript_GymGuy_1


CinnabarIsland_Gym_EventScript_GymGuyPostVictory::
# 245 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyPostVictory
# 246 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	release
	end


CinnabarIsland_Gym_EventScript_GymStatue::
# 251 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 252 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CinnabarIsland_Gym_EventScript_GymStatue_2
CinnabarIsland_Gym_EventScript_GymStatue_1:
# 255 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatue
# 256 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_GymStatue_2:
# 253 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GymStatuePostVictory
	goto CinnabarIsland_Gym_EventScript_GymStatue_1


CinnabarIsland_Gym_EventScript_GymStatuePostVictory::
# 261 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatuePlayerWon
# 262 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_Quz1Left::
# 267 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 268 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 269 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
	end


CinnabarIsland_Gym_EventScript_Quz1Right::
# 274 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 275 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 276 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
	end


CinnabarIsland_Gym_EventScript_Quiz1::
# 281 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 282 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion1, MSGBOX_YESNO
# 283 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz1_2
CinnabarIsland_Gym_EventScript_Quiz1_1:
# 286 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz1_5
CinnabarIsland_Gym_EventScript_Quiz1_4:
	end

CinnabarIsland_Gym_EventScript_Quiz1_2:
# 284 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1Correct
	goto CinnabarIsland_Gym_EventScript_Quiz1_1

CinnabarIsland_Gym_EventScript_Quiz1_5:
# 287 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1Incorrect
	goto CinnabarIsland_Gym_EventScript_Quiz1_4


CinnabarIsland_Gym_EventScript_CorrectAnswer::
# 293 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 294 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitfanfare
# 295 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_CorrectGoOnThrough
	return


CinnabarIsland_Gym_EventScript_IncorrectAnswer::
# 300 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 301 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_BOO
# 302 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 303 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_SorryBadCall
# 304 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	closemessage
	return


CinnabarIsland_Gym_EventScript_Quiz1Correct::
# 309 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 310 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_Quiz1Correct_2
CinnabarIsland_Gym_EventScript_Quiz1Correct_1:
# 313 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 314 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz1Correct_2:
# 311 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	goto CinnabarIsland_Gym_EventScript_Quiz1Correct_1


CinnabarIsland_Gym_EventScript_Quiz1Complete::
# 319 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 320 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 321 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 322 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 323 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_1
	return


CinnabarIsland_Gym_EventScript_DoorAlreadyOpen::
# 328 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_Quiz1Incorrect::
# 333 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 334 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_EventScript_BattleQuinn
# 335 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_BattleQuinn::
# 340 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleQuinn_2
CinnabarIsland_Gym_EventScript_BattleQuinn_1:
# 343 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleQuinn_5
CinnabarIsland_Gym_EventScript_BattleQuinn_4:
# 346 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 347 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnIntro
# 348 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnDefeat
# 349 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_BattleQuinn_8
CinnabarIsland_Gym_EventScript_BattleQuinn_7:
# 352 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 353 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_BattleQuinn_2:
# 341 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_QuinnApproachLeft
	goto CinnabarIsland_Gym_EventScript_BattleQuinn_1

CinnabarIsland_Gym_EventScript_BattleQuinn_5:
# 344 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_QuinnApproachRight
	goto CinnabarIsland_Gym_EventScript_BattleQuinn_4

CinnabarIsland_Gym_EventScript_BattleQuinn_8:
# 350 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	goto CinnabarIsland_Gym_EventScript_BattleQuinn_7


CinnabarIsland_Gym_EventScript_QuinnApproachLeft::
# 358 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 359 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachLeft
# 360 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_Gym_EventScript_QuinnApproachRight::
# 365 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 366 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachRight
# 367 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
	return


# 371 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachLeft:
# 372 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 373 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 374 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end

# 377 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachRight:
# 378 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 379 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_Quiz2Left::
# 383 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 384 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 385 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
	end


CinnabarIsland_Gym_EventScript_Quiz2Right::
# 390 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 391 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 392 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
	end


CinnabarIsland_Gym_EventScript_Quiz2::
# 397 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 398 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion2, MSGBOX_YESNO
# 399 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz2_2
CinnabarIsland_Gym_EventScript_Quiz2_1:
# 402 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz2_5
CinnabarIsland_Gym_EventScript_Quiz2_4:
	end

CinnabarIsland_Gym_EventScript_Quiz2_2:
# 400 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2Incorrect
	goto CinnabarIsland_Gym_EventScript_Quiz2_1

CinnabarIsland_Gym_EventScript_Quiz2_5:
# 403 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2Correct
	goto CinnabarIsland_Gym_EventScript_Quiz2_4


CinnabarIsland_Gym_EventScript_Quiz2Correct::
# 409 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 410 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_Quiz2Correct_2
CinnabarIsland_Gym_EventScript_Quiz2Correct_1:
# 413 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 414 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz2Correct_2:
# 411 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	goto CinnabarIsland_Gym_EventScript_Quiz2Correct_1


CinnabarIsland_Gym_EventScript_Quiz2Complete::
# 419 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 420 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 421 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 422 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 423 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_2
	return


CinnabarIsland_Gym_EventScript_Quiz2Incorrect::
# 428 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 429 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_EventScript_BattleAvery
# 430 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_BattleAvery::
# 435 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleAvery_2
CinnabarIsland_Gym_EventScript_BattleAvery_1:
# 438 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleAvery_5
CinnabarIsland_Gym_EventScript_BattleAvery_4:
# 441 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 442 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryIntro
# 443 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryDefeat
# 444 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_BattleAvery_8
CinnabarIsland_Gym_EventScript_BattleAvery_7:
# 447 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 448 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_BattleAvery_2:
# 436 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_AveryApproachLeft
	goto CinnabarIsland_Gym_EventScript_BattleAvery_1

CinnabarIsland_Gym_EventScript_BattleAvery_5:
# 439 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_AveryApproachRight
	goto CinnabarIsland_Gym_EventScript_BattleAvery_4

CinnabarIsland_Gym_EventScript_BattleAvery_8:
# 445 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	goto CinnabarIsland_Gym_EventScript_BattleAvery_7


CinnabarIsland_Gym_EventScript_AveryApproachLeft::
# 453 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 454 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachLeft
# 455 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_Gym_EventScript_AveryApproachRight::
# 460 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 461 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachRight
# 462 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
	return


# 466 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachLeft:
# 467 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_up
# 468 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_up
# 469 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 470 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end

# 473 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachRight:
# 474 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_up
# 475 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_up
# 476 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_in_place_faster_left
# 477 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end

# 480 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_PlayerFaceAvery:
# 481 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	delay_16
# 482 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	delay_16
# 483 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_in_place_faster_right
# 484 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_Quiz3Left::
# 488 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 489 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 490 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
	end


CinnabarIsland_Gym_EventScript_Quiz3Right::
# 495 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 496 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 497 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
	end


CinnabarIsland_Gym_EventScript_Quiz3::
# 502 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 503 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion3, MSGBOX_YESNO
# 504 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz3_2
CinnabarIsland_Gym_EventScript_Quiz3_1:
# 507 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz3_5
CinnabarIsland_Gym_EventScript_Quiz3_4:
	end

CinnabarIsland_Gym_EventScript_Quiz3_2:
# 505 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3Incorrect
	goto CinnabarIsland_Gym_EventScript_Quiz3_1

CinnabarIsland_Gym_EventScript_Quiz3_5:
# 508 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3Correct
	goto CinnabarIsland_Gym_EventScript_Quiz3_4


CinnabarIsland_Gym_EventScript_Quiz3Correct::
# 514 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 515 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_Quiz3Correct_2
CinnabarIsland_Gym_EventScript_Quiz3Correct_1:
# 518 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 519 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz3Correct_2:
# 516 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	goto CinnabarIsland_Gym_EventScript_Quiz3Correct_1


CinnabarIsland_Gym_EventScript_Quiz3Complete::
# 524 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 525 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 526 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 527 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 528 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_3
	return


CinnabarIsland_Gym_EventScript_Quiz3Incorrect::
# 533 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 534 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_EventScript_BattleRamon
# 535 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_BattleRamon::
# 540 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleRamon_2
CinnabarIsland_Gym_EventScript_BattleRamon_1:
# 543 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleRamon_5
CinnabarIsland_Gym_EventScript_BattleRamon_4:
# 546 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 547 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonIntro
# 548 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonDefeat
# 549 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_BattleRamon_8
CinnabarIsland_Gym_EventScript_BattleRamon_7:
# 552 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 553 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_BattleRamon_2:
# 541 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_RamonApproachLeft
	goto CinnabarIsland_Gym_EventScript_BattleRamon_1

CinnabarIsland_Gym_EventScript_BattleRamon_5:
# 544 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_RamonApproachRight
	goto CinnabarIsland_Gym_EventScript_BattleRamon_4

CinnabarIsland_Gym_EventScript_BattleRamon_8:
# 550 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	goto CinnabarIsland_Gym_EventScript_BattleRamon_7


CinnabarIsland_Gym_EventScript_RamonApproachLeft::
# 558 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 559 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachLeft
# 560 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_Gym_EventScript_RamonApproachRight::
# 565 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 566 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachRight
# 567 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
	return


# 571 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachLeft:
# 572 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 573 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 574 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end

# 577 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachRight:
# 578 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 579 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_Quiz4Left::
# 583 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 584 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 585 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
	end


CinnabarIsland_Gym_EventScript_Quiz4Right::
# 590 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 591 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 592 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
	end


CinnabarIsland_Gym_EventScript_Quiz4::
# 597 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 598 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion4, MSGBOX_YESNO
# 599 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz4_2
CinnabarIsland_Gym_EventScript_Quiz4_1:
# 602 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz4_5
CinnabarIsland_Gym_EventScript_Quiz4_4:
	end

CinnabarIsland_Gym_EventScript_Quiz4_2:
# 600 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4Incorrect
	goto CinnabarIsland_Gym_EventScript_Quiz4_1

CinnabarIsland_Gym_EventScript_Quiz4_5:
# 603 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4Correct
	goto CinnabarIsland_Gym_EventScript_Quiz4_4


CinnabarIsland_Gym_EventScript_Quiz4Correct::
# 609 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 610 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_Quiz4Correct_2
CinnabarIsland_Gym_EventScript_Quiz4Correct_1:
# 613 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 614 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz4Correct_2:
# 611 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	goto CinnabarIsland_Gym_EventScript_Quiz4Correct_1


CinnabarIsland_Gym_EventScript_Quiz4Complete::
# 619 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 620 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 621 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 622 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 623 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_4
	return


CinnabarIsland_Gym_EventScript_Quiz4Incorrect::
# 628 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 629 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_EventScript_BattleDerek
# 630 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_BattleDerek::
# 635 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleDerek_2
CinnabarIsland_Gym_EventScript_BattleDerek_1:
# 638 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleDerek_5
CinnabarIsland_Gym_EventScript_BattleDerek_4:
# 641 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 642 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekIntro
# 643 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekDefeat
# 644 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_BattleDerek_8
CinnabarIsland_Gym_EventScript_BattleDerek_7:
# 647 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 648 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_BattleDerek_2:
# 636 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_DerekApproachLeft
	goto CinnabarIsland_Gym_EventScript_BattleDerek_1

CinnabarIsland_Gym_EventScript_BattleDerek_5:
# 639 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_DerekApproachRight
	goto CinnabarIsland_Gym_EventScript_BattleDerek_4

CinnabarIsland_Gym_EventScript_BattleDerek_8:
# 645 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	goto CinnabarIsland_Gym_EventScript_BattleDerek_7


CinnabarIsland_Gym_EventScript_DerekApproachLeft::
# 653 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 654 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachLeft
# 655 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_Gym_EventScript_DerekApproachRight::
# 660 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 661 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachRight
# 662 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
	return


# 666 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachLeft:
# 667 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 668 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 669 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end

# 672 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachRight:
# 673 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 674 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_Quiz5Left::
# 678 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 679 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 680 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
	end


CinnabarIsland_Gym_EventScript_Quiz5Right::
# 685 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 686 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 687 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
	end


CinnabarIsland_Gym_EventScript_Quiz5::
# 692 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 693 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion5, MSGBOX_YESNO
# 694 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz5_2
CinnabarIsland_Gym_EventScript_Quiz5_1:
# 697 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz5_5
CinnabarIsland_Gym_EventScript_Quiz5_4:
	end

CinnabarIsland_Gym_EventScript_Quiz5_2:
# 695 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5Correct
	goto CinnabarIsland_Gym_EventScript_Quiz5_1

CinnabarIsland_Gym_EventScript_Quiz5_5:
# 698 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5Incorrect
	goto CinnabarIsland_Gym_EventScript_Quiz5_4


CinnabarIsland_Gym_EventScript_Quiz5Correct::
# 704 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 705 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_Quiz5Correct_2
CinnabarIsland_Gym_EventScript_Quiz5Correct_1:
# 708 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 709 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz5Correct_2:
# 706 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	goto CinnabarIsland_Gym_EventScript_Quiz5Correct_1


CinnabarIsland_Gym_EventScript_Quiz5Complete::
# 714 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 715 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 716 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 717 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 718 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_5
	return


CinnabarIsland_Gym_EventScript_Quiz5Incorrect::
# 723 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 724 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_EventScript_BattleDusty
# 725 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_BattleDusty::
# 730 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleDusty_2
CinnabarIsland_Gym_EventScript_BattleDusty_1:
# 733 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleDusty_5
CinnabarIsland_Gym_EventScript_BattleDusty_4:
# 736 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 737 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyIntro
# 738 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyDefeat
# 739 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_BattleDusty_8
CinnabarIsland_Gym_EventScript_BattleDusty_7:
# 742 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 743 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_BattleDusty_2:
# 731 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_DustyApproachLeft
	goto CinnabarIsland_Gym_EventScript_BattleDusty_1

CinnabarIsland_Gym_EventScript_BattleDusty_5:
# 734 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_DustyApproachRight
	goto CinnabarIsland_Gym_EventScript_BattleDusty_4

CinnabarIsland_Gym_EventScript_BattleDusty_8:
# 740 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	goto CinnabarIsland_Gym_EventScript_BattleDusty_7


CinnabarIsland_Gym_EventScript_DustyApproachLeft::
# 748 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 749 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachLeft
# 750 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_Gym_EventScript_DustyApproachRight::
# 755 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 756 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachRight
# 757 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
	return


# 761 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachLeft:
# 762 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 763 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 764 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end

# 767 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachRight:
# 768 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 769 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_Quiz6Left::
# 773 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 774 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 775 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
	end


CinnabarIsland_Gym_EventScript_Quiz6Right::
# 780 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	lockall
# 781 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 782 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
	end


CinnabarIsland_Gym_EventScript_Quiz6::
# 787 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 788 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion6, MSGBOX_YESNO
# 789 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz6_2
CinnabarIsland_Gym_EventScript_Quiz6_1:
# 792 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CinnabarIsland_Gym_EventScript_Quiz6_5
CinnabarIsland_Gym_EventScript_Quiz6_4:
	end

CinnabarIsland_Gym_EventScript_Quiz6_2:
# 790 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6Incorrect
	goto CinnabarIsland_Gym_EventScript_Quiz6_1

CinnabarIsland_Gym_EventScript_Quiz6_5:
# 793 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6Correct
	goto CinnabarIsland_Gym_EventScript_Quiz6_4


CinnabarIsland_Gym_EventScript_Quiz6Correct::
# 799 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 800 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_Quiz6Correct_2
CinnabarIsland_Gym_EventScript_Quiz6Correct_1:
# 803 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 804 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_Quiz6Correct_2:
# 801 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	goto CinnabarIsland_Gym_EventScript_Quiz6Correct_1


CinnabarIsland_Gym_EventScript_Quiz6Complete::
# 809 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	playse SE_UNLOCK
# 810 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitse
# 811 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 812 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	special DrawWholeMapView
# 813 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_6
	return


CinnabarIsland_Gym_EventScript_Quiz6Incorrect::
# 818 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 819 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_EventScript_BattleZac
# 820 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end


CinnabarIsland_Gym_EventScript_BattleZac::
# 825 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleZac_2
CinnabarIsland_Gym_EventScript_BattleZac_1:
# 828 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq CinnabarIsland_Gym_EventScript_BattleZac_5
CinnabarIsland_Gym_EventScript_BattleZac_4:
# 831 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 832 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacIntro
# 833 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacDefeat
# 834 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_BattleZac_8
CinnabarIsland_Gym_EventScript_BattleZac_7:
# 837 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 838 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	releaseall
	end

CinnabarIsland_Gym_EventScript_BattleZac_2:
# 826 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_ZacApproachLeft
	goto CinnabarIsland_Gym_EventScript_BattleZac_1

CinnabarIsland_Gym_EventScript_BattleZac_5:
# 829 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	call CinnabarIsland_Gym_EventScript_ZacApproachRight
	goto CinnabarIsland_Gym_EventScript_BattleZac_4

CinnabarIsland_Gym_EventScript_BattleZac_8:
# 835 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
	goto CinnabarIsland_Gym_EventScript_BattleZac_7


CinnabarIsland_Gym_EventScript_ZacApproachLeft::
# 843 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 844 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachLeft
# 845 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
	return


CinnabarIsland_Gym_EventScript_ZacApproachRight::
# 850 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 851 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachRight
# 852 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	waitmovement 0
	return


# 856 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachLeft:
# 857 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 858 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 859 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end

# 862 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachRight:
# 863 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	walk_left
# 864 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_OpenDoor1::
# 868 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 26, 8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 869 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 27, 8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 870 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 26, 9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 871 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 27, 9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 872 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 26, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 873 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 27, 10, METATILE_CinnabarGym_Floor, 0
# 874 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 28, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor2::
# 879 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 880 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 881 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 882 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 883 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 884 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 10, METATILE_CinnabarGym_Floor, 0
# 885 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 19, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor3::
# 890 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 15, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 891 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 15, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 892 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 16, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 893 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 16, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 894 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 17, 17, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 895 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 18, 17, METATILE_CinnabarGym_Floor, 0
# 896 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 19, 17, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor4::
# 901 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 11, 21, METATILE_CinnabarGym_Wall_RetractedBarrier, 1
# 902 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 11, 22, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 903 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 11, 23, METATILE_CinnabarGym_Floor, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor5::
# 908 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 16, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 909 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 16, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 910 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 17, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 911 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 17, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 912 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 18, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 913 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 18, METATILE_CinnabarGym_Floor, 0
# 914 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 7, 18, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


CinnabarIsland_Gym_EventScript_OpenDoor6::
# 919 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 920 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 921 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 922 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 923 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 5, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 924 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 6, 10, METATILE_CinnabarGym_Floor, 0
# 925 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	setmetatile 7, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
	return


CinnabarIsland_Gym_Text_BlaineIntro::
# 929 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Hah!\p"
	.string "I am BLAINE, the red-hot LEADER\n"
	.string "of CINNABAR GYM!\p"
	.string "My fiery POKéMON are all rough\n"
	.string "and ready with intense heat!\p"
	.string "They incinerate all challengers!\p"
	.string "Hah!\n"
	.string "You better have BURN HEAL!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"

CinnabarIsland_Gym_Text_BlaineDefeat::
# 940 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I have burned down to nothing!\n"
	.string "Not even ashes remain!\p"
	.string "You have earned the VOLCANOBADGE.$"

CinnabarIsland_Gym_Text_FireBlastIsUltimateFireMove::
# 946 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "FIRE BLAST is the ultimate fire\n"
	.string "technique.\p"
	.string "Don't waste it on WATER POKéMON.$"

CinnabarIsland_Gym_Text_ExplainVolcanoBadge::
# 952 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Hah!\p"
	.string "The VOLCANOBADGE heightens the\n"
	.string "SPECIAL stats of your POKéMON.\p"
	.string "Here, you can have this, too!$"

CinnabarIsland_Gym_Text_ReceivedTM38FromBlaine::
# 959 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM38\n"
	.string "from BLAINE.$"

CinnabarIsland_Gym_Text_BlainePostBattle::
# 964 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "TM38 contains FIRE BLAST.\n"
	.string "Teach it to FIRE-type POKéMON.\p"
	.string "VULPIX or CHARMELEON would be\n"
	.string "ideal for that move.$"

CinnabarIsland_Gym_Text_MakeSpaceForThis::
# 971 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Make space for this, child!$"

CinnabarIsland_Gym_Text_ErikIntro::
# 975 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Do you know how hot POKéMON fire\n"
	.string "breath can get?$"

CinnabarIsland_Gym_Text_ErikDefeat::
# 980 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Yow!\n"
	.string "Hot, hot, hot!$"

CinnabarIsland_Gym_Text_ErikPostBattle::
# 985 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Fire, or to be more precise,\n"
	.string "combustion…\p"
	.string "…Oxygen in the air…\n"
	.string "Blah, blah, blah, blah…$"

CinnabarIsland_Gym_Text_QuinnIntro::
# 992 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I was a thief, but I went straight\n"
	.string "as a TRAINER.$"

CinnabarIsland_Gym_Text_QuinnDefeat::
# 997 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I surrender!$"

CinnabarIsland_Gym_Text_QuinnPostBattle::
# 1001 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I get this uncontrollable urge to\n"
	.string "steal other people's POKéMON.$"

CinnabarIsland_Gym_Text_AveryIntro::
# 1006 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I've studied POKéMON thoroughly.\n"
	.string "You can't win!$"

CinnabarIsland_Gym_Text_AveryDefeat::
# 1011 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Waah!\n"
	.string "My studies were insufficient!$"

CinnabarIsland_Gym_Text_AveryPostBattle::
# 1016 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "My theories are too complicated\n"
	.string "for you to understand.$"

CinnabarIsland_Gym_Text_RamonIntro::
# 1021 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I like using FIRE-type POKéMON.\n"
	.string "I just do.$"

CinnabarIsland_Gym_Text_RamonDefeat::
# 1026 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Too hot to handle!$"

CinnabarIsland_Gym_Text_RamonPostBattle::
# 1030 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I wish there were a thief POKéMON.\n"
	.string "I'd use that!$"

CinnabarIsland_Gym_Text_DerekIntro::
# 1035 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I know why BLAINE became a\n"
	.string "TRAINER.$"

CinnabarIsland_Gym_Text_DerekDefeat::
# 1040 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Ow!$"

CinnabarIsland_Gym_Text_DerekPostBattle::
# 1044 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Our LEADER, BLAINE, became lost\n"
	.string "in the mountains but good.\p"
	.string "Night fell when a fiery bird\n"
	.string "POKéMON appeared.\p"
	.string "Its light allowed BLAINE to find\n"
	.string "his way down safely.$"

CinnabarIsland_Gym_Text_DustyIntro::
# 1053 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "I've been to many GYMS, but this\n"
	.string "one best suits my style.$"

CinnabarIsland_Gym_Text_DustyDefeat::
# 1058 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Yowza!\n"
	.string "Too hot!$"

CinnabarIsland_Gym_Text_DustyPostBattle::
# 1063 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "PONYTA, NINETALES…\n"
	.string "Those are popular FIRE POKéMON.$"

CinnabarIsland_Gym_Text_ZacIntro::
# 1068 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Fire is weak against H2O.$"

CinnabarIsland_Gym_Text_ZacDefeat::
# 1072 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Oh!\n"
	.string "Snuffed out!$"

CinnabarIsland_Gym_Text_ZacPostBattle::
# 1077 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Water beats fire, of course.\p"
	.string "But fire melts ice, so the FIRE\n"
	.string "type beats ICE-type POKéMON.$"

CinnabarIsland_Gym_Text_GymGuyAdvice::
# 1083 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
	.string "Champ in the making!\p"
	.string "The hotheaded BLAINE is a FIRE\n"
	.string "POKéMON pro.\p"
	.string "Douse his spirits with water!\p"
	.string "You'd better take some\n"
	.string "BURN HEALS, too.$"

CinnabarIsland_Gym_Text_GymGuyPostVictory::
# 1093 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "{PLAYER}!\n"
	.string "You beat that firebrand!$"

CinnabarIsland_Gym_Text_GymStatue::
# 1098 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "CINNABAR POKéMON GYM\n"
	.string "LEADER: BLAINE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

CinnabarIsland_Gym_Text_GymStatuePlayerWon::
# 1105 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "CINNABAR POKéMON GYM\n"
	.string "LEADER: BLAINE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

CinnabarIsland_Gym_Text_PokemonQuizRules::
# 1112 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "POKéMON Quiz!\p"
	.string "Get it right, and the door opens to\n"
	.string "the next room.\p"
	.string "Get it wrong, and face a TRAINER!\p"
	.string "If you want to conserve your\n"
	.string "POKéMON for the GYM LEADER…\p"
	.string "Then get it right!\n"
	.string "Here we go!$"

CinnabarIsland_Gym_Text_QuizQuestion1::
# 1123 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "CATERPIE evolves into METAPOD?$"

CinnabarIsland_Gym_Text_QuizQuestion2::
# 1127 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "There are nine certified POKéMON\n"
	.string "LEAGUE BADGES?$"

CinnabarIsland_Gym_Text_QuizQuestion3::
# 1132 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "POLIWAG evolves three times?$"

CinnabarIsland_Gym_Text_QuizQuestion4::
# 1136 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Are electric moves effective\n"
	.string "against GROUND-type POKéMON?$"

CinnabarIsland_Gym_Text_QuizQuestion5::
# 1141 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "POKéMON of the same kind and level\n"
	.string "are not identical?$"

CinnabarIsland_Gym_Text_QuizQuestion6::
# 1146 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "TM28 contains TOMBSTONY?$"

CinnabarIsland_Gym_Text_CorrectGoOnThrough::
# 1150 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "You're absolutely correct!\p"
	.string "Go on through!$"

CinnabarIsland_Gym_Text_SorryBadCall::
# 1155 "data/maps/CinnabarIsland_Gym_Frlg/scripts.pory"
	.string "Sorry!\n"
	.string "Bad call!$"
