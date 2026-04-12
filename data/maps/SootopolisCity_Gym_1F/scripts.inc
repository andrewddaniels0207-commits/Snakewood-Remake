SootopolisCity_Gym_1F_MapScripts::
# 8 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
# 9 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_OnLoad
# 10 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
# 2 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SootopolisCity_Gym_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
# 4 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
# 5 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
# 6 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
	.2byte 0


SootopolisCity_Gym_1F_OnTransition::
# 14 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
	end


SootopolisCity_Gym_1F_OnResume::
# 19 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
	end


SootopolisCity_Gym_1F_OnLoad::
# 24 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 25 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special SetSootopolisGymCrackedIceMetatiles
	end


SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles::
# 30 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_ICE_STEP_COUNT, 8
	goto_if_lt SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_2
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_1:
# 33 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_ICE_STEP_COUNT, 28
	goto_if_lt SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_5
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_4:
# 36 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_ICE_STEP_COUNT, 67
	goto_if_lt SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_8
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_7:
# 39 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
# 40 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
	return

SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_2:
# 31 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_StopCheckingStairs
	goto SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_1

SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_5:
# 34 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
	goto SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_4

SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_8:
# 37 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
	goto SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles_7


SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs::
# 44 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
# 45 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
	return


SootopolisCity_Gym_1F_EventScript_OpenFirstStairs::
# 49 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
# 50 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
	return


SootopolisCity_Gym_1F_EventScript_StopCheckingStairs::
	return


SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs::
# 58 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 59 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 60 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 61 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 62 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
	end


SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs::
# 67 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 68 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 69 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 70 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 71 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
	end


SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs::
# 76 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 77 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 78 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 79 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 80 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
	end


SootopolisCity_Gym_1F_EventScript_FallThroughIce::
# 85 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 86 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 20
# 87 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	applymovement LOCALID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
# 88 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_FALL
# 90 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 60
# 91 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
# 92 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitstate
	end


# 96 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Movement_FallThroughIce:
# 97 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	set_invisible
# 98 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	step_end

SootopolisCity_Gym_1F_EventScript_Juan::
# 102 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
# 103 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 104 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Juan_2
SootopolisCity_Gym_1F_EventScript_Juan_1:
# 107 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_WATER_PULSE, SootopolisCity_Gym_1F_EventScript_Juan_5
SootopolisCity_Gym_1F_EventScript_Juan_4:
# 110 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_Juan_8
SootopolisCity_Gym_1F_EventScript_Juan_7:
# 113 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
# 114 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
	end

SootopolisCity_Gym_1F_EventScript_Juan_2:
# 105 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematch
	goto SootopolisCity_Gym_1F_EventScript_Juan_1

SootopolisCity_Gym_1F_EventScript_Juan_5:
# 108 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
	goto SootopolisCity_Gym_1F_EventScript_Juan_4

SootopolisCity_Gym_1F_EventScript_Juan_8:
# 111 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
	goto SootopolisCity_Gym_1F_EventScript_Juan_7


SootopolisCity_Gym_1F_EventScript_JuanDefeated::
# 119 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
# 120 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmessage
# 121 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 122 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
# 123 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 124 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_BADGE08_GET
# 125 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 126 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 127 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 128 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
# 129 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 130 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 8
# 131 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 132 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
# 133 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 134 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 135 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 136 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
# 137 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitfanfare
# 138 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 139 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 140 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 141 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
	end


SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
# 146 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_WATER_PULSE
# 147 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_GiveWaterPulse_2
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse_1:
# 150 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 151 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
	return

SootopolisCity_Gym_1F_EventScript_GiveWaterPulse_2:
# 148 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto Common_EventScript_BagIsFull
	goto SootopolisCity_Gym_1F_EventScript_GiveWaterPulse_1


SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
# 156 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM_WATER_PULSE
# 157 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2_2
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2_1:
# 160 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 161 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_RECEIVED_TM_WATER_PULSE
# 162 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
	end

SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2_2:
# 158 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2_1


SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
# 167 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
# 168 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
	end


SootopolisCity_Gym_1F_EventScript_JuanRematch::
# 173 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_rematch_double TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat, SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons
# 174 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
	end


SootopolisCity_Gym_1F_EventScript_GymGuide::
# 179 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 180 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 181 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuide_2
SootopolisCity_Gym_1F_EventScript_GymGuide_1:
# 184 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 185 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
	end

SootopolisCity_Gym_1F_EventScript_GymGuide_2:
# 182 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
	goto SootopolisCity_Gym_1F_EventScript_GymGuide_1


SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
# 190 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 191 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
	end


SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
# 196 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 197 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_LeftGymStatue_2
SootopolisCity_Gym_1F_EventScript_LeftGymStatue_1:
# 200 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_LeftGymStatue_2:
# 198 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_LeftGymStatue_1


SootopolisCity_Gym_1F_EventScript_RightGymStatue::
# 205 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 206 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_RightGymStatue_2
SootopolisCity_Gym_1F_EventScript_RightGymStatue_1:
# 209 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_RightGymStatue_2:
# 207 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_RightGymStatue_1


SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
# 214 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 215 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
	end


SootopolisCity_Gym_1F_EventScript_GymStatue::
# 220 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 221 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
	end


SootopolisCity_Gym_1F_Text_GymGuideAdvice::
# 225 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yo! How's it going, CHAMPION-\n"
	.string "bound {PLAYER}?\p"
	.string "SOOTOPOLIS's GYM LEADER JUAN is\n"
	.string "a master of WATER-type POKéMON.\p"
	.string "And, to get to JUAN, an icy floor\n"
	.string "will hamper your progress…\p"
	.string "Listen, I'm sorry, but that's all the\n"
	.string "advice that I have for you.\p"
	.string "The rest of the way, you have to\n"
	.string "go for it yourself!$"

SootopolisCity_Gym_1F_Text_GymGuidePostVictory::
# 238 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yow! You've beaten even JUAN, who\n"
	.string "was supposedly the best in all HOENN!\p"
	.string "Okay! Check out your TRAINER CARD.\p"
	.string "If you've gotten all the BADGES, you're\n"
	.string "set for the POKéMON LEAGUE challenge!$"

SootopolisCity_Gym_1F_Text_JuanIntro::
# 246 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Let me ask you.\n"
	.string "Did you know?\l"
	.string "Ah, I should not be so coy.\p"
	.string "It was I who taught WALLACE everything\n"
	.string "there is to know about POKéMON.\p"
	.string "Once, I had given up my position as\n"
	.string "the GYM LEADER.\p"
	.string "In my place, I had entrusted WALLACE\n"
	.string "with the GYM.\p"
	.string "However, a compelling reason arose for\n"
	.string "me to make a comeback.\p"
	.string "Ah, but enough chatter.\n"
	.string "Let us begin our match, shall we?\p"
	.string "Please, you shall bear witness to\n"
	.string "our artistry.\p"
	.string "A grand illusion of water sculpted\n"
	.string "by POKéMON and myself!$"

SootopolisCity_Gym_1F_Text_JuanDefeat::
# 266 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahaha, excellent!\n"
	.string "Very well, you are the winner.\p"
	.string "From you, I sense the brilliant shine\n"
	.string "of skill that will overcome all.\p"
	.string "However, compared with me or even\n"
	.string "WALLACE, you are lacking in elegance.\p"
	.string "Perhaps I should make you a loan\n"
	.string "of my outfit?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Hahaha, I merely jest!\p"
	.string "Rather than my clothes, I shall reward\n"
	.string "you with this, the RAIN BADGE!$"

SootopolisCity_Gym_1F_Text_ReceivedRainBadge::
# 282 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER} received the RAIN BADGE\n"
	.string "from JUAN.$"

SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis::
# 287 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Having the RAIN BADGE shall assure you\n"
	.string "the full obedience of all your POKéMON\l"
	.string "to your every command.\p"
	.string "The RAIN BADGE also allows the use\n"
	.string "of the HM move WATERFALL to scale\l"
	.string "walls of cascading water.\p"
	.string "And, so that you never forget the\n"
	.string "battle we shared, take this…$"

SootopolisCity_Gym_1F_Text_ExplainWaterPulse::
# 298 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The TECHNICAL MACHINE I handed you\n"
	.string "contains WATER PULSE.\p"
	.string "In use, it will occasionally confuse\n"
	.string "the target with ultrasonic waves.\p"
	.string "… … … … … …$"

SootopolisCity_Gym_1F_Text_RegisteredJuan::
# 306 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Registered GYM LEADER JUAN\n"
	.string "in the POKéNAV.$"

SootopolisCity_Gym_1F_Text_JuanPostBattle::
# 311 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The TRAINERS who have gathered all\n"
	.string "the GYM BADGES of HOENN should make\l"
	.string "way to the ultimate destination.\p"
	.string "The POKéMON LEAGUE.\p"
	.string "Travel to the easternmost reaches\n"
	.string "of HOENN, to the island EVER GRANDE.\p"
	.string "There, you shall find the POKéMON\n"
	.string "LEAGUE.$"

SootopolisCity_Gym_1F_Text_GoGetFortreeBadge::
# 322 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "There remains but one BADGE to\n"
	.string "obtain in HOENN.\p"
	.string "If you wish to challenge the POKéMON\n"
	.string "LEAGUE, you must obtain the last\l"
	.string "BADGE from the GYM in FORTREE.$"

SootopolisCity_Gym_1F_Text_GymStatue::
# 330 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM$"

SootopolisCity_Gym_1F_Text_GymStatueCertified::
# 334 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "SOOTOPOLIS CITY POKéMON GYM\p"
	.string "JUAN'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

SootopolisCity_Gym_1F_Text_JuanPreRematch::
# 340 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: Ah, this GYM had returned to its\n"
	.string "usual state of serenity…\p"
	.string "But our young typhoon has returned\n"
	.string "to put us to the test again!\p"
	.string "Well, my friend, most certainly!\p"
	.string "I shall be delighted to dance with you\n"
	.string "as often as you wish!$"

SootopolisCity_Gym_1F_Text_JuanRematchDefeat::
# 350 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahaha, you are the winner!\n"
	.string "You have defeated me again!$"

SootopolisCity_Gym_1F_Text_JuanPostRematch::
# 355 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: If I told you to become my\n"
	.string "apprentice, you will refuse, I am sure.\p"
	.string "I would like to make a gift of my coat\n"
	.string "to you.\p"
	.string "But again, you will refuse.\n"
	.string "I imagine that to be so.\p"
	.string "And that, my friend, is a certain sign\n"
	.string "of nobility!$"

SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons::
# 366 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "JUAN: Ah, this GYM had returned to its\n"
	.string "usual state of serenity…\p"
	.string "But our young typhoon has returned\n"
	.string "to put us to the test again!\p"
	.string "Well, my friend, most certainly!\n"
	.string "I shall be delighted to dance with you…\p"
	.string "Ah, no, no, no.\n"
	.string "You have with you but one POKéMON.\p"
	.string "I wish that you would return with\n"
	.string "two, perhaps more, POKéMON, please.$"
