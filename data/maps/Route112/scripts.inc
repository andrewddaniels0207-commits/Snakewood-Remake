Route112_MapScripts::
# 2 "data/maps/Route112/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_OnTransition
	.byte 0


Route112_OnTransition::
# 6 "data/maps/Route112/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 7 "data/maps/Route112/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
	end


Route112_EventScript_MagmaGrunts::
# 12 "data/maps/Route112/scripts.pory"
	lockall
# 13 "data/maps/Route112/scripts.pory"
	delay 40
# 14 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 15 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 16 "data/maps/Route112/scripts.pory"
	delay 20
# 17 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LeaderGoingToAwakenThing, MSGBOX_DEFAULT
# 18 "data/maps/Route112/scripts.pory"
	closemessage
# 19 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_FaceOriginalDirection
# 20 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 21 "data/maps/Route112/scripts.pory"
	delay 40
# 22 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 23 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route112/scripts.pory"
	delay 20
# 25 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_YeahWeNeedMeteorite, MSGBOX_DEFAULT
# 26 "data/maps/Route112/scripts.pory"
	closemessage
# 27 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_FaceOriginalDirection
# 28 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route112/scripts.pory"
	delay 40
# 30 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
# 31 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route112/scripts.pory"
	delay 20
# 33 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_OhThatsWhyCrewWentToFallarbor, MSGBOX_DEFAULT
# 34 "data/maps/Route112/scripts.pory"
	closemessage
# 35 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_1, Common_Movement_FaceOriginalDirection
# 36 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route112/scripts.pory"
	delay 40
# 38 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 39 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route112/scripts.pory"
	delay 20
# 41 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CantLetAnyonePassUntilTheyreBack, MSGBOX_DEFAULT
# 42 "data/maps/Route112/scripts.pory"
	closemessage
# 43 "data/maps/Route112/scripts.pory"
	applymovement LOCALID_ROUTE112_GRUNT_2, Common_Movement_FaceOriginalDirection
# 44 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route112/scripts.pory"
	releaseall
	end


Route112_EventScript_MtChimneyCableCarSign::
# 50 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
	end


Route112_EventScript_MtChimneySign::
# 55 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
	end


Route112_EventScript_RouteSignLavaridge::
# 60 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
	end


Route112_EventScript_Hiker::
# 65 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
	end


Route112_EventScript_Brice::
# 70 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
# 71 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
	end


Route112_EventScript_Trent::
# 76 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
# 77 "data/maps/Route112/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 78 "data/maps/Route112/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route112_EventScript_Trent_2
Route112_EventScript_Trent_1:
# 81 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
# 82 "data/maps/Route112/scripts.pory"
	release
	end

Route112_EventScript_Trent_2:
# 79 "data/maps/Route112/scripts.pory"
	goto Route112_EventScript_RematchTrent
	goto Route112_EventScript_Trent_1


Route112_EventScript_RegisterTrent::
# 87 "data/maps/Route112/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 88 "data/maps/Route112/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
# 90 "data/maps/Route112/scripts.pory"
	register_matchcall TRAINER_TRENT_1
# 91 "data/maps/Route112/scripts.pory"
	release
	end


Route112_EventScript_RematchTrent::
# 96 "data/maps/Route112/scripts.pory"
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
# 97 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
	end


Route112_EventScript_Larry::
# 102 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
# 103 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
	end


Route112_EventScript_Carol::
# 108 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
# 109 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
	end


Route112_EventScript_Bryant::
# 114 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
# 115 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
	end


Route112_EventScript_Shayla::
# 120 "data/maps/Route112/scripts.pory"
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
# 121 "data/maps/Route112/scripts.pory"
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
	end


Route112_Text_LeaderGoingToAwakenThing::
# 125 "data/maps/Route112/scripts.pory"
	.string "Hey, man, is our leader really going\n"
	.string "to awaken that thing?$"

Route112_Text_YeahWeNeedMeteorite::
# 130 "data/maps/Route112/scripts.pory"
	.string "Sounds like it, yeah. But I heard\n"
	.string "we need a METEORITE to do it.$"

Route112_Text_OhThatsWhyCrewWentToFallarbor::
# 135 "data/maps/Route112/scripts.pory"
	.string "Oh, I get it now. That's why the rest\n"
	.string "of the crew went out to FALLARBOR.$"

Route112_Text_CantLetAnyonePassUntilTheyreBack::
# 140 "data/maps/Route112/scripts.pory"
	.string "You got it. And until they come back,\n"
	.string "we're not to let anyone pass, right.$"

Route112_Text_NotEasyToGetBackToLavaridge::
# 145 "data/maps/Route112/scripts.pory"
	.string "Eh, I'd like to get to MAUVILLE, but if\n"
	.string "I went down these ledges, it'd be no\l"
	.string "easy matter to get back to LAVARIDGE.$"

Route112_Text_MtChimneyCableCarSign::
# 151 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY CABLE CAR\n"
	.string "“A short walk {UP_ARROW} way!”$"

Route112_Text_MtChimneySign::
# 156 "data/maps/Route112/scripts.pory"
	.string "MT. CHIMNEY\p"
	.string "“For LAVARIDGE TOWN or the summit,\n"
	.string "please take the CABLE CAR.”$"

Route112_Text_RouteSignLavaridge::
# 162 "data/maps/Route112/scripts.pory"
	.string "ROUTE 112\n"
	.string "{LEFT_ARROW} LAVARIDGE TOWN$"
