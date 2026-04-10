Route102_MapScripts::
	.byte 0


Route102_EventScript_LittleBoy::
# 5 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	return


Route102_EventScript_RouteSignOldale::
# 9 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	return


Route102_EventScript_RouteSignPetalburg::
# 13 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	return


Route102_EventScript_Boy::
# 17 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	return


Route102_EventScript_Calvin::
# 21 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 22 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 23 "data/maps/Route102/scripts.pory"
	release
	return


Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 27 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 28 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCallAfterBattle_2
Route102_EventScript_CalvinRegisterMatchCallAfterBattle_1:
# 32 "data/maps/Route102/scripts.pory"
	release
	return

Route102_EventScript_CalvinRegisterMatchCallAfterBattle_2:
# 30 "data/maps/Route102/scripts.pory"
	goto Route102_EventScript_CalvinRegisterMatchCall
	goto Route102_EventScript_CalvinRegisterMatchCallAfterBattle_1


Route102_EventScript_CalvinRegisterMatchCall::
# 36 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 37 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 38 "data/maps/Route102/scripts.pory"
	release
	return


Route102_EventScript_CalvinTryRegister::
# 42 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinTryRegister_2
Route102_EventScript_CalvinTryRegister_1:
# 45 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 46 "data/maps/Route102/scripts.pory"
	release
	return

Route102_EventScript_CalvinTryRegister_2:
# 43 "data/maps/Route102/scripts.pory"
	goto Route102_EventScript_CalvinRegister
	goto Route102_EventScript_CalvinTryRegister_1


Route102_EventScript_CalvinRegister::
# 50 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 51 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 52 "data/maps/Route102/scripts.pory"
	release
	return


Route102_EventScript_CalvinRematch::
# 56 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 57 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	return


Route102_EventScript_Rick::
# 61 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 62 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	return


Route102_EventScript_Tiana::
# 66 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 67 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	return


Route102_EventScript_Allen::
# 71 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 72 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	return


Route102_Text_WatchMeCatchPokemon::
# 75 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt::
# 84 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack::
# 89 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall::
# 94 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon::
# 102 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale::
# 107 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route102_Text_RouteSignPetalburg::
# 112 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"
