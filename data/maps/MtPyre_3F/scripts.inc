MtPyre_3F_MapScripts::
	.byte 0


MtPyre_3F_EventScript_William::
# 4 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_WILLIAM, MtPyre_3F_Text_WilliamIntro, MtPyre_3F_Text_WilliamDefeat
# 5 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_3F_EventScript_Kayla::
# 10 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_KaylaIntro, MtPyre_3F_Text_KaylaDefeat
# 11 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
	end


MtPyre_3F_EventScript_Gabrielle::
# 16 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleIntro, MtPyre_3F_Text_GabrielleDefeat, MtPyre_3F_EventScript_RegisterGabrielle
# 17 "data/maps/MtPyre_3F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 18 "data/maps/MtPyre_3F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MtPyre_3F_EventScript_Gabrielle_2
MtPyre_3F_EventScript_Gabrielle_1:
# 21 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabriellePostBattle, MSGBOX_DEFAULT
# 22 "data/maps/MtPyre_3F/scripts.pory"
	release
	end

MtPyre_3F_EventScript_Gabrielle_2:
# 19 "data/maps/MtPyre_3F/scripts.pory"
	goto MtPyre_3F_EventScript_RematchGabrielle
	goto MtPyre_3F_EventScript_Gabrielle_1


MtPyre_3F_EventScript_RegisterGabrielle::
# 27 "data/maps/MtPyre_3F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 28 "data/maps/MtPyre_3F/scripts.pory"
	waitmovement 0
# 29 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabrielleRegister, MSGBOX_DEFAULT
# 30 "data/maps/MtPyre_3F/scripts.pory"
	register_matchcall TRAINER_GABRIELLE_1
# 31 "data/maps/MtPyre_3F/scripts.pory"
	release
	end


MtPyre_3F_EventScript_RematchGabrielle::
# 36 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_rematch TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleRematchIntro, MtPyre_3F_Text_GabrielleRematchDefeat
# 37 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabriellePostRematch, MSGBOX_AUTOCLOSE
	end


MtPyre_3F_Text_WilliamIntro::
# 41 "data/maps/MtPyre_3F/scripts.pory"
	.string "The rich atmosphere of the mountain\n"
	.string "has elevated my psychic power!\p"
	.string "A mere child like you…\n"
	.string "You dream of winning?$"

MtPyre_3F_Text_WilliamDefeat::
# 48 "data/maps/MtPyre_3F/scripts.pory"
	.string "I drown in self-pity…$"

MtPyre_3F_Text_WilliamPostBattle::
# 52 "data/maps/MtPyre_3F/scripts.pory"
	.string "My psychic powers have surely\n"
	.string "grown several times, but…$"

MtPyre_3F_Text_KaylaIntro::
# 57 "data/maps/MtPyre_3F/scripts.pory"
	.string "Ahahahaha!\p"
	.string "This is no place for children, least\n"
	.string "of all you!$"

MtPyre_3F_Text_KaylaDefeat::
# 63 "data/maps/MtPyre_3F/scripts.pory"
	.string "I lost that cleanly…$"

MtPyre_3F_Text_KaylaPostBattle::
# 67 "data/maps/MtPyre_3F/scripts.pory"
	.string "This means my training is still not\n"
	.string "enough…\p"
	.string "I've got to keep working toward the\n"
	.string "summit…\p"
	.string "Go, me!$"

MtPyre_3F_Text_GabrielleIntro::
# 75 "data/maps/MtPyre_3F/scripts.pory"
	.string "Why have you come here?$"

MtPyre_3F_Text_GabrielleDefeat::
# 79 "data/maps/MtPyre_3F/scripts.pory"
	.string "That was amazing!\n"
	.string "You're a very special TRAINER.$"

MtPyre_3F_Text_GabriellePostBattle::
# 84 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON no longer of this world.\n"
	.string "POKéMON that are with you now.\p"
	.string "And the POKéMON that you will meet\n"
	.string "in the future…\p"
	.string "They are all to be equally cherished.\n"
	.string "Please remember that.$"

MtPyre_3F_Text_GabrielleRegister::
# 93 "data/maps/MtPyre_3F/scripts.pory"
	.string "I would like to see your POKéMON\n"
	.string "when they grow up some more…\p"
	.string "Please, I need to see your POKéNAV.$"

MtPyre_3F_Text_GabrielleRematchIntro::
# 99 "data/maps/MtPyre_3F/scripts.pory"
	.string "Oh, it's you…\p"
	.string "Have you come to show me your grown\n"
	.string "POKéMON?$"

MtPyre_3F_Text_GabrielleRematchDefeat::
# 105 "data/maps/MtPyre_3F/scripts.pory"
	.string "How amazing!\n"
	.string "You are a special person.$"

MtPyre_3F_Text_GabriellePostRematch::
# 110 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON no longer of this world.\n"
	.string "POKéMON that are with you now.\p"
	.string "And the POKéMON that you will meet\n"
	.string "in the future…\p"
	.string "They are all to be equally cherished.\n"
	.string "I see that you've remembered that.$"
