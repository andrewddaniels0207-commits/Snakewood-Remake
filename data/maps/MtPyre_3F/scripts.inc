# 1 "data/maps/MtPyre_3F/scripts.pory"

# 2 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_MapScripts::
# 3 "data/maps/MtPyre_3F/scripts.pory"
	.byte 0
# 4 "data/maps/MtPyre_3F/scripts.pory"

# 5 "data/maps/MtPyre_3F/scripts.pory"

# 6 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_William::
# 7 "data/maps/MtPyre_3F/scripts.pory"
# 4 "data/maps/MtPyre_3F/scripts.pory"
# 8 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_WILLIAM, MtPyre_3F_Text_WilliamIntro, MtPyre_3F_Text_WilliamDefeat
# 9 "data/maps/MtPyre_3F/scripts.pory"
# 5 "data/maps/MtPyre_3F/scripts.pory"
# 10 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
# 11 "data/maps/MtPyre_3F/scripts.pory"
	end
# 12 "data/maps/MtPyre_3F/scripts.pory"

# 13 "data/maps/MtPyre_3F/scripts.pory"

# 14 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Kayla::
# 15 "data/maps/MtPyre_3F/scripts.pory"
# 10 "data/maps/MtPyre_3F/scripts.pory"
# 16 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_KaylaIntro, MtPyre_3F_Text_KaylaDefeat
# 17 "data/maps/MtPyre_3F/scripts.pory"
# 11 "data/maps/MtPyre_3F/scripts.pory"
# 18 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/MtPyre_3F/scripts.pory"
	end
# 20 "data/maps/MtPyre_3F/scripts.pory"

# 21 "data/maps/MtPyre_3F/scripts.pory"

# 22 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Gabrielle::
# 23 "data/maps/MtPyre_3F/scripts.pory"
# 16 "data/maps/MtPyre_3F/scripts.pory"
# 24 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_single TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleIntro, MtPyre_3F_Text_GabrielleDefeat, MtPyre_3F_EventScript_RegisterGabrielle
# 25 "data/maps/MtPyre_3F/scripts.pory"
# 17 "data/maps/MtPyre_3F/scripts.pory"
# 26 "data/maps/MtPyre_3F/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 27 "data/maps/MtPyre_3F/scripts.pory"
# 18 "data/maps/MtPyre_3F/scripts.pory"
# 28 "data/maps/MtPyre_3F/scripts.pory"
	compare VAR_RESULT, TRUE
# 29 "data/maps/MtPyre_3F/scripts.pory"
	goto_if_eq MtPyre_3F_EventScript_Gabrielle_2
# 30 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Gabrielle_1:
# 31 "data/maps/MtPyre_3F/scripts.pory"
# 21 "data/maps/MtPyre_3F/scripts.pory"
# 32 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabriellePostBattle, MSGBOX_DEFAULT
# 33 "data/maps/MtPyre_3F/scripts.pory"
# 22 "data/maps/MtPyre_3F/scripts.pory"
# 34 "data/maps/MtPyre_3F/scripts.pory"
	release
# 35 "data/maps/MtPyre_3F/scripts.pory"
	end
# 36 "data/maps/MtPyre_3F/scripts.pory"

# 37 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_Gabrielle_2:
# 38 "data/maps/MtPyre_3F/scripts.pory"
# 19 "data/maps/MtPyre_3F/scripts.pory"
# 39 "data/maps/MtPyre_3F/scripts.pory"
	goto MtPyre_3F_EventScript_RematchGabrielle
# 40 "data/maps/MtPyre_3F/scripts.pory"
	goto MtPyre_3F_EventScript_Gabrielle_1
# 41 "data/maps/MtPyre_3F/scripts.pory"

# 42 "data/maps/MtPyre_3F/scripts.pory"

# 43 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_RegisterGabrielle::
# 44 "data/maps/MtPyre_3F/scripts.pory"
# 27 "data/maps/MtPyre_3F/scripts.pory"
# 45 "data/maps/MtPyre_3F/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 46 "data/maps/MtPyre_3F/scripts.pory"
# 28 "data/maps/MtPyre_3F/scripts.pory"
# 47 "data/maps/MtPyre_3F/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtPyre_3F/scripts.pory"
# 29 "data/maps/MtPyre_3F/scripts.pory"
# 49 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabrielleRegister, MSGBOX_DEFAULT
# 50 "data/maps/MtPyre_3F/scripts.pory"
# 30 "data/maps/MtPyre_3F/scripts.pory"
# 51 "data/maps/MtPyre_3F/scripts.pory"
	register_matchcall TRAINER_GABRIELLE_1
# 52 "data/maps/MtPyre_3F/scripts.pory"
# 31 "data/maps/MtPyre_3F/scripts.pory"
# 53 "data/maps/MtPyre_3F/scripts.pory"
	release
# 54 "data/maps/MtPyre_3F/scripts.pory"
	end
# 55 "data/maps/MtPyre_3F/scripts.pory"

# 56 "data/maps/MtPyre_3F/scripts.pory"

# 57 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_EventScript_RematchGabrielle::
# 58 "data/maps/MtPyre_3F/scripts.pory"
# 36 "data/maps/MtPyre_3F/scripts.pory"
# 59 "data/maps/MtPyre_3F/scripts.pory"
	trainerbattle_rematch TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleRematchIntro, MtPyre_3F_Text_GabrielleRematchDefeat
# 60 "data/maps/MtPyre_3F/scripts.pory"
# 37 "data/maps/MtPyre_3F/scripts.pory"
# 61 "data/maps/MtPyre_3F/scripts.pory"
	msgbox MtPyre_3F_Text_GabriellePostRematch, MSGBOX_AUTOCLOSE
# 62 "data/maps/MtPyre_3F/scripts.pory"
	end
# 63 "data/maps/MtPyre_3F/scripts.pory"

# 64 "data/maps/MtPyre_3F/scripts.pory"

# 65 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamIntro::
# 66 "data/maps/MtPyre_3F/scripts.pory"
# 41 "data/maps/MtPyre_3F/scripts.pory"
# 67 "data/maps/MtPyre_3F/scripts.pory"
	.string "The rich atmosphere of the mountain\n"
# 68 "data/maps/MtPyre_3F/scripts.pory"
	.string "has elevated my psychic power!\p"
# 69 "data/maps/MtPyre_3F/scripts.pory"
	.string "A mere child like you…\n"
# 70 "data/maps/MtPyre_3F/scripts.pory"
	.string "You dream of winning?$"
# 71 "data/maps/MtPyre_3F/scripts.pory"

# 72 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamDefeat::
# 73 "data/maps/MtPyre_3F/scripts.pory"
# 48 "data/maps/MtPyre_3F/scripts.pory"
# 74 "data/maps/MtPyre_3F/scripts.pory"
	.string "I drown in self-pity…$"
# 75 "data/maps/MtPyre_3F/scripts.pory"

# 76 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_WilliamPostBattle::
# 77 "data/maps/MtPyre_3F/scripts.pory"
# 52 "data/maps/MtPyre_3F/scripts.pory"
# 78 "data/maps/MtPyre_3F/scripts.pory"
	.string "My psychic powers have surely\n"
# 79 "data/maps/MtPyre_3F/scripts.pory"
	.string "grown several times, but…$"
# 80 "data/maps/MtPyre_3F/scripts.pory"

# 81 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaIntro::
# 82 "data/maps/MtPyre_3F/scripts.pory"
# 57 "data/maps/MtPyre_3F/scripts.pory"
# 83 "data/maps/MtPyre_3F/scripts.pory"
	.string "Ahahahaha!\p"
# 84 "data/maps/MtPyre_3F/scripts.pory"
	.string "This is no place for children, least\n"
# 85 "data/maps/MtPyre_3F/scripts.pory"
	.string "of all you!$"
# 86 "data/maps/MtPyre_3F/scripts.pory"

# 87 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaDefeat::
# 88 "data/maps/MtPyre_3F/scripts.pory"
# 63 "data/maps/MtPyre_3F/scripts.pory"
# 89 "data/maps/MtPyre_3F/scripts.pory"
	.string "I lost that cleanly…$"
# 90 "data/maps/MtPyre_3F/scripts.pory"

# 91 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_KaylaPostBattle::
# 92 "data/maps/MtPyre_3F/scripts.pory"
# 67 "data/maps/MtPyre_3F/scripts.pory"
# 93 "data/maps/MtPyre_3F/scripts.pory"
	.string "This means my training is still not\n"
# 94 "data/maps/MtPyre_3F/scripts.pory"
	.string "enough…\p"
# 95 "data/maps/MtPyre_3F/scripts.pory"
	.string "I've got to keep working toward the\n"
# 96 "data/maps/MtPyre_3F/scripts.pory"
	.string "summit…\p"
# 97 "data/maps/MtPyre_3F/scripts.pory"
	.string "Go, me!$"
# 98 "data/maps/MtPyre_3F/scripts.pory"

# 99 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleIntro::
# 100 "data/maps/MtPyre_3F/scripts.pory"
# 75 "data/maps/MtPyre_3F/scripts.pory"
# 101 "data/maps/MtPyre_3F/scripts.pory"
	.string "Why have you come here?$"
# 102 "data/maps/MtPyre_3F/scripts.pory"

# 103 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleDefeat::
# 104 "data/maps/MtPyre_3F/scripts.pory"
# 79 "data/maps/MtPyre_3F/scripts.pory"
# 105 "data/maps/MtPyre_3F/scripts.pory"
	.string "That was amazing!\n"
# 106 "data/maps/MtPyre_3F/scripts.pory"
	.string "You're a very special TRAINER.$"
# 107 "data/maps/MtPyre_3F/scripts.pory"

# 108 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabriellePostBattle::
# 109 "data/maps/MtPyre_3F/scripts.pory"
# 84 "data/maps/MtPyre_3F/scripts.pory"
# 110 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON no longer of this world.\n"
# 111 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON that are with you now.\p"
# 112 "data/maps/MtPyre_3F/scripts.pory"
	.string "And the POKéMON that you will meet\n"
# 113 "data/maps/MtPyre_3F/scripts.pory"
	.string "in the future…\p"
# 114 "data/maps/MtPyre_3F/scripts.pory"
	.string "They are all to be equally cherished.\n"
# 115 "data/maps/MtPyre_3F/scripts.pory"
	.string "Please remember that.$"
# 116 "data/maps/MtPyre_3F/scripts.pory"

# 117 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRegister::
# 118 "data/maps/MtPyre_3F/scripts.pory"
# 93 "data/maps/MtPyre_3F/scripts.pory"
# 119 "data/maps/MtPyre_3F/scripts.pory"
	.string "I would like to see your POKéMON\n"
# 120 "data/maps/MtPyre_3F/scripts.pory"
	.string "when they grow up some more…\p"
# 121 "data/maps/MtPyre_3F/scripts.pory"
	.string "Please, I need to see your POKéNAV.$"
# 122 "data/maps/MtPyre_3F/scripts.pory"

# 123 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRematchIntro::
# 124 "data/maps/MtPyre_3F/scripts.pory"
# 99 "data/maps/MtPyre_3F/scripts.pory"
# 125 "data/maps/MtPyre_3F/scripts.pory"
	.string "Oh, it's you…\p"
# 126 "data/maps/MtPyre_3F/scripts.pory"
	.string "Have you come to show me your grown\n"
# 127 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON?$"
# 128 "data/maps/MtPyre_3F/scripts.pory"

# 129 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabrielleRematchDefeat::
# 130 "data/maps/MtPyre_3F/scripts.pory"
# 105 "data/maps/MtPyre_3F/scripts.pory"
# 131 "data/maps/MtPyre_3F/scripts.pory"
	.string "How amazing!\n"
# 132 "data/maps/MtPyre_3F/scripts.pory"
	.string "You are a special person.$"
# 133 "data/maps/MtPyre_3F/scripts.pory"

# 134 "data/maps/MtPyre_3F/scripts.pory"
MtPyre_3F_Text_GabriellePostRematch::
# 135 "data/maps/MtPyre_3F/scripts.pory"
# 110 "data/maps/MtPyre_3F/scripts.pory"
# 136 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON no longer of this world.\n"
# 137 "data/maps/MtPyre_3F/scripts.pory"
	.string "POKéMON that are with you now.\p"
# 138 "data/maps/MtPyre_3F/scripts.pory"
	.string "And the POKéMON that you will meet\n"
# 139 "data/maps/MtPyre_3F/scripts.pory"
	.string "in the future…\p"
# 140 "data/maps/MtPyre_3F/scripts.pory"
	.string "They are all to be equally cherished.\n"
# 141 "data/maps/MtPyre_3F/scripts.pory"
	.string "I see that you've remembered that.$"
