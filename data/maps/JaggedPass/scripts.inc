JaggedPass_MapScripts::
# 2 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
# 3 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_OnTransition
# 4 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
	.byte 0


JaggedPass_OnResume::
# 8 "data/maps/JaggedPass/scripts.pory"
	setstepcallback STEP_CB_ASH
# 9 "data/maps/JaggedPass/scripts.pory"
	compare VAR_JAGGED_PASS_STATE, 0
	goto_if_eq JaggedPass_OnResume_2
JaggedPass_OnResume_1:
	end

JaggedPass_OnResume_2:
# 10 "data/maps/JaggedPass/scripts.pory"
	call JaggedPass_EventScript_CheckHasMagmaEmblem
	goto JaggedPass_OnResume_1


JaggedPass_EventScript_CheckHasMagmaEmblem::
# 16 "data/maps/JaggedPass/scripts.pory"
	checkitem ITEM_MAGMA_EMBLEM
# 17 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JaggedPass_EventScript_CheckHasMagmaEmblem_2
JaggedPass_EventScript_CheckHasMagmaEmblem_1:
	return

JaggedPass_EventScript_CheckHasMagmaEmblem_2:
# 18 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_SetReadyToOpenHideout
	goto JaggedPass_EventScript_CheckHasMagmaEmblem_1


JaggedPass_EventScript_SetReadyToOpenHideout::
# 24 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 1
	return


JaggedPass_OnTransition::
# 29 "data/maps/JaggedPass/scripts.pory"
	compare VAR_JAGGED_PASS_ASH_WEATHER, 1
	goto_if_eq JaggedPass_OnTransition_2
JaggedPass_OnTransition_1:
	end

JaggedPass_OnTransition_2:
# 30 "data/maps/JaggedPass/scripts.pory"
	call JaggedPass_EventScript_SetWeatherAsh
	goto JaggedPass_OnTransition_1


JaggedPass_EventScript_SetWeatherAsh::
# 36 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 37 "data/maps/JaggedPass/scripts.pory"
	doweather
	return


JaggedPass_OnLoad::
# 42 "data/maps/JaggedPass/scripts.pory"
	compare VAR_JAGGED_PASS_STATE, 1
	goto_if_le JaggedPass_OnLoad_2
JaggedPass_OnLoad_1:
	end

JaggedPass_OnLoad_2:
# 43 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_ConcealHideoutEntrance
	goto JaggedPass_OnLoad_1


JaggedPass_EventScript_ConcealHideoutEntrance::
# 49 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
# 50 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
	end


JaggedPass_EventScript_OpenMagmaHideout::
# 55 "data/maps/JaggedPass/scripts.pory"
	lockall
# 56 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1
# 57 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1
# 58 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8
# 59 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5
# 60 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 61 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 62 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 63 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 64 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1
# 65 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1
# 66 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16
# 67 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3
# 68 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 69 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 70 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 71 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
# 72 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
# 73 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 74 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 75 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 2
# 76 "data/maps/JaggedPass/scripts.pory"
	waitse
# 77 "data/maps/JaggedPass/scripts.pory"
	releaseall
	end


JaggedPass_EventScript_MagmaHideoutGuard::
# 82 "data/maps/JaggedPass/scripts.pory"
	lockall
# 83 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_MagmaHideoutGuard_2
JaggedPass_EventScript_MagmaHideoutGuard_1:
# 86 "data/maps/JaggedPass/scripts.pory"
	waitse
# 87 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 88 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 89 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 90 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_Delay48
# 91 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 92 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 93 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 94 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 95 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 96 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat
# 97 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 98 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 99 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 100 "data/maps/JaggedPass/scripts.pory"
	releaseall
	end

JaggedPass_EventScript_MagmaHideoutGuard_2:
# 84 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_GuardDefeated
	goto JaggedPass_EventScript_MagmaHideoutGuard_1


JaggedPass_EventScript_GuardDefeated::
# 105 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 106 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 107 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 108 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 109 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 110 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 111 "data/maps/JaggedPass/scripts.pory"
	releaseall
	end


JaggedPass_EventScript_Eric::
# 116 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ERIC, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
# 117 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
	end


JaggedPass_EventScript_Diana::
# 122 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_DIANA_1, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat, JaggedPass_EventScript_RegisterDiana
# 123 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 124 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JaggedPass_EventScript_Diana_2
JaggedPass_EventScript_Diana_1:
# 127 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
# 128 "data/maps/JaggedPass/scripts.pory"
	release
	end

JaggedPass_EventScript_Diana_2:
# 125 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_DianaRematch
	goto JaggedPass_EventScript_Diana_1


JaggedPass_EventScript_RegisterDiana::
# 133 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 134 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 135 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
# 136 "data/maps/JaggedPass/scripts.pory"
	release
	end


JaggedPass_EventScript_DianaRematch::
# 141 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 142 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
	end


JaggedPass_EventScript_Ethan::
# 147 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
# 148 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 149 "data/maps/JaggedPass/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JaggedPass_EventScript_Ethan_2
JaggedPass_EventScript_Ethan_1:
# 152 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
# 153 "data/maps/JaggedPass/scripts.pory"
	release
	end

JaggedPass_EventScript_Ethan_2:
# 150 "data/maps/JaggedPass/scripts.pory"
	goto JaggedPass_EventScript_EthanRematch
	goto JaggedPass_EventScript_Ethan_1


JaggedPass_EventScript_RegisterEthan::
# 158 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 159 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 160 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
# 161 "data/maps/JaggedPass/scripts.pory"
	release
	end


JaggedPass_EventScript_EthanRematch::
# 166 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 167 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
	end


JaggedPass_EventScript_Julio::
# 172 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_JULIO, JaggedPass_Text_JulioIntro, JaggedPass_Text_JulioDefeat
# 173 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
	end


JaggedPass_EventScript_Autumn::
# 178 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_AUTUMN, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
# 179 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
	end


JaggedPass_Text_EricIntro::
# 183 "data/maps/JaggedPass/scripts.pory"
	.string "MT. CHIMNEY's JAGGED PASS…\p"
	.string "Now this is what I've always wanted\n"
	.string "in a mountain.\p"
	.string "This jagged bumpiness…\n"
	.string "It rocks my soul!$"

JaggedPass_Text_EricDefeat::
# 191 "data/maps/JaggedPass/scripts.pory"
	.string "Losing left me bitter!$"

JaggedPass_Text_EricPostBattle::
# 195 "data/maps/JaggedPass/scripts.pory"
	.string "Yes, I did lose at POKéMON…\p"
	.string "But, when it comes to the love of\n"
	.string "the mountains, I have you beat!$"

JaggedPass_Text_DianaIntro::
# 201 "data/maps/JaggedPass/scripts.pory"
	.string "This place isn't your casual hike.\n"
	.string "It's not suited for a picnic.$"

JaggedPass_Text_DianaDefeat::
# 206 "data/maps/JaggedPass/scripts.pory"
	.string "Ohhh, no!\n"
	.string "The ground is too bumpy…$"

JaggedPass_Text_DianaPostBattle::
# 211 "data/maps/JaggedPass/scripts.pory"
	.string "Did you know?\p"
	.string "Some people cleverly ride their\n"
	.string "bicycles up this horribly bumpy pass.$"

JaggedPass_Text_DianaRegister::
# 217 "data/maps/JaggedPass/scripts.pory"
	.string "Will you ever be back in this area?\n"
	.string "If you do return, I'd like a rematch.$"

JaggedPass_Text_DianaRematchIntro::
# 222 "data/maps/JaggedPass/scripts.pory"
	.string "Picnics are fun wherever you go.\n"
	.string "Just like POKéMON!$"

JaggedPass_Text_DianaRematchDefeat::
# 227 "data/maps/JaggedPass/scripts.pory"
	.string "I only lost because the ground is\n"
	.string "too bumpy!$"

JaggedPass_Text_DianaPostRematch::
# 232 "data/maps/JaggedPass/scripts.pory"
	.string "I'll forget about losing and just\n"
	.string "enjoy this bumpy hike.$"

JaggedPass_Text_EthanIntro::
# 237 "data/maps/JaggedPass/scripts.pory"
	.string "JAGGED PASS is hard to walk on.\n"
	.string "It's a good place for training.$"

JaggedPass_Text_EthanDefeat::
# 242 "data/maps/JaggedPass/scripts.pory"
	.string "It was all over while we were still\n"
	.string "trying to find a good footing…$"

JaggedPass_Text_EthanPostBattle::
# 247 "data/maps/JaggedPass/scripts.pory"
	.string "If I had an ACRO BIKE, I'd be able to\n"
	.string "jump ledges.$"

JaggedPass_Text_EthanRegister::
# 252 "data/maps/JaggedPass/scripts.pory"
	.string "When I get more used to this bumpiness,\n"
	.string "I'll be sure to win!\p"
	.string "Can you register me in your POKéNAV?$"

JaggedPass_Text_EthanRematchIntro::
# 258 "data/maps/JaggedPass/scripts.pory"
	.string "I got used to this bumpiness.\n"
	.string "I sing while I climb now.$"

JaggedPass_Text_EthanRematchDefeat::
# 263 "data/maps/JaggedPass/scripts.pory"
	.string "It's still not easy to battle on this\n"
	.string "bumpy ground…$"

JaggedPass_Text_EthanPostRematch::
# 268 "data/maps/JaggedPass/scripts.pory"
	.string "I should get an ACRO BIKE from RYDEL\n"
	.string "in MAUVILLE CITY…$"

JaggedPass_Text_GruntIntro::
# 273 "data/maps/JaggedPass/scripts.pory"
	.string "Wah!\n"
	.string "What are you doing here?\p"
	.string "What am I doing in a place like this?\p"
	.string "What business is it of yours?$"

JaggedPass_Text_GruntDefeat::
# 280 "data/maps/JaggedPass/scripts.pory"
	.string "Urrrgh…\p"
	.string "I should've ducked into our HIDEOUT\n"
	.string "right away…$"

JaggedPass_Text_GoWhereverYouWant::
# 286 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, oh-kay!\n"
	.string "I admit it--you're strong!\p"
	.string "Don't worry about me.\n"
	.string "Go wherever you want!$"

JaggedPass_Text_BoulderShakingInResponseToEmblem::
# 293 "data/maps/JaggedPass/scripts.pory"
	.string "Oh! This boulder is shaking in response\n"
	.string "to the MAGMA EMBLEM!$"

JaggedPass_Text_JulioIntro::
# 298 "data/maps/JaggedPass/scripts.pory"
	.string "Aiyeeh! It's awfully scary to shoot\n"
	.string "down the mountain in one go!$"

JaggedPass_Text_JulioDefeat::
# 303 "data/maps/JaggedPass/scripts.pory"
	.string "I feel like I'm falling apart…$"

JaggedPass_Text_JulioPostBattle::
# 307 "data/maps/JaggedPass/scripts.pory"
	.string "My bicycle bounced around so much,\n"
	.string "my rear end's sore…$"

JaggedPass_Text_AutumnIntro::
# 312 "data/maps/JaggedPass/scripts.pory"
	.string "I climb this hill every day.\n"
	.string "I have confidence in my strength!$"

JaggedPass_Text_AutumnDefeat::
# 317 "data/maps/JaggedPass/scripts.pory"
	.string "Hmm…\n"
	.string "What went wrong?$"

JaggedPass_Text_AutumnPostBattle::
# 322 "data/maps/JaggedPass/scripts.pory"
	.string "What is that odd rock protrusion\n"
	.string "a little up the hill from here?$"
