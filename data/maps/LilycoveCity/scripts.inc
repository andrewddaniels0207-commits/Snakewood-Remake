LilycoveCity_MapScripts::
# 2 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 3 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
	.byte 0


LilycoveCity_OnTransition::
# 7 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 8 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 9 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 10 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, LilycoveCity_OnTransition_2
LilycoveCity_OnTransition_1:
# 13 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	end

LilycoveCity_OnTransition_2:
# 11 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto LilycoveCity_OnTransition_1


LilycoveCity_OnLoad::
# 18 "data/maps/LilycoveCity/scripts.pory"
	goto_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_OnLoad_2
LilycoveCity_OnLoad_1:
	end

LilycoveCity_OnLoad_2:
# 19 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_SetWailmerMetatiles
	goto LilycoveCity_OnLoad_1


LilycoveCity_EventScript_SetWailmerMetatiles::
# 25 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 26 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 27 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 32 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 33 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 34 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 35 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 36 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
	return


LilycoveCity_EventScript_BerryGentleman::
# 41 "data/maps/LilycoveCity/scripts.pory"
	lock
# 42 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 43 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 44 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_BerryGentleman_2
LilycoveCity_EventScript_BerryGentleman_1:
# 47 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 48 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 49 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 50 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 51 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_EventScript_BerryGentleman_5
LilycoveCity_EventScript_BerryGentleman_4:
# 54 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 55 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 56 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_BerryGentleman_2:
# 45 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_ReceivedBerry
	goto LilycoveCity_EventScript_BerryGentleman_1

LilycoveCity_EventScript_BerryGentleman_5:
# 52 "data/maps/LilycoveCity/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto LilycoveCity_EventScript_BerryGentleman_4


LilycoveCity_EventScript_ReceivedBerry::
# 61 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 62 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_Man3::
# 67 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
	end


LilycoveCity_EventScript_Girl::
# 72 "data/maps/LilycoveCity/scripts.pory"
	lock
# 73 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 74 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_Girl_2
LilycoveCity_EventScript_Girl_1:
# 77 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 78 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_Girl_2:
# 75 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_GirlAquaGone
	goto LilycoveCity_EventScript_Girl_1


LilycoveCity_EventScript_GirlAquaGone::
# 83 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 84 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_RichBoy::
# 89 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
	end


LilycoveCity_EventScript_Sailor2::
# 94 "data/maps/LilycoveCity/scripts.pory"
	lock
# 95 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 96 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2_2
LilycoveCity_EventScript_Sailor2_1:
# 99 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 100 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_Sailor2_2:
# 97 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Sailor2AquaGone
	goto LilycoveCity_EventScript_Sailor2_1


LilycoveCity_EventScript_Sailor2AquaGone::
# 105 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 106 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_Woman2::
# 111 "data/maps/LilycoveCity/scripts.pory"
	lock
# 112 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 113 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2_2
LilycoveCity_EventScript_Woman2_1:
# 116 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 117 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_Woman2_2:
# 114 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Woman2AquaGone
	goto LilycoveCity_EventScript_Woman2_1


LilycoveCity_EventScript_Woman2AquaGone::
# 122 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 123 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_Man2::
# 128 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
	end


LilycoveCity_EventScript_ExpertM1::
# 133 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
	end


LilycoveCity_EventScript_ExpertF::
# 138 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
	end


LilycoveCity_EventScript_ExpertM2::
# 143 "data/maps/LilycoveCity/scripts.pory"
	lock
# 144 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 145 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2_2
LilycoveCity_EventScript_ExpertM2_1:
# 148 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 149 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_ExpertM2_2:
# 146 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_ExpertM2AquaGone
	goto LilycoveCity_EventScript_ExpertM2_1


LilycoveCity_EventScript_ExpertM2AquaGone::
# 154 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 155 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_Sailor1::
# 160 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
	end


LilycoveCity_EventScript_FatMan::
# 165 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
	end


LilycoveCity_EventScript_Man1::
# 170 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 171 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 172 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_MAN_1, Common_Movement_FaceOriginalDirection
	end


LilycoveCity_EventScript_Woman1::
# 177 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 178 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 179 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_LILYCOVE_WOMAN_1, Common_Movement_FaceOriginalDirection
	end


LilycoveCity_EventScript_CitySign::
# 184 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
	end


LilycoveCity_EventScript_ContestHallSign::
# 189 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
	end


LilycoveCity_EventScript_MotelSign::
# 194 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
	end


LilycoveCity_EventScript_MuseumSign::
# 199 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 200 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 201 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 202 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSign_3
LilycoveCity_EventScript_MuseumSign_1:
# 205 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 206 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end

LilycoveCity_EventScript_MuseumSign_3:
# 203 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_MuseumSignNoPaintings
	goto LilycoveCity_EventScript_MuseumSign_1


LilycoveCity_EventScript_MuseumSignNoPaintings::
# 211 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 212 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end


LilycoveCity_EventScript_HarborSign::
# 217 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 218 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSign_2
LilycoveCity_EventScript_HarborSign_1:
# 221 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 222 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end

LilycoveCity_EventScript_HarborSign_2:
# 219 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_HarborSignFerryReady
	goto LilycoveCity_EventScript_HarborSign_1


LilycoveCity_EventScript_HarborSignFerryReady::
# 227 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 228 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end


LilycoveCity_EventScript_TrainerFanClubSign::
# 233 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
	end


LilycoveCity_EventScript_DepartmentStoreSign::
# 238 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
	end


LilycoveCity_EventScript_MoveDeletersHouseSign::
# 243 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
	end


LilycoveCity_EventScript_WailmerTrainerGrunt::
# 248 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 249 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_WailmerTrainerGrunt_2
LilycoveCity_EventScript_WailmerTrainerGrunt_1:
# 252 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 253 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 254 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 255 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 256 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 257 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 258 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 259 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end

LilycoveCity_EventScript_WailmerTrainerGrunt_2:
# 250 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_MetWailmerTrainer
	goto LilycoveCity_EventScript_WailmerTrainerGrunt_1


LilycoveCity_EventScript_MetWailmerTrainer::
# 264 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 265 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	end


LilycoveCity_EventScript_AquaGrunt1::
# 270 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
	end


LilycoveCity_EventScript_AquaGrunt2::
# 275 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
	end


LilycoveCity_EventScript_AquaGrunt3::
# 280 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
	end


LilycoveCity_EventScript_AquaGrunt4::
# 285 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
	end


LilycoveCity_EventScript_Rival::
# 290 "data/maps/LilycoveCity/scripts.pory"
	lock
# 291 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 292 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 293 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LilycoveCity_EventScript_Rival_2
LilycoveCity_EventScript_Rival_1:
# 296 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LilycoveCity_EventScript_Rival_5
LilycoveCity_EventScript_Rival_4:
	end

LilycoveCity_EventScript_Rival_2:
# 294 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_May
	goto LilycoveCity_EventScript_Rival_1

LilycoveCity_EventScript_Rival_5:
# 297 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_Brendan
	goto LilycoveCity_EventScript_Rival_4


LilycoveCity_EventScript_May::
# 303 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 304 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_May_2
LilycoveCity_EventScript_May_1:
# 307 "data/maps/LilycoveCity/scripts.pory"
	goto_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_May_5
LilycoveCity_EventScript_May_4:
# 310 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_May_8
LilycoveCity_EventScript_May_7:
# 313 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 314 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 315 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_May_12
# 317 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_May_13
# 319 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_May_14
LilycoveCity_EventScript_May_10:
	end

LilycoveCity_EventScript_May_2:
# 305 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_MayAskToBattleAgain
	goto LilycoveCity_EventScript_May_1

LilycoveCity_EventScript_May_5:
# 308 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_MayAskToBattle
	goto LilycoveCity_EventScript_May_4

LilycoveCity_EventScript_May_8:
# 311 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DeclineMayBattle
	goto LilycoveCity_EventScript_May_7

LilycoveCity_EventScript_May_12:
# 316 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleMayTreecko
	goto LilycoveCity_EventScript_May_10

LilycoveCity_EventScript_May_13:
# 318 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleMayTorchic
	goto LilycoveCity_EventScript_May_10

LilycoveCity_EventScript_May_14:
# 320 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleMayMudkip
	goto LilycoveCity_EventScript_May_10


LilycoveCity_EventScript_MayAskToBattleAgain::
# 326 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
	return


LilycoveCity_EventScript_MayAskToBattle::
# 331 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
	return


LilycoveCity_EventScript_DeclineMayBattle::
# 336 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 337 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 338 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 339 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 340 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_Brendan::
# 345 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 346 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_Brendan_2
LilycoveCity_EventScript_Brendan_1:
# 349 "data/maps/LilycoveCity/scripts.pory"
	goto_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_Brendan_5
LilycoveCity_EventScript_Brendan_4:
# 352 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_Brendan_8
LilycoveCity_EventScript_Brendan_7:
# 355 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 356 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 357 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_Brendan_12
# 359 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_Brendan_13
# 361 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_Brendan_14
LilycoveCity_EventScript_Brendan_10:
	end

LilycoveCity_EventScript_Brendan_2:
# 347 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_BrendanAskToBattleAgain
	goto LilycoveCity_EventScript_Brendan_1

LilycoveCity_EventScript_Brendan_5:
# 350 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_BrendanAskToBattle
	goto LilycoveCity_EventScript_Brendan_4

LilycoveCity_EventScript_Brendan_8:
# 353 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DeclineBrendanBattle
	goto LilycoveCity_EventScript_Brendan_7

LilycoveCity_EventScript_Brendan_12:
# 358 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleBrendanTreecko
	goto LilycoveCity_EventScript_Brendan_10

LilycoveCity_EventScript_Brendan_13:
# 360 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleBrendanTorchic
	goto LilycoveCity_EventScript_Brendan_10

LilycoveCity_EventScript_Brendan_14:
# 362 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BattleBrendanMudkip
	goto LilycoveCity_EventScript_Brendan_10


LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 368 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
	return


LilycoveCity_EventScript_BrendanAskToBattle::
# 373 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
	return


LilycoveCity_EventScript_DeclineBrendanBattle::
# 378 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 379 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 380 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 381 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 382 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_BattleMayTreecko::
# 387 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 388 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
	end


LilycoveCity_EventScript_BattleMayTorchic::
# 393 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 394 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
	end


LilycoveCity_EventScript_BattleMayMudkip::
# 399 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 400 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
	end


LilycoveCity_EventScript_BattleBrendanTreecko::
# 405 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 406 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
	end


LilycoveCity_EventScript_BattleBrendanTorchic::
# 411 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 412 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
	end


LilycoveCity_EventScript_BattleBrendanMudkip::
# 417 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 418 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
	end


LilycoveCity_EventScript_DefeatedMay::
# 423 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 424 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 425 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_DefeatedMay_2
LilycoveCity_EventScript_DefeatedMay_1:
# 428 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_EventScript_DefeatedMay_5
LilycoveCity_EventScript_DefeatedMay_4:
# 431 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_EventScript_DefeatedMay_8
LilycoveCity_EventScript_DefeatedMay_7:
# 434 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 435 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 436 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
	end

LilycoveCity_EventScript_DefeatedMay_2:
# 426 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_CheckFinalBadge
	goto LilycoveCity_EventScript_DefeatedMay_1

LilycoveCity_EventScript_DefeatedMay_5:
# 429 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_MayCollectBadges
	goto LilycoveCity_EventScript_DefeatedMay_4

LilycoveCity_EventScript_DefeatedMay_8:
# 432 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_MayPokemonLeague
	goto LilycoveCity_EventScript_DefeatedMay_7


LilycoveCity_EventScript_CheckFinalBadge::
# 441 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_CheckFinalBadge_2
LilycoveCity_EventScript_CheckFinalBadge_1:
	return

LilycoveCity_EventScript_CheckFinalBadge_2:
# 442 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_HasFinalBadge
	goto LilycoveCity_EventScript_CheckFinalBadge_1


LilycoveCity_EventScript_HasFinalBadge::
# 448 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
	return


LilycoveCity_EventScript_MayCollectBadges::
# 453 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
	return


LilycoveCity_EventScript_MayPokemonLeague::
# 458 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayPokemonLeague_2
LilycoveCity_EventScript_MayPokemonLeague_1:
# 461 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_MayPokemonLeague_2:
# 459 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_MayBattleFrontier
	goto LilycoveCity_EventScript_MayPokemonLeague_1


LilycoveCity_EventScript_MayBattleFrontier::
# 466 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
	return


LilycoveCity_EventScript_DefeatedBrendan::
# 471 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 472 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 473 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_DefeatedBrendan_2
LilycoveCity_EventScript_DefeatedBrendan_1:
# 476 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LilycoveCity_EventScript_DefeatedBrendan_5
LilycoveCity_EventScript_DefeatedBrendan_4:
# 479 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LilycoveCity_EventScript_DefeatedBrendan_8
LilycoveCity_EventScript_DefeatedBrendan_7:
# 482 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 483 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 484 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
	end

LilycoveCity_EventScript_DefeatedBrendan_2:
# 474 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_CheckFinalBadge
	goto LilycoveCity_EventScript_DefeatedBrendan_1

LilycoveCity_EventScript_DefeatedBrendan_5:
# 477 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_BrendanCollectBadges
	goto LilycoveCity_EventScript_DefeatedBrendan_4

LilycoveCity_EventScript_DefeatedBrendan_8:
# 480 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_BrendanPokemonLeague
	goto LilycoveCity_EventScript_DefeatedBrendan_7


LilycoveCity_EventScript_BrendanCollectBadges::
# 489 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
	return


LilycoveCity_EventScript_BrendanPokemonLeague::
# 494 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanPokemonLeague_2
LilycoveCity_EventScript_BrendanPokemonLeague_1:
# 497 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_BrendanPokemonLeague_2:
# 495 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_BrendanBattleFrontier
	goto LilycoveCity_EventScript_BrendanPokemonLeague_1


LilycoveCity_EventScript_BrendanBattleFrontier::
# 502 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
	return


LilycoveCity_EventScript_RivalFlyAway::
# 507 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 508 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 509 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 511 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 512 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 513 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 514 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 515 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 516 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 517 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 518 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 519 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_SchoolKidM::
# 524 "data/maps/LilycoveCity/scripts.pory"
	lock
# 525 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 526 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 527 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LilycoveCity_EventScript_SchoolKidM_2
LilycoveCity_EventScript_SchoolKidM_1:
# 530 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LilycoveCity_EventScript_SchoolKidM_5
LilycoveCity_EventScript_SchoolKidM_4:
# 533 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_SchoolKidM_2:
# 528 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_KnowAboutBerryBlender
	goto LilycoveCity_EventScript_SchoolKidM_1

LilycoveCity_EventScript_SchoolKidM_5:
# 531 "data/maps/LilycoveCity/scripts.pory"
	call LilycoveCity_EventScript_DontKnowAboutBerryBlender
	goto LilycoveCity_EventScript_SchoolKidM_4


LilycoveCity_EventScript_KnowAboutBerryBlender::
# 538 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
	return


LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 543 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
	return


LilycoveCity_Text_MayShoppingLetsBattle::
# 547 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, hey?\n"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
	.string "I bought a whole bunch of DOLLS and\n"
	.string "POSTERS.\p"
	.string "Of course, I've also caught a lot of\n"
	.string "POKéMON, and I'm raising them\l"
	.string "properly, too.\p"
	.string "Actually, I'm more worried if you're\n"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
	.string "I'll battle with you, so you can show\n"
	.string "me your POKéMON, {PLAYER}{KUN}.$"

LilycoveCity_Text_MayNotRaisingPokemon::
# 561 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Oh, why? {PLAYER}{KUN}, haven't you\n"
	.string "been raising your POKéMON?\p"
	.string "That's not a very good showing as a\n"
	.string "TRAINER…$"

LilycoveCity_Text_MayBattleMe::
# 568 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: Come on, battle with me, so I can\n"
	.string "check out your POKéMON!$"

LilycoveCity_Text_MayWontBeBeaten::
# 573 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: The POKéMON I raised won't be\n"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"

LilycoveCity_Text_MayDefeat::
# 578 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
	.string "I remember the battle I had with you,\n"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
	.string "That battle helped you become this\n"
	.string "strong, {PLAYER}{KUN}, didn't it?$"

LilycoveCity_Text_MayGoingBackToLittleroot::
# 586 "data/maps/LilycoveCity/scripts.pory"
	.string "MAY: I'm thinking of going back to\n"
	.string "LITTLEROOT soon.\p"
	.string "I've caught a decent group of POKéMON,\n"
	.string "and my POKéDEX is coming along, so\l"
	.string "I'm going home to show my dad.$"

LilycoveCity_Text_MayYouGoingToCollectBadges::
# 594 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
	.string "Collect all the GYM BADGES and take\n"
	.string "the POKéMON LEAGUE challenge?\p"
	.string "Well, while you're collecting BADGES,\n"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
	.string "POKéDEX. I'll complete it before you!\p"
	.string "See you!$"

LilycoveCity_Text_MayYouGoingToPokemonLeague::
# 604 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
	.string "Are you taking the POKéMON LEAGUE\n"
	.string "challenge?\p"
	.string "Or, are you going to complete your\n"
	.string "POKéDEX?\p"
	.string "I might've lost to you in battling,\n"
	.string "but I'll finish my POKéDEX before you!\p"
	.string "See you!$"

LilycoveCity_Text_MayYouGoingToBattleFrontier::
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
	.string "Are you taking the BATTLE FRONTIER\n"
	.string "challenge?\p"
	.string "Or, are you going to complete your\n"
	.string "POKéDEX?\p"
	.string "I might've lost to you in battling,\n"
	.string "but I'll finish my POKéDEX before you!\p"
	.string "See you!$"

LilycoveCity_Text_BrendanShoppingLetsBattle::
# 626 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, hey, it's {PLAYER}.\p"
	.string "I'm running an errand for my dad.\n"
	.string "No, I'm not buying any DOLLS.\p"
	.string "Anyways, it's been a while.\p"
	.string "Want to have a battle to see who's been\n"
	.string "raising POKéMON better?$"

LilycoveCity_Text_BrendanNoConfidence::
# 635 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Oh, what's the matter?\n"
	.string "Don't have the confidence?$"

LilycoveCity_Text_BrendanBattleMe::
# 640 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Want to battle to see who's\n"
	.string "been raising POKéMON better?$"

LilycoveCity_Text_BrendanWontBeBeaten::
# 645 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: Aww, but you know I'm not\n"
	.string "going to lose to no {PLAYER}.$"

LilycoveCity_Text_BrendanDefeat::
# 650 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
	.string "You've done a lot of raising.\p"
	.string "That stings a bit--I had a head start\n"
	.string "on you as a TRAINER…$"

LilycoveCity_Text_BrendanGoingBackToLittleroot::
# 657 "data/maps/LilycoveCity/scripts.pory"
	.string "BRENDAN: I…\n"
	.string "I plan on going home to LITTLEROOT.\p"
	.string "You know I'm helping out my dad on his\n"
	.string "POKéDEX. It's coming together pretty\l"
	.string "decently, so I should go show him.$"

LilycoveCity_Text_BrendanYouGoingToCollectBadges::
# 665 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
	.string "Collect all the GYM BADGES and take\n"
	.string "the POKéMON LEAGUE challenge?\p"
	.string "Maybe I'll do that, too…\p"
	.string "Well, anyway, hang in there!$"

LilycoveCity_Text_BrendanYouGoingToPokemonLeague::
# 673 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
	.string "Since you're that strong, are you\n"
	.string "taking the POKéMON LEAGUE challenge?\p"
	.string "Heh, even me--if I trained my POKéMON\n"
	.string "a bit more, I should be stronger than\l"
	.string "you, {PLAYER}.\p"
	.string "Well, anyway, hang in there!$"

LilycoveCity_Text_BrendanYouGoingToBattleFrontier::
# 683 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
	.string "Are you taking the BATTLE FRONTIER\n"
	.string "challenge?\p"
	.string "Or, are you going to complete your\n"
	.string "POKéDEX?\p"
	.string "Since you're that strong, you should\n"
	.string "consider the BATTLE FRONTIER.\p"
	.string "Heh, if I train my POKéMON a bit more,\n"
	.string "I'll get stronger than you, {PLAYER}.\p"
	.string "Maybe I should go to the BATTLE\n"
	.string "FRONTIER.\p"
	.string "Well, anyway, hang in there!$"

LilycoveCity_Text_MovedLootIntoHideoutToday::
# 698 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
	.string "We moved more loot into our secret\n"
	.string "HIDEOUT today…\p"
	.string "Wh-who are you?!\n"
	.string "I was just talking to myself!$"

LilycoveCity_Text_ChanceToDoBigThings::
# 706 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a GRUNT, so I don't know what\n"
	.string "the BOSS is thinking…\p"
	.string "But being on TEAM AQUA, I know I'll get\n"
	.string "the chance to do big things!\p"
	.string "Wh-who are you?!\n"
	.string "I was just talking to myself!$"

LilycoveCity_Text_DontGoNearCaveInCove::
# 715 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
	.string "Don't go near the cave in the cove!\p"
	.string "Why? You don't need a reason why!\n"
	.string "I'm an adult, so you just listen to me!$"

LilycoveCity_Text_IfWorldBecomesOurs::
# 722 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
	.string "TEAM AQUA's, it will be a happier\l"
	.string "place for POKéMON, too.$"

LilycoveCity_Text_WailmerLeapOutOfWater::
# 728 "data/maps/LilycoveCity/scripts.pory"
	.string "There! WAILMER!\n"
	.string "Leap out of the water now!$"

LilycoveCity_Text_GetLostMessingUpTraining::
# 733 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
	.string "You're messing up our training,\n"
	.string "so can you, like, get lost?$"

LilycoveCity_Text_ContestHallInTown::
# 739 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a POKéMON CONTEST HALL\n"
	.string "right in this here town. \p"
	.string "That means well-raised POKéMON will\n"
	.string "come from all over the country.\p"
	.string "My heart swells with excitement!$"

LilycoveCity_Text_StrangeCaveInCove::
# 747 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
	.string "the cove at the edge of town?$"

LilycoveCity_Text_GoingToMoveDeleterForHMs::
# 752 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my POKéMON some new\n"
	.string "moves for entering a CONTEST.\p"
	.string "So, I'm going to see the MOVE DELETER\n"
	.string "and make it forget HM moves.$"

LilycoveCity_Text_ImFromKanto::
# 759 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from KANTO.\p"
	.string "The HOENN region is beautiful with\n"
	.string "all its water and verdant nature.\p"
	.string "Hunh? Wait a second…\p"
	.string "Could there be rare POKéMON that live\n"
	.string "only in this area?$"

LilycoveCity_Text_TeamAquaBeenTrainingWailmer::
# 768 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's been training their\n"
	.string "WAILMER in the cove.\p"
	.string "We SAILORS can't get our boats out\n"
	.string "to sea with them in the way!$"

LilycoveCity_Text_SomeonePuntedTeamAquaOut::
# 775 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
	.string "Someone punted TEAM AQUA out of\n"
	.string "the way for us!\p"
	.string "That got the WAILMER out of the cove,\n"
	.string "so we can get our boats out again.$"

LilycoveCity_Text_SomeoneStoleMyPokemon::
# 783 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
	.string "seaside inn to the sound of waves…\p"
	.string "When someone stole my POKéMON!\p"
	.string "Who's the abductor?\n"
	.string "TEAM AQUA? Is it TEAM AQUA?$"

LilycoveCity_Text_MissingPokemonCameBack::
# 791 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing POKéMON…\n"
	.string "It came back without me noticing!$"

LilycoveCity_Text_ImArtDealer::
# 796 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an ART DEALER.\p"
	.string "I am a buyer and seller of fine art,\n"
	.string "especially paintings.\p"
	.string "I've heard that the MUSEUM here has\n"
	.string "magnificent works on exhibit…$"

LilycoveCity_Text_SeaRemainsForeverYoung::
# 804 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
	.string "the sea remains forever young with\l"
	.string "the vivid brilliance of life…\p"
	.string "Fwohoho fwohohohoho…$"

LilycoveCity_Text_SixtyYearsAgoHusbandProposed::
# 811 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
	.string "proposed to me here.\l"
	.string "The sea remains as beautiful as ever.\p"
	.string "Mufufufu mufufufufufu…$"

LilycoveCity_Text_TeamAquaRenovatedCavern::
# 818 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
	.string "in this cove?\p"
	.string "That had been a natural formation,\n"
	.string "but then that TEAM AQUA lot came\l"
	.string "along and made their renovations.\p"
	.string "They call themselves\n"
	.string "the “nature-loving TEAM AQUA”!\p"
	.string "But what they do and what they say\n"
	.string "don't match at all!$"

LilycoveCity_Text_TeamAquaLotGoneForGood::
# 830 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
	.string "I didn't notice it right away,\n"
	.string "but it's completely empty now.\p"
	.string "That TEAM AQUA lot, they must\n"
	.string "have gone away for good.$"

LilycoveCity_Text_CitySign::
# 838 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY\p"
	.string "“Where the land ends and the\n"
	.string "sea begins.”$"

LilycoveCity_Text_ContestHallSign::
# 844 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON CONTEST HALL\n"
	.string "“The gathering place for TRAINERS!”$"

LilycoveCity_Text_MotelSign::
# 849 "data/maps/LilycoveCity/scripts.pory"
	.string "COVE LILY MOTEL\p"
	.string "“Remember us as COVE LILY of\n"
	.string "LILYCOVE.”$"

LilycoveCity_Text_MuseumSign::
# 855 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
	.string "“POKéMON Masterpiece Collection\n"
	.string "on exhibit!”$"

LilycoveCity_Text_MuseumSignPlayersExhibit::
# 861 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
	.string "“{PLAYER}'s POKéMON Collection\n"
	.string "on exhibit!”$"

LilycoveCity_Text_HarborSignUnderConstruction::
# 867 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
	.string "“The ferry S.S. TIDAL is under\n"
	.string "construction in SLATEPORT CITY.\p"
	.string "“Service is scheduled to begin\n"
	.string "shortly.”$"

LilycoveCity_Text_HarborSign::
# 875 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
	.string "“Enjoy a delightful cruise on\n"
	.string "the ferry S.S. TIDAL.”$"

LilycoveCity_Text_TrainerFanClubSign::
# 881 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
	.string "The names of TRAINERS are scribbled\n"
	.string "all over the sign…$"

LilycoveCity_Text_DepartmentStoreSign::
# 887 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p"
	.string "“Overflowing with great merchandise\n"
	.string "and excitement!\p"
	.string "“A great place to find that something\n"
	.string "you need!”$"

LilycoveCity_Text_MoveDeletersHouseSign::
# 895 "data/maps/LilycoveCity/scripts.pory"
	.string "MOVE DELETER'S HOUSE\p"
	.string "“Unwanted POKéMON moves deleted.”$"

LilycoveCity_Text_DoYouKnowAboutBerryBlender::
# 900 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
	.string "BERRY BLENDER?$"

LilycoveCity_Text_FasterSpinBetterPokeblocks::
# 905 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
	.string "to spin faster.\p"
	.string "The faster you can make it spin, the\n"
	.string "better {POKEBLOCK}S you can get, I've heard.$"

LilycoveCity_Text_ExplainBerryBlender::
# 912 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
	.string "called a {POKEBLOCK}.\p"
	.string "If you give a good {POKEBLOCK} to a POKéMON,\n"
	.string "its condition will improve by a lot.$"

LilycoveCity_Text_HeardTowerCalledSkyPillar::
# 919 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
	.string "on the sea routes.\p"
	.string "It's called the SKY PILLAR, I hear.$"

LilycoveCity_Text_SawTallTowerOnRoute131::
# 925 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
	.string "around ROUTE 131.\p"
	.string "Could that possibly be…?$"

LilycoveCity_Text_JustArrivedAndSawRarePokemon::
# 931 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
	.string "honeymoon vacation.\p"
	.string "We happened to see a DRAGON-type\n"
	.string "POKéMON flying way up in the sky.\p"
	.string "Do cool POKéMON like that live in\n"
	.string "the HOENN region?$"

LilycoveCity_Text_HoneymoonVowToSeeRarePokemon::
# 940 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
	.string "many rare POKéMON as we can.\p"
	.string "So we were delighted to see a rare\n"
	.string "POKéMON as soon as we arrived.\p"
	.string "I mean, we are totally happy!$"
