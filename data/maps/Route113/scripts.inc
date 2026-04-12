Route113_MapScripts::
# 2 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route113_OnResume
# 3 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_OnTransition
	.byte 0


Route113_OnResume::
# 7 "data/maps/Route113/scripts.pory"
	setstepcallback STEP_CB_ASH
	end


Route113_OnTransition::
# 12 "data/maps/Route113/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 13 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_CheckSetAshWeather
	end


Route113_EventScript_CheckSetAshWeather::
# 18 "data/maps/Route113/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 19 "data/maps/Route113/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_lt Route113_EventScript_CheckSetAshWeather_2
Route113_EventScript_CheckSetAshWeather_1:
# 22 "data/maps/Route113/scripts.pory"
	compare VAR_TEMP_0, 84
	goto_if_gt Route113_EventScript_CheckSetAshWeather_5
Route113_EventScript_CheckSetAshWeather_4:
# 25 "data/maps/Route113/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
	return

Route113_EventScript_CheckSetAshWeather_2:
# 20 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_DontSetAshWeather
	goto Route113_EventScript_CheckSetAshWeather_1

Route113_EventScript_CheckSetAshWeather_5:
# 23 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_DontSetAshWeather
	goto Route113_EventScript_CheckSetAshWeather_4


Route113_EventScript_DontSetAshWeather::
	return


Route113_EventScript_Gentleman::
# 34 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
	end


Route113_EventScript_NinjaBoy::
# 39 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
	end


Route113_EventScript_RouteSign111::
# 44 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
	end


Route113_EventScript_RouteSignFallarbor::
# 49 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
	end


Route113_EventScript_GlassWorkshopSign::
# 54 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
	end


Route113_EventScript_TrainerTipsRegisterKeyItems::
# 59 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
	end


Route113_EventScript_Jaylen::
# 64 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
# 65 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Dillon::
# 70 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
# 71 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Madeline::
# 76 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_RegisterMadeline
# 77 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 78 "data/maps/Route113/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route113_EventScript_Madeline_2
Route113_EventScript_Madeline_1:
# 81 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
# 82 "data/maps/Route113/scripts.pory"
	release
	end

Route113_EventScript_Madeline_2:
# 79 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_RematchMadeline
	goto Route113_EventScript_Madeline_1


Route113_EventScript_RegisterMadeline::
# 87 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 88 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelineRegister, MSGBOX_DEFAULT
# 90 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_MADELINE_1
# 91 "data/maps/Route113/scripts.pory"
	release
	end


Route113_EventScript_RematchMadeline::
# 96 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_MADELINE_1, Route113_Text_MadelineRematchIntro, Route113_Text_MadelineRematchDefeat
# 97 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostRematch, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Lao::
# 102 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route113_Text_LaoIntro, Route113_Text_LaoDefeat, Route113_EventScript_RegisterLao
# 103 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 104 "data/maps/Route113/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route113_EventScript_Lao_2
Route113_EventScript_Lao_1:
# 107 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostBattle, MSGBOX_DEFAULT
# 108 "data/maps/Route113/scripts.pory"
	release
	end

Route113_EventScript_Lao_2:
# 105 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_RematchLao
	goto Route113_EventScript_Lao_1


Route113_EventScript_RegisterLao::
# 113 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 114 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 115 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoRegister, MSGBOX_DEFAULT
# 116 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_LAO_1
# 117 "data/maps/Route113/scripts.pory"
	release
	end


Route113_EventScript_RematchLao::
# 122 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_LAO_1, Route113_Text_LaoRematchIntro, Route113_Text_LaoRematchDefeat
# 123 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostRematch, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Lung::
# 128 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LUNG, Route113_Text_LungIntro, Route113_Text_LungDefeat
# 129 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Tori::
# 134 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_ToriIntro, Route113_Text_ToriDefeat, Route113_Text_ToriNotEnoughMons
# 135 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Tia::
# 140 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_TiaIntro, Route113_Text_TiaDefeat, Route113_Text_TiaNotEnoughMons
# 141 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Sophie::
# 146 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_SOPHIE, Route113_Text_SophieIntro, Route113_Text_SophieDefeat
# 147 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Coby::
# 152 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_COBY, Route113_Text_CobyIntro, Route113_Text_CobyDefeat
# 153 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Lawrence::
# 158 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAWRENCE, Route113_Text_LawrenceIntro, Route113_Text_LawrenceDefeat
# 159 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LawrencePostBattle, MSGBOX_AUTOCLOSE
	end


Route113_EventScript_Wyatt::
# 164 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_WYATT, Route113_Text_WyattIntro, Route113_Text_WyattDefeat
# 165 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
	end


Route113_Text_AshCanBeFashionedIntoGlass::
# 169 "data/maps/Route113/scripts.pory"
	.string "Wahahaha! Today's technology is a\n"
	.string "wondrous thing!\p"
	.string "Take this volcanic ash here.\n"
	.string "It can be fashioned into glass.$"

Route113_Text_FunWalkingThroughAsh::
# 176 "data/maps/Route113/scripts.pory"
	.string "It's fun walking through the volcano's\n"
	.string "ashes on the ground and grass.\p"
	.string "You can see where you walked--it's\n"
	.string "really neat!$"

Route113_Text_RouteSign111::
# 183 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
	.string "{RIGHT_ARROW} ROUTE 111$"

Route113_Text_RouteSignFallarbor::
# 188 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
	.string "{LEFT_ARROW} FALLARBOR TOWN$"

Route113_Text_TrainerTipsRegisterKeyItems::
# 193 "data/maps/Route113/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "You may register one of the KEY ITEMS\n"
	.string "in your BAG as SELECT.\p"
	.string "Simply press SELECT to use\n"
	.string "the registered item conveniently.$"

Route113_Text_GlassWorkshopSign::
# 201 "data/maps/Route113/scripts.pory"
	.string "GLASS WORKSHOP\n"
	.string "“Turning Volcanic Ash into Glass Items”$"
