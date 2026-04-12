Route128_MapScripts::
# 2 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route128_OnTransition
# 3 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route128_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route128_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Route128/scripts.pory"
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedScene
	.2byte 0


Route128_OnTransition::
# 9 "data/maps/Route128/scripts.pory"
	goto_if_set FLAG_SYS_WEATHER_CTRL, Route128_OnTransition_2
Route128_OnTransition_1:
	end

Route128_OnTransition_2:
# 10 "data/maps/Route128/scripts.pory"
	call Common_EventScript_SetAbnormalWeather
	goto Route128_OnTransition_1


Route128_EventScript_KyogreAwakenedScene::
# 16 "data/maps/Route128/scripts.pory"
	lockall
# 17 "data/maps/Route128/scripts.pory"
	delay 20
# 18 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieLookAround
# 19 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieWhatHappened, MSGBOX_DEFAULT
# 21 "data/maps/Route128/scripts.pory"
	closemessage
# 22 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieBackUp
# 23 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieIOnlyWanted, MSGBOX_DEFAULT
# 25 "data/maps/Route128/scripts.pory"
	closemessage
# 26 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieApproachArchie
# 27 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 29 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieDoYouUnderstandNow, MSGBOX_DEFAULT
# 31 "data/maps/Route128/scripts.pory"
	closemessage
# 32 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieApproachPlayer
# 33 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieResposibilityFallsToArchieAndMe, MSGBOX_DEFAULT
# 37 "data/maps/Route128/scripts.pory"
	closemessage
# 38 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieRunLeft
# 39 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 40 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieWalkLeft
# 41 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieThisDefiesBelief, MSGBOX_DEFAULT
# 43 "data/maps/Route128/scripts.pory"
	closemessage
# 44 "data/maps/Route128/scripts.pory"
	delay 40
# 45 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_MAXIE, Route128_Movement_MaxieExit
# 46 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_ARCHIE, Route128_Movement_ArchieExit
# 47 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_MAXIE
# 49 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_ARCHIE
# 50 "data/maps/Route128/scripts.pory"
	delay 100
# 51 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 52 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 53 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 54 "data/maps/Route128/scripts.pory"
	addobject LOCALID_ROUTE128_STEVEN
# 55 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Route128_Movement_StevenApproachPlayer
# 56 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 58 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWhatIsHappening, MSGBOX_DEFAULT
# 60 "data/maps/Route128/scripts.pory"
	closemessage
# 61 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Route128_Movement_StevenWalkUp
# 62 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 63 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWholeWorldWillDrown, MSGBOX_DEFAULT
# 65 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 66 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenImGoingToSootopolis, MSGBOX_DEFAULT
# 68 "data/maps/Route128/scripts.pory"
	closemessage
# 69 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ROUTE128_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 70 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route128/scripts.pory"
	delay 50
# 72 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 73 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 74 "data/maps/Route128/scripts.pory"
	delay 15
# 75 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ROUTE128_STEVEN
# 76 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 77 "data/maps/Route128/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 78 "data/maps/Route128/scripts.pory"
	setvar VAR_ROUTE128_STATE, 2
# 79 "data/maps/Route128/scripts.pory"
	releaseall
	end


# 83 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused1:
# 84 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 85 "data/maps/Route128/scripts.pory"
	step_end

# 88 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused2:
# 89 "data/maps/Route128/scripts.pory"
	walk_left
# 90 "data/maps/Route128/scripts.pory"
	walk_left
# 91 "data/maps/Route128/scripts.pory"
	walk_left
# 92 "data/maps/Route128/scripts.pory"
	walk_left
# 93 "data/maps/Route128/scripts.pory"
	walk_left
# 94 "data/maps/Route128/scripts.pory"
	walk_left
# 95 "data/maps/Route128/scripts.pory"
	walk_up
# 96 "data/maps/Route128/scripts.pory"
	walk_up
# 97 "data/maps/Route128/scripts.pory"
	walk_up
# 98 "data/maps/Route128/scripts.pory"
	walk_up
# 99 "data/maps/Route128/scripts.pory"
	walk_up
# 100 "data/maps/Route128/scripts.pory"
	walk_up
# 101 "data/maps/Route128/scripts.pory"
	step_end

# 104 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenWalkUp:
# 105 "data/maps/Route128/scripts.pory"
	walk_up
# 106 "data/maps/Route128/scripts.pory"
	step_end

# 109 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenApproachPlayer:
# 110 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 111 "data/maps/Route128/scripts.pory"
	step_end

# 114 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieLookAround:
# 115 "data/maps/Route128/scripts.pory"
	walk_fast_down
# 116 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_left
# 117 "data/maps/Route128/scripts.pory"
	delay_16
# 118 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 119 "data/maps/Route128/scripts.pory"
	delay_16
# 120 "data/maps/Route128/scripts.pory"
	delay_16
# 121 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 122 "data/maps/Route128/scripts.pory"
	step_end

Route128_Movement_ArchieBackUp::
# 126 "data/maps/Route128/scripts.pory"
	lock_facing_direction
# 127 "data/maps/Route128/scripts.pory"
	walk_slow_up
# 128 "data/maps/Route128/scripts.pory"
	delay_16
# 129 "data/maps/Route128/scripts.pory"
	unlock_facing_direction
# 130 "data/maps/Route128/scripts.pory"
	step_end
	return


# 133 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieRunLeft:
# 134 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 135 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 136 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 137 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 138 "data/maps/Route128/scripts.pory"
	step_end

# 141 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieExit:
# 142 "data/maps/Route128/scripts.pory"
	delay_16
# 143 "data/maps/Route128/scripts.pory"
	delay_16
# 144 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 145 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 146 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 147 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 148 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 149 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 150 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 151 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 152 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 153 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 154 "data/maps/Route128/scripts.pory"
	step_end

# 157 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieWalkLeft:
# 158 "data/maps/Route128/scripts.pory"
	walk_left
# 159 "data/maps/Route128/scripts.pory"
	walk_left
# 160 "data/maps/Route128/scripts.pory"
	delay_8
# 161 "data/maps/Route128/scripts.pory"
	delay_4
# 162 "data/maps/Route128/scripts.pory"
	step_end

# 165 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachArchie:
# 166 "data/maps/Route128/scripts.pory"
	walk_left
# 167 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 168 "data/maps/Route128/scripts.pory"
	step_end

# 171 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieExit:
# 172 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 173 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 176 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 177 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 178 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 179 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 180 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 181 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 182 "data/maps/Route128/scripts.pory"
	step_end

# 185 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachPlayer:
# 186 "data/maps/Route128/scripts.pory"
	walk_right
# 187 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 188 "data/maps/Route128/scripts.pory"
	step_end

Route128_EventScript_Isaiah::
# 192 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ISAIAH_1, Route128_Text_IsaiahIntro, Route128_Text_IsaiahDefeat, Route128_EventScript_RegisterIsaiah
# 193 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 194 "data/maps/Route128/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route128_EventScript_Isaiah_2
Route128_EventScript_Isaiah_1:
# 197 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostBattle, MSGBOX_DEFAULT
# 198 "data/maps/Route128/scripts.pory"
	release
	end

Route128_EventScript_Isaiah_2:
# 195 "data/maps/Route128/scripts.pory"
	goto Route128_EventScript_RematchIsaiah
	goto Route128_EventScript_Isaiah_1


Route128_EventScript_RegisterIsaiah::
# 203 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 204 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 205 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahRegister, MSGBOX_DEFAULT
# 206 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_ISAIAH_1
# 207 "data/maps/Route128/scripts.pory"
	release
	end


Route128_EventScript_RematchIsaiah::
# 212 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_ISAIAH_1, Route128_Text_IsaiahRematchIntro, Route128_Text_IsaiahRematchDefeat
# 213 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostRematch, MSGBOX_AUTOCLOSE
	end


Route128_EventScript_Katelyn::
# 218 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_KATELYN_1, Route128_Text_KatelynIntro, Route128_Text_KatelynDefeat, Route128_EventScript_RegisterKatelyn
# 219 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 220 "data/maps/Route128/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route128_EventScript_Katelyn_2
Route128_EventScript_Katelyn_1:
# 223 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostBattle, MSGBOX_DEFAULT
# 224 "data/maps/Route128/scripts.pory"
	release
	end

Route128_EventScript_Katelyn_2:
# 221 "data/maps/Route128/scripts.pory"
	goto Route128_EventScript_RematchKatelyn
	goto Route128_EventScript_Katelyn_1


Route128_EventScript_RegisterKatelyn::
# 229 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 230 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynRegister, MSGBOX_DEFAULT
# 232 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_KATELYN_1
# 233 "data/maps/Route128/scripts.pory"
	release
	end


Route128_EventScript_RematchKatelyn::
# 238 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_KATELYN_1, Route128_Text_KatelynRematchIntro, Route128_Text_KatelynRematchDefeat
# 239 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostRematch, MSGBOX_AUTOCLOSE
	end


Route128_EventScript_Alexa::
# 244 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
# 245 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
	end


Route128_EventScript_Ruben::
# 250 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_RUBEN, Route128_Text_RubenIntro, Route128_Text_RubenDefeat
# 251 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
	end


Route128_EventScript_Wayne::
# 256 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, Route128_Text_WayneIntro, Route128_Text_WayneDefeat
# 257 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
	end


Route128_EventScript_Harrison::
# 262 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, Route128_Text_HarrisonIntro, Route128_Text_HarrisonDefeat
# 263 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
	end


Route128_EventScript_Carlee::
# 268 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_CARLEE, Route128_Text_CarleeIntro, Route128_Text_CarleeDefeat
# 269 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
	end


Route128_Text_ArchieWhatHappened::
# 273 "data/maps/Route128/scripts.pory"
	.string "ARCHIE: What happened…\n"
	.string "What is this wretched scene…\p"
	.string "Did I…make a horrible mistake?$"

Route128_Text_ArchieIOnlyWanted::
# 279 "data/maps/Route128/scripts.pory"
	.string "I…\n"
	.string "I only wanted…$"

Route128_Text_MaxieDoYouUnderstandNow::
# 284 "data/maps/Route128/scripts.pory"
	.string "MAXIE: Do you understand now,\n"
	.string "ARCHIE?\p"
	.string "Do you finally see how disastrous\n"
	.string "your dream turned out to be?\p"
	.string "We have to hurry! We have to do\n"
	.string "something before the situation goes\l"
	.string "completely out of control!$"

Route128_Text_MaxieResposibilityFallsToArchieAndMe::
# 294 "data/maps/Route128/scripts.pory"
	.string "MAXIE: {PLAYER}, don't say anything.\p"
	.string "I know that I have no right to be\n"
	.string "critical of ARCHIE…\p"
	.string "But the way things are now, I doubt\n"
	.string "that we humans will be capable of\l"
	.string "doing anything about it.\p"
	.string "But neither can we stand by and\n"
	.string "just watch helplessly.\p"
	.string "The responsibility for putting an end\n"
	.string "to this falls to ARCHIE and me…$"

Route128_Text_MaxieThisDefiesBelief::
# 307 "data/maps/Route128/scripts.pory"
	.string "MAXIE: This defies belief…\p"
	.string "Those super-ancient POKéMON…\p"
	.string "Their power is unbelievable.\n"
	.string "They've upset the balance of nature…$"

Route128_Text_StevenWhatIsHappening::
# 314 "data/maps/Route128/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
	.string "What is happening?$"

Route128_Text_StevenWholeWorldWillDrown::
# 319 "data/maps/Route128/scripts.pory"
	.string "This is terrible…\p"
	.string "After the scorching heat wave ended,\n"
	.string "this deluge began.\p"
	.string "If this doesn't stop, all of HOENN…\n"
	.string "No, the whole world will drown.\p"
	.string "This huge rain cloud is spreading\n"
	.string "from above SOOTOPOLIS…\p"
	.string "What in the world is taking place there?\p"
	.string "There's no point arguing here…\n"
	.string "SOOTOPOLIS might provide answers…$"

Route128_Text_StevenImGoingToSootopolis::
# 332 "data/maps/Route128/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
	.string "I don't know what you intend to do,\l"
	.string "but don't do anything reckless.\p"
	.string "Okay.\n"
	.string "I'm going to SOOTOPOLIS.$"
